/*
** Automatically generated from `ssdebug.m'
** by the Mercury compiler,
** version rotd-2016-03-21
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
#include "check_hlds.purity.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
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
  MR_Word transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_31;
  jmp_buf transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__commit_0;
  MR_Word transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_46;
  MR_Box transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv0_Mode_46;
  MR_Word transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_57;
  jmp_buf transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__commit_1;
  MR_Word transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_72;
  MR_Box transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv1_Mode_72;
};


static const MR_FA_TypeInfo_Struct1 transform_hlds__ssdebug__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ssdebug__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ssdebug__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__ssdebug__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static MR_bool MR_CALL 
transform_hlds__ssdebug____Unify____proxy_map_0_0_10001(
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box transform_hlds__ssdebug__wrapper_arg_2);

static void MR_CALL 
transform_hlds__ssdebug____Compare____proxy_map_0_0_10001(
  MR_Box * transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box transform_hlds__ssdebug__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ssdebug__IntroducedFrom__pred__make_var_value__1432__1_2_p_0(
  MR_Word transform_hlds__ssdebug__PolySpecs_45,
  MR_Word transform_hlds__ssdebug__HeadVar__2_85);

static MR_bool MR_CALL 
transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__1043__1_3_f_0(
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

static void MR_CALL 
transform_hlds__ssdebug__make_level_construction_7_p_0(
  MR_Word transform_hlds__ssdebug__ModuleInfo_8,
  MR_Word * transform_hlds__ssdebug__Goal_9,
  MR_Word * transform_hlds__ssdebug__LevelVar_10,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_15,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_16,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_17,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_18);

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

static MR_Word MR_CALL 
transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0(
  MR_Word transform_hlds__ssdebug__Detism_3);

static MR_Word MR_CALL 
transform_hlds__ssdebug__impure_goal_info_1_f_0(
  MR_Word transform_hlds__ssdebug__Detism_3);

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
transform_hlds__ssdebug__ssdebug_process_proc_erroneous_6_p_0(
  MR_Word transform_hlds__ssdebug__PredId_7,
  MR_Integer transform_hlds__ssdebug__ProcId_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_28,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_29,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_30,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_31);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_failure_6_p_0(
  MR_Word transform_hlds__ssdebug__PredId_7,
  MR_Integer transform_hlds__ssdebug__ProcId_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_36,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_37,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_39);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_nondet_6_p_0(
  MR_Word transform_hlds__ssdebug__PredId_7,
  MR_Integer transform_hlds__ssdebug__ProcId_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_49,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_50,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_52);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_semi_6_p_0(
  MR_Word transform_hlds__ssdebug__PredId_7,
  MR_Integer transform_hlds__ssdebug__ProcId_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_60,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_61,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_62,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_63);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_det_6_p_0(
  MR_Word transform_hlds__ssdebug__PredId_7,
  MR_Integer transform_hlds__ssdebug__ProcId_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_45,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_46,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_48);

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
transform_hlds__ssdebug__insert_context_update_call_5_p_0(
  MR_Word transform_hlds__ssdebug__ModuleInfo_6,
  MR_Word transform_hlds__ssdebug__Goal0_7,
  MR_Word * transform_hlds__ssdebug__Goal_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_25,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_26);

static void MR_CALL 
transform_hlds__ssdebug__create_proxy_proc_6_p_0(
  MR_Word transform_hlds__ssdebug__PredId_7,
  MR_Integer transform_hlds__ssdebug__ProcId_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_20,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_21,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_23);

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
transform_hlds__ssdebug__ssdebug_first_pass_in_proc_6_p_0(
  MR_Word transform_hlds__ssdebug__PredId_7,
  MR_Integer transform_hlds__ssdebug__ProcId_8,
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
transform_hlds__ssdebug__ssdebug_transform_module_4_p_0_3(
  MR_Box transform_hlds__ssdebug__closure_arg,
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3,
  MR_Box transform_hlds__ssdebug__wrapper_arg_4,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_5);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_4_p_0_2(
  MR_Box transform_hlds__ssdebug__closure_arg,
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3,
  MR_Box transform_hlds__ssdebug__wrapper_arg_4,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_5);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_4_p_0_1(
  MR_Box transform_hlds__ssdebug__closure_arg,
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3,
  MR_Box transform_hlds__ssdebug__wrapper_arg_4,
  MR_Box * transform_hlds__ssdebug__wrapper_arg_5);


static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_2[5][3];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_3[1][8];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_4[3][9];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_5[2][11];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_6[8][1];

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
    ((MR_Box) (&transform_hlds__ssdebug_scalar_common_6[5])),
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
    ((MR_Box) (transform_hlds__ssdebug__ssdebug_transform_module_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__ssdebug_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__ssdebug_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__ssdebug_scalar_common_5[1])),
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

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_5[2][11] = {
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

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_6[8][1] = {
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
    ((MR_Box) ((MR_String) "list"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "VarName"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "VarPos"))
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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
transform_hlds__ssdebug____Unify____proxy_map_0_0_10001(
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
  MR_Box transform_hlds__ssdebug__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;

    {
      transform_hlds__ssdebug__succeeded = transform_hlds__ssdebug____Unify____proxy_map_0_0(((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2));
    }
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

    {
      transform_hlds__ssdebug____Compare____proxy_map_0_0(&transform_hlds__ssdebug__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_3));
    }
    *transform_hlds__ssdebug__wrapper_arg_1 = ((MR_Box) (transform_hlds__ssdebug__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ssdebug__IntroducedFrom__pred__make_var_value__1432__1_2_p_0(
  MR_Word transform_hlds__ssdebug__PolySpecs_45,
  MR_Word transform_hlds__ssdebug__HeadVar__2_85)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;

    {
      transform_hlds__ssdebug__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ssdebug_scalar_common_1[2], ((MR_Box) (transform_hlds__ssdebug__PolySpecs_45)), ((MR_Box) (transform_hlds__ssdebug__HeadVar__2_85)));
    }
    return transform_hlds__ssdebug__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__1043__1_3_f_0(
  MR_Word transform_hlds__ssdebug__ModuleInfo_5,
  MR_Word transform_hlds__ssdebug__LambdaHeadVar__1_12,
  MR_Word transform_hlds__ssdebug__LambdaHeadVar__2_13,
  MR_Word * transform_hlds__ssdebug__LambdaHeadVar__3_14)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;

    {
      transform_hlds__ssdebug__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(transform_hlds__ssdebug__ModuleInfo_5, transform_hlds__ssdebug__LambdaHeadVar__2_13);
    }
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
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__Cast_HeadVar1_4 = transform_hlds__ssdebug__HeadVar__2_2;
    MR_Word transform_hlds__ssdebug__Cast_HeadVar2_5 = transform_hlds__ssdebug__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ssdebug_scalar_common_2[0], transform_hlds__ssdebug__HeadVar__1_1, ((MR_Box) (transform_hlds__ssdebug__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__ssdebug__Cast_HeadVar2_5)));
    }
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

    {
      transform_hlds__ssdebug__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ssdebug_scalar_common_2[0], ((MR_Box) (transform_hlds__ssdebug__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__ssdebug__Cast_HeadVar2_4)));
    }
    return transform_hlds__ssdebug__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__ssdebug__make_var_value_18_p_0_1(
  MR_Box transform_hlds__ssdebug__closure_arg)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Box transform_hlds__ssdebug__closure = transform_hlds__ssdebug__closure_arg;

    {
      transform_hlds__ssdebug__succeeded = transform_hlds__ssdebug__IntroducedFrom__pred__make_var_value__1432__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__closure, (MR_Integer) 4))));
    }
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
    MR_Word transform_hlds__ssdebug__V_62_62;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_67_67;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_68_68;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_71_71;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_72_72;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_75_75;

    {
      transform_hlds__ssdebug__SSDBModule_31 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    }
    {
      transform_hlds__ssdebug__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_62_62, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_31));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_62_62, 1) = ((MR_Box) ((MR_String) "var_value"));
    }
    {
      transform_hlds__ssdebug__VarValueTypeCtor_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__VarValueTypeCtor_32, 0) = ((MR_Box) (transform_hlds__ssdebug__V_62_62));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__VarValueTypeCtor_32, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__prog_type__construct_type_3_p_0(transform_hlds__ssdebug__VarValueTypeCtor_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__ssdebug__VarValueType_33);
    }
    transform_hlds__ssdebug__TypeCtorInfo_120_120 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__lookup_name_3_p_0(transform_hlds__ssdebug__TypeCtorInfo_120_120, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_56, transform_hlds__ssdebug__VarToInspect_20, &transform_hlds__ssdebug__VarName_34);
    }
    {
      hlds__make_goal__make_string_const_construction_alloc_8_p_0(transform_hlds__ssdebug__VarName_34, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_6[6]), &transform_hlds__ssdebug__ConstructVarName_35, &transform_hlds__ssdebug__VarNameVar_36, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_56, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_67_67, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_58, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_68_68);
    }
    {
      hlds__make_goal__make_int_const_construction_alloc_8_p_0(transform_hlds__ssdebug__VarPos_23, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_6[7]), &transform_hlds__ssdebug__ConstructVarPos_37, &transform_hlds__ssdebug__VarPosVar_38, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_67_67, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_71_71, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_68_68, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_72_72);
    }
    {
      mercury__varset__new_named_var_4_p_0(transform_hlds__ssdebug__TypeCtorInfo_120_120, (MR_String) "VarDesc", transform_hlds__ssdebug__VarDesc_22, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_71_71, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_75_75);
    }
    {
      transform_hlds__ssdebug__succeeded = hlds__instmap__var_is_ground_in_instmap_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_50, transform_hlds__ssdebug__InstMap_19, transform_hlds__ssdebug__VarToInspect_20);
    }
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
        MR_Word transform_hlds__ssdebug__V_81_81;
        MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_87_87;
        MR_Word transform_hlds__ssdebug__V_88_88;
        MR_Word transform_hlds__ssdebug__V_103_103;
        MR_Word transform_hlds__ssdebug__V_104_104;
        MR_Word transform_hlds__ssdebug__V_105_105;
        MR_Word transform_hlds__ssdebug__TypeInfo_122_122;

        {
          hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_VarSet_75_75, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_52, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_76_76);
        }
        {
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_72_72, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_76_76, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_77_77);
        }
        {
          check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_50, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_54, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_77_77, &transform_hlds__ssdebug__PolyInfo0_39);
        }
        {
          mercury__term__context_init_1_p_0(&transform_hlds__ssdebug__Context_40);
        }
        {
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_72_72, transform_hlds__ssdebug__VarToInspect_20, &transform_hlds__ssdebug__MerType_41);
        }
        {
          check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__ssdebug__MerType_41, transform_hlds__ssdebug__Context_40, &transform_hlds__ssdebug__TypeInfoVar_42, &transform_hlds__ssdebug__TypeInfoGoals0_43, transform_hlds__ssdebug__PolyInfo0_39, &transform_hlds__ssdebug__PolyInfo_44);
        }
        {
          check_hlds__polymorphism__poly_info_extract_7_p_0(transform_hlds__ssdebug__PolyInfo_44, &transform_hlds__ssdebug__PolySpecs_45, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_54, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_55, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_77_77, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_53, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_51);
        }
        {
          transform_hlds__ssdebug__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_81_81, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_81_81, 1) = ((MR_Box) (transform_hlds__ssdebug__make_var_value_18_p_0_1));
          MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_81_81, 3) = ((MR_Box) (transform_hlds__ssdebug__PolySpecs_45));
          MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_81_81, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__require__expect_4_p_0(transform_hlds__ssdebug__V_81_81, (MR_String) "transform_hlds.ssdebug", (MR_String) "predicate \140transform_hlds.ssdebug.make_var_value\'/18", (MR_String) "got errors while making type_info_var");
        }
        {
          hlds__hlds_pred__proc_info_get_varset_2_p_0(*transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_53, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_57);
        }
        {
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(*transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_53, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_87_87);
        }
        {
          transform_hlds__ssdebug__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_88_88, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_31));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_88_88, 1) = ((MR_Box) ((MR_String) "bound_head_var"));
        }
        {
          transform_hlds__ssdebug__ConsId_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_46, 1) = ((MR_Box) (transform_hlds__ssdebug__V_88_88));
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_46, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_46, 3) = ((MR_Box) (transform_hlds__ssdebug__VarValueTypeCtor_32));
        }
        {
          hlds__vartypes__add_var_type_4_p_0(*transform_hlds__ssdebug__VarDesc_22, transform_hlds__ssdebug__VarValueType_33, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_87_87, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_59);
        }
        transform_hlds__ssdebug__TypeInfo_122_122 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
        {
          transform_hlds__ssdebug__succeeded = mercury__map__is_empty_1_p_0(transform_hlds__ssdebug__TypeInfo_122_122, transform_hlds__ssdebug__TypeInfo_122_122, transform_hlds__ssdebug__Renaming_21);
        }
        if (transform_hlds__ssdebug__succeeded)
          {
            MR_Word transform_hlds__ssdebug__V_92_92;
            MR_Word transform_hlds__ssdebug__V_93_93;
            MR_Word transform_hlds__ssdebug__V_94_94;
            MR_Word transform_hlds__ssdebug__V_95_95;

            {
              transform_hlds__ssdebug__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_95_95, 0) = ((MR_Box) (transform_hlds__ssdebug__VarToInspect_20));
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              transform_hlds__ssdebug__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_94_94, 0) = ((MR_Box) (transform_hlds__ssdebug__VarPosVar_38));
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_94_94, 1) = ((MR_Box) (transform_hlds__ssdebug__V_95_95));
            }
            {
              transform_hlds__ssdebug__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_93_93, 0) = ((MR_Box) (transform_hlds__ssdebug__VarNameVar_36));
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_93_93, 1) = ((MR_Box) (transform_hlds__ssdebug__V_94_94));
            }
            {
              transform_hlds__ssdebug__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_92_92, 0) = ((MR_Box) (transform_hlds__ssdebug__TypeInfoVar_42));
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_92_92, 1) = ((MR_Box) (transform_hlds__ssdebug__V_93_93));
            }
            {
              hlds__make_goal__construct_functor_4_p_0(*transform_hlds__ssdebug__VarDesc_22, transform_hlds__ssdebug__ConsId_46, transform_hlds__ssdebug__V_92_92, &transform_hlds__ssdebug__ConstructVarGoal_47);
            }
          }
        else
          {
            MR_Word transform_hlds__ssdebug__TypeInfo_123_123 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
            MR_Word transform_hlds__ssdebug__RenamedVar_48;
            MR_Word transform_hlds__ssdebug__V_97_97;
            MR_Word transform_hlds__ssdebug__V_98_98;
            MR_Word transform_hlds__ssdebug__V_99_99;
            MR_Word transform_hlds__ssdebug__V_100_100;
            MR_Box transform_hlds__ssdebug__conv0_RenamedVar_48;

            {
              mercury__map__lookup_3_p_0(transform_hlds__ssdebug__TypeInfo_123_123, transform_hlds__ssdebug__TypeInfo_123_123, transform_hlds__ssdebug__Renaming_21, ((MR_Box) (transform_hlds__ssdebug__VarToInspect_20)), &transform_hlds__ssdebug__conv0_RenamedVar_48);
            }
            transform_hlds__ssdebug__RenamedVar_48 = ((MR_Word) transform_hlds__ssdebug__conv0_RenamedVar_48);
            {
              transform_hlds__ssdebug__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_100_100, 0) = ((MR_Box) (transform_hlds__ssdebug__RenamedVar_48));
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              transform_hlds__ssdebug__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_99_99, 0) = ((MR_Box) (transform_hlds__ssdebug__VarPosVar_38));
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_99_99, 1) = ((MR_Box) (transform_hlds__ssdebug__V_100_100));
            }
            {
              transform_hlds__ssdebug__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_98_98, 0) = ((MR_Box) (transform_hlds__ssdebug__VarNameVar_36));
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_98_98, 1) = ((MR_Box) (transform_hlds__ssdebug__V_99_99));
            }
            {
              transform_hlds__ssdebug__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_97_97, 0) = ((MR_Box) (transform_hlds__ssdebug__TypeInfoVar_42));
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_97_97, 1) = ((MR_Box) (transform_hlds__ssdebug__V_98_98));
            }
            {
              hlds__make_goal__construct_functor_4_p_0(*transform_hlds__ssdebug__VarDesc_22, transform_hlds__ssdebug__ConsId_46, transform_hlds__ssdebug__V_97_97, &transform_hlds__ssdebug__ConstructVarGoal_47);
            }
          }
        {
          hlds__hlds_goal__rename_vars_in_goals_4_p_0((MR_Integer) 1, transform_hlds__ssdebug__Renaming_21, transform_hlds__ssdebug__TypeInfoGoals0_43, &transform_hlds__ssdebug__TypeInfoGoals_49);
        }
        {
          transform_hlds__ssdebug__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_104_104, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructVarPos_37));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_104_104, 1) = ((MR_Box) (transform_hlds__ssdebug__TypeInfoGoals_49));
        }
        {
          transform_hlds__ssdebug__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_103_103, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructVarName_35));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_103_103, 1) = ((MR_Box) (transform_hlds__ssdebug__V_104_104));
        }
        {
          transform_hlds__ssdebug__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_105_105, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructVarGoal_47));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          *transform_hlds__ssdebug__Goals_24 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__ssdebug__V_103_103, transform_hlds__ssdebug__V_105_105);
        }
        transform_hlds__ssdebug__TypeInfo_125_125 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
        {
          mercury__map__det_insert_4_p_0(transform_hlds__ssdebug__TypeInfo_125_125, transform_hlds__ssdebug__TypeInfo_125_125, ((MR_Box) (transform_hlds__ssdebug__VarToInspect_20)), ((MR_Box) (*transform_hlds__ssdebug__VarDesc_22)), transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_0_60, transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_61);
        }
      }
    else
      {
        MR_Word transform_hlds__ssdebug__V_108_108;
        MR_Word transform_hlds__ssdebug__V_112_112;
        MR_Word transform_hlds__ssdebug__V_113_113;
        MR_Word transform_hlds__ssdebug__V_115_115;
        MR_Word transform_hlds__ssdebug__V_116_116;
        MR_Word transform_hlds__ssdebug__ConsId_118;
        MR_Word transform_hlds__ssdebug__ConstructVarGoal_119;

        {
          transform_hlds__ssdebug__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_108_108, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_31));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_108_108, 1) = ((MR_Box) ((MR_String) "unbound_head_var"));
        }
        {
          transform_hlds__ssdebug__ConsId_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_118, 1) = ((MR_Box) (transform_hlds__ssdebug__V_108_108));
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_118, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_118, 3) = ((MR_Box) (transform_hlds__ssdebug__VarValueTypeCtor_32));
        }
        {
          hlds__vartypes__add_var_type_4_p_0(*transform_hlds__ssdebug__VarDesc_22, transform_hlds__ssdebug__VarValueType_33, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_72_72, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_59);
        }
        {
          transform_hlds__ssdebug__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_113_113, 0) = ((MR_Box) (transform_hlds__ssdebug__VarPosVar_38));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          transform_hlds__ssdebug__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_112_112, 0) = ((MR_Box) (transform_hlds__ssdebug__VarNameVar_36));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_112_112, 1) = ((MR_Box) (transform_hlds__ssdebug__V_113_113));
        }
        {
          hlds__make_goal__construct_functor_4_p_0(*transform_hlds__ssdebug__VarDesc_22, transform_hlds__ssdebug__ConsId_118, transform_hlds__ssdebug__V_112_112, &transform_hlds__ssdebug__ConstructVarGoal_119);
        }
        {
          transform_hlds__ssdebug__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_116_116, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructVarGoal_119));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          transform_hlds__ssdebug__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_115_115, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructVarPos_37));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_115_115, 1) = ((MR_Box) (transform_hlds__ssdebug__V_116_116));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__ssdebug__Goals_24 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructVarName_35));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__ssdebug__V_115_115));
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
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__ListVarValueType_2;
    MR_Word transform_hlds__ssdebug__SSDBModule_3;
    MR_Word transform_hlds__ssdebug__VarValueTypeCtor_4;
    MR_Word transform_hlds__ssdebug__VarValueType_5;
    MR_Word transform_hlds__ssdebug__ListTypeCtor_6;
    MR_Word transform_hlds__ssdebug__V_7_7;
    MR_Word transform_hlds__ssdebug__V_11_11;
    MR_Word transform_hlds__ssdebug__V_12_12;
    MR_Word transform_hlds__ssdebug__V_15_15;

    {
      transform_hlds__ssdebug__SSDBModule_3 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    }
    {
      transform_hlds__ssdebug__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_7_7, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_3));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_7_7, 1) = ((MR_Box) ((MR_String) "var_value"));
    }
    {
      transform_hlds__ssdebug__VarValueTypeCtor_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__VarValueTypeCtor_4, 0) = ((MR_Box) (transform_hlds__ssdebug__V_7_7));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__VarValueTypeCtor_4, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__prog_type__construct_type_3_p_0(transform_hlds__ssdebug__VarValueTypeCtor_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__ssdebug__VarValueType_5);
    }
    {
      transform_hlds__ssdebug__V_12_12 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
    }
    {
      transform_hlds__ssdebug__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_11_11, 0) = ((MR_Box) (transform_hlds__ssdebug__V_12_12));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_11_11, 1) = ((MR_Box) ((MR_String) "list"));
    }
    {
      transform_hlds__ssdebug__ListTypeCtor_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ListTypeCtor_6, 0) = ((MR_Box) (transform_hlds__ssdebug__V_11_11));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ListTypeCtor_6, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      transform_hlds__ssdebug__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_15_15, 0) = ((MR_Box) (transform_hlds__ssdebug__VarValueType_5));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_type__construct_type_3_p_0(transform_hlds__ssdebug__ListTypeCtor_6, transform_hlds__ssdebug__V_15_15, &transform_hlds__ssdebug__ListVarValueType_2);
    }
    return transform_hlds__ssdebug__ListVarValueType_2;
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
        MR_Word transform_hlds__ssdebug__V_48_48;
        MR_Word transform_hlds__ssdebug__V_50_50;
        MR_Word transform_hlds__ssdebug__V_53_53;
        MR_Word transform_hlds__ssdebug__V_54_54;

        {
          mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "EmptyVarList", transform_hlds__ssdebug__OutVar_5, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_13, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_14);
        }
        {
          transform_hlds__ssdebug__V_48_48 = transform_hlds__ssdebug__list_var_value_type_0_f_0();
        }
        {
          hlds__vartypes__add_var_type_4_p_0(*transform_hlds__ssdebug__OutVar_5, transform_hlds__ssdebug__V_48_48, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_15, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_16);
        }
        {
          transform_hlds__ssdebug__V_50_50 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
        }
        {
          transform_hlds__ssdebug__ListTypeSymName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__ListTypeSymName_30, 0) = ((MR_Box) (transform_hlds__ssdebug__V_50_50));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__ListTypeSymName_30, 1) = ((MR_Box) ((MR_String) "list"));
        }
        {
          transform_hlds__ssdebug__ListTypeCtor_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ListTypeCtor_31, 0) = ((MR_Box) (transform_hlds__ssdebug__ListTypeSymName_30));
          MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ListTypeCtor_31, 1) = ((MR_Box) ((MR_Integer) 1));
        }
        {
          transform_hlds__ssdebug__V_54_54 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
        }
        {
          transform_hlds__ssdebug__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_53_53, 0) = ((MR_Box) (transform_hlds__ssdebug__V_54_54));
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_53_53, 1) = ((MR_Box) ((MR_String) "[]"));
        }
        {
          transform_hlds__ssdebug__ConsId_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_32, 1) = ((MR_Box) (transform_hlds__ssdebug__V_53_53));
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_32, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_32, 3) = ((MR_Box) (transform_hlds__ssdebug__ListTypeCtor_31));
        }
        {
          hlds__make_goal__construct_functor_4_p_0(*transform_hlds__ssdebug__OutVar_5, transform_hlds__ssdebug__ConsId_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__ssdebug__Goal_23);
        }
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

        {
          transform_hlds__ssdebug__make_arg_list_18_p_0(transform_hlds__ssdebug__Pos_71, transform_hlds__ssdebug__HeadVar__2_2, transform_hlds__ssdebug__ProgVars_61, transform_hlds__ssdebug__HeadVar__4_4, &transform_hlds__ssdebug__OutVar0_72, &transform_hlds__ssdebug__Goals0_73, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_7, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_95_95, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_9, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_96_96, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_11, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_97_97, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_13, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_98_98, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_15, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_99_99, transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_0_17, &transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_100_100);
        }
        {
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_99_99, transform_hlds__ssdebug__ProgVar_60, &transform_hlds__ssdebug__ProgVarType_74);
        }
        {
          MR_Word transform_hlds__ssdebug__V_129_129;

          {
            transform_hlds__ssdebug__V_129_129 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          }
          {
            transform_hlds__ssdebug__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ssdebug__ProgVarType_74, transform_hlds__ssdebug__V_129_129);
          }
        }
        if (!(transform_hlds__ssdebug__succeeded))
          {
            MR_Word transform_hlds__ssdebug__V_130_130;

            {
              transform_hlds__ssdebug__V_130_130 = parse_tree__builtin_lib_types__io_io_type_0_f_0();
            }
            {
              transform_hlds__ssdebug__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ssdebug__ProgVarType_74, transform_hlds__ssdebug__V_130_130);
            }
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
            MR_Word transform_hlds__ssdebug__V_109_109;
            MR_Word transform_hlds__ssdebug__V_111_111;
            MR_Word transform_hlds__ssdebug__V_119_119;
            MR_Word transform_hlds__ssdebug__V_120_120;
            MR_Word transform_hlds__ssdebug__V_122_122;
            MR_Word transform_hlds__ssdebug__V_123_123;
            MR_Word transform_hlds__ssdebug__ExistingVarDesc_75;
            MR_Word transform_hlds__ssdebug__TypeInfo_126_126 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
            MR_Box transform_hlds__ssdebug__conv0_ExistingVarDesc_75;

            {
              transform_hlds__ssdebug__succeeded = mercury__map__search_3_p_0(transform_hlds__ssdebug__TypeInfo_126_126, transform_hlds__ssdebug__TypeInfo_126_126, transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_100_100, ((MR_Box) (transform_hlds__ssdebug__ProgVar_60)), &transform_hlds__ssdebug__conv0_ExistingVarDesc_75);
            }
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
              {
                transform_hlds__ssdebug__make_var_value_18_p_0(transform_hlds__ssdebug__HeadVar__2_2, transform_hlds__ssdebug__ProgVar_60, transform_hlds__ssdebug__HeadVar__4_4, &transform_hlds__ssdebug__VarDesc_77, transform_hlds__ssdebug__HeadVar__1_1, &transform_hlds__ssdebug__ValueGoals_76, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_95_95, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_8, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_96_96, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_10, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_97_97, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_12, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_98_98, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_104_104, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_99_99, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_105_105, transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_100_100, transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_18);
              }
            {
              mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "FullListVar", transform_hlds__ssdebug__OutVar_5, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_104_104, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_14);
            }
            {
              transform_hlds__ssdebug__V_109_109 = transform_hlds__ssdebug__list_var_value_type_0_f_0();
            }
            {
              hlds__vartypes__add_var_type_4_p_0(*transform_hlds__ssdebug__OutVar_5, transform_hlds__ssdebug__V_109_109, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_105_105, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_16);
            }
            {
              transform_hlds__ssdebug__V_111_111 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
            }
            {
              transform_hlds__ssdebug__ListTypeSymName_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__ListTypeSymName_78, 0) = ((MR_Box) (transform_hlds__ssdebug__V_111_111));
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
              transform_hlds__ssdebug__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_120_120, 0) = ((MR_Box) (transform_hlds__ssdebug__OutVar0_72));
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              transform_hlds__ssdebug__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_119_119, 0) = ((MR_Box) (transform_hlds__ssdebug__VarDesc_77));
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_119_119, 1) = ((MR_Box) (transform_hlds__ssdebug__V_120_120));
            }
            {
              hlds__make_goal__construct_functor_4_p_0(*transform_hlds__ssdebug__OutVar_5, transform_hlds__ssdebug__ConsId_80, transform_hlds__ssdebug__V_119_119, &transform_hlds__ssdebug__Goal_81);
            }
            transform_hlds__ssdebug__TypeCtorInfo_128_128 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
            {
              transform_hlds__ssdebug__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_123_123, 0) = ((MR_Box) (transform_hlds__ssdebug__Goal_81));
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              transform_hlds__ssdebug__V_122_122 = mercury__list__f_43_43_2_f_0(transform_hlds__ssdebug__TypeCtorInfo_128_128, transform_hlds__ssdebug__ValueGoals_76, transform_hlds__ssdebug__V_123_123);
            }
            {
              *transform_hlds__ssdebug__HeadVar__6_6 = mercury__list__f_43_43_2_f_0(transform_hlds__ssdebug__TypeCtorInfo_128_128, transform_hlds__ssdebug__Goals0_73, transform_hlds__ssdebug__V_122_122);
            }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__ssdebug__make_level_construction_7_p_0(
  MR_Word transform_hlds__ssdebug__ModuleInfo_8,
  MR_Word * transform_hlds__ssdebug__Goal_9,
  MR_Word * transform_hlds__ssdebug__LevelVar_10,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_15,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_16,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_17,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_18)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__SSTraceLevel_13;
    MR_Word transform_hlds__ssdebug__ConsId_14;
    MR_Word transform_hlds__ssdebug__V_22_22;
    MR_Word transform_hlds__ssdebug__Globals_29;
    MR_Word transform_hlds__ssdebug__V_52_52;
    MR_Word transform_hlds__ssdebug__V_55_55;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__ssdebug__ModuleInfo_8, &transform_hlds__ssdebug__Globals_29);
    }
    {
      libs__globals__get_ssdb_trace_level_2_p_0(transform_hlds__ssdebug__Globals_29, &transform_hlds__ssdebug__SSTraceLevel_13);
    }
    switch (transform_hlds__ssdebug__SSTraceLevel_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__ssdebug__DataCtor_33;
          MR_Word transform_hlds__ssdebug__V_34_34;
          MR_Word transform_hlds__ssdebug__V_36_36;
          MR_Word transform_hlds__ssdebug__V_37_37;
          MR_Word transform_hlds__ssdebug__V_39_39;

          {
            transform_hlds__ssdebug__V_34_34 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
          }
          {
            transform_hlds__ssdebug__DataCtor_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__DataCtor_33, 0) = ((MR_Box) (transform_hlds__ssdebug__V_34_34));
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__DataCtor_33, 1) = ((MR_Box) ((MR_String) "deep"));
          }
          {
            transform_hlds__ssdebug__V_39_39 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
          }
          {
            transform_hlds__ssdebug__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_37_37, 0) = ((MR_Box) (transform_hlds__ssdebug__V_39_39));
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_37_37, 1) = ((MR_Box) ((MR_String) "ssdb_tracing_level"));
          }
          {
            transform_hlds__ssdebug__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_36_36, 0) = ((MR_Box) (transform_hlds__ssdebug__V_37_37));
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_36_36, 1) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            transform_hlds__ssdebug__ConsId_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_14, 1) = ((MR_Box) (transform_hlds__ssdebug__DataCtor_33));
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_14, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_14, 3) = ((MR_Box) (transform_hlds__ssdebug__V_36_36));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ssdebug", (MR_String) "predicate \140transform_hlds.ssdebug.make_level_construction\'/7", (MR_String) "unexpected ss trace level");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__ssdebug__DataCtor_44;
          MR_Word transform_hlds__ssdebug__V_45_45;
          MR_Word transform_hlds__ssdebug__V_47_47;
          MR_Word transform_hlds__ssdebug__V_48_48;
          MR_Word transform_hlds__ssdebug__V_50_50;

          {
            transform_hlds__ssdebug__V_45_45 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
          }
          {
            transform_hlds__ssdebug__DataCtor_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__DataCtor_44, 0) = ((MR_Box) (transform_hlds__ssdebug__V_45_45));
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__DataCtor_44, 1) = ((MR_Box) ((MR_String) "shallow"));
          }
          {
            transform_hlds__ssdebug__V_50_50 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
          }
          {
            transform_hlds__ssdebug__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_48_48, 0) = ((MR_Box) (transform_hlds__ssdebug__V_50_50));
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_48_48, 1) = ((MR_Box) ((MR_String) "ssdb_tracing_level"));
          }
          {
            transform_hlds__ssdebug__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_47_47, 0) = ((MR_Box) (transform_hlds__ssdebug__V_48_48));
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_47_47, 1) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            transform_hlds__ssdebug__ConsId_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_14, 1) = ((MR_Box) (transform_hlds__ssdebug__DataCtor_44));
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_14, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_14, 3) = ((MR_Box) (transform_hlds__ssdebug__V_47_47));
          }
        }
        break;
    }
    {
      transform_hlds__ssdebug__V_55_55 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    }
    {
      transform_hlds__ssdebug__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_52_52, 0) = ((MR_Box) (transform_hlds__ssdebug__V_55_55));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_52_52, 1) = ((MR_Box) ((MR_String) "ssdb_tracing_level"));
    }
    {
      transform_hlds__ssdebug__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_22_22, 0) = ((MR_Box) (transform_hlds__ssdebug__V_52_52));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_22_22, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_goal__make_const_construction_alloc_9_p_0(transform_hlds__ssdebug__ConsId_14, transform_hlds__ssdebug__V_22_22, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_6[4]), transform_hlds__ssdebug__Goal_9, transform_hlds__ssdebug__LevelVar_10, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_15, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_16, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_17, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_18);
    }
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
    MR_Word transform_hlds__ssdebug__V_44_44;
    MR_Word transform_hlds__ssdebug__V_54_54;
    MR_Word transform_hlds__ssdebug__V_55_55;
    MR_Word transform_hlds__ssdebug__V_57_57;
    MR_Word transform_hlds__ssdebug__V_58_58;
    MR_Word transform_hlds__ssdebug__OrigPredId_17;
    MR_Word transform_hlds__ssdebug__V_35_35;
    MR_Word transform_hlds__ssdebug__V_16_16;

    {
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__ssdebug__PredInfo_10, &transform_hlds__ssdebug__Origin_15);
    }
    transform_hlds__ssdebug__succeeded = ((MR_tag((MR_Word) transform_hlds__ssdebug__Origin_15)) == (MR_mktag((MR_Integer) 2)));
    if (transform_hlds__ssdebug__succeeded)
      {
        transform_hlds__ssdebug__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__Origin_15, (MR_Integer) 0)));
        transform_hlds__ssdebug__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__Origin_15, (MR_Integer) 1)));
        transform_hlds__ssdebug__OrigPredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__Origin_15, (MR_Integer) 2)));
        transform_hlds__ssdebug__succeeded = (transform_hlds__ssdebug__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
      }
    if (transform_hlds__ssdebug__succeeded)
      {
        hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__ModuleInfo_9, transform_hlds__ssdebug__OrigPredId_17, &transform_hlds__ssdebug__OrigPredInfo_18);
      }
    else
      transform_hlds__ssdebug__OrigPredInfo_18 = transform_hlds__ssdebug__PredInfo_10;
    {
      transform_hlds__ssdebug__SymModuleName_19 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__ssdebug__OrigPredInfo_18);
    }
    {
      transform_hlds__ssdebug__ModuleName_20 = mdbcomp__sym_name__sym_name_to_string_1_f_0(transform_hlds__ssdebug__SymModuleName_19);
    }
    {
      transform_hlds__ssdebug__PredName_21 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__ssdebug__OrigPredInfo_18);
    }
    {
      hlds__make_goal__make_string_const_construction_alloc_8_p_0(transform_hlds__ssdebug__ModuleName_20, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_6[2]), &transform_hlds__ssdebug__ConstructModuleName_22, &transform_hlds__ssdebug__ModuleNameVar_23, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_31, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_37_37, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_33, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_38_38);
    }
    {
      hlds__make_goal__make_string_const_construction_alloc_8_p_0(transform_hlds__ssdebug__PredName_21, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_6[3]), &transform_hlds__ssdebug__ConstructPredName_24, &transform_hlds__ssdebug__PredNameVar_25, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_37_37, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_41_41, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_38_38, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_42_42);
    }
    {
      transform_hlds__ssdebug__SSDBModule_26 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    }
    {
      transform_hlds__ssdebug__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_44_44, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_26));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_44_44, 1) = ((MR_Box) ((MR_String) "ssdb_proc_id"));
    }
    {
      transform_hlds__ssdebug__TypeCtor_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__TypeCtor_27, 0) = ((MR_Box) (transform_hlds__ssdebug__V_44_44));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__TypeCtor_27, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "ProcId", transform_hlds__ssdebug__ProcIdVar_12, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_41_41, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_32);
    }
    {
      transform_hlds__ssdebug__ConsId_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_28, 1) = ((MR_Box) (transform_hlds__ssdebug__V_44_44));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_28, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_28, 3) = ((MR_Box) (transform_hlds__ssdebug__TypeCtor_27));
    }
    {
      parse_tree__prog_type__construct_type_3_p_0(transform_hlds__ssdebug__TypeCtor_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__ssdebug__ProcIdType_29);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*transform_hlds__ssdebug__ProcIdVar_12, transform_hlds__ssdebug__ProcIdType_29, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_42_42, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_34);
    }
    {
      transform_hlds__ssdebug__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_55_55, 0) = ((MR_Box) (transform_hlds__ssdebug__PredNameVar_25));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_54_54, 0) = ((MR_Box) (transform_hlds__ssdebug__ModuleNameVar_23));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_54_54, 1) = ((MR_Box) (transform_hlds__ssdebug__V_55_55));
    }
    {
      hlds__make_goal__construct_functor_4_p_0(*transform_hlds__ssdebug__ProcIdVar_12, transform_hlds__ssdebug__ConsId_28, transform_hlds__ssdebug__V_54_54, &transform_hlds__ssdebug__ConstructProcIdGoal_30);
    }
    {
      transform_hlds__ssdebug__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_58_58, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructProcIdGoal_30));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_57_57, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructPredName_24));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_57_57, 1) = ((MR_Box) (transform_hlds__ssdebug__V_58_58));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *transform_hlds__ssdebug__Goals_11 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructModuleName_22));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__ssdebug__V_57_57));
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
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__SSDBModule_16;
    MR_Word transform_hlds__ssdebug__Context_18;
    MR_Word transform_hlds__ssdebug__V_29_29;

    {
      transform_hlds__ssdebug__SSDBModule_16 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    }
    {
      transform_hlds__ssdebug__Context_18 = mercury__term__context_init_0_f_0();
    }
    {
      transform_hlds__ssdebug__V_29_29 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
    {
      hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__ssdebug__SSDBModule_16, transform_hlds__ssdebug__HandleTypeString_10, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__ssdebug__Arguments_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ssdebug__V_29_29, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_19, transform_hlds__ssdebug__Context_18, transform_hlds__ssdebug__HandleEventGoal_12);
    }
    *transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_24 = transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_23;
    *transform_hlds__ssdebug__STATE_VARIABLE_VarSet_22 = transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_21;
    *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_20 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_19;
  }
}

static MR_Word MR_CALL 
transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0(
  MR_Word transform_hlds__ssdebug__Detism_3)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__GoalInfo_4;
    MR_Word transform_hlds__ssdebug__GoalInfo0_5;
    MR_Word transform_hlds__ssdebug__GoalInfo0_9;
    MR_Word transform_hlds__ssdebug__GoalInfo1_10;

    {
      hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__ssdebug__GoalInfo0_9);
    }
    {
      hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__ssdebug__GoalInfo0_9, &transform_hlds__ssdebug__GoalInfo1_10);
    }
    {
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__Detism_3, transform_hlds__ssdebug__GoalInfo1_10, &transform_hlds__ssdebug__GoalInfo0_5);
    }
    {
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 6, transform_hlds__ssdebug__GoalInfo0_5, &transform_hlds__ssdebug__GoalInfo_4);
    }
    return transform_hlds__ssdebug__GoalInfo_4;
  }
}

static MR_Word MR_CALL 
transform_hlds__ssdebug__impure_goal_info_1_f_0(
  MR_Word transform_hlds__ssdebug__Detism_3)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__GoalInfo_4;
    MR_Word transform_hlds__ssdebug__GoalInfo0_5;
    MR_Word transform_hlds__ssdebug__GoalInfo1_6;

    {
      hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__ssdebug__GoalInfo0_5);
    }
    {
      hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__ssdebug__GoalInfo0_5, &transform_hlds__ssdebug__GoalInfo1_6);
    }
    {
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__Detism_3, transform_hlds__ssdebug__GoalInfo1_6, &transform_hlds__ssdebug__GoalInfo_4);
    }
    return transform_hlds__ssdebug__GoalInfo_4;
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
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__ConjDetism_19;
    MR_Word transform_hlds__ssdebug__ConjGoalInfo_20;
    MR_Word transform_hlds__ssdebug__Conj_21;
    MR_Word transform_hlds__ssdebug__OrigGoalInfo_23;
    MR_Word transform_hlds__ssdebug__ProcDetism_24;
    MR_Word transform_hlds__ssdebug__ScopeGoalInfo_25;
    MR_Word transform_hlds__ssdebug__Purity_26;
    MR_Word transform_hlds__ssdebug__Goal_27;
    MR_Word transform_hlds__ssdebug__V_33_33;
    MR_Word transform_hlds__ssdebug__V_35_35;
    MR_Word transform_hlds__ssdebug__V_36_36;
    MR_Word transform_hlds__ssdebug__V_37_37;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_38_38;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_39_39;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_40_40;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_42_42;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_45_45;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_46_46;
    MR_Word transform_hlds__ssdebug__V_47_47;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_48_48;
    MR_Word transform_hlds__ssdebug__GoalInfo0_52;
    MR_Word transform_hlds__ssdebug__GoalInfo1_53;
    MR_Word transform_hlds__ssdebug__V_22_22;

    {
      hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__ssdebug__ConjGoals_11, &transform_hlds__ssdebug__ConjDetism_19);
    }
    {
      hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__ssdebug__GoalInfo0_52);
    }
    {
      hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__ssdebug__GoalInfo0_52, &transform_hlds__ssdebug__GoalInfo1_53);
    }
    {
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__ConjDetism_19, transform_hlds__ssdebug__GoalInfo1_53, &transform_hlds__ssdebug__ConjGoalInfo_20);
    }
    {
      transform_hlds__ssdebug__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_33_33, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_33_33, 2) = ((MR_Box) (transform_hlds__ssdebug__ConjGoals_11));
    }
    {
      transform_hlds__ssdebug__Conj_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Conj_21, 0) = ((MR_Box) (transform_hlds__ssdebug__V_33_33));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Conj_21, 1) = ((MR_Box) (transform_hlds__ssdebug__ConjGoalInfo_20));
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_29, &transform_hlds__ssdebug__V_35_35);
    }
    transform_hlds__ssdebug__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_35_35, (MR_Integer) 0)));
    transform_hlds__ssdebug__OrigGoalInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_35_35, (MR_Integer) 1)));
    {
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_29, &transform_hlds__ssdebug__ProcDetism_24);
    }
    {
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__ProcDetism_24, transform_hlds__ssdebug__OrigGoalInfo_23, &transform_hlds__ssdebug__ScopeGoalInfo_25);
    }
    {
      transform_hlds__ssdebug__Purity_26 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__ssdebug__OrigGoalInfo_23);
    }
    {
      transform_hlds__ssdebug__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__V_37_37, 0) = ((MR_Box) (transform_hlds__ssdebug__Purity_26));
    }
    {
      transform_hlds__ssdebug__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_36_36, 1) = ((MR_Box) (transform_hlds__ssdebug__V_37_37));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_36_36, 2) = ((MR_Box) (transform_hlds__ssdebug__Conj_21));
    }
    {
      transform_hlds__ssdebug__Goal_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Goal_27, 0) = ((MR_Box) (transform_hlds__ssdebug__V_36_36));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Goal_27, 1) = ((MR_Box) (transform_hlds__ssdebug__ScopeGoalInfo_25));
    }
    {
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__ssdebug__VarSet_17, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_29, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_38_38);
    }
    {
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__ssdebug__VarTypes_18, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_38_38, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_39_39);
    }
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__ssdebug__Goal_27, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_39_39, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_40_40);
    }
    {
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_40_40, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_42_42);
    }
    {
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_42_42, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_30, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_31, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_45_45);
    }
    {
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(transform_hlds__ssdebug__ProcId_13, *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_30, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_28, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_46_46);
    }
    {
      transform_hlds__ssdebug__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_47_47, 0) = ((MR_Box) (transform_hlds__ssdebug__PredId_12));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_47_47, 1) = ((MR_Box) (transform_hlds__ssdebug__ProcId_13));
    }
    {
      check_hlds__purity__repuritycheck_proc_4_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_45_45, transform_hlds__ssdebug__V_47_47, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_46_46, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_48_48);
    }
    {
      hlds__hlds_module__module_info_set_pred_info_4_p_0(transform_hlds__ssdebug__PredId_12, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_48_48, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_45_45, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_32);
    }
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
    MR_bool transform_hlds__ssdebug__succeeded;
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
    MR_Word transform_hlds__ssdebug__V_27_27;
    MR_Word transform_hlds__ssdebug__V_30_30;
    MR_Word transform_hlds__ssdebug__V_36_36;
    MR_Word transform_hlds__ssdebug__V_37_37;

    {
      transform_hlds__ssdebug__SSDBModule_9 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    }
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
      transform_hlds__ssdebug__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_27_27, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_9));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_27_27, 1) = ((MR_Box) ((MR_String) "do_retry"));
    }
    {
      transform_hlds__ssdebug__ConsIdDoRetry_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsIdDoRetry_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsIdDoRetry_12, 1) = ((MR_Box) (transform_hlds__ssdebug__V_27_27));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsIdDoRetry_12, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsIdDoRetry_12, 3) = ((MR_Box) (transform_hlds__ssdebug__RetryTypeCtor_11));
    }
    {
      transform_hlds__ssdebug__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_30_30, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_9));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_30_30, 1) = ((MR_Box) ((MR_String) "do_not_retry"));
    }
    {
      transform_hlds__ssdebug__ConsIdDoNotRetry_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsIdDoNotRetry_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsIdDoNotRetry_13, 1) = ((MR_Box) (transform_hlds__ssdebug__V_30_30));
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
      transform_hlds__ssdebug__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_37_37, 0) = ((MR_Box) (transform_hlds__ssdebug__CaseDoNotRetry_15));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_36_36, 0) = ((MR_Box) (transform_hlds__ssdebug__CaseDoRetry_14));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_36_36, 1) = ((MR_Box) (transform_hlds__ssdebug__V_37_37));
    }
    {
      transform_hlds__ssdebug__SwitchGoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__SwitchGoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__SwitchGoalExpr_16, 1) = ((MR_Box) (transform_hlds__ssdebug__SwitchVar_5));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__SwitchGoalExpr_16, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__SwitchGoalExpr_16, 3) = ((MR_Box) (transform_hlds__ssdebug__V_36_36));
    }
    {
      transform_hlds__ssdebug__RetryGoalInfo_17 = hlds__hlds_goal__get_hlds_goal_info_1_f_0(transform_hlds__ssdebug__DoRetryGoal_6);
    }
    {
      transform_hlds__ssdebug__NoRetryGoalInfo_18 = hlds__hlds_goal__get_hlds_goal_info_1_f_0(transform_hlds__ssdebug__DoNotRetryGoal_7);
    }
    {
      transform_hlds__ssdebug__RetryDetism_19 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__ssdebug__RetryGoalInfo_17);
    }
    {
      transform_hlds__ssdebug__NoRetryDetism_20 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__ssdebug__NoRetryGoalInfo_18);
    }
    {
      parse_tree__prog_detism__det_switch_detism_3_p_0(transform_hlds__ssdebug__RetryDetism_19, transform_hlds__ssdebug__NoRetryDetism_20, &transform_hlds__ssdebug__SwitchDetism_21);
    }
    {
      hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__ssdebug__GoalInfo0_22);
    }
    {
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__SwitchDetism_21, transform_hlds__ssdebug__GoalInfo0_22, &transform_hlds__ssdebug__GoalInfo1_23);
    }
    {
      hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__ssdebug__GoalInfo1_23, &transform_hlds__ssdebug__GoalInfo_24);
    }
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
    MR_bool transform_hlds__ssdebug__succeeded;
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

    {
      transform_hlds__ssdebug__PredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__ssdebug__PredInfo_7);
    }
    {
      transform_hlds__ssdebug__ModuleName_14 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__ssdebug__PredInfo_7);
    }
    {
      transform_hlds__ssdebug__SymName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__SymName_15, 0) = ((MR_Box) (transform_hlds__ssdebug__ModuleName_14));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__SymName_15, 1) = ((MR_Box) (transform_hlds__ssdebug__PredName_13));
    }
    {
      transform_hlds__ssdebug__BuiltIn_16 = hlds__hlds_pred__builtin_state_4_f_0(transform_hlds__ssdebug__ModuleInfo_8, transform_hlds__ssdebug__PredId_9, transform_hlds__ssdebug__PredId_9, transform_hlds__ssdebug__ProcId_10);
    }
    {
      transform_hlds__ssdebug__GoalExpr_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_17, 0) = ((MR_Box) (transform_hlds__ssdebug__PredId_9));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_17, 1) = ((MR_Box) (transform_hlds__ssdebug__ProcId_10));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_17, 2) = ((MR_Box) (transform_hlds__ssdebug__HeadVars_11));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_17, 3) = ((MR_Box) (transform_hlds__ssdebug__BuiltIn_16));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_17, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_17, 5) = ((MR_Box) (transform_hlds__ssdebug__SymName_15));
    }
    {
      hlds__hlds_pred__pred_info_proc_info_3_p_0(transform_hlds__ssdebug__PredInfo_7, transform_hlds__ssdebug__ProcId_10, &transform_hlds__ssdebug__ProcInfo_18);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__ProcInfo_18, &transform_hlds__ssdebug__BodyGoal0_19);
    }
    {
      transform_hlds__ssdebug__GoalInfoHG0_20 = hlds__hlds_goal__get_hlds_goal_info_1_f_0(transform_hlds__ssdebug__BodyGoal0_19);
    }
    {
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__ssdebug__ProcInfo_18, &transform_hlds__ssdebug__Determinism_21);
    }
    {
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__Determinism_21, transform_hlds__ssdebug__GoalInfoHG0_20, &transform_hlds__ssdebug__GoalInfoHG_22);
    }
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
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__SSDBModule_11;
    MR_Word transform_hlds__ssdebug__TypeCtor_12;
    MR_Word transform_hlds__ssdebug__RetryType_13;
    MR_Word transform_hlds__ssdebug__V_18_18;

    {
      transform_hlds__ssdebug__SSDBModule_11 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    }
    {
      transform_hlds__ssdebug__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_18_18, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_11));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_18_18, 1) = ((MR_Box) ((MR_String) "ssdb_retry"));
    }
    {
      transform_hlds__ssdebug__TypeCtor_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__TypeCtor_12, 0) = ((MR_Box) (transform_hlds__ssdebug__V_18_18));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__TypeCtor_12, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__prog_type__construct_type_3_p_0(transform_hlds__ssdebug__TypeCtor_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__ssdebug__RetryType_13);
    }
    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__ssdebug__VarName_7, transform_hlds__ssdebug__RetryVar_8, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_14, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_15);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*transform_hlds__ssdebug__RetryVar_8, transform_hlds__ssdebug__RetryType_13, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_16, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_17);
    }
  }
}

static void MR_CALL 
transform_hlds__ssdebug__add_promise_equivalent_solutions_3_p_0(
  MR_Word transform_hlds__ssdebug__OutputVars_4,
  MR_Word transform_hlds__ssdebug__Goal0_5,
  MR_Word * transform_hlds__ssdebug__Goal_6)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Goal0_5, (MR_Integer) 1)));
    MR_Word transform_hlds__ssdebug__Reason_9;
    MR_Word transform_hlds__ssdebug__V_11_11;
    MR_Word transform_hlds__ssdebug__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Goal0_5, (MR_Integer) 0)));

    {
      transform_hlds__ssdebug__Reason_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Reason_9, 0) = ((MR_Box) (transform_hlds__ssdebug__OutputVars_4));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Reason_9, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      transform_hlds__ssdebug__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_11_11, 1) = ((MR_Box) (transform_hlds__ssdebug__Reason_9));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_11_11, 2) = ((MR_Box) (transform_hlds__ssdebug__Goal0_5));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__ssdebug__Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ssdebug__V_11_11));
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
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__GoalInfo0_16;
    MR_Word transform_hlds__ssdebug__InstMapDelta_17;
    MR_Word transform_hlds__ssdebug__UnifyGoals_18;
    MR_Word transform_hlds__ssdebug__UnifyGoalInfo0_20;
    MR_Word transform_hlds__ssdebug__UnifyGoalInfo_21;
    MR_Word transform_hlds__ssdebug___NewVars_19;

    {
      transform_hlds__ssdebug__GoalInfo0_16 = hlds__hlds_goal__get_hlds_goal_info_1_f_0(transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_22);
    }
    {
      transform_hlds__ssdebug__InstMapDelta_17 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__ssdebug__GoalInfo0_16);
    }
    {
      hlds__goal_util__create_renaming_9_p_0(transform_hlds__ssdebug__OutputVars_10, transform_hlds__ssdebug__InstMapDelta_17, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_24, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_25, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_26, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_27, &transform_hlds__ssdebug__UnifyGoals_18, &transform_hlds__ssdebug___NewVars_19, transform_hlds__ssdebug__Renaming_13);
    }
    {
      hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__ssdebug__UnifyGoalInfo0_20);
    }
    {
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__ssdebug__UnifyGoalInfo0_20, &transform_hlds__ssdebug__UnifyGoalInfo_21);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__ssdebug__UnifyGoals_18, transform_hlds__ssdebug__UnifyGoalInfo_21, transform_hlds__ssdebug__UnifyGoal_12);
    }
    {
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(*transform_hlds__ssdebug__Renaming_13, transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_22, transform_hlds__ssdebug__STATE_VARIABLE_Goal_23);
    }
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

    {
      transform_hlds__ssdebug__succeeded = transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__1043__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2), &transform_hlds__ssdebug__conv0_LambdaHeadVar__3_14);
    }
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
    {
      *transform_hlds__ssdebug__OutputVars_8 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__ssdebug__TypeInfo_17_17, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__ssdebug__TypeInfo_17_17, transform_hlds__ssdebug__F_9, transform_hlds__ssdebug__HeadVars_6, transform_hlds__ssdebug__ArgModes_7);
    }
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
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__TypeInfo_15_15;
    MR_Integer transform_hlds__ssdebug__PredArity_11;
    MR_Word transform_hlds__ssdebug__FullArgModes_12;
    MR_Integer transform_hlds__ssdebug__NumHeadVars_13;
    MR_Integer transform_hlds__ssdebug__NumToDrop_14;

    {
      transform_hlds__ssdebug__PredArity_11 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__ssdebug__PredInfo_6);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__ssdebug__ProcInfo_7, transform_hlds__ssdebug__FullHeadVars_8);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__ssdebug__ProcInfo_7, &transform_hlds__ssdebug__FullArgModes_12);
    }
    transform_hlds__ssdebug__TypeInfo_15_15 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
    {
      mercury__list__length_2_p_0(transform_hlds__ssdebug__TypeInfo_15_15, *transform_hlds__ssdebug__FullHeadVars_8, &transform_hlds__ssdebug__NumHeadVars_13);
    }
    transform_hlds__ssdebug__NumToDrop_14 = (transform_hlds__ssdebug__NumHeadVars_13 - transform_hlds__ssdebug__PredArity_11);
    {
      mercury__list__det_drop_3_p_0(transform_hlds__ssdebug__TypeInfo_15_15, transform_hlds__ssdebug__NumToDrop_14, *transform_hlds__ssdebug__FullHeadVars_8, transform_hlds__ssdebug__HeadVars_9);
    }
    {
      mercury__list__det_drop_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__ssdebug__NumToDrop_14, transform_hlds__ssdebug__FullArgModes_12, transform_hlds__ssdebug__ArgModes_10);
    }
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_erroneous_6_p_0(
  MR_Word transform_hlds__ssdebug__PredId_7,
  MR_Integer transform_hlds__ssdebug__ProcId_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_28,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_29,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_30,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_31)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__TypeInfo_69_69;
    MR_Word transform_hlds__ssdebug__TypeInfo_15_80;
    MR_Word transform_hlds__ssdebug__OrigBodyGoal_14;
    MR_Word transform_hlds__ssdebug___FullHeadVars_15;
    MR_Word transform_hlds__ssdebug__HeadVars_16;
    MR_Word transform_hlds__ssdebug__ProcIdGoals_18;
    MR_Word transform_hlds__ssdebug__ProcIdVar_19;
    MR_Word transform_hlds__ssdebug__InitInstMap_20;
    MR_Word transform_hlds__ssdebug__CallArgListVar_21;
    MR_Word transform_hlds__ssdebug__CallArgListGoals_22;
    MR_Word transform_hlds__ssdebug__ConstructLevelGoal_24;
    MR_Word transform_hlds__ssdebug__LevelVar_25;
    MR_Word transform_hlds__ssdebug__HandleEventCallGoal_26;
    MR_Word transform_hlds__ssdebug__BodyGoals_27;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_32_32;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_33_33;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_34_34;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_35_35;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_36_36;
    MR_Word transform_hlds__ssdebug__V_38_38;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_39_39;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_40_40;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_41_41;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_42_42;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_43_43;
    MR_Word transform_hlds__ssdebug__V_44_44;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_45_45;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_46_46;
    MR_Word transform_hlds__ssdebug__V_48_48;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_49_49;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_50_50;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_51_51;
    MR_Word transform_hlds__ssdebug__V_52_52;
    MR_Word transform_hlds__ssdebug__V_53_53;
    MR_Word transform_hlds__ssdebug__V_55_55;
    MR_Word transform_hlds__ssdebug__V_56_56;
    MR_Word transform_hlds__ssdebug__V_57_57;
    MR_Word transform_hlds__ssdebug__V_58_58;
    MR_Word transform_hlds__ssdebug__V_60_60;
    MR_Word transform_hlds__ssdebug__V_61_61;
    MR_Word transform_hlds__ssdebug__V_63_63;
    MR_Word transform_hlds__ssdebug__V_64_64;
    MR_Integer transform_hlds__ssdebug__PredArity_76;
    MR_Word transform_hlds__ssdebug__FullArgModes_77;
    MR_Integer transform_hlds__ssdebug__NumHeadVars_78;
    MR_Integer transform_hlds__ssdebug__NumToDrop_79;
    MR_Word transform_hlds__ssdebug___ArgModes_17;
    MR_Word transform_hlds__ssdebug___BoundVarDescsAtCall_23;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_30, transform_hlds__ssdebug__PredId_7, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_32_32);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_28, &transform_hlds__ssdebug__OrigBodyGoal_14);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_28, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_33_33);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_28, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_34_34);
    }
    {
      transform_hlds__ssdebug__PredArity_76 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_32_32);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_28, &transform_hlds__ssdebug___FullHeadVars_15);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_28, &transform_hlds__ssdebug__FullArgModes_77);
    }
    transform_hlds__ssdebug__TypeInfo_15_80 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
    {
      mercury__list__length_2_p_0(transform_hlds__ssdebug__TypeInfo_15_80, transform_hlds__ssdebug___FullHeadVars_15, &transform_hlds__ssdebug__NumHeadVars_78);
    }
    transform_hlds__ssdebug__NumToDrop_79 = (transform_hlds__ssdebug__NumHeadVars_78 - transform_hlds__ssdebug__PredArity_76);
    {
      mercury__list__det_drop_3_p_0(transform_hlds__ssdebug__TypeInfo_15_80, transform_hlds__ssdebug__NumToDrop_79, transform_hlds__ssdebug___FullHeadVars_15, &transform_hlds__ssdebug__HeadVars_16);
    }
    {
      mercury__list__det_drop_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__ssdebug__NumToDrop_79, transform_hlds__ssdebug__FullArgModes_77, &transform_hlds__ssdebug___ArgModes_17);
    }
    {
      transform_hlds__ssdebug__make_proc_id_construction_8_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_30, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_32_32, &transform_hlds__ssdebug__ProcIdGoals_18, &transform_hlds__ssdebug__ProcIdVar_19, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_33_33, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_35_35, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_34_34, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_36_36);
    }
    {
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_28, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_30, &transform_hlds__ssdebug__InitInstMap_20);
    }
    transform_hlds__ssdebug__TypeInfo_69_69 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
    {
      transform_hlds__ssdebug__V_38_38 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_69_69, transform_hlds__ssdebug__TypeInfo_69_69);
    }
    {
      transform_hlds__ssdebug__V_44_44 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_69_69, transform_hlds__ssdebug__TypeInfo_69_69);
    }
    {
      transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__InitInstMap_20, transform_hlds__ssdebug__HeadVars_16, transform_hlds__ssdebug__V_38_38, &transform_hlds__ssdebug__CallArgListVar_21, &transform_hlds__ssdebug__CallArgListGoals_22, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_30, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_39_39, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_28, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_40_40, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_32_32, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_41_41, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_35_35, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_42_42, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_36_36, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_43_43, transform_hlds__ssdebug__V_44_44, &transform_hlds__ssdebug___BoundVarDescsAtCall_23);
    }
    {
      transform_hlds__ssdebug__make_level_construction_7_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_39_39, &transform_hlds__ssdebug__ConstructLevelGoal_24, &transform_hlds__ssdebug__LevelVar_25, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_42_42, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_45_45, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_43_43, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_46_46);
    }
    {
      transform_hlds__ssdebug__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_53_53, 0) = ((MR_Box) (transform_hlds__ssdebug__LevelVar_25));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_52_52, 0) = ((MR_Box) (transform_hlds__ssdebug__CallArgListVar_21));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_52_52, 1) = ((MR_Box) (transform_hlds__ssdebug__V_53_53));
    }
    {
      transform_hlds__ssdebug__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_48_48, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_19));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_48_48, 1) = ((MR_Box) (transform_hlds__ssdebug__V_52_52));
    }
    {
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_call", transform_hlds__ssdebug__V_48_48, &transform_hlds__ssdebug__HandleEventCallGoal_26, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_39_39, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_49_49, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_45_45, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_50_50, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_46_46, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_51_51);
    }
    {
      transform_hlds__ssdebug__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_58_58, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructLevelGoal_24));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_61_61, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventCallGoal_26));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_64_64, 0) = ((MR_Box) (transform_hlds__ssdebug__OrigBodyGoal_14));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_63_63, 0) = ((MR_Box) (transform_hlds__ssdebug__V_64_64));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_60_60, 0) = ((MR_Box) (transform_hlds__ssdebug__V_61_61));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_60_60, 1) = ((MR_Box) (transform_hlds__ssdebug__V_63_63));
    }
    {
      transform_hlds__ssdebug__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_57_57, 0) = ((MR_Box) (transform_hlds__ssdebug__V_58_58));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_57_57, 1) = ((MR_Box) (transform_hlds__ssdebug__V_60_60));
    }
    {
      transform_hlds__ssdebug__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_56_56, 0) = ((MR_Box) (transform_hlds__ssdebug__CallArgListGoals_22));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_56_56, 1) = ((MR_Box) (transform_hlds__ssdebug__V_57_57));
    }
    {
      transform_hlds__ssdebug__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_55_55, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdGoals_18));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_55_55, 1) = ((MR_Box) (transform_hlds__ssdebug__V_56_56));
    }
    {
      transform_hlds__ssdebug__BodyGoals_27 = mercury__list__condense_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__ssdebug__V_55_55);
    }
    {
      transform_hlds__ssdebug__commit_goal_changes_10_p_0(transform_hlds__ssdebug__BodyGoals_27, transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_41_41, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_40_40, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_29, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_49_49, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_31, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_50_50, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_51_51);
    }
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_failure_6_p_0(
  MR_Word transform_hlds__ssdebug__PredId_7,
  MR_Integer transform_hlds__ssdebug__ProcId_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_36,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_37,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_39)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__TypeInfo_100_100;
    MR_Word transform_hlds__ssdebug__OrigBodyGoal_14;
    MR_Word transform_hlds__ssdebug__FullHeadVars_15;
    MR_Word transform_hlds__ssdebug__HeadVars_16;
    MR_Word transform_hlds__ssdebug__ProcIdGoals_18;
    MR_Word transform_hlds__ssdebug__ProcIdVar_19;
    MR_Word transform_hlds__ssdebug__InitInstMap_20;
    MR_Word transform_hlds__ssdebug__CallArgListGoals_22;
    MR_Word transform_hlds__ssdebug__ConstructLevelGoal_24;
    MR_Word transform_hlds__ssdebug__LevelVar_25;
    MR_Word transform_hlds__ssdebug__HandleEventCallGoal_26;
    MR_Word transform_hlds__ssdebug__FailArgListVar_27;
    MR_Word transform_hlds__ssdebug__RetryVar_28;
    MR_Word transform_hlds__ssdebug__HandleEventFailGoal_29;
    MR_Word transform_hlds__ssdebug__RecursiveGoal_30;
    MR_Word transform_hlds__ssdebug__SwitchGoal_31;
    MR_Word transform_hlds__ssdebug__ProcDetism_32;
    MR_Word transform_hlds__ssdebug__FailDisjunct_33;
    MR_Word transform_hlds__ssdebug__DisjGoal_34;
    MR_Word transform_hlds__ssdebug__BodyGoals_35;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_40_40;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_41_41;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_42_42;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_43_43;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_44_44;
    MR_Word transform_hlds__ssdebug__V_46_46;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_47_47;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_48_48;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_49_49;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_50_50;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_51_51;
    MR_Word transform_hlds__ssdebug__V_52_52;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_53_53;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_54_54;
    MR_Word transform_hlds__ssdebug__V_56_56;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_57_57;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_58_58;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_59_59;
    MR_Word transform_hlds__ssdebug__V_60_60;
    MR_Word transform_hlds__ssdebug__V_61_61;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_64_64;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_65_65;
    MR_Word transform_hlds__ssdebug__V_67_67;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_68_68;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_69_69;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_70_70;
    MR_Word transform_hlds__ssdebug__V_71_71;
    MR_Word transform_hlds__ssdebug__V_72_72;
    MR_Word transform_hlds__ssdebug__V_74_74;
    MR_Word transform_hlds__ssdebug__V_75_75;
    MR_Word transform_hlds__ssdebug__V_77_77;
    MR_Word transform_hlds__ssdebug__V_78_78;
    MR_Word transform_hlds__ssdebug__V_80_80;
    MR_Word transform_hlds__ssdebug__V_81_81;
    MR_Word transform_hlds__ssdebug__V_82_82;
    MR_Word transform_hlds__ssdebug__V_83_83;
    MR_Word transform_hlds__ssdebug__V_85_85;
    MR_Word transform_hlds__ssdebug__V_86_86;
    MR_Word transform_hlds__ssdebug__V_87_87;
    MR_Word transform_hlds__ssdebug__V_88_88;
    MR_Word transform_hlds__ssdebug__V_89_89;
    MR_Word transform_hlds__ssdebug__V_91_91;
    MR_Word transform_hlds__ssdebug__V_92_92;
    MR_Word transform_hlds__ssdebug__V_94_94;
    MR_Word transform_hlds__ssdebug__V_95_95;
    MR_Word transform_hlds__ssdebug___ArgModes_17;
    MR_Word transform_hlds__ssdebug___BoundVarDescsAtCall_23;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_38, transform_hlds__ssdebug__PredId_7, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_40_40);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_36, &transform_hlds__ssdebug__OrigBodyGoal_14);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_36, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_41_41);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_36, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_42_42);
    }
    {
      transform_hlds__ssdebug__get_stripped_headvars_5_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_40_40, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_36, &transform_hlds__ssdebug__FullHeadVars_15, &transform_hlds__ssdebug__HeadVars_16, &transform_hlds__ssdebug___ArgModes_17);
    }
    {
      transform_hlds__ssdebug__make_proc_id_construction_8_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_38, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_40_40, &transform_hlds__ssdebug__ProcIdGoals_18, &transform_hlds__ssdebug__ProcIdVar_19, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_41_41, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_43_43, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_42_42, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_44_44);
    }
    {
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_36, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_38, &transform_hlds__ssdebug__InitInstMap_20);
    }
    transform_hlds__ssdebug__TypeInfo_100_100 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
    {
      transform_hlds__ssdebug__V_46_46 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_100_100, transform_hlds__ssdebug__TypeInfo_100_100);
    }
    {
      transform_hlds__ssdebug__V_52_52 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_100_100, transform_hlds__ssdebug__TypeInfo_100_100);
    }
    {
      transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__InitInstMap_20, transform_hlds__ssdebug__HeadVars_16, transform_hlds__ssdebug__V_46_46, &transform_hlds__ssdebug__FailArgListVar_27, &transform_hlds__ssdebug__CallArgListGoals_22, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_38, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_47_47, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_36, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_48_48, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_40_40, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_49_49, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_43_43, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_50_50, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_44_44, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_51_51, transform_hlds__ssdebug__V_52_52, &transform_hlds__ssdebug___BoundVarDescsAtCall_23);
    }
    {
      transform_hlds__ssdebug__make_level_construction_7_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_47_47, &transform_hlds__ssdebug__ConstructLevelGoal_24, &transform_hlds__ssdebug__LevelVar_25, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_50_50, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_53_53, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_51_51, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_54_54);
    }
    {
      transform_hlds__ssdebug__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_61_61, 0) = ((MR_Box) (transform_hlds__ssdebug__LevelVar_25));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_60_60, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListVar_27));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_60_60, 1) = ((MR_Box) (transform_hlds__ssdebug__V_61_61));
    }
    {
      transform_hlds__ssdebug__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_56_56, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_19));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_56_56, 1) = ((MR_Box) (transform_hlds__ssdebug__V_60_60));
    }
    {
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_call", transform_hlds__ssdebug__V_56_56, &transform_hlds__ssdebug__HandleEventCallGoal_26, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_47_47, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_57_57, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_53_53, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_58_58, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_54_54, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_59_59);
    }
    {
      transform_hlds__ssdebug__make_retry_var_6_p_0((MR_String) "DoRetry", &transform_hlds__ssdebug__RetryVar_28, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_58_58, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_64_64, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_59_59, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_65_65);
    }
    {
      transform_hlds__ssdebug__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_72_72, 0) = ((MR_Box) (transform_hlds__ssdebug__RetryVar_28));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_71_71, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListVar_27));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_71_71, 1) = ((MR_Box) (transform_hlds__ssdebug__V_72_72));
    }
    {
      transform_hlds__ssdebug__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_67_67, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_19));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_67_67, 1) = ((MR_Box) (transform_hlds__ssdebug__V_71_71));
    }
    {
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_fail", transform_hlds__ssdebug__V_67_67, &transform_hlds__ssdebug__HandleEventFailGoal_29, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_57_57, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_68_68, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_64_64, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_69_69, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_65_65, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_70_70);
    }
    {
      transform_hlds__ssdebug__make_recursive_call_6_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_49_49, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_68_68, transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__FullHeadVars_15, &transform_hlds__ssdebug__RecursiveGoal_30);
    }
    {
      transform_hlds__ssdebug__V_74_74 = hlds__make_goal__fail_goal_0_f_0();
    }
    {
      transform_hlds__ssdebug__make_switch_goal_4_p_0(transform_hlds__ssdebug__RetryVar_28, transform_hlds__ssdebug__RecursiveGoal_30, transform_hlds__ssdebug__V_74_74, &transform_hlds__ssdebug__SwitchGoal_31);
    }
    {
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_48_48, &transform_hlds__ssdebug__ProcDetism_32);
    }
    {
      transform_hlds__ssdebug__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_78_78, 0) = ((MR_Box) (transform_hlds__ssdebug__SwitchGoal_31));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_77_77, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventFailGoal_29));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_77_77, 1) = ((MR_Box) (transform_hlds__ssdebug__V_78_78));
    }
    {
      transform_hlds__ssdebug__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_75_75, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_75_75, 2) = ((MR_Box) (transform_hlds__ssdebug__V_77_77));
    }
    {
      transform_hlds__ssdebug__V_80_80 = transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0(transform_hlds__ssdebug__ProcDetism_32);
    }
    {
      transform_hlds__ssdebug__FailDisjunct_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__FailDisjunct_33, 0) = ((MR_Box) (transform_hlds__ssdebug__V_75_75));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__FailDisjunct_33, 1) = ((MR_Box) (transform_hlds__ssdebug__V_80_80));
    }
    {
      transform_hlds__ssdebug__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_83_83, 0) = ((MR_Box) (transform_hlds__ssdebug__FailDisjunct_33));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_82_82, 0) = ((MR_Box) (transform_hlds__ssdebug__OrigBodyGoal_14));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_82_82, 1) = ((MR_Box) (transform_hlds__ssdebug__V_83_83));
    }
    {
      transform_hlds__ssdebug__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_81_81, 1) = ((MR_Box) (transform_hlds__ssdebug__V_82_82));
    }
    {
      transform_hlds__ssdebug__V_85_85 = transform_hlds__ssdebug__impure_goal_info_1_f_0(transform_hlds__ssdebug__ProcDetism_32);
    }
    {
      transform_hlds__ssdebug__DisjGoal_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__DisjGoal_34, 0) = ((MR_Box) (transform_hlds__ssdebug__V_81_81));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__DisjGoal_34, 1) = ((MR_Box) (transform_hlds__ssdebug__V_85_85));
    }
    {
      transform_hlds__ssdebug__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_89_89, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructLevelGoal_24));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_92_92, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventCallGoal_26));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_95_95, 0) = ((MR_Box) (transform_hlds__ssdebug__DisjGoal_34));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_94_94, 0) = ((MR_Box) (transform_hlds__ssdebug__V_95_95));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_91_91, 0) = ((MR_Box) (transform_hlds__ssdebug__V_92_92));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_91_91, 1) = ((MR_Box) (transform_hlds__ssdebug__V_94_94));
    }
    {
      transform_hlds__ssdebug__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_88_88, 0) = ((MR_Box) (transform_hlds__ssdebug__V_89_89));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_88_88, 1) = ((MR_Box) (transform_hlds__ssdebug__V_91_91));
    }
    {
      transform_hlds__ssdebug__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_87_87, 0) = ((MR_Box) (transform_hlds__ssdebug__CallArgListGoals_22));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_87_87, 1) = ((MR_Box) (transform_hlds__ssdebug__V_88_88));
    }
    {
      transform_hlds__ssdebug__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_86_86, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdGoals_18));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_86_86, 1) = ((MR_Box) (transform_hlds__ssdebug__V_87_87));
    }
    {
      transform_hlds__ssdebug__BodyGoals_35 = mercury__list__condense_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__ssdebug__V_86_86);
    }
    {
      transform_hlds__ssdebug__commit_goal_changes_10_p_0(transform_hlds__ssdebug__BodyGoals_35, transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_49_49, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_48_48, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_37, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_68_68, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_39, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_69_69, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_70_70);
    }
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_nondet_6_p_0(
  MR_Word transform_hlds__ssdebug__PredId_7,
  MR_Integer transform_hlds__ssdebug__ProcId_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_49,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_50,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_52)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__TypeInfo_161_161;
    MR_Word transform_hlds__ssdebug__TypeCtorInfo_162_162;
    MR_Word transform_hlds__ssdebug__OrigBodyGoal_14;
    MR_Word transform_hlds__ssdebug__FullHeadVars_15;
    MR_Word transform_hlds__ssdebug__HeadVars_16;
    MR_Word transform_hlds__ssdebug__ProcIdGoals_18;
    MR_Word transform_hlds__ssdebug__ProcIdVar_19;
    MR_Word transform_hlds__ssdebug__InitInstMap_20;
    MR_Word transform_hlds__ssdebug__BoundVarDescsAtCall_23;
    MR_Word transform_hlds__ssdebug__ConstructLevelGoal_24;
    MR_Word transform_hlds__ssdebug__LevelVar_25;
    MR_Word transform_hlds__ssdebug__HandleEventCallGoal_26;
    MR_Word transform_hlds__ssdebug__FinalInstMap_27;
    MR_Word transform_hlds__ssdebug__ExitArgListVar_28;
    MR_Word transform_hlds__ssdebug__ExitArgListGoals_29;
    MR_Word transform_hlds__ssdebug__ProcDetism_31;
    MR_Word transform_hlds__ssdebug__ExitDisjunct_33;
    MR_Word transform_hlds__ssdebug__HandleEventRedoGoal_34;
    MR_Word transform_hlds__ssdebug__RedoDisjunct_35;
    MR_Word transform_hlds__ssdebug__ExitOrRedoGoal_36;
    MR_Word transform_hlds__ssdebug__CallExitRedoDisjunctGoals_37;
    MR_Word transform_hlds__ssdebug__CallExitRedoDisjunct_38;
    MR_Word transform_hlds__ssdebug__FailArgListVar_39;
    MR_Word transform_hlds__ssdebug__FailArgListGoals_40;
    MR_Word transform_hlds__ssdebug__RetryVar_41;
    MR_Word transform_hlds__ssdebug__HandleEventFailGoal_42;
    MR_Word transform_hlds__ssdebug__RecursiveGoal_43;
    MR_Word transform_hlds__ssdebug__SwitchFailPortGoal_44;
    MR_Word transform_hlds__ssdebug__FailDisjunctGoals_45;
    MR_Word transform_hlds__ssdebug__FailDisjunct_46;
    MR_Word transform_hlds__ssdebug__BodyDisj_47;
    MR_Word transform_hlds__ssdebug__BodyGoals_48;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_53_53;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_54_54;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_55_55;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_56_56;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_57_57;
    MR_Word transform_hlds__ssdebug__V_59_59;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_60_60;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_61_61;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_62_62;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_63_63;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_64_64;
    MR_Word transform_hlds__ssdebug__V_65_65;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_66_66;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_67_67;
    MR_Word transform_hlds__ssdebug__V_69_69;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_70_70;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_71_71;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_72_72;
    MR_Word transform_hlds__ssdebug__V_73_73;
    MR_Word transform_hlds__ssdebug__V_74_74;
    MR_Word transform_hlds__ssdebug__V_77_77;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_78_78;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79_79;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_80_80;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_81_81;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_82_82;
    MR_Word transform_hlds__ssdebug__V_84_84;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_85_85;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_86_86;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_87_87;
    MR_Word transform_hlds__ssdebug__V_88_88;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_92_92;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_93_93;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_94_94;
    MR_Word transform_hlds__ssdebug__V_97_97;
    MR_Word transform_hlds__ssdebug__V_99_99;
    MR_Word transform_hlds__ssdebug__V_100_100;
    MR_Word transform_hlds__ssdebug__V_101_101;
    MR_Word transform_hlds__ssdebug__V_103_103;
    MR_Word transform_hlds__ssdebug__V_105_105;
    MR_Word transform_hlds__ssdebug__V_106_106;
    MR_Word transform_hlds__ssdebug__V_107_107;
    MR_Word transform_hlds__ssdebug__V_109_109;
    MR_Word transform_hlds__ssdebug__V_111_111;
    MR_Word transform_hlds__ssdebug__V_112_112;
    MR_Word transform_hlds__ssdebug__V_113_113;
    MR_Word transform_hlds__ssdebug__V_115_115;
    MR_Word transform_hlds__ssdebug__V_116_116;
    MR_Word transform_hlds__ssdebug__V_118_118;
    MR_Word transform_hlds__ssdebug__V_119_119;
    MR_Word transform_hlds__ssdebug__V_121_121;
    MR_Word transform_hlds__ssdebug__V_122_122;
    MR_Word transform_hlds__ssdebug__V_123_123;
    MR_Word transform_hlds__ssdebug__V_126_126;
    MR_Word transform_hlds__ssdebug__V_128_128;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_130_130;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_131_131;
    MR_Word transform_hlds__ssdebug__V_133_133;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_134_134;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_135_135;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_136_136;
    MR_Word transform_hlds__ssdebug__V_137_137;
    MR_Word transform_hlds__ssdebug__V_138_138;
    MR_Word transform_hlds__ssdebug__V_140_140;
    MR_Word transform_hlds__ssdebug__V_141_141;
    MR_Word transform_hlds__ssdebug__V_142_142;
    MR_Word transform_hlds__ssdebug__V_143_143;
    MR_Word transform_hlds__ssdebug__V_145_145;
    MR_Word transform_hlds__ssdebug__V_146_146;
    MR_Word transform_hlds__ssdebug__V_149_149;
    MR_Word transform_hlds__ssdebug__V_151_151;
    MR_Word transform_hlds__ssdebug__V_152_152;
    MR_Word transform_hlds__ssdebug__V_153_153;
    MR_Word transform_hlds__ssdebug__V_154_154;
    MR_Word transform_hlds__ssdebug__V_156_156;
    MR_Word transform_hlds__ssdebug__V_157_157;
    MR_Word transform_hlds__ssdebug___ArgModes_17;
    MR_Word transform_hlds__ssdebug___BoundVarDescsAtExit_30;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_51, transform_hlds__ssdebug__PredId_7, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_53_53);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_49, &transform_hlds__ssdebug__OrigBodyGoal_14);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_49, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_54_54);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_49, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_55_55);
    }
    {
      transform_hlds__ssdebug__get_stripped_headvars_5_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_53_53, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_49, &transform_hlds__ssdebug__FullHeadVars_15, &transform_hlds__ssdebug__HeadVars_16, &transform_hlds__ssdebug___ArgModes_17);
    }
    {
      transform_hlds__ssdebug__make_proc_id_construction_8_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_51, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_53_53, &transform_hlds__ssdebug__ProcIdGoals_18, &transform_hlds__ssdebug__ProcIdVar_19, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_54_54, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_56_56, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_55_55, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_57_57);
    }
    {
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_49, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_51, &transform_hlds__ssdebug__InitInstMap_20);
    }
    transform_hlds__ssdebug__TypeInfo_161_161 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
    {
      transform_hlds__ssdebug__V_59_59 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_161_161, transform_hlds__ssdebug__TypeInfo_161_161);
    }
    {
      transform_hlds__ssdebug__V_65_65 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_161_161, transform_hlds__ssdebug__TypeInfo_161_161);
    }
    {
      transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__InitInstMap_20, transform_hlds__ssdebug__HeadVars_16, transform_hlds__ssdebug__V_59_59, &transform_hlds__ssdebug__FailArgListVar_39, &transform_hlds__ssdebug__FailArgListGoals_40, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_51, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_60_60, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_49, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_61_61, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_53_53, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_62_62, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_56_56, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_63_63, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_57_57, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_64_64, transform_hlds__ssdebug__V_65_65, &transform_hlds__ssdebug__BoundVarDescsAtCall_23);
    }
    {
      transform_hlds__ssdebug__make_level_construction_7_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_60_60, &transform_hlds__ssdebug__ConstructLevelGoal_24, &transform_hlds__ssdebug__LevelVar_25, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_63_63, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_66_66, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_64_64, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_67_67);
    }
    {
      transform_hlds__ssdebug__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_74_74, 0) = ((MR_Box) (transform_hlds__ssdebug__LevelVar_25));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_73_73, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListVar_39));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_73_73, 1) = ((MR_Box) (transform_hlds__ssdebug__V_74_74));
    }
    {
      transform_hlds__ssdebug__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_69_69, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_19));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_69_69, 1) = ((MR_Box) (transform_hlds__ssdebug__V_73_73));
    }
    {
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_call_nondet", transform_hlds__ssdebug__V_69_69, &transform_hlds__ssdebug__HandleEventCallGoal_26, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_60_60, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_70_70, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_66_66, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_71_71, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_67_67, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_72_72);
    }
    {
      hlds__goal_util__update_instmap_3_p_0(transform_hlds__ssdebug__OrigBodyGoal_14, transform_hlds__ssdebug__InitInstMap_20, &transform_hlds__ssdebug__FinalInstMap_27);
    }
    {
      transform_hlds__ssdebug__V_77_77 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_161_161, transform_hlds__ssdebug__TypeInfo_161_161);
    }
    {
      transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__FinalInstMap_27, transform_hlds__ssdebug__HeadVars_16, transform_hlds__ssdebug__V_77_77, &transform_hlds__ssdebug__ExitArgListVar_28, &transform_hlds__ssdebug__ExitArgListGoals_29, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_70_70, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_78_78, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_61_61, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79_79, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_62_62, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_80_80, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_71_71, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_81_81, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_72_72, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_82_82, transform_hlds__ssdebug__BoundVarDescsAtCall_23, &transform_hlds__ssdebug___BoundVarDescsAtExit_30);
    }
    {
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79_79, &transform_hlds__ssdebug__ProcDetism_31);
    }
    {
      transform_hlds__ssdebug__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_88_88, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitArgListVar_28));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_84_84, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_19));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_84_84, 1) = ((MR_Box) (transform_hlds__ssdebug__V_88_88));
    }
    {
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_exit_nondet", transform_hlds__ssdebug__V_84_84, &transform_hlds__ssdebug__ExitDisjunct_33, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_78_78, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_85_85, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_81_81, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_86_86, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_82_82, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_87_87);
    }
    {
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_redo_nondet", transform_hlds__ssdebug__V_84_84, &transform_hlds__ssdebug__HandleEventRedoGoal_34, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_85_85, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_92_92, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_86_86, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_93_93, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_87_87, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_94_94);
    }
    {
      transform_hlds__ssdebug__V_101_101 = hlds__make_goal__fail_goal_0_f_0();
    }
    {
      transform_hlds__ssdebug__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_100_100, 0) = ((MR_Box) (transform_hlds__ssdebug__V_101_101));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_99_99, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventRedoGoal_34));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_99_99, 1) = ((MR_Box) (transform_hlds__ssdebug__V_100_100));
    }
    {
      transform_hlds__ssdebug__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_97_97, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_97_97, 2) = ((MR_Box) (transform_hlds__ssdebug__V_99_99));
    }
    {
      transform_hlds__ssdebug__V_103_103 = transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0((MR_Integer) 7);
    }
    {
      transform_hlds__ssdebug__RedoDisjunct_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__RedoDisjunct_35, 0) = ((MR_Box) (transform_hlds__ssdebug__V_97_97));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__RedoDisjunct_35, 1) = ((MR_Box) (transform_hlds__ssdebug__V_103_103));
    }
    {
      transform_hlds__ssdebug__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_107_107, 0) = ((MR_Box) (transform_hlds__ssdebug__RedoDisjunct_35));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_106_106, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitDisjunct_33));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_106_106, 1) = ((MR_Box) (transform_hlds__ssdebug__V_107_107));
    }
    {
      transform_hlds__ssdebug__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_105_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_105_105, 1) = ((MR_Box) (transform_hlds__ssdebug__V_106_106));
    }
    {
      transform_hlds__ssdebug__V_109_109 = transform_hlds__ssdebug__impure_goal_info_1_f_0((MR_Integer) 3);
    }
    {
      transform_hlds__ssdebug__ExitOrRedoGoal_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ExitOrRedoGoal_36, 0) = ((MR_Box) (transform_hlds__ssdebug__V_105_105));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ExitOrRedoGoal_36, 1) = ((MR_Box) (transform_hlds__ssdebug__V_109_109));
    }
    transform_hlds__ssdebug__TypeCtorInfo_162_162 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      transform_hlds__ssdebug__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_113_113, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructLevelGoal_24));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_116_116, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventCallGoal_26));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_119_119, 0) = ((MR_Box) (transform_hlds__ssdebug__OrigBodyGoal_14));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_119_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_123_123, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitOrRedoGoal_36));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_122_122, 0) = ((MR_Box) (transform_hlds__ssdebug__V_123_123));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_121_121, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitArgListGoals_29));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_121_121, 1) = ((MR_Box) (transform_hlds__ssdebug__V_122_122));
    }
    {
      transform_hlds__ssdebug__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_118_118, 0) = ((MR_Box) (transform_hlds__ssdebug__V_119_119));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_118_118, 1) = ((MR_Box) (transform_hlds__ssdebug__V_121_121));
    }
    {
      transform_hlds__ssdebug__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_115_115, 0) = ((MR_Box) (transform_hlds__ssdebug__V_116_116));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_115_115, 1) = ((MR_Box) (transform_hlds__ssdebug__V_118_118));
    }
    {
      transform_hlds__ssdebug__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_112_112, 0) = ((MR_Box) (transform_hlds__ssdebug__V_113_113));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_112_112, 1) = ((MR_Box) (transform_hlds__ssdebug__V_115_115));
    }
    {
      transform_hlds__ssdebug__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_111_111, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListGoals_40));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_111_111, 1) = ((MR_Box) (transform_hlds__ssdebug__V_112_112));
    }
    {
      transform_hlds__ssdebug__CallExitRedoDisjunctGoals_37 = mercury__list__condense_1_f_0(transform_hlds__ssdebug__TypeCtorInfo_162_162, transform_hlds__ssdebug__V_111_111);
    }
    {
      transform_hlds__ssdebug__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_126_126, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_126_126, 2) = ((MR_Box) (transform_hlds__ssdebug__CallExitRedoDisjunctGoals_37));
    }
    {
      transform_hlds__ssdebug__V_128_128 = transform_hlds__ssdebug__impure_goal_info_1_f_0(transform_hlds__ssdebug__ProcDetism_31);
    }
    {
      transform_hlds__ssdebug__CallExitRedoDisjunct_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__CallExitRedoDisjunct_38, 0) = ((MR_Box) (transform_hlds__ssdebug__V_126_126));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__CallExitRedoDisjunct_38, 1) = ((MR_Box) (transform_hlds__ssdebug__V_128_128));
    }
    {
      transform_hlds__ssdebug__make_retry_var_6_p_0((MR_String) "DoRetry", &transform_hlds__ssdebug__RetryVar_41, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_93_93, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_130_130, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_94_94, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_131_131);
    }
    {
      transform_hlds__ssdebug__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_138_138, 0) = ((MR_Box) (transform_hlds__ssdebug__RetryVar_41));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_137_137, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListVar_39));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_137_137, 1) = ((MR_Box) (transform_hlds__ssdebug__V_138_138));
    }
    {
      transform_hlds__ssdebug__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_133_133, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_19));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_133_133, 1) = ((MR_Box) (transform_hlds__ssdebug__V_137_137));
    }
    {
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_fail_nondet", transform_hlds__ssdebug__V_133_133, &transform_hlds__ssdebug__HandleEventFailGoal_42, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_92_92, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_134_134, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_130_130, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_135_135, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_131_131, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_136_136);
    }
    {
      transform_hlds__ssdebug__make_recursive_call_6_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_80_80, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_134_134, transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__FullHeadVars_15, &transform_hlds__ssdebug__RecursiveGoal_43);
    }
    {
      transform_hlds__ssdebug__V_140_140 = hlds__make_goal__fail_goal_0_f_0();
    }
    {
      transform_hlds__ssdebug__make_switch_goal_4_p_0(transform_hlds__ssdebug__RetryVar_41, transform_hlds__ssdebug__RecursiveGoal_43, transform_hlds__ssdebug__V_140_140, &transform_hlds__ssdebug__SwitchFailPortGoal_44);
    }
    {
      transform_hlds__ssdebug__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_143_143, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventFailGoal_42));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_146_146, 0) = ((MR_Box) (transform_hlds__ssdebug__SwitchFailPortGoal_44));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_145_145, 0) = ((MR_Box) (transform_hlds__ssdebug__V_146_146));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_145_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_142_142, 0) = ((MR_Box) (transform_hlds__ssdebug__V_143_143));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_142_142, 1) = ((MR_Box) (transform_hlds__ssdebug__V_145_145));
    }
    {
      transform_hlds__ssdebug__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_141_141, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListGoals_40));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_141_141, 1) = ((MR_Box) (transform_hlds__ssdebug__V_142_142));
    }
    {
      transform_hlds__ssdebug__FailDisjunctGoals_45 = mercury__list__condense_1_f_0(transform_hlds__ssdebug__TypeCtorInfo_162_162, transform_hlds__ssdebug__V_141_141);
    }
    {
      transform_hlds__ssdebug__V_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_149_149, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_149_149, 2) = ((MR_Box) (transform_hlds__ssdebug__FailDisjunctGoals_45));
    }
    {
      transform_hlds__ssdebug__V_151_151 = transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0(transform_hlds__ssdebug__ProcDetism_31);
    }
    {
      transform_hlds__ssdebug__FailDisjunct_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__FailDisjunct_46, 0) = ((MR_Box) (transform_hlds__ssdebug__V_149_149));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__FailDisjunct_46, 1) = ((MR_Box) (transform_hlds__ssdebug__V_151_151));
    }
    {
      transform_hlds__ssdebug__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_154_154, 0) = ((MR_Box) (transform_hlds__ssdebug__FailDisjunct_46));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_154_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_153_153, 0) = ((MR_Box) (transform_hlds__ssdebug__CallExitRedoDisjunct_38));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_153_153, 1) = ((MR_Box) (transform_hlds__ssdebug__V_154_154));
    }
    {
      transform_hlds__ssdebug__V_152_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_152_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_152_152, 1) = ((MR_Box) (transform_hlds__ssdebug__V_153_153));
    }
    {
      transform_hlds__ssdebug__V_156_156 = transform_hlds__ssdebug__impure_goal_info_1_f_0(transform_hlds__ssdebug__ProcDetism_31);
    }
    {
      transform_hlds__ssdebug__BodyDisj_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__BodyDisj_47, 0) = ((MR_Box) (transform_hlds__ssdebug__V_152_152));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__BodyDisj_47, 1) = ((MR_Box) (transform_hlds__ssdebug__V_156_156));
    }
    {
      transform_hlds__ssdebug__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_157_157, 0) = ((MR_Box) (transform_hlds__ssdebug__BodyDisj_47));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_157_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__BodyGoals_48 = mercury__list__f_43_43_2_f_0(transform_hlds__ssdebug__TypeCtorInfo_162_162, transform_hlds__ssdebug__ProcIdGoals_18, transform_hlds__ssdebug__V_157_157);
    }
    {
      transform_hlds__ssdebug__commit_goal_changes_10_p_0(transform_hlds__ssdebug__BodyGoals_48, transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_80_80, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79_79, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_50, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_134_134, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_52, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_135_135, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_136_136);
    }
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_semi_6_p_0(
  MR_Word transform_hlds__ssdebug__PredId_7,
  MR_Integer transform_hlds__ssdebug__ProcId_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_60,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_61,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_62,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_63)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__TypeInfo_164_164;
    MR_Word transform_hlds__ssdebug__TypeCtorInfo_165_165;
    MR_Word transform_hlds__ssdebug__OrigBodyGoal_14;
    MR_Word transform_hlds__ssdebug__FullHeadVars_15;
    MR_Word transform_hlds__ssdebug__HeadVars_16;
    MR_Word transform_hlds__ssdebug__ArgModes_17;
    MR_Word transform_hlds__ssdebug__ProcIdGoals_18;
    MR_Word transform_hlds__ssdebug__ProcIdVar_19;
    MR_Word transform_hlds__ssdebug__InitInstMap_20;
    MR_Word transform_hlds__ssdebug__CallArgListVar_21;
    MR_Word transform_hlds__ssdebug__CallArgListGoals_22;
    MR_Word transform_hlds__ssdebug__BoundVarDescsAtCall_23;
    MR_Word transform_hlds__ssdebug__ConstructLevelGoal_24;
    MR_Word transform_hlds__ssdebug__LevelVar_25;
    MR_Word transform_hlds__ssdebug__HandleEventCallGoal_26;
    MR_Word transform_hlds__ssdebug__OutputVars_27;
    MR_Word transform_hlds__ssdebug__RenamedBodyGoal_28;
    MR_Word transform_hlds__ssdebug__AssignOutputsGoal_29;
    MR_Word transform_hlds__ssdebug__Renaming_30;
    MR_Word transform_hlds__ssdebug__FinalInstMap_31;
    MR_Word transform_hlds__ssdebug__ExitArgListVar_32;
    MR_Word transform_hlds__ssdebug__ExitArgListGoals_33;
    MR_Word transform_hlds__ssdebug__RetryAVar_35;
    MR_Word transform_hlds__ssdebug__HandleEventExitGoal_36;
    MR_Word transform_hlds__ssdebug__RecursiveGoal_37;
    MR_Word transform_hlds__ssdebug__FailArgListVar_38;
    MR_Word transform_hlds__ssdebug__FailArgListGoals_39;
    MR_Word transform_hlds__ssdebug__RetryBVar_41;
    MR_Word transform_hlds__ssdebug__HandleEventFailGoal_42;
    MR_Word transform_hlds__ssdebug__ProcDetism_43;
    MR_Word transform_hlds__ssdebug__ImpureGoalInfo_44;
    MR_Word transform_hlds__ssdebug__Solns_46;
    MR_Word transform_hlds__ssdebug__CondGoal_47;
    MR_Word transform_hlds__ssdebug__SwitchExitPortGoal_49;
    MR_Word transform_hlds__ssdebug__GoalsThen_50;
    MR_Word transform_hlds__ssdebug__ThenGoal_51;
    MR_Word transform_hlds__ssdebug__SwitchFailPortGoal_52;
    MR_Word transform_hlds__ssdebug__GoalsElse_53;
    MR_Word transform_hlds__ssdebug__ElseGoal_54;
    MR_Word transform_hlds__ssdebug__OrigGoalInfo_56;
    MR_Word transform_hlds__ssdebug__IteGoalInfo_57;
    MR_Word transform_hlds__ssdebug__IteGoal_58;
    MR_Word transform_hlds__ssdebug__BodyGoals_59;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_64_64;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_65_65;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_66_66;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_67_67;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_68_68;
    MR_Word transform_hlds__ssdebug__V_70_70;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_71_71;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_72_72;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_73_73;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_74_74;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_75_75;
    MR_Word transform_hlds__ssdebug__V_76_76;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_77_77;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_78_78;
    MR_Word transform_hlds__ssdebug__V_80_80;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_81_81;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_82_82;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_83_83;
    MR_Word transform_hlds__ssdebug__V_84_84;
    MR_Word transform_hlds__ssdebug__V_85_85;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_87_87;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_88_88;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_90_90;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_91_91;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_92_92;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_93_93;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_94_94;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_96_96;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_97_97;
    MR_Word transform_hlds__ssdebug__V_99_99;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_100_100;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_101_101;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_102_102;
    MR_Word transform_hlds__ssdebug__V_103_103;
    MR_Word transform_hlds__ssdebug__V_104_104;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_108_108;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_109_109;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_110_110;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_111_111;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_112_112;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_114_114;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_115_115;
    MR_Word transform_hlds__ssdebug__V_117_117;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_118_118;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_119_119;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_120_120;
    MR_Word transform_hlds__ssdebug__V_121_121;
    MR_Word transform_hlds__ssdebug__V_122_122;
    MR_Word transform_hlds__ssdebug__V_127_127;
    MR_Word transform_hlds__ssdebug__V_128_128;
    MR_Word transform_hlds__ssdebug__V_129_129;
    MR_Word transform_hlds__ssdebug__V_131_131;
    MR_Word transform_hlds__ssdebug__V_132_132;
    MR_Word transform_hlds__ssdebug__V_135_135;
    MR_Word transform_hlds__ssdebug__V_137_137;
    MR_Word transform_hlds__ssdebug__V_138_138;
    MR_Word transform_hlds__ssdebug__V_139_139;
    MR_Word transform_hlds__ssdebug__V_140_140;
    MR_Word transform_hlds__ssdebug__V_142_142;
    MR_Word transform_hlds__ssdebug__V_143_143;
    MR_Word transform_hlds__ssdebug__V_146_146;
    MR_Word transform_hlds__ssdebug__V_148_148;
    MR_Word transform_hlds__ssdebug__V_150_150;
    MR_Word transform_hlds__ssdebug__V_151_151;
    MR_Word transform_hlds__ssdebug__V_152_152;
    MR_Word transform_hlds__ssdebug__V_153_153;
    MR_Word transform_hlds__ssdebug__V_155_155;
    MR_Word transform_hlds__ssdebug__V_156_156;
    MR_Word transform_hlds__ssdebug__V_158_158;
    MR_Word transform_hlds__ssdebug__V_159_159;
    MR_Word transform_hlds__ssdebug___BoundVarDescsAtExit_34;
    MR_Word transform_hlds__ssdebug___BoundVarDescsAtFail_40;
    MR_Word transform_hlds__ssdebug___CanFail_45;
    MR_Word transform_hlds__ssdebug__V_55_55;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_62, transform_hlds__ssdebug__PredId_7, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_64_64);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_60, &transform_hlds__ssdebug__OrigBodyGoal_14);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_60, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_65_65);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_60, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_66_66);
    }
    {
      transform_hlds__ssdebug__get_stripped_headvars_5_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_64_64, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_60, &transform_hlds__ssdebug__FullHeadVars_15, &transform_hlds__ssdebug__HeadVars_16, &transform_hlds__ssdebug__ArgModes_17);
    }
    {
      transform_hlds__ssdebug__make_proc_id_construction_8_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_62, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_64_64, &transform_hlds__ssdebug__ProcIdGoals_18, &transform_hlds__ssdebug__ProcIdVar_19, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_65_65, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_67_67, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_66_66, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_68_68);
    }
    {
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_60, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_62, &transform_hlds__ssdebug__InitInstMap_20);
    }
    transform_hlds__ssdebug__TypeInfo_164_164 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
    {
      transform_hlds__ssdebug__V_70_70 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_164_164, transform_hlds__ssdebug__TypeInfo_164_164);
    }
    {
      transform_hlds__ssdebug__V_76_76 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_164_164, transform_hlds__ssdebug__TypeInfo_164_164);
    }
    {
      transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__InitInstMap_20, transform_hlds__ssdebug__HeadVars_16, transform_hlds__ssdebug__V_70_70, &transform_hlds__ssdebug__CallArgListVar_21, &transform_hlds__ssdebug__CallArgListGoals_22, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_62, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_71_71, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_60, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_72_72, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_64_64, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_73_73, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_67_67, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_74_74, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_68_68, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_75_75, transform_hlds__ssdebug__V_76_76, &transform_hlds__ssdebug__BoundVarDescsAtCall_23);
    }
    {
      transform_hlds__ssdebug__make_level_construction_7_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_71_71, &transform_hlds__ssdebug__ConstructLevelGoal_24, &transform_hlds__ssdebug__LevelVar_25, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_74_74, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_77_77, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_75_75, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_78_78);
    }
    {
      transform_hlds__ssdebug__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_85_85, 0) = ((MR_Box) (transform_hlds__ssdebug__LevelVar_25));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_84_84, 0) = ((MR_Box) (transform_hlds__ssdebug__CallArgListVar_21));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_84_84, 1) = ((MR_Box) (transform_hlds__ssdebug__V_85_85));
    }
    {
      transform_hlds__ssdebug__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_80_80, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_19));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_80_80, 1) = ((MR_Box) (transform_hlds__ssdebug__V_84_84));
    }
    {
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_call", transform_hlds__ssdebug__V_80_80, &transform_hlds__ssdebug__HandleEventCallGoal_26, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_71_71, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_81_81, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_77_77, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_82_82, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_78_78, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_83_83);
    }
    {
      transform_hlds__ssdebug__get_output_args_4_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_81_81, transform_hlds__ssdebug__HeadVars_16, transform_hlds__ssdebug__ArgModes_17, &transform_hlds__ssdebug__OutputVars_27);
    }
    {
      transform_hlds__ssdebug__rename_outputs_9_p_0(transform_hlds__ssdebug__OutputVars_27, transform_hlds__ssdebug__OrigBodyGoal_14, &transform_hlds__ssdebug__RenamedBodyGoal_28, &transform_hlds__ssdebug__AssignOutputsGoal_29, &transform_hlds__ssdebug__Renaming_30, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_82_82, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_87_87, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_83_83, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_88_88);
    }
    {
      hlds__goal_util__update_instmap_3_p_0(transform_hlds__ssdebug__OrigBodyGoal_14, transform_hlds__ssdebug__InitInstMap_20, &transform_hlds__ssdebug__FinalInstMap_31);
    }
    {
      transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__FinalInstMap_31, transform_hlds__ssdebug__HeadVars_16, transform_hlds__ssdebug__Renaming_30, &transform_hlds__ssdebug__ExitArgListVar_32, &transform_hlds__ssdebug__ExitArgListGoals_33, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_81_81, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_90_90, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_72_72, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_91_91, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_73_73, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_92_92, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_87_87, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_93_93, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_88_88, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_94_94, transform_hlds__ssdebug__BoundVarDescsAtCall_23, &transform_hlds__ssdebug___BoundVarDescsAtExit_34);
    }
    {
      transform_hlds__ssdebug__make_retry_var_6_p_0((MR_String) "DoRetryA", &transform_hlds__ssdebug__RetryAVar_35, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_93_93, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_96_96, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_94_94, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_97_97);
    }
    {
      transform_hlds__ssdebug__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_104_104, 0) = ((MR_Box) (transform_hlds__ssdebug__RetryAVar_35));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_103_103, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitArgListVar_32));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_103_103, 1) = ((MR_Box) (transform_hlds__ssdebug__V_104_104));
    }
    {
      transform_hlds__ssdebug__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_99_99, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_19));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_99_99, 1) = ((MR_Box) (transform_hlds__ssdebug__V_103_103));
    }
    {
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_exit", transform_hlds__ssdebug__V_99_99, &transform_hlds__ssdebug__HandleEventExitGoal_36, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_90_90, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_100_100, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_96_96, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_101_101, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_97_97, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_102_102);
    }
    {
      transform_hlds__ssdebug__make_recursive_call_6_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_92_92, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_100_100, transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__FullHeadVars_15, &transform_hlds__ssdebug__RecursiveGoal_37);
    }
    {
      transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__InitInstMap_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ssdebug__Renaming_30, &transform_hlds__ssdebug__FailArgListVar_38, &transform_hlds__ssdebug__FailArgListGoals_39, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_100_100, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_108_108, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_91_91, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_109_109, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_92_92, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_110_110, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_101_101, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_111_111, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_102_102, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_112_112, transform_hlds__ssdebug__BoundVarDescsAtCall_23, &transform_hlds__ssdebug___BoundVarDescsAtFail_40);
    }
    {
      transform_hlds__ssdebug__make_retry_var_6_p_0((MR_String) "DoRetryB", &transform_hlds__ssdebug__RetryBVar_41, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_111_111, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_114_114, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_112_112, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_115_115);
    }
    {
      transform_hlds__ssdebug__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_122_122, 0) = ((MR_Box) (transform_hlds__ssdebug__RetryBVar_41));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_121_121, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListVar_38));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_121_121, 1) = ((MR_Box) (transform_hlds__ssdebug__V_122_122));
    }
    {
      transform_hlds__ssdebug__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_117_117, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_19));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_117_117, 1) = ((MR_Box) (transform_hlds__ssdebug__V_121_121));
    }
    {
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_fail", transform_hlds__ssdebug__V_117_117, &transform_hlds__ssdebug__HandleEventFailGoal_42, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_108_108, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_118_118, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_114_114, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_119_119, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_115_115, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_120_120);
    }
    {
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_109_109, &transform_hlds__ssdebug__ProcDetism_43);
    }
    {
      transform_hlds__ssdebug__ImpureGoalInfo_44 = transform_hlds__ssdebug__impure_goal_info_1_f_0(transform_hlds__ssdebug__ProcDetism_43);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__ssdebug__ProcDetism_43, &transform_hlds__ssdebug___CanFail_45, &transform_hlds__ssdebug__Solns_46);
    }
    switch (transform_hlds__ssdebug__Solns_46) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__ssdebug__RenamedOutputVars_48;

          {
            mercury__map__apply_to_list_3_p_0(transform_hlds__ssdebug__TypeInfo_164_164, transform_hlds__ssdebug__TypeInfo_164_164, transform_hlds__ssdebug__OutputVars_27, transform_hlds__ssdebug__Renaming_30, &transform_hlds__ssdebug__RenamedOutputVars_48);
          }
          {
            transform_hlds__ssdebug__add_promise_equivalent_solutions_3_p_0(transform_hlds__ssdebug__RenamedOutputVars_48, transform_hlds__ssdebug__RenamedBodyGoal_28, &transform_hlds__ssdebug__CondGoal_47);
          }
        }
        break;
      case (MR_Integer) 1:
        transform_hlds__ssdebug__CondGoal_47 = transform_hlds__ssdebug__RenamedBodyGoal_28;
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ssdebug", (MR_String) "predicate \140transform_hlds.ssdebug.ssdebug_process_proc_semi\'/6", (MR_String) "zero solutions");
            return;
          }
        }
        break;
    }
    {
      transform_hlds__ssdebug__make_switch_goal_4_p_0(transform_hlds__ssdebug__RetryAVar_35, transform_hlds__ssdebug__RecursiveGoal_37, transform_hlds__ssdebug__AssignOutputsGoal_29, &transform_hlds__ssdebug__SwitchExitPortGoal_49);
    }
    transform_hlds__ssdebug__TypeCtorInfo_165_165 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      transform_hlds__ssdebug__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_129_129, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventExitGoal_36));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_132_132, 0) = ((MR_Box) (transform_hlds__ssdebug__SwitchExitPortGoal_49));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_131_131, 0) = ((MR_Box) (transform_hlds__ssdebug__V_132_132));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_128_128, 0) = ((MR_Box) (transform_hlds__ssdebug__V_129_129));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_128_128, 1) = ((MR_Box) (transform_hlds__ssdebug__V_131_131));
    }
    {
      transform_hlds__ssdebug__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_127_127, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitArgListGoals_33));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_127_127, 1) = ((MR_Box) (transform_hlds__ssdebug__V_128_128));
    }
    {
      transform_hlds__ssdebug__GoalsThen_50 = mercury__list__condense_1_f_0(transform_hlds__ssdebug__TypeCtorInfo_165_165, transform_hlds__ssdebug__V_127_127);
    }
    {
      transform_hlds__ssdebug__V_135_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_135_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_135_135, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_135_135, 2) = ((MR_Box) (transform_hlds__ssdebug__GoalsThen_50));
    }
    {
      transform_hlds__ssdebug__ThenGoal_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ThenGoal_51, 0) = ((MR_Box) (transform_hlds__ssdebug__V_135_135));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ThenGoal_51, 1) = ((MR_Box) (transform_hlds__ssdebug__ImpureGoalInfo_44));
    }
    {
      transform_hlds__ssdebug__V_137_137 = hlds__make_goal__fail_goal_0_f_0();
    }
    {
      transform_hlds__ssdebug__make_switch_goal_4_p_0(transform_hlds__ssdebug__RetryBVar_41, transform_hlds__ssdebug__RecursiveGoal_37, transform_hlds__ssdebug__V_137_137, &transform_hlds__ssdebug__SwitchFailPortGoal_52);
    }
    {
      transform_hlds__ssdebug__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_140_140, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventFailGoal_42));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_143_143, 0) = ((MR_Box) (transform_hlds__ssdebug__SwitchFailPortGoal_52));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_142_142, 0) = ((MR_Box) (transform_hlds__ssdebug__V_143_143));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_139_139, 0) = ((MR_Box) (transform_hlds__ssdebug__V_140_140));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_139_139, 1) = ((MR_Box) (transform_hlds__ssdebug__V_142_142));
    }
    {
      transform_hlds__ssdebug__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_138_138, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListGoals_39));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_138_138, 1) = ((MR_Box) (transform_hlds__ssdebug__V_139_139));
    }
    {
      transform_hlds__ssdebug__GoalsElse_53 = mercury__list__condense_1_f_0(transform_hlds__ssdebug__TypeCtorInfo_165_165, transform_hlds__ssdebug__V_138_138);
    }
    {
      transform_hlds__ssdebug__V_146_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_146_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_146_146, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_146_146, 2) = ((MR_Box) (transform_hlds__ssdebug__GoalsElse_53));
    }
    {
      transform_hlds__ssdebug__ElseGoal_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ElseGoal_54, 0) = ((MR_Box) (transform_hlds__ssdebug__V_146_146));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ElseGoal_54, 1) = ((MR_Box) (transform_hlds__ssdebug__ImpureGoalInfo_44));
    }
    transform_hlds__ssdebug__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__OrigBodyGoal_14, (MR_Integer) 0)));
    transform_hlds__ssdebug__OrigGoalInfo_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__OrigBodyGoal_14, (MR_Integer) 1)));
    {
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__ProcDetism_43, transform_hlds__ssdebug__OrigGoalInfo_56, &transform_hlds__ssdebug__IteGoalInfo_57);
    }
    {
      transform_hlds__ssdebug__V_148_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_148_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_148_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_148_148, 2) = ((MR_Box) (transform_hlds__ssdebug__CondGoal_47));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_148_148, 3) = ((MR_Box) (transform_hlds__ssdebug__ThenGoal_51));
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_148_148, 4) = ((MR_Box) (transform_hlds__ssdebug__ElseGoal_54));
    }
    {
      transform_hlds__ssdebug__IteGoal_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__IteGoal_58, 0) = ((MR_Box) (transform_hlds__ssdebug__V_148_148));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__IteGoal_58, 1) = ((MR_Box) (transform_hlds__ssdebug__IteGoalInfo_57));
    }
    {
      transform_hlds__ssdebug__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_153_153, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructLevelGoal_24));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_153_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_156_156, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventCallGoal_26));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_156_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_159_159, 0) = ((MR_Box) (transform_hlds__ssdebug__IteGoal_58));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_158_158, 0) = ((MR_Box) (transform_hlds__ssdebug__V_159_159));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_158_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_155_155, 0) = ((MR_Box) (transform_hlds__ssdebug__V_156_156));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_155_155, 1) = ((MR_Box) (transform_hlds__ssdebug__V_158_158));
    }
    {
      transform_hlds__ssdebug__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_152_152, 0) = ((MR_Box) (transform_hlds__ssdebug__V_153_153));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_152_152, 1) = ((MR_Box) (transform_hlds__ssdebug__V_155_155));
    }
    {
      transform_hlds__ssdebug__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_151_151, 0) = ((MR_Box) (transform_hlds__ssdebug__CallArgListGoals_22));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_151_151, 1) = ((MR_Box) (transform_hlds__ssdebug__V_152_152));
    }
    {
      transform_hlds__ssdebug__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_150_150, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdGoals_18));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_150_150, 1) = ((MR_Box) (transform_hlds__ssdebug__V_151_151));
    }
    {
      transform_hlds__ssdebug__BodyGoals_59 = mercury__list__condense_1_f_0(transform_hlds__ssdebug__TypeCtorInfo_165_165, transform_hlds__ssdebug__V_150_150);
    }
    {
      transform_hlds__ssdebug__commit_goal_changes_10_p_0(transform_hlds__ssdebug__BodyGoals_59, transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_110_110, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_109_109, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_61, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_118_118, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_63, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_119_119, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_120_120);
    }
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_det_6_p_0(
  MR_Word transform_hlds__ssdebug__PredId_7,
  MR_Integer transform_hlds__ssdebug__ProcId_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_45,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_46,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_48)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__TypeInfo_112_112;
    MR_Word transform_hlds__ssdebug__OrigBodyGoal_14;
    MR_Word transform_hlds__ssdebug__FullHeadVars_15;
    MR_Word transform_hlds__ssdebug__HeadVars_16;
    MR_Word transform_hlds__ssdebug__ArgModes_17;
    MR_Word transform_hlds__ssdebug__ProcIdGoals_18;
    MR_Word transform_hlds__ssdebug__ProcIdVar_19;
    MR_Word transform_hlds__ssdebug__InitInstMap_20;
    MR_Word transform_hlds__ssdebug__CallArgListVar_21;
    MR_Word transform_hlds__ssdebug__CallArgListGoals_22;
    MR_Word transform_hlds__ssdebug__BoundVarDescsAtCall_23;
    MR_Word transform_hlds__ssdebug__ConstructLevelGoal_24;
    MR_Word transform_hlds__ssdebug__LevelVar_25;
    MR_Word transform_hlds__ssdebug__HandleEventCallGoal_26;
    MR_Word transform_hlds__ssdebug__OutputVars_27;
    MR_Word transform_hlds__ssdebug__RenamedBodyGoal_28;
    MR_Word transform_hlds__ssdebug__AssignOutputsGoal_29;
    MR_Word transform_hlds__ssdebug__Renaming_30;
    MR_Word transform_hlds__ssdebug__ProcDetism_31;
    MR_Word transform_hlds__ssdebug__CanFail_32;
    MR_Word transform_hlds__ssdebug__ScopedRenamedBodyGoal_35;
    MR_Word transform_hlds__ssdebug__FinalInstMap_36;
    MR_Word transform_hlds__ssdebug__ExitArgListVar_37;
    MR_Word transform_hlds__ssdebug__ExitArgListGoals_38;
    MR_Word transform_hlds__ssdebug__RetryVar_40;
    MR_Word transform_hlds__ssdebug__HandleEventExitGoal_41;
    MR_Word transform_hlds__ssdebug__RecursiveGoal_42;
    MR_Word transform_hlds__ssdebug__SwitchGoal_43;
    MR_Word transform_hlds__ssdebug__BodyGoals_44;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_49_49;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_50_50;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_51_51;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_52_52;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_53_53;
    MR_Word transform_hlds__ssdebug__V_55_55;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_56_56;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_57_57;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_58_58;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_59_59;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_60_60;
    MR_Word transform_hlds__ssdebug__V_61_61;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_62_62;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_63_63;
    MR_Word transform_hlds__ssdebug__V_65_65;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_66_66;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_67_67;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_68_68;
    MR_Word transform_hlds__ssdebug__V_69_69;
    MR_Word transform_hlds__ssdebug__V_70_70;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_72_72;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_73_73;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_75_75;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_76_76;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_77_77;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_78_78;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_79_79;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_81_81;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_82_82;
    MR_Word transform_hlds__ssdebug__V_84_84;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_85_85;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_86_86;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_87_87;
    MR_Word transform_hlds__ssdebug__V_88_88;
    MR_Word transform_hlds__ssdebug__V_89_89;
    MR_Word transform_hlds__ssdebug__V_91_91;
    MR_Word transform_hlds__ssdebug__V_92_92;
    MR_Word transform_hlds__ssdebug__V_93_93;
    MR_Word transform_hlds__ssdebug__V_94_94;
    MR_Word transform_hlds__ssdebug__V_96_96;
    MR_Word transform_hlds__ssdebug__V_97_97;
    MR_Word transform_hlds__ssdebug__V_99_99;
    MR_Word transform_hlds__ssdebug__V_100_100;
    MR_Word transform_hlds__ssdebug__V_102_102;
    MR_Word transform_hlds__ssdebug__V_103_103;
    MR_Word transform_hlds__ssdebug__V_104_104;
    MR_Word transform_hlds__ssdebug__V_106_106;
    MR_Word transform_hlds__ssdebug__V_107_107;
    MR_Word transform_hlds__ssdebug___Solns_33;
    MR_Word transform_hlds__ssdebug___BoundVarDescsAtExit_39;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_47, transform_hlds__ssdebug__PredId_7, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_49_49);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_45, &transform_hlds__ssdebug__OrigBodyGoal_14);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_45, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_50_50);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_45, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_51_51);
    }
    {
      transform_hlds__ssdebug__get_stripped_headvars_5_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_49_49, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_45, &transform_hlds__ssdebug__FullHeadVars_15, &transform_hlds__ssdebug__HeadVars_16, &transform_hlds__ssdebug__ArgModes_17);
    }
    {
      transform_hlds__ssdebug__make_proc_id_construction_8_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_47, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_49_49, &transform_hlds__ssdebug__ProcIdGoals_18, &transform_hlds__ssdebug__ProcIdVar_19, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_50_50, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_52_52, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_51_51, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_53_53);
    }
    {
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_45, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_47, &transform_hlds__ssdebug__InitInstMap_20);
    }
    transform_hlds__ssdebug__TypeInfo_112_112 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
    {
      transform_hlds__ssdebug__V_55_55 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_112_112, transform_hlds__ssdebug__TypeInfo_112_112);
    }
    {
      transform_hlds__ssdebug__V_61_61 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_112_112, transform_hlds__ssdebug__TypeInfo_112_112);
    }
    {
      transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__InitInstMap_20, transform_hlds__ssdebug__HeadVars_16, transform_hlds__ssdebug__V_55_55, &transform_hlds__ssdebug__CallArgListVar_21, &transform_hlds__ssdebug__CallArgListGoals_22, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_47, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_56_56, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_45, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_57_57, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_49_49, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_58_58, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_52_52, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_59_59, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_53_53, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_60_60, transform_hlds__ssdebug__V_61_61, &transform_hlds__ssdebug__BoundVarDescsAtCall_23);
    }
    {
      transform_hlds__ssdebug__make_level_construction_7_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_56_56, &transform_hlds__ssdebug__ConstructLevelGoal_24, &transform_hlds__ssdebug__LevelVar_25, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_59_59, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_62_62, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_60_60, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_63_63);
    }
    {
      transform_hlds__ssdebug__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_70_70, 0) = ((MR_Box) (transform_hlds__ssdebug__LevelVar_25));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_69_69, 0) = ((MR_Box) (transform_hlds__ssdebug__CallArgListVar_21));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_69_69, 1) = ((MR_Box) (transform_hlds__ssdebug__V_70_70));
    }
    {
      transform_hlds__ssdebug__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_65_65, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_19));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_65_65, 1) = ((MR_Box) (transform_hlds__ssdebug__V_69_69));
    }
    {
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_call", transform_hlds__ssdebug__V_65_65, &transform_hlds__ssdebug__HandleEventCallGoal_26, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_56_56, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_66_66, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_62_62, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_67_67, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_63_63, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_68_68);
    }
    {
      transform_hlds__ssdebug__get_output_args_4_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_66_66, transform_hlds__ssdebug__HeadVars_16, transform_hlds__ssdebug__ArgModes_17, &transform_hlds__ssdebug__OutputVars_27);
    }
    {
      transform_hlds__ssdebug__rename_outputs_9_p_0(transform_hlds__ssdebug__OutputVars_27, transform_hlds__ssdebug__OrigBodyGoal_14, &transform_hlds__ssdebug__RenamedBodyGoal_28, &transform_hlds__ssdebug__AssignOutputsGoal_29, &transform_hlds__ssdebug__Renaming_30, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_67_67, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_72_72, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_68_68, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_73_73);
    }
    {
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__ssdebug__ProcDetism_31);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__ssdebug__ProcDetism_31, &transform_hlds__ssdebug__CanFail_32, &transform_hlds__ssdebug___Solns_33);
    }
    switch (transform_hlds__ssdebug__CanFail_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__ssdebug__RenamedOutputVars_34;

          {
            mercury__map__apply_to_list_3_p_0(transform_hlds__ssdebug__TypeInfo_112_112, transform_hlds__ssdebug__TypeInfo_112_112, transform_hlds__ssdebug__OutputVars_27, transform_hlds__ssdebug__Renaming_30, &transform_hlds__ssdebug__RenamedOutputVars_34);
          }
          {
            transform_hlds__ssdebug__add_promise_equivalent_solutions_3_p_0(transform_hlds__ssdebug__RenamedOutputVars_34, transform_hlds__ssdebug__RenamedBodyGoal_28, &transform_hlds__ssdebug__ScopedRenamedBodyGoal_35);
          }
        }
        break;
      case (MR_Integer) 1:
        transform_hlds__ssdebug__ScopedRenamedBodyGoal_35 = transform_hlds__ssdebug__RenamedBodyGoal_28;
        break;
    }
    {
      hlds__goal_util__update_instmap_3_p_0(transform_hlds__ssdebug__OrigBodyGoal_14, transform_hlds__ssdebug__InitInstMap_20, &transform_hlds__ssdebug__FinalInstMap_36);
    }
    {
      transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__FinalInstMap_36, transform_hlds__ssdebug__HeadVars_16, transform_hlds__ssdebug__Renaming_30, &transform_hlds__ssdebug__ExitArgListVar_37, &transform_hlds__ssdebug__ExitArgListGoals_38, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_66_66, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_75_75, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_76_76, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_58_58, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_77_77, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_72_72, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_78_78, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_73_73, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_79_79, transform_hlds__ssdebug__BoundVarDescsAtCall_23, &transform_hlds__ssdebug___BoundVarDescsAtExit_39);
    }
    {
      transform_hlds__ssdebug__make_retry_var_6_p_0((MR_String) "DoRetry", &transform_hlds__ssdebug__RetryVar_40, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_78_78, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_81_81, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_79_79, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_82_82);
    }
    {
      transform_hlds__ssdebug__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_89_89, 0) = ((MR_Box) (transform_hlds__ssdebug__RetryVar_40));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_88_88, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitArgListVar_37));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_88_88, 1) = ((MR_Box) (transform_hlds__ssdebug__V_89_89));
    }
    {
      transform_hlds__ssdebug__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_84_84, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_19));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_84_84, 1) = ((MR_Box) (transform_hlds__ssdebug__V_88_88));
    }
    {
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_exit", transform_hlds__ssdebug__V_84_84, &transform_hlds__ssdebug__HandleEventExitGoal_41, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_75_75, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_85_85, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_81_81, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_86_86, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_82_82, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_87_87);
    }
    {
      transform_hlds__ssdebug__make_recursive_call_6_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_77_77, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_85_85, transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__FullHeadVars_15, &transform_hlds__ssdebug__RecursiveGoal_42);
    }
    {
      transform_hlds__ssdebug__make_switch_goal_4_p_0(transform_hlds__ssdebug__RetryVar_40, transform_hlds__ssdebug__RecursiveGoal_42, transform_hlds__ssdebug__AssignOutputsGoal_29, &transform_hlds__ssdebug__SwitchGoal_43);
    }
    {
      transform_hlds__ssdebug__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_94_94, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructLevelGoal_24));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_97_97, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventCallGoal_26));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_100_100, 0) = ((MR_Box) (transform_hlds__ssdebug__ScopedRenamedBodyGoal_35));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_104_104, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventExitGoal_41));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_107_107, 0) = ((MR_Box) (transform_hlds__ssdebug__SwitchGoal_43));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_106_106, 0) = ((MR_Box) (transform_hlds__ssdebug__V_107_107));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_103_103, 0) = ((MR_Box) (transform_hlds__ssdebug__V_104_104));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_103_103, 1) = ((MR_Box) (transform_hlds__ssdebug__V_106_106));
    }
    {
      transform_hlds__ssdebug__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_102_102, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitArgListGoals_38));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_102_102, 1) = ((MR_Box) (transform_hlds__ssdebug__V_103_103));
    }
    {
      transform_hlds__ssdebug__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_99_99, 0) = ((MR_Box) (transform_hlds__ssdebug__V_100_100));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_99_99, 1) = ((MR_Box) (transform_hlds__ssdebug__V_102_102));
    }
    {
      transform_hlds__ssdebug__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_96_96, 0) = ((MR_Box) (transform_hlds__ssdebug__V_97_97));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_96_96, 1) = ((MR_Box) (transform_hlds__ssdebug__V_99_99));
    }
    {
      transform_hlds__ssdebug__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_93_93, 0) = ((MR_Box) (transform_hlds__ssdebug__V_94_94));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_93_93, 1) = ((MR_Box) (transform_hlds__ssdebug__V_96_96));
    }
    {
      transform_hlds__ssdebug__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_92_92, 0) = ((MR_Box) (transform_hlds__ssdebug__CallArgListGoals_22));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_92_92, 1) = ((MR_Box) (transform_hlds__ssdebug__V_93_93));
    }
    {
      transform_hlds__ssdebug__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_91_91, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdGoals_18));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_91_91, 1) = ((MR_Box) (transform_hlds__ssdebug__V_92_92));
    }
    {
      transform_hlds__ssdebug__BodyGoals_44 = mercury__list__condense_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__ssdebug__V_91_91);
    }
    {
      transform_hlds__ssdebug__commit_goal_changes_10_p_0(transform_hlds__ssdebug__BodyGoals_44, transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_77_77, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_76_76, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_46, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_85_85, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_48, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_86_86, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_87_87);
    }
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

    (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_46 = ((MR_Word) (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv0_Mode_46);
    {
      transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_2(transform_hlds__ssdebug__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_2(
  void * transform_hlds__ssdebug__env_ptr_arg)
{
  {
    struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * transform_hlds__ssdebug__env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) transform_hlds__ssdebug__env_ptr_arg;

    {
      (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_46);
    }
    if (!((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded))
      {
        (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_46);
      }
    (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = !((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded);
    if ((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded)
      {
        transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_1(transform_hlds__ssdebug__env_ptr);
      }
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
          {
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, &(transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv0_Mode_46, (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_31, transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_3, transform_hlds__ssdebug__env_ptr);
          }
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

    (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_72 = ((MR_Word) (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv1_Mode_72);
    {
      transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_6(transform_hlds__ssdebug__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_6(
  void * transform_hlds__ssdebug__env_ptr_arg)
{
  {
    struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * transform_hlds__ssdebug__env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) transform_hlds__ssdebug__env_ptr_arg;

    {
      (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_72);
    }
    if (!((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded))
      {
        (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_72);
      }
    (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = !((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded);
    if ((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded)
      {
        transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_5(transform_hlds__ssdebug__env_ptr);
      }
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
          {
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, &(transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv1_Mode_72, (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_57, transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_7, transform_hlds__ssdebug__env_ptr);
          }
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
          MR_Word transform_hlds__ssdebug__PredId_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__PredProcId_8, (MR_Integer) 0)));
          MR_Integer transform_hlds__ssdebug__ProcId_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__PredProcId_8, (MR_Integer) 1)));

          {
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, &(transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_31);
          }
          {
            transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_4(&transform_hlds__ssdebug__env);
          }
          (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = !((transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded);
          if ((transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded)
            {
              MR_Word transform_hlds__ssdebug__Determinism_32;

              {
                hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, &transform_hlds__ssdebug__Determinism_32);
              }
              switch (transform_hlds__ssdebug__Determinism_32) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 4:
                case (MR_Integer) 0:
                  {
                    transform_hlds__ssdebug__ssdebug_process_proc_det_6_p_0(transform_hlds__ssdebug__PredId_29, transform_hlds__ssdebug__ProcId_30, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
                  }
                  break;
                case (MR_Integer) 5:
                case (MR_Integer) 1:
                  {
                    transform_hlds__ssdebug__ssdebug_process_proc_semi_6_p_0(transform_hlds__ssdebug__PredId_29, transform_hlds__ssdebug__ProcId_30, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    transform_hlds__ssdebug__ssdebug_process_proc_erroneous_6_p_0(transform_hlds__ssdebug__PredId_29, transform_hlds__ssdebug__ProcId_30, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    transform_hlds__ssdebug__ssdebug_process_proc_failure_6_p_0(transform_hlds__ssdebug__PredId_29, transform_hlds__ssdebug__ProcId_30, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
                  }
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  {
                    transform_hlds__ssdebug__ssdebug_process_proc_nondet_6_p_0(transform_hlds__ssdebug__PredId_29, transform_hlds__ssdebug__ProcId_30, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
                  }
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

          {
            hlds__hlds_module__module_info_pred_info_3_p_0((transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__PredId_11, &transform_hlds__ssdebug__PredInfo_13);
          }
          {
            (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(transform_hlds__ssdebug__PredInfo_13);
          }
          if ((transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded)
            {
              MR_Word transform_hlds__ssdebug__PredId_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__PredProcId_8, (MR_Integer) 0)));
              MR_Integer transform_hlds__ssdebug__ProcId_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__PredProcId_8, (MR_Integer) 1)));

              {
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, &(transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_57);
              }
              {
                transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_8(&transform_hlds__ssdebug__env);
              }
              (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = !((transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded);
              if ((transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded)
                {
                  MR_Word transform_hlds__ssdebug__Determinism_58;

                  {
                    hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, &transform_hlds__ssdebug__Determinism_58);
                  }
                  switch (transform_hlds__ssdebug__Determinism_58) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 4:
                    case (MR_Integer) 0:
                      {
                        transform_hlds__ssdebug__ssdebug_process_proc_det_6_p_0(transform_hlds__ssdebug__PredId_55, transform_hlds__ssdebug__ProcId_56, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
                      }
                      break;
                    case (MR_Integer) 5:
                    case (MR_Integer) 1:
                      {
                        transform_hlds__ssdebug__ssdebug_process_proc_semi_6_p_0(transform_hlds__ssdebug__PredId_55, transform_hlds__ssdebug__ProcId_56, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        transform_hlds__ssdebug__ssdebug_process_proc_erroneous_6_p_0(transform_hlds__ssdebug__PredId_55, transform_hlds__ssdebug__ProcId_56, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        transform_hlds__ssdebug__ssdebug_process_proc_failure_6_p_0(transform_hlds__ssdebug__PredId_55, transform_hlds__ssdebug__ProcId_56, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
                      }
                      break;
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                      {
                        transform_hlds__ssdebug__ssdebug_process_proc_nondet_6_p_0(transform_hlds__ssdebug__PredId_55, transform_hlds__ssdebug__ProcId_56, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
                      }
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
transform_hlds__ssdebug__insert_context_update_call_5_p_0(
  MR_Word transform_hlds__ssdebug__ModuleInfo_6,
  MR_Word transform_hlds__ssdebug__Goal0_7,
  MR_Word * transform_hlds__ssdebug__Goal_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_25,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_26)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;
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
    MR_Word transform_hlds__ssdebug__V_39_39;
    MR_Word transform_hlds__ssdebug__V_41_41;
    MR_Word transform_hlds__ssdebug__V_47_47;
    MR_Word transform_hlds__ssdebug__V_48_48;
    MR_Word transform_hlds__ssdebug__V_49_49;
    MR_Word transform_hlds__ssdebug__V_50_50;
    MR_Word transform_hlds__ssdebug__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Goal0_7, (MR_Integer) 0)));

    {
      transform_hlds__ssdebug__Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__ssdebug__GoalInfo_11);
    }
    transform_hlds__ssdebug__FileName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Context_12, (MR_Integer) 0)));
    transform_hlds__ssdebug__LineNumber_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Context_12, (MR_Integer) 1)));
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_25, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_27_27);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_25, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_28_28);
    }
    {
      hlds__make_goal__make_string_const_construction_alloc_8_p_0(transform_hlds__ssdebug__FileName_13, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_6[0]), &transform_hlds__ssdebug__MakeFileName_17, &transform_hlds__ssdebug__FileNameVar_18, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_27_27, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_30_30, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_28_28, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_31_31);
    }
    {
      hlds__make_goal__make_int_const_construction_alloc_8_p_0(transform_hlds__ssdebug__LineNumber_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_6[1]), &transform_hlds__ssdebug__MakeLineNumber_19, &transform_hlds__ssdebug__LineNumberVar_20, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_30_30, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_34_34, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_31_31, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_35_35);
    }
    {
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_VarSet_34_34, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_25, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_37_37);
    }
    {
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_35_35, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_37_37, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_26);
    }
    {
      transform_hlds__ssdebug__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_39_39, 0) = ((MR_Box) (transform_hlds__ssdebug__LineNumberVar_20));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__Args_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Args_21, 0) = ((MR_Box) (transform_hlds__ssdebug__FileNameVar_18));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Args_21, 1) = ((MR_Box) (transform_hlds__ssdebug__V_39_39));
    }
    {
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&transform_hlds__ssdebug__InstMapDelta_23);
    }
    {
      transform_hlds__ssdebug__V_41_41 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    }
    {
      hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__ssdebug__V_41_41, (MR_String) "set_context", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__ssdebug__Args_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ssdebug__InstMapDelta_23, transform_hlds__ssdebug__ModuleInfo_6, transform_hlds__ssdebug__Context_12, &transform_hlds__ssdebug__SetContextGoal_24);
    }
    {
      transform_hlds__ssdebug__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_50_50, 0) = ((MR_Box) (transform_hlds__ssdebug__Goal0_7));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__ssdebug__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_49_49, 0) = ((MR_Box) (transform_hlds__ssdebug__SetContextGoal_24));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_49_49, 1) = ((MR_Box) (transform_hlds__ssdebug__V_50_50));
    }
    {
      transform_hlds__ssdebug__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_48_48, 0) = ((MR_Box) (transform_hlds__ssdebug__MakeLineNumber_19));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_48_48, 1) = ((MR_Box) (transform_hlds__ssdebug__V_49_49));
    }
    {
      transform_hlds__ssdebug__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_47_47, 0) = ((MR_Box) (transform_hlds__ssdebug__MakeFileName_17));
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_47_47, 1) = ((MR_Box) (transform_hlds__ssdebug__V_48_48));
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__ssdebug__V_47_47, transform_hlds__ssdebug__GoalInfo_11, transform_hlds__ssdebug__Goal_8);
    }
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
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__Args_12;
    MR_Word transform_hlds__ssdebug__SymName_13;
    MR_Word transform_hlds__ssdebug__CallExpr_14;
    MR_Word transform_hlds__ssdebug__GoalInfo0_16;
    MR_Word transform_hlds__ssdebug__Detism_17;
    MR_Word transform_hlds__ssdebug__GoalInfo_18;
    MR_Word transform_hlds__ssdebug__Goal_19;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_24_24;
    MR_Word transform_hlds__ssdebug__V_27_27;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_28_28;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_30_30;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_32_32;
    MR_Word transform_hlds__ssdebug__V_15_15;

    {
      hlds__hlds_pred__pred_info_proc_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_20, transform_hlds__ssdebug__ProcId_8, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_24_24);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_24_24, &transform_hlds__ssdebug__Args_12);
    }
    {
      hlds__hlds_pred__pred_info_get_sym_name_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_20, &transform_hlds__ssdebug__SymName_13);
    }
    {
      transform_hlds__ssdebug__CallExpr_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__CallExpr_14, 0) = ((MR_Box) (transform_hlds__ssdebug__PredId_7));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__CallExpr_14, 1) = ((MR_Box) (transform_hlds__ssdebug__ProcId_8));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__CallExpr_14, 2) = ((MR_Box) (transform_hlds__ssdebug__Args_12));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__CallExpr_14, 3) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__CallExpr_14, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__CallExpr_14, 5) = ((MR_Box) (transform_hlds__ssdebug__SymName_13));
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_24_24, &transform_hlds__ssdebug__V_27_27);
    }
    transform_hlds__ssdebug__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_27_27, (MR_Integer) 0)));
    transform_hlds__ssdebug__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_27_27, (MR_Integer) 1)));
    {
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_24_24, &transform_hlds__ssdebug__Detism_17);
    }
    {
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__Detism_17, transform_hlds__ssdebug__GoalInfo0_16, &transform_hlds__ssdebug__GoalInfo_18);
    }
    {
      transform_hlds__ssdebug__Goal_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Goal_19, 0) = ((MR_Box) (transform_hlds__ssdebug__CallExpr_14));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Goal_19, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfo_18));
    }
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__ssdebug__Goal_19, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_24_24, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_28_28);
    }
    {
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_28_28, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_30_30);
    }
    {
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_30_30, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_32_32, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_23);
    }
    {
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_32_32, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_20, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_21);
    }
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

    {
      transform_hlds__ssdebug__create_proxy_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__ssdebug__wrapper_arg_1), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2), &transform_hlds__ssdebug__conv2_STATE_VARIABLE_PredInfo_21, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_4), &transform_hlds__ssdebug__conv1_STATE_VARIABLE_ModuleInfo_23);
    }
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

    {
      transform_hlds__ssdebug__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_1[0], transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_15, ((MR_Box) (transform_hlds__ssdebug__PredId_7)), &transform_hlds__ssdebug__conv0_MaybeNewPredId0_11);
    }
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

        {
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17, transform_hlds__ssdebug__PredId_7, &transform_hlds__ssdebug__PredInfo_12);
        }
        {
          transform_hlds__ssdebug__PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__ssdebug__PredInfo_12);
        }
        {
          transform_hlds__ssdebug__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(transform_hlds__ssdebug__PredModule_13);
        }
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
            MR_Word transform_hlds__ssdebug__V_41_41;
            MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_22_42;
            MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_23_43;
            MR_String transform_hlds__ssdebug__V_44_44;
            MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_25_45;
            MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_28_48;
            MR_Box transform_hlds__ssdebug__conv4_STATE_VARIABLE_PredInfo_22_42;
            MR_Box transform_hlds__ssdebug__conv3_STATE_VARIABLE_ModuleInfo_23_43;

            {
              hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17, transform_hlds__ssdebug__PredId_7, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_17_37);
            }
            {
              hlds__hlds_pred__pred_info_set_status_3_p_0((MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))), transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_17_37, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_19_39);
            }
            {
              transform_hlds__ssdebug__ProcIds_31 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_19_39);
            }
            {
              transform_hlds__ssdebug__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_41_41, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_4[2]));
              MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_41_41, 1) = ((MR_Box) (transform_hlds__ssdebug__lookup_proxy_pred_6_p_0_1));
              MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_41_41, 3) = ((MR_Box) (transform_hlds__ssdebug__PredId_7));
            }
            {
              mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__ssdebug__V_41_41, transform_hlds__ssdebug__ProcIds_31, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_19_39)), &transform_hlds__ssdebug__conv4_STATE_VARIABLE_PredInfo_22_42, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17)), &transform_hlds__ssdebug__conv3_STATE_VARIABLE_ModuleInfo_23_43);
            }
            transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_22_42 = ((MR_Word) transform_hlds__ssdebug__conv4_STATE_VARIABLE_PredInfo_22_42);
            transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_23_43 = ((MR_Word) transform_hlds__ssdebug__conv3_STATE_VARIABLE_ModuleInfo_23_43);
            {
              transform_hlds__ssdebug__Name_32 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_22_42);
            }
            {
              transform_hlds__ssdebug__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) "SSDBPR__", transform_hlds__ssdebug__Name_32);
            }
            {
              hlds__hlds_pred__pred_info_set_name_3_p_0(transform_hlds__ssdebug__V_44_44, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_22_42, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_25_45);
            }
            {
              hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_25_45, &transform_hlds__ssdebug__Origin_33);
            }
            {
              transform_hlds__ssdebug__NewOrigin_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__NewOrigin_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
              MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__NewOrigin_34, 1) = ((MR_Box) (transform_hlds__ssdebug__Origin_33));
              MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__NewOrigin_34, 2) = ((MR_Box) (transform_hlds__ssdebug__PredId_7));
            }
            {
              hlds__hlds_pred__pred_info_set_origin_3_p_0(transform_hlds__ssdebug__NewOrigin_34, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_25_45, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_28_48);
            }
            {
              hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_23_43, &transform_hlds__ssdebug__PredTable0_35);
            }
            {
              hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_28_48, &transform_hlds__ssdebug__NewPredId_14, transform_hlds__ssdebug__PredTable0_35, &transform_hlds__ssdebug__PredTable_36);
            }
            {
              hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__ssdebug__PredTable_36, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_23_43, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_18);
            }
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
        {
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_1[0], ((MR_Box) (transform_hlds__ssdebug__PredId_7)), ((MR_Box) (*transform_hlds__ssdebug__MaybeNewPredId_8)), transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_15, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_16);
        }
      }
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
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__MainConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Case0_9, (MR_Integer) 0)));
    MR_Word transform_hlds__ssdebug__OtherConsIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Case0_9, (MR_Integer) 1)));
    MR_Word transform_hlds__ssdebug__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Case0_9, (MR_Integer) 2)));
    MR_Word transform_hlds__ssdebug__Goal_17;

    {
      transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(transform_hlds__ssdebug__Goal0_16, &transform_hlds__ssdebug__Goal_17, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_18, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_19, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_20, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_21, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_23);
    }
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

    {
      transform_hlds__ssdebug__ssdebug_first_pass_in_case_8_p_0(((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), &transform_hlds__ssdebug__conv17_Case_10, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_3), &transform_hlds__ssdebug__conv16_STATE_VARIABLE_ProcInfo_19, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_5), &transform_hlds__ssdebug__conv15_STATE_VARIABLE_ProxyMap_21, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_7), &transform_hlds__ssdebug__conv14_STATE_VARIABLE_ModuleInfo_23);
    }
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

    {
      transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), &transform_hlds__ssdebug__conv10_STATE_VARIABLE_Goal_77, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_3), &transform_hlds__ssdebug__conv9_STATE_VARIABLE_ProcInfo_79, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_5), &transform_hlds__ssdebug__conv8_STATE_VARIABLE_ProxyMap_81, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_7), &transform_hlds__ssdebug__conv7_STATE_VARIABLE_ModuleInfo_83);
    }
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

    {
      transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), &transform_hlds__ssdebug__conv3_STATE_VARIABLE_Goal_77, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_3), &transform_hlds__ssdebug__conv2_STATE_VARIABLE_ProcInfo_79, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_5), &transform_hlds__ssdebug__conv1_STATE_VARIABLE_ProxyMap_81, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_7), &transform_hlds__ssdebug__conv0_STATE_VARIABLE_ModuleInfo_83);
    }
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

          {
            transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(transform_hlds__ssdebug__SubGoal0_65, &transform_hlds__ssdebug__SubGoal_66, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83);
          }
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
          MR_Word transform_hlds__ssdebug__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 0)));
          MR_Word transform_hlds__ssdebug__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 1)));
          MR_Word transform_hlds__ssdebug__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 2)));
          MR_Word transform_hlds__ssdebug__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 4)));
          MR_Word transform_hlds__ssdebug__ShroudedPredProcId_27;
          MR_Word transform_hlds__ssdebug__ConsId0_21;
          MR_Word transform_hlds__ssdebug__V_20_20;
          MR_Word transform_hlds__ssdebug__V_22_22;
          MR_Word transform_hlds__ssdebug__V_23_23;
          MR_Word transform_hlds__ssdebug__V_24_24;
          MR_Word transform_hlds__ssdebug__V_25_25;
          MR_Word transform_hlds__ssdebug__V_26_26;

          transform_hlds__ssdebug__succeeded = ((MR_tag((MR_Word) transform_hlds__ssdebug__Unification0_18)) == (MR_mktag((MR_Integer) 0)));
          if (transform_hlds__ssdebug__succeeded)
            {
              transform_hlds__ssdebug__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 0)));
              transform_hlds__ssdebug__ConsId0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 1)));
              transform_hlds__ssdebug__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 2)));
              transform_hlds__ssdebug__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 3)));
              transform_hlds__ssdebug__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 4)));
              transform_hlds__ssdebug__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 5)));
              transform_hlds__ssdebug__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 6)));
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

              {
                transform_hlds__ssdebug__PredProcId_28 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(transform_hlds__ssdebug__ShroudedPredProcId_27);
              }
              transform_hlds__ssdebug__PredId_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__PredProcId_28, (MR_Integer) 0)));
              transform_hlds__ssdebug__ProcId_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__PredProcId_28, (MR_Integer) 1)));
              {
                transform_hlds__ssdebug__lookup_proxy_pred_6_p_0(transform_hlds__ssdebug__PredId_29, &transform_hlds__ssdebug__MaybeNewPredId_31, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83);
              }
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
                  MR_Word transform_hlds__ssdebug__V_157_157;
                  MR_Word transform_hlds__ssdebug__V_159_159;
                  MR_Word transform_hlds__ssdebug__V_160_160;
                  MR_Word transform_hlds__ssdebug__V_161_161;
                  MR_Word transform_hlds__ssdebug__V_162_162;
                  MR_Word transform_hlds__ssdebug__V_163_163;
                  MR_Word transform_hlds__ssdebug__V_158_158;
                  MR_Word transform_hlds__ssdebug__V_164_164;
                  MR_Word transform_hlds__ssdebug__V_165_165;
                  MR_Word transform_hlds__ssdebug__V_166_166;
                  MR_Word transform_hlds__ssdebug__V_168_168;
                  MR_Word transform_hlds__ssdebug__V_167_167;

                  {
                    transform_hlds__ssdebug__NewPredProcId_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__NewPredProcId_33, 0) = ((MR_Box) (transform_hlds__ssdebug__NewPredId_32));
                    MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__NewPredProcId_33, 1) = ((MR_Box) (transform_hlds__ssdebug__ProcId_30));
                  }
                  {
                    transform_hlds__ssdebug__NewShroundPredProcId_34 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(transform_hlds__ssdebug__NewPredProcId_33);
                  }
                  mercury__private_builtin__dummy_var = (MR_Integer) 0;
                  {
                    transform_hlds__ssdebug__ConsId_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_35, 1) = ((MR_Box) (transform_hlds__ssdebug__NewShroundPredProcId_34));
                    MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_35, 2) = NULL;
                  }
                  transform_hlds__ssdebug__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 0)));
                  transform_hlds__ssdebug__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 1)));
                  transform_hlds__ssdebug__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 2)));
                  transform_hlds__ssdebug__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 3)));
                  transform_hlds__ssdebug__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 4)));
                  transform_hlds__ssdebug__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 5)));
                  transform_hlds__ssdebug__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 6)));
                  {
                    transform_hlds__ssdebug__Unification_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification_36, 0) = ((MR_Box) (transform_hlds__ssdebug__V_157_157));
                    MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification_36, 1) = ((MR_Box) (transform_hlds__ssdebug__ConsId_35));
                    MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification_36, 2) = ((MR_Box) (transform_hlds__ssdebug__V_159_159));
                    MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification_36, 3) = ((MR_Box) (transform_hlds__ssdebug__V_160_160));
                    MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification_36, 4) = ((MR_Box) (transform_hlds__ssdebug__V_161_161));
                    MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification_36, 5) = ((MR_Box) (transform_hlds__ssdebug__V_162_162));
                    MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification_36, 6) = ((MR_Box) (transform_hlds__ssdebug__V_163_163));
                  }
                  transform_hlds__ssdebug__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 0)));
                  transform_hlds__ssdebug__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 1)));
                  transform_hlds__ssdebug__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 2)));
                  transform_hlds__ssdebug__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 3)));
                  transform_hlds__ssdebug__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 4)));
                  {
                    transform_hlds__ssdebug__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr_37, 0) = ((MR_Box) (transform_hlds__ssdebug__V_164_164));
                    MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr_37, 1) = ((MR_Box) (transform_hlds__ssdebug__V_165_165));
                    MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr_37, 2) = ((MR_Box) (transform_hlds__ssdebug__V_166_166));
                    MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr_37, 3) = ((MR_Box) (transform_hlds__ssdebug__Unification_36));
                    MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr_37, 4) = ((MR_Box) (transform_hlds__ssdebug__V_168_168));
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
            case (MR_Integer) 2:
              {
                MR_Word transform_hlds__ssdebug__STATE_VARIABLE_Goal_124_124;
                MR_Word transform_hlds__ssdebug__MaybeNewPredId_136;

                {
                  transform_hlds__ssdebug__lookup_proxy_pred_6_p_0(transform_hlds__ssdebug__PredId_142, &transform_hlds__ssdebug__MaybeNewPredId_136, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83);
                }
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

                    {
                      hlds__hlds_module__module_info_pred_info_3_p_0(*transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83, transform_hlds__ssdebug__NewPredId_132, &transform_hlds__ssdebug__NewPredInfo_42);
                    }
                    {
                      transform_hlds__ssdebug__NewModuleName_43 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__ssdebug__NewPredInfo_42);
                    }
                    {
                      transform_hlds__ssdebug__NewPredName_44 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__ssdebug__NewPredInfo_42);
                    }
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
                {
                  transform_hlds__ssdebug__insert_context_update_call_5_p_0(*transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83, transform_hlds__ssdebug__STATE_VARIABLE_Goal_124_124, transform_hlds__ssdebug__STATE_VARIABLE_Goal_77, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79);
                }
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
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                transform_hlds__ssdebug__insert_context_update_call_5_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82, transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_76, transform_hlds__ssdebug__STATE_VARIABLE_Goal_77, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79);
              }
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

              {
                mercury__list__map_foldl3_9_p_1(transform_hlds__ssdebug__TypeCtorInfo_177_177, transform_hlds__ssdebug__TypeCtorInfo_177_177, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[2], transform_hlds__ssdebug__Goals0_59, &transform_hlds__ssdebug__Goals_60, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78)), &transform_hlds__ssdebug__conv6_STATE_VARIABLE_ProcInfo_79, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80)), &transform_hlds__ssdebug__conv5_STATE_VARIABLE_ProxyMap_81, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82)), &transform_hlds__ssdebug__conv4_STATE_VARIABLE_ModuleInfo_83);
              }
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

              {
                mercury__list__map_foldl3_9_p_1(transform_hlds__ssdebug__TypeCtorInfo_189_189, transform_hlds__ssdebug__TypeCtorInfo_189_189, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[3], transform_hlds__ssdebug__Goals0_149, &transform_hlds__ssdebug__Goals_150, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78)), &transform_hlds__ssdebug__conv13_STATE_VARIABLE_ProcInfo_79, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80)), &transform_hlds__ssdebug__conv12_STATE_VARIABLE_ProxyMap_81, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82)), &transform_hlds__ssdebug__conv11_STATE_VARIABLE_ModuleInfo_83);
              }
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

              {
                mercury__list__map_foldl3_9_p_1(transform_hlds__ssdebug__TypeCtorInfo_201_201, transform_hlds__ssdebug__TypeCtorInfo_201_201, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[4], transform_hlds__ssdebug__Cases0_63, &transform_hlds__ssdebug__Cases_64, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78)), &transform_hlds__ssdebug__conv20_STATE_VARIABLE_ProcInfo_79, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80)), &transform_hlds__ssdebug__conv19_STATE_VARIABLE_ProxyMap_81, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82)), &transform_hlds__ssdebug__conv18_STATE_VARIABLE_ModuleInfo_83);
              }
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

              {
                transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(transform_hlds__ssdebug__SubGoal0_154, &transform_hlds__ssdebug__SubGoal_155, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83);
              }
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

              {
                transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(transform_hlds__ssdebug__Cond0_69, &transform_hlds__ssdebug__Cond_72, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_87_87, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80, &transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_88_88, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_89_89);
              }
              {
                transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(transform_hlds__ssdebug__Then0_70, &transform_hlds__ssdebug__Then_73, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_87_87, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_90_90, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_88_88, &transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_91_91, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_89_89, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_92_92);
              }
              {
                transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(transform_hlds__ssdebug__Else0_71, &transform_hlds__ssdebug__Else_74, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_90_90, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_91_91, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_92_92, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83);
              }
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
transform_hlds__ssdebug__ssdebug_first_pass_in_proc_6_p_0(
  MR_Word transform_hlds__ssdebug__PredId_7,
  MR_Integer transform_hlds__ssdebug__ProcId_8,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_15,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_16,
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_18)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__PredInfo_12;
    MR_Word transform_hlds__ssdebug__Goal0_13;
    MR_Word transform_hlds__ssdebug__Goal_14;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_19_19;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_20_20;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_22_22;
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_23_23;

    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17, transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, &transform_hlds__ssdebug__PredInfo_12, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_19_19);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_19_19, &transform_hlds__ssdebug__Goal0_13);
    }
    {
      transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(transform_hlds__ssdebug__Goal0_13, &transform_hlds__ssdebug__Goal_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_19_19, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_20_20, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_15, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_22_22);
    }
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__ssdebug__Goal_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_23_23);
    }
    {
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__PredInfo_12, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_23_23, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_22_22, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_18);
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

    {
      transform_hlds__ssdebug__ssdebug_first_pass_in_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__ssdebug__wrapper_arg_1), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2), &transform_hlds__ssdebug__conv1_STATE_VARIABLE_ProxyMap_16, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_4), &transform_hlds__ssdebug__conv0_STATE_VARIABLE_ModuleInfo_18);
    }
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
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__PredInfo_9;
    MR_Word transform_hlds__ssdebug__ProcIds_10;
    MR_Word transform_hlds__ssdebug__V_15_15;
    MR_Box transform_hlds__ssdebug__conv3_STATE_VARIABLE_ProxyMap_12;
    MR_Box transform_hlds__ssdebug__conv2_STATE_VARIABLE_ModuleInfo_14;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_13, transform_hlds__ssdebug__PredId_6, &transform_hlds__ssdebug__PredInfo_9);
    }
    {
      transform_hlds__ssdebug__ProcIds_10 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(transform_hlds__ssdebug__PredInfo_9);
    }
    {
      transform_hlds__ssdebug__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_15_15, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_15_15, 1) = ((MR_Box) (transform_hlds__ssdebug__ssdebug_first_pass_in_pred_5_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_15_15, 3) = ((MR_Box) (transform_hlds__ssdebug__PredId_6));
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__ssdebug__V_15_15, transform_hlds__ssdebug__ProcIds_10, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_11)), &transform_hlds__ssdebug__conv3_STATE_VARIABLE_ProxyMap_12, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_13)), &transform_hlds__ssdebug__conv2_STATE_VARIABLE_ModuleInfo_14);
    }
    *transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_12 = ((MR_Word) transform_hlds__ssdebug__conv3_STATE_VARIABLE_ProxyMap_12);
    *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_14 = ((MR_Word) transform_hlds__ssdebug__conv2_STATE_VARIABLE_ModuleInfo_14);
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_4_p_0_3(
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

    {
      transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2), &transform_hlds__ssdebug__conv7_STATE_VARIABLE_ProcInfo_15, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_4), &transform_hlds__ssdebug__conv6_STATE_VARIABLE_ModuleInfo_17);
    }
    *transform_hlds__ssdebug__wrapper_arg_3 = ((MR_Box) (transform_hlds__ssdebug__conv7_STATE_VARIABLE_ProcInfo_15));
    *transform_hlds__ssdebug__wrapper_arg_5 = ((MR_Box) (transform_hlds__ssdebug__conv6_STATE_VARIABLE_ModuleInfo_17));
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_4_p_0_2(
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

    {
      transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2), &transform_hlds__ssdebug__conv5_STATE_VARIABLE_ProcInfo_15, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_4), &transform_hlds__ssdebug__conv4_STATE_VARIABLE_ModuleInfo_17);
    }
    *transform_hlds__ssdebug__wrapper_arg_3 = ((MR_Box) (transform_hlds__ssdebug__conv5_STATE_VARIABLE_ProcInfo_15));
    *transform_hlds__ssdebug__wrapper_arg_5 = ((MR_Box) (transform_hlds__ssdebug__conv4_STATE_VARIABLE_ModuleInfo_17));
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_4_p_0_1(
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

    {
      transform_hlds__ssdebug__ssdebug_first_pass_in_pred_5_p_0(((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2), &transform_hlds__ssdebug__conv1_STATE_VARIABLE_ProxyMap_12, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_4), &transform_hlds__ssdebug__conv0_STATE_VARIABLE_ModuleInfo_14);
    }
    *transform_hlds__ssdebug__wrapper_arg_3 = ((MR_Box) (transform_hlds__ssdebug__conv1_STATE_VARIABLE_ProxyMap_12));
    *transform_hlds__ssdebug__wrapper_arg_5 = ((MR_Box) (transform_hlds__ssdebug__conv0_STATE_VARIABLE_ModuleInfo_14));
  }
}

void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_4_p_0(
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_bool transform_hlds__ssdebug__succeeded;
    MR_Word transform_hlds__ssdebug__SSTraceLevel_7;
    MR_Word transform_hlds__ssdebug__Globals_31;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__ssdebug__Globals_31);
    }
    {
      libs__globals__get_ssdb_trace_level_2_p_0(transform_hlds__ssdebug__Globals_31, &transform_hlds__ssdebug__SSTraceLevel_7);
    }
    switch (transform_hlds__ssdebug__SSTraceLevel_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__ssdebug__TypeCtorInfo_16_45;
          MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_12_12;
          MR_Word transform_hlds__ssdebug__V_13_13;
          MR_Word transform_hlds__ssdebug__V_15_15;
          MR_Word transform_hlds__ssdebug__PredIds_35;
          MR_Word transform_hlds__ssdebug__V_38_38;
          MR_Word transform_hlds__ssdebug___ProxyMap_36;
          MR_Box transform_hlds__ssdebug__conv3__ProxyMap_36;
          MR_Box transform_hlds__ssdebug__conv2_STATE_VARIABLE_ModuleInfo_12_12;

          {
            hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__ssdebug__PredIds_35);
          }
          transform_hlds__ssdebug__TypeCtorInfo_16_45 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
          {
            transform_hlds__ssdebug__V_38_38 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeCtorInfo_16_45, (MR_Word) &transform_hlds__ssdebug_scalar_common_1[0]);
          }
          {
            mercury__list__foldl2_6_p_0(transform_hlds__ssdebug__TypeCtorInfo_16_45, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[1], transform_hlds__ssdebug__PredIds_35, ((MR_Box) (transform_hlds__ssdebug__V_38_38)), &transform_hlds__ssdebug__conv3__ProxyMap_36, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_8)), &transform_hlds__ssdebug__conv2_STATE_VARIABLE_ModuleInfo_12_12);
          }
          transform_hlds__ssdebug___ProxyMap_36 = ((MR_Word) transform_hlds__ssdebug__conv3__ProxyMap_36);
          transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_12_12 = ((MR_Word) transform_hlds__ssdebug__conv2_STATE_VARIABLE_ModuleInfo_12_12);
          {
            transform_hlds__ssdebug__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_15_15, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_15_15, 1) = ((MR_Box) (transform_hlds__ssdebug__ssdebug_transform_module_4_p_0_2));
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_15_15, 3) = ((MR_Box) (transform_hlds__ssdebug__SSTraceLevel_7));
          }
          {
            transform_hlds__ssdebug__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_13_13, 1) = ((MR_Box) (transform_hlds__ssdebug__V_15_15));
          }
          {
            hlds__passes_aux__process_all_nonimported_procs_3_p_0(transform_hlds__ssdebug__V_13_13, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_12_12, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_9);
          }
        }
        break;
      case (MR_Integer) 0:
        *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_9 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_8;
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__ssdebug__V_16_16;
          MR_Word transform_hlds__ssdebug__V_18_18;

          {
            transform_hlds__ssdebug__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_18_18, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_18_18, 1) = ((MR_Box) (transform_hlds__ssdebug__ssdebug_transform_module_4_p_0_3));
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_18_18, 3) = ((MR_Box) (transform_hlds__ssdebug__SSTraceLevel_7));
          }
          {
            transform_hlds__ssdebug__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_16_16, 1) = ((MR_Box) (transform_hlds__ssdebug__V_18_18));
          }
          {
            hlds__passes_aux__process_all_nonimported_procs_3_p_0(transform_hlds__ssdebug__V_16_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_9);
          }
        }
        break;
    }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.ssdebug. */
