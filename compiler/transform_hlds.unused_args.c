/*
** Automatically generated from `unused_args.m'
** by the Mercury compiler,
** version rotd-2026-04-23
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


// :- module transform_hlds.unused_args.
// :- implementation.

/*
INIT mercury__transform_hlds__unused_args__init
ENDINIT
*/

#include "transform_hlds.unused_args.mih"


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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_vars.mih"
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
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.inst_match.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.unused_args_analysis.mih"
#include "transform_hlds.unused_args_base_ops.mih"
#include "transform_hlds.unused_args_optimize.mih"
#include "transform_hlds.unused_args_warn_pragma.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0_s {
  MR_Word transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__GlobalVarUsageMap_1;
  MR_Word transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__STATE_VARIABLE_LocalVarUsageMap_0_5;
  MR_bool transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__succeeded;
  MR_Word transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__RequiringLocalVars0_20;
  MR_Word transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__RequiringProcArgs0_21;
  jmp_buf transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__commit_0;
  MR_Word transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__PredProcId_23;
  MR_Word transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__ArgVar_24;
  MR_Word transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__Argument_34;
  MR_Box transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__conv1_Argument_34;
  jmp_buf transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__commit_1;
  MR_Word transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__X_35;
  MR_Box transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__conv2_X_35;
};


static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_unused_args_info_0_0[2];

static const MR_ConstString transform_hlds__unused_args__transform_hlds__unused_args__field_names_unused_args_info_0_0[2];

static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_unused_args_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_unused_args_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_unused_args_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_unused_args_info_0[1];

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_info_0[1];

static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_unify__602__1_2_p_0(
  MR_Word LHSVar_8,
  MR_Word CellVar_66);

static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_unify__593__1_2_p_0(
  MR_Word LHSVar_8,
  MR_Word CellVar_16);

static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__528__1_2_p_0(
  MR_Word LambdaHeadVar__1_64,
  MR_Word * LambdaHeadVar__2_65);

static void MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__try_to_look_up_global_var_usage_map_entry_for_proc__336__1_3_p_0(
  MR_Word HeadVars_32,
  MR_Integer HeadVar__2_184,
  MR_Word * HeadVar__3_185);

static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unused_args__tvar_to_type_info_var_3_p_0(
  MR_Word RttiVarMaps_4,
  MR_Word TVar_5,
  MR_Word * TypeInfoVar_6);

static void MR_CALL 
transform_hlds__unused_args__init_global_var_usage_map_entry_for_proc_12_p_0(
  MR_Word PredId_13,
  MR_Word PredInfo_14,
  MR_Integer ProcId_15,
  MR_Word ProcInfo_16,
  MR_Word STATE_VARIABLE_GlobalVarUsageMap_0_32,
  MR_Word * STATE_VARIABLE_GlobalVarUsageMap_33,
  MR_Word STATE_VARIABLE_FixpointPredProcIds_0_34,
  MR_Word * STATE_VARIABLE_FixpointPredProcIds_35,
  MR_Word STATE_VARIABLE_OptProcs_0_36,
  MR_Word * STATE_VARIABLE_OptProcs_37,
  MR_Word STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * STATE_VARIABLE_ModuleInfo_39);

static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(
  MR_Word Info_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_58,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_59);

static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_cases_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_3,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_4);

static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_3,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_4);

static void MR_CALL 
transform_hlds__unused_args__add_plain_call_arg_deps_5_p_0(
  MR_Word PredProcId_6,
  MR_Word CallArgVars_7,
  MR_Word CalleeArgVars_8,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_19,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_20);

static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_unify_6_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_unify_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_unify_6_p_0(
  MR_Word Info_7,
  MR_Word LHSVar_8,
  MR_Word RHS_9,
  MR_Word Unify_10,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_43,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_44);

static void MR_CALL 
transform_hlds__unused_args__partition_deconstruct_args_5_p_0(
  MR_Word Info_6,
  MR_Word Vars_7,
  MR_Word ArgModes_8,
  MR_Word * InputVars_9,
  MR_Word * OutputVars_10);

static void MR_CALL 
transform_hlds__unused_args__require_typeinfo_liveness_for_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args__require_typeinfo_liveness_for_vars_6_p_0(
  MR_Word PredProcId_1,
  MR_Word VarTable_2,
  MR_Word RttiVarMaps_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_5,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_6);

static void MR_CALL 
transform_hlds__unused_args__try_to_look_up_global_var_usage_map_entry_for_proc_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args__try_to_look_up_global_var_usage_map_entry_for_proc_10_p_0(
  MR_Word PredId_11,
  MR_Word PredInfo_12,
  MR_Integer ProcId_13,
  MR_Word ProcInfo_14,
  MR_Word STATE_VARIABLE_GlobalVarUsageMap_0_40,
  MR_Word * STATE_VARIABLE_GlobalVarUsageMap_41,
  MR_Word STATE_VARIABLE_OptProcs_0_42,
  MR_Word * STATE_VARIABLE_OptProcs_43,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45);

static void MR_CALL 
transform_hlds__unused_args__init_requiring_vars_for_var_4_p_0(
  MR_Word RequiredBy_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_3,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_4);

static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_113_117_105_114_101_100_95_118_97_114_115_95_97_115_95_117_115_101_100_95_116_111_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_5_p_0(
  MR_Integer PassNum_6,
  MR_Word LocalPredProcIds_8,
  MR_Word STATE_VARIABLE_GlobalVarUsageMap_0_13,
  MR_Word * STATE_VARIABLE_GlobalVarUsageMap_14);

static void MR_CALL 
transform_hlds__unused_args__record_required_vars_as_used_in_procs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Changed_0_2,
  MR_Word * STATE_VARIABLE_Changed_3,
  MR_Word STATE_VARIABLE_GlobalVarUsageMap_0_4,
  MR_Word * STATE_VARIABLE_GlobalVarUsageMap_5);

static void MR_CALL 
transform_hlds__unused_args__record_required_vars_as_used_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__unused_args__record_required_vars_as_used_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__unused_args__record_required_vars_as_used_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__unused_args__record_required_vars_as_used_6_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__unused_args__record_required_vars_as_used_6_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__unused_args__record_required_vars_as_used_6_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__unused_args__record_required_vars_as_used_6_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__unused_args__record_required_vars_as_used_6_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__unused_args__record_required_vars_as_used_6_p_0(
  MR_Word GlobalVarUsageMap_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Changed_0_3,
  MR_Word * STATE_VARIABLE_Changed_4,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_5,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_6);

static void MR_CALL 
transform_hlds__unused_args__build_proc_to_unused_args_map_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word GlobalVarUsageMap_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ProcToUnusedArgsMap_0_4,
  MR_Word * STATE_VARIABLE_ProcToUnusedArgsMap_5);

static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_nums_4_p_0(
  MR_Word LocalVarUsageMap_1,
  MR_Word HeadVar__2_2,
  MR_Integer ArgNum_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__unused_args__init_global_var_usage_map_5_p_0(
  MR_Word * GlobalVarUsageMap_6,
  MR_Word * FixpointPredProcIds_7,
  MR_Word * NewProcMap_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12);

static void MR_CALL 
transform_hlds__unused_args__init_global_var_usage_map_for_preds_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10);

static void MR_CALL 
transform_hlds__unused_args__init_global_var_usage_map_for_preds_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GlobalVarUsageMap_0_2,
  MR_Word * STATE_VARIABLE_GlobalVarUsageMap_3,
  MR_Word STATE_VARIABLE_FixpointPredProcIds_0_4,
  MR_Word * STATE_VARIABLE_FixpointPredProcIds_5,
  MR_Word STATE_VARIABLE_OptProcs_0_6,
  MR_Word * STATE_VARIABLE_OptProcs_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_1[6][2];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_2[6][3];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_3[4][5];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_4[3][6];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_5[1][15];




