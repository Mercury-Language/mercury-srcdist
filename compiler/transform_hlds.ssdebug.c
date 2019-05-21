/*
** Automatically generated from `ssdebug.m'
** by the Mercury compiler,
** version rotd-2017-08-05
** configured for x86_64-apple-darwin13.4.0.
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


/* :- module transform_hlds.ssdebug. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__ssdebug__init
ENDINIT
*/

#include "transform_hlds.ssdebug.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.purity.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s {
  MR_Word transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16;
  MR_bool transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded;
  MR_Word transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_32;
  jmp_buf transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__commit_0;
  MR_Word transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_47;
  MR_Box transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv0_Mode_47;
  MR_Word transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_59;
  jmp_buf transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__commit_1;
  MR_Word transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_74;
  MR_Box transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv1_Mode_74;
};


static const MR_FA_TypeInfo_Struct1 transform_hlds__ssdebug__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ssdebug__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ssdebug__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__ssdebug__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static MR_bool MR_CALL 
transform_hlds__ssdebug__IntroducedFrom__pred__make_var_value__1437__1_2_p_0(
  MR_Word transform_hlds__ssdebug__PolySpecs_45,
  MR_Word transform_hlds__ssdebug__HeadVar__2_85);

static MR_bool MR_CALL 
transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__1052__1_3_f_0(
  MR_Word transform_hlds__ssdebug__ModuleInfo_5,
  MR_Word transform_hlds__ssdebug__LambdaHeadVar__1_12,
  MR_Word transform_hlds__ssdebug__LambdaHeadVar__2_13,
  MR_Word * transform_hlds__ssdebug__LambdaHeadVar__3_14);

static void MR_CALL 
transform_hlds__ssdebug____Compare____proxy_map_0_0(
  MR_Word * transform_hlds__ssdebug__HeadVar__1_1,
  MR_Word transform_hlds__ssdebug__HeadVar__2_2,
  MR_Word transform_hlds__ssdebug__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ssdebug____Unify____proxy_map_0_0(
  MR_Word transform_hlds__ssdebug__HeadVar__1_1,
  MR_Word transform_hlds__ssdebug__HeadVar__2_2);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_1(
  void * transform_hlds__ssdebug__env_ptr_arg);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_3(
  void * transform_hlds__ssdebug__env_ptr_arg);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_2(
  void * transform_hlds__ssdebug__env_ptr_arg);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_4(
  void * transform_hlds__ssdebug__env_ptr_arg);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_5(
  void * transform_hlds__ssdebug__env_ptr_arg);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_7(
  void * transform_hlds__ssdebug__env_ptr_arg);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_6(
  void * transform_hlds__ssdebug__env_ptr_arg);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_8(
  void * transform_hlds__ssdebug__env_ptr_arg);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0(
  MR_Word transform_hlds__ssdebug__SSTraceLevel_7,
  MR_Word transform_hlds__ssdebug__PredProcId_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_erroneous_7_p_0(
  MR_Word transform_hlds__ssdebug__SSTraceLevel_8,
  MR_Word transform_hlds__ssdebug__PredId_9,
  MR_Integer transform_hlds__ssdebug__ProcId_10,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_30,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_31,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_33);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_failure_7_p_0(
  MR_Word transform_hlds__ssdebug__SSTraceLevel_8,
  MR_Word transform_hlds__ssdebug__PredId_9,
  MR_Integer transform_hlds__ssdebug__ProcId_10,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_38,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_39,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_41);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_nondet_7_p_0(
  MR_Word transform_hlds__ssdebug__SSTraceLevel_8,
  MR_Word transform_hlds__ssdebug__PredId_9,
  MR_Integer transform_hlds__ssdebug__ProcId_10,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_51,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_52,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_53,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_54);

static MR_Word MR_CALL 
transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0(
  MR_Word transform_hlds__ssdebug__Detism_3);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_semi_7_p_0(
  MR_Word transform_hlds__ssdebug__SSTraceLevel_8,
  MR_Word transform_hlds__ssdebug__PredId_9,
  MR_Integer transform_hlds__ssdebug__ProcId_10,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_62,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_63,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_64,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_65);

static MR_Word MR_CALL 
transform_hlds__ssdebug__impure_goal_info_1_f_0(
  MR_Word transform_hlds__ssdebug__Detism_3);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_det_7_p_0(
  MR_Word transform_hlds__ssdebug__SSTraceLevel_8,
  MR_Word transform_hlds__ssdebug__PredId_9,
  MR_Integer transform_hlds__ssdebug__ProcId_10,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_47,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_48,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_50);

static void MR_CALL 
transform_hlds__ssdebug__make_arg_list_18_p_0(
  MR_Integer transform_hlds__ssdebug__HeadVar__1_1,
  MR_Word transform_hlds__ssdebug__HeadVar__2_2,
  MR_Word transform_hlds__ssdebug__HeadVar__3_3,
  MR_Word transform_hlds__ssdebug__HeadVar__4_4,
  MR_Word * transform_hlds__ssdebug__OutVar_5,
  MR_Word * transform_hlds__ssdebug__HeadVar__6_6,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_9,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_10,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_11,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_12,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_13,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_14,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_15,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_16,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_0_17,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_18);

static MR_bool MR_CALL 
transform_hlds__ssdebug__make_var_value_18_p_0_1(
  MR_Box transform_hlds__ssdebug__closure_arg);

static void MR_CALL 
transform_hlds__ssdebug__make_var_value_18_p_0(
  MR_Word transform_hlds__ssdebug__InstMap_19,
  MR_Word transform_hlds__ssdebug__VarToInspect_20,
  MR_Word transform_hlds__ssdebug__Renaming_21,
  MR_Word * transform_hlds__ssdebug__VarDesc_22,
  MR_Integer transform_hlds__ssdebug__VarPos_23,
  MR_Word * transform_hlds__ssdebug__Goals_24,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_50,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_51,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_52,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_53,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_54,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_55,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_56,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_57,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_58,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_59,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_0_60,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_61);

static MR_Word MR_CALL 
transform_hlds__ssdebug__list_var_value_type_0_f_0(void);

static void MR_CALL 
transform_hlds__ssdebug__make_level_construction_7_p_0(
  MR_Word transform_hlds__ssdebug__SSTraceLevel_8,
  MR_Word * transform_hlds__ssdebug__Goal_9,
  MR_Word * transform_hlds__ssdebug__LevelVar_10,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_14,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_15,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_16,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_17);

static void MR_CALL 
transform_hlds__ssdebug__make_proc_id_construction_8_p_0(
  MR_Word transform_hlds__ssdebug__ModuleInfo_9,
  MR_Word transform_hlds__ssdebug__PredInfo_10,
  MR_Word * transform_hlds__ssdebug__Goals_11,
  MR_Word * transform_hlds__ssdebug__ProcIdVar_12,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_31,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_32,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_33,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_34);

static void MR_CALL 
transform_hlds__ssdebug__make_handle_event_9_p_0(
  MR_String transform_hlds__ssdebug__HandleTypeString_10,
  MR_Word transform_hlds__ssdebug__Arguments_11,
  MR_Word * transform_hlds__ssdebug__HandleEventGoal_12,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_20,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_21,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_22,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_23,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_24);

static void MR_CALL 
transform_hlds__ssdebug__commit_goal_changes_10_p_0(
  MR_Word transform_hlds__ssdebug__ConjGoals_11,
  MR_Word transform_hlds__ssdebug__PredId_12,
  MR_Integer transform_hlds__ssdebug__ProcId_13,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_28,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_29,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_30,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_32,
  MR_Word transform_hlds__ssdebug__VarSet_17,
  MR_Word transform_hlds__ssdebug__VarTypes_18);

static void MR_CALL 
transform_hlds__ssdebug__make_switch_goal_4_p_0(
  MR_Word transform_hlds__ssdebug__SwitchVar_5,
  MR_Word transform_hlds__ssdebug__DoRetryGoal_6,
  MR_Word transform_hlds__ssdebug__DoNotRetryGoal_7,
  MR_Word * transform_hlds__ssdebug__SwitchGoal_8);

static void MR_CALL 
transform_hlds__ssdebug__make_recursive_call_6_p_0(
  MR_Word transform_hlds__ssdebug__PredInfo_7,
  MR_Word transform_hlds__ssdebug__ModuleInfo_8,
  MR_Word transform_hlds__ssdebug__PredId_9,
  MR_Integer transform_hlds__ssdebug__ProcId_10,
  MR_Word transform_hlds__ssdebug__HeadVars_11,
  MR_Word * transform_hlds__ssdebug__Goal_12);

static void MR_CALL 
transform_hlds__ssdebug__make_retry_var_6_p_0(
  MR_String transform_hlds__ssdebug__VarName_7,
  MR_Word * transform_hlds__ssdebug__RetryVar_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_14,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_15,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_16,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_17);

static void MR_CALL 
transform_hlds__ssdebug__add_promise_equivalent_solutions_3_p_0(
  MR_Word transform_hlds__ssdebug__OutputVars_4,
  MR_Word transform_hlds__ssdebug__Goal0_5,
  MR_Word * transform_hlds__ssdebug__Goal_6);

static void MR_CALL 
transform_hlds__ssdebug__rename_outputs_9_p_0(
  MR_Word transform_hlds__ssdebug__OutputVars_10,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_22,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_Goal_23,
  MR_Word * transform_hlds__ssdebug__UnifyGoal_12,
  MR_Word * transform_hlds__ssdebug__Renaming_13,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_24,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_25,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_26,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_27);

static MR_bool MR_CALL 
transform_hlds__ssdebug__get_output_args_4_p_0_1(
  MR_Box transform_hlds__ssdebug__closure_arg,
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3);

static void MR_CALL 
transform_hlds__ssdebug__get_output_args_4_p_0(
  MR_Word transform_hlds__ssdebug__ModuleInfo_5,
  MR_Word transform_hlds__ssdebug__HeadVars_6,
  MR_Word transform_hlds__ssdebug__ArgModes_7,
  MR_Word * transform_hlds__ssdebug__OutputVars_8);

static void MR_CALL 
transform_hlds__ssdebug__get_stripped_headvars_5_p_0(
  MR_Word transform_hlds__ssdebug__PredInfo_6,
  MR_Word transform_hlds__ssdebug__ProcInfo_7,
  MR_Word * transform_hlds__ssdebug__FullHeadVars_8,
  MR_Word * transform_hlds__ssdebug__HeadVars_9,
  MR_Word * transform_hlds__ssdebug__ArgModes_10);

static void MR_CALL 
transform_hlds__ssdebug__create_proxy_proc_6_p_0(
  MR_Word transform_hlds__ssdebug__PredId_7,
  MR_Integer transform_hlds__ssdebug__ProcId_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_20,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_21,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_23);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_case_8_p_0(
  MR_Word transform_hlds__ssdebug__Case0_9,
  MR_Word * transform_hlds__ssdebug__Case_10,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_18,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_19,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_20,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_21,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_23);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_proc_6_p_0(
  MR_Word transform_hlds__ssdebug__PredId_7,
  MR_Integer transform_hlds__ssdebug__ProcId_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_15,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_16,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_18);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_3(
  MR_Box transform_hlds__ssdebug__closure_arg,
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box transform_hlds__ssdebug__wrapper_arg_3,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_4,
  MR_Box transform_hlds__ssdebug__wrapper_arg_5,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_6,
  MR_Box transform_hlds__ssdebug__wrapper_arg_7,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_8);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_2(
  MR_Box transform_hlds__ssdebug__closure_arg,
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box transform_hlds__ssdebug__wrapper_arg_3,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_4,
  MR_Box transform_hlds__ssdebug__wrapper_arg_5,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_6,
  MR_Box transform_hlds__ssdebug__wrapper_arg_7,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_8);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_1(
  MR_Box transform_hlds__ssdebug__closure_arg,
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box transform_hlds__ssdebug__wrapper_arg_3,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_4,
  MR_Box transform_hlds__ssdebug__wrapper_arg_5,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_6,
  MR_Box transform_hlds__ssdebug__wrapper_arg_7,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_8);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_76,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_Goal_77,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83);

static void MR_CALL 
transform_hlds__ssdebug__insert_context_update_call_5_p_0(
  MR_Word transform_hlds__ssdebug__ModuleInfo_6,
  MR_Word transform_hlds__ssdebug__Goal0_7,
  MR_Word * transform_hlds__ssdebug__Goal_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_25,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_26);

static void MR_CALL 
transform_hlds__ssdebug__lookup_proxy_pred_6_p_0_1(
  MR_Box transform_hlds__ssdebug__closure_arg,
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3,
  MR_Box transform_hlds__ssdebug__wrapper_arg_4,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_5);

static void MR_CALL 
transform_hlds__ssdebug__lookup_proxy_pred_6_p_0(
  MR_Word transform_hlds__ssdebug__PredId_7,
  MR_Word * transform_hlds__ssdebug__MaybeNewPredId_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_15,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_16,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_18);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_pred_5_p_0_1(
  MR_Box transform_hlds__ssdebug__closure_arg,
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3,
  MR_Box transform_hlds__ssdebug__wrapper_arg_4,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_5);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_pred_5_p_0(
  MR_Word transform_hlds__ssdebug__PredId_6,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_11,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_12,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_14);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_5_p_0_3(
  MR_Box transform_hlds__ssdebug__closure_arg,
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3,
  MR_Box transform_hlds__ssdebug__wrapper_arg_4,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_5);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_5_p_0_2(
  MR_Box transform_hlds__ssdebug__closure_arg,
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3,
  MR_Box transform_hlds__ssdebug__wrapper_arg_4,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_5);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_5_p_0_1(
  MR_Box transform_hlds__ssdebug__closure_arg,
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3,
  MR_Box transform_hlds__ssdebug__wrapper_arg_4,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_5);

static MR_bool MR_CALL 
transform_hlds__ssdebug____Unify____proxy_map_0_0_10001(
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box transform_hlds__ssdebug__wrapper_arg_2);

static void MR_CALL 
transform_hlds__ssdebug____Compare____proxy_map_0_0_10001(
  MR_Box * transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box transform_hlds__ssdebug__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_2[5][3];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_3[1][8];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_4[3][9];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_5[8][1];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_6[2][11];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_7[1][7];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_8[1][5];




static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__ssdebug_scalar_common_5[7])),
    ((MR_Box) ((MR_String) "[|]"))
  },
};

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__ssdebug_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__ssdebug_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__ssdebug__ssdebug_transform_module_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__ssdebug_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__ssdebug_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__ssdebug_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_4[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_ssdb_trace_level_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_5[8][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "FileName"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "LineNumber"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "ModuleName"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "PredName"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "Level"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "VarName"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "VarPos"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "list"))
  },
};

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_6[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ssdebug__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&transform_hlds__ssdebug__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_8[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ssdebug__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__ssdebug__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__ssdebug__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__ssdebug__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ssdebug__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ssdebug__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__ssdebug__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &transform_hlds__ssdebug__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__ssdebug__transform_hlds__ssdebug__type_ctor_info_proxy_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ssdebug____Unify____proxy_map_0_0_10001)),
  ((MR_Box) (transform_hlds__ssdebug____Compare____proxy_map_0_0_10001)),
  (MR_String) "transform_hlds.ssdebug",
  (MR_String) "proxy_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__ssdebug__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