static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_1[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__unused_args_analysis__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_call_0))
  },
  /* row   4 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__unused_args_analysis__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_2[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_call_0))
  },
  /* row   4 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_3[4][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__call_pattern__arity2__transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_2[3])),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_1[3])),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_call_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__answer_pattern__arity2__transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_2[4])),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_1[4])),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_4[3][6] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__analysis__arity3__transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[0])),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[1])),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_call_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__unused_args__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_5[1][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0)),
    ((MR_Box) (&transform_hlds__unused_args__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__unused_args__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_unused_args_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)
};

static const MR_ConstString transform_hlds__unused_args__transform_hlds__unused_args__field_names_unused_args_info_0_0[2] = {
  (MR_String) "unarg_module_info",
  (MR_String) "unarg_var_table"
};

static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_unused_args_info_0_0 = {
  (MR_String) "unused_args_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__unused_args__transform_hlds__unused_args__field_types_unused_args_info_0_0,
  transform_hlds__unused_args__transform_hlds__unused_args__field_names_unused_args_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_unused_args_info_0_0[1] = { &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_unused_args_info_0_0 };

static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_unused_args_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_unused_args_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_unused_args_info_0[1] = { &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_unused_args_info_0_0 };

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unused_args____Unify____unused_args_info_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____unused_args_info_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "unused_args_info",
  { transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_unused_args_info_0 },
  { transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_unused_args_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_info_0,

};

static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_unify__602__1_2_p_0(
  MR_Word LHSVar_8,
  MR_Word CellVar_66)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), ((MR_Box) (CellVar_66)), ((MR_Box) (LHSVar_8)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_unify__593__1_2_p_0(
  MR_Word LHSVar_8,
  MR_Word CellVar_16)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), ((MR_Box) (CellVar_16)), ((MR_Box) (LHSVar_8)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__528__1_2_p_0(
  MR_Word LambdaHeadVar__1_64,
  MR_Word * LambdaHeadVar__2_65)
{
  MR_bool succeeded;
  MR_Word MaybeNameAndMode_41;

  *LambdaHeadVar__2_65 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_64, 0))));
  MaybeNameAndMode_41 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_64, 1))));
  succeeded = (MaybeNameAndMode_41 != (MR_Word) ((MR_Unsigned) 0U));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__try_to_look_up_global_var_usage_map_entry_for_proc__336__1_3_p_0(
  MR_Word HeadVars_32,
  MR_Integer HeadVar__2_184,
  MR_Word * HeadVar__3_185)
{
  MR_Box conv0_HeadVar__3_185;

  mercury__list__det_index1_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), HeadVars_32, HeadVar__2_184, &conv0_HeadVar__3_185);
  *HeadVar__3_185 = ((MR_Word) (conv0_HeadVar__3_185));
}

static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_info_0_0(
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

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      parse_tree__var_table____Compare____var_table_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_info_0_0(
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

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args__tvar_to_type_info_var_3_p_0(
  MR_Word RttiVarMaps_4,
  MR_Word TVar_5,
  MR_Word * TypeInfoVar_6)
{
  MR_Word Locn_7;

  hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(RttiVarMaps_4, TVar_5, &Locn_7);
  hlds__hlds_rtti__type_info_locn_var_2_p_0(Locn_7, TypeInfoVar_6);
}

static void MR_CALL 
transform_hlds__unused_args__init_global_var_usage_map_entry_for_proc_12_p_0(
  MR_Word PredId_13,
  MR_Word PredInfo_14,
  MR_Integer ProcId_15,
  MR_Word ProcInfo_16,
  MR_Word STATE_VARIABLE_GlobalVarUsageMap_0_32,
  MR_Word * STATE_VARIABLE_GlobalVarUsageMap_33,
  MR_Word STATE_VARIABLE_FixpointPredProcIds_0_34,
  MR_Word * STATE_VARIABLE_FixpointPredProcIds_35,
  MR_Word STATE_VARIABLE_OptProcs_0_36,
  MR_Word * STATE_VARIABLE_OptProcs_37,
  MR_Word STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * STATE_VARIABLE_ModuleInfo_39)
{
  MR_bool succeeded;
  MR_Word Globals_21;
  MR_Word Intermod_22;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_38, &Globals_21);
  libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 435, &Intermod_22);
  succeeded = (Intermod_22 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0(PredInfo_14);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_14);
      succeeded = !(succeeded);
    }
  }
  if (succeeded)
  {
    transform_hlds__unused_args__try_to_look_up_global_var_usage_map_entry_for_proc_10_p_0(PredId_13, PredInfo_14, ProcId_15, ProcInfo_16, STATE_VARIABLE_GlobalVarUsageMap_0_32, STATE_VARIABLE_GlobalVarUsageMap_33, STATE_VARIABLE_OptProcs_0_36, STATE_VARIABLE_OptProcs_37, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39);
    *STATE_VARIABLE_FixpointPredProcIds_35 = STATE_VARIABLE_FixpointPredProcIds_0_34;
  }
  else
  {
    succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_14);
    if (!(succeeded))
    {
      {
        MR_Integer Var_65;

        succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(PredInfo_14);
        if (succeeded)
        {
          hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_65);
          succeeded = (ProcId_15 == Var_65);
        }
      }
      if (!(succeeded))
      {
        {
          MR_Word EvalMethod_56;

          hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_16, &EvalMethod_56);
          succeeded = (EvalMethod_56 != (MR_Word) ((MR_Unsigned) 0U));
        }
        if (!(succeeded))
        {
          MR_Word MaybeDeclaredDetism_57;
          MR_Word Goal_58;
          MR_Word GoalInfo_60;
          MR_Word ActualDetism_61;

          hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_16, &MaybeDeclaredDetism_57);
          hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_16, &Goal_58);
          GoalInfo_60 = ((MR_Word) ((MR_hl_field(0, Goal_58, 1))));
          ActualDetism_61 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_60);
          {
            MR_Word DeclaredDetism_62;

            succeeded = (MaybeDeclaredDetism_57 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              DeclaredDetism_62 = ((MR_Word) ((MR_hl_field(1, MaybeDeclaredDetism_57, 0))));
              succeeded = (DeclaredDetism_62 != ActualDetism_61);
            }
          }
          if (!(succeeded))
          {
            MR_Word SolnCount_64;
            MR_Word _CanFail_63;

            parse_tree__prog_data__determinism_components_3_p_0(ActualDetism_61, &_CanFail_63, &SolnCount_64);
            succeeded = (SolnCount_64 == (MR_Integer) 0);
          }
        }
      }
    }
    if (succeeded)
    {
      *STATE_VARIABLE_FixpointPredProcIds_35 = STATE_VARIABLE_FixpointPredProcIds_0_34;
      *STATE_VARIABLE_GlobalVarUsageMap_33 = STATE_VARIABLE_GlobalVarUsageMap_0_32;
    }
    else
    {
      MR_Word VarTable_23;
      MR_Word Vars_24;
      MR_Word InitRequiredBy_26;
      MR_Word TypeInfoLiveness_27;
      MR_Word PredProcId_28;
      MR_Word Info_30;
      MR_Word Goal_31;
      MR_Word STATE_VARIABLE_LocalVarUsageMap_1_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word STATE_VARIABLE_LocalVarUsageMap_2_47;
      MR_Word STATE_VARIABLE_LocalVarUsageMap_3_48;
      MR_Word STATE_VARIABLE_LocalVarUsageMap_4_49;
      MR_Word STATE_VARIABLE_LocalVarUsageMap_5_50;
      MR_Word ChangedInstHeadVars_67;

      hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_16, &VarTable_23);
      parse_tree__var_table__var_table_vars_2_p_0(VarTable_23, &Vars_24);
      mercury__map__init_1_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0), &STATE_VARIABLE_LocalVarUsageMap_1_44);
      Var_45 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]));
      Var_46 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_arg_var_in_proc_0));
      {
        InitRequiredBy_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, InitRequiredBy_26, 0) = ((MR_Box) (Var_45));
        MR_hl_field(0, InitRequiredBy_26, 1) = ((MR_Box) (Var_46));
      }
      transform_hlds__unused_args__init_requiring_vars_for_var_4_p_0(InitRequiredBy_26, Vars_24, STATE_VARIABLE_LocalVarUsageMap_1_44, &STATE_VARIABLE_LocalVarUsageMap_2_47);
      hlds__hlds_proc_util__proc_info_instantiated_head_vars_3_p_0(STATE_VARIABLE_ModuleInfo_0_38, ProcInfo_16, &ChangedInstHeadVars_67);
      transform_hlds__unused_args_base_ops__record_vars_as_used_3_p_0(ChangedInstHeadVars_67, STATE_VARIABLE_LocalVarUsageMap_2_47, &STATE_VARIABLE_LocalVarUsageMap_3_48);
      hlds__hlds_pred__proc_interface_should_use_typeinfo_liveness_4_p_0(PredInfo_14, ProcId_15, Globals_21, &TypeInfoLiveness_27);
      {
        PredProcId_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredProcId_28, 0) = ((MR_Box) (PredId_13));
        MR_hl_field(0, PredProcId_28, 1) = ((MR_Box) (ProcId_15));
      }
      switch (TypeInfoLiveness_27) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_LocalVarUsageMap_4_49 = STATE_VARIABLE_LocalVarUsageMap_3_48;
          break;
        case (MR_Integer) 1:
          {
            MR_Word RttiVarMaps_29;

            hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_16, &RttiVarMaps_29);
            transform_hlds__unused_args__require_typeinfo_liveness_for_vars_6_p_0(PredProcId_28, VarTable_23, RttiVarMaps_29, Vars_24, STATE_VARIABLE_LocalVarUsageMap_3_48, &STATE_VARIABLE_LocalVarUsageMap_4_49);
          }
          break;
      }
      {
        Info_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Info_30, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_38));
        MR_hl_field(0, Info_30, 1) = ((MR_Box) (VarTable_23));
      }
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_16, &Goal_31);
      transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(Info_30, Goal_31, STATE_VARIABLE_LocalVarUsageMap_4_49, &STATE_VARIABLE_LocalVarUsageMap_5_50);
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[0]), ((MR_Box) (PredProcId_28)), ((MR_Box) (STATE_VARIABLE_LocalVarUsageMap_5_50)), STATE_VARIABLE_GlobalVarUsageMap_0_32, STATE_VARIABLE_GlobalVarUsageMap_33);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_FixpointPredProcIds_35 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (PredProcId_28));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_FixpointPredProcIds_0_34));
      }
    }
    *STATE_VARIABLE_ModuleInfo_39 = STATE_VARIABLE_ModuleInfo_0_38;
    *STATE_VARIABLE_OptProcs_37 = STATE_VARIABLE_OptProcs_0_36;
  }
}

static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_65;

  succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__528__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_65);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_65));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(
  MR_Word Info_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_58,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_59)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Goal_6, 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_54 = (MR_Word) ((MR_Word) (GoalExpr_8));
          MR_Word next_value_of_Goal_6 = SubGoal_54;

          // direct tailcall eliminated
          ;
          Goal_6 = next_value_of_Goal_6;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_10 = ((MR_Word) ((MR_hl_field(1, GoalExpr_8, 0))));
          MR_Word RHS_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr_8, 1))));
          MR_Word Unify_13 = ((MR_Word) ((MR_hl_field(1, GoalExpr_8, 3))));

          transform_hlds__unused_args__unused_args_traverse_unify_6_p_0(Info_5, LHS_10, RHS_11, Unify_13, STATE_VARIABLE_LocalVarUsageMap_0_58, STATE_VARIABLE_LocalVarUsageMap_59);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(2, GoalExpr_8, 0))));
          MR_Integer ProcId_16 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_8, 1))));
          MR_Word CallArgVars_17 = ((MR_Word) ((MR_hl_field(2, GoalExpr_8, 2))));
          MR_Word ModuleInfo_21 = ((MR_Word) ((MR_hl_field(0, Info_5, 0))));
          MR_Word ProcInfo_23;
          MR_Word CalleeHeadVars_24;
          MR_Word CalleePredProcId_25;
          MR_Word Var_22;

          hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_21, PredId_15, ProcId_16, &Var_22, &ProcInfo_23);
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_23, &CalleeHeadVars_24);
          {
            CalleePredProcId_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, CalleePredProcId_25, 0) = ((MR_Box) (PredId_15));
            MR_hl_field(0, CalleePredProcId_25, 1) = ((MR_Box) (ProcId_16));
          }
          transform_hlds__unused_args__add_plain_call_arg_deps_5_p_0(CalleePredProcId_25, CallArgVars_17, CalleeHeadVars_24, STATE_VARIABLE_LocalVarUsageMap_0_58, STATE_VARIABLE_LocalVarUsageMap_59);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_8, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 1))));
              MR_Word GenericCallArgVars_30;
              MR_Word STATE_VARIABLE_LocalVarUsageMap_3_62;
              MR_Word CallArgVars_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 2))));

              hlds__goal_vars__vars_in_generic_call_2_p_0(GenericCall_26, &GenericCallArgVars_30);
              transform_hlds__unused_args_base_ops__record_vars_as_used_3_p_0(GenericCallArgVars_30, STATE_VARIABLE_LocalVarUsageMap_0_58, &STATE_VARIABLE_LocalVarUsageMap_3_62);
              transform_hlds__unused_args_base_ops__record_vars_as_used_3_p_0(CallArgVars_80, STATE_VARIABLE_LocalVarUsageMap_3_62, STATE_VARIABLE_LocalVarUsageMap_59);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignArgs_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 4))));
              MR_Word ForeignExtraArgs_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 5))));
              MR_Word UsedVars_45;
              MR_Word Var_66;

              Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), ForeignArgs_34, ForeignExtraArgs_35);
              mercury__list__filter_map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[5]), Var_66, &UsedVars_45);
              transform_hlds__unused_args_base_ops__record_vars_as_used_3_p_0(UsedVars_45, STATE_VARIABLE_LocalVarUsageMap_0_58, STATE_VARIABLE_LocalVarUsageMap_59);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 2))));

              transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(Info_5, Goals_47, STATE_VARIABLE_LocalVarUsageMap_0_58, STATE_VARIABLE_LocalVarUsageMap_59);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_83 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 1))));

              transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(Info_5, Goals_83, STATE_VARIABLE_LocalVarUsageMap_0_58, STATE_VARIABLE_LocalVarUsageMap_59);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 3))));
              MR_Word STATE_VARIABLE_LocalVarUsageMap_8_70;
              MR_Word Var_84 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 1))));

              transform_hlds__unused_args_base_ops__record_var_as_used_3_p_0(Var_84, STATE_VARIABLE_LocalVarUsageMap_0_58, &STATE_VARIABLE_LocalVarUsageMap_8_70);
              transform_hlds__unused_args__unused_args_traverse_cases_4_p_0(Info_5, Cases_49, STATE_VARIABLE_LocalVarUsageMap_8_70, STATE_VARIABLE_LocalVarUsageMap_59);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 1))));
              MR_Word SubGoal_85 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 2))));
              MR_Word Var_76;

              succeeded = ((((MR_tag((MR_Word) Reason_55)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_55, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_76 = ((MR_Unsigned) ((MR_hl_field(3, Reason_55, 2))) & (MR_Integer) 3);
                succeeded = (Var_76 == (MR_Integer) 1);
              }
              if (succeeded)
                *STATE_VARIABLE_LocalVarUsageMap_59 = STATE_VARIABLE_LocalVarUsageMap_0_58;
              else
              {
                MR_Word next_value_of_Goal_6 = SubGoal_85;

                // direct tailcall eliminated
                ;
                Goal_6 = next_value_of_Goal_6;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 2))));
              MR_Word Then_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 3))));
              MR_Word Else_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 4))));
              MR_Word STATE_VARIABLE_LocalVarUsageMap_10_72;
              MR_Word STATE_VARIABLE_LocalVarUsageMap_11_73;
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_58;

              transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(Info_5, Cond_51, STATE_VARIABLE_LocalVarUsageMap_0_58, &STATE_VARIABLE_LocalVarUsageMap_10_72);
              transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(Info_5, Then_52, STATE_VARIABLE_LocalVarUsageMap_10_72, &STATE_VARIABLE_LocalVarUsageMap_11_73);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = Else_53;
              next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_58 = STATE_VARIABLE_LocalVarUsageMap_11_73;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_LocalVarUsageMap_0_58 = next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_58;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_goal\'/4", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_cases_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_3,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_LocalVarUsageMap_4 = STATE_VARIABLE_LocalVarUsageMap_0_3;
    else
    {
      MR_Word Case_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Cases_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(0, Case_10, 2))));
      MR_Word STATE_VARIABLE_LocalVarUsageMap_1_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3;

      transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(Info_1, Goal_15, STATE_VARIABLE_LocalVarUsageMap_0_3, &STATE_VARIABLE_LocalVarUsageMap_1_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Cases_11;
      next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3 = STATE_VARIABLE_LocalVarUsageMap_1_18;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_LocalVarUsageMap_0_3 = next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_3,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_LocalVarUsageMap_4 = STATE_VARIABLE_LocalVarUsageMap_0_3;
    else
    {
      MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_LocalVarUsageMap_1_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3;

      transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(Info_1, Goal_10, STATE_VARIABLE_LocalVarUsageMap_0_3, &STATE_VARIABLE_LocalVarUsageMap_1_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Goals_11;
      next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3 = STATE_VARIABLE_LocalVarUsageMap_1_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_LocalVarUsageMap_0_3 = next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__add_plain_call_arg_deps_5_p_0(
  MR_Word PredProcId_6,
  MR_Word CallArgVars_7,
  MR_Word CalleeArgVars_8,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_19,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_20)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((CallArgVars_7 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((CalleeArgVars_8 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_LocalVarUsageMap_20 = STATE_VARIABLE_LocalVarUsageMap_0_19;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.add_plain_call_arg_deps\'/5", (MR_String) "invalid call");
          return;
        }
    else
    {
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, CallArgVars_7, 1))));
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, CallArgVars_7, 0))));

      if ((CalleeArgVars_8 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.add_plain_call_arg_deps\'/5", (MR_String) "invalid call");
          return;
        }
      else
      {
        MR_Word HeadCalleeArgVar_16 = ((MR_Word) ((MR_hl_field(1, CalleeArgVars_8, 0))));
        MR_Word TailCalleeArgVars_17 = ((MR_Word) ((MR_hl_field(1, CalleeArgVars_8, 1))));
        MR_Word ArgVarInProc_18;
        MR_Word STATE_VARIABLE_LocalVarUsageMap_1_25;
        MR_Word next_value_of_CallArgVars_7;
        MR_Word next_value_of_CalleeArgVars_8;
        MR_Word next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_19;

        {
          ArgVarInProc_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ArgVarInProc_18, 0) = ((MR_Box) (PredProcId_6));
          MR_hl_field(0, ArgVarInProc_18, 1) = ((MR_Box) (HeadCalleeArgVar_16));
        }
        transform_hlds__unused_args_base_ops__local_var_is_required_by_proc_arg_4_p_0(Var_27, ArgVarInProc_18, STATE_VARIABLE_LocalVarUsageMap_0_19, &STATE_VARIABLE_LocalVarUsageMap_1_25);
        // direct tailcall eliminated
        ;
        next_value_of_CallArgVars_7 = Var_26;
        next_value_of_CalleeArgVars_8 = TailCalleeArgVars_17;
        next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_19 = STATE_VARIABLE_LocalVarUsageMap_1_25;
        CallArgVars_7 = next_value_of_CallArgVars_7;
        CalleeArgVars_8 = next_value_of_CalleeArgVars_8;
        STATE_VARIABLE_LocalVarUsageMap_0_19 = next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_19;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_unify_6_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_unify__602__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_unify_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_unify__593__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_unify_6_p_0(
  MR_Word Info_7,
  MR_Word LHSVar_8,
  MR_Word RHS_9,
  MR_Word Unify_10,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_43,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_44)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Unify_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word CellVar_16 = ((MR_Word) ((MR_hl_field(0, Unify_10, 0))));
        MR_Word ArgVars_18 = ((MR_Word) ((MR_hl_field(0, Unify_10, 2))));
        MR_Word Var_51;

        {
          Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_51, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[2]));
          MR_hl_field(0, Var_51, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_traverse_unify_6_p_0_1));
          MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_51, 3) = ((MR_Box) (LHSVar_8));
          MR_hl_field(0, Var_51, 4) = ((MR_Box) (CellVar_16));
        }
        mercury__require__expect_3_p_0(Var_51, (MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_unify\'/6", (MR_String) "LHSVar != CellVar");
        succeeded = transform_hlds__unused_args_base_ops__local_var_is_used_2_p_0(STATE_VARIABLE_LocalVarUsageMap_0_43, CellVar_16);
        if (succeeded)
          transform_hlds__unused_args_base_ops__record_vars_as_used_3_p_0(ArgVars_18, STATE_VARIABLE_LocalVarUsageMap_0_43, STATE_VARIABLE_LocalVarUsageMap_44);
        else
          transform_hlds__unused_args_base_ops__local_vars_are_required_by_local_var_4_p_0(ArgVars_18, CellVar_16, STATE_VARIABLE_LocalVarUsageMap_0_43, STATE_VARIABLE_LocalVarUsageMap_44);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgModes_24 = ((MR_Word) ((MR_hl_field(1, Unify_10, 3))));
        MR_Word CanFail_25 = ((((MR_Unsigned) ((MR_hl_field(1, Unify_10, 4))) >> 1)) & (MR_Integer) 1);
        MR_Word InputVars_27;
        MR_Word OutputVars_28;
        MR_Word Var_56;
        MR_Word STATE_VARIABLE_LocalVarUsageMap_7_59;
        MR_Word STATE_VARIABLE_LocalVarUsageMap_8_60;
        MR_Word CellVar_66 = ((MR_Word) ((MR_hl_field(1, Unify_10, 0))));
        MR_Word ArgVars_67 = ((MR_Word) ((MR_hl_field(1, Unify_10, 2))));

        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_56, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[2]));
          MR_hl_field(0, Var_56, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_traverse_unify_6_p_0_2));
          MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_56, 3) = ((MR_Box) (LHSVar_8));
          MR_hl_field(0, Var_56, 4) = ((MR_Box) (CellVar_66));
        }
        mercury__require__expect_3_p_0(Var_56, (MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_unify\'/6", (MR_String) "LHSVar != CellVar");
        transform_hlds__unused_args__partition_deconstruct_args_5_p_0(Info_7, ArgVars_67, ArgModes_24, &InputVars_27, &OutputVars_28);
        transform_hlds__unused_args_base_ops__local_var_is_required_by_local_vars_4_p_0(CellVar_66, OutputVars_28, STATE_VARIABLE_LocalVarUsageMap_0_43, &STATE_VARIABLE_LocalVarUsageMap_7_59);
        transform_hlds__unused_args_base_ops__local_vars_are_required_by_local_var_4_p_0(InputVars_27, CellVar_66, STATE_VARIABLE_LocalVarUsageMap_7_59, &STATE_VARIABLE_LocalVarUsageMap_8_60);
        switch (CanFail_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            transform_hlds__unused_args_base_ops__record_var_as_used_3_p_0(CellVar_66, STATE_VARIABLE_LocalVarUsageMap_8_60, STATE_VARIABLE_LocalVarUsageMap_44);
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_LocalVarUsageMap_44 = STATE_VARIABLE_LocalVarUsageMap_8_60;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Target_14 = ((MR_Word) ((MR_hl_field(2, Unify_10, 0))));
        MR_Word Source_15 = ((MR_Word) ((MR_hl_field(2, Unify_10, 1))));

        succeeded = transform_hlds__unused_args_base_ops__local_var_is_used_2_p_0(STATE_VARIABLE_LocalVarUsageMap_0_43, Target_14);
        if (succeeded)
          transform_hlds__unused_args_base_ops__record_var_as_used_3_p_0(Source_15, STATE_VARIABLE_LocalVarUsageMap_0_43, STATE_VARIABLE_LocalVarUsageMap_44);
        else
        {
          MR_Word Var_48;

          {
            Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_48, 0) = ((MR_Box) (Target_14));
            MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          transform_hlds__unused_args_base_ops__local_var_is_required_by_local_vars_4_p_0(Source_15, Var_48, STATE_VARIABLE_LocalVarUsageMap_0_43, STATE_VARIABLE_LocalVarUsageMap_44);
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Unify_10, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var1_12 = ((MR_Word) ((MR_hl_field(3, Unify_10, 1))));
            MR_Word Var2_13 = ((MR_Word) ((MR_hl_field(3, Unify_10, 2))));
            MR_Word STATE_VARIABLE_LocalVarUsageMap_1_45;

            transform_hlds__unused_args_base_ops__record_var_as_used_3_p_0(Var1_12, STATE_VARIABLE_LocalVarUsageMap_0_43, &STATE_VARIABLE_LocalVarUsageMap_1_45);
            transform_hlds__unused_args_base_ops__record_var_as_used_3_p_0(Var2_13, STATE_VARIABLE_LocalVarUsageMap_1_45, STATE_VARIABLE_LocalVarUsageMap_44);
          }
          break;
        case (MR_Integer) 1:
          switch (MR_tag((MR_Word) RHS_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word RHSVar_32 = ((MR_Word) ((MR_hl_field(0, RHS_9, 0))));
                MR_Word STATE_VARIABLE_LocalVarUsageMap_10_62;

                transform_hlds__unused_args_base_ops__record_var_as_used_3_p_0(RHSVar_32, STATE_VARIABLE_LocalVarUsageMap_0_43, &STATE_VARIABLE_LocalVarUsageMap_10_62);
                transform_hlds__unused_args_base_ops__record_var_as_used_3_p_0(LHSVar_8, STATE_VARIABLE_LocalVarUsageMap_10_62, STATE_VARIABLE_LocalVarUsageMap_44);
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_unify\'/6", (MR_String) "complicated unifications should only be var-var");
                return;
              }
              break;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__partition_deconstruct_args_5_p_0(
  MR_Word Info_6,
  MR_Word Vars_7,
  MR_Word ArgModes_8,
  MR_Word * InputVars_9,
  MR_Word * OutputVars_10)
{
  MR_bool succeeded;

  if ((Vars_7 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((ArgModes_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *InputVars_9 = (MR_Word) ((MR_Unsigned) 0U);
      *OutputVars_10 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.partition_deconstruct_args\'/5", (MR_String) "mismatched lists");
        return;
      }
  else
  {
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, Vars_7, 1))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, Vars_7, 0))));

    if ((ArgModes_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.partition_deconstruct_args\'/5", (MR_String) "mismatched lists");
        return;
      }
    else
    {
      MR_Word HeadArgMode_17 = ((MR_Word) ((MR_hl_field(1, ArgModes_8, 0))));
      MR_Word TailArgModes_18 = ((MR_Word) ((MR_hl_field(1, ArgModes_8, 1))));
      MR_Word InputVarsTail_19;
      MR_Word OutputVarsTail_20;
      MR_Word InitX_21;
      MR_Word FinalX_22;
      MR_Word InitY_23;
      MR_Word FinalY_24;
      MR_Word HeadType_25;
      MR_Word ModuleInfo_26;
      MR_Word Var_31;

      transform_hlds__unused_args__partition_deconstruct_args_5_p_0(Info_6, Var_34, TailArgModes_18, &InputVarsTail_19, &OutputVarsTail_20);
      InitX_21 = ((MR_Word) ((MR_hl_field(0, HeadArgMode_17, 0))));
      FinalX_22 = ((MR_Word) ((MR_hl_field(0, HeadArgMode_17, 1))));
      InitY_23 = ((MR_Word) ((MR_hl_field(0, HeadArgMode_17, 2))));
      FinalY_24 = ((MR_Word) ((MR_hl_field(0, HeadArgMode_17, 3))));
      Var_31 = ((MR_Word) ((MR_hl_field(0, Info_6, 1))));
      parse_tree__var_table__lookup_var_type_3_p_0(Var_31, Var_35, &HeadType_25);
      ModuleInfo_26 = ((MR_Word) ((MR_hl_field(0, Info_6, 0))));
      succeeded = hlds__inst_match__inst_matches_binding_4_p_0(ModuleInfo_26, HeadType_25, InitX_21, FinalX_22);
      if (succeeded)
        *InputVars_9 = InputVarsTail_19;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *InputVars_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_35));
          MR_hl_field(1, base, 1) = ((MR_Box) (InputVarsTail_19));
        }
      succeeded = hlds__inst_match__inst_matches_binding_4_p_0(ModuleInfo_26, HeadType_25, InitY_23, FinalY_24);
      if (succeeded)
        *OutputVars_10 = OutputVarsTail_20;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *OutputVars_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_35));
          MR_hl_field(1, base, 1) = ((MR_Box) (OutputVarsTail_20));
        }
    }
  }
}

static void MR_CALL 
transform_hlds__unused_args__require_typeinfo_liveness_for_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_TypeInfoVar_6;

  transform_hlds__unused_args__tvar_to_type_info_var_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_TypeInfoVar_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_TypeInfoVar_6));
}

static void MR_CALL 
transform_hlds__unused_args__require_typeinfo_liveness_for_vars_6_p_0(
  MR_Word PredProcId_1,
  MR_Word VarTable_2,
  MR_Word RttiVarMaps_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_5,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_LocalVarUsageMap_6 = STATE_VARIABLE_LocalVarUsageMap_0_5;
    else
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Vars_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word STATE_VARIABLE_LocalVarUsageMap_1_21;
      MR_Word Type_22;
      MR_Word TVars_23;
      MR_Word TypeInfoVars_24;
      MR_Word ArgVarInProc_25;
      MR_Word Var_26;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_5;

      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_2, Var_16, &Type_22);
      parse_tree__prog_type_scan__type_vars_in_type_2_p_0(Type_22, &TVars_23);
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_26, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_4[2]));
        MR_hl_field(0, Var_26, 1) = ((MR_Box) (transform_hlds__unused_args__require_typeinfo_liveness_for_vars_6_p_0_1));
        MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_26, 3) = ((MR_Box) (RttiVarMaps_3));
      }
      mercury__list__map_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[5]), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), Var_26, TVars_23, &TypeInfoVars_24);
      {
        ArgVarInProc_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ArgVarInProc_25, 0) = ((MR_Box) (PredProcId_1));
        MR_hl_field(0, ArgVarInProc_25, 1) = ((MR_Box) (Var_16));
      }
      transform_hlds__unused_args_base_ops__local_vars_are_required_by_proc_arg_4_p_0(TypeInfoVars_24, ArgVarInProc_25, STATE_VARIABLE_LocalVarUsageMap_0_5, &STATE_VARIABLE_LocalVarUsageMap_1_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Vars_17;
      next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_5 = STATE_VARIABLE_LocalVarUsageMap_1_21;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_LocalVarUsageMap_0_5 = next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__try_to_look_up_global_var_usage_map_entry_for_proc_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_185;

  transform_hlds__unused_args__IntroducedFrom__pred__try_to_look_up_global_var_usage_map_entry_for_proc__336__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), &conv0_HeadVar__3_185);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_185));
}

static void MR_CALL 
transform_hlds__unused_args__try_to_look_up_global_var_usage_map_entry_for_proc_10_p_0(
  MR_Word PredId_11,
  MR_Word PredInfo_12,
  MR_Integer ProcId_13,
  MR_Word ProcInfo_14,
  MR_Word STATE_VARIABLE_GlobalVarUsageMap_0_40,
  MR_Word * STATE_VARIABLE_GlobalVarUsageMap_41,
  MR_Word STATE_VARIABLE_OptProcs_0_42,
  MR_Word * STATE_VARIABLE_OptProcs_43,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45)
{
  MR_Word PredModuleName_18;
  MR_Word PredFormArity_19;
  MR_Word FuncInfo_20;
  MR_Word AnalysisInfo0_21;
  MR_Word ModuleId_22;
  MR_Word FuncId_23;
  MR_Word MaybeBestResult_24;
  MR_Word AnalysisInfo_39;
  MR_Word STATE_VARIABLE_ModuleInfo_1_54;

  PredModuleName_18 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_12);
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_12, &PredFormArity_19);
  FuncInfo_20 = (MR_Word) (PredFormArity_19);
  hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_44, &AnalysisInfo0_21);
  transform_hlds__mmc_analysis__pred_info_proc_id_to_module_name_func_id_4_p_0(PredInfo_12, ProcId_13, &ModuleId_22, &FuncId_23);
  analysis__operations__lookup_best_result_6_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_4[0]), AnalysisInfo0_21, ModuleId_22, FuncId_23, ((MR_Box) (FuncInfo_20)), ((MR_Box) ((MR_Integer) 0)), &MaybeBestResult_24);
  if ((MaybeBestResult_24 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Var_55;

    Var_55 = transform_hlds__unused_args_analysis__analysis_name_0_f_0();
    analysis__operations__record_request_6_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_3[0]), Var_55, PredModuleName_18, FuncId_23, ((MR_Box) ((MR_Integer) 0)), AnalysisInfo0_21, &AnalysisInfo_39);
    *STATE_VARIABLE_GlobalVarUsageMap_41 = STATE_VARIABLE_GlobalVarUsageMap_0_40;
    *STATE_VARIABLE_OptProcs_43 = STATE_VARIABLE_OptProcs_0_42;
    STATE_VARIABLE_ModuleInfo_1_54 = STATE_VARIABLE_ModuleInfo_0_44;
  }
  else
  {
    MR_Word BestAnswer_26;
    MR_Word UnusedArgs_28;
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(1, MaybeBestResult_24, 0))));

    BestAnswer_26 = ((MR_Word) ((MR_hl_field(0, Var_47, 1))));
    UnusedArgs_28 = (MR_Word) (BestAnswer_26);
    if ((UnusedArgs_28 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_GlobalVarUsageMap_41 = STATE_VARIABLE_GlobalVarUsageMap_0_40;
      *STATE_VARIABLE_OptProcs_43 = STATE_VARIABLE_OptProcs_0_42;
      STATE_VARIABLE_ModuleInfo_1_54 = STATE_VARIABLE_ModuleInfo_0_44;
    }
    else
    {
      MR_Word InitRequiredBy_31;
      MR_Word HeadVars_32;
      MR_Word UnusedVars_33;
      MR_Word LocalVarUsageMap_34;
      MR_Word PredProcId_35;
      MR_Word Globals_36;
      MR_Word OptTuple_37;
      MR_Word OptUnusedArgs_38;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;

      Var_48 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]));
      Var_49 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_arg_var_in_proc_0));
      {
        InitRequiredBy_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, InitRequiredBy_31, 0) = ((MR_Box) (Var_48));
        MR_hl_field(0, InitRequiredBy_31, 1) = ((MR_Box) (Var_49));
      }
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_14, &HeadVars_32);
      {
        Var_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_50, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_4[1]));
        MR_hl_field(0, Var_50, 1) = ((MR_Box) (transform_hlds__unused_args__try_to_look_up_global_var_usage_map_entry_for_proc_10_p_0_1));
        MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_50, 3) = ((MR_Box) (HeadVars_32));
      }
      mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), Var_50, UnusedArgs_28, &UnusedVars_33);
      Var_51 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0));
      transform_hlds__unused_args__init_requiring_vars_for_var_4_p_0(InitRequiredBy_31, UnusedVars_33, Var_51, &LocalVarUsageMap_34);
      {
        PredProcId_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredProcId_35, 0) = ((MR_Box) (PredId_11));
        MR_hl_field(0, PredProcId_35, 1) = ((MR_Box) (ProcId_13));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[0]), ((MR_Box) (PredProcId_35)), ((MR_Box) (LocalVarUsageMap_34)), STATE_VARIABLE_GlobalVarUsageMap_0_40, STATE_VARIABLE_GlobalVarUsageMap_41);
      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_44, &Globals_36);
      libs__globals__get_opt_tuple_2_p_0(Globals_36, &OptTuple_37);
      OptUnusedArgs_38 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_37, 0))) >> 6)) & (MR_Integer) 1);
      switch (OptUnusedArgs_38) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_OptProcs_43 = STATE_VARIABLE_OptProcs_0_42;
            STATE_VARIABLE_ModuleInfo_1_54 = STATE_VARIABLE_ModuleInfo_0_44;
          }
          break;
        case (MR_Integer) 0:
          transform_hlds__unused_args_optimize__make_imported_unused_args_pred_info_6_p_0(PredProcId_35, UnusedArgs_28, STATE_VARIABLE_OptProcs_0_42, STATE_VARIABLE_OptProcs_43, STATE_VARIABLE_ModuleInfo_0_44, &STATE_VARIABLE_ModuleInfo_1_54);
          break;
      }
    }
    AnalysisInfo_39 = AnalysisInfo0_21;
  }
  hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_39, STATE_VARIABLE_ModuleInfo_1_54, STATE_VARIABLE_ModuleInfo_45);
}

static void MR_CALL 
transform_hlds__unused_args__init_requiring_vars_for_var_4_p_0(
  MR_Word RequiredBy_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_3,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_LocalVarUsageMap_4 = STATE_VARIABLE_LocalVarUsageMap_0_3;
    else
    {
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Vars_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_LocalVarUsageMap_1_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3;

      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0), ((MR_Box) (Var_10)), ((MR_Box) (RequiredBy_1)), STATE_VARIABLE_LocalVarUsageMap_0_3, &STATE_VARIABLE_LocalVarUsageMap_1_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vars_11;
      next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3 = STATE_VARIABLE_LocalVarUsageMap_1_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_LocalVarUsageMap_0_3 = next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_6_p_0(
  MR_Word GatherPragmas_7,
  MR_Word RecordAnalysis_8,
  MR_Word * Specs_9,
  MR_Word * PragmaUnusedArgInfos_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25)
{
  MR_bool succeeded;
  MR_Word Globals_12;
  MR_Word VeryVerbose_13;
  MR_Word GlobalVarUsageMap0_14;
  MR_Word FixpointPredProcIds_15;
  MR_Word NewProcMap0_16;
  MR_Word GlobalVarUsageMap_17;
  MR_Word ProcToUnusedArgsMap0_18;
  MR_Word ProcToUnusedArgsMap_19;
  MR_Word DoWarnBool_20;
  MR_Word DoWarn_21;
  MR_Word OptTuple_22;
  MR_Word OptUnusedArgs_23;
  MR_Word STATE_VARIABLE_ModuleInfo_1_27;
  MR_Word STATE_VARIABLE_ModuleInfo_2_30;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_24, &Globals_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 132, &VeryVerbose_13);
  transform_hlds__unused_args__init_global_var_usage_map_5_p_0(&GlobalVarUsageMap0_14, &FixpointPredProcIds_15, &NewProcMap0_16, STATE_VARIABLE_ModuleInfo_0_24, &STATE_VARIABLE_ModuleInfo_1_27);
  transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_113_117_105_114_101_100_95_118_97_114_115_95_97_115_95_117_115_101_100_95_116_111_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_5_p_0((MR_Integer) 0, FixpointPredProcIds_15, GlobalVarUsageMap0_14, &GlobalVarUsageMap_17);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]), &ProcToUnusedArgsMap0_18);
  transform_hlds__unused_args__build_proc_to_unused_args_map_5_p_0(STATE_VARIABLE_ModuleInfo_1_27, GlobalVarUsageMap_17, FixpointPredProcIds_15, ProcToUnusedArgsMap0_18, &ProcToUnusedArgsMap_19);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 195, &DoWarnBool_20);
  switch (DoWarnBool_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      DoWarn_21 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      DoWarn_21 = (MR_Integer) 1;
      break;
  }
  succeeded = (DoWarn_21 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (GatherPragmas_7 == (MR_Integer) 1);
  if (succeeded)
    transform_hlds__unused_args_warn_pragma__gather_warnings_and_pragmas_6_p_0(STATE_VARIABLE_ModuleInfo_1_27, ProcToUnusedArgsMap_19, DoWarn_21, GatherPragmas_7, Specs_9, PragmaUnusedArgInfos_10);
  else
  {
    *Specs_9 = (MR_Word) ((MR_Unsigned) 0U);
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0), PragmaUnusedArgInfos_10);
  }
  switch (RecordAnalysis_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_ModuleInfo_2_30 = STATE_VARIABLE_ModuleInfo_1_27;
      break;
    case (MR_Integer) 1:
      transform_hlds__unused_args_analysis__record_analysis_unused_args_4_p_0(ProcToUnusedArgsMap_19, FixpointPredProcIds_15, STATE_VARIABLE_ModuleInfo_1_27, &STATE_VARIABLE_ModuleInfo_2_30);
      break;
  }
  libs__globals__get_opt_tuple_2_p_0(Globals_12, &OptTuple_22);
  OptUnusedArgs_23 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_22, 0))) >> 6)) & (MR_Integer) 1);
  switch (OptUnusedArgs_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_2_30;
      break;
    case (MR_Integer) 0:
      transform_hlds__unused_args_optimize__optimize_unused_args_7_p_0(VeryVerbose_13, ProcToUnusedArgsMap_19, GlobalVarUsageMap_17, FixpointPredProcIds_15, NewProcMap0_16, STATE_VARIABLE_ModuleInfo_2_30, STATE_VARIABLE_ModuleInfo_25);
      break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_113_117_105_114_101_100_95_118_97_114_115_95_97_115_95_117_115_101_100_95_116_111_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_5_p_0(
  MR_Integer PassNum_6,
  MR_Word LocalPredProcIds_8,
  MR_Word STATE_VARIABLE_GlobalVarUsageMap_0_13,
  MR_Word * STATE_VARIABLE_GlobalVarUsageMap_14)
{
  while (MR_TRUE)
  {
    MR_Word Changed_10;
    MR_Word STATE_VARIABLE_GlobalVarUsageMap_1_16;

    // setup for model_det tailcalls optimized into a loop
    ;
    transform_hlds__unused_args__record_required_vars_as_used_in_procs_5_p_0(LocalPredProcIds_8, (MR_Integer) 0, &Changed_10, STATE_VARIABLE_GlobalVarUsageMap_0_13, &STATE_VARIABLE_GlobalVarUsageMap_1_16);
    switch (Changed_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) PassNum_6 + (MR_Unsigned) 1);
          MR_Integer next_value_of_PassNum_6 = Var_25;
          MR_Word next_value_of_STATE_VARIABLE_GlobalVarUsageMap_0_13 = STATE_VARIABLE_GlobalVarUsageMap_1_16;

          // direct tailcall eliminated
          ;
          PassNum_6 = next_value_of_PassNum_6;
          STATE_VARIABLE_GlobalVarUsageMap_0_13 = next_value_of_STATE_VARIABLE_GlobalVarUsageMap_0_13;
          continue;
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_GlobalVarUsageMap_14 = STATE_VARIABLE_GlobalVarUsageMap_1_16;
        break;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__record_required_vars_as_used_in_procs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Changed_0_2,
  MR_Word * STATE_VARIABLE_Changed_3,
  MR_Word STATE_VARIABLE_GlobalVarUsageMap_0_4,
  MR_Word * STATE_VARIABLE_GlobalVarUsageMap_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_GlobalVarUsageMap_5 = STATE_VARIABLE_GlobalVarUsageMap_0_4;
      *STATE_VARIABLE_Changed_3 = STATE_VARIABLE_Changed_0_2;
    }
    else
    {
      MR_Word PredProcId_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word PredProcIds_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_Changed_1_20;
      MR_Word STATE_VARIABLE_GlobalVarUsageMap_1_21;
      MR_Word LocalVarUsageMap0_22;
      MR_Word Vars_23;
      MR_Word LocalChanged_24;
      MR_Word LocalVarUsageMap_25;
      MR_Box conv0_LocalVarUsageMap0_22;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Changed_0_2;
      MR_Word next_value_of_STATE_VARIABLE_GlobalVarUsageMap_0_4;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[0]), STATE_VARIABLE_GlobalVarUsageMap_0_4, ((MR_Box) (PredProcId_12)), &conv0_LocalVarUsageMap0_22);
      LocalVarUsageMap0_22 = ((MR_Word) (conv0_LocalVarUsageMap0_22));
      mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0), LocalVarUsageMap0_22, &Vars_23);
      transform_hlds__unused_args__record_required_vars_as_used_6_p_0(STATE_VARIABLE_GlobalVarUsageMap_0_4, Vars_23, (MR_Integer) 0, &LocalChanged_24, LocalVarUsageMap0_22, &LocalVarUsageMap_25);
      switch (LocalChanged_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[0]), ((MR_Box) (PredProcId_12)), ((MR_Box) (LocalVarUsageMap_25)), STATE_VARIABLE_GlobalVarUsageMap_0_4, &STATE_VARIABLE_GlobalVarUsageMap_1_21);
            STATE_VARIABLE_Changed_1_20 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_Changed_1_20 = STATE_VARIABLE_Changed_0_2;
            STATE_VARIABLE_GlobalVarUsageMap_1_21 = STATE_VARIABLE_GlobalVarUsageMap_0_4;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredProcIds_13;
      next_value_of_STATE_VARIABLE_Changed_0_2 = STATE_VARIABLE_Changed_1_20;
      next_value_of_STATE_VARIABLE_GlobalVarUsageMap_0_4 = STATE_VARIABLE_GlobalVarUsageMap_1_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Changed_0_2 = next_value_of_STATE_VARIABLE_Changed_0_2;
      STATE_VARIABLE_GlobalVarUsageMap_0_4 = next_value_of_STATE_VARIABLE_GlobalVarUsageMap_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__record_required_vars_as_used_6_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0_s * env_ptr = (struct transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__unused_args__record_required_vars_as_used_6_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0_s * env_ptr = (struct transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__Argument_34 = ((MR_Word) ((env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__conv1_Argument_34));
  transform_hlds__unused_args__record_required_vars_as_used_6_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__unused_args__record_required_vars_as_used_6_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0_s * env_ptr = (struct transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__PredProcId_23 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__Argument_34, 0))));
  (env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__ArgVar_24 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__Argument_34, 1))));
  (env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__succeeded = transform_hlds__unused_args_base_ops__proc_arg_var_is_used_3_p_0((env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__GlobalVarUsageMap_1, (env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__PredProcId_23, (env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__ArgVar_24);
  if ((env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__succeeded)
    transform_hlds__unused_args__record_required_vars_as_used_6_p_0_1(env_ptr);
}

static void MR_CALL 
transform_hlds__unused_args__record_required_vars_as_used_6_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0_s * env_ptr = (struct transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__commit_0) == 0)
    {
      mercury__set__member_2_p_1((MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_arg_var_in_proc_0), &(env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__conv1_Argument_34, (env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__RequiringProcArgs0_21, transform_hlds__unused_args__record_required_vars_as_used_6_p_0_3, env_ptr);
      (env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__unused_args__record_required_vars_as_used_6_p_0_5(
  void * env_ptr_arg)
{
  struct transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0_s * env_ptr = (struct transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__commit_1, 1);
}

static void MR_CALL 
transform_hlds__unused_args__record_required_vars_as_used_6_p_0_7(
  void * env_ptr_arg)
{
  struct transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0_s * env_ptr = (struct transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__X_35 = ((MR_Word) ((env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__conv2_X_35));
  transform_hlds__unused_args__record_required_vars_as_used_6_p_0_6(env_ptr);
}

static void MR_CALL 
transform_hlds__unused_args__record_required_vars_as_used_6_p_0_6(
  void * env_ptr_arg)
{
  struct transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0_s * env_ptr = (struct transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__succeeded = transform_hlds__unused_args_base_ops__local_var_is_used_2_p_0((env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__STATE_VARIABLE_LocalVarUsageMap_0_5, (env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__X_35);
  if ((env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__succeeded)
    transform_hlds__unused_args__record_required_vars_as_used_6_p_0_5(env_ptr);
}

static void MR_CALL 
transform_hlds__unused_args__record_required_vars_as_used_6_p_0_8(
  void * env_ptr_arg)
{
  struct transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0_s * env_ptr = (struct transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__commit_1) == 0)
    {
      mercury__set__member_2_p_1((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), &(env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__conv2_X_35, (env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__RequiringLocalVars0_20, transform_hlds__unused_args__record_required_vars_as_used_6_p_0_7, env_ptr);
      (env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__unused_args__record_required_vars_as_used_6_p_0(
  MR_Word GlobalVarUsageMap_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Changed_0_3,
  MR_Word * STATE_VARIABLE_Changed_4,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_5,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_6)
{
  struct transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0_s env;

  (env).transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__GlobalVarUsageMap_1 = GlobalVarUsageMap_1;
  (env).transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__STATE_VARIABLE_LocalVarUsageMap_0_5 = STATE_VARIABLE_LocalVarUsageMap_0_5;
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_LocalVarUsageMap_6 = (env).transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__STATE_VARIABLE_LocalVarUsageMap_0_5;
      *STATE_VARIABLE_Changed_4 = STATE_VARIABLE_Changed_0_3;
    }
    else
    {
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Vars_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word RequiredBy_19;
      MR_Word STATE_VARIABLE_LocalVarUsageMap_1_30;
      MR_Word STATE_VARIABLE_Changed_1_31;
      MR_Box conv0_RequiredBy_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Changed_0_3;
      MR_Word next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_5;

      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0), (env).transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__STATE_VARIABLE_LocalVarUsageMap_0_5, ((MR_Box) (Var_15)), &conv0_RequiredBy_19);
      RequiredBy_19 = ((MR_Word) (conv0_RequiredBy_19));
      (env).transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__RequiringLocalVars0_20 = ((MR_Word) ((MR_hl_field(0, RequiredBy_19, 0))));
      (env).transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__RequiringProcArgs0_21 = ((MR_Word) ((MR_hl_field(0, RequiredBy_19, 1))));
      transform_hlds__unused_args__record_required_vars_as_used_6_p_0_4(&env);
      if (!((env).transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__succeeded))
        transform_hlds__unused_args__record_required_vars_as_used_6_p_0_8(&env);
      if ((env).transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__succeeded)
      {
        transform_hlds__unused_args_base_ops__record_var_as_used_3_p_0(Var_15, (env).transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__STATE_VARIABLE_LocalVarUsageMap_0_5, &STATE_VARIABLE_LocalVarUsageMap_1_30);
        STATE_VARIABLE_Changed_1_31 = (MR_Integer) 1;
      }
      else
      {
        STATE_VARIABLE_LocalVarUsageMap_1_30 = (env).transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__STATE_VARIABLE_LocalVarUsageMap_0_5;
        STATE_VARIABLE_Changed_1_31 = STATE_VARIABLE_Changed_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vars_16;
      next_value_of_STATE_VARIABLE_Changed_0_3 = STATE_VARIABLE_Changed_1_31;
      next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_5 = STATE_VARIABLE_LocalVarUsageMap_1_30;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Changed_0_3 = next_value_of_STATE_VARIABLE_Changed_0_3;
      (env).transform_hlds__unused_args__record_required_vars_as_used_6_p_0_env_0__STATE_VARIABLE_LocalVarUsageMap_0_5 = next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__build_proc_to_unused_args_map_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word GlobalVarUsageMap_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ProcToUnusedArgsMap_0_4,
  MR_Word * STATE_VARIABLE_ProcToUnusedArgsMap_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProcToUnusedArgsMap_5 = STATE_VARIABLE_ProcToUnusedArgsMap_0_4;
    else
    {
      MR_Word PredProcId_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word PredProcIds_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word PredId_16 = ((MR_Word) ((MR_hl_field(0, PredProcId_13, 0))));
      MR_Integer ProcId_17 = ((MR_Integer) ((MR_hl_field(0, PredProcId_13, 1))));
      MR_Word LocalVarUsageMap_18;
      MR_Word ProcInfo_20;
      MR_Word HeadVars_21;
      MR_Word UnusedArgs_22;
      MR_Word STATE_VARIABLE_ProcToUnusedArgsMap_1_26;
      MR_Box conv0_LocalVarUsageMap_18;
      MR_Word Var_19;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ProcToUnusedArgsMap_0_4;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[0]), GlobalVarUsageMap_2, ((MR_Box) (PredProcId_13)), &conv0_LocalVarUsageMap_18);
      LocalVarUsageMap_18 = ((MR_Word) (conv0_LocalVarUsageMap_18));
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_1, PredId_16, ProcId_17, &Var_19, &ProcInfo_20);
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_20, &HeadVars_21);
      transform_hlds__unused_args__get_unused_arg_nums_4_p_0(LocalVarUsageMap_18, HeadVars_21, (MR_Integer) 1, &UnusedArgs_22);
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]), ((MR_Box) (PredProcId_13)), ((MR_Box) (UnusedArgs_22)), STATE_VARIABLE_ProcToUnusedArgsMap_0_4, &STATE_VARIABLE_ProcToUnusedArgsMap_1_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = PredProcIds_14;
      next_value_of_STATE_VARIABLE_ProcToUnusedArgsMap_0_4 = STATE_VARIABLE_ProcToUnusedArgsMap_1_26;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_ProcToUnusedArgsMap_0_4 = next_value_of_STATE_VARIABLE_ProcToUnusedArgsMap_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_nums_4_p_0(
  MR_Word LocalVarUsageMap_1,
  MR_Word HeadVar__2_2,
  MR_Integer ArgNum_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadVar_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word HeadVars_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word UnusedArgsTail_12;
    MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) 1);

    transform_hlds__unused_args__get_unused_arg_nums_4_p_0(LocalVarUsageMap_1, HeadVars_9, Var_13, &UnusedArgsTail_12);
    succeeded = mercury__map__contains_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0), LocalVarUsageMap_1, ((MR_Box) (HeadVar_8)));
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ArgNum_3));
        MR_hl_field(1, base, 1) = ((MR_Box) (UnusedArgsTail_12));
      }
    else
      *HeadVar__4_4 = UnusedArgsTail_12;
  }
}

static void MR_CALL 
transform_hlds__unused_args__init_global_var_usage_map_5_p_0(
  MR_Word * GlobalVarUsageMap_6,
  MR_Word * FixpointPredProcIds_7,
  MR_Word * NewProcMap_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  MR_Word PredIds_10;
  MR_Word Var_13;
  MR_Word Var_15;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &PredIds_10);
  Var_13 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[0]));
  Var_15 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0));
  transform_hlds__unused_args__init_global_var_usage_map_for_preds_9_p_0(PredIds_10, Var_13, GlobalVarUsageMap_6, (MR_Word) ((MR_Unsigned) 0U), FixpointPredProcIds_7, Var_15, NewProcMap_8, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
}

static void MR_CALL 
transform_hlds__unused_args__init_global_var_usage_map_for_preds_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_GlobalVarUsageMap_33;
  MR_Word conv2_STATE_VARIABLE_FixpointPredProcIds_35;
  MR_Word conv1_STATE_VARIABLE_OptProcs_37;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_39;

  transform_hlds__unused_args__init_global_var_usage_map_entry_for_proc_12_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_GlobalVarUsageMap_33, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_FixpointPredProcIds_35, ((MR_Word) (wrapper_arg_7)), &conv1_STATE_VARIABLE_OptProcs_37, ((MR_Word) (wrapper_arg_9)), &conv0_STATE_VARIABLE_ModuleInfo_39);
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_GlobalVarUsageMap_33));
  *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_FixpointPredProcIds_35));
  *wrapper_arg_8 = ((MR_Box) (conv1_STATE_VARIABLE_OptProcs_37));
  *wrapper_arg_10 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_39));
}

static void MR_CALL 
transform_hlds__unused_args__init_global_var_usage_map_for_preds_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GlobalVarUsageMap_0_2,
  MR_Word * STATE_VARIABLE_GlobalVarUsageMap_3,
  MR_Word STATE_VARIABLE_FixpointPredProcIds_0_4,
  MR_Word * STATE_VARIABLE_FixpointPredProcIds_5,
  MR_Word STATE_VARIABLE_OptProcs_0_6,
  MR_Word * STATE_VARIABLE_OptProcs_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
      *STATE_VARIABLE_OptProcs_7 = STATE_VARIABLE_OptProcs_0_6;
      *STATE_VARIABLE_FixpointPredProcIds_5 = STATE_VARIABLE_FixpointPredProcIds_0_4;
      *STATE_VARIABLE_GlobalVarUsageMap_3 = STATE_VARIABLE_GlobalVarUsageMap_0_2;
    }
    else
    {
      MR_Word PredId_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word PredIds_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_GlobalVarUsageMap_1_36;
      MR_Word STATE_VARIABLE_FixpointPredProcIds_1_37;
      MR_Word STATE_VARIABLE_OptProcs_1_38;
      MR_Word STATE_VARIABLE_ModuleInfo_1_39;
      MR_Word PredInfo_40;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_GlobalVarUsageMap_0_2;
      MR_Word next_value_of_STATE_VARIABLE_FixpointPredProcIds_0_4;
      MR_Word next_value_of_STATE_VARIABLE_OptProcs_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_8;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_8, PredId_22, &PredInfo_40);
      succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo_40);
      if (!(succeeded))
      {
        {
          MR_Word Markers_41;

          hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_40, &Markers_41);
          succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_41, (MR_Integer) 0);
        }
        if (!(succeeded))
        {
          MR_Word Origin_42;
          MR_Word OriginUser_43;

          hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_40, &Origin_42);
          succeeded = ((MR_tag((MR_Word) Origin_42)) == (MR_Integer) 0);
          if (succeeded)
          {
            OriginUser_43 = ((MR_Word) ((MR_hl_field(0, Origin_42, 0))));
            if (((MR_tag((MR_Word) OriginUser_43)) == (MR_Integer) 2))
              succeeded = MR_TRUE;
            else
            if (((((MR_tag((MR_Word) OriginUser_43)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, OriginUser_43, 0)))) == (MR_Integer) 0))))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
          }
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_ModuleInfo_1_39 = STATE_VARIABLE_ModuleInfo_0_8;
        STATE_VARIABLE_OptProcs_1_38 = STATE_VARIABLE_OptProcs_0_6;
        STATE_VARIABLE_FixpointPredProcIds_1_37 = STATE_VARIABLE_FixpointPredProcIds_0_4;
        STATE_VARIABLE_GlobalVarUsageMap_1_36 = STATE_VARIABLE_GlobalVarUsageMap_0_2;
      }
      else
      {
        MR_Word ProcMap_44;
        MR_Word Var_46;
        MR_Box conv7_STATE_VARIABLE_GlobalVarUsageMap_1_36;
        MR_Box conv6_STATE_VARIABLE_FixpointPredProcIds_1_37;
        MR_Box conv5_STATE_VARIABLE_OptProcs_1_38;
        MR_Box conv4_STATE_VARIABLE_ModuleInfo_1_39;

        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_40, &ProcMap_44);
        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_46, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_5[0]));
          MR_hl_field(0, Var_46, 1) = ((MR_Box) (transform_hlds__unused_args__init_global_var_usage_map_for_preds_9_p_0_1));
          MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_46, 3) = ((MR_Box) (PredId_22));
          MR_hl_field(0, Var_46, 4) = ((MR_Box) (PredInfo_40));
        }
        mercury__map__foldl4_10_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[1]), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[2]), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[2]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_46, ProcMap_44, ((MR_Box) (STATE_VARIABLE_GlobalVarUsageMap_0_2)), &conv7_STATE_VARIABLE_GlobalVarUsageMap_1_36, ((MR_Box) (STATE_VARIABLE_FixpointPredProcIds_0_4)), &conv6_STATE_VARIABLE_FixpointPredProcIds_1_37, ((MR_Box) (STATE_VARIABLE_OptProcs_0_6)), &conv5_STATE_VARIABLE_OptProcs_1_38, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8)), &conv4_STATE_VARIABLE_ModuleInfo_1_39);
        STATE_VARIABLE_GlobalVarUsageMap_1_36 = ((MR_Word) (conv7_STATE_VARIABLE_GlobalVarUsageMap_1_36));
        STATE_VARIABLE_FixpointPredProcIds_1_37 = ((MR_Word) (conv6_STATE_VARIABLE_FixpointPredProcIds_1_37));
        STATE_VARIABLE_OptProcs_1_38 = ((MR_Word) (conv5_STATE_VARIABLE_OptProcs_1_38));
        STATE_VARIABLE_ModuleInfo_1_39 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_1_39));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredIds_23;
      next_value_of_STATE_VARIABLE_GlobalVarUsageMap_0_2 = STATE_VARIABLE_GlobalVarUsageMap_1_36;
      next_value_of_STATE_VARIABLE_FixpointPredProcIds_0_4 = STATE_VARIABLE_FixpointPredProcIds_1_37;
      next_value_of_STATE_VARIABLE_OptProcs_0_6 = STATE_VARIABLE_OptProcs_1_38;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_8 = STATE_VARIABLE_ModuleInfo_1_39;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_GlobalVarUsageMap_0_2 = next_value_of_STATE_VARIABLE_GlobalVarUsageMap_0_2;
      STATE_VARIABLE_FixpointPredProcIds_0_4 = next_value_of_STATE_VARIABLE_FixpointPredProcIds_0_4;
      STATE_VARIABLE_OptProcs_0_6 = next_value_of_STATE_VARIABLE_OptProcs_0_6;
      STATE_VARIABLE_ModuleInfo_0_8 = next_value_of_STATE_VARIABLE_ModuleInfo_0_8;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args____Unify____unused_args_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args____Compare____unused_args_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__unused_args__init(void)
{
}

void mercury__transform_hlds__unused_args__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_info_0);
}

void mercury__transform_hlds__unused_args__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__unused_args__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.unused_args.