transform_hlds__ssdebug__IntroducedFrom__pred__make_var_value__1437__1_2_p_0(
  MR_Word transform_hlds__ssdebug__PolySpecs_45,
  MR_Word transform_hlds__ssdebug__HeadVar__2_85)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;

    transform_hlds__ssdebug__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ssdebug_scalar_common_1[2], ((MR_Box) (transform_hlds__ssdebug__PolySpecs_45)), ((MR_Box) (transform_hlds__ssdebug__HeadVar__2_85)));
    return transform_hlds__ssdebug__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__1052__1_3_f_0(
  MR_Word transform_hlds__ssdebug__ModuleInfo_5,
  MR_Word transform_hlds__ssdebug__LambdaHeadVar__1_12,
  MR_Word transform_hlds__ssdebug__LambdaHeadVar__2_13,
  MR_Word * transform_hlds__ssdebug__LambdaHeadVar__3_14)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;

    transform_hlds__ssdebug__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(transform_hlds__ssdebug__ModuleInfo_5, transform_hlds__ssdebug__LambdaHeadVar__2_13);
    if (transform_hlds__ssdebug__succeeded)
    {
      *transform_hlds__ssdebug__LambdaHeadVar__3_14 = transform_hlds__ssdebug__LambdaHeadVar__1_12;
      transform_hlds__ssdebug__succeeded = MR_TRUE;
    }
    return transform_hlds__ssdebug__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ssdebug____Compare____proxy_map_0_0(
  MR_Word * transform_hlds__ssdebug__HeadVar__1_1,
  MR_Word transform_hlds__ssdebug__HeadVar__2_2,
  MR_Word transform_hlds__ssdebug__HeadVar__3_3)
{
  {
    MR_Word transform_hlds__ssdebug__Cast_HeadVar1_4 = transform_hlds__ssdebug__HeadVar__2_2;
    MR_Word transform_hlds__ssdebug__Cast_HeadVar2_5 = transform_hlds__ssdebug__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ssdebug_scalar_common_2[0], transform_hlds__ssdebug__HeadVar__1_1, ((MR_Box) (transform_hlds__ssdebug__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__ssdebug__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__ssdebug____Unify____proxy_map_0_0(
  MR_Word transform_hlds__ssdebug__HeadVar__1_1,
  MR_Word transform_hlds__ssdebug__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__Cast_HeadVar1_3 = transform_hlds__ssdebug__HeadVar__1_1;
    MR_Word transform_hlds__ssdebug__Cast_HeadVar2_4 = transform_hlds__ssdebug__HeadVar__2_2;

    transform_hlds__ssdebug__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ssdebug_scalar_common_2[0], ((MR_Box) (transform_hlds__ssdebug__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__ssdebug__Cast_HeadVar2_4)));
    return transform_hlds__ssdebug__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_1(
  void * transform_hlds__ssdebug__env_ptr_arg)
{
  {
    struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * transform_hlds__ssdebug__env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) transform_hlds__ssdebug__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_3(
  void * transform_hlds__ssdebug__env_ptr_arg)
{
  {
    struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * transform_hlds__ssdebug__env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) transform_hlds__ssdebug__env_ptr_arg;

    (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_47 = ((MR_Word) (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv0_Mode_47);
    transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_2(transform_hlds__ssdebug__env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_2(
  void * transform_hlds__ssdebug__env_ptr_arg)
{
  {
    struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * transform_hlds__ssdebug__env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) transform_hlds__ssdebug__env_ptr_arg;

    (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_47);
    if (!((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded))
      (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_47);
    (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = !((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded);
    if ((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded)
      transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_1(transform_hlds__ssdebug__env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_4(
  void * transform_hlds__ssdebug__env_ptr_arg)
{
  {
    struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * transform_hlds__ssdebug__env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) transform_hlds__ssdebug__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, &(transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv0_Mode_47, (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_32, transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_3, transform_hlds__ssdebug__env_ptr);
        }
        (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_5(
  void * transform_hlds__ssdebug__env_ptr_arg)
{
  {
    struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * transform_hlds__ssdebug__env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) transform_hlds__ssdebug__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_7(
  void * transform_hlds__ssdebug__env_ptr_arg)
{
  {
    struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * transform_hlds__ssdebug__env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) transform_hlds__ssdebug__env_ptr_arg;

    (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_74 = ((MR_Word) (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv1_Mode_74);
    transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_6(transform_hlds__ssdebug__env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_6(
  void * transform_hlds__ssdebug__env_ptr_arg)
{
  {
    struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * transform_hlds__ssdebug__env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) transform_hlds__ssdebug__env_ptr_arg;

    (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_74);
    if (!((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded))
      (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_74);
    (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = !((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded);
    if ((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded)
      transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_5(transform_hlds__ssdebug__env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_8(
  void * transform_hlds__ssdebug__env_ptr_arg)
{
  {
    struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * transform_hlds__ssdebug__env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) transform_hlds__ssdebug__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__commit_1) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, &(transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv1_Mode_74, (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_59, transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_7, transform_hlds__ssdebug__env_ptr);
        }
        (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0(
  MR_Word transform_hlds__ssdebug__SSTraceLevel_7,
  MR_Word transform_hlds__ssdebug__PredProcId_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17)
{
  {
    struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s transform_hlds__ssdebug__env;

    (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_16;
    switch (transform_hlds__ssdebug__SSTraceLevel_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__ssdebug__PredId_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__PredProcId_8, (MR_Integer) 0)));
          MR_Integer transform_hlds__ssdebug__ProcId_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__PredProcId_8, (MR_Integer) 1)));

          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, &(transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_32);
          transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_4(&transform_hlds__ssdebug__env);
          (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = !((transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded);
          if ((transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded)
          {
            MR_Word transform_hlds__ssdebug__Determinism_33;

            hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, &transform_hlds__ssdebug__Determinism_33);
            switch (transform_hlds__ssdebug__Determinism_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 4:
              case (MR_Integer) 0:
                transform_hlds__ssdebug__ssdebug_process_proc_det_7_p_0(transform_hlds__ssdebug__SSTraceLevel_7, transform_hlds__ssdebug__PredId_30, transform_hlds__ssdebug__ProcId_31, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
                break;
              case (MR_Integer) 5:
              case (MR_Integer) 1:
                transform_hlds__ssdebug__ssdebug_process_proc_semi_7_p_0(transform_hlds__ssdebug__SSTraceLevel_7, transform_hlds__ssdebug__PredId_30, transform_hlds__ssdebug__ProcId_31, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
                break;
              case (MR_Integer) 6:
                transform_hlds__ssdebug__ssdebug_process_proc_erroneous_7_p_0(transform_hlds__ssdebug__SSTraceLevel_7, transform_hlds__ssdebug__PredId_30, transform_hlds__ssdebug__ProcId_31, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
                break;
              case (MR_Integer) 7:
                transform_hlds__ssdebug__ssdebug_process_proc_failure_7_p_0(transform_hlds__ssdebug__SSTraceLevel_7, transform_hlds__ssdebug__PredId_30, transform_hlds__ssdebug__ProcId_31, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                transform_hlds__ssdebug__ssdebug_process_proc_nondet_7_p_0(transform_hlds__ssdebug__SSTraceLevel_7, transform_hlds__ssdebug__PredId_30, transform_hlds__ssdebug__ProcId_31, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
                break;
            }
          }
          else
          {
            *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17 = (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16;
            *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15 = transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15 = transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14;
          *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17 = (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__ssdebug__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__PredProcId_8, (MR_Integer) 0)));
          MR_Word transform_hlds__ssdebug__PredInfo_13;
          MR_Integer transform_hlds__ssdebug___ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__PredProcId_8, (MR_Integer) 1)));

          hlds__hlds_module__module_info_pred_info_3_p_0((transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__PredId_11, &transform_hlds__ssdebug__PredInfo_13);
          (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(transform_hlds__ssdebug__PredInfo_13);
          if ((transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded)
          {
            MR_Word transform_hlds__ssdebug__PredId_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__PredProcId_8, (MR_Integer) 0)));
            MR_Integer transform_hlds__ssdebug__ProcId_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__PredProcId_8, (MR_Integer) 1)));

            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, &(transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_59);
            transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_8(&transform_hlds__ssdebug__env);
            (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = !((transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded);
            if ((transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded)
            {
              MR_Word transform_hlds__ssdebug__Determinism_60;

              hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, &transform_hlds__ssdebug__Determinism_60);
              switch (transform_hlds__ssdebug__Determinism_60) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 4:
                case (MR_Integer) 0:
                  transform_hlds__ssdebug__ssdebug_process_proc_det_7_p_0(transform_hlds__ssdebug__SSTraceLevel_7, transform_hlds__ssdebug__PredId_57, transform_hlds__ssdebug__ProcId_58, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
                  break;
                case (MR_Integer) 5:
                case (MR_Integer) 1:
                  transform_hlds__ssdebug__ssdebug_process_proc_semi_7_p_0(transform_hlds__ssdebug__SSTraceLevel_7, transform_hlds__ssdebug__PredId_57, transform_hlds__ssdebug__ProcId_58, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
                  break;
                case (MR_Integer) 6:
                  transform_hlds__ssdebug__ssdebug_process_proc_erroneous_7_p_0(transform_hlds__ssdebug__SSTraceLevel_7, transform_hlds__ssdebug__PredId_57, transform_hlds__ssdebug__ProcId_58, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
                  break;
                case (MR_Integer) 7:
                  transform_hlds__ssdebug__ssdebug_process_proc_failure_7_p_0(transform_hlds__ssdebug__SSTraceLevel_7, transform_hlds__ssdebug__PredId_57, transform_hlds__ssdebug__ProcId_58, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  transform_hlds__ssdebug__ssdebug_process_proc_nondet_7_p_0(transform_hlds__ssdebug__SSTraceLevel_7, transform_hlds__ssdebug__PredId_57, transform_hlds__ssdebug__ProcId_58, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
                  break;
              }
            }
            else
            {
              *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17 = (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16;
              *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15 = transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14;
            }
          }
          else
          {
            *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17 = (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16;
            *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15 = transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_erroneous_7_p_0(
  MR_Word transform_hlds__ssdebug__SSTraceLevel_8,
  MR_Word transform_hlds__ssdebug__PredId_9,
  MR_Integer transform_hlds__ssdebug__ProcId_10,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_30,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_31,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_33)
{
  {
    MR_Word transform_hlds__ssdebug__TypeInfo_71_71;
    MR_Word transform_hlds__ssdebug__TypeInfo_15_82;
    MR_Word transform_hlds__ssdebug__OrigBodyGoal_16;
    MR_Word transform_hlds__ssdebug___FullHeadVars_17;
    MR_Word transform_hlds__ssdebug__HeadVars_18;
    MR_Word transform_hlds__ssdebug__ProcIdGoals_20;
    MR_Word transform_hlds__ssdebug__ProcIdVar_21;
    MR_Word transform_hlds__ssdebug__InitInstMap_22;
    MR_Word transform_hlds__ssdebug__CallArgListVar_23;
    MR_Word transform_hlds__ssdebug__CallArgListGoals_24;
    MR_Word transform_hlds__ssdebug__ConstructLevelGoal_26;
    MR_Word transform_hlds__ssdebug__LevelVar_27;
    MR_Word transform_hlds__ssdebug__HandleEventCallGoal_28;
    MR_Word transform_hlds__ssdebug__BodyGoals_29;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_34_34;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_35_35;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_36_36;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_37_37;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_38_38;
    MR_Word transform_hlds__ssdebug__Var_40;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_41_41;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_42_42;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_43_43;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_44_44;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_45_45;
    MR_Word transform_hlds__ssdebug__Var_46;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_47_47;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_48_48;
    MR_Word transform_hlds__ssdebug__Var_50;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_51_51;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_52_52;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_53_53;
    MR_Word transform_hlds__ssdebug__Var_54;
    MR_Word transform_hlds__ssdebug__Var_55;
    MR_Word transform_hlds__ssdebug__Var_57;
    MR_Word transform_hlds__ssdebug__Var_58;
    MR_Word transform_hlds__ssdebug__Var_59;
    MR_Word transform_hlds__ssdebug__Var_60;
    MR_Word transform_hlds__ssdebug__Var_62;
    MR_Word transform_hlds__ssdebug__Var_63;
    MR_Word transform_hlds__ssdebug__Var_65;
    MR_Word transform_hlds__ssdebug__Var_66;
    MR_Integer transform_hlds__ssdebug__PredArity_78;
    MR_Word transform_hlds__ssdebug__FullArgModes_79;
    MR_Integer transform_hlds__ssdebug__NumHeadVars_80;
    MR_Integer transform_hlds__ssdebug__NumToDrop_81;
    MR_Word transform_hlds__ssdebug___ArgModes_19;
    MR_Word transform_hlds__ssdebug___BoundVarDescsAtCall_25;

    hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_32, transform_hlds__ssdebug__PredId_9, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_34_34);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_30, &transform_hlds__ssdebug__OrigBodyGoal_16);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_30, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_35_35);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_30, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_36_36);
    transform_hlds__ssdebug__PredArity_78 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_34_34);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_30, &transform_hlds__ssdebug___FullHeadVars_17);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_30, &transform_hlds__ssdebug__FullArgModes_79);
    transform_hlds__ssdebug__TypeInfo_15_82 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
    mercury__list__length_2_p_0(transform_hlds__ssdebug__TypeInfo_15_82, transform_hlds__ssdebug___FullHeadVars_17, &transform_hlds__ssdebug__NumHeadVars_80);
    transform_hlds__ssdebug__NumToDrop_81 = (transform_hlds__ssdebug__NumHeadVars_80 - transform_hlds__ssdebug__PredArity_78);
    mercury__list__det_drop_3_p_0(transform_hlds__ssdebug__TypeInfo_15_82, transform_hlds__ssdebug__NumToDrop_81, transform_hlds__ssdebug___FullHeadVars_17, &transform_hlds__ssdebug__HeadVars_18);
    mercury__list__det_drop_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__ssdebug__NumToDrop_81, transform_hlds__ssdebug__FullArgModes_79, &transform_hlds__ssdebug___ArgModes_19);
    transform_hlds__ssdebug__make_proc_id_construction_8_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_32, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_34_34, &transform_hlds__ssdebug__ProcIdGoals_20, &transform_hlds__ssdebug__ProcIdVar_21, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_35_35, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_37_37, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_36_36, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_38_38);
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_30, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__ssdebug__InitInstMap_22);
    transform_hlds__ssdebug__TypeInfo_71_71 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
    transform_hlds__ssdebug__Var_40 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_71_71, transform_hlds__ssdebug__TypeInfo_71_71);
    transform_hlds__ssdebug__Var_46 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_71_71, transform_hlds__ssdebug__TypeInfo_71_71);
    transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__InitInstMap_22, transform_hlds__ssdebug__HeadVars_18, transform_hlds__ssdebug__Var_40, &transform_hlds__ssdebug__CallArgListVar_23, &transform_hlds__ssdebug__CallArgListGoals_24, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_41_41, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_30, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_42_42, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_34_34, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_43_43, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_37_37, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_44_44, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_38_38, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_45_45, transform_hlds__ssdebug__Var_46, &transform_hlds__ssdebug___BoundVarDescsAtCall_25);
    transform_hlds__ssdebug__make_level_construction_7_p_0(transform_hlds__ssdebug__SSTraceLevel_8, &transform_hlds__ssdebug__ConstructLevelGoal_26, &transform_hlds__ssdebug__LevelVar_27, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_44_44, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_47_47, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_45_45, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_48_48);
    {
      transform_hlds__ssdebug__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_55, 0) = ((MR_Box) (transform_hlds__ssdebug__LevelVar_27));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_54, 0) = ((MR_Box) (transform_hlds__ssdebug__CallArgListVar_23));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_54, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_55));
    }
    {
      transform_hlds__ssdebug__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_50, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_21));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_50, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_54));
    }
    transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_call", transform_hlds__ssdebug__Var_50, &transform_hlds__ssdebug__HandleEventCallGoal_28, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_41_41, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_51_51, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_47_47, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_52_52, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_48_48, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_53_53);
    {
      transform_hlds__ssdebug__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_60, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructLevelGoal_26));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_63, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventCallGoal_28));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_66, 0) = ((MR_Box) (transform_hlds__ssdebug__OrigBodyGoal_16));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_65, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_66));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_62, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_63));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_62, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_65));
    }
    {
      transform_hlds__ssdebug__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_59, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_60));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_59, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_62));
    }
    {
      transform_hlds__ssdebug__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_58, 0) = ((MR_Box) (transform_hlds__ssdebug__CallArgListGoals_24));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_58, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_59));
    }
    {
      transform_hlds__ssdebug__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_57, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdGoals_20));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_57, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_58));
    }
    transform_hlds__ssdebug__BodyGoals_29 = mercury__list__condense_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__ssdebug__Var_57);
    transform_hlds__ssdebug__commit_goal_changes_10_p_0(transform_hlds__ssdebug__BodyGoals_29, transform_hlds__ssdebug__PredId_9, transform_hlds__ssdebug__ProcId_10, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_43_43, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_42_42, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_31, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_51_51, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_33, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_52_52, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_53_53);
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_failure_7_p_0(
  MR_Word transform_hlds__ssdebug__SSTraceLevel_8,
  MR_Word transform_hlds__ssdebug__PredId_9,
  MR_Integer transform_hlds__ssdebug__ProcId_10,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_38,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_39,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_41)
{
  {
    MR_Word transform_hlds__ssdebug__TypeInfo_102_102;
    MR_Word transform_hlds__ssdebug__OrigBodyGoal_16;
    MR_Word transform_hlds__ssdebug__FullHeadVars_17;
    MR_Word transform_hlds__ssdebug__HeadVars_18;
    MR_Word transform_hlds__ssdebug__ProcIdGoals_20;
    MR_Word transform_hlds__ssdebug__ProcIdVar_21;
    MR_Word transform_hlds__ssdebug__InitInstMap_22;
    MR_Word transform_hlds__ssdebug__CallArgListGoals_24;
    MR_Word transform_hlds__ssdebug__ConstructLevelGoal_26;
    MR_Word transform_hlds__ssdebug__LevelVar_27;
    MR_Word transform_hlds__ssdebug__HandleEventCallGoal_28;
    MR_Word transform_hlds__ssdebug__FailArgListVar_29;
    MR_Word transform_hlds__ssdebug__RetryVar_30;
    MR_Word transform_hlds__ssdebug__HandleEventFailGoal_31;
    MR_Word transform_hlds__ssdebug__RecursiveGoal_32;
    MR_Word transform_hlds__ssdebug__SwitchGoal_33;
    MR_Word transform_hlds__ssdebug__ProcDetism_34;
    MR_Word transform_hlds__ssdebug__FailDisjunct_35;
    MR_Word transform_hlds__ssdebug__DisjGoal_36;
    MR_Word transform_hlds__ssdebug__BodyGoals_37;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_42_42;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_43_43;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_44_44;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_45_45;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_46_46;
    MR_Word transform_hlds__ssdebug__Var_48;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_49_49;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_50_50;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_51_51;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_52_52;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_53_53;
    MR_Word transform_hlds__ssdebug__Var_54;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_55_55;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_56_56;
    MR_Word transform_hlds__ssdebug__Var_58;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_59_59;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_60_60;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_61_61;
    MR_Word transform_hlds__ssdebug__Var_62;
    MR_Word transform_hlds__ssdebug__Var_63;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_66_66;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_67_67;
    MR_Word transform_hlds__ssdebug__Var_69;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_70_70;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_71_71;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_72_72;
    MR_Word transform_hlds__ssdebug__Var_73;
    MR_Word transform_hlds__ssdebug__Var_74;
    MR_Word transform_hlds__ssdebug__Var_76;
    MR_Word transform_hlds__ssdebug__Var_77;
    MR_Word transform_hlds__ssdebug__Var_79;
    MR_Word transform_hlds__ssdebug__Var_80;
    MR_Word transform_hlds__ssdebug__Var_82;
    MR_Word transform_hlds__ssdebug__Var_83;
    MR_Word transform_hlds__ssdebug__Var_84;
    MR_Word transform_hlds__ssdebug__Var_85;
    MR_Word transform_hlds__ssdebug__Var_87;
    MR_Word transform_hlds__ssdebug__Var_88;
    MR_Word transform_hlds__ssdebug__Var_89;
    MR_Word transform_hlds__ssdebug__Var_90;
    MR_Word transform_hlds__ssdebug__Var_91;
    MR_Word transform_hlds__ssdebug__Var_93;
    MR_Word transform_hlds__ssdebug__Var_94;
    MR_Word transform_hlds__ssdebug__Var_96;
    MR_Word transform_hlds__ssdebug__Var_97;
    MR_Word transform_hlds__ssdebug___ArgModes_19;
    MR_Word transform_hlds__ssdebug___BoundVarDescsAtCall_25;

    hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_40, transform_hlds__ssdebug__PredId_9, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_42_42);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_38, &transform_hlds__ssdebug__OrigBodyGoal_16);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_38, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_43_43);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_38, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_44_44);
    transform_hlds__ssdebug__get_stripped_headvars_5_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_42_42, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_38, &transform_hlds__ssdebug__FullHeadVars_17, &transform_hlds__ssdebug__HeadVars_18, &transform_hlds__ssdebug___ArgModes_19);
    transform_hlds__ssdebug__make_proc_id_construction_8_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_40, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_42_42, &transform_hlds__ssdebug__ProcIdGoals_20, &transform_hlds__ssdebug__ProcIdVar_21, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_43_43, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_45_45, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_44_44, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_46_46);
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_38, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_40, &transform_hlds__ssdebug__InitInstMap_22);
    transform_hlds__ssdebug__TypeInfo_102_102 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
    transform_hlds__ssdebug__Var_48 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_102_102, transform_hlds__ssdebug__TypeInfo_102_102);
    transform_hlds__ssdebug__Var_54 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_102_102, transform_hlds__ssdebug__TypeInfo_102_102);
    transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__InitInstMap_22, transform_hlds__ssdebug__HeadVars_18, transform_hlds__ssdebug__Var_48, &transform_hlds__ssdebug__FailArgListVar_29, &transform_hlds__ssdebug__CallArgListGoals_24, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_40, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_49_49, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_38, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_50_50, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_42_42, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_51_51, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_45_45, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_52_52, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_46_46, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_53_53, transform_hlds__ssdebug__Var_54, &transform_hlds__ssdebug___BoundVarDescsAtCall_25);
    transform_hlds__ssdebug__make_level_construction_7_p_0(transform_hlds__ssdebug__SSTraceLevel_8, &transform_hlds__ssdebug__ConstructLevelGoal_26, &transform_hlds__ssdebug__LevelVar_27, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_52_52, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_55_55, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_53_53, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_56_56);
    {
      transform_hlds__ssdebug__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_63, 0) = ((MR_Box) (transform_hlds__ssdebug__LevelVar_27));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_62, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListVar_29));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_62, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_63));
    }
    {
      transform_hlds__ssdebug__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_58, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_21));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_58, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_62));
    }
    transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_call", transform_hlds__ssdebug__Var_58, &transform_hlds__ssdebug__HandleEventCallGoal_28, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_49_49, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_59_59, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_55_55, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_60_60, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_56_56, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_61_61);
    transform_hlds__ssdebug__make_retry_var_6_p_0((MR_String) "DoRetry", &transform_hlds__ssdebug__RetryVar_30, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_60_60, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_66_66, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_61_61, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_67_67);
    {
      transform_hlds__ssdebug__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_74, 0) = ((MR_Box) (transform_hlds__ssdebug__RetryVar_30));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_73, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListVar_29));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_73, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_74));
    }
    {
      transform_hlds__ssdebug__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_69, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_21));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_69, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_73));
    }
    transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_fail", transform_hlds__ssdebug__Var_69, &transform_hlds__ssdebug__HandleEventFailGoal_31, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_59_59, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_70_70, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_66_66, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_71_71, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_67_67, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_72_72);
    transform_hlds__ssdebug__make_recursive_call_6_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_51_51, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_70_70, transform_hlds__ssdebug__PredId_9, transform_hlds__ssdebug__ProcId_10, transform_hlds__ssdebug__FullHeadVars_17, &transform_hlds__ssdebug__RecursiveGoal_32);
    transform_hlds__ssdebug__Var_76 = hlds__make_goal__fail_goal_0_f_0();
    transform_hlds__ssdebug__make_switch_goal_4_p_0(transform_hlds__ssdebug__RetryVar_30, transform_hlds__ssdebug__RecursiveGoal_32, transform_hlds__ssdebug__Var_76, &transform_hlds__ssdebug__SwitchGoal_33);
    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__ssdebug__ProcDetism_34);
    {
      transform_hlds__ssdebug__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_80, 0) = ((MR_Box) (transform_hlds__ssdebug__SwitchGoal_33));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_79, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventFailGoal_31));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_79, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_80));
    }
    {
      transform_hlds__ssdebug__Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_77, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_77, 2) = ((MR_Box) (transform_hlds__ssdebug__Var_79));
    }
    transform_hlds__ssdebug__Var_82 = transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0(transform_hlds__ssdebug__ProcDetism_34);
    {
      transform_hlds__ssdebug__FailDisjunct_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__FailDisjunct_35, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_77));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__FailDisjunct_35, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_82));
    }
    {
      transform_hlds__ssdebug__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_85, 0) = ((MR_Box) (transform_hlds__ssdebug__FailDisjunct_35));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_84, 0) = ((MR_Box) (transform_hlds__ssdebug__OrigBodyGoal_16));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_84, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_85));
    }
    {
      transform_hlds__ssdebug__Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_83, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_84));
    }
    transform_hlds__ssdebug__Var_87 = transform_hlds__ssdebug__impure_goal_info_1_f_0(transform_hlds__ssdebug__ProcDetism_34);
    {
      transform_hlds__ssdebug__DisjGoal_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__DisjGoal_36, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_83));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__DisjGoal_36, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_87));
    }
    {
      transform_hlds__ssdebug__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_91, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructLevelGoal_26));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_94, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventCallGoal_28));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_97, 0) = ((MR_Box) (transform_hlds__ssdebug__DisjGoal_36));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_96, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_97));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_93, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_94));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_93, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_96));
    }
    {
      transform_hlds__ssdebug__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_90, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_91));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_90, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_93));
    }
    {
      transform_hlds__ssdebug__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_89, 0) = ((MR_Box) (transform_hlds__ssdebug__CallArgListGoals_24));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_89, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_90));
    }
    {
      transform_hlds__ssdebug__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_88, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdGoals_20));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_88, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_89));
    }
    transform_hlds__ssdebug__BodyGoals_37 = mercury__list__condense_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__ssdebug__Var_88);
    transform_hlds__ssdebug__commit_goal_changes_10_p_0(transform_hlds__ssdebug__BodyGoals_37, transform_hlds__ssdebug__PredId_9, transform_hlds__ssdebug__ProcId_10, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_51_51, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_50_50, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_39, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_70_70, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_41, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_71_71, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_72_72);
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_nondet_7_p_0(
  MR_Word transform_hlds__ssdebug__SSTraceLevel_8,
  MR_Word transform_hlds__ssdebug__PredId_9,
  MR_Integer transform_hlds__ssdebug__ProcId_10,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_51,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_52,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_53,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_54)
{
  {
    MR_Word transform_hlds__ssdebug__TypeInfo_163_163;
    MR_Word transform_hlds__ssdebug__TypeCtorInfo_164_164;
    MR_Word transform_hlds__ssdebug__OrigBodyGoal_16;
    MR_Word transform_hlds__ssdebug__FullHeadVars_17;
    MR_Word transform_hlds__ssdebug__HeadVars_18;
    MR_Word transform_hlds__ssdebug__ProcIdGoals_20;
    MR_Word transform_hlds__ssdebug__ProcIdVar_21;
    MR_Word transform_hlds__ssdebug__InitInstMap_22;
    MR_Word transform_hlds__ssdebug__BoundVarDescsAtCall_25;
    MR_Word transform_hlds__ssdebug__ConstructLevelGoal_26;
    MR_Word transform_hlds__ssdebug__LevelVar_27;
    MR_Word transform_hlds__ssdebug__HandleEventCallGoal_28;
    MR_Word transform_hlds__ssdebug__FinalInstMap_29;
    MR_Word transform_hlds__ssdebug__ExitArgListVar_30;
    MR_Word transform_hlds__ssdebug__ExitArgListGoals_31;
    MR_Word transform_hlds__ssdebug__ProcDetism_33;
    MR_Word transform_hlds__ssdebug__ExitDisjunct_35;
    MR_Word transform_hlds__ssdebug__HandleEventRedoGoal_36;
    MR_Word transform_hlds__ssdebug__RedoDisjunct_37;
    MR_Word transform_hlds__ssdebug__ExitOrRedoGoal_38;
    MR_Word transform_hlds__ssdebug__CallExitRedoDisjunctGoals_39;
    MR_Word transform_hlds__ssdebug__CallExitRedoDisjunct_40;
    MR_Word transform_hlds__ssdebug__FailArgListVar_41;
    MR_Word transform_hlds__ssdebug__FailArgListGoals_42;
    MR_Word transform_hlds__ssdebug__RetryVar_43;
    MR_Word transform_hlds__ssdebug__HandleEventFailGoal_44;
    MR_Word transform_hlds__ssdebug__RecursiveGoal_45;
    MR_Word transform_hlds__ssdebug__SwitchFailPortGoal_46;
    MR_Word transform_hlds__ssdebug__FailDisjunctGoals_47;
    MR_Word transform_hlds__ssdebug__FailDisjunct_48;
    MR_Word transform_hlds__ssdebug__BodyDisj_49;
    MR_Word transform_hlds__ssdebug__BodyGoals_50;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_55_55;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_56_56;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_57_57;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_58_58;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_59_59;
    MR_Word transform_hlds__ssdebug__Var_61;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_62_62;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_63_63;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_64_64;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_65_65;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_66_66;
    MR_Word transform_hlds__ssdebug__Var_67;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_68_68;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_69_69;
    MR_Word transform_hlds__ssdebug__Var_71;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_72_72;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_73_73;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_74_74;
    MR_Word transform_hlds__ssdebug__Var_75;
    MR_Word transform_hlds__ssdebug__Var_76;
    MR_Word transform_hlds__ssdebug__Var_79;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_80_80;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_81_81;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_82_82;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_83_83;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_84_84;
    MR_Word transform_hlds__ssdebug__Var_86;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_87_87;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_88_88;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_89_89;
    MR_Word transform_hlds__ssdebug__Var_90;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_94_94;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_95_95;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_96_96;
    MR_Word transform_hlds__ssdebug__Var_99;
    MR_Word transform_hlds__ssdebug__Var_101;
    MR_Word transform_hlds__ssdebug__Var_102;
    MR_Word transform_hlds__ssdebug__Var_103;
    MR_Word transform_hlds__ssdebug__Var_105;
    MR_Word transform_hlds__ssdebug__Var_107;
    MR_Word transform_hlds__ssdebug__Var_108;
    MR_Word transform_hlds__ssdebug__Var_109;
    MR_Word transform_hlds__ssdebug__Var_111;
    MR_Word transform_hlds__ssdebug__Var_113;
    MR_Word transform_hlds__ssdebug__Var_114;
    MR_Word transform_hlds__ssdebug__Var_115;
    MR_Word transform_hlds__ssdebug__Var_117;
    MR_Word transform_hlds__ssdebug__Var_118;
    MR_Word transform_hlds__ssdebug__Var_120;
    MR_Word transform_hlds__ssdebug__Var_121;
    MR_Word transform_hlds__ssdebug__Var_123;
    MR_Word transform_hlds__ssdebug__Var_124;
    MR_Word transform_hlds__ssdebug__Var_125;
    MR_Word transform_hlds__ssdebug__Var_128;
    MR_Word transform_hlds__ssdebug__Var_130;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_132_132;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_133_133;
    MR_Word transform_hlds__ssdebug__Var_135;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_136_136;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_137_137;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_138_138;
    MR_Word transform_hlds__ssdebug__Var_139;
    MR_Word transform_hlds__ssdebug__Var_140;
    MR_Word transform_hlds__ssdebug__Var_142;
    MR_Word transform_hlds__ssdebug__Var_143;
    MR_Word transform_hlds__ssdebug__Var_144;
    MR_Word transform_hlds__ssdebug__Var_145;
    MR_Word transform_hlds__ssdebug__Var_147;
    MR_Word transform_hlds__ssdebug__Var_148;
    MR_Word transform_hlds__ssdebug__Var_151;
    MR_Word transform_hlds__ssdebug__Var_153;
    MR_Word transform_hlds__ssdebug__Var_154;
    MR_Word transform_hlds__ssdebug__Var_155;
    MR_Word transform_hlds__ssdebug__Var_156;
    MR_Word transform_hlds__ssdebug__Var_158;
    MR_Word transform_hlds__ssdebug__Var_159;
    MR_Word transform_hlds__ssdebug___ArgModes_19;
    MR_Word transform_hlds__ssdebug___BoundVarDescsAtExit_32;

    hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_53, transform_hlds__ssdebug__PredId_9, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_55_55);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_51, &transform_hlds__ssdebug__OrigBodyGoal_16);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_51, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_56_56);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_51, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_57_57);
    transform_hlds__ssdebug__get_stripped_headvars_5_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_55_55, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_51, &transform_hlds__ssdebug__FullHeadVars_17, &transform_hlds__ssdebug__HeadVars_18, &transform_hlds__ssdebug___ArgModes_19);
    transform_hlds__ssdebug__make_proc_id_construction_8_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_53, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_55_55, &transform_hlds__ssdebug__ProcIdGoals_20, &transform_hlds__ssdebug__ProcIdVar_21, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_56_56, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_58_58, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_57_57, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_59_59);
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_51, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_53, &transform_hlds__ssdebug__InitInstMap_22);
    transform_hlds__ssdebug__TypeInfo_163_163 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
    transform_hlds__ssdebug__Var_61 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_163_163, transform_hlds__ssdebug__TypeInfo_163_163);
    transform_hlds__ssdebug__Var_67 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_163_163, transform_hlds__ssdebug__TypeInfo_163_163);
    transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__InitInstMap_22, transform_hlds__ssdebug__HeadVars_18, transform_hlds__ssdebug__Var_61, &transform_hlds__ssdebug__FailArgListVar_41, &transform_hlds__ssdebug__FailArgListGoals_42, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_53, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_62_62, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_51, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_63_63, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_55_55, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_64_64, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_58_58, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_65_65, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_59_59, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_66_66, transform_hlds__ssdebug__Var_67, &transform_hlds__ssdebug__BoundVarDescsAtCall_25);
    transform_hlds__ssdebug__make_level_construction_7_p_0(transform_hlds__ssdebug__SSTraceLevel_8, &transform_hlds__ssdebug__ConstructLevelGoal_26, &transform_hlds__ssdebug__LevelVar_27, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_65_65, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_68_68, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_66_66, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_69_69);
    {
      transform_hlds__ssdebug__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_76, 0) = ((MR_Box) (transform_hlds__ssdebug__LevelVar_27));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_75, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListVar_41));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_75, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_76));
    }
    {
      transform_hlds__ssdebug__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_71, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_21));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_71, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_75));
    }
    transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_call_nondet", transform_hlds__ssdebug__Var_71, &transform_hlds__ssdebug__HandleEventCallGoal_28, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_62_62, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_72_72, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_68_68, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_73_73, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_69_69, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_74_74);
    hlds__goal_util__update_instmap_3_p_0(transform_hlds__ssdebug__OrigBodyGoal_16, transform_hlds__ssdebug__InitInstMap_22, &transform_hlds__ssdebug__FinalInstMap_29);
    transform_hlds__ssdebug__Var_79 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_163_163, transform_hlds__ssdebug__TypeInfo_163_163);
    transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__FinalInstMap_29, transform_hlds__ssdebug__HeadVars_18, transform_hlds__ssdebug__Var_79, &transform_hlds__ssdebug__ExitArgListVar_30, &transform_hlds__ssdebug__ExitArgListGoals_31, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_72_72, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_80_80, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_63_63, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_81_81, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_64_64, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_82_82, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_73_73, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_83_83, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_74_74, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_84_84, transform_hlds__ssdebug__BoundVarDescsAtCall_25, &transform_hlds__ssdebug___BoundVarDescsAtExit_32);
    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_81_81, &transform_hlds__ssdebug__ProcDetism_33);
    {
      transform_hlds__ssdebug__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_90, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitArgListVar_30));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_86, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_21));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_86, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_90));
    }
    transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_exit_nondet", transform_hlds__ssdebug__Var_86, &transform_hlds__ssdebug__ExitDisjunct_35, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_80_80, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_87_87, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_83_83, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_88_88, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_84_84, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_89_89);
    transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_redo_nondet", transform_hlds__ssdebug__Var_86, &transform_hlds__ssdebug__HandleEventRedoGoal_36, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_87_87, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_94_94, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_88_88, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_95_95, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_89_89, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_96_96);
    transform_hlds__ssdebug__Var_103 = hlds__make_goal__fail_goal_0_f_0();
    {
      transform_hlds__ssdebug__Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_102, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_103));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_101, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventRedoGoal_36));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_101, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_102));
    }
    {
      transform_hlds__ssdebug__Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_99, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_99, 2) = ((MR_Box) (transform_hlds__ssdebug__Var_101));
    }
    transform_hlds__ssdebug__Var_105 = transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0((MR_Integer) 7);
    {
      transform_hlds__ssdebug__RedoDisjunct_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__RedoDisjunct_37, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_99));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__RedoDisjunct_37, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_105));
    }
    {
      transform_hlds__ssdebug__Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_109, 0) = ((MR_Box) (transform_hlds__ssdebug__RedoDisjunct_37));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_108, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitDisjunct_35));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_108, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_109));
    }
    {
      transform_hlds__ssdebug__Var_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_107, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_108));
    }
    transform_hlds__ssdebug__Var_111 = transform_hlds__ssdebug__impure_goal_info_1_f_0((MR_Integer) 3);
    {
      transform_hlds__ssdebug__ExitOrRedoGoal_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ExitOrRedoGoal_38, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_107));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ExitOrRedoGoal_38, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_111));
    }
    transform_hlds__ssdebug__TypeCtorInfo_164_164 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      transform_hlds__ssdebug__Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_115, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructLevelGoal_26));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_118, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventCallGoal_28));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_121, 0) = ((MR_Box) (transform_hlds__ssdebug__OrigBodyGoal_16));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_125, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitOrRedoGoal_38));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_124, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_125));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_123, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitArgListGoals_31));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_123, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_124));
    }
    {
      transform_hlds__ssdebug__Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_120, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_121));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_120, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_123));
    }
    {
      transform_hlds__ssdebug__Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_117, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_118));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_117, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_120));
    }
    {
      transform_hlds__ssdebug__Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_114, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_115));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_114, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_117));
    }
    {
      transform_hlds__ssdebug__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_113, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListGoals_42));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_113, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_114));
    }
    transform_hlds__ssdebug__CallExitRedoDisjunctGoals_39 = mercury__list__condense_1_f_0(transform_hlds__ssdebug__TypeCtorInfo_164_164, transform_hlds__ssdebug__Var_113);
    {
      transform_hlds__ssdebug__Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_128, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_128, 2) = ((MR_Box) (transform_hlds__ssdebug__CallExitRedoDisjunctGoals_39));
    }
    transform_hlds__ssdebug__Var_130 = transform_hlds__ssdebug__impure_goal_info_1_f_0(transform_hlds__ssdebug__ProcDetism_33);
    {
      transform_hlds__ssdebug__CallExitRedoDisjunct_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__CallExitRedoDisjunct_40, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_128));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__CallExitRedoDisjunct_40, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_130));
    }
    transform_hlds__ssdebug__make_retry_var_6_p_0((MR_String) "DoRetry", &transform_hlds__ssdebug__RetryVar_43, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_95_95, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_132_132, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_96_96, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_133_133);
    {
      transform_hlds__ssdebug__Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_140, 0) = ((MR_Box) (transform_hlds__ssdebug__RetryVar_43));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_139, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListVar_41));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_139, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_140));
    }
    {
      transform_hlds__ssdebug__Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_135, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_21));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_135, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_139));
    }
    transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_fail_nondet", transform_hlds__ssdebug__Var_135, &transform_hlds__ssdebug__HandleEventFailGoal_44, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_94_94, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_136_136, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_132_132, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_137_137, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_133_133, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_138_138);
    transform_hlds__ssdebug__make_recursive_call_6_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_82_82, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_136_136, transform_hlds__ssdebug__PredId_9, transform_hlds__ssdebug__ProcId_10, transform_hlds__ssdebug__FullHeadVars_17, &transform_hlds__ssdebug__RecursiveGoal_45);
    transform_hlds__ssdebug__Var_142 = hlds__make_goal__fail_goal_0_f_0();
    transform_hlds__ssdebug__make_switch_goal_4_p_0(transform_hlds__ssdebug__RetryVar_43, transform_hlds__ssdebug__RecursiveGoal_45, transform_hlds__ssdebug__Var_142, &transform_hlds__ssdebug__SwitchFailPortGoal_46);
    {
      transform_hlds__ssdebug__Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_145, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventFailGoal_44));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_148, 0) = ((MR_Box) (transform_hlds__ssdebug__SwitchFailPortGoal_46));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_147, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_148));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_144, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_145));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_144, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_147));
    }
    {
      transform_hlds__ssdebug__Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_143, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListGoals_42));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_143, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_144));
    }
    transform_hlds__ssdebug__FailDisjunctGoals_47 = mercury__list__condense_1_f_0(transform_hlds__ssdebug__TypeCtorInfo_164_164, transform_hlds__ssdebug__Var_143);
    {
      transform_hlds__ssdebug__Var_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_151, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_151, 2) = ((MR_Box) (transform_hlds__ssdebug__FailDisjunctGoals_47));
    }
    transform_hlds__ssdebug__Var_153 = transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0(transform_hlds__ssdebug__ProcDetism_33);
    {
      transform_hlds__ssdebug__FailDisjunct_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__FailDisjunct_48, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_151));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__FailDisjunct_48, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_153));
    }
    {
      transform_hlds__ssdebug__Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_156, 0) = ((MR_Box) (transform_hlds__ssdebug__FailDisjunct_48));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_155, 0) = ((MR_Box) (transform_hlds__ssdebug__CallExitRedoDisjunct_40));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_155, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_156));
    }
    {
      transform_hlds__ssdebug__Var_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_154, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_154, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_155));
    }
    transform_hlds__ssdebug__Var_158 = transform_hlds__ssdebug__impure_goal_info_1_f_0(transform_hlds__ssdebug__ProcDetism_33);
    {
      transform_hlds__ssdebug__BodyDisj_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__BodyDisj_49, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_154));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__BodyDisj_49, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_158));
    }
    {
      transform_hlds__ssdebug__Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_159, 0) = ((MR_Box) (transform_hlds__ssdebug__BodyDisj_49));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    transform_hlds__ssdebug__BodyGoals_50 = mercury__list__f_43_43_2_f_0(transform_hlds__ssdebug__TypeCtorInfo_164_164, transform_hlds__ssdebug__ProcIdGoals_20, transform_hlds__ssdebug__Var_159);
    transform_hlds__ssdebug__commit_goal_changes_10_p_0(transform_hlds__ssdebug__BodyGoals_50, transform_hlds__ssdebug__PredId_9, transform_hlds__ssdebug__ProcId_10, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_82_82, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_81_81, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_52, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_136_136, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_54, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_137_137, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_138_138);
  }
}

static MR_Word MR_CALL 
transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0(
  MR_Word transform_hlds__ssdebug__Detism_3)
{
  {
    MR_Word transform_hlds__ssdebug__GoalInfo_4;
    MR_Word transform_hlds__ssdebug__GoalInfo0_5;
    MR_Word transform_hlds__ssdebug__GoalInfo0_9;
    MR_Word transform_hlds__ssdebug__GoalInfo1_10;

    hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__ssdebug__GoalInfo0_9);
    hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__ssdebug__GoalInfo0_9, &transform_hlds__ssdebug__GoalInfo1_10);
    hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__Detism_3, transform_hlds__ssdebug__GoalInfo1_10, &transform_hlds__ssdebug__GoalInfo0_5);
    hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 6, transform_hlds__ssdebug__GoalInfo0_5, &transform_hlds__ssdebug__GoalInfo_4);
    return transform_hlds__ssdebug__GoalInfo_4;
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_semi_7_p_0(
  MR_Word transform_hlds__ssdebug__SSTraceLevel_8,
  MR_Word transform_hlds__ssdebug__PredId_9,
  MR_Integer transform_hlds__ssdebug__ProcId_10,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_62,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_63,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_64,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_65)
{
  {
    MR_Word transform_hlds__ssdebug__TypeInfo_166_166;
    MR_Word transform_hlds__ssdebug__TypeCtorInfo_167_167;
    MR_Word transform_hlds__ssdebug__OrigBodyGoal_16;
    MR_Word transform_hlds__ssdebug__FullHeadVars_17;
    MR_Word transform_hlds__ssdebug__HeadVars_18;
    MR_Word transform_hlds__ssdebug__ArgModes_19;
    MR_Word transform_hlds__ssdebug__ProcIdGoals_20;
    MR_Word transform_hlds__ssdebug__ProcIdVar_21;
    MR_Word transform_hlds__ssdebug__InitInstMap_22;
    MR_Word transform_hlds__ssdebug__CallArgListVar_23;
    MR_Word transform_hlds__ssdebug__CallArgListGoals_24;
    MR_Word transform_hlds__ssdebug__BoundVarDescsAtCall_25;
    MR_Word transform_hlds__ssdebug__ConstructLevelGoal_26;
    MR_Word transform_hlds__ssdebug__LevelVar_27;
    MR_Word transform_hlds__ssdebug__HandleEventCallGoal_28;
    MR_Word transform_hlds__ssdebug__OutputVars_29;
    MR_Word transform_hlds__ssdebug__RenamedBodyGoal_30;
    MR_Word transform_hlds__ssdebug__AssignOutputsGoal_31;
    MR_Word transform_hlds__ssdebug__Renaming_32;
    MR_Word transform_hlds__ssdebug__FinalInstMap_33;
    MR_Word transform_hlds__ssdebug__ExitArgListVar_34;
    MR_Word transform_hlds__ssdebug__ExitArgListGoals_35;
    MR_Word transform_hlds__ssdebug__RetryAVar_37;
    MR_Word transform_hlds__ssdebug__HandleEventExitGoal_38;
    MR_Word transform_hlds__ssdebug__RecursiveGoal_39;
    MR_Word transform_hlds__ssdebug__FailArgListVar_40;
    MR_Word transform_hlds__ssdebug__FailArgListGoals_41;
    MR_Word transform_hlds__ssdebug__RetryBVar_43;
    MR_Word transform_hlds__ssdebug__HandleEventFailGoal_44;
    MR_Word transform_hlds__ssdebug__ProcDetism_45;
    MR_Word transform_hlds__ssdebug__ImpureGoalInfo_46;
    MR_Word transform_hlds__ssdebug__Solns_48;
    MR_Word transform_hlds__ssdebug__CondGoal_49;
    MR_Word transform_hlds__ssdebug__SwitchExitPortGoal_51;
    MR_Word transform_hlds__ssdebug__GoalsThen_52;
    MR_Word transform_hlds__ssdebug__ThenGoal_53;
    MR_Word transform_hlds__ssdebug__SwitchFailPortGoal_54;
    MR_Word transform_hlds__ssdebug__GoalsElse_55;
    MR_Word transform_hlds__ssdebug__ElseGoal_56;
    MR_Word transform_hlds__ssdebug__OrigGoalInfo_58;
    MR_Word transform_hlds__ssdebug__IteGoalInfo_59;
    MR_Word transform_hlds__ssdebug__IteGoal_60;
    MR_Word transform_hlds__ssdebug__BodyGoals_61;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_66_66;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_67_67;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_68_68;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_69_69;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_70_70;
    MR_Word transform_hlds__ssdebug__Var_72;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_73_73;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_74_74;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_75_75;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_76_76;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_77_77;
    MR_Word transform_hlds__ssdebug__Var_78;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_79_79;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_80_80;
    MR_Word transform_hlds__ssdebug__Var_82;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83_83;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_84_84;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_85_85;
    MR_Word transform_hlds__ssdebug__Var_86;
    MR_Word transform_hlds__ssdebug__Var_87;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_89_89;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_90_90;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_92_92;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_93_93;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_94_94;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_95_95;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_96_96;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_98_98;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_99_99;
    MR_Word transform_hlds__ssdebug__Var_101;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_102_102;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_103_103;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_104_104;
    MR_Word transform_hlds__ssdebug__Var_105;
    MR_Word transform_hlds__ssdebug__Var_106;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_110_110;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_111_111;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_112_112;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_113_113;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_114_114;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_116_116;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_117_117;
    MR_Word transform_hlds__ssdebug__Var_119;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_120_120;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_121_121;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_122_122;
    MR_Word transform_hlds__ssdebug__Var_123;
    MR_Word transform_hlds__ssdebug__Var_124;
    MR_Word transform_hlds__ssdebug__Var_129;
    MR_Word transform_hlds__ssdebug__Var_130;
    MR_Word transform_hlds__ssdebug__Var_131;
    MR_Word transform_hlds__ssdebug__Var_133;
    MR_Word transform_hlds__ssdebug__Var_134;
    MR_Word transform_hlds__ssdebug__Var_137;
    MR_Word transform_hlds__ssdebug__Var_139;
    MR_Word transform_hlds__ssdebug__Var_140;
    MR_Word transform_hlds__ssdebug__Var_141;
    MR_Word transform_hlds__ssdebug__Var_142;
    MR_Word transform_hlds__ssdebug__Var_144;
    MR_Word transform_hlds__ssdebug__Var_145;
    MR_Word transform_hlds__ssdebug__Var_148;
    MR_Word transform_hlds__ssdebug__Var_150;
    MR_Word transform_hlds__ssdebug__Var_152;
    MR_Word transform_hlds__ssdebug__Var_153;
    MR_Word transform_hlds__ssdebug__Var_154;
    MR_Word transform_hlds__ssdebug__Var_155;
    MR_Word transform_hlds__ssdebug__Var_157;
    MR_Word transform_hlds__ssdebug__Var_158;
    MR_Word transform_hlds__ssdebug__Var_160;
    MR_Word transform_hlds__ssdebug__Var_161;
    MR_Word transform_hlds__ssdebug___BoundVarDescsAtExit_36;
    MR_Word transform_hlds__ssdebug___BoundVarDescsAtFail_42;
    MR_Word transform_hlds__ssdebug___CanFail_47;
    MR_Word transform_hlds__ssdebug__Var_57;

    hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_64, transform_hlds__ssdebug__PredId_9, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_66_66);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_62, &transform_hlds__ssdebug__OrigBodyGoal_16);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_62, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_67_67);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_62, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_68_68);
    transform_hlds__ssdebug__get_stripped_headvars_5_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_66_66, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_62, &transform_hlds__ssdebug__FullHeadVars_17, &transform_hlds__ssdebug__HeadVars_18, &transform_hlds__ssdebug__ArgModes_19);
    transform_hlds__ssdebug__make_proc_id_construction_8_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_64, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_66_66, &transform_hlds__ssdebug__ProcIdGoals_20, &transform_hlds__ssdebug__ProcIdVar_21, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_67_67, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_69_69, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_68_68, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_70_70);
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_62, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_64, &transform_hlds__ssdebug__InitInstMap_22);
    transform_hlds__ssdebug__TypeInfo_166_166 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
    transform_hlds__ssdebug__Var_72 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_166_166, transform_hlds__ssdebug__TypeInfo_166_166);
    transform_hlds__ssdebug__Var_78 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_166_166, transform_hlds__ssdebug__TypeInfo_166_166);
    transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__InitInstMap_22, transform_hlds__ssdebug__HeadVars_18, transform_hlds__ssdebug__Var_72, &transform_hlds__ssdebug__CallArgListVar_23, &transform_hlds__ssdebug__CallArgListGoals_24, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_64, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_73_73, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_62, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_74_74, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_66_66, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_75_75, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_69_69, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_76_76, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_70_70, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_77_77, transform_hlds__ssdebug__Var_78, &transform_hlds__ssdebug__BoundVarDescsAtCall_25);
    transform_hlds__ssdebug__make_level_construction_7_p_0(transform_hlds__ssdebug__SSTraceLevel_8, &transform_hlds__ssdebug__ConstructLevelGoal_26, &transform_hlds__ssdebug__LevelVar_27, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_76_76, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_79_79, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_77_77, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_80_80);
    {
      transform_hlds__ssdebug__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_87, 0) = ((MR_Box) (transform_hlds__ssdebug__LevelVar_27));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_86, 0) = ((MR_Box) (transform_hlds__ssdebug__CallArgListVar_23));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_86, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_87));
    }
    {
      transform_hlds__ssdebug__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_82, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_21));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_82, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_86));
    }
    transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_call", transform_hlds__ssdebug__Var_82, &transform_hlds__ssdebug__HandleEventCallGoal_28, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_73_73, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83_83, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_79_79, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_84_84, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_80_80, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_85_85);
    transform_hlds__ssdebug__get_output_args_4_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83_83, transform_hlds__ssdebug__HeadVars_18, transform_hlds__ssdebug__ArgModes_19, &transform_hlds__ssdebug__OutputVars_29);
    transform_hlds__ssdebug__rename_outputs_9_p_0(transform_hlds__ssdebug__OutputVars_29, transform_hlds__ssdebug__OrigBodyGoal_16, &transform_hlds__ssdebug__RenamedBodyGoal_30, &transform_hlds__ssdebug__AssignOutputsGoal_31, &transform_hlds__ssdebug__Renaming_32, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_84_84, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_89_89, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_85_85, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_90_90);
    hlds__goal_util__update_instmap_3_p_0(transform_hlds__ssdebug__OrigBodyGoal_16, transform_hlds__ssdebug__InitInstMap_22, &transform_hlds__ssdebug__FinalInstMap_33);
    transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__FinalInstMap_33, transform_hlds__ssdebug__HeadVars_18, transform_hlds__ssdebug__Renaming_32, &transform_hlds__ssdebug__ExitArgListVar_34, &transform_hlds__ssdebug__ExitArgListGoals_35, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83_83, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_92_92, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_74_74, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_93_93, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_75_75, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_94_94, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_89_89, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_95_95, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_90_90, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_96_96, transform_hlds__ssdebug__BoundVarDescsAtCall_25, &transform_hlds__ssdebug___BoundVarDescsAtExit_36);
    transform_hlds__ssdebug__make_retry_var_6_p_0((MR_String) "DoRetryA", &transform_hlds__ssdebug__RetryAVar_37, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_95_95, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_98_98, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_96_96, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_99_99);
    {
      transform_hlds__ssdebug__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_106, 0) = ((MR_Box) (transform_hlds__ssdebug__RetryAVar_37));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_105, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitArgListVar_34));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_105, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_106));
    }
    {
      transform_hlds__ssdebug__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_101, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_21));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_101, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_105));
    }
    transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_exit", transform_hlds__ssdebug__Var_101, &transform_hlds__ssdebug__HandleEventExitGoal_38, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_92_92, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_102_102, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_98_98, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_103_103, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_99_99, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_104_104);
    transform_hlds__ssdebug__make_recursive_call_6_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_94_94, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_102_102, transform_hlds__ssdebug__PredId_9, transform_hlds__ssdebug__ProcId_10, transform_hlds__ssdebug__FullHeadVars_17, &transform_hlds__ssdebug__RecursiveGoal_39);
    transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__InitInstMap_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ssdebug__Renaming_32, &transform_hlds__ssdebug__FailArgListVar_40, &transform_hlds__ssdebug__FailArgListGoals_41, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_102_102, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_110_110, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_93_93, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_111_111, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_94_94, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_112_112, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_103_103, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_113_113, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_104_104, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_114_114, transform_hlds__ssdebug__BoundVarDescsAtCall_25, &transform_hlds__ssdebug___BoundVarDescsAtFail_42);
    transform_hlds__ssdebug__make_retry_var_6_p_0((MR_String) "DoRetryB", &transform_hlds__ssdebug__RetryBVar_43, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_113_113, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_116_116, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_114_114, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_117_117);
    {
      transform_hlds__ssdebug__Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_124, 0) = ((MR_Box) (transform_hlds__ssdebug__RetryBVar_43));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_123, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListVar_40));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_123, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_124));
    }
    {
      transform_hlds__ssdebug__Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_119, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_21));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_119, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_123));
    }
    transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_fail", transform_hlds__ssdebug__Var_119, &transform_hlds__ssdebug__HandleEventFailGoal_44, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_110_110, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_120_120, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_116_116, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_121_121, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_117_117, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_122_122);
    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_111_111, &transform_hlds__ssdebug__ProcDetism_45);
    transform_hlds__ssdebug__ImpureGoalInfo_46 = transform_hlds__ssdebug__impure_goal_info_1_f_0(transform_hlds__ssdebug__ProcDetism_45);
    parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__ssdebug__ProcDetism_45, &transform_hlds__ssdebug___CanFail_47, &transform_hlds__ssdebug__Solns_48);
    switch (transform_hlds__ssdebug__Solns_48) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__ssdebug__RenamedOutputVars_50;

          mercury__map__apply_to_list_3_p_0(transform_hlds__ssdebug__TypeInfo_166_166, transform_hlds__ssdebug__TypeInfo_166_166, transform_hlds__ssdebug__OutputVars_29, transform_hlds__ssdebug__Renaming_32, &transform_hlds__ssdebug__RenamedOutputVars_50);
          transform_hlds__ssdebug__add_promise_equivalent_solutions_3_p_0(transform_hlds__ssdebug__RenamedOutputVars_50, transform_hlds__ssdebug__RenamedBodyGoal_30, &transform_hlds__ssdebug__CondGoal_49);
        }
        break;
      case (MR_Integer) 1:
        transform_hlds__ssdebug__CondGoal_49 = transform_hlds__ssdebug__RenamedBodyGoal_30;
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ssdebug", (MR_String) "predicate \140transform_hlds.ssdebug.ssdebug_process_proc_semi\'/7", (MR_String) "zero solutions");
            return;
          }
        }
        break;
    }
    transform_hlds__ssdebug__make_switch_goal_4_p_0(transform_hlds__ssdebug__RetryAVar_37, transform_hlds__ssdebug__RecursiveGoal_39, transform_hlds__ssdebug__AssignOutputsGoal_31, &transform_hlds__ssdebug__SwitchExitPortGoal_51);
    transform_hlds__ssdebug__TypeCtorInfo_167_167 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      transform_hlds__ssdebug__Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_131, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventExitGoal_38));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_134, 0) = ((MR_Box) (transform_hlds__ssdebug__SwitchExitPortGoal_51));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_133, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_134));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_130, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_131));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_130, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_133));
    }
    {
      transform_hlds__ssdebug__Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_129, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitArgListGoals_35));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_129, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_130));
    }
    transform_hlds__ssdebug__GoalsThen_52 = mercury__list__condense_1_f_0(transform_hlds__ssdebug__TypeCtorInfo_167_167, transform_hlds__ssdebug__Var_129);
    {
      transform_hlds__ssdebug__Var_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_137, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_137, 2) = ((MR_Box) (transform_hlds__ssdebug__GoalsThen_52));
    }
    {
      transform_hlds__ssdebug__ThenGoal_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ThenGoal_53, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_137));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ThenGoal_53, 1) = ((MR_Box) (transform_hlds__ssdebug__ImpureGoalInfo_46));
    }
    transform_hlds__ssdebug__Var_139 = hlds__make_goal__fail_goal_0_f_0();
    transform_hlds__ssdebug__make_switch_goal_4_p_0(transform_hlds__ssdebug__RetryBVar_43, transform_hlds__ssdebug__RecursiveGoal_39, transform_hlds__ssdebug__Var_139, &transform_hlds__ssdebug__SwitchFailPortGoal_54);
    {
      transform_hlds__ssdebug__Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_142, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventFailGoal_44));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_145, 0) = ((MR_Box) (transform_hlds__ssdebug__SwitchFailPortGoal_54));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_144, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_145));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_141, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_142));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_141, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_144));
    }
    {
      transform_hlds__ssdebug__Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_140, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListGoals_41));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_140, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_141));
    }
    transform_hlds__ssdebug__GoalsElse_55 = mercury__list__condense_1_f_0(transform_hlds__ssdebug__TypeCtorInfo_167_167, transform_hlds__ssdebug__Var_140);
    {
      transform_hlds__ssdebug__Var_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_148, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_148, 2) = ((MR_Box) (transform_hlds__ssdebug__GoalsElse_55));
    }
    {
      transform_hlds__ssdebug__ElseGoal_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ElseGoal_56, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_148));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ElseGoal_56, 1) = ((MR_Box) (transform_hlds__ssdebug__ImpureGoalInfo_46));
    }
    transform_hlds__ssdebug__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__OrigBodyGoal_16, (MR_Integer) 0)));
    transform_hlds__ssdebug__OrigGoalInfo_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__OrigBodyGoal_16, (MR_Integer) 1)));
    hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__ProcDetism_45, transform_hlds__ssdebug__OrigGoalInfo_58, &transform_hlds__ssdebug__IteGoalInfo_59);
    {
      transform_hlds__ssdebug__Var_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_150, 2) = ((MR_Box) (transform_hlds__ssdebug__CondGoal_49));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_150, 3) = ((MR_Box) (transform_hlds__ssdebug__ThenGoal_53));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_150, 4) = ((MR_Box) (transform_hlds__ssdebug__ElseGoal_56));
    }
    {
      transform_hlds__ssdebug__IteGoal_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__IteGoal_60, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_150));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__IteGoal_60, 1) = ((MR_Box) (transform_hlds__ssdebug__IteGoalInfo_59));
    }
    {
      transform_hlds__ssdebug__Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_155, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructLevelGoal_26));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_155, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_158, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventCallGoal_28));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_161, 0) = ((MR_Box) (transform_hlds__ssdebug__IteGoal_60));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_160, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_161));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_160, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_157, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_158));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_157, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_160));
    }
    {
      transform_hlds__ssdebug__Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_154, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_155));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_154, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_157));
    }
    {
      transform_hlds__ssdebug__Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_153, 0) = ((MR_Box) (transform_hlds__ssdebug__CallArgListGoals_24));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_153, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_154));
    }
    {
      transform_hlds__ssdebug__Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_152, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdGoals_20));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_152, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_153));
    }
    transform_hlds__ssdebug__BodyGoals_61 = mercury__list__condense_1_f_0(transform_hlds__ssdebug__TypeCtorInfo_167_167, transform_hlds__ssdebug__Var_152);
    transform_hlds__ssdebug__commit_goal_changes_10_p_0(transform_hlds__ssdebug__BodyGoals_61, transform_hlds__ssdebug__PredId_9, transform_hlds__ssdebug__ProcId_10, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_112_112, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_111_111, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_63, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_120_120, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_65, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_121_121, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_122_122);
  }
}

static MR_Word MR_CALL 
transform_hlds__ssdebug__impure_goal_info_1_f_0(
  MR_Word transform_hlds__ssdebug__Detism_3)
{
  {
    MR_Word transform_hlds__ssdebug__GoalInfo_4;
    MR_Word transform_hlds__ssdebug__GoalInfo0_5;
    MR_Word transform_hlds__ssdebug__GoalInfo1_6;

    hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__ssdebug__GoalInfo0_5);
    hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__ssdebug__GoalInfo0_5, &transform_hlds__ssdebug__GoalInfo1_6);
    hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__Detism_3, transform_hlds__ssdebug__GoalInfo1_6, &transform_hlds__ssdebug__GoalInfo_4);
    return transform_hlds__ssdebug__GoalInfo_4;
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_det_7_p_0(
  MR_Word transform_hlds__ssdebug__SSTraceLevel_8,
  MR_Word transform_hlds__ssdebug__PredId_9,
  MR_Integer transform_hlds__ssdebug__ProcId_10,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_47,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_48,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_50)
{
  {
    MR_Word transform_hlds__ssdebug__TypeInfo_114_114;
    MR_Word transform_hlds__ssdebug__OrigBodyGoal_16;
    MR_Word transform_hlds__ssdebug__FullHeadVars_17;
    MR_Word transform_hlds__ssdebug__HeadVars_18;
    MR_Word transform_hlds__ssdebug__ArgModes_19;
    MR_Word transform_hlds__ssdebug__ProcIdGoals_20;
    MR_Word transform_hlds__ssdebug__ProcIdVar_21;
    MR_Word transform_hlds__ssdebug__InitInstMap_22;
    MR_Word transform_hlds__ssdebug__CallArgListVar_23;
    MR_Word transform_hlds__ssdebug__CallArgListGoals_24;
    MR_Word transform_hlds__ssdebug__BoundVarDescsAtCall_25;
    MR_Word transform_hlds__ssdebug__ConstructLevelGoal_26;
    MR_Word transform_hlds__ssdebug__LevelVar_27;
    MR_Word transform_hlds__ssdebug__HandleEventCallGoal_28;
    MR_Word transform_hlds__ssdebug__OutputVars_29;
    MR_Word transform_hlds__ssdebug__RenamedBodyGoal_30;
    MR_Word transform_hlds__ssdebug__AssignOutputsGoal_31;
    MR_Word transform_hlds__ssdebug__Renaming_32;
    MR_Word transform_hlds__ssdebug__ProcDetism_33;
    MR_Word transform_hlds__ssdebug__CanFail_34;
    MR_Word transform_hlds__ssdebug__ScopedRenamedBodyGoal_37;
    MR_Word transform_hlds__ssdebug__FinalInstMap_38;
    MR_Word transform_hlds__ssdebug__ExitArgListVar_39;
    MR_Word transform_hlds__ssdebug__ExitArgListGoals_40;
    MR_Word transform_hlds__ssdebug__RetryVar_42;
    MR_Word transform_hlds__ssdebug__HandleEventExitGoal_43;
    MR_Word transform_hlds__ssdebug__RecursiveGoal_44;
    MR_Word transform_hlds__ssdebug__SwitchGoal_45;
    MR_Word transform_hlds__ssdebug__BodyGoals_46;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_51_51;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_52_52;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_53_53;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_54_54;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_55_55;
    MR_Word transform_hlds__ssdebug__Var_57;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_58_58;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_59_59;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_60_60;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_61_61;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_62_62;
    MR_Word transform_hlds__ssdebug__Var_63;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_64_64;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_65_65;
    MR_Word transform_hlds__ssdebug__Var_67;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_68_68;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_69_69;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_70_70;
    MR_Word transform_hlds__ssdebug__Var_71;
    MR_Word transform_hlds__ssdebug__Var_72;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_74_74;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_75_75;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_77_77;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_78_78;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_79_79;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_80_80;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_81_81;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_83_83;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_84_84;
    MR_Word transform_hlds__ssdebug__Var_86;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_87_87;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_88_88;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_89_89;
    MR_Word transform_hlds__ssdebug__Var_90;
    MR_Word transform_hlds__ssdebug__Var_91;
    MR_Word transform_hlds__ssdebug__Var_93;
    MR_Word transform_hlds__ssdebug__Var_94;
    MR_Word transform_hlds__ssdebug__Var_95;
    MR_Word transform_hlds__ssdebug__Var_96;
    MR_Word transform_hlds__ssdebug__Var_98;
    MR_Word transform_hlds__ssdebug__Var_99;
    MR_Word transform_hlds__ssdebug__Var_101;
    MR_Word transform_hlds__ssdebug__Var_102;
    MR_Word transform_hlds__ssdebug__Var_104;
    MR_Word transform_hlds__ssdebug__Var_105;
    MR_Word transform_hlds__ssdebug__Var_106;
    MR_Word transform_hlds__ssdebug__Var_108;
    MR_Word transform_hlds__ssdebug__Var_109;
    MR_Word transform_hlds__ssdebug___Solns_35;
    MR_Word transform_hlds__ssdebug___BoundVarDescsAtExit_41;

    hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_49, transform_hlds__ssdebug__PredId_9, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_51_51);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_47, &transform_hlds__ssdebug__OrigBodyGoal_16);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_47, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_52_52);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_47, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_53_53);
    transform_hlds__ssdebug__get_stripped_headvars_5_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_51_51, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_47, &transform_hlds__ssdebug__FullHeadVars_17, &transform_hlds__ssdebug__HeadVars_18, &transform_hlds__ssdebug__ArgModes_19);
    transform_hlds__ssdebug__make_proc_id_construction_8_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_49, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_51_51, &transform_hlds__ssdebug__ProcIdGoals_20, &transform_hlds__ssdebug__ProcIdVar_21, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_52_52, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_54_54, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_53_53, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_55_55);
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_47, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_49, &transform_hlds__ssdebug__InitInstMap_22);
    transform_hlds__ssdebug__TypeInfo_114_114 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
    transform_hlds__ssdebug__Var_57 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_114_114, transform_hlds__ssdebug__TypeInfo_114_114);
    transform_hlds__ssdebug__Var_63 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_114_114, transform_hlds__ssdebug__TypeInfo_114_114);
    transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__InitInstMap_22, transform_hlds__ssdebug__HeadVars_18, transform_hlds__ssdebug__Var_57, &transform_hlds__ssdebug__CallArgListVar_23, &transform_hlds__ssdebug__CallArgListGoals_24, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_49, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_58_58, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_47, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_59_59, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_51_51, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_60_60, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_54_54, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_61_61, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_55_55, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_62_62, transform_hlds__ssdebug__Var_63, &transform_hlds__ssdebug__BoundVarDescsAtCall_25);
    transform_hlds__ssdebug__make_level_construction_7_p_0(transform_hlds__ssdebug__SSTraceLevel_8, &transform_hlds__ssdebug__ConstructLevelGoal_26, &transform_hlds__ssdebug__LevelVar_27, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_61_61, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_64_64, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_62_62, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_65_65);
    {
      transform_hlds__ssdebug__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_72, 0) = ((MR_Box) (transform_hlds__ssdebug__LevelVar_27));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_71, 0) = ((MR_Box) (transform_hlds__ssdebug__CallArgListVar_23));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_71, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_72));
    }
    {
      transform_hlds__ssdebug__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_67, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_21));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_67, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_71));
    }
    transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_call", transform_hlds__ssdebug__Var_67, &transform_hlds__ssdebug__HandleEventCallGoal_28, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_58_58, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_68_68, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_64_64, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_69_69, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_65_65, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_70_70);
    transform_hlds__ssdebug__get_output_args_4_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_68_68, transform_hlds__ssdebug__HeadVars_18, transform_hlds__ssdebug__ArgModes_19, &transform_hlds__ssdebug__OutputVars_29);
    transform_hlds__ssdebug__rename_outputs_9_p_0(transform_hlds__ssdebug__OutputVars_29, transform_hlds__ssdebug__OrigBodyGoal_16, &transform_hlds__ssdebug__RenamedBodyGoal_30, &transform_hlds__ssdebug__AssignOutputsGoal_31, &transform_hlds__ssdebug__Renaming_32, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_69_69, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_74_74, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_70_70, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_75_75);
    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_59_59, &transform_hlds__ssdebug__ProcDetism_33);
    parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__ssdebug__ProcDetism_33, &transform_hlds__ssdebug__CanFail_34, &transform_hlds__ssdebug___Solns_35);
    switch (transform_hlds__ssdebug__CanFail_34) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__ssdebug__RenamedOutputVars_36;

          mercury__map__apply_to_list_3_p_0(transform_hlds__ssdebug__TypeInfo_114_114, transform_hlds__ssdebug__TypeInfo_114_114, transform_hlds__ssdebug__OutputVars_29, transform_hlds__ssdebug__Renaming_32, &transform_hlds__ssdebug__RenamedOutputVars_36);
          transform_hlds__ssdebug__add_promise_equivalent_solutions_3_p_0(transform_hlds__ssdebug__RenamedOutputVars_36, transform_hlds__ssdebug__RenamedBodyGoal_30, &transform_hlds__ssdebug__ScopedRenamedBodyGoal_37);
        }
        break;
      case (MR_Integer) 1:
        transform_hlds__ssdebug__ScopedRenamedBodyGoal_37 = transform_hlds__ssdebug__RenamedBodyGoal_30;
        break;
    }
    hlds__goal_util__update_instmap_3_p_0(transform_hlds__ssdebug__OrigBodyGoal_16, transform_hlds__ssdebug__InitInstMap_22, &transform_hlds__ssdebug__FinalInstMap_38);
    transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__FinalInstMap_38, transform_hlds__ssdebug__HeadVars_18, transform_hlds__ssdebug__Renaming_32, &transform_hlds__ssdebug__ExitArgListVar_39, &transform_hlds__ssdebug__ExitArgListGoals_40, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_68_68, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_77_77, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_59_59, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_78_78, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_60_60, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_79_79, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_74_74, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_80_80, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_75_75, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_81_81, transform_hlds__ssdebug__BoundVarDescsAtCall_25, &transform_hlds__ssdebug___BoundVarDescsAtExit_41);
    transform_hlds__ssdebug__make_retry_var_6_p_0((MR_String) "DoRetry", &transform_hlds__ssdebug__RetryVar_42, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_80_80, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_83_83, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_81_81, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_84_84);
    {
      transform_hlds__ssdebug__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_91, 0) = ((MR_Box) (transform_hlds__ssdebug__RetryVar_42));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_90, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitArgListVar_39));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_90, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_91));
    }
    {
      transform_hlds__ssdebug__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_86, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_21));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_86, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_90));
    }
    transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_exit", transform_hlds__ssdebug__Var_86, &transform_hlds__ssdebug__HandleEventExitGoal_43, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_77_77, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_87_87, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_83_83, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_88_88, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_84_84, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_89_89);
    transform_hlds__ssdebug__make_recursive_call_6_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_79_79, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_87_87, transform_hlds__ssdebug__PredId_9, transform_hlds__ssdebug__ProcId_10, transform_hlds__ssdebug__FullHeadVars_17, &transform_hlds__ssdebug__RecursiveGoal_44);
    transform_hlds__ssdebug__make_switch_goal_4_p_0(transform_hlds__ssdebug__RetryVar_42, transform_hlds__ssdebug__RecursiveGoal_44, transform_hlds__ssdebug__AssignOutputsGoal_31, &transform_hlds__ssdebug__SwitchGoal_45);
    {
      transform_hlds__ssdebug__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_96, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructLevelGoal_26));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_99, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventCallGoal_28));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_102, 0) = ((MR_Box) (transform_hlds__ssdebug__ScopedRenamedBodyGoal_37));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_106, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventExitGoal_43));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_109, 0) = ((MR_Box) (transform_hlds__ssdebug__SwitchGoal_45));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_108, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_109));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_105, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_106));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_105, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_108));
    }
    {
      transform_hlds__ssdebug__Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_104, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitArgListGoals_40));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_104, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_105));
    }
    {
      transform_hlds__ssdebug__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_101, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_102));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_101, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_104));
    }
    {
      transform_hlds__ssdebug__Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_98, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_99));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_98, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_101));
    }
    {
      transform_hlds__ssdebug__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_95, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_96));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_95, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_98));
    }
    {
      transform_hlds__ssdebug__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_94, 0) = ((MR_Box) (transform_hlds__ssdebug__CallArgListGoals_24));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_94, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_95));
    }
    {
      transform_hlds__ssdebug__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_93, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdGoals_20));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_93, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_94));
    }
    transform_hlds__ssdebug__BodyGoals_46 = mercury__list__condense_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__ssdebug__Var_93);
    transform_hlds__ssdebug__commit_goal_changes_10_p_0(transform_hlds__ssdebug__BodyGoals_46, transform_hlds__ssdebug__PredId_9, transform_hlds__ssdebug__ProcId_10, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_79_79, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_78_78, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_48, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_87_87, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_50, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_88_88, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_89_89);
  }
}

static void MR_CALL 
transform_hlds__ssdebug__make_arg_list_18_p_0(
  MR_Integer transform_hlds__ssdebug__HeadVar__1_1,
  MR_Word transform_hlds__ssdebug__HeadVar__2_2,
  MR_Word transform_hlds__ssdebug__HeadVar__3_3,
  MR_Word transform_hlds__ssdebug__HeadVar__4_4,
  MR_Word * transform_hlds__ssdebug__OutVar_5,
  MR_Word * transform_hlds__ssdebug__HeadVar__6_6,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_9,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_10,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_11,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_12,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_13,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_14,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_15,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_16,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_0_17,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_18)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;

    if ((transform_hlds__ssdebug__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word transform_hlds__ssdebug__Goal_23;
      MR_Word transform_hlds__ssdebug__ListTypeSymName_30;
      MR_Word transform_hlds__ssdebug__ListTypeCtor_31;
      MR_Word transform_hlds__ssdebug__ConsId_32;
      MR_Word transform_hlds__ssdebug__Var_48;
      MR_Word transform_hlds__ssdebug__Var_50;
      MR_Word transform_hlds__ssdebug__Var_53;
      MR_Word transform_hlds__ssdebug__Var_54;

      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "EmptyVarList", transform_hlds__ssdebug__OutVar_5, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_13, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_14);
      transform_hlds__ssdebug__Var_48 = transform_hlds__ssdebug__list_var_value_type_0_f_0();
      hlds__vartypes__add_var_type_4_p_0(*transform_hlds__ssdebug__OutVar_5, transform_hlds__ssdebug__Var_48, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_15, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_16);
      transform_hlds__ssdebug__Var_50 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
      {
        transform_hlds__ssdebug__ListTypeSymName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__ListTypeSymName_30, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_50));
        MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__ListTypeSymName_30, 1) = ((MR_Box) ((MR_String) "list"));
      }
      {
        transform_hlds__ssdebug__ListTypeCtor_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ListTypeCtor_31, 0) = ((MR_Box) (transform_hlds__ssdebug__ListTypeSymName_30));
        MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ListTypeCtor_31, 1) = ((MR_Box) ((MR_Integer) 1));
      }
      transform_hlds__ssdebug__Var_54 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
      {
        transform_hlds__ssdebug__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_53, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_54));
        MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_53, 1) = ((MR_Box) ((MR_String) "[]"));
      }
      {
        transform_hlds__ssdebug__ConsId_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_32, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_53));
        MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_32, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_32, 3) = ((MR_Box) (transform_hlds__ssdebug__ListTypeCtor_31));
      }
      hlds__make_goal__construct_functor_4_p_0(*transform_hlds__ssdebug__OutVar_5, transform_hlds__ssdebug__ConsId_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__ssdebug__Goal_23);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *transform_hlds__ssdebug__HeadVar__6_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ssdebug__Goal_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      *transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_18 = transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_0_17;
      *transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_12 = transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_11;
      *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_10 = transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_9;
      *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_8 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_7;
    }
    else
    {
      MR_Word transform_hlds__ssdebug__ProgVar_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word transform_hlds__ssdebug__ProgVars_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer transform_hlds__ssdebug__Pos_71 = (transform_hlds__ssdebug__HeadVar__1_1 + (MR_Integer) 1);
      MR_Word transform_hlds__ssdebug__OutVar0_72;
      MR_Word transform_hlds__ssdebug__Goals0_73;
      MR_Word transform_hlds__ssdebug__ProgVarType_74;
      MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_95_95;
      MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_96_96;
      MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_97_97;
      MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_98_98;
      MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_99_99;
      MR_Word transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_100_100;

      transform_hlds__ssdebug__make_arg_list_18_p_0(transform_hlds__ssdebug__Pos_71, transform_hlds__ssdebug__HeadVar__2_2, transform_hlds__ssdebug__ProgVars_61, transform_hlds__ssdebug__HeadVar__4_4, &transform_hlds__ssdebug__OutVar0_72, &transform_hlds__ssdebug__Goals0_73, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_7, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_95_95, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_9, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_96_96, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_11, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_97_97, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_13, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_98_98, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_15, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_99_99, transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_0_17, &transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_100_100);
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_99_99, transform_hlds__ssdebug__ProgVar_60, &transform_hlds__ssdebug__ProgVarType_74);
      {
        MR_Word transform_hlds__ssdebug__Var_129;

        transform_hlds__ssdebug__Var_129 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
        transform_hlds__ssdebug__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ssdebug__ProgVarType_74, transform_hlds__ssdebug__Var_129);
      }
      if (!(transform_hlds__ssdebug__succeeded))
      {
        MR_Word transform_hlds__ssdebug__Var_130;

        transform_hlds__ssdebug__Var_130 = parse_tree__builtin_lib_types__io_io_type_0_f_0();
        transform_hlds__ssdebug__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ssdebug__ProgVarType_74, transform_hlds__ssdebug__Var_130);
      }
      if (transform_hlds__ssdebug__succeeded)
      {
        *transform_hlds__ssdebug__OutVar_5 = transform_hlds__ssdebug__OutVar0_72;
        *transform_hlds__ssdebug__HeadVar__6_6 = transform_hlds__ssdebug__Goals0_73;
        *transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_18 = transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_100_100;
        *transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_16 = transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_99_99;
        *transform_hlds__ssdebug__STATE_VARIABLE_VarSet_14 = transform_hlds__ssdebug__STATE_VARIABLE_VarSet_98_98;
        *transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_12 = transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_97_97;
        *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_10 = transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_96_96;
        *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_8 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_95_95;
      }
      else
      {
        MR_Word transform_hlds__ssdebug__TypeCtorInfo_128_128;
        MR_Word transform_hlds__ssdebug__ValueGoals_76;
        MR_Word transform_hlds__ssdebug__VarDesc_77;
        MR_Word transform_hlds__ssdebug__ListTypeSymName_78;
        MR_Word transform_hlds__ssdebug__ListTypeCtor_79;
        MR_Word transform_hlds__ssdebug__ConsId_80;
        MR_Word transform_hlds__ssdebug__Goal_81;
        MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_104_104;
        MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_105_105;
        MR_Word transform_hlds__ssdebug__Var_109;
        MR_Word transform_hlds__ssdebug__Var_111;
        MR_Word transform_hlds__ssdebug__Var_119;
        MR_Word transform_hlds__ssdebug__Var_120;
        MR_Word transform_hlds__ssdebug__Var_122;
        MR_Word transform_hlds__ssdebug__Var_123;
        MR_Word transform_hlds__ssdebug__ExistingVarDesc_75;
        MR_Word transform_hlds__ssdebug__TypeInfo_126_126 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
        MR_Box transform_hlds__ssdebug__conv0_ExistingVarDesc_75;

        transform_hlds__ssdebug__succeeded = mercury__map__search_3_p_0(transform_hlds__ssdebug__TypeInfo_126_126, transform_hlds__ssdebug__TypeInfo_126_126, transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_100_100, ((MR_Box) (transform_hlds__ssdebug__ProgVar_60)), &transform_hlds__ssdebug__conv0_ExistingVarDesc_75);
        if (transform_hlds__ssdebug__succeeded)
        {
          transform_hlds__ssdebug__ExistingVarDesc_75 = ((MR_Word) transform_hlds__ssdebug__conv0_ExistingVarDesc_75);
          transform_hlds__ssdebug__succeeded = MR_TRUE;
        }
        if (transform_hlds__ssdebug__succeeded)
        {
          transform_hlds__ssdebug__ValueGoals_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          transform_hlds__ssdebug__VarDesc_77 = transform_hlds__ssdebug__ExistingVarDesc_75;
          *transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_18 = transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_100_100;
          transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_105_105 = transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_99_99;
          transform_hlds__ssdebug__STATE_VARIABLE_VarSet_104_104 = transform_hlds__ssdebug__STATE_VARIABLE_VarSet_98_98;
          *transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_12 = transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_97_97;
          *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_10 = transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_96_96;
          *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_8 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_95_95;
        }
        else
          transform_hlds__ssdebug__make_var_value_18_p_0(transform_hlds__ssdebug__HeadVar__2_2, transform_hlds__ssdebug__ProgVar_60, transform_hlds__ssdebug__HeadVar__4_4, &transform_hlds__ssdebug__VarDesc_77, transform_hlds__ssdebug__HeadVar__1_1, &transform_hlds__ssdebug__ValueGoals_76, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_95_95, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_8, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_96_96, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_10, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_97_97, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_12, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_98_98, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_104_104, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_99_99, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_105_105, transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_100_100, transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_18);
        mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "FullListVar", transform_hlds__ssdebug__OutVar_5, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_104_104, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_14);
        transform_hlds__ssdebug__Var_109 = transform_hlds__ssdebug__list_var_value_type_0_f_0();
        hlds__vartypes__add_var_type_4_p_0(*transform_hlds__ssdebug__OutVar_5, transform_hlds__ssdebug__Var_109, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_105_105, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_16);
        transform_hlds__ssdebug__Var_111 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
        {
          transform_hlds__ssdebug__ListTypeSymName_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__ListTypeSymName_78, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_111));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__ListTypeSymName_78, 1) = ((MR_Box) ((MR_String) "list"));
        }
        {
          transform_hlds__ssdebug__ListTypeCtor_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ListTypeCtor_79, 0) = ((MR_Box) (transform_hlds__ssdebug__ListTypeSymName_78));
          MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ListTypeCtor_79, 1) = ((MR_Box) ((MR_Integer) 1));
        }
        {
          transform_hlds__ssdebug__ConsId_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_1[3])));
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_80, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_80, 3) = ((MR_Box) (transform_hlds__ssdebug__ListTypeCtor_79));
        }
        {
          transform_hlds__ssdebug__Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_120, 0) = ((MR_Box) (transform_hlds__ssdebug__OutVar0_72));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          transform_hlds__ssdebug__Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_119, 0) = ((MR_Box) (transform_hlds__ssdebug__VarDesc_77));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_119, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_120));
        }
        hlds__make_goal__construct_functor_4_p_0(*transform_hlds__ssdebug__OutVar_5, transform_hlds__ssdebug__ConsId_80, transform_hlds__ssdebug__Var_119, &transform_hlds__ssdebug__Goal_81);
        transform_hlds__ssdebug__TypeCtorInfo_128_128 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
        {
          transform_hlds__ssdebug__Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_123, 0) = ((MR_Box) (transform_hlds__ssdebug__Goal_81));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        transform_hlds__ssdebug__Var_122 = mercury__list__f_43_43_2_f_0(transform_hlds__ssdebug__TypeCtorInfo_128_128, transform_hlds__ssdebug__ValueGoals_76, transform_hlds__ssdebug__Var_123);
        *transform_hlds__ssdebug__HeadVar__6_6 = mercury__list__f_43_43_2_f_0(transform_hlds__ssdebug__TypeCtorInfo_128_128, transform_hlds__ssdebug__Goals0_73, transform_hlds__ssdebug__Var_122);
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ssdebug__make_var_value_18_p_0_1(
  MR_Box transform_hlds__ssdebug__closure_arg)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Box transform_hlds__ssdebug__closure = transform_hlds__ssdebug__closure_arg;

    transform_hlds__ssdebug__succeeded = transform_hlds__ssdebug__IntroducedFrom__pred__make_var_value__1437__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__closure, (MR_Integer) 4))));
    return transform_hlds__ssdebug__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ssdebug__make_var_value_18_p_0(
  MR_Word transform_hlds__ssdebug__InstMap_19,
  MR_Word transform_hlds__ssdebug__VarToInspect_20,
  MR_Word transform_hlds__ssdebug__Renaming_21,
  MR_Word * transform_hlds__ssdebug__VarDesc_22,
  MR_Integer transform_hlds__ssdebug__VarPos_23,
  MR_Word * transform_hlds__ssdebug__Goals_24,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_50,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_51,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_52,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_53,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_54,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_55,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_56,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_57,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_58,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_59,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_0_60,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_61)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__TypeCtorInfo_120_120;
    MR_Word transform_hlds__ssdebug__SSDBModule_31;
    MR_Word transform_hlds__ssdebug__VarValueTypeCtor_32;
    MR_Word transform_hlds__ssdebug__VarValueType_33;
    MR_String transform_hlds__ssdebug__VarName_34;
    MR_Word transform_hlds__ssdebug__ConstructVarName_35;
    MR_Word transform_hlds__ssdebug__VarNameVar_36;
    MR_Word transform_hlds__ssdebug__ConstructVarPos_37;
    MR_Word transform_hlds__ssdebug__VarPosVar_38;
    MR_Word transform_hlds__ssdebug__Var_62;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_67_67;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_68_68;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_71_71;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_72_72;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_75_75;

    transform_hlds__ssdebug__SSDBModule_31 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    {
      transform_hlds__ssdebug__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_62, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_31));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_62, 1) = ((MR_Box) ((MR_String) "var_value"));
    }
    {
      transform_hlds__ssdebug__VarValueTypeCtor_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__VarValueTypeCtor_32, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_62));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__VarValueTypeCtor_32, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(transform_hlds__ssdebug__VarValueTypeCtor_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__ssdebug__VarValueType_33);
    transform_hlds__ssdebug__TypeCtorInfo_120_120 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    mercury__varset__lookup_name_3_p_0(transform_hlds__ssdebug__TypeCtorInfo_120_120, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_56, transform_hlds__ssdebug__VarToInspect_20, &transform_hlds__ssdebug__VarName_34);
    hlds__make_goal__make_string_const_construction_alloc_8_p_0(transform_hlds__ssdebug__VarName_34, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_5[5]), &transform_hlds__ssdebug__ConstructVarName_35, &transform_hlds__ssdebug__VarNameVar_36, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_56, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_67_67, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_58, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_68_68);
    hlds__make_goal__make_int_const_construction_alloc_8_p_0(transform_hlds__ssdebug__VarPos_23, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_5[6]), &transform_hlds__ssdebug__ConstructVarPos_37, &transform_hlds__ssdebug__VarPosVar_38, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_67_67, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_71_71, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_68_68, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_72_72);
    mercury__varset__new_named_var_4_p_0(transform_hlds__ssdebug__TypeCtorInfo_120_120, (MR_String) "VarDesc", transform_hlds__ssdebug__VarDesc_22, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_71_71, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_75_75);
    transform_hlds__ssdebug__succeeded = hlds__instmap__var_is_ground_in_instmap_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_50, transform_hlds__ssdebug__InstMap_19, transform_hlds__ssdebug__VarToInspect_20);
    if (transform_hlds__ssdebug__succeeded)
    {
      MR_Word transform_hlds__ssdebug__TypeInfo_125_125;
      MR_Word transform_hlds__ssdebug__PolyInfo0_39;
      MR_Word transform_hlds__ssdebug__Context_40;
      MR_Word transform_hlds__ssdebug__MerType_41;
      MR_Word transform_hlds__ssdebug__TypeInfoVar_42;
      MR_Word transform_hlds__ssdebug__TypeInfoGoals0_43;
      MR_Word transform_hlds__ssdebug__PolyInfo_44;
      MR_Word transform_hlds__ssdebug__PolySpecs_45;
      MR_Word transform_hlds__ssdebug__ConsId_46;
      MR_Word transform_hlds__ssdebug__ConstructVarGoal_47;
      MR_Word transform_hlds__ssdebug__TypeInfoGoals_49;
      MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_76_76;
      MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_77_77;
      MR_Word transform_hlds__ssdebug__Var_81;
      MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_87_87;
      MR_Word transform_hlds__ssdebug__Var_88;
      MR_Word transform_hlds__ssdebug__Var_103;
      MR_Word transform_hlds__ssdebug__Var_104;
      MR_Word transform_hlds__ssdebug__Var_105;
      MR_Word transform_hlds__ssdebug__TypeInfo_122_122;

      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_VarSet_75_75, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_52, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_76_76);
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_72_72, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_76_76, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_77_77);
      check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_50, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_54, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_77_77, &transform_hlds__ssdebug__PolyInfo0_39);
      mercury__term__context_init_1_p_0(&transform_hlds__ssdebug__Context_40);
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_72_72, transform_hlds__ssdebug__VarToInspect_20, &transform_hlds__ssdebug__MerType_41);
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__ssdebug__MerType_41, transform_hlds__ssdebug__Context_40, &transform_hlds__ssdebug__TypeInfoVar_42, &transform_hlds__ssdebug__TypeInfoGoals0_43, transform_hlds__ssdebug__PolyInfo0_39, &transform_hlds__ssdebug__PolyInfo_44);
      check_hlds__polymorphism__poly_info_extract_7_p_0(transform_hlds__ssdebug__PolyInfo_44, &transform_hlds__ssdebug__PolySpecs_45, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_54, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_55, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_77_77, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_53, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_51);
      {
        transform_hlds__ssdebug__Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_81, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_81, 1) = ((MR_Box) (transform_hlds__ssdebug__make_var_value_18_p_0_1));
        MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_81, 3) = ((MR_Box) (transform_hlds__ssdebug__PolySpecs_45));
        MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_81, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__require__expect_4_p_0(transform_hlds__ssdebug__Var_81, (MR_String) "transform_hlds.ssdebug", (MR_String) "predicate \140transform_hlds.ssdebug.make_var_value\'/18", (MR_String) "got errors while making type_info_var");
      hlds__hlds_pred__proc_info_get_varset_2_p_0(*transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_53, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_57);
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(*transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_53, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_87_87);
      {
        transform_hlds__ssdebug__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_88, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_31));
        MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_88, 1) = ((MR_Box) ((MR_String) "bound_head_var"));
      }
      {
        transform_hlds__ssdebug__ConsId_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_46, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_88));
        MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_46, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_46, 3) = ((MR_Box) (transform_hlds__ssdebug__VarValueTypeCtor_32));
      }
      hlds__vartypes__add_var_type_4_p_0(*transform_hlds__ssdebug__VarDesc_22, transform_hlds__ssdebug__VarValueType_33, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_87_87, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_59);
      transform_hlds__ssdebug__TypeInfo_122_122 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
      transform_hlds__ssdebug__succeeded = mercury__map__is_empty_1_p_0(transform_hlds__ssdebug__TypeInfo_122_122, transform_hlds__ssdebug__TypeInfo_122_122, transform_hlds__ssdebug__Renaming_21);
      if (transform_hlds__ssdebug__succeeded)
      {
        MR_Word transform_hlds__ssdebug__Var_92;
        MR_Word transform_hlds__ssdebug__Var_93;
        MR_Word transform_hlds__ssdebug__Var_94;
        MR_Word transform_hlds__ssdebug__Var_95;

        {
          transform_hlds__ssdebug__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_95, 0) = ((MR_Box) (transform_hlds__ssdebug__VarToInspect_20));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          transform_hlds__ssdebug__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_94, 0) = ((MR_Box) (transform_hlds__ssdebug__VarPosVar_38));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_94, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_95));
        }
        {
          transform_hlds__ssdebug__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_93, 0) = ((MR_Box) (transform_hlds__ssdebug__VarNameVar_36));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_93, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_94));
        }
        {
          transform_hlds__ssdebug__Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_92, 0) = ((MR_Box) (transform_hlds__ssdebug__TypeInfoVar_42));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_92, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_93));
        }
        hlds__make_goal__construct_functor_4_p_0(*transform_hlds__ssdebug__VarDesc_22, transform_hlds__ssdebug__ConsId_46, transform_hlds__ssdebug__Var_92, &transform_hlds__ssdebug__ConstructVarGoal_47);
      }
      else
      {
        MR_Word transform_hlds__ssdebug__TypeInfo_123_123 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
        MR_Word transform_hlds__ssdebug__RenamedVar_48;
        MR_Word transform_hlds__ssdebug__Var_97;
        MR_Word transform_hlds__ssdebug__Var_98;
        MR_Word transform_hlds__ssdebug__Var_99;
        MR_Word transform_hlds__ssdebug__Var_100;
        MR_Box transform_hlds__ssdebug__conv0_RenamedVar_48;

        mercury__map__lookup_3_p_0(transform_hlds__ssdebug__TypeInfo_123_123, transform_hlds__ssdebug__TypeInfo_123_123, transform_hlds__ssdebug__Renaming_21, ((MR_Box) (transform_hlds__ssdebug__VarToInspect_20)), &transform_hlds__ssdebug__conv0_RenamedVar_48);
        transform_hlds__ssdebug__RenamedVar_48 = ((MR_Word) transform_hlds__ssdebug__conv0_RenamedVar_48);
        {
          transform_hlds__ssdebug__Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_100, 0) = ((MR_Box) (transform_hlds__ssdebug__RenamedVar_48));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          transform_hlds__ssdebug__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_99, 0) = ((MR_Box) (transform_hlds__ssdebug__VarPosVar_38));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_99, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_100));
        }
        {
          transform_hlds__ssdebug__Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_98, 0) = ((MR_Box) (transform_hlds__ssdebug__VarNameVar_36));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_98, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_99));
        }
        {
          transform_hlds__ssdebug__Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_97, 0) = ((MR_Box) (transform_hlds__ssdebug__TypeInfoVar_42));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_97, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_98));
        }
        hlds__make_goal__construct_functor_4_p_0(*transform_hlds__ssdebug__VarDesc_22, transform_hlds__ssdebug__ConsId_46, transform_hlds__ssdebug__Var_97, &transform_hlds__ssdebug__ConstructVarGoal_47);
      }
      hlds__hlds_goal__rename_vars_in_goals_4_p_0((MR_Integer) 1, transform_hlds__ssdebug__Renaming_21, transform_hlds__ssdebug__TypeInfoGoals0_43, &transform_hlds__ssdebug__TypeInfoGoals_49);
      {
        transform_hlds__ssdebug__Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_104, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructVarPos_37));
        MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_104, 1) = ((MR_Box) (transform_hlds__ssdebug__TypeInfoGoals_49));
      }
      {
        transform_hlds__ssdebug__Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_103, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructVarName_35));
        MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_103, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_104));
      }
      {
        transform_hlds__ssdebug__Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_105, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructVarGoal_47));
        MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      *transform_hlds__ssdebug__Goals_24 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__ssdebug__Var_103, transform_hlds__ssdebug__Var_105);
      transform_hlds__ssdebug__TypeInfo_125_125 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
      mercury__map__det_insert_4_p_0(transform_hlds__ssdebug__TypeInfo_125_125, transform_hlds__ssdebug__TypeInfo_125_125, ((MR_Box) (transform_hlds__ssdebug__VarToInspect_20)), ((MR_Box) (*transform_hlds__ssdebug__VarDesc_22)), transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_0_60, transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_61);
    }
    else
    {
      MR_Word transform_hlds__ssdebug__Var_108;
      MR_Word transform_hlds__ssdebug__Var_112;
      MR_Word transform_hlds__ssdebug__Var_113;
      MR_Word transform_hlds__ssdebug__Var_115;
      MR_Word transform_hlds__ssdebug__Var_116;
      MR_Word transform_hlds__ssdebug__ConsId_118;
      MR_Word transform_hlds__ssdebug__ConstructVarGoal_119;

      {
        transform_hlds__ssdebug__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_108, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_31));
        MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_108, 1) = ((MR_Box) ((MR_String) "unbound_head_var"));
      }
      {
        transform_hlds__ssdebug__ConsId_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_118, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_108));
        MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_118, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_118, 3) = ((MR_Box) (transform_hlds__ssdebug__VarValueTypeCtor_32));
      }
      hlds__vartypes__add_var_type_4_p_0(*transform_hlds__ssdebug__VarDesc_22, transform_hlds__ssdebug__VarValueType_33, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_72_72, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_59);
      {
        transform_hlds__ssdebug__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_113, 0) = ((MR_Box) (transform_hlds__ssdebug__VarPosVar_38));
        MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        transform_hlds__ssdebug__Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_112, 0) = ((MR_Box) (transform_hlds__ssdebug__VarNameVar_36));
        MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_112, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_113));
      }
      hlds__make_goal__construct_functor_4_p_0(*transform_hlds__ssdebug__VarDesc_22, transform_hlds__ssdebug__ConsId_118, transform_hlds__ssdebug__Var_112, &transform_hlds__ssdebug__ConstructVarGoal_119);
      {
        transform_hlds__ssdebug__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_116, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructVarGoal_119));
        MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        transform_hlds__ssdebug__Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_115, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructVarPos_37));
        MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_115, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_116));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *transform_hlds__ssdebug__Goals_24 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructVarName_35));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_115));
      }
      *transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_61 = transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_0_60;
      *transform_hlds__ssdebug__STATE_VARIABLE_VarSet_57 = transform_hlds__ssdebug__STATE_VARIABLE_VarSet_75_75;
      *transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_55 = transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_54;
      *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_53 = transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_52;
      *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_51 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_50;
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__ssdebug__list_var_value_type_0_f_0(void)
{
  {
    MR_Word transform_hlds__ssdebug__ListVarValueType_2;
    MR_Word transform_hlds__ssdebug__SSDBModule_3;
    MR_Word transform_hlds__ssdebug__VarValueTypeCtor_4;
    MR_Word transform_hlds__ssdebug__VarValueType_5;
    MR_Word transform_hlds__ssdebug__ListTypeCtor_6;
    MR_Word transform_hlds__ssdebug__Var_7;
    MR_Word transform_hlds__ssdebug__Var_11;
    MR_Word transform_hlds__ssdebug__Var_12;
    MR_Word transform_hlds__ssdebug__Var_15;

    transform_hlds__ssdebug__SSDBModule_3 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    {
      transform_hlds__ssdebug__Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_7, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_3));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_7, 1) = ((MR_Box) ((MR_String) "var_value"));
    }
    {
      transform_hlds__ssdebug__VarValueTypeCtor_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__VarValueTypeCtor_4, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_7));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__VarValueTypeCtor_4, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(transform_hlds__ssdebug__VarValueTypeCtor_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__ssdebug__VarValueType_5);
    transform_hlds__ssdebug__Var_12 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
    {
      transform_hlds__ssdebug__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_11, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_12));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_11, 1) = ((MR_Box) ((MR_String) "list"));
    }
    {
      transform_hlds__ssdebug__ListTypeCtor_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ListTypeCtor_6, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_11));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ListTypeCtor_6, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      transform_hlds__ssdebug__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_15, 0) = ((MR_Box) (transform_hlds__ssdebug__VarValueType_5));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    parse_tree__prog_type__construct_type_3_p_0(transform_hlds__ssdebug__ListTypeCtor_6, transform_hlds__ssdebug__Var_15, &transform_hlds__ssdebug__ListVarValueType_2);
    return transform_hlds__ssdebug__ListVarValueType_2;
  }
}

static void MR_CALL 
transform_hlds__ssdebug__make_level_construction_7_p_0(
  MR_Word transform_hlds__ssdebug__SSTraceLevel_8,
  MR_Word * transform_hlds__ssdebug__Goal_9,
  MR_Word * transform_hlds__ssdebug__LevelVar_10,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_14,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_15,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_16,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_17)
{
  {
    MR_Word transform_hlds__ssdebug__ConsId_13;
    MR_Word transform_hlds__ssdebug__Var_18;
    MR_Word transform_hlds__ssdebug__Var_45;
    MR_Word transform_hlds__ssdebug__Var_48;

    switch (transform_hlds__ssdebug__SSTraceLevel_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__ssdebug__DataCtor_26;
          MR_Word transform_hlds__ssdebug__Var_27;
          MR_Word transform_hlds__ssdebug__Var_29;
          MR_Word transform_hlds__ssdebug__Var_30;
          MR_Word transform_hlds__ssdebug__Var_32;

          transform_hlds__ssdebug__Var_27 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
          {
            transform_hlds__ssdebug__DataCtor_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__DataCtor_26, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_27));
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__DataCtor_26, 1) = ((MR_Box) ((MR_String) "deep"));
          }
          transform_hlds__ssdebug__Var_32 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
          {
            transform_hlds__ssdebug__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_30, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_32));
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_30, 1) = ((MR_Box) ((MR_String) "ssdb_tracing_level"));
          }
          {
            transform_hlds__ssdebug__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_29, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_30));
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_29, 1) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            transform_hlds__ssdebug__ConsId_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_13, 1) = ((MR_Box) (transform_hlds__ssdebug__DataCtor_26));
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_13, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_13, 3) = ((MR_Box) (transform_hlds__ssdebug__Var_29));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__ssdebug__DataCtor_37;
          MR_Word transform_hlds__ssdebug__Var_38;
          MR_Word transform_hlds__ssdebug__Var_40;
          MR_Word transform_hlds__ssdebug__Var_41;
          MR_Word transform_hlds__ssdebug__Var_43;

          transform_hlds__ssdebug__Var_38 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
          {
            transform_hlds__ssdebug__DataCtor_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__DataCtor_37, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_38));
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__DataCtor_37, 1) = ((MR_Box) ((MR_String) "shallow"));
          }
          transform_hlds__ssdebug__Var_43 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
          {
            transform_hlds__ssdebug__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_41, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_43));
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_41, 1) = ((MR_Box) ((MR_String) "ssdb_tracing_level"));
          }
          {
            transform_hlds__ssdebug__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_40, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_41));
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_40, 1) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            transform_hlds__ssdebug__ConsId_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_13, 1) = ((MR_Box) (transform_hlds__ssdebug__DataCtor_37));
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_13, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_13, 3) = ((MR_Box) (transform_hlds__ssdebug__Var_40));
          }
        }
        break;
    }
    transform_hlds__ssdebug__Var_48 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    {
      transform_hlds__ssdebug__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_45, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_48));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_45, 1) = ((MR_Box) ((MR_String) "ssdb_tracing_level"));
    }
    {
      transform_hlds__ssdebug__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_18, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_45));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_18, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    hlds__make_goal__make_const_construction_alloc_9_p_0(transform_hlds__ssdebug__ConsId_13, transform_hlds__ssdebug__Var_18, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_5[4]), transform_hlds__ssdebug__Goal_9, transform_hlds__ssdebug__LevelVar_10, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_14, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_15, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_16, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_17);
  }
}

static void MR_CALL 
transform_hlds__ssdebug__make_proc_id_construction_8_p_0(
  MR_Word transform_hlds__ssdebug__ModuleInfo_9,
  MR_Word transform_hlds__ssdebug__PredInfo_10,
  MR_Word * transform_hlds__ssdebug__Goals_11,
  MR_Word * transform_hlds__ssdebug__ProcIdVar_12,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_31,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_32,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_33,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_34)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__Origin_15;
    MR_Word transform_hlds__ssdebug__OrigPredInfo_18;
    MR_Word transform_hlds__ssdebug__SymModuleName_19;
    MR_String transform_hlds__ssdebug__ModuleName_20;
    MR_String transform_hlds__ssdebug__PredName_21;
    MR_Word transform_hlds__ssdebug__ConstructModuleName_22;
    MR_Word transform_hlds__ssdebug__ModuleNameVar_23;
    MR_Word transform_hlds__ssdebug__ConstructPredName_24;
    MR_Word transform_hlds__ssdebug__PredNameVar_25;
    MR_Word transform_hlds__ssdebug__SSDBModule_26;
    MR_Word transform_hlds__ssdebug__TypeCtor_27;
    MR_Word transform_hlds__ssdebug__ConsId_28;
    MR_Word transform_hlds__ssdebug__ProcIdType_29;
    MR_Word transform_hlds__ssdebug__ConstructProcIdGoal_30;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_37_37;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_38_38;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_41_41;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_42_42;
    MR_Word transform_hlds__ssdebug__Var_44;
    MR_Word transform_hlds__ssdebug__Var_54;
    MR_Word transform_hlds__ssdebug__Var_55;
    MR_Word transform_hlds__ssdebug__Var_57;
    MR_Word transform_hlds__ssdebug__Var_58;
    MR_Word transform_hlds__ssdebug__OrigPredId_17;
    MR_Word transform_hlds__ssdebug__Var_35;
    MR_Word transform_hlds__ssdebug__Var_16;

    hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__ssdebug__PredInfo_10, &transform_hlds__ssdebug__Origin_15);
    transform_hlds__ssdebug__succeeded = ((MR_tag((MR_Word) transform_hlds__ssdebug__Origin_15)) == (MR_mktag((MR_Integer) 2)));
    if (transform_hlds__ssdebug__succeeded)
    {
      transform_hlds__ssdebug__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__Origin_15, (MR_Integer) 0)));
      transform_hlds__ssdebug__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__Origin_15, (MR_Integer) 1)));
      transform_hlds__ssdebug__OrigPredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__Origin_15, (MR_Integer) 2)));
      transform_hlds__ssdebug__succeeded = (transform_hlds__ssdebug__Var_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
    }
    if (transform_hlds__ssdebug__succeeded)
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__ModuleInfo_9, transform_hlds__ssdebug__OrigPredId_17, &transform_hlds__ssdebug__OrigPredInfo_18);
    else
      transform_hlds__ssdebug__OrigPredInfo_18 = transform_hlds__ssdebug__PredInfo_10;
    transform_hlds__ssdebug__SymModuleName_19 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__ssdebug__OrigPredInfo_18);
    transform_hlds__ssdebug__ModuleName_20 = mdbcomp__sym_name__sym_name_to_string_1_f_0(transform_hlds__ssdebug__SymModuleName_19);
    transform_hlds__ssdebug__PredName_21 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__ssdebug__OrigPredInfo_18);
    hlds__make_goal__make_string_const_construction_alloc_8_p_0(transform_hlds__ssdebug__ModuleName_20, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_5[2]), &transform_hlds__ssdebug__ConstructModuleName_22, &transform_hlds__ssdebug__ModuleNameVar_23, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_31, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_37_37, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_33, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_38_38);
    hlds__make_goal__make_string_const_construction_alloc_8_p_0(transform_hlds__ssdebug__PredName_21, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_5[3]), &transform_hlds__ssdebug__ConstructPredName_24, &transform_hlds__ssdebug__PredNameVar_25, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_37_37, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_41_41, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_38_38, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_42_42);
    transform_hlds__ssdebug__SSDBModule_26 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    {
      transform_hlds__ssdebug__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_44, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_26));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_44, 1) = ((MR_Box) ((MR_String) "ssdb_proc_id"));
    }
    {
      transform_hlds__ssdebug__TypeCtor_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__TypeCtor_27, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_44));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__TypeCtor_27, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "ProcId", transform_hlds__ssdebug__ProcIdVar_12, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_41_41, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_32);
    {
      transform_hlds__ssdebug__ConsId_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_28, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_44));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_28, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_28, 3) = ((MR_Box) (transform_hlds__ssdebug__TypeCtor_27));
    }
    parse_tree__prog_type__construct_type_3_p_0(transform_hlds__ssdebug__TypeCtor_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__ssdebug__ProcIdType_29);
    hlds__vartypes__add_var_type_4_p_0(*transform_hlds__ssdebug__ProcIdVar_12, transform_hlds__ssdebug__ProcIdType_29, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_42_42, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_34);
    {
      transform_hlds__ssdebug__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_55, 0) = ((MR_Box) (transform_hlds__ssdebug__PredNameVar_25));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_54, 0) = ((MR_Box) (transform_hlds__ssdebug__ModuleNameVar_23));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_54, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_55));
    }
    hlds__make_goal__construct_functor_4_p_0(*transform_hlds__ssdebug__ProcIdVar_12, transform_hlds__ssdebug__ConsId_28, transform_hlds__ssdebug__Var_54, &transform_hlds__ssdebug__ConstructProcIdGoal_30);
    {
      transform_hlds__ssdebug__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_58, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructProcIdGoal_30));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_57, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructPredName_24));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_57, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_58));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *transform_hlds__ssdebug__Goals_11 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructModuleName_22));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_57));
    }
  }
}

static void MR_CALL 
transform_hlds__ssdebug__make_handle_event_9_p_0(
  MR_String transform_hlds__ssdebug__HandleTypeString_10,
  MR_Word transform_hlds__ssdebug__Arguments_11,
  MR_Word * transform_hlds__ssdebug__HandleEventGoal_12,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_20,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_21,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_22,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_23,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_24)
{
  {
    MR_Word transform_hlds__ssdebug__SSDBModule_16;
    MR_Word transform_hlds__ssdebug__Context_18;
    MR_Word transform_hlds__ssdebug__Var_29;

    transform_hlds__ssdebug__SSDBModule_16 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    transform_hlds__ssdebug__Context_18 = mercury__term__context_init_0_f_0();
    transform_hlds__ssdebug__Var_29 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__ssdebug__SSDBModule_16, transform_hlds__ssdebug__HandleTypeString_10, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__ssdebug__Arguments_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ssdebug__Var_29, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_19, transform_hlds__ssdebug__Context_18, transform_hlds__ssdebug__HandleEventGoal_12);
    *transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_24 = transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_23;
    *transform_hlds__ssdebug__STATE_VARIABLE_VarSet_22 = transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_21;
    *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_20 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_19;
  }
}

static void MR_CALL 
transform_hlds__ssdebug__commit_goal_changes_10_p_0(
  MR_Word transform_hlds__ssdebug__ConjGoals_11,
  MR_Word transform_hlds__ssdebug__PredId_12,
  MR_Integer transform_hlds__ssdebug__ProcId_13,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_28,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_29,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_30,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_32,
  MR_Word transform_hlds__ssdebug__VarSet_17,
  MR_Word transform_hlds__ssdebug__VarTypes_18)
{
  {
    MR_Word transform_hlds__ssdebug__ConjDetism_19;
    MR_Word transform_hlds__ssdebug__ConjGoalInfo_20;
    MR_Word transform_hlds__ssdebug__Conj_21;
    MR_Word transform_hlds__ssdebug__OrigGoalInfo_23;
    MR_Word transform_hlds__ssdebug__ProcDetism_24;
    MR_Word transform_hlds__ssdebug__ScopeGoalInfo_25;
    MR_Word transform_hlds__ssdebug__Purity_26;
    MR_Word transform_hlds__ssdebug__Goal_27;
    MR_Word transform_hlds__ssdebug__Var_33;
    MR_Word transform_hlds__ssdebug__Var_35;
    MR_Word transform_hlds__ssdebug__Var_36;
    MR_Word transform_hlds__ssdebug__Var_37;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_38_38;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_39_39;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_40_40;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_42_42;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_45_45;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_46_46;
    MR_Word transform_hlds__ssdebug__Var_47;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_48_48;
    MR_Word transform_hlds__ssdebug__GoalInfo0_52;
    MR_Word transform_hlds__ssdebug__GoalInfo1_53;
    MR_Word transform_hlds__ssdebug__Var_22;

    hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__ssdebug__ConjGoals_11, &transform_hlds__ssdebug__ConjDetism_19);
    hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__ssdebug__GoalInfo0_52);
    hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__ssdebug__GoalInfo0_52, &transform_hlds__ssdebug__GoalInfo1_53);
    hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__ConjDetism_19, transform_hlds__ssdebug__GoalInfo1_53, &transform_hlds__ssdebug__ConjGoalInfo_20);
    {
      transform_hlds__ssdebug__Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_33, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_33, 2) = ((MR_Box) (transform_hlds__ssdebug__ConjGoals_11));
    }
    {
      transform_hlds__ssdebug__Conj_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Conj_21, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_33));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Conj_21, 1) = ((MR_Box) (transform_hlds__ssdebug__ConjGoalInfo_20));
    }
    hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_29, &transform_hlds__ssdebug__Var_35);
    transform_hlds__ssdebug__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_35, (MR_Integer) 0)));
    transform_hlds__ssdebug__OrigGoalInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_35, (MR_Integer) 1)));
    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_29, &transform_hlds__ssdebug__ProcDetism_24);
    hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__ProcDetism_24, transform_hlds__ssdebug__OrigGoalInfo_23, &transform_hlds__ssdebug__ScopeGoalInfo_25);
    transform_hlds__ssdebug__Purity_26 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__ssdebug__OrigGoalInfo_23);
    {
      transform_hlds__ssdebug__Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_37, 1) = ((MR_Box) (transform_hlds__ssdebug__Purity_26));
    }
    {
      transform_hlds__ssdebug__Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_36, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_37));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_36, 2) = ((MR_Box) (transform_hlds__ssdebug__Conj_21));
    }
    {
      transform_hlds__ssdebug__Goal_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Goal_27, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_36));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Goal_27, 1) = ((MR_Box) (transform_hlds__ssdebug__ScopeGoalInfo_25));
    }
    hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__ssdebug__VarSet_17, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_29, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_38_38);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__ssdebug__VarTypes_18, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_38_38, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_39_39);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__ssdebug__Goal_27, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_39_39, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_40_40);
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_40_40, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_42_42);
    check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_42_42, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_30, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_31, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_45_45);
    hlds__hlds_pred__pred_info_set_proc_info_4_p_0(transform_hlds__ssdebug__ProcId_13, *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_30, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_28, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_46_46);
    {
      transform_hlds__ssdebug__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_47, 0) = ((MR_Box) (transform_hlds__ssdebug__PredId_12));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_47, 1) = ((MR_Box) (transform_hlds__ssdebug__ProcId_13));
    }
    check_hlds__purity__repuritycheck_proc_4_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_45_45, transform_hlds__ssdebug__Var_47, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_46_46, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_48_48);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(transform_hlds__ssdebug__PredId_12, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_48_48, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_45_45, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_32);
  }
}

static void MR_CALL 
transform_hlds__ssdebug__make_switch_goal_4_p_0(
  MR_Word transform_hlds__ssdebug__SwitchVar_5,
  MR_Word transform_hlds__ssdebug__DoRetryGoal_6,
  MR_Word transform_hlds__ssdebug__DoNotRetryGoal_7,
  MR_Word * transform_hlds__ssdebug__SwitchGoal_8)
{
  {
    MR_Word transform_hlds__ssdebug__SSDBModule_9;
    MR_Word transform_hlds__ssdebug__RetryTypeSymName_10;
    MR_Word transform_hlds__ssdebug__RetryTypeCtor_11;
    MR_Word transform_hlds__ssdebug__ConsIdDoRetry_12;
    MR_Word transform_hlds__ssdebug__ConsIdDoNotRetry_13;
    MR_Word transform_hlds__ssdebug__CaseDoRetry_14;
    MR_Word transform_hlds__ssdebug__CaseDoNotRetry_15;
    MR_Word transform_hlds__ssdebug__SwitchGoalExpr_16;
    MR_Word transform_hlds__ssdebug__RetryGoalInfo_17;
    MR_Word transform_hlds__ssdebug__NoRetryGoalInfo_18;
    MR_Word transform_hlds__ssdebug__RetryDetism_19;
    MR_Word transform_hlds__ssdebug__NoRetryDetism_20;
    MR_Word transform_hlds__ssdebug__SwitchDetism_21;
    MR_Word transform_hlds__ssdebug__GoalInfo0_22;
    MR_Word transform_hlds__ssdebug__GoalInfo1_23;
    MR_Word transform_hlds__ssdebug__GoalInfo_24;
    MR_Word transform_hlds__ssdebug__Var_27;
    MR_Word transform_hlds__ssdebug__Var_30;
    MR_Word transform_hlds__ssdebug__Var_36;
    MR_Word transform_hlds__ssdebug__Var_37;

    transform_hlds__ssdebug__SSDBModule_9 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    {
      transform_hlds__ssdebug__RetryTypeSymName_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__RetryTypeSymName_10, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_9));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__RetryTypeSymName_10, 1) = ((MR_Box) ((MR_String) "ssdb_retry"));
    }
    {
      transform_hlds__ssdebug__RetryTypeCtor_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__RetryTypeCtor_11, 0) = ((MR_Box) (transform_hlds__ssdebug__RetryTypeSymName_10));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__RetryTypeCtor_11, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      transform_hlds__ssdebug__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_27, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_9));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_27, 1) = ((MR_Box) ((MR_String) "do_retry"));
    }
    {
      transform_hlds__ssdebug__ConsIdDoRetry_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsIdDoRetry_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsIdDoRetry_12, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_27));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsIdDoRetry_12, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsIdDoRetry_12, 3) = ((MR_Box) (transform_hlds__ssdebug__RetryTypeCtor_11));
    }
    {
      transform_hlds__ssdebug__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_30, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_9));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_30, 1) = ((MR_Box) ((MR_String) "do_not_retry"));
    }
    {
      transform_hlds__ssdebug__ConsIdDoNotRetry_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsIdDoNotRetry_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsIdDoNotRetry_13, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_30));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsIdDoNotRetry_13, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsIdDoNotRetry_13, 3) = ((MR_Box) (transform_hlds__ssdebug__RetryTypeCtor_11));
    }
    {
      transform_hlds__ssdebug__CaseDoRetry_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__CaseDoRetry_14, 0) = ((MR_Box) (transform_hlds__ssdebug__ConsIdDoRetry_12));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__CaseDoRetry_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__CaseDoRetry_14, 2) = ((MR_Box) (transform_hlds__ssdebug__DoRetryGoal_6));
    }
    {
      transform_hlds__ssdebug__CaseDoNotRetry_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__CaseDoNotRetry_15, 0) = ((MR_Box) (transform_hlds__ssdebug__ConsIdDoNotRetry_13));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__CaseDoNotRetry_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__CaseDoNotRetry_15, 2) = ((MR_Box) (transform_hlds__ssdebug__DoNotRetryGoal_7));
    }
    {
      transform_hlds__ssdebug__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_37, 0) = ((MR_Box) (transform_hlds__ssdebug__CaseDoNotRetry_15));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_36, 0) = ((MR_Box) (transform_hlds__ssdebug__CaseDoRetry_14));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_36, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_37));
    }
    {
      transform_hlds__ssdebug__SwitchGoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__SwitchGoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__SwitchGoalExpr_16, 1) = ((MR_Box) (transform_hlds__ssdebug__SwitchVar_5));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__SwitchGoalExpr_16, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__SwitchGoalExpr_16, 3) = ((MR_Box) (transform_hlds__ssdebug__Var_36));
    }
    transform_hlds__ssdebug__RetryGoalInfo_17 = hlds__hlds_goal__get_hlds_goal_info_1_f_0(transform_hlds__ssdebug__DoRetryGoal_6);
    transform_hlds__ssdebug__NoRetryGoalInfo_18 = hlds__hlds_goal__get_hlds_goal_info_1_f_0(transform_hlds__ssdebug__DoNotRetryGoal_7);
    transform_hlds__ssdebug__RetryDetism_19 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__ssdebug__RetryGoalInfo_17);
    transform_hlds__ssdebug__NoRetryDetism_20 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__ssdebug__NoRetryGoalInfo_18);
    parse_tree__prog_detism__det_switch_detism_3_p_0(transform_hlds__ssdebug__RetryDetism_19, transform_hlds__ssdebug__NoRetryDetism_20, &transform_hlds__ssdebug__SwitchDetism_21);
    hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__ssdebug__GoalInfo0_22);
    hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__SwitchDetism_21, transform_hlds__ssdebug__GoalInfo0_22, &transform_hlds__ssdebug__GoalInfo1_23);
    hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__ssdebug__GoalInfo1_23, &transform_hlds__ssdebug__GoalInfo_24);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__ssdebug__SwitchGoal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ssdebug__SwitchGoalExpr_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfo_24));
    }
  }
}

static void MR_CALL 
transform_hlds__ssdebug__make_recursive_call_6_p_0(
  MR_Word transform_hlds__ssdebug__PredInfo_7,
  MR_Word transform_hlds__ssdebug__ModuleInfo_8,
  MR_Word transform_hlds__ssdebug__PredId_9,
  MR_Integer transform_hlds__ssdebug__ProcId_10,
  MR_Word transform_hlds__ssdebug__HeadVars_11,
  MR_Word * transform_hlds__ssdebug__Goal_12)
{
  {
    MR_String transform_hlds__ssdebug__PredName_13;
    MR_Word transform_hlds__ssdebug__ModuleName_14;
    MR_Word transform_hlds__ssdebug__SymName_15;
    MR_Word transform_hlds__ssdebug__BuiltIn_16;
    MR_Word transform_hlds__ssdebug__GoalExpr_17;
    MR_Word transform_hlds__ssdebug__ProcInfo_18;
    MR_Word transform_hlds__ssdebug__BodyGoal0_19;
    MR_Word transform_hlds__ssdebug__GoalInfoHG0_20;
    MR_Word transform_hlds__ssdebug__Determinism_21;
    MR_Word transform_hlds__ssdebug__GoalInfoHG_22;

    transform_hlds__ssdebug__PredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__ssdebug__PredInfo_7);
    transform_hlds__ssdebug__ModuleName_14 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__ssdebug__PredInfo_7);
    {
      transform_hlds__ssdebug__SymName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__SymName_15, 0) = ((MR_Box) (transform_hlds__ssdebug__ModuleName_14));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__SymName_15, 1) = ((MR_Box) (transform_hlds__ssdebug__PredName_13));
    }
    transform_hlds__ssdebug__BuiltIn_16 = hlds__hlds_pred__builtin_state_4_f_0(transform_hlds__ssdebug__ModuleInfo_8, transform_hlds__ssdebug__PredId_9, transform_hlds__ssdebug__PredId_9, transform_hlds__ssdebug__ProcId_10);
    {
      transform_hlds__ssdebug__GoalExpr_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_17, 0) = ((MR_Box) (transform_hlds__ssdebug__PredId_9));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_17, 1) = ((MR_Box) (transform_hlds__ssdebug__ProcId_10));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_17, 2) = ((MR_Box) (transform_hlds__ssdebug__HeadVars_11));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_17, 3) = ((MR_Box) (transform_hlds__ssdebug__BuiltIn_16));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_17, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_17, 5) = ((MR_Box) (transform_hlds__ssdebug__SymName_15));
    }
    hlds__hlds_pred__pred_info_proc_info_3_p_0(transform_hlds__ssdebug__PredInfo_7, transform_hlds__ssdebug__ProcId_10, &transform_hlds__ssdebug__ProcInfo_18);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__ProcInfo_18, &transform_hlds__ssdebug__BodyGoal0_19);
    transform_hlds__ssdebug__GoalInfoHG0_20 = hlds__hlds_goal__get_hlds_goal_info_1_f_0(transform_hlds__ssdebug__BodyGoal0_19);
    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__ssdebug__ProcInfo_18, &transform_hlds__ssdebug__Determinism_21);
    hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__Determinism_21, transform_hlds__ssdebug__GoalInfoHG0_20, &transform_hlds__ssdebug__GoalInfoHG_22);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__ssdebug__Goal_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ssdebug__GoalExpr_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfoHG_22));
    }
  }
}

static void MR_CALL 
transform_hlds__ssdebug__make_retry_var_6_p_0(
  MR_String transform_hlds__ssdebug__VarName_7,
  MR_Word * transform_hlds__ssdebug__RetryVar_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_14,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_15,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_16,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_17)
{
  {
    MR_Word transform_hlds__ssdebug__SSDBModule_11;
    MR_Word transform_hlds__ssdebug__TypeCtor_12;
    MR_Word transform_hlds__ssdebug__RetryType_13;
    MR_Word transform_hlds__ssdebug__Var_18;

    transform_hlds__ssdebug__SSDBModule_11 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    {
      transform_hlds__ssdebug__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_18, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_11));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_18, 1) = ((MR_Box) ((MR_String) "ssdb_retry"));
    }
    {
      transform_hlds__ssdebug__TypeCtor_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__TypeCtor_12, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_18));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__TypeCtor_12, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(transform_hlds__ssdebug__TypeCtor_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__ssdebug__RetryType_13);
    mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__ssdebug__VarName_7, transform_hlds__ssdebug__RetryVar_8, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_14, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_15);
    hlds__vartypes__add_var_type_4_p_0(*transform_hlds__ssdebug__RetryVar_8, transform_hlds__ssdebug__RetryType_13, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_16, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_17);
  }
}

static void MR_CALL 
transform_hlds__ssdebug__add_promise_equivalent_solutions_3_p_0(
  MR_Word transform_hlds__ssdebug__OutputVars_4,
  MR_Word transform_hlds__ssdebug__Goal0_5,
  MR_Word * transform_hlds__ssdebug__Goal_6)
{
  {
    MR_Word transform_hlds__ssdebug__GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Goal0_5, (MR_Integer) 1)));
    MR_Word transform_hlds__ssdebug__Reason_9;
    MR_Word transform_hlds__ssdebug__Var_11;
    MR_Word transform_hlds__ssdebug__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Goal0_5, (MR_Integer) 0)));

    {
      transform_hlds__ssdebug__Reason_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__Reason_9, 0) = ((MR_Box) (transform_hlds__ssdebug__OutputVars_4));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__Reason_9, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      transform_hlds__ssdebug__Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_11, 1) = ((MR_Box) (transform_hlds__ssdebug__Reason_9));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_11, 2) = ((MR_Box) (transform_hlds__ssdebug__Goal0_5));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__ssdebug__Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfo_8));
    }
  }
}

static void MR_CALL 
transform_hlds__ssdebug__rename_outputs_9_p_0(
  MR_Word transform_hlds__ssdebug__OutputVars_10,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_22,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_Goal_23,
  MR_Word * transform_hlds__ssdebug__UnifyGoal_12,
  MR_Word * transform_hlds__ssdebug__Renaming_13,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_24,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_25,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_26,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_27)
{
  {
    MR_Word transform_hlds__ssdebug__GoalInfo0_16;
    MR_Word transform_hlds__ssdebug__InstMapDelta_17;
    MR_Word transform_hlds__ssdebug__UnifyGoals_18;
    MR_Word transform_hlds__ssdebug__UnifyGoalInfo0_20;
    MR_Word transform_hlds__ssdebug__UnifyGoalInfo_21;
    MR_Word transform_hlds__ssdebug___NewVars_19;

    transform_hlds__ssdebug__GoalInfo0_16 = hlds__hlds_goal__get_hlds_goal_info_1_f_0(transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_22);
    transform_hlds__ssdebug__InstMapDelta_17 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__ssdebug__GoalInfo0_16);
    hlds__goal_util__create_renaming_9_p_0(transform_hlds__ssdebug__OutputVars_10, transform_hlds__ssdebug__InstMapDelta_17, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_24, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_25, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_26, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_27, &transform_hlds__ssdebug__UnifyGoals_18, &transform_hlds__ssdebug___NewVars_19, transform_hlds__ssdebug__Renaming_13);
    hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__ssdebug__UnifyGoalInfo0_20);
    hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__ssdebug__UnifyGoalInfo0_20, &transform_hlds__ssdebug__UnifyGoalInfo_21);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__ssdebug__UnifyGoals_18, transform_hlds__ssdebug__UnifyGoalInfo_21, transform_hlds__ssdebug__UnifyGoal_12);
    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(*transform_hlds__ssdebug__Renaming_13, transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_22, transform_hlds__ssdebug__STATE_VARIABLE_Goal_23);
  }
}

static MR_bool MR_CALL 
transform_hlds__ssdebug__get_output_args_4_p_0_1(
  MR_Box transform_hlds__ssdebug__closure_arg,
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Box transform_hlds__ssdebug__closure = transform_hlds__ssdebug__closure_arg;
    MR_Word transform_hlds__ssdebug__conv0_LambdaHeadVar__3_14;

    transform_hlds__ssdebug__succeeded = transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__1052__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2), &transform_hlds__ssdebug__conv0_LambdaHeadVar__3_14);
    if (transform_hlds__ssdebug__succeeded)
    {
      *transform_hlds__ssdebug__wrapper_arg_3 = ((MR_Box) (transform_hlds__ssdebug__conv0_LambdaHeadVar__3_14));
      transform_hlds__ssdebug__succeeded = MR_TRUE;
    }
    return transform_hlds__ssdebug__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ssdebug__get_output_args_4_p_0(
  MR_Word transform_hlds__ssdebug__ModuleInfo_5,
  MR_Word transform_hlds__ssdebug__HeadVars_6,
  MR_Word transform_hlds__ssdebug__ArgModes_7,
  MR_Word * transform_hlds__ssdebug__OutputVars_8)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__TypeInfo_17_17;
    MR_Word transform_hlds__ssdebug__F_9;

    {
      transform_hlds__ssdebug__F_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__F_9, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__F_9, 1) = ((MR_Box) (transform_hlds__ssdebug__get_output_args_4_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__F_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__F_9, 3) = ((MR_Box) (transform_hlds__ssdebug__ModuleInfo_5));
    }
    transform_hlds__ssdebug__TypeInfo_17_17 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
    *transform_hlds__ssdebug__OutputVars_8 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__ssdebug__TypeInfo_17_17, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__ssdebug__TypeInfo_17_17, transform_hlds__ssdebug__F_9, transform_hlds__ssdebug__HeadVars_6, transform_hlds__ssdebug__ArgModes_7);
  }
}

static void MR_CALL 
transform_hlds__ssdebug__get_stripped_headvars_5_p_0(
  MR_Word transform_hlds__ssdebug__PredInfo_6,
  MR_Word transform_hlds__ssdebug__ProcInfo_7,
  MR_Word * transform_hlds__ssdebug__FullHeadVars_8,
  MR_Word * transform_hlds__ssdebug__HeadVars_9,
  MR_Word * transform_hlds__ssdebug__ArgModes_10)
{
  {
    MR_Word transform_hlds__ssdebug__TypeInfo_15_15;
    MR_Integer transform_hlds__ssdebug__PredArity_11;
    MR_Word transform_hlds__ssdebug__FullArgModes_12;
    MR_Integer transform_hlds__ssdebug__NumHeadVars_13;
    MR_Integer transform_hlds__ssdebug__NumToDrop_14;

    transform_hlds__ssdebug__PredArity_11 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__ssdebug__PredInfo_6);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__ssdebug__ProcInfo_7, transform_hlds__ssdebug__FullHeadVars_8);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__ssdebug__ProcInfo_7, &transform_hlds__ssdebug__FullArgModes_12);
    transform_hlds__ssdebug__TypeInfo_15_15 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
    mercury__list__length_2_p_0(transform_hlds__ssdebug__TypeInfo_15_15, *transform_hlds__ssdebug__FullHeadVars_8, &transform_hlds__ssdebug__NumHeadVars_13);
    transform_hlds__ssdebug__NumToDrop_14 = (transform_hlds__ssdebug__NumHeadVars_13 - transform_hlds__ssdebug__PredArity_11);
    mercury__list__det_drop_3_p_0(transform_hlds__ssdebug__TypeInfo_15_15, transform_hlds__ssdebug__NumToDrop_14, *transform_hlds__ssdebug__FullHeadVars_8, transform_hlds__ssdebug__HeadVars_9);
    mercury__list__det_drop_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__ssdebug__NumToDrop_14, transform_hlds__ssdebug__FullArgModes_12, transform_hlds__ssdebug__ArgModes_10);
  }
}

static void MR_CALL 
transform_hlds__ssdebug__create_proxy_proc_6_p_0(
  MR_Word transform_hlds__ssdebug__PredId_7,
  MR_Integer transform_hlds__ssdebug__ProcId_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_20,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_21,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_23)
{
  {
    MR_Word transform_hlds__ssdebug__Args_12;
    MR_Word transform_hlds__ssdebug__SymName_13;
    MR_Word transform_hlds__ssdebug__CallExpr_14;
    MR_Word transform_hlds__ssdebug__GoalInfo0_16;
    MR_Word transform_hlds__ssdebug__Detism_17;
    MR_Word transform_hlds__ssdebug__GoalInfo_18;
    MR_Word transform_hlds__ssdebug__Goal_19;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_24_24;
    MR_Word transform_hlds__ssdebug__Var_27;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_28_28;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_30_30;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_32_32;
    MR_Word transform_hlds__ssdebug__Var_15;

    hlds__hlds_pred__pred_info_proc_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_20, transform_hlds__ssdebug__ProcId_8, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_24_24);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_24_24, &transform_hlds__ssdebug__Args_12);
    hlds__hlds_pred__pred_info_get_sym_name_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_20, &transform_hlds__ssdebug__SymName_13);
    {
      transform_hlds__ssdebug__CallExpr_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__CallExpr_14, 0) = ((MR_Box) (transform_hlds__ssdebug__PredId_7));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__CallExpr_14, 1) = ((MR_Box) (transform_hlds__ssdebug__ProcId_8));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__CallExpr_14, 2) = ((MR_Box) (transform_hlds__ssdebug__Args_12));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__CallExpr_14, 3) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__CallExpr_14, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__CallExpr_14, 5) = ((MR_Box) (transform_hlds__ssdebug__SymName_13));
    }
    hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_24_24, &transform_hlds__ssdebug__Var_27);
    transform_hlds__ssdebug__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_27, (MR_Integer) 0)));
    transform_hlds__ssdebug__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_27, (MR_Integer) 1)));
    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_24_24, &transform_hlds__ssdebug__Detism_17);
    hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__Detism_17, transform_hlds__ssdebug__GoalInfo0_16, &transform_hlds__ssdebug__GoalInfo_18);
    {
      transform_hlds__ssdebug__Goal_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Goal_19, 0) = ((MR_Box) (transform_hlds__ssdebug__CallExpr_14));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Goal_19, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfo_18));
    }
    hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__ssdebug__Goal_19, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_24_24, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_28_28);
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_28_28, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_30_30);
    check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_30_30, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_32_32, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_23);
    hlds__hlds_pred__pred_info_set_proc_info_4_p_0(transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_32_32, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_20, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_21);
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_case_8_p_0(
  MR_Word transform_hlds__ssdebug__Case0_9,
  MR_Word * transform_hlds__ssdebug__Case_10,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_18,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_19,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_20,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_21,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_23)
{
  {
    MR_Word transform_hlds__ssdebug__MainConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Case0_9, (MR_Integer) 0)));
    MR_Word transform_hlds__ssdebug__OtherConsIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Case0_9, (MR_Integer) 1)));
    MR_Word transform_hlds__ssdebug__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Case0_9, (MR_Integer) 2)));
    MR_Word transform_hlds__ssdebug__Goal_17;

    transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(transform_hlds__ssdebug__Goal0_16, &transform_hlds__ssdebug__Goal_17, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_18, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_19, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_20, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_21, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_23);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__ssdebug__Case_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ssdebug__MainConsId_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ssdebug__OtherConsIds_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ssdebug__Goal_17));
    }
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_proc_6_p_0(
  MR_Word transform_hlds__ssdebug__PredId_7,
  MR_Integer transform_hlds__ssdebug__ProcId_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_15,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_16,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_18)
{
  {
    MR_Word transform_hlds__ssdebug__PredInfo_12;
    MR_Word transform_hlds__ssdebug__Goal0_13;
    MR_Word transform_hlds__ssdebug__Goal_14;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_19_19;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_20_20;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_22_22;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_23_23;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17, transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, &transform_hlds__ssdebug__PredInfo_12, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_19_19);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_19_19, &transform_hlds__ssdebug__Goal0_13);
    transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(transform_hlds__ssdebug__Goal0_13, &transform_hlds__ssdebug__Goal_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_19_19, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_20_20, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_15, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_22_22);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__ssdebug__Goal_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_23_23);
    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__PredInfo_12, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_23_23, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_22_22, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_18);
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_3(
  MR_Box transform_hlds__ssdebug__closure_arg,
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box transform_hlds__ssdebug__wrapper_arg_3,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_4,
  MR_Box transform_hlds__ssdebug__wrapper_arg_5,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_6,
  MR_Box transform_hlds__ssdebug__wrapper_arg_7,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_8)
{
  {
    MR_Box transform_hlds__ssdebug__closure = transform_hlds__ssdebug__closure_arg;
    MR_Word transform_hlds__ssdebug__conv17_Case_10;
    MR_Word transform_hlds__ssdebug__conv16_STATE_VARIABLE_ProcInfo_19;
    MR_Word transform_hlds__ssdebug__conv15_STATE_VARIABLE_ProxyMap_21;
    MR_Word transform_hlds__ssdebug__conv14_STATE_VARIABLE_ModuleInfo_23;

    transform_hlds__ssdebug__ssdebug_first_pass_in_case_8_p_0(((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), &transform_hlds__ssdebug__conv17_Case_10, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_3), &transform_hlds__ssdebug__conv16_STATE_VARIABLE_ProcInfo_19, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_5), &transform_hlds__ssdebug__conv15_STATE_VARIABLE_ProxyMap_21, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_7), &transform_hlds__ssdebug__conv14_STATE_VARIABLE_ModuleInfo_23);
    *transform_hlds__ssdebug__wrapper_arg_2 = ((MR_Box) (transform_hlds__ssdebug__conv17_Case_10));
    *transform_hlds__ssdebug__wrapper_arg_4 = ((MR_Box) (transform_hlds__ssdebug__conv16_STATE_VARIABLE_ProcInfo_19));
    *transform_hlds__ssdebug__wrapper_arg_6 = ((MR_Box) (transform_hlds__ssdebug__conv15_STATE_VARIABLE_ProxyMap_21));
    *transform_hlds__ssdebug__wrapper_arg_8 = ((MR_Box) (transform_hlds__ssdebug__conv14_STATE_VARIABLE_ModuleInfo_23));
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_2(
  MR_Box transform_hlds__ssdebug__closure_arg,
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box transform_hlds__ssdebug__wrapper_arg_3,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_4,
  MR_Box transform_hlds__ssdebug__wrapper_arg_5,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_6,
  MR_Box transform_hlds__ssdebug__wrapper_arg_7,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_8)
{
  {
    MR_Box transform_hlds__ssdebug__closure = transform_hlds__ssdebug__closure_arg;
    MR_Word transform_hlds__ssdebug__conv10_STATE_VARIABLE_Goal_77;
    MR_Word transform_hlds__ssdebug__conv9_STATE_VARIABLE_ProcInfo_79;
    MR_Word transform_hlds__ssdebug__conv8_STATE_VARIABLE_ProxyMap_81;
    MR_Word transform_hlds__ssdebug__conv7_STATE_VARIABLE_ModuleInfo_83;

    transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), &transform_hlds__ssdebug__conv10_STATE_VARIABLE_Goal_77, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_3), &transform_hlds__ssdebug__conv9_STATE_VARIABLE_ProcInfo_79, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_5), &transform_hlds__ssdebug__conv8_STATE_VARIABLE_ProxyMap_81, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_7), &transform_hlds__ssdebug__conv7_STATE_VARIABLE_ModuleInfo_83);
    *transform_hlds__ssdebug__wrapper_arg_2 = ((MR_Box) (transform_hlds__ssdebug__conv10_STATE_VARIABLE_Goal_77));
    *transform_hlds__ssdebug__wrapper_arg_4 = ((MR_Box) (transform_hlds__ssdebug__conv9_STATE_VARIABLE_ProcInfo_79));
    *transform_hlds__ssdebug__wrapper_arg_6 = ((MR_Box) (transform_hlds__ssdebug__conv8_STATE_VARIABLE_ProxyMap_81));
    *transform_hlds__ssdebug__wrapper_arg_8 = ((MR_Box) (transform_hlds__ssdebug__conv7_STATE_VARIABLE_ModuleInfo_83));
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_1(
  MR_Box transform_hlds__ssdebug__closure_arg,
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box transform_hlds__ssdebug__wrapper_arg_3,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_4,
  MR_Box transform_hlds__ssdebug__wrapper_arg_5,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_6,
  MR_Box transform_hlds__ssdebug__wrapper_arg_7,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_8)
{
  {
    MR_Box transform_hlds__ssdebug__closure = transform_hlds__ssdebug__closure_arg;
    MR_Word transform_hlds__ssdebug__conv3_STATE_VARIABLE_Goal_77;
    MR_Word transform_hlds__ssdebug__conv2_STATE_VARIABLE_ProcInfo_79;
    MR_Word transform_hlds__ssdebug__conv1_STATE_VARIABLE_ProxyMap_81;
    MR_Word transform_hlds__ssdebug__conv0_STATE_VARIABLE_ModuleInfo_83;

    transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), &transform_hlds__ssdebug__conv3_STATE_VARIABLE_Goal_77, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_3), &transform_hlds__ssdebug__conv2_STATE_VARIABLE_ProcInfo_79, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_5), &transform_hlds__ssdebug__conv1_STATE_VARIABLE_ProxyMap_81, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_7), &transform_hlds__ssdebug__conv0_STATE_VARIABLE_ModuleInfo_83);
    *transform_hlds__ssdebug__wrapper_arg_2 = ((MR_Box) (transform_hlds__ssdebug__conv3_STATE_VARIABLE_Goal_77));
    *transform_hlds__ssdebug__wrapper_arg_4 = ((MR_Box) (transform_hlds__ssdebug__conv2_STATE_VARIABLE_ProcInfo_79));
    *transform_hlds__ssdebug__wrapper_arg_6 = ((MR_Box) (transform_hlds__ssdebug__conv1_STATE_VARIABLE_ProxyMap_81));
    *transform_hlds__ssdebug__wrapper_arg_8 = ((MR_Box) (transform_hlds__ssdebug__conv0_STATE_VARIABLE_ModuleInfo_83));
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_76,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_Goal_77,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_76, (MR_Integer) 0)));
    MR_Word transform_hlds__ssdebug__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_76, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) transform_hlds__ssdebug__GoalExpr0_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__ssdebug__SubGoal0_65 = (MR_Word) MR_body(((MR_Word) transform_hlds__ssdebug__GoalExpr0_13), (MR_Integer) 0);
          MR_Word transform_hlds__ssdebug__SubGoal_66;
          MR_Word transform_hlds__ssdebug__GoalExpr_152;

          transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(transform_hlds__ssdebug__SubGoal0_65, &transform_hlds__ssdebug__SubGoal_66, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83);
          transform_hlds__ssdebug__GoalExpr_152 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__ssdebug__SubGoal_66);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__ssdebug__STATE_VARIABLE_Goal_77 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ssdebug__GoalExpr_152));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfo0_14));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__ssdebug__Unification0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 3)));
          MR_Word transform_hlds__ssdebug__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 0)));
          MR_Word transform_hlds__ssdebug__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 1)));
          MR_Word transform_hlds__ssdebug__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 2)));
          MR_Word transform_hlds__ssdebug__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 4)));
          MR_Word transform_hlds__ssdebug__ShroudedPredProcId_27;
          MR_Word transform_hlds__ssdebug__ConsId0_21;
          MR_Word transform_hlds__ssdebug__Var_20;
          MR_Word transform_hlds__ssdebug__Var_22;
          MR_Word transform_hlds__ssdebug__Var_23;
          MR_Word transform_hlds__ssdebug__Var_24;
          MR_Word transform_hlds__ssdebug__Var_25;
          MR_Word transform_hlds__ssdebug__Var_26;

          transform_hlds__ssdebug__succeeded = ((MR_tag((MR_Word) transform_hlds__ssdebug__Unification0_18)) == (MR_mktag((MR_Integer) 0)));
          if (transform_hlds__ssdebug__succeeded)
          {
            transform_hlds__ssdebug__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 0)));
            transform_hlds__ssdebug__ConsId0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 1)));
            transform_hlds__ssdebug__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 2)));
            transform_hlds__ssdebug__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 3)));
            transform_hlds__ssdebug__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 4)));
            transform_hlds__ssdebug__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 5)));
            transform_hlds__ssdebug__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 6)));
            transform_hlds__ssdebug__succeeded = ((((MR_tag((MR_Word) transform_hlds__ssdebug__ConsId0_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId0_21, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (transform_hlds__ssdebug__succeeded)
              transform_hlds__ssdebug__ShroudedPredProcId_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId0_21, (MR_Integer) 1)));
          }
          if (transform_hlds__ssdebug__succeeded)
          {
            MR_Word transform_hlds__ssdebug__PredProcId_28;
            MR_Word transform_hlds__ssdebug__PredId_29;
            MR_Integer transform_hlds__ssdebug__ProcId_30;
            MR_Word transform_hlds__ssdebug__MaybeNewPredId_31;

            transform_hlds__ssdebug__PredProcId_28 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(transform_hlds__ssdebug__ShroudedPredProcId_27);
            transform_hlds__ssdebug__PredId_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__PredProcId_28, (MR_Integer) 0)));
            transform_hlds__ssdebug__ProcId_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__PredProcId_28, (MR_Integer) 1)));
            transform_hlds__ssdebug__lookup_proxy_pred_6_p_0(transform_hlds__ssdebug__PredId_29, &transform_hlds__ssdebug__MaybeNewPredId_31, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83);
            if ((transform_hlds__ssdebug__MaybeNewPredId_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *transform_hlds__ssdebug__STATE_VARIABLE_Goal_77 = transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_76;
            else
            {
              MR_Word transform_hlds__ssdebug__NewPredId_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__MaybeNewPredId_31, (MR_Integer) 0)));
              MR_Word transform_hlds__ssdebug__NewPredProcId_33;
              MR_Word transform_hlds__ssdebug__NewShroundPredProcId_34;
              MR_Word transform_hlds__ssdebug__ConsId_35;
              MR_Word transform_hlds__ssdebug__Unification_36;
              MR_Word transform_hlds__ssdebug__GoalExpr_37;
              MR_Word transform_hlds__ssdebug__Var_157;
              MR_Word transform_hlds__ssdebug__Var_159;
              MR_Word transform_hlds__ssdebug__Var_160;
              MR_Word transform_hlds__ssdebug__Var_161;
              MR_Word transform_hlds__ssdebug__Var_162;
              MR_Word transform_hlds__ssdebug__Var_163;
              MR_Word transform_hlds__ssdebug__Var_158;
              MR_Word transform_hlds__ssdebug__Var_164;
              MR_Word transform_hlds__ssdebug__Var_165;
              MR_Word transform_hlds__ssdebug__Var_166;
              MR_Word transform_hlds__ssdebug__Var_168;
              MR_Word transform_hlds__ssdebug__Var_167;

              {
                transform_hlds__ssdebug__NewPredProcId_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__NewPredProcId_33, 0) = ((MR_Box) (transform_hlds__ssdebug__NewPredId_32));
                MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__NewPredProcId_33, 1) = ((MR_Box) (transform_hlds__ssdebug__ProcId_30));
              }
              transform_hlds__ssdebug__NewShroundPredProcId_34 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(transform_hlds__ssdebug__NewPredProcId_33);
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
              {
                transform_hlds__ssdebug__ConsId_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_35, 1) = ((MR_Box) (transform_hlds__ssdebug__NewShroundPredProcId_34));
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_35, 2) = NULL;
              }
              transform_hlds__ssdebug__Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 0)));
              transform_hlds__ssdebug__Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 1)));
              transform_hlds__ssdebug__Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 2)));
              transform_hlds__ssdebug__Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 3)));
              transform_hlds__ssdebug__Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 4)));
              transform_hlds__ssdebug__Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 5)));
              transform_hlds__ssdebug__Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 6)));
              {
                transform_hlds__ssdebug__Unification_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification_36, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_157));
                MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification_36, 1) = ((MR_Box) (transform_hlds__ssdebug__ConsId_35));
                MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification_36, 2) = ((MR_Box) (transform_hlds__ssdebug__Var_159));
                MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification_36, 3) = ((MR_Box) (transform_hlds__ssdebug__Var_160));
                MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification_36, 4) = ((MR_Box) (transform_hlds__ssdebug__Var_161));
                MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification_36, 5) = ((MR_Box) (transform_hlds__ssdebug__Var_162));
                MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification_36, 6) = ((MR_Box) (transform_hlds__ssdebug__Var_163));
              }
              transform_hlds__ssdebug__Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 0)));
              transform_hlds__ssdebug__Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 1)));
              transform_hlds__ssdebug__Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 2)));
              transform_hlds__ssdebug__Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 3)));
              transform_hlds__ssdebug__Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 4)));
              {
                transform_hlds__ssdebug__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr_37, 0) = ((MR_Box) (transform_hlds__ssdebug__Var_164));
                MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr_37, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_165));
                MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr_37, 2) = ((MR_Box) (transform_hlds__ssdebug__Var_166));
                MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr_37, 3) = ((MR_Box) (transform_hlds__ssdebug__Unification_36));
                MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr_37, 4) = ((MR_Box) (transform_hlds__ssdebug__Var_168));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__ssdebug__STATE_VARIABLE_Goal_77 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ssdebug__GoalExpr_37));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfo0_14));
              }
            }
          }
          else
          {
            *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82;
            *transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81 = transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80;
            *transform_hlds__ssdebug__STATE_VARIABLE_Goal_77 = transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_76;
          }
          *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79 = transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__ssdebug__Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 2)));
          MR_Word transform_hlds__ssdebug__Builtin_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 3)));
          MR_Word transform_hlds__ssdebug__Context_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 4)));
          MR_Word transform_hlds__ssdebug__PredId_142 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 0)));
          MR_Integer transform_hlds__ssdebug__ProcId_143 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 1)));
          MR_Word transform_hlds__ssdebug___SymName_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 5)));

          switch (transform_hlds__ssdebug__Builtin_39) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *transform_hlds__ssdebug__STATE_VARIABLE_Goal_77 = transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_76;
                *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79 = transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78;
                *transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81 = transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80;
                *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__ssdebug__STATE_VARIABLE_Goal_124_124;
                MR_Word transform_hlds__ssdebug__MaybeNewPredId_136;

                transform_hlds__ssdebug__lookup_proxy_pred_6_p_0(transform_hlds__ssdebug__PredId_142, &transform_hlds__ssdebug__MaybeNewPredId_136, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83);
                if ((transform_hlds__ssdebug__MaybeNewPredId_136 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  transform_hlds__ssdebug__STATE_VARIABLE_Goal_124_124 = transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_76;
                else
                {
                  MR_Word transform_hlds__ssdebug__NewPredInfo_42;
                  MR_Word transform_hlds__ssdebug__NewModuleName_43;
                  MR_String transform_hlds__ssdebug__NewPredName_44;
                  MR_Word transform_hlds__ssdebug__NewSymName_45;
                  MR_Word transform_hlds__ssdebug__NewPredId_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__MaybeNewPredId_136, (MR_Integer) 0)));
                  MR_Word transform_hlds__ssdebug__GoalExpr_133;

                  hlds__hlds_module__module_info_pred_info_3_p_0(*transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83, transform_hlds__ssdebug__NewPredId_132, &transform_hlds__ssdebug__NewPredInfo_42);
                  transform_hlds__ssdebug__NewModuleName_43 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__ssdebug__NewPredInfo_42);
                  transform_hlds__ssdebug__NewPredName_44 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__ssdebug__NewPredInfo_42);
                  {
                    transform_hlds__ssdebug__NewSymName_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__NewSymName_45, 0) = ((MR_Box) (transform_hlds__ssdebug__NewModuleName_43));
                    MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__NewSymName_45, 1) = ((MR_Box) (transform_hlds__ssdebug__NewPredName_44));
                  }
                  {
                    transform_hlds__ssdebug__GoalExpr_133 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_133, 0) = ((MR_Box) (transform_hlds__ssdebug__NewPredId_132));
                    MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_133, 1) = ((MR_Box) (transform_hlds__ssdebug__ProcId_143));
                    MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_133, 2) = ((MR_Box) (transform_hlds__ssdebug__Args_38));
                    MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_133, 3) = ((MR_Box) (transform_hlds__ssdebug__Builtin_39));
                    MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_133, 4) = ((MR_Box) (transform_hlds__ssdebug__Context_40));
                    MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_133, 5) = ((MR_Box) (transform_hlds__ssdebug__NewSymName_45));
                  }
                  {
                    transform_hlds__ssdebug__STATE_VARIABLE_Goal_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__STATE_VARIABLE_Goal_124_124, 0) = ((MR_Box) (transform_hlds__ssdebug__GoalExpr_133));
                    MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__STATE_VARIABLE_Goal_124_124, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfo0_14));
                  }
                }
                transform_hlds__ssdebug__insert_context_update_call_5_p_0(*transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83, transform_hlds__ssdebug__STATE_VARIABLE_Goal_124_124, transform_hlds__ssdebug__STATE_VARIABLE_Goal_77, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              transform_hlds__ssdebug__insert_context_update_call_5_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82, transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_76, transform_hlds__ssdebug__STATE_VARIABLE_Goal_77, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79);
              *transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81 = transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80;
              *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82;
            }
            break;
          case (MR_Integer) 1:
            {
              *transform_hlds__ssdebug__STATE_VARIABLE_Goal_77 = transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_76;
              *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79 = transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78;
              *transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81 = transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80;
              *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__ssdebug__TypeCtorInfo_177_177 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              MR_Word transform_hlds__ssdebug__ConjType_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 1)));
              MR_Word transform_hlds__ssdebug__Goals0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 2)));
              MR_Word transform_hlds__ssdebug__Goals_60;
              MR_Word transform_hlds__ssdebug__GoalExpr_147;
              MR_Box transform_hlds__ssdebug__conv6_STATE_VARIABLE_ProcInfo_79;
              MR_Box transform_hlds__ssdebug__conv5_STATE_VARIABLE_ProxyMap_81;
              MR_Box transform_hlds__ssdebug__conv4_STATE_VARIABLE_ModuleInfo_83;

              mercury__list__map_foldl3_9_p_1(transform_hlds__ssdebug__TypeCtorInfo_177_177, transform_hlds__ssdebug__TypeCtorInfo_177_177, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[2], transform_hlds__ssdebug__Goals0_59, &transform_hlds__ssdebug__Goals_60, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78)), &transform_hlds__ssdebug__conv6_STATE_VARIABLE_ProcInfo_79, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80)), &transform_hlds__ssdebug__conv5_STATE_VARIABLE_ProxyMap_81, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82)), &transform_hlds__ssdebug__conv4_STATE_VARIABLE_ModuleInfo_83);
              *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79 = ((MR_Word) transform_hlds__ssdebug__conv6_STATE_VARIABLE_ProcInfo_79);
              *transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81 = ((MR_Word) transform_hlds__ssdebug__conv5_STATE_VARIABLE_ProxyMap_81);
              *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83 = ((MR_Word) transform_hlds__ssdebug__conv4_STATE_VARIABLE_ModuleInfo_83);
              {
                transform_hlds__ssdebug__GoalExpr_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_147, 1) = ((MR_Box) (transform_hlds__ssdebug__ConjType_58));
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_147, 2) = ((MR_Box) (transform_hlds__ssdebug__Goals_60));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__ssdebug__STATE_VARIABLE_Goal_77 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ssdebug__GoalExpr_147));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfo0_14));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__ssdebug__TypeCtorInfo_189_189 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              MR_Word transform_hlds__ssdebug__GoalExpr_148;
              MR_Word transform_hlds__ssdebug__Goals0_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 1)));
              MR_Word transform_hlds__ssdebug__Goals_150;
              MR_Box transform_hlds__ssdebug__conv13_STATE_VARIABLE_ProcInfo_79;
              MR_Box transform_hlds__ssdebug__conv12_STATE_VARIABLE_ProxyMap_81;
              MR_Box transform_hlds__ssdebug__conv11_STATE_VARIABLE_ModuleInfo_83;

              mercury__list__map_foldl3_9_p_1(transform_hlds__ssdebug__TypeCtorInfo_189_189, transform_hlds__ssdebug__TypeCtorInfo_189_189, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[3], transform_hlds__ssdebug__Goals0_149, &transform_hlds__ssdebug__Goals_150, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78)), &transform_hlds__ssdebug__conv13_STATE_VARIABLE_ProcInfo_79, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80)), &transform_hlds__ssdebug__conv12_STATE_VARIABLE_ProxyMap_81, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82)), &transform_hlds__ssdebug__conv11_STATE_VARIABLE_ModuleInfo_83);
              *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79 = ((MR_Word) transform_hlds__ssdebug__conv13_STATE_VARIABLE_ProcInfo_79);
              *transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81 = ((MR_Word) transform_hlds__ssdebug__conv12_STATE_VARIABLE_ProxyMap_81);
              *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83 = ((MR_Word) transform_hlds__ssdebug__conv11_STATE_VARIABLE_ModuleInfo_83);
              {
                transform_hlds__ssdebug__GoalExpr_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_148, 1) = ((MR_Box) (transform_hlds__ssdebug__Goals_150));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__ssdebug__STATE_VARIABLE_Goal_77 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ssdebug__GoalExpr_148));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfo0_14));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__ssdebug__TypeCtorInfo_201_201 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
              MR_Word transform_hlds__ssdebug__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 1)));
              MR_Word transform_hlds__ssdebug__CanFail_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 2)));
              MR_Word transform_hlds__ssdebug__Cases0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 3)));
              MR_Word transform_hlds__ssdebug__Cases_64;
              MR_Word transform_hlds__ssdebug__GoalExpr_151;
              MR_Box transform_hlds__ssdebug__conv20_STATE_VARIABLE_ProcInfo_79;
              MR_Box transform_hlds__ssdebug__conv19_STATE_VARIABLE_ProxyMap_81;
              MR_Box transform_hlds__ssdebug__conv18_STATE_VARIABLE_ModuleInfo_83;

              mercury__list__map_foldl3_9_p_1(transform_hlds__ssdebug__TypeCtorInfo_201_201, transform_hlds__ssdebug__TypeCtorInfo_201_201, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[4], transform_hlds__ssdebug__Cases0_63, &transform_hlds__ssdebug__Cases_64, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78)), &transform_hlds__ssdebug__conv20_STATE_VARIABLE_ProcInfo_79, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80)), &transform_hlds__ssdebug__conv19_STATE_VARIABLE_ProxyMap_81, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82)), &transform_hlds__ssdebug__conv18_STATE_VARIABLE_ModuleInfo_83);
              *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79 = ((MR_Word) transform_hlds__ssdebug__conv20_STATE_VARIABLE_ProcInfo_79);
              *transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81 = ((MR_Word) transform_hlds__ssdebug__conv19_STATE_VARIABLE_ProxyMap_81);
              *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83 = ((MR_Word) transform_hlds__ssdebug__conv18_STATE_VARIABLE_ModuleInfo_83);
              {
                transform_hlds__ssdebug__GoalExpr_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_151, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_61));
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_151, 2) = ((MR_Box) (transform_hlds__ssdebug__CanFail_62));
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_151, 3) = ((MR_Box) (transform_hlds__ssdebug__Cases_64));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__ssdebug__STATE_VARIABLE_Goal_77 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ssdebug__GoalExpr_151));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfo0_14));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__ssdebug__Reason_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 1)));
              MR_Word transform_hlds__ssdebug__GoalExpr_153;
              MR_Word transform_hlds__ssdebug__SubGoal0_154 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 2)));
              MR_Word transform_hlds__ssdebug__SubGoal_155;

              transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(transform_hlds__ssdebug__SubGoal0_154, &transform_hlds__ssdebug__SubGoal_155, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83);
              {
                transform_hlds__ssdebug__GoalExpr_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_153, 1) = ((MR_Box) (transform_hlds__ssdebug__Reason_67));
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_153, 2) = ((MR_Box) (transform_hlds__ssdebug__SubGoal_155));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__ssdebug__STATE_VARIABLE_Goal_77 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ssdebug__GoalExpr_153));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfo0_14));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__ssdebug__Vars_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 1)));
              MR_Word transform_hlds__ssdebug__Cond0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 2)));
              MR_Word transform_hlds__ssdebug__Then0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 3)));
              MR_Word transform_hlds__ssdebug__Else0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 4)));
              MR_Word transform_hlds__ssdebug__Cond_72;
              MR_Word transform_hlds__ssdebug__Then_73;
              MR_Word transform_hlds__ssdebug__Else_74;
              MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_87_87;
              MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_88_88;
              MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_89_89;
              MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_90_90;
              MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_91_91;
              MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_92_92;
              MR_Word transform_hlds__ssdebug__GoalExpr_156;

              transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(transform_hlds__ssdebug__Cond0_69, &transform_hlds__ssdebug__Cond_72, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_87_87, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80, &transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_88_88, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_89_89);
              transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(transform_hlds__ssdebug__Then0_70, &transform_hlds__ssdebug__Then_73, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_87_87, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_90_90, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_88_88, &transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_91_91, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_89_89, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_92_92);
              transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(transform_hlds__ssdebug__Else0_71, &transform_hlds__ssdebug__Else_74, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_90_90, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_91_91, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_92_92, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83);
              {
                transform_hlds__ssdebug__GoalExpr_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_156, 1) = ((MR_Box) (transform_hlds__ssdebug__Vars_68));
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_156, 2) = ((MR_Box) (transform_hlds__ssdebug__Cond_72));
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_156, 3) = ((MR_Box) (transform_hlds__ssdebug__Then_73));
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_156, 4) = ((MR_Box) (transform_hlds__ssdebug__Else_74));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__ssdebug__STATE_VARIABLE_Goal_77 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ssdebug__GoalExpr_156));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfo0_14));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ssdebug", (MR_String) "predicate \140transform_hlds.ssdebug.ssdebug_first_pass_in_goal\'/8", (MR_String) "unexpected shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__ssdebug__insert_context_update_call_5_p_0(
  MR_Word transform_hlds__ssdebug__ModuleInfo_6,
  MR_Word transform_hlds__ssdebug__Goal0_7,
  MR_Word * transform_hlds__ssdebug__Goal_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_25,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_26)
{
  {
    MR_Word transform_hlds__ssdebug__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Goal0_7, (MR_Integer) 1)));
    MR_Word transform_hlds__ssdebug__Context_12;
    MR_String transform_hlds__ssdebug__FileName_13;
    MR_Integer transform_hlds__ssdebug__LineNumber_14;
    MR_Word transform_hlds__ssdebug__MakeFileName_17;
    MR_Word transform_hlds__ssdebug__FileNameVar_18;
    MR_Word transform_hlds__ssdebug__MakeLineNumber_19;
    MR_Word transform_hlds__ssdebug__LineNumberVar_20;
    MR_Word transform_hlds__ssdebug__Args_21;
    MR_Word transform_hlds__ssdebug__InstMapDelta_23;
    MR_Word transform_hlds__ssdebug__SetContextGoal_24;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_27_27;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_28_28;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_30_30;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_31_31;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_34_34;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_35_35;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_37_37;
    MR_Word transform_hlds__ssdebug__Var_39;
    MR_Word transform_hlds__ssdebug__Var_41;
    MR_Word transform_hlds__ssdebug__Var_47;
    MR_Word transform_hlds__ssdebug__Var_48;
    MR_Word transform_hlds__ssdebug__Var_49;
    MR_Word transform_hlds__ssdebug__Var_50;
    MR_Word transform_hlds__ssdebug__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Goal0_7, (MR_Integer) 0)));

    transform_hlds__ssdebug__Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__ssdebug__GoalInfo_11);
    transform_hlds__ssdebug__FileName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Context_12, (MR_Integer) 0)));
    transform_hlds__ssdebug__LineNumber_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Context_12, (MR_Integer) 1)));
    hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_25, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_27_27);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_25, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_28_28);
    hlds__make_goal__make_string_const_construction_alloc_8_p_0(transform_hlds__ssdebug__FileName_13, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_5[0]), &transform_hlds__ssdebug__MakeFileName_17, &transform_hlds__ssdebug__FileNameVar_18, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_27_27, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_30_30, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_28_28, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_31_31);
    hlds__make_goal__make_int_const_construction_alloc_8_p_0(transform_hlds__ssdebug__LineNumber_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_5[1]), &transform_hlds__ssdebug__MakeLineNumber_19, &transform_hlds__ssdebug__LineNumberVar_20, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_30_30, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_34_34, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_31_31, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_35_35);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_VarSet_34_34, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_25, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_37_37);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_35_35, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_37_37, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_26);
    {
      transform_hlds__ssdebug__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_39, 0) = ((MR_Box) (transform_hlds__ssdebug__LineNumberVar_20));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Args_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Args_21, 0) = ((MR_Box) (transform_hlds__ssdebug__FileNameVar_18));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Args_21, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_39));
    }
    hlds__instmap__instmap_delta_init_reachable_1_p_0(&transform_hlds__ssdebug__InstMapDelta_23);
    transform_hlds__ssdebug__Var_41 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__ssdebug__Var_41, (MR_String) "set_context", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__ssdebug__Args_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ssdebug__InstMapDelta_23, transform_hlds__ssdebug__ModuleInfo_6, transform_hlds__ssdebug__Context_12, &transform_hlds__ssdebug__SetContextGoal_24);
    {
      transform_hlds__ssdebug__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_50, 0) = ((MR_Box) (transform_hlds__ssdebug__Goal0_7));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_49, 0) = ((MR_Box) (transform_hlds__ssdebug__SetContextGoal_24));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_49, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_50));
    }
    {
      transform_hlds__ssdebug__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_48, 0) = ((MR_Box) (transform_hlds__ssdebug__MakeLineNumber_19));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_48, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_49));
    }
    {
      transform_hlds__ssdebug__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_47, 0) = ((MR_Box) (transform_hlds__ssdebug__MakeFileName_17));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Var_47, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_48));
    }
    hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__ssdebug__Var_47, transform_hlds__ssdebug__GoalInfo_11, transform_hlds__ssdebug__Goal_8);
  }
}

static void MR_CALL 
transform_hlds__ssdebug__lookup_proxy_pred_6_p_0_1(
  MR_Box transform_hlds__ssdebug__closure_arg,
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3,
  MR_Box transform_hlds__ssdebug__wrapper_arg_4,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__ssdebug__closure = transform_hlds__ssdebug__closure_arg;
    MR_Word transform_hlds__ssdebug__conv2_STATE_VARIABLE_PredInfo_21;
    MR_Word transform_hlds__ssdebug__conv1_STATE_VARIABLE_ModuleInfo_23;

    transform_hlds__ssdebug__create_proxy_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__ssdebug__wrapper_arg_1), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2), &transform_hlds__ssdebug__conv2_STATE_VARIABLE_PredInfo_21, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_4), &transform_hlds__ssdebug__conv1_STATE_VARIABLE_ModuleInfo_23);
    *transform_hlds__ssdebug__wrapper_arg_3 = ((MR_Box) (transform_hlds__ssdebug__conv2_STATE_VARIABLE_PredInfo_21));
    *transform_hlds__ssdebug__wrapper_arg_5 = ((MR_Box) (transform_hlds__ssdebug__conv1_STATE_VARIABLE_ModuleInfo_23));
  }
}

static void MR_CALL 
transform_hlds__ssdebug__lookup_proxy_pred_6_p_0(
  MR_Word transform_hlds__ssdebug__PredId_7,
  MR_Word * transform_hlds__ssdebug__MaybeNewPredId_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_15,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_16,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_18)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__MaybeNewPredId0_11;
    MR_Box transform_hlds__ssdebug__conv0_MaybeNewPredId0_11;

    transform_hlds__ssdebug__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_1[0], transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_15, ((MR_Box) (transform_hlds__ssdebug__PredId_7)), &transform_hlds__ssdebug__conv0_MaybeNewPredId0_11);
    if (transform_hlds__ssdebug__succeeded)
    {
      transform_hlds__ssdebug__MaybeNewPredId0_11 = ((MR_Word) transform_hlds__ssdebug__conv0_MaybeNewPredId0_11);
      transform_hlds__ssdebug__succeeded = MR_TRUE;
    }
    if (transform_hlds__ssdebug__succeeded)
    {
      *transform_hlds__ssdebug__MaybeNewPredId_8 = transform_hlds__ssdebug__MaybeNewPredId0_11;
      *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_18 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17;
      *transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_16 = transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_15;
    }
    else
    {
      MR_Word transform_hlds__ssdebug__PredInfo_12;
      MR_Word transform_hlds__ssdebug__PredModule_13;

      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17, transform_hlds__ssdebug__PredId_7, &transform_hlds__ssdebug__PredInfo_12);
      transform_hlds__ssdebug__PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__ssdebug__PredInfo_12);
      transform_hlds__ssdebug__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(transform_hlds__ssdebug__PredModule_13);
      if (transform_hlds__ssdebug__succeeded)
      {
        MR_Word transform_hlds__ssdebug__NewPredId_14;
        MR_Word transform_hlds__ssdebug__ProcIds_31;
        MR_String transform_hlds__ssdebug__Name_32;
        MR_Word transform_hlds__ssdebug__Origin_33;
        MR_Word transform_hlds__ssdebug__NewOrigin_34;
        MR_Word transform_hlds__ssdebug__PredTable0_35;
        MR_Word transform_hlds__ssdebug__PredTable_36;
        MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_17_37;
        MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_19_39;
        MR_Word transform_hlds__ssdebug__Var_41;
        MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_22_42;
        MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_23_43;
        MR_String transform_hlds__ssdebug__Var_44;
        MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_25_45;
        MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_28_48;
        MR_Box transform_hlds__ssdebug__conv4_STATE_VARIABLE_PredInfo_22_42;
        MR_Box transform_hlds__ssdebug__conv3_STATE_VARIABLE_ModuleInfo_23_43;

        hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17, transform_hlds__ssdebug__PredId_7, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_17_37);
        hlds__hlds_pred__pred_info_set_status_3_p_0((MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))), transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_17_37, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_19_39);
        transform_hlds__ssdebug__ProcIds_31 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_19_39);
        {
          transform_hlds__ssdebug__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_41, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_41, 1) = ((MR_Box) (transform_hlds__ssdebug__lookup_proxy_pred_6_p_0_1));
          MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_41, 3) = ((MR_Box) (transform_hlds__ssdebug__PredId_7));
        }
        mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__ssdebug__Var_41, transform_hlds__ssdebug__ProcIds_31, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_19_39)), &transform_hlds__ssdebug__conv4_STATE_VARIABLE_PredInfo_22_42, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17)), &transform_hlds__ssdebug__conv3_STATE_VARIABLE_ModuleInfo_23_43);
        transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_22_42 = ((MR_Word) transform_hlds__ssdebug__conv4_STATE_VARIABLE_PredInfo_22_42);
        transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_23_43 = ((MR_Word) transform_hlds__ssdebug__conv3_STATE_VARIABLE_ModuleInfo_23_43);
        transform_hlds__ssdebug__Name_32 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_22_42);
        transform_hlds__ssdebug__Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "SSDBPR__", transform_hlds__ssdebug__Name_32);
        hlds__hlds_pred__pred_info_set_name_3_p_0(transform_hlds__ssdebug__Var_44, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_22_42, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_25_45);
        hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_25_45, &transform_hlds__ssdebug__Origin_33);
        {
          transform_hlds__ssdebug__NewOrigin_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__NewOrigin_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
          MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__NewOrigin_34, 1) = ((MR_Box) (transform_hlds__ssdebug__Origin_33));
          MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__NewOrigin_34, 2) = ((MR_Box) (transform_hlds__ssdebug__PredId_7));
        }
        hlds__hlds_pred__pred_info_set_origin_3_p_0(transform_hlds__ssdebug__NewOrigin_34, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_25_45, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_28_48);
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_23_43, &transform_hlds__ssdebug__PredTable0_35);
        hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_28_48, &transform_hlds__ssdebug__NewPredId_14, transform_hlds__ssdebug__PredTable0_35, &transform_hlds__ssdebug__PredTable_36);
        hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__ssdebug__PredTable_36, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_23_43, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__ssdebug__MaybeNewPredId_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ssdebug__NewPredId_14));
        }
      }
      else
      {
        *transform_hlds__ssdebug__MaybeNewPredId_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_18 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17;
      }
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_1[0], ((MR_Box) (transform_hlds__ssdebug__PredId_7)), ((MR_Box) (*transform_hlds__ssdebug__MaybeNewPredId_8)), transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_15, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_16);
    }
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_pred_5_p_0_1(
  MR_Box transform_hlds__ssdebug__closure_arg,
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3,
  MR_Box transform_hlds__ssdebug__wrapper_arg_4,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__ssdebug__closure = transform_hlds__ssdebug__closure_arg;
    MR_Word transform_hlds__ssdebug__conv1_STATE_VARIABLE_ProxyMap_16;
    MR_Word transform_hlds__ssdebug__conv0_STATE_VARIABLE_ModuleInfo_18;

    transform_hlds__ssdebug__ssdebug_first_pass_in_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__ssdebug__wrapper_arg_1), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2), &transform_hlds__ssdebug__conv1_STATE_VARIABLE_ProxyMap_16, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_4), &transform_hlds__ssdebug__conv0_STATE_VARIABLE_ModuleInfo_18);
    *transform_hlds__ssdebug__wrapper_arg_3 = ((MR_Box) (transform_hlds__ssdebug__conv1_STATE_VARIABLE_ProxyMap_16));
    *transform_hlds__ssdebug__wrapper_arg_5 = ((MR_Box) (transform_hlds__ssdebug__conv0_STATE_VARIABLE_ModuleInfo_18));
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_pred_5_p_0(
  MR_Word transform_hlds__ssdebug__PredId_6,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_11,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_12,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_14)
{
  {
    MR_Word transform_hlds__ssdebug__PredInfo_9;
    MR_Word transform_hlds__ssdebug__ProcIds_10;
    MR_Word transform_hlds__ssdebug__Var_15;
    MR_Box transform_hlds__ssdebug__conv3_STATE_VARIABLE_ProxyMap_12;
    MR_Box transform_hlds__ssdebug__conv2_STATE_VARIABLE_ModuleInfo_14;

    hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_13, transform_hlds__ssdebug__PredId_6, &transform_hlds__ssdebug__PredInfo_9);
    transform_hlds__ssdebug__ProcIds_10 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(transform_hlds__ssdebug__PredInfo_9);
    {
      transform_hlds__ssdebug__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_15, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_15, 1) = ((MR_Box) (transform_hlds__ssdebug__ssdebug_first_pass_in_pred_5_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_15, 3) = ((MR_Box) (transform_hlds__ssdebug__PredId_6));
    }
    mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__ssdebug__Var_15, transform_hlds__ssdebug__ProcIds_10, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_11)), &transform_hlds__ssdebug__conv3_STATE_VARIABLE_ProxyMap_12, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_13)), &transform_hlds__ssdebug__conv2_STATE_VARIABLE_ModuleInfo_14);
    *transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_12 = ((MR_Word) transform_hlds__ssdebug__conv3_STATE_VARIABLE_ProxyMap_12);
    *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_14 = ((MR_Word) transform_hlds__ssdebug__conv2_STATE_VARIABLE_ModuleInfo_14);
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_5_p_0_3(
  MR_Box transform_hlds__ssdebug__closure_arg,
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3,
  MR_Box transform_hlds__ssdebug__wrapper_arg_4,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__ssdebug__closure = transform_hlds__ssdebug__closure_arg;
    MR_Word transform_hlds__ssdebug__conv7_STATE_VARIABLE_ProcInfo_15;
    MR_Word transform_hlds__ssdebug__conv6_STATE_VARIABLE_ModuleInfo_17;

    transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2), &transform_hlds__ssdebug__conv7_STATE_VARIABLE_ProcInfo_15, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_4), &transform_hlds__ssdebug__conv6_STATE_VARIABLE_ModuleInfo_17);
    *transform_hlds__ssdebug__wrapper_arg_3 = ((MR_Box) (transform_hlds__ssdebug__conv7_STATE_VARIABLE_ProcInfo_15));
    *transform_hlds__ssdebug__wrapper_arg_5 = ((MR_Box) (transform_hlds__ssdebug__conv6_STATE_VARIABLE_ModuleInfo_17));
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_5_p_0_2(
  MR_Box transform_hlds__ssdebug__closure_arg,
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3,
  MR_Box transform_hlds__ssdebug__wrapper_arg_4,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__ssdebug__closure = transform_hlds__ssdebug__closure_arg;
    MR_Word transform_hlds__ssdebug__conv5_STATE_VARIABLE_ProcInfo_15;
    MR_Word transform_hlds__ssdebug__conv4_STATE_VARIABLE_ModuleInfo_17;

    transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2), &transform_hlds__ssdebug__conv5_STATE_VARIABLE_ProcInfo_15, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_4), &transform_hlds__ssdebug__conv4_STATE_VARIABLE_ModuleInfo_17);
    *transform_hlds__ssdebug__wrapper_arg_3 = ((MR_Box) (transform_hlds__ssdebug__conv5_STATE_VARIABLE_ProcInfo_15));
    *transform_hlds__ssdebug__wrapper_arg_5 = ((MR_Box) (transform_hlds__ssdebug__conv4_STATE_VARIABLE_ModuleInfo_17));
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_5_p_0_1(
  MR_Box transform_hlds__ssdebug__closure_arg,
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3,
  MR_Box transform_hlds__ssdebug__wrapper_arg_4,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__ssdebug__closure = transform_hlds__ssdebug__closure_arg;
    MR_Word transform_hlds__ssdebug__conv1_STATE_VARIABLE_ProxyMap_12;
    MR_Word transform_hlds__ssdebug__conv0_STATE_VARIABLE_ModuleInfo_14;

    transform_hlds__ssdebug__ssdebug_first_pass_in_pred_5_p_0(((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2), &transform_hlds__ssdebug__conv1_STATE_VARIABLE_ProxyMap_12, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_4), &transform_hlds__ssdebug__conv0_STATE_VARIABLE_ModuleInfo_14);
    *transform_hlds__ssdebug__wrapper_arg_3 = ((MR_Box) (transform_hlds__ssdebug__conv1_STATE_VARIABLE_ProxyMap_12));
    *transform_hlds__ssdebug__wrapper_arg_5 = ((MR_Box) (transform_hlds__ssdebug__conv0_STATE_VARIABLE_ModuleInfo_14));
  }
}

void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_5_p_0(
  MR_Word transform_hlds__ssdebug__SSTraceLevel_6,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_10)
{
  switch (transform_hlds__ssdebug__SSTraceLevel_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Word transform_hlds__ssdebug__TypeCtorInfo_16_43;
        MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_13_13;
        MR_Word transform_hlds__ssdebug__Var_14;
        MR_Word transform_hlds__ssdebug__Var_16;
        MR_Word transform_hlds__ssdebug__PredIds_33;
        MR_Word transform_hlds__ssdebug__Var_36;
        MR_Word transform_hlds__ssdebug___ProxyMap_34;
        MR_Box transform_hlds__ssdebug__conv3__ProxyMap_34;
        MR_Box transform_hlds__ssdebug__conv2_STATE_VARIABLE_ModuleInfo_13_13;

        hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__ssdebug__PredIds_33);
        transform_hlds__ssdebug__TypeCtorInfo_16_43 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
        transform_hlds__ssdebug__Var_36 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeCtorInfo_16_43, (MR_Word) &transform_hlds__ssdebug_scalar_common_1[0]);
        mercury__list__foldl2_6_p_0(transform_hlds__ssdebug__TypeCtorInfo_16_43, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[1], transform_hlds__ssdebug__PredIds_33, ((MR_Box) (transform_hlds__ssdebug__Var_36)), &transform_hlds__ssdebug__conv3__ProxyMap_34, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_9)), &transform_hlds__ssdebug__conv2_STATE_VARIABLE_ModuleInfo_13_13);
        transform_hlds__ssdebug___ProxyMap_34 = ((MR_Word) transform_hlds__ssdebug__conv3__ProxyMap_34);
        transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_13_13 = ((MR_Word) transform_hlds__ssdebug__conv2_STATE_VARIABLE_ModuleInfo_13_13);
        {
          transform_hlds__ssdebug__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_16, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_16, 1) = ((MR_Box) (transform_hlds__ssdebug__ssdebug_transform_module_5_p_0_2));
          MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_16, 3) = ((MR_Box) (transform_hlds__ssdebug__SSTraceLevel_6));
        }
        {
          transform_hlds__ssdebug__Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_14, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_16));
        }
        hlds__passes_aux__process_all_nonimported_procs_3_p_0(transform_hlds__ssdebug__Var_14, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_13_13, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_10);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word transform_hlds__ssdebug__Var_17;
        MR_Word transform_hlds__ssdebug__Var_19;

        {
          transform_hlds__ssdebug__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_19, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_19, 1) = ((MR_Box) (transform_hlds__ssdebug__ssdebug_transform_module_5_p_0_3));
          MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Var_19, 3) = ((MR_Box) (transform_hlds__ssdebug__SSTraceLevel_6));
        }
        {
          transform_hlds__ssdebug__Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__Var_17, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_19));
        }
        hlds__passes_aux__process_all_nonimported_procs_3_p_0(transform_hlds__ssdebug__Var_17, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_9, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_10);
      }
      break;
  }
}

static MR_bool MR_CALL 
transform_hlds__ssdebug____Unify____proxy_map_0_0_10001(
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box transform_hlds__ssdebug__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;

    transform_hlds__ssdebug__succeeded = transform_hlds__ssdebug____Unify____proxy_map_0_0(((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2));
    return transform_hlds__ssdebug__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ssdebug____Compare____proxy_map_0_0_10001(
  MR_Box * transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box transform_hlds__ssdebug__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__ssdebug__conv0_HeadVar__1_1;

    transform_hlds__ssdebug____Compare____proxy_map_0_0(&transform_hlds__ssdebug__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_3));
    *transform_hlds__ssdebug__wrapper_arg_1 = ((MR_Box) (transform_hlds__ssdebug__conv0_HeadVar__1_1));
  }
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

/* :- end_module transform_hlds.ssdebug. */
