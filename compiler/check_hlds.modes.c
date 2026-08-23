/*
** Automatically generated from `modes.m'
** by the Mercury compiler,
** version rotd-2026-08-23
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


// :- module check_hlds.modes.
// :- implementation.

/*
INIT mercury__check_hlds__modes__init
ENDINIT
*/

#include "check_hlds.modes.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.cse_detection.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.delay_partial_inst.mih"
#include "check_hlds.det_analysis.mih"
#include "check_hlds.introduce_exists_casts.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_debug.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modecheck_goal.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.switch_detection.mih"
#include "check_hlds.unique_modes.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_path.mih"
#include "hlds.goal_transform.mih"
#include "hlds.hlds_args.mih"
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
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_pred_tests.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.inst_lookup.mih"
#include "hlds.inst_match.mih"
#include "hlds.inst_test.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.mode_util.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_info_types.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.compiler_util.mih"
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
#include "libs.rat.mih"
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
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_mode.mih"
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
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0_s {
  MR_bool check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__succeeded;
  MR_Word check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__ProcTable_54;
  jmp_buf check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__commit_0;
  MR_Word check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__ProcInfo_62;
  MR_Word check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__Var_65;
  MR_Integer check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0___ProcId_55;
  MR_Box check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__conv1__ProcId_55;
  MR_Box check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__conv0_ProcInfo_62;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__modes__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_hlds__pred_proc_id__type_ctor_info_pred_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_hlds__pred_proc_id__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_proc__type_ctor_info_proc_info_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_0[1];

static const MR_DuFunctorDesc check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0;

static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_1[3];

static const MR_DuArgLocn check_hlds__modes__check_hlds__modes__field_locns_clause_form_0_1[3];

static const MR_DuFunctorDesc check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1;

static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_1[1];

static const MR_DuPtagLayout check_hlds__modes__check_hlds__modes__du_ptag_ordered_clause_form_0[2];

static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_name_ordered_clause_form_0[2];

static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_clause_form_0[2];

static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_include_detism_on_modes_0_0;

static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_include_detism_on_modes_0_1;

static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_ordinal_ordered_include_detism_on_modes_0[2];

static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_name_ordered_include_detism_on_modes_0[2];

static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_include_detism_on_modes_0[2];

static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_is_proc_valid_0_0;

static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_is_proc_valid_0_1;

static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_ordinal_ordered_is_proc_valid_0[2];

static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_name_ordered_is_proc_valid_0[2];

static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_is_proc_valid_0[2];

static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_maybe_infer_modes_0_0;

static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_maybe_infer_modes_0_1;

static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_ordinal_ordered_maybe_infer_modes_0[2];

static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_name_ordered_maybe_infer_modes_0[2];

static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_maybe_infer_modes_0[2];

static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_maybe_unify_pred_0_0;

static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_maybe_unify_pred_0_1;

static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_ordinal_ordered_maybe_unify_pred_0[2];

static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_name_ordered_maybe_unify_pred_0[2];

static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_maybe_unify_pred_0[2];

static MR_Word MR_CALL 
check_hlds__modes__IntroducedFrom__func__report_mode_inference_message__2000__1_1_f_0(
  MR_Word LambdaHeadVar__1_50);

static MR_bool MR_CALL 
check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1364__1_2_p_0(
  MR_Word DetismSpecs_34,
  MR_Word HeadVar__2_59);

static void MR_CALL 
check_hlds__modes____Compare____maybe_unify_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modes____Unify____maybe_unify_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__modes____Compare____maybe_infer_modes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modes____Unify____maybe_infer_modes_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__modes____Compare____is_proc_valid_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modes____Unify____is_proc_valid_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__modes____Compare____include_detism_on_modes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modes____Unify____include_detism_on_modes_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_switch_9_p_0(
  MR_String CheckpointMsg_10,
  MR_Word HeadVars_11,
  MR_Word InstMap0_12,
  MR_Word ArgFinalInsts0_13,
  MR_Word Var_14,
  MR_Word Case0_15,
  MR_Word * Case_16,
  MR_Word STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * STATE_VARIABLE_ModeInfo_31);

static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_disj_11_p_0(
  MR_String CheckpointMsg_12,
  MR_Word HeadVars_13,
  MR_Word InstMap0_14,
  MR_Word ArgFinalInsts0_15,
  MR_Word DisjDetism_16,
  MR_Word DisjNonLocals_17,
  MR_Word NondetLiveVars0_18,
  MR_Word Disjunct0_19,
  MR_Word * Disjunct_20,
  MR_Word STATE_VARIABLE_ModeInfo_0_25,
  MR_Word * STATE_VARIABLE_ModeInfo_26);

static void MR_CALL 
check_hlds__modes__modecheck_clause_switch_9_p_0(
  MR_String CheckpointMsg_10,
  MR_Word HeadVars_11,
  MR_Word InstMap0_12,
  MR_Word ArgFinalInsts0_13,
  MR_Word Var_14,
  MR_Word Case0_15,
  MR_Word * Case_16,
  MR_Word STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * STATE_VARIABLE_ModeInfo_31);

static void MR_CALL 
check_hlds__modes__modecheck_clause_disj_8_p_0(
  MR_String CheckpointMsg_9,
  MR_Word HeadVars_10,
  MR_Word InstMap0_11,
  MR_Word ArgFinalInsts0_12,
  MR_Word Disjunct0_13,
  MR_Word * Disjunct_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * STATE_VARIABLE_ModeInfo_20);

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_12_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_12_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_12_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_12_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word WhatToCheck_14,
  MR_Word MayChangeCalledProc_15,
  MR_Word PredId_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_ProcModeErrorMap_0_31,
  MR_Word * STATE_VARIABLE_ProcModeErrorMap_32,
  MR_Word STATE_VARIABLE_Changed_0_33,
  MR_Word * STATE_VARIABLE_Changed_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36);

static void MR_CALL 
check_hlds__modes__maybe_modecheck_procs_13_p_0(
  MR_Word WhatToCheck_1,
  MR_Word MayChangeCalledProc_2,
  MR_Word PredId_3,
  MR_Word ProcTable0_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7,
  MR_Word STATE_VARIABLE_ProcModeErrorMap_0_8,
  MR_Word * STATE_VARIABLE_ProcModeErrorMap_9,
  MR_Word STATE_VARIABLE_Changed_0_10,
  MR_Word * STATE_VARIABLE_Changed_11,
  MR_Word STATE_VARIABLE_SpecsAcc_0_12,
  MR_Word * STATE_VARIABLE_SpecsAcc_13);

static void MR_CALL 
check_hlds__modes__copy_proc_body_4_p_0(
  MR_Word OldProcTable_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ProcTable_0_12,
  MR_Word * STATE_VARIABLE_ProcTable_13);

static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0(
  MR_Word OldPredIdTable_5,
  MR_Word PredId_6,
  MR_Word PredIdTable0_7,
  MR_Word * PredIdTable_8);

static void MR_CALL 
check_hlds__modes__delete_invalid_procs_from_pred_4_p_0(
  MR_Word PredId_5,
  MR_Word ProcMap_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14);

static void MR_CALL 
check_hlds__modes__modecheck_final_insts_6_p_0(
  MR_Word InferModes_7,
  MR_Word HeadVars_8,
  MR_Word STATE_VARIABLE_FinalInsts_0_11,
  MR_Word * STATE_VARIABLE_FinalInsts_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_13,
  MR_Word * STATE_VARIABLE_ModeInfo_14);

static void MR_CALL 
check_hlds__modes__modecheck_all_preds_in_module_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__modes__pred_check_eval_methods_and_main_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ProcModeErrorMap_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static void MR_CALL 
check_hlds__modes__proc_check_eval_methods_and_main_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ProcModeErrorMap_2,
  MR_Word PredId_3,
  MR_Word PredInfo_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static MR_bool MR_CALL 
check_hlds__modes__only_nonunique_modes_2_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__modes__only_fully_in_out_modes_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word WhatToCheck_13,
  MR_Word MayChangeCalledProc_14,
  MR_Integer NumIterationsLeft_15,
  MR_Word PredIds_16,
  MR_Word * SafeToContinue_17,
  MR_Word * STATE_VARIABLE_Specs_33,
  MR_Word STATE_VARIABLE_ProcModeErrorMap_0_34,
  MR_Word * STATE_VARIABLE_ProcModeErrorMap_35,
  MR_Word STATE_VARIABLE_ModuleInfo_0_36,
  MR_Word * STATE_VARIABLE_ModuleInfo_37);

static void MR_CALL 
check_hlds__modes__report_mode_inference_messages_for_preds_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ProcModeErrorMap_2,
  MR_Word OutputDetism_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6);

static MR_Box MR_CALL 
check_hlds__modes__report_mode_inference_messages_for_procs_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__modes__report_mode_inference_messages_for_procs_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ProcModeErrorMap_2,
  MR_Word OutputDetism_3,
  MR_Word PredId_4,
  MR_Word PredInfo_5,
  MR_Word Procs_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9);

static MR_bool MR_CALL 
check_hlds__modes__modecheck_queued_procs_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__modes__modecheck_queued_procs_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word HowToCheckGoal_14,
  MR_Word STATE_VARIABLE_Changed_0_31,
  MR_Word * STATE_VARIABLE_Changed_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34,
  MR_Word STATE_VARIABLE_OldPredIdTable_0_35,
  MR_Word * STATE_VARIABLE_OldPredIdTable_36,
  MR_Word STATE_VARIABLE_ProcModeErrorMap_0_37,
  MR_Word * STATE_VARIABLE_ProcModeErrorMap_38,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40);

static MR_Box MR_CALL 
check_hlds__modes__definitely_modecheck_proc_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__modes__definitely_modecheck_proc_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__modes__definitely_modecheck_proc_12_p_0(
  MR_Word WhatToCheck_13,
  MR_Word MayChangeCalledProc_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word ProcInfo0_17,
  MR_Word STATE_VARIABLE_ModuleInfo_0_30,
  MR_Word * STATE_VARIABLE_ModuleInfo_31,
  MR_Word STATE_VARIABLE_ProcModeErrorMap_0_32,
  MR_Word * STATE_VARIABLE_ProcModeErrorMap_33,
  MR_Word STATE_VARIABLE_Changed_0_34,
  MR_Word * STATE_VARIABLE_Changed_35,
  MR_Word * Specs_21);

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word WhatToCheck_17,
  MR_Word InferModes_18,
  MR_Word IsUnifyPred_19,
  MR_Word Markers_20,
  MR_Word PredId_21,
  MR_Integer ProcId_22,
  MR_Word Body0_23,
  MR_Word * Body_24,
  MR_Word HeadVars_25,
  MR_Word InstMap0_26,
  MR_Word ArgFinalInsts0_27,
  MR_Word * ArgFinalInsts_28,
  MR_Word STATE_VARIABLE_ModeInfo_0_64,
  MR_Word * STATE_VARIABLE_ModeInfo_65);

static void MR_CALL 
check_hlds__modes__check_final_insts_10_p_0(
  MR_Word InferModes_11,
  MR_Word GroundMatchesBound_12,
  MR_Word Vars_13,
  MR_Word VarInsts_14,
  MR_Word ExpectedInsts_15,
  MR_Integer ArgNum_16,
  MR_Word STATE_VARIABLE_Changed_0_25,
  MR_Word * STATE_VARIABLE_Changed_26,
  MR_Word STATE_VARIABLE_ModeInfo_0_27,
  MR_Word * STATE_VARIABLE_ModeInfo_28);

static void MR_CALL 
check_hlds__modes__maybe_clobber_insts_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__modes____Unify____include_detism_on_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modes____Compare____include_detism_on_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__modes____Unify____is_proc_valid_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modes____Compare____is_proc_valid_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__modes____Unify____maybe_infer_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modes____Compare____maybe_infer_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__modes____Unify____maybe_unify_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modes____Compare____maybe_unify_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__modes_scalar_common_1[68][2];

static /* final */ const MR_Box check_hlds__modes_scalar_common_2[7][3];

static /* final */ const MR_Box check_hlds__modes_scalar_common_3[6][1];

static /* final */ const MR_Box check_hlds__modes_scalar_common_4[3][6];

static /* final */ const MR_Box check_hlds__modes_scalar_common_5[1][11];

static /* final */ const MR_Box check_hlds__modes_scalar_common_6[1][12];

static /* final */ const MR_Box check_hlds__modes_scalar_common_7[1][14];

static /* final */ const MR_Box check_hlds__modes_scalar_common_8[2][5];

static /* final */ const MR_Box check_hlds__modes_scalar_common_9[1][15];

static /* final */ const MR_Box check_hlds__modes_scalar_common_10[3][7];




static /* final */ const MR_Box check_hlds__modes_scalar_common_1[68][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Mode analysis iteration limit exceeded."))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "You may need to declare the modes explicitly"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or use the"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--mode-inference-iteration-limit"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "option to increase the limit."))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(The current limit is"))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "iterations.)"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has no mode declaration."))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to enable mode inference.)"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[11])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--infer-modes"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(Use"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the exported"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    (MR_Box) ((MR_Unsigned) 3U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Sorry, not implemented:"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declarations"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "procedures with partially instantiated modes."))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are not allowed for"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not currently implemented."))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[11])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "with partially instantiated modes"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Tabling of predicates/functions"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[39])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "procedure with unique modes."))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[43])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which would destroy their uniqueness."))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[11])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not allowed, as tabling requires copying arguments,"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[46])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Tabling of predicates/functions with unique modes"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[48])))
  },
  /* row  51 */
  {
    ((MR_Box) (&check_hlds__modes_scalar_common_3[3])),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 15U)),
    ((MR_Box) (&check_hlds__modes_scalar_common_1[51]))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[52]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[54]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "(di, uo)"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[55])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must have mode"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[57])))
  },
  /* row  60 */
  {
    ((MR_Box) (&check_hlds__modes_scalar_common_3[4])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) (&check_hlds__modes_scalar_common_1[60]))
  },
  /* row  62 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[41])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[62]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  64 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[50])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[23])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[66]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__modes_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0)),
    ((MR_Box) (&check_hlds__modes_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__modes_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__modes_scalar_common_8[1])),
    ((MR_Box) (check_hlds__modes__report_mode_inference_messages_for_procs_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__modes_scalar_common_10[1])),
    ((MR_Box) (check_hlds__modes__modecheck_all_preds_in_module_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__modes_scalar_common_3[6][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   2 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "main")) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "...")) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 260U) },
};

static /* final */ const MR_Box check_hlds__modes_scalar_common_4[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&check_hlds__modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__modes_scalar_common_5[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&check_hlds__modes__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__modes__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0))
  },
};

static /* final */ const MR_Box check_hlds__modes_scalar_common_6[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&check_hlds__modes__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__modes__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0))
  },
};

static /* final */ const MR_Box check_hlds__modes_scalar_common_7[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&check_hlds__modes__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__modes__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0)),
    ((MR_Box) (&check_hlds__modes__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__modes__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0))
  },
};

static /* final */ const MR_Box check_hlds__modes_scalar_common_8[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0)),
    ((MR_Box) (&check_hlds__modes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modes__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box check_hlds__modes_scalar_common_9[1][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_how_to_check_goal_0)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_may_change_called_proc_0)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__modes__tree234__pti_tree234_2__plain_hlds__pred_proc_id__type_ctor_info_pred_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0)),
    ((MR_Box) (&check_hlds__modes__tree234__pti_tree234_2__plain_hlds__pred_proc_id__type_ctor_info_pred_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__modes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0)),
    ((MR_Box) (&check_hlds__modes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__modes_scalar_common_10[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__modes__tree234__pti_tree234_2__plain_hlds__pred_proc_id__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__modes__tree234__pti_tree234_2__plain_hlds__pred_proc_id__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&check_hlds__modes__tree234__pti_tree234_2__plain_hlds__pred_proc_id__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_proc__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_proc__type_ctor_info_proc_info_0)),
    ((MR_Box) (&check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_proc__type_ctor_info_proc_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  { (MR_PseudoTypeInfo) (&check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__modes__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&check_hlds__modes__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_hlds__pred_proc_id__type_ctor_info_pred_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&check_hlds__modes__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_hlds__pred_proc_id__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&check_hlds__modes__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_proc__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0) };

static const MR_DuFunctorDesc check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0 = {
  (MR_String) "clause_disj",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__modes__check_hlds__modes__field_types_clause_form_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0) }
};

static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_1[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_can_fail_0),
  (MR_PseudoTypeInfo) (&check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0)
};

static const MR_DuArgLocn check_hlds__modes__check_hlds__modes__field_locns_clause_form_0_1[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
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
  }
};

static const MR_DuFunctorDesc check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1 = {
  (MR_String) "clause_switch",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__modes__check_hlds__modes__field_types_clause_form_0_1,
  NULL,
  check_hlds__modes__check_hlds__modes__field_locns_clause_form_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_0[1] = { &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0 };

static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_1[1] = { &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1 };

static const MR_DuPtagLayout check_hlds__modes__check_hlds__modes__du_ptag_ordered_clause_form_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_name_ordered_clause_form_0[2] = {
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0,
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1
};

static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_clause_form_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__modes__check_hlds__modes__type_ctor_info_clause_form_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modes____Unify____clause_form_0_0_10001)),
  ((MR_Box) (check_hlds__modes____Compare____clause_form_0_0_10001)),
  (MR_String) "check_hlds.modes",
  (MR_String) "clause_form",
  { check_hlds__modes__check_hlds__modes__du_name_ordered_clause_form_0 },
  { check_hlds__modes__check_hlds__modes__du_ptag_ordered_clause_form_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__modes__check_hlds__modes__functor_number_map_clause_form_0,

};

static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_include_detism_on_modes_0_0 = {
  (MR_String) "include_detism_on_modes",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_include_detism_on_modes_0_1 = {
  (MR_String) "do_not_include_detism_on_modes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_ordinal_ordered_include_detism_on_modes_0[2] = {
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_include_detism_on_modes_0_0,
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_include_detism_on_modes_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_name_ordered_include_detism_on_modes_0[2] = {
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_include_detism_on_modes_0_1,
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_include_detism_on_modes_0_0
};

static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_include_detism_on_modes_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__modes__check_hlds__modes__type_ctor_info_include_detism_on_modes_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__modes____Unify____include_detism_on_modes_0_0_10001)),
  ((MR_Box) (check_hlds__modes____Compare____include_detism_on_modes_0_0_10001)),
  (MR_String) "check_hlds.modes",
  (MR_String) "include_detism_on_modes",
  { check_hlds__modes__check_hlds__modes__enum_name_ordered_include_detism_on_modes_0 },
  { check_hlds__modes__check_hlds__modes__enum_ordinal_ordered_include_detism_on_modes_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__modes__check_hlds__modes__functor_number_map_include_detism_on_modes_0,

};

static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_is_proc_valid_0_0 = {
  (MR_String) "is_not_valid",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_is_proc_valid_0_1 = {
  (MR_String) "is_valid",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_ordinal_ordered_is_proc_valid_0[2] = {
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_is_proc_valid_0_0,
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_is_proc_valid_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_name_ordered_is_proc_valid_0[2] = {
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_is_proc_valid_0_0,
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_is_proc_valid_0_1
};

static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_is_proc_valid_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__modes__check_hlds__modes__type_ctor_info_is_proc_valid_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__modes____Unify____is_proc_valid_0_0_10001)),
  ((MR_Box) (check_hlds__modes____Compare____is_proc_valid_0_0_10001)),
  (MR_String) "check_hlds.modes",
  (MR_String) "is_proc_valid",
  { check_hlds__modes__check_hlds__modes__enum_name_ordered_is_proc_valid_0 },
  { check_hlds__modes__check_hlds__modes__enum_ordinal_ordered_is_proc_valid_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__modes__check_hlds__modes__functor_number_map_is_proc_valid_0,

};

static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_maybe_infer_modes_0_0 = {
  (MR_String) "do_not_infer_modes",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_maybe_infer_modes_0_1 = {
  (MR_String) "do_infer_modes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_ordinal_ordered_maybe_infer_modes_0[2] = {
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_maybe_infer_modes_0_0,
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_maybe_infer_modes_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_name_ordered_maybe_infer_modes_0[2] = {
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_maybe_infer_modes_0_1,
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_maybe_infer_modes_0_0
};

static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_maybe_infer_modes_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__modes__check_hlds__modes__type_ctor_info_maybe_infer_modes_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__modes____Unify____maybe_infer_modes_0_0_10001)),
  ((MR_Box) (check_hlds__modes____Compare____maybe_infer_modes_0_0_10001)),
  (MR_String) "check_hlds.modes",
  (MR_String) "maybe_infer_modes",
  { check_hlds__modes__check_hlds__modes__enum_name_ordered_maybe_infer_modes_0 },
  { check_hlds__modes__check_hlds__modes__enum_ordinal_ordered_maybe_infer_modes_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__modes__check_hlds__modes__functor_number_map_maybe_infer_modes_0,

};

static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_maybe_unify_pred_0_0 = {
  (MR_String) "is_not_unify_pred",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_maybe_unify_pred_0_1 = {
  (MR_String) "is_unify_pred",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_ordinal_ordered_maybe_unify_pred_0[2] = {
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_maybe_unify_pred_0_0,
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_maybe_unify_pred_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_name_ordered_maybe_unify_pred_0[2] = {
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_maybe_unify_pred_0_0,
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_maybe_unify_pred_0_1
};

static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_maybe_unify_pred_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__modes__check_hlds__modes__type_ctor_info_maybe_unify_pred_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__modes____Unify____maybe_unify_pred_0_0_10001)),
  ((MR_Box) (check_hlds__modes____Compare____maybe_unify_pred_0_0_10001)),
  (MR_String) "check_hlds.modes",
  (MR_String) "maybe_unify_pred",
  { check_hlds__modes__check_hlds__modes__enum_name_ordered_maybe_unify_pred_0 },
  { check_hlds__modes__check_hlds__modes__enum_ordinal_ordered_maybe_unify_pred_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__modes__check_hlds__modes__functor_number_map_maybe_unify_pred_0,

};

static MR_Word MR_CALL 
check_hlds__modes__IntroducedFrom__func__report_mode_inference_message__2000__1_1_f_0(
  MR_Word LambdaHeadVar__1_50)
{
  MR_Word LambdaHeadVar__2_51;
  MR_Word I_68 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_50, 0))));
  MR_Word F_69 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_50, 1))));

  {
    LambdaHeadVar__2_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_51, 0) = ((MR_Box) (I_68));
    MR_hl_field(0, LambdaHeadVar__2_51, 1) = ((MR_Box) (F_69));
  }
  return LambdaHeadVar__2_51;
}

static MR_bool MR_CALL 
check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1364__1_2_p_0(
  MR_Word DetismSpecs_34,
  MR_Word HeadVar__2_59)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__modes_scalar_common_1[1]), ((MR_Box) (DetismSpecs_34)), ((MR_Box) (HeadVar__2_59)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modes____Compare____maybe_unify_pred_0_0(
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
check_hlds__modes____Unify____maybe_unify_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__modes____Compare____maybe_infer_modes_0_0(
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
check_hlds__modes____Unify____maybe_infer_modes_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__modes____Compare____is_proc_valid_0_0(
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
check_hlds__modes____Unify____is_proc_valid_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__modes____Compare____include_detism_on_modes_0_0(
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
check_hlds__modes____Unify____include_detism_on_modes_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_14 == CastY_15);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modes_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgX2_9 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 1))) & (MR_Integer) 1);
    MR_Word ArgX3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Word ArgY3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
    MR_Word SubResult1_8;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modes_scalar_common_1[2]), &SubResult1_8, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
    succeeded = (SubResult1_8 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_8;
    else
    {
      MR_Word SubResult2_11;
      MR_Integer Var_20 = (MR_Integer) (ArgX2_9);
      MR_Integer Var_21 = (MR_Integer) (ArgY2_10);

      succeeded = (Var_20 < Var_21);
      if (succeeded)
      {
        SubResult2_11 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_20 > Var_21);
        if (succeeded)
        {
          SubResult2_11 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_11;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modes_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX3_12)), ((MR_Box) (ArgY3_13)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      TypeInfo_13_13 = (MR_Word) (&check_hlds__modes_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    MR_Word ArgY3_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 1))) & (MR_Integer) 1);
      ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      TypeInfo_14_14 = (MR_Word) (&check_hlds__modes_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
      {
        succeeded = (ArgX2_7 == ArgY2_8);
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&check_hlds__modes_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_switch_9_p_0(
  MR_String CheckpointMsg_10,
  MR_Word HeadVars_11,
  MR_Word InstMap0_12,
  MR_Word ArgFinalInsts0_13,
  MR_Word Var_14,
  MR_Word Case0_15,
  MR_Word * Case_16,
  MR_Word STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * STATE_VARIABLE_ModeInfo_31)
{
  MR_bool succeeded;
  MR_Word MainConsId_18 = ((MR_Word) ((MR_hl_field(0, Case0_15, 0))));
  MR_Word OtherConsIds_19 = ((MR_Word) ((MR_hl_field(0, Case0_15, 1))));
  MR_Word Goal0_20 = ((MR_Word) ((MR_hl_field(0, Case0_15, 2))));
  MR_Word GoalInfo0_22 = ((MR_Word) ((MR_hl_field(0, Goal0_20, 1))));
  MR_Word InstMap1_23;
  MR_Word Goal1_24;
  MR_Word ExitGoalInfo_25;
  MR_Word InstMap_27;
  MR_Word Goal_28;
  MR_Word STATE_VARIABLE_ModeInfo_1_33;
  MR_Word STATE_VARIABLE_ModeInfo_2_34;
  MR_Word STATE_VARIABLE_ModeInfo_3_35;
  MR_Word STATE_VARIABLE_ModeInfo_4_36;
  MR_Word STATE_VARIABLE_ModeInfo_5_38;
  MR_Word _ArgFinalInsts_29;

  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, CheckpointMsg_10, GoalInfo0_22, STATE_VARIABLE_ModeInfo_0_30, &STATE_VARIABLE_ModeInfo_1_33);
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_12, STATE_VARIABLE_ModeInfo_1_33, &STATE_VARIABLE_ModeInfo_2_34);
  check_hlds__modecheck_util__modecheck_record_functors_test_5_p_0(Var_14, MainConsId_18, OtherConsIds_19, STATE_VARIABLE_ModeInfo_2_34, &STATE_VARIABLE_ModeInfo_3_35);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_3_35, &InstMap1_23);
  succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap1_23);
  if (succeeded)
  {
    check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Goal0_20, &Goal1_24, STATE_VARIABLE_ModeInfo_3_35, &STATE_VARIABLE_ModeInfo_4_36);
    ExitGoalInfo_25 = GoalInfo0_22;
  }
  else
  {
    Goal1_24 = hlds__make_goal__true_goal_0_f_0();
    ExitGoalInfo_25 = ((MR_Word) ((MR_hl_field(0, Goal1_24, 1))));
    STATE_VARIABLE_ModeInfo_4_36 = STATE_VARIABLE_ModeInfo_3_35;
  }
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_4_36, &InstMap_27);
  check_hlds__modecheck_util__fixup_instmap_switch_var_5_p_0(Var_14, InstMap0_12, InstMap_27, Goal1_24, &Goal_28);
  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, CheckpointMsg_10, ExitGoalInfo_25, STATE_VARIABLE_ModeInfo_4_36, &STATE_VARIABLE_ModeInfo_5_38);
  check_hlds__modes__modecheck_final_insts_6_p_0((MR_Integer) 0, HeadVars_11, ArgFinalInsts0_13, &_ArgFinalInsts_29, STATE_VARIABLE_ModeInfo_5_38, STATE_VARIABLE_ModeInfo_31);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Case_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MainConsId_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (OtherConsIds_19));
    MR_hl_field(0, base, 2) = ((MR_Box) (Goal_28));
  }
}

static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_disj_11_p_0(
  MR_String CheckpointMsg_12,
  MR_Word HeadVars_13,
  MR_Word InstMap0_14,
  MR_Word ArgFinalInsts0_15,
  MR_Word DisjDetism_16,
  MR_Word DisjNonLocals_17,
  MR_Word NondetLiveVars0_18,
  MR_Word Disjunct0_19,
  MR_Word * Disjunct_20,
  MR_Word STATE_VARIABLE_ModeInfo_0_25,
  MR_Word * STATE_VARIABLE_ModeInfo_26)
{
  MR_Word DisjunctInfo0_23 = ((MR_Word) ((MR_hl_field(0, Disjunct0_19, 1))));
  MR_Word STATE_VARIABLE_ModeInfo_1_28;
  MR_Word STATE_VARIABLE_ModeInfo_2_29;
  MR_Word STATE_VARIABLE_ModeInfo_3_30;
  MR_Word STATE_VARIABLE_ModeInfo_4_31;
  MR_Word STATE_VARIABLE_ModeInfo_5_32;
  MR_Word STATE_VARIABLE_ModeInfo_6_34;
  MR_Word _ArgFinalInsts_24;

  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, CheckpointMsg_12, DisjunctInfo0_23, STATE_VARIABLE_ModeInfo_0_25, &STATE_VARIABLE_ModeInfo_1_28);
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_14, STATE_VARIABLE_ModeInfo_1_28, &STATE_VARIABLE_ModeInfo_2_29);
  check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(NondetLiveVars0_18, STATE_VARIABLE_ModeInfo_2_29, &STATE_VARIABLE_ModeInfo_3_30);
  check_hlds__unique_modes__unique_modes_prepare_for_disjunct_5_p_0(Disjunct0_19, DisjDetism_16, DisjNonLocals_17, STATE_VARIABLE_ModeInfo_3_30, &STATE_VARIABLE_ModeInfo_4_31);
  check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Disjunct0_19, Disjunct_20, STATE_VARIABLE_ModeInfo_4_31, &STATE_VARIABLE_ModeInfo_5_32);
  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, CheckpointMsg_12, DisjunctInfo0_23, STATE_VARIABLE_ModeInfo_5_32, &STATE_VARIABLE_ModeInfo_6_34);
  check_hlds__modes__modecheck_final_insts_6_p_0((MR_Integer) 0, HeadVars_13, ArgFinalInsts0_15, &_ArgFinalInsts_24, STATE_VARIABLE_ModeInfo_6_34, STATE_VARIABLE_ModeInfo_26);
}

static void MR_CALL 
check_hlds__modes__modecheck_clause_switch_9_p_0(
  MR_String CheckpointMsg_10,
  MR_Word HeadVars_11,
  MR_Word InstMap0_12,
  MR_Word ArgFinalInsts0_13,
  MR_Word Var_14,
  MR_Word Case0_15,
  MR_Word * Case_16,
  MR_Word STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * STATE_VARIABLE_ModeInfo_31)
{
  MR_bool succeeded;
  MR_Word MainConsId_18 = ((MR_Word) ((MR_hl_field(0, Case0_15, 0))));
  MR_Word OtherConsIds_19 = ((MR_Word) ((MR_hl_field(0, Case0_15, 1))));
  MR_Word Goal0_20 = ((MR_Word) ((MR_hl_field(0, Case0_15, 2))));
  MR_Word GoalInfo0_22 = ((MR_Word) ((MR_hl_field(0, Goal0_20, 1))));
  MR_Word InstMap1_23;
  MR_Word Goal1_24;
  MR_Word InstMap_25;
  MR_Word ExitGoalInfo_26;
  MR_Word Goal_28;
  MR_Word STATE_VARIABLE_ModeInfo_1_33;
  MR_Word STATE_VARIABLE_ModeInfo_2_34;
  MR_Word STATE_VARIABLE_ModeInfo_3_35;
  MR_Word STATE_VARIABLE_ModeInfo_4_36;
  MR_Word STATE_VARIABLE_ModeInfo_5_38;
  MR_Word _ArgFinalInsts_29;

  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, CheckpointMsg_10, GoalInfo0_22, STATE_VARIABLE_ModeInfo_0_30, &STATE_VARIABLE_ModeInfo_1_33);
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_12, STATE_VARIABLE_ModeInfo_1_33, &STATE_VARIABLE_ModeInfo_2_34);
  check_hlds__modecheck_util__modecheck_record_functors_test_5_p_0(Var_14, MainConsId_18, OtherConsIds_19, STATE_VARIABLE_ModeInfo_2_34, &STATE_VARIABLE_ModeInfo_3_35);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_3_35, &InstMap1_23);
  succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap1_23);
  if (succeeded)
  {
    check_hlds__modecheck_goal__modecheck_goal_4_p_0(Goal0_20, &Goal1_24, STATE_VARIABLE_ModeInfo_3_35, &STATE_VARIABLE_ModeInfo_4_36);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_4_36, &InstMap_25);
    ExitGoalInfo_26 = GoalInfo0_22;
  }
  else
  {
    Goal1_24 = hlds__make_goal__true_goal_0_f_0();
    InstMap_25 = InstMap1_23;
    ExitGoalInfo_26 = ((MR_Word) ((MR_hl_field(0, Goal1_24, 1))));
    STATE_VARIABLE_ModeInfo_4_36 = STATE_VARIABLE_ModeInfo_3_35;
  }
  check_hlds__modecheck_util__fixup_instmap_switch_var_5_p_0(Var_14, InstMap0_12, InstMap_25, Goal1_24, &Goal_28);
  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, CheckpointMsg_10, ExitGoalInfo_26, STATE_VARIABLE_ModeInfo_4_36, &STATE_VARIABLE_ModeInfo_5_38);
  check_hlds__modes__modecheck_final_insts_6_p_0((MR_Integer) 0, HeadVars_11, ArgFinalInsts0_13, &_ArgFinalInsts_29, STATE_VARIABLE_ModeInfo_5_38, STATE_VARIABLE_ModeInfo_31);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Case_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MainConsId_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (OtherConsIds_19));
    MR_hl_field(0, base, 2) = ((MR_Box) (Goal_28));
  }
}

static void MR_CALL 
check_hlds__modes__modecheck_clause_disj_8_p_0(
  MR_String CheckpointMsg_9,
  MR_Word HeadVars_10,
  MR_Word InstMap0_11,
  MR_Word ArgFinalInsts0_12,
  MR_Word Disjunct0_13,
  MR_Word * Disjunct_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * STATE_VARIABLE_ModeInfo_20)
{
  MR_Word DisjunctInfo0_17 = ((MR_Word) ((MR_hl_field(0, Disjunct0_13, 1))));
  MR_Word STATE_VARIABLE_ModeInfo_1_22;
  MR_Word STATE_VARIABLE_ModeInfo_2_23;
  MR_Word STATE_VARIABLE_ModeInfo_3_24;
  MR_Word STATE_VARIABLE_ModeInfo_4_26;
  MR_Word _ArgFinalInsts_18;

  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, CheckpointMsg_9, DisjunctInfo0_17, STATE_VARIABLE_ModeInfo_0_19, &STATE_VARIABLE_ModeInfo_1_22);
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_11, STATE_VARIABLE_ModeInfo_1_22, &STATE_VARIABLE_ModeInfo_2_23);
  check_hlds__modecheck_goal__modecheck_goal_4_p_0(Disjunct0_13, Disjunct_14, STATE_VARIABLE_ModeInfo_2_23, &STATE_VARIABLE_ModeInfo_3_24);
  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, CheckpointMsg_9, DisjunctInfo0_17, STATE_VARIABLE_ModeInfo_3_24, &STATE_VARIABLE_ModeInfo_4_26);
  check_hlds__modes__modecheck_final_insts_6_p_0((MR_Integer) 0, HeadVars_10, ArgFinalInsts0_12, &_ArgFinalInsts_18, STATE_VARIABLE_ModeInfo_4_26, STATE_VARIABLE_ModeInfo_20);
}

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_12_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0_s * env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_12_p_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0_s * env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0___ProcId_55 = ((MR_Integer) ((env_ptr)->check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__conv1__ProcId_55));
  (env_ptr)->check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__ProcInfo_62 = ((MR_Word) ((env_ptr)->check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__conv0_ProcInfo_62));
  check_hlds__modes__maybe_modecheck_pred_12_p_0_2(env_ptr);
}

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_12_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0_s * env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word ArgX1_67;

    hlds__hlds_proc__proc_info_get_maybe_declared_argmodes_2_p_0((env_ptr)->check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__ProcInfo_62, &(env_ptr)->check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__Var_65);
    (env_ptr)->check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__succeeded = ((env_ptr)->check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__Var_65 != (MR_Word) ((MR_Unsigned) 0U));
    if ((env_ptr)->check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__succeeded)
      check_hlds__modes__maybe_modecheck_pred_12_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_12_p_0_4(
  void * env_ptr_arg)
{
  struct check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0_s * env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__commit_0) == 0)
    {
      mercury__map__member_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), (env_ptr)->check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__ProcTable_54, &(env_ptr)->check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__conv1__ProcId_55, &(env_ptr)->check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__conv0_ProcInfo_62, check_hlds__modes__maybe_modecheck_pred_12_p_0_3, env_ptr);
      (env_ptr)->check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word WhatToCheck_14,
  MR_Word MayChangeCalledProc_15,
  MR_Word PredId_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_ProcModeErrorMap_0_31,
  MR_Word * STATE_VARIABLE_ProcModeErrorMap_32,
  MR_Word STATE_VARIABLE_Changed_0_33,
  MR_Word * STATE_VARIABLE_Changed_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36)
{
  struct check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0_s env;

  {
    MR_Word PredInfo0_21;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredId_16, &PredInfo0_21);
    (env).check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_21);
    if (!((env).check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__succeeded))
    {
      (env).check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(PredInfo0_21);
      if (!((env).check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__succeeded))
      {
        MR_Word PredMarkers_49;

        hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_21, &PredMarkers_49);
        (env).check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__succeeded = hlds__hlds_markers__marker_is_present_2_p_0(PredMarkers_49, (MR_Integer) 12);
      }
    }
    if ((env).check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__succeeded)
    {
      *STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_0_29;
      *STATE_VARIABLE_ProcModeErrorMap_32 = STATE_VARIABLE_ProcModeErrorMap_0_31;
      *STATE_VARIABLE_Changed_34 = STATE_VARIABLE_Changed_0_33;
      *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_0_35;
    }
    else
    {
      MR_Word ThisPredDeclSpecs_24;
      MR_Word ThisPredProcSpecs_25;
      MR_Word Globals_26;
      MR_Word ContainsError_27;
      MR_Word Statistics_28;
      MR_Word STATE_VARIABLE_ModuleInfo_1_39;
      MR_Word Var_43;
      MR_Word ProcTable0_57;
      MR_Word ProcIds_58;
      MR_Word SpecsAcc_59;
      MR_Word Var_61;
      MR_Word Markers_51;
      MR_String Msg_52;

      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_21, &Markers_51);
      (env).check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_51, (MR_Integer) 3);
      if ((env).check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__succeeded)
        switch (WhatToCheck_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Msg_52 = (MR_String) "Mode-analysing";
            break;
          case (MR_Integer) 1:
            Msg_52 = (MR_String) "Unique-mode-analysing";
            break;
        }
      else
        switch (WhatToCheck_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Msg_52 = (MR_String) "Mode-checking";
            break;
          case (MR_Integer) 1:
            Msg_52 = (MR_String) "Unique-mode-checking";
            break;
        }
      hlds__passes_aux__maybe_write_pred_progress_message_6_p_0(ProgressStream_13, STATE_VARIABLE_ModuleInfo_0_29, Msg_52, PredId_16);
      switch (WhatToCheck_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_21, &(env).check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__ProcTable_54);
            check_hlds__modes__maybe_modecheck_pred_12_p_0_4(&env);
            if ((env).check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__succeeded)
              ThisPredDeclSpecs_24 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word PredStatus_73;
              MR_Word Var_84;

              hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_21, &PredStatus_73);
              Var_84 = (MR_Word) (PredStatus_73);
              (env).check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__succeeded = (Var_84 == (MR_Word) ((MR_Unsigned) 32U));
              if ((env).check_hlds__modes__maybe_modecheck_pred_12_p_0_env_0__succeeded)
              {
                MR_Word Globals_74;
                MR_Word InferModesOpt_75;

                hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_29, &Globals_74);
                libs__globals__lookup_bool_option_3_p_0(Globals_74, (MR_Integer) 122, &InferModesOpt_75);
                switch (InferModesOpt_75) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word PredDescPieces_76;
                      MR_Word MainPieces_77;
                      MR_Word Msgs_79;
                      MR_Word Context_80;
                      MR_Word Spec_82;
                      MR_Word Var_94;
                      MR_Word Var_95;
                      MR_Word Var_96;
                      MR_Word Var_104;
                      MR_Word Var_105;
                      MR_Word Var_106;

                      PredDescPieces_76 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(STATE_VARIABLE_ModuleInfo_0_29, (MR_Word) (MR_mkword(1, &check_hlds__modes_scalar_common_3[1])), (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), PredId_16);
                      Var_96 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__modes_scalar_common_1[17])));
                      Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, (MR_Word) (MR_mkword(1, &check_hlds__modes_scalar_common_1[11])));
                      Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredDescPieces_76, Var_95);
                      MainPieces_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__modes_scalar_common_1[15])), Var_94);
                      {
                        Var_106 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_106, 0) = ((MR_Box) (MainPieces_77));
                      }
                      {
                        Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_105, 0) = ((MR_Box) (Var_106));
                        MR_hl_field(1, Var_105, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[67])));
                      }
                      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_21, &Context_80);
                      {
                        Var_104 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_104, 0) = ((MR_Box) (Context_80));
                        MR_hl_field(2, Var_104, 1) = ((MR_Box) (Var_105));
                      }
                      {
                        Msgs_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Msgs_79, 0) = ((MR_Box) (Var_104));
                        MR_hl_field(1, Msgs_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Spec_82 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Spec_82, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.modes.maybe_report_error_no_modes\'/3"));
                        MR_hl_field(2, Spec_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(2, Spec_82, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__modes_scalar_common_3[0])));
                        MR_hl_field(2, Spec_82, 3) = ((MR_Box) (Msgs_79));
                      }
                      {
                        ThisPredDeclSpecs_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, ThisPredDeclSpecs_24, 0) = ((MR_Box) (Spec_82));
                        MR_hl_field(1, ThisPredDeclSpecs_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    ThisPredDeclSpecs_24 = (MR_Word) ((MR_Unsigned) 0U);
                    break;
                }
              }
              else
              {
                MR_Word Pieces_83;
                MR_Word Var_124;
                MR_Word Var_125;
                MR_Word Var_126;
                MR_Word PredDescPieces_138;
                MR_Word Context_139;
                MR_Word Spec_141;

                PredDescPieces_138 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(STATE_VARIABLE_ModuleInfo_0_29, (MR_Word) (MR_mkword(1, &check_hlds__modes_scalar_common_3[1])), (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), PredId_16);
                hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_21, &Context_139);
                Var_126 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__modes_scalar_common_1[17])));
                Var_125 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_126, (MR_Word) (MR_mkword(1, &check_hlds__modes_scalar_common_1[11])));
                Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredDescPieces_138, Var_125);
                Pieces_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__modes_scalar_common_1[25])), Var_124);
                {
                  Spec_141 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Spec_141, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.modes.maybe_report_error_no_modes\'/3"));
                  MR_hl_field(0, Spec_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, Spec_141, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__modes_scalar_common_3[0])));
                  MR_hl_field(0, Spec_141, 3) = ((MR_Box) (Context_139));
                  MR_hl_field(0, Spec_141, 4) = ((MR_Box) (Pieces_83));
                }
                {
                  ThisPredDeclSpecs_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ThisPredDeclSpecs_24, 0) = ((MR_Box) (Spec_141));
                  MR_hl_field(1, ThisPredDeclSpecs_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
          }
          break;
        case (MR_Integer) 1:
          ThisPredDeclSpecs_24 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_21, &ProcTable0_57);
      ProcIds_58 = hlds__hlds_pred__pred_info_all_proc_ids_1_f_0(PredInfo0_21);
      Var_61 = parse_tree__error_util__init_diag_spec_accumulator_0_f_0();
      check_hlds__modes__maybe_modecheck_procs_13_p_0(WhatToCheck_14, MayChangeCalledProc_15, PredId_16, ProcTable0_57, ProcIds_58, STATE_VARIABLE_ModuleInfo_0_29, &STATE_VARIABLE_ModuleInfo_1_39, STATE_VARIABLE_ProcModeErrorMap_0_31, STATE_VARIABLE_ProcModeErrorMap_32, STATE_VARIABLE_Changed_0_33, STATE_VARIABLE_Changed_34, Var_61, &SpecsAcc_59);
      ThisPredProcSpecs_25 = parse_tree__error_util__diag_spec_accumulator_to_list_1_f_0(SpecsAcc_59);
      Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0), ThisPredProcSpecs_25, STATE_VARIABLE_Specs_0_35);
      *STATE_VARIABLE_Specs_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0), ThisPredDeclSpecs_24, Var_43);
      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_1_39, &Globals_26);
      ContainsError_27 = parse_tree__error_util__contains_errors_2_f_0(Globals_26, ThisPredProcSpecs_25);
      switch (ContainsError_27) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_1_39;
          break;
        case (MR_Integer) 1:
          hlds__hlds_module__module_info_make_pred_id_invalid_3_p_0(PredId_16, STATE_VARIABLE_ModuleInfo_1_39, STATE_VARIABLE_ModuleInfo_30);
          break;
      }
      libs__globals__lookup_bool_option_3_p_0(Globals_26, (MR_Integer) 689, &Statistics_28);
      libs__file_util__maybe_report_stats_4_p_0(ProgressStream_13, Statistics_28);
    }
  }
}

static void MR_CALL 
check_hlds__modes__maybe_modecheck_procs_13_p_0(
  MR_Word WhatToCheck_1,
  MR_Word MayChangeCalledProc_2,
  MR_Word PredId_3,
  MR_Word ProcTable0_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7,
  MR_Word STATE_VARIABLE_ProcModeErrorMap_0_8,
  MR_Word * STATE_VARIABLE_ProcModeErrorMap_9,
  MR_Word STATE_VARIABLE_Changed_0_10,
  MR_Word * STATE_VARIABLE_Changed_11,
  MR_Word STATE_VARIABLE_SpecsAcc_0_12,
  MR_Word * STATE_VARIABLE_SpecsAcc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_SpecsAcc_13 = STATE_VARIABLE_SpecsAcc_0_12;
      *STATE_VARIABLE_Changed_11 = STATE_VARIABLE_Changed_0_10;
      *STATE_VARIABLE_ProcModeErrorMap_9 = STATE_VARIABLE_ProcModeErrorMap_0_8;
      *STATE_VARIABLE_ModuleInfo_7 = STATE_VARIABLE_ModuleInfo_0_6;
    }
    else
    {
      MR_Integer ProcId_34 = ((MR_Integer) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word ProcIds_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word ProcInfo0_40;
      MR_Word ProcSpecs_41;
      MR_Word STATE_VARIABLE_ModuleInfo_1_50;
      MR_Word STATE_VARIABLE_ProcModeErrorMap_1_51;
      MR_Word STATE_VARIABLE_Changed_1_52;
      MR_Word STATE_VARIABLE_SpecsAcc_1_53;
      MR_Word ProcModeErrors_56;
      MR_Word CanProcess_57;
      MR_Box conv0_ProcInfo0_40;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ProcModeErrorMap_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Changed_0_10;
      MR_Word next_value_of_STATE_VARIABLE_SpecsAcc_0_12;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ProcTable0_4, ((MR_Box) (ProcId_34)), &conv0_ProcInfo0_40);
      ProcInfo0_40 = ((MR_Word) (conv0_ProcInfo0_40));
      check_hlds__mode_info__look_up_proc_mode_errors_raw_4_p_0(STATE_VARIABLE_ProcModeErrorMap_0_8, PredId_3, ProcId_34, &ProcModeErrors_56);
      hlds__hlds_proc__proc_info_get_can_process_2_p_0(ProcInfo0_40, &CanProcess_57);
      succeeded = (ProcModeErrors_56 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (CanProcess_57 == (MR_Integer) 1);
      if (succeeded)
        check_hlds__modes__definitely_modecheck_proc_12_p_0(WhatToCheck_1, MayChangeCalledProc_2, PredId_3, ProcId_34, ProcInfo0_40, STATE_VARIABLE_ModuleInfo_0_6, &STATE_VARIABLE_ModuleInfo_1_50, STATE_VARIABLE_ProcModeErrorMap_0_8, &STATE_VARIABLE_ProcModeErrorMap_1_51, STATE_VARIABLE_Changed_0_10, &STATE_VARIABLE_Changed_1_52, &ProcSpecs_41);
      else
      {
        ProcSpecs_41 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Changed_1_52 = STATE_VARIABLE_Changed_0_10;
        STATE_VARIABLE_ProcModeErrorMap_1_51 = STATE_VARIABLE_ProcModeErrorMap_0_8;
        STATE_VARIABLE_ModuleInfo_1_50 = STATE_VARIABLE_ModuleInfo_0_6;
      }
      parse_tree__error_util__accumulate_diag_specs_for_proc_3_p_0(ProcSpecs_41, STATE_VARIABLE_SpecsAcc_0_12, &STATE_VARIABLE_SpecsAcc_1_53);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ProcIds_35;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_6 = STATE_VARIABLE_ModuleInfo_1_50;
      next_value_of_STATE_VARIABLE_ProcModeErrorMap_0_8 = STATE_VARIABLE_ProcModeErrorMap_1_51;
      next_value_of_STATE_VARIABLE_Changed_0_10 = STATE_VARIABLE_Changed_1_52;
      next_value_of_STATE_VARIABLE_SpecsAcc_0_12 = STATE_VARIABLE_SpecsAcc_1_53;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_ModuleInfo_0_6 = next_value_of_STATE_VARIABLE_ModuleInfo_0_6;
      STATE_VARIABLE_ProcModeErrorMap_0_8 = next_value_of_STATE_VARIABLE_ProcModeErrorMap_0_8;
      STATE_VARIABLE_Changed_0_10 = next_value_of_STATE_VARIABLE_Changed_0_10;
      STATE_VARIABLE_SpecsAcc_0_12 = next_value_of_STATE_VARIABLE_SpecsAcc_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__modes__copy_proc_body_4_p_0(
  MR_Word OldProcTable_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ProcTable_0_12,
  MR_Word * STATE_VARIABLE_ProcTable_13)
{
  MR_Word OldProcInfo_8;
  MR_Word OldProcBody_9;
  MR_Word ProcInfo0_10;
  MR_Word ProcInfo_11;
  MR_Box conv0_OldProcInfo_8;
  MR_Box conv1_ProcInfo0_10;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), OldProcTable_5, ((MR_Box) (ProcId_6)), &conv0_OldProcInfo_8);
  OldProcInfo_8 = ((MR_Word) (conv0_OldProcInfo_8));
  hlds__hlds_proc__proc_info_get_goal_2_p_0(OldProcInfo_8, &OldProcBody_9);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_12, ((MR_Box) (ProcId_6)), &conv1_ProcInfo0_10);
  ProcInfo0_10 = ((MR_Word) (conv1_ProcInfo0_10));
  hlds__hlds_proc__proc_info_set_goal_3_p_0(OldProcBody_9, ProcInfo0_10, &ProcInfo_11);
  mercury__map__det_update_4_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_6)), ((MR_Box) (ProcInfo_11)), STATE_VARIABLE_ProcTable_0_12, STATE_VARIABLE_ProcTable_13);
}

static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ProcTable_13;

  check_hlds__modes__copy_proc_body_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ProcTable_13);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ProcTable_13));
}

static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0(
  MR_Word OldPredIdTable_5,
  MR_Word PredId_6,
  MR_Word PredIdTable0_7,
  MR_Word * PredIdTable_8)
{
  MR_bool succeeded;
  MR_Word PredInfo0_9;
  MR_Box conv0_PredInfo0_9;
  MR_Word Markers_10;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable0_7, ((MR_Box) (PredId_6)), &conv0_PredInfo0_9);
  PredInfo0_9 = ((MR_Word) (conv0_PredInfo0_9));
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_9, &Markers_10);
  succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_10, (MR_Integer) 12);
  if (succeeded)
    *PredIdTable_8 = PredIdTable0_7;
  else
  {
    MR_Word ProcTable0_11;
    MR_Word OldPredInfo_12;
    MR_Word OldProcTable_13;
    MR_Word OldProcIds_14;
    MR_Word ProcTable_15;
    MR_Word PredInfo_16;
    MR_Word Var_18;
    MR_Box conv1_OldPredInfo_12;
    MR_Box conv3_ProcTable_15;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_9, &ProcTable0_11);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), OldPredIdTable_5, ((MR_Box) (PredId_6)), &conv1_OldPredInfo_12);
    OldPredInfo_12 = ((MR_Word) (conv1_OldPredInfo_12));
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(OldPredInfo_12, &OldProcTable_13);
    mercury__map__keys_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), OldProcTable_13, &OldProcIds_14);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_18, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_10[2]));
      MR_hl_field(0, Var_18, 1) = ((MR_Box) (check_hlds__modes__copy_pred_body_4_p_0_1));
      MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_18, 3) = ((MR_Box) (OldProcTable_13));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&check_hlds__modes_scalar_common_2[3]), Var_18, OldProcIds_14, ((MR_Box) (ProcTable0_11)), &conv3_ProcTable_15);
    ProcTable_15 = ((MR_Word) (conv3_ProcTable_15));
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_15, PredInfo0_9, &PredInfo_16);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_6)), ((MR_Box) (PredInfo_16)), PredIdTable0_7, PredIdTable_8);
  }
}

static void MR_CALL 
check_hlds__modes__delete_invalid_procs_from_pred_4_p_0(
  MR_Word PredId_5,
  MR_Word ProcMap_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14)
{
  MR_Word PredInfo0_8;
  MR_Word ProcTable0_9;
  MR_Word ProcIdsToDelete_10;
  MR_Word ProcTable_11;
  MR_Word PredInfo_12;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_13, PredId_5, &PredInfo0_8);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_8, &ProcTable0_9);
  mercury__map__keys_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&check_hlds__modes_scalar_common_1[0]), ProcMap_6, &ProcIdsToDelete_10);
  mercury__map__delete_list_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ProcIdsToDelete_10, ProcTable0_9, &ProcTable_11);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_11, PredInfo0_8, &PredInfo_12);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_5, PredInfo_12, STATE_VARIABLE_ModuleInfo_0_13, STATE_VARIABLE_ModuleInfo_14);
}

void MR_CALL 
check_hlds__modes__modecheck_lambda_final_insts_4_p_0(
  MR_Word HeadVars_5,
  MR_Word ArgFinalInsts_6,
  MR_Word STATE_VARIABLE_ModeInfo_0_9,
  MR_Word * STATE_VARIABLE_ModeInfo_10)
{
  MR_Word _NewFinalInsts_8;

  check_hlds__modes__modecheck_final_insts_6_p_0((MR_Integer) 0, HeadVars_5, ArgFinalInsts_6, &_NewFinalInsts_8, STATE_VARIABLE_ModeInfo_0_9, STATE_VARIABLE_ModeInfo_10);
}

static void MR_CALL 
check_hlds__modes__modecheck_final_insts_6_p_0(
  MR_Word InferModes_7,
  MR_Word HeadVars_8,
  MR_Word STATE_VARIABLE_FinalInsts_0_11,
  MR_Word * STATE_VARIABLE_FinalInsts_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_13,
  MR_Word * STATE_VARIABLE_ModeInfo_14)
{
  MR_Word ModuleInfo_16;
  MR_Word Errors_17;
  MR_Word Changed0_20;
  MR_Word InstMap_21;
  MR_Word VarTable_22;
  MR_Word VarFinalInsts0_23;
  MR_Word ArgTypes_24;

  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_13, &ModuleInfo_16);
  check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_0_13, &Errors_17);
  if ((Errors_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    Changed0_20 = (MR_Integer) 0;
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_13, &InstMap_21);
  }
  else
  {
    Changed0_20 = (MR_Integer) 1;
    hlds__instmap__init_unreachable_1_p_0(&InstMap_21);
  }
  check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_13, &VarTable_22);
  hlds__instmap__instmap_lookup_vars_3_p_0(InstMap_21, HeadVars_8, &VarFinalInsts0_23);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_22, HeadVars_8, &ArgTypes_24);
  switch (InferModes_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word PredId_25;
        MR_Integer ProcId_26;
        MR_Word ProcInfo_27;
        MR_Word ArgLives_28;
        MR_Word VarFinalInsts1_29;
        MR_Word Changed1_31;
        MR_Word Changed2_32;
        MR_Word Changed_33;
        MR_Word STATE_VARIABLE_ModeInfo_1_37;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_40;

        check_hlds__mode_info__mode_info_get_pred_id_2_p_0(STATE_VARIABLE_ModeInfo_0_13, &PredId_25);
        check_hlds__mode_info__mode_info_get_proc_id_2_p_0(STATE_VARIABLE_ModeInfo_0_13, &ProcId_26);
        hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_16, PredId_25, ProcId_26, &ProcInfo_27);
        hlds__hlds_proc_util__proc_info_arglives_3_p_0(ModuleInfo_16, ProcInfo_27, &ArgLives_28);
        check_hlds__modecheck_util__normalise_insts_4_p_0(ModuleInfo_16, ArgTypes_24, VarFinalInsts0_23, &VarFinalInsts1_29);
        check_hlds__modes__maybe_clobber_insts_3_p_0(VarFinalInsts1_29, ArgLives_28, STATE_VARIABLE_FinalInsts_12);
        check_hlds__modes__check_final_insts_10_p_0(InferModes_7, (MR_Integer) 0, HeadVars_8, *STATE_VARIABLE_FinalInsts_12, STATE_VARIABLE_FinalInsts_0_11, (MR_Integer) 1, (MR_Integer) 0, &Changed1_31, STATE_VARIABLE_ModeInfo_0_13, &STATE_VARIABLE_ModeInfo_1_37);
        check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(STATE_VARIABLE_ModeInfo_1_37, &Changed2_32);
        {
          Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_40, 0) = ((MR_Box) (Changed2_32));
          MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_39, 0) = ((MR_Box) (Changed1_31));
          MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_40));
        }
        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) (Changed0_20));
          MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_39));
        }
        mercury__bool__or_list_2_p_0(Var_38, &Changed_33);
        check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(Changed_33, STATE_VARIABLE_ModeInfo_1_37, STATE_VARIABLE_ModeInfo_14);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word _Changed1_34;

        check_hlds__modes__check_final_insts_10_p_0(InferModes_7, (MR_Integer) 0, HeadVars_8, VarFinalInsts0_23, STATE_VARIABLE_FinalInsts_0_11, (MR_Integer) 1, (MR_Integer) 0, &_Changed1_34, STATE_VARIABLE_ModeInfo_0_13, STATE_VARIABLE_ModeInfo_14);
        *STATE_VARIABLE_FinalInsts_12 = STATE_VARIABLE_FinalInsts_0_11;
      }
      break;
  }
}

void MR_CALL 
check_hlds__modes__modecheck_proc_8_p_0(
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16,
  MR_Word STATE_VARIABLE_ProcModeErrorMap_0_17,
  MR_Word * STATE_VARIABLE_ProcModeErrorMap_18,
  MR_Word * Changed_13,
  MR_Word * Specs_14)
{
  check_hlds__modes__modecheck_proc_general_10_p_0((MR_Integer) 0, (MR_Integer) 0, PredId_9, ProcId_10, STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_ProcModeErrorMap_0_17, STATE_VARIABLE_ProcModeErrorMap_18, Changed_13, Specs_14);
}

void MR_CALL 
check_hlds__modes__modecheck_module_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11,
  MR_Word * SafeToContinue_8,
  MR_Word * Specs_9)
{
  check_hlds__modes__modecheck_all_preds_in_module_7_p_0(ProgressStream_6, (MR_Integer) 0, (MR_Integer) 0, STATE_VARIABLE_ModuleInfo_0_10, STATE_VARIABLE_ModuleInfo_11, SafeToContinue_8, Specs_9);
}

static void MR_CALL 
check_hlds__modes__modecheck_all_preds_in_module_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_14;

  check_hlds__modes__delete_invalid_procs_from_pred_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ModuleInfo_14);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_14));
}

void MR_CALL 
check_hlds__modes__modecheck_all_preds_in_module_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word WhatToCheck_9,
  MR_Word MayChangeCalledProc_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40,
  MR_Word * SafeToContinue_12,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  MR_bool succeeded;
  MR_Word PredIds_14;
  MR_Word Globals_15;
  MR_Integer MaxIterations_16;
  MR_Word ProcModeErrorMap0_17;
  MR_Word SafeToContinue0_18;
  MR_Word ProcModeErrorMap1_19;
  MR_Word ProcModeErrorMap_20;
  MR_Word STATE_VARIABLE_Specs_1_43;
  MR_Word STATE_VARIABLE_ModuleInfo_1_44;
  MR_Word STATE_VARIABLE_ModuleInfo_3_53;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_40;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_39, &PredIds_14);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_39, &Globals_15);
  libs__globals__lookup_int_option_3_p_0(Globals_15, (MR_Integer) 125, &MaxIterations_16);
  mercury__map__init_1_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__modes_scalar_common_2[0]), &ProcModeErrorMap0_17);
  check_hlds__modes__modecheck_to_fixpoint_11_p_0(ProgressStream_8, WhatToCheck_9, MayChangeCalledProc_10, MaxIterations_16, PredIds_14, &SafeToContinue0_18, &STATE_VARIABLE_Specs_1_43, ProcModeErrorMap0_17, &ProcModeErrorMap1_19, STATE_VARIABLE_ModuleInfo_0_39, &STATE_VARIABLE_ModuleInfo_1_44);
  switch (WhatToCheck_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (SafeToContinue0_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DelayPartialInstantiations_21;
            MR_Word ToBeDeletedPredIds_38;
            MR_Word STATE_VARIABLE_Specs_5_52;

            libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 766, &DelayPartialInstantiations_21);
            switch (DelayPartialInstantiations_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  ProcModeErrorMap_20 = ProcModeErrorMap1_19;
                  *SafeToContinue_12 = (MR_Integer) 0;
                  STATE_VARIABLE_ModuleInfo_3_53 = STATE_VARIABLE_ModuleInfo_1_44;
                  STATE_VARIABLE_Specs_5_52 = STATE_VARIABLE_Specs_1_43;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ChangedPreds_26;
                  MR_Word AfterDPISafeToContinue_27;
                  MR_Word AfterDPISpecs_28;
                  MR_Word AfterDPIProcModeErrorMap_29;
                  MR_Word AfterDPIModuleInfo_30;
                  MR_Word MaybeBeforeDPISeverity_31;
                  MR_Word MaybeAfterDPISeverity_32;
                  MR_Word STATE_VARIABLE_ModuleInfo_2_51;

                  check_hlds__delay_partial_inst__delay_partial_inst_preds_5_p_0(ProgressStream_8, PredIds_14, &ChangedPreds_26, STATE_VARIABLE_ModuleInfo_1_44, &STATE_VARIABLE_ModuleInfo_2_51);
                  check_hlds__modes__modecheck_to_fixpoint_11_p_0(ProgressStream_8, WhatToCheck_9, MayChangeCalledProc_10, MaxIterations_16, ChangedPreds_26, &AfterDPISafeToContinue_27, &AfterDPISpecs_28, ProcModeErrorMap1_19, &AfterDPIProcModeErrorMap_29, STATE_VARIABLE_ModuleInfo_2_51, &AfterDPIModuleInfo_30);
                  MaybeBeforeDPISeverity_31 = parse_tree__error_util__worst_severity_in_specs_2_f_0(Globals_15, STATE_VARIABLE_Specs_1_43);
                  MaybeAfterDPISeverity_32 = parse_tree__error_util__worst_severity_in_specs_2_f_0(Globals_15, AfterDPISpecs_28);
                  if ((MaybeBeforeDPISeverity_31 == (MR_Word) ((MR_Unsigned) 0U)))
                    if ((MaybeAfterDPISeverity_32 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      STATE_VARIABLE_Specs_5_52 = AfterDPISpecs_28;
                      STATE_VARIABLE_ModuleInfo_3_53 = AfterDPIModuleInfo_30;
                      ProcModeErrorMap_20 = AfterDPIProcModeErrorMap_29;
                      *SafeToContinue_12 = AfterDPISafeToContinue_27;
                    }
                    else
                    {
                      STATE_VARIABLE_Specs_5_52 = STATE_VARIABLE_Specs_1_43;
                      STATE_VARIABLE_ModuleInfo_3_53 = STATE_VARIABLE_ModuleInfo_1_44;
                      ProcModeErrorMap_20 = ProcModeErrorMap1_19;
                      *SafeToContinue_12 = SafeToContinue0_18;
                    }
                  else
                  {
                    MR_Word Var_72 = ((MR_Word) ((MR_hl_field(1, MaybeBeforeDPISeverity_31, 0))));

                    if ((MaybeAfterDPISeverity_32 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      STATE_VARIABLE_Specs_5_52 = AfterDPISpecs_28;
                      STATE_VARIABLE_ModuleInfo_3_53 = AfterDPIModuleInfo_30;
                      ProcModeErrorMap_20 = AfterDPIProcModeErrorMap_29;
                      *SafeToContinue_12 = AfterDPISafeToContinue_27;
                    }
                    else
                    {
                      MR_Word AfterDPISeverity_36 = ((MR_Word) ((MR_hl_field(1, MaybeAfterDPISeverity_32, 0))));
                      MR_Word WorstSeverity_37;

                      WorstSeverity_37 = parse_tree__error_util__worst_severity_2_f_0(Var_72, AfterDPISeverity_36);
                      succeeded = (AfterDPISeverity_36 == WorstSeverity_37);
                      if (succeeded)
                      {
                        STATE_VARIABLE_Specs_5_52 = STATE_VARIABLE_Specs_1_43;
                        STATE_VARIABLE_ModuleInfo_3_53 = STATE_VARIABLE_ModuleInfo_1_44;
                        ProcModeErrorMap_20 = ProcModeErrorMap1_19;
                        *SafeToContinue_12 = SafeToContinue0_18;
                      }
                      else
                      {
                        STATE_VARIABLE_Specs_5_52 = AfterDPISpecs_28;
                        STATE_VARIABLE_ModuleInfo_3_53 = AfterDPIModuleInfo_30;
                        ProcModeErrorMap_20 = AfterDPIProcModeErrorMap_29;
                        *SafeToContinue_12 = AfterDPISafeToContinue_27;
                      }
                    }
                  }
                }
                break;
            }
            mercury__map__keys_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__modes_scalar_common_2[0]), ProcModeErrorMap_20, &ToBeDeletedPredIds_38);
            check_hlds__modes__report_mode_inference_messages_for_preds_6_p_0(STATE_VARIABLE_ModuleInfo_3_53, ProcModeErrorMap_20, (MR_Integer) 1, ToBeDeletedPredIds_38, STATE_VARIABLE_Specs_5_52, STATE_VARIABLE_Specs_41);
          }
          break;
        case (MR_Integer) 1:
          {
            ProcModeErrorMap_20 = ProcModeErrorMap1_19;
            check_hlds__modes__report_mode_inference_messages_for_preds_6_p_0(STATE_VARIABLE_ModuleInfo_1_44, ProcModeErrorMap_20, (MR_Integer) 1, PredIds_14, STATE_VARIABLE_Specs_1_43, STATE_VARIABLE_Specs_41);
            *SafeToContinue_12 = (MR_Integer) 1;
            STATE_VARIABLE_ModuleInfo_3_53 = STATE_VARIABLE_ModuleInfo_1_44;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_Specs_2_46;
        MR_Word PredIds_73;

        ProcModeErrorMap_20 = ProcModeErrorMap1_19;
        check_hlds__modes__report_mode_inference_messages_for_preds_6_p_0(STATE_VARIABLE_ModuleInfo_1_44, ProcModeErrorMap_20, (MR_Integer) 0, PredIds_14, STATE_VARIABLE_Specs_1_43, &STATE_VARIABLE_Specs_2_46);
        hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_1_44, &PredIds_73);
        check_hlds__modes__pred_check_eval_methods_and_main_5_p_0(STATE_VARIABLE_ModuleInfo_1_44, ProcModeErrorMap_20, PredIds_73, STATE_VARIABLE_Specs_2_46, STATE_VARIABLE_Specs_41);
        *SafeToContinue_12 = SafeToContinue0_18;
        STATE_VARIABLE_ModuleInfo_3_53 = STATE_VARIABLE_ModuleInfo_1_44;
      }
      break;
  }
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__modes_scalar_common_2[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__modes_scalar_common_2[6]), ProcModeErrorMap_20, ((MR_Box) (STATE_VARIABLE_ModuleInfo_3_53)), &conv1_STATE_VARIABLE_ModuleInfo_40);
  *STATE_VARIABLE_ModuleInfo_40 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_40));
}

static void MR_CALL 
check_hlds__modes__pred_check_eval_methods_and_main_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ProcModeErrorMap_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
    else
    {
      MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word PredIds_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word PredInfo_16;
      MR_Word ProcIds_17;
      MR_Word STATE_VARIABLE_Specs_1_20;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_1, PredId_13, &PredInfo_16);
      ProcIds_17 = hlds__hlds_pred__pred_info_all_proc_ids_1_f_0(PredInfo_16);
      check_hlds__modes__proc_check_eval_methods_and_main_7_p_0(ModuleInfo_1, ProcModeErrorMap_2, PredId_13, PredInfo_16, ProcIds_17, STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_1_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = PredIds_14;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_1_20;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__modes__proc_check_eval_methods_and_main_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ProcModeErrorMap_2,
  MR_Word PredId_3,
  MR_Word PredInfo_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
    else
    {
      MR_Integer ProcId_19 = ((MR_Integer) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word ProcIds_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word ModeErrors_22;
      MR_Word STATE_VARIABLE_Specs_3_42;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      check_hlds__mode_info__look_up_proc_mode_errors_raw_4_p_0(ProcModeErrorMap_2, PredId_3, ProcId_19, &ModeErrors_22);
      if ((ModeErrors_22 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ProcTable_23;
        MR_Word ProcInfo_24;
        MR_Word EvalMethod_25;
        MR_Word Types_26;
        MR_Word Modes_27;
        MR_Word STATE_VARIABLE_Specs_2_38;
        MR_Box conv0_ProcInfo_24;
        MR_String Var_39;
        MR_Word Var_40;
        MR_Word Var_45;
        MR_Integer Var_47;
        MR_Integer Var_48;
        MR_Word Di_125;
        MR_Word Uo_126;
        MR_Word DiInitialInst_127;
        MR_Word DiFinalInst_128;
        MR_Word UoInitialInst_129;
        MR_Word UoFinalInst_130;
        MR_Word Unique_131;
        MR_Word Clobbered_132;
        MR_Word Free_133;
        MR_Word Var_134;
        MR_Word Var_135;
        MR_Word Var_140;
        MR_Word Var_141;
        MR_Word Var_142;
        MR_Word Var_143;

        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_4, &ProcTable_23);
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ProcTable_23, ((MR_Box) (ProcId_19)), &conv0_ProcInfo_24);
        ProcInfo_24 = ((MR_Word) (conv0_ProcInfo_24));
        hlds__hlds_proc__proc_info_get_eval_method_2_p_0(ProcInfo_24, &EvalMethod_25);
        hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_4, &Types_26);
        hlds__hlds_proc__proc_info_get_argmodes_2_p_0(ProcInfo_24, &Modes_27);
        if ((EvalMethod_25 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_Specs_2_38 = STATE_VARIABLE_Specs_0_6;
        else
        {
          MR_Word TabledMethod_28 = ((MR_Word) ((MR_hl_field(1, EvalMethod_25, 0))));
          MR_Word STATE_VARIABLE_Specs_1_36;

          succeeded = check_hlds__modes__only_fully_in_out_modes_3_p_0(ModuleInfo_1, Types_26, Modes_27);
          if (succeeded)
            STATE_VARIABLE_Specs_1_36 = STATE_VARIABLE_Specs_0_6;
          else
          {
            MR_Word GroundArgsSpec_29;
            MR_Word Context_49;
            MR_String TabledMethodStr_50;
            MR_Word MainPieces_51;
            MR_Word Msg_53;
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word Var_67;
            MR_Word Var_68;
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Word Var_82;

            hlds__hlds_proc__proc_info_get_context_2_p_0(ProcInfo_24, &Context_49);
            TabledMethodStr_50 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_28);
            {
              Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 36U));
              MR_hl_field(3, Var_62, 1) = ((MR_Box) (TabledMethodStr_50));
            }
            {
              Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
              MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[31])));
            }
            Var_60 = parse_tree__error_spec__color_as_subject_1_f_0(Var_61);
            Var_68 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__modes_scalar_common_1[35])));
            Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, (MR_Word) (MR_mkword(1, &check_hlds__modes_scalar_common_1[11])));
            Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, Var_67);
            MainPieces_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__modes_scalar_common_1[29])), Var_59);
            {
              Var_74 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_74, 0) = ((MR_Box) (MainPieces_51));
            }
            {
              Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
              MR_hl_field(1, Var_73, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[63])));
            }
            {
              Msg_53 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Msg_53, 0) = ((MR_Box) (Context_49));
              MR_hl_field(2, Msg_53, 1) = ((MR_Box) (Var_73));
            }
            {
              Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_82, 0) = ((MR_Box) (Msg_53));
              MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              GroundArgsSpec_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, GroundArgsSpec_29, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.modes.report_eval_method_requires_ground_args\'/2"));
              MR_hl_field(2, GroundArgsSpec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(2, GroundArgsSpec_29, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__modes_scalar_common_3[0])));
              MR_hl_field(2, GroundArgsSpec_29, 3) = ((MR_Box) (Var_82));
            }
            {
              STATE_VARIABLE_Specs_1_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_1_36, 0) = ((MR_Box) (GroundArgsSpec_29));
              MR_hl_field(1, STATE_VARIABLE_Specs_1_36, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_6));
            }
          }
          switch (MR_tag((MR_Word) TabledMethod_28)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              succeeded = MR_TRUE;
              break;
          }
          if (succeeded)
          {
            succeeded = check_hlds__modes__only_nonunique_modes_2_p_0(ModuleInfo_1, Modes_27);
            succeeded = !(succeeded);
          }
          if (succeeded)
          {
            MR_Word UniquenessSpec_30;
            MR_Word Context_89;
            MR_String TabledMethodStr_90;
            MR_Word MainPieces_91;
            MR_Word Msg_93;
            MR_Word Var_99;
            MR_Word Var_100;
            MR_Word Var_101;
            MR_Word Var_102;
            MR_Word Var_107;
            MR_Word Var_108;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_122;

            hlds__hlds_proc__proc_info_get_context_2_p_0(ProcInfo_24, &Context_89);
            TabledMethodStr_90 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_28);
            {
              Var_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_102, 0) = ((MR_Box) ((MR_Unsigned) 36U));
              MR_hl_field(3, Var_102, 1) = ((MR_Box) (TabledMethodStr_90));
            }
            {
              Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
              MR_hl_field(1, Var_101, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[31])));
            }
            Var_100 = parse_tree__error_spec__color_as_subject_1_f_0(Var_101);
            Var_108 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__modes_scalar_common_1[44])));
            Var_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_108, (MR_Word) (MR_mkword(1, &check_hlds__modes_scalar_common_1[11])));
            Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_100, Var_107);
            MainPieces_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__modes_scalar_common_1[15])), Var_99);
            {
              Var_114 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_114, 0) = ((MR_Box) (MainPieces_91));
            }
            {
              Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_113, 0) = ((MR_Box) (Var_114));
              MR_hl_field(1, Var_113, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[65])));
            }
            {
              Msg_93 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Msg_93, 0) = ((MR_Box) (Context_89));
              MR_hl_field(2, Msg_93, 1) = ((MR_Box) (Var_113));
            }
            {
              Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_122, 0) = ((MR_Box) (Msg_93));
              MR_hl_field(1, Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              UniquenessSpec_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, UniquenessSpec_30, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.modes.report_eval_method_destroys_uniqueness\'/2"));
              MR_hl_field(2, UniquenessSpec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(2, UniquenessSpec_30, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__modes_scalar_common_3[0])));
              MR_hl_field(2, UniquenessSpec_30, 3) = ((MR_Box) (Var_122));
            }
            {
              STATE_VARIABLE_Specs_2_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_2_38, 0) = ((MR_Box) (UniquenessSpec_30));
              MR_hl_field(1, STATE_VARIABLE_Specs_2_38, 1) = ((MR_Box) (STATE_VARIABLE_Specs_1_36));
            }
          }
          else
            STATE_VARIABLE_Specs_2_38 = STATE_VARIABLE_Specs_1_36;
        }
        Var_39 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_4);
        succeeded = (strcmp(Var_39, (MR_String) "main") == 0);
        if (succeeded)
        {
          Var_40 = (MR_Word) (((MR_Box) ((MR_Integer) 2)));
          hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_4, &Var_45);
          Var_47 = (MR_Integer) (Var_40);
          Var_48 = (MR_Integer) (Var_45);
          succeeded = (Var_47 == Var_48);
          if (succeeded)
          {
            succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_4);
            if (succeeded)
            {
              succeeded = (Modes_27 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Di_125 = ((MR_Word) ((MR_hl_field(1, Modes_27, 0))));
                Var_134 = ((MR_Word) ((MR_hl_field(1, Modes_27, 1))));
                succeeded = (Var_134 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Uo_126 = ((MR_Word) ((MR_hl_field(1, Var_134, 0))));
                  Var_135 = ((MR_Word) ((MR_hl_field(1, Var_134, 1))));
                  succeeded = (Var_135 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_1, Di_125, &DiInitialInst_127, &DiFinalInst_128);
                    hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_1, Uo_126, &UoInitialInst_129, &UoFinalInst_130);
                    Unique_131 = (MR_Word) (MR_mkword(1, &check_hlds__modes_scalar_common_1[27]));
                    Clobbered_132 = (MR_Word) (MR_mkword(1, &check_hlds__modes_scalar_common_1[26]));
                    Free_133 = (MR_Word) ((MR_Unsigned) 0U);
                    hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo_1, DiInitialInst_127, &Var_140);
                    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Unique_131, Var_140);
                    if (succeeded)
                    {
                      hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo_1, DiFinalInst_128, &Var_141);
                      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Clobbered_132, Var_141);
                      if (succeeded)
                      {
                        hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo_1, UoInitialInst_129, &Var_142);
                        succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Free_133, Var_142);
                        if (succeeded)
                        {
                          hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo_1, UoFinalInst_130, &Var_143);
                          succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Unique_131, Var_143);
                        }
                      }
                    }
                  }
                }
              }
              succeeded = !(succeeded);
            }
          }
        }
        if (succeeded)
        {
          MR_Word MainSpec_31;
          MR_Word Context_149;
          MR_Word Pieces_150;
          MR_Word Var_159;
          MR_Word Var_160;
          MR_Word Var_164;
          MR_Word Var_165;

          hlds__hlds_proc__proc_info_get_context_2_p_0(ProcInfo_24, &Context_149);
          Var_160 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__modes_scalar_common_1[53])));
          Var_165 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__modes_scalar_common_1[59])));
          Var_164 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_165, (MR_Word) (MR_mkword(1, &check_hlds__modes_scalar_common_1[11])));
          Var_159 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_160, Var_164);
          Pieces_150 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__modes_scalar_common_1[15])), Var_159);
          {
            MainSpec_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MainSpec_31, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.modes.report_wrong_mode_for_main\'/1"));
            MR_hl_field(0, MainSpec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, MainSpec_31, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__modes_scalar_common_3[0])));
            MR_hl_field(0, MainSpec_31, 3) = ((MR_Box) (Context_149));
            MR_hl_field(0, MainSpec_31, 4) = ((MR_Box) (Pieces_150));
          }
          {
            STATE_VARIABLE_Specs_3_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Specs_3_42, 0) = ((MR_Box) (MainSpec_31));
            MR_hl_field(1, STATE_VARIABLE_Specs_3_42, 1) = ((MR_Box) (STATE_VARIABLE_Specs_2_38));
          }
        }
        else
          STATE_VARIABLE_Specs_3_42 = STATE_VARIABLE_Specs_2_38;
      }
      else
        STATE_VARIABLE_Specs_3_42 = STATE_VARIABLE_Specs_0_6;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ProcIds_20;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_3_42;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__modes__only_nonunique_modes_2_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Mode_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Modes_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word InitialInst_7;
      MR_Word FinalInst_8;
      MR_Word next_value_of_HeadVar__2_2;

      hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_1, Mode_5, &InitialInst_7, &FinalInst_8);
      succeeded = hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_1, InitialInst_7);
      if (succeeded)
      {
        succeeded = hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_1, FinalInst_8);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Modes_6;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__modes__only_fully_in_out_modes_3_p_0(
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modes.only_fully_in_out_modes\'/3", (MR_String) "list lengtg mismatch");
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modes.only_fully_in_out_modes\'/3", (MR_String) "list lengtg mismatch");
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Mode_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
        MR_Word Modes_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
        MR_Word InitialInst_20;
        MR_Word FinalInst_21;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;

        hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_1, Mode_18, &InitialInst_20, &FinalInst_21);
        succeeded = hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_1, Var_23, InitialInst_20);
        if (!(succeeded))
        {
          succeeded = hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_1, InitialInst_20);
          if (succeeded)
          {
            succeeded = hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_1, FinalInst_21);
            if (!(succeeded))
              succeeded = hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_1, Var_23, FinalInst_21);
          }
        }
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_22;
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
check_hlds__modes__modecheck_to_fixpoint_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_PredIdTable_8;

  check_hlds__modes__copy_pred_body_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_PredIdTable_8);
  *wrapper_arg_3 = ((MR_Box) (conv8_PredIdTable_8));
}

static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_ModuleInfo_30;
  MR_Word conv2_STATE_VARIABLE_ProcModeErrorMap_32;
  MR_Word conv1_STATE_VARIABLE_Changed_34;
  MR_Word conv0_STATE_VARIABLE_Specs_36;

  check_hlds__modes__maybe_modecheck_pred_12_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ModuleInfo_30, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_ProcModeErrorMap_32, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_Changed_34, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_Specs_36);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_30));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_ProcModeErrorMap_32));
  *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_Changed_34));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_36));
}

static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word WhatToCheck_13,
  MR_Word MayChangeCalledProc_14,
  MR_Integer NumIterationsLeft_15,
  MR_Word PredIds_16,
  MR_Word * SafeToContinue_17,
  MR_Word * STATE_VARIABLE_Specs_33,
  MR_Word STATE_VARIABLE_ProcModeErrorMap_0_34,
  MR_Word * STATE_VARIABLE_ProcModeErrorMap_35,
  MR_Word STATE_VARIABLE_ModuleInfo_0_36,
  MR_Word * STATE_VARIABLE_ModuleInfo_37)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word OldPredIdTable0_21;
    MR_Word Changed1_22;
    MR_Word Changed_23;
    MR_Word OldPredIdTable_24;
    MR_Word Globals_25;
    MR_Word ErrorsSoFar_26;
    MR_Word Var_38;
    MR_Word STATE_VARIABLE_ModuleInfo_1_39;
    MR_Word STATE_VARIABLE_ProcModeErrorMap_1_40;
    MR_Word STATE_VARIABLE_Specs_1_43;
    MR_Word STATE_VARIABLE_Specs_2_44;
    MR_Word STATE_VARIABLE_ProcModeErrorMap_2_45;
    MR_Word STATE_VARIABLE_ModuleInfo_2_46;
    MR_Box conv7_STATE_VARIABLE_ModuleInfo_1_39;
    MR_Box conv6_STATE_VARIABLE_ProcModeErrorMap_1_40;
    MR_Box conv5_Changed1_22;
    MR_Box conv4_STATE_VARIABLE_Specs_1_43;

    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_36, &OldPredIdTable0_21);
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_38, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_9[0]));
      MR_hl_field(0, Var_38, 1) = ((MR_Box) (check_hlds__modes__modecheck_to_fixpoint_11_p_0_1));
      MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_38, 3) = ((MR_Box) (ProgressStream_12));
      MR_hl_field(0, Var_38, 4) = ((MR_Box) (WhatToCheck_13));
      MR_hl_field(0, Var_38, 5) = ((MR_Box) (MayChangeCalledProc_14));
    }
    mercury__list__foldl4_10_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__modes_scalar_common_2[1]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&check_hlds__modes_scalar_common_1[1]), Var_38, PredIds_16, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_36)), &conv7_STATE_VARIABLE_ModuleInfo_1_39, ((MR_Box) (STATE_VARIABLE_ProcModeErrorMap_0_34)), &conv6_STATE_VARIABLE_ProcModeErrorMap_1_40, ((MR_Box) ((MR_Integer) 0)), &conv5_Changed1_22, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_STATE_VARIABLE_Specs_1_43);
    STATE_VARIABLE_ModuleInfo_1_39 = ((MR_Word) (conv7_STATE_VARIABLE_ModuleInfo_1_39));
    STATE_VARIABLE_ProcModeErrorMap_1_40 = ((MR_Word) (conv6_STATE_VARIABLE_ProcModeErrorMap_1_40));
    Changed1_22 = ((MR_Word) (conv5_Changed1_22));
    STATE_VARIABLE_Specs_1_43 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_43));
    check_hlds__modes__modecheck_queued_procs_12_p_0(ProgressStream_12, WhatToCheck_13, Changed1_22, &Changed_23, STATE_VARIABLE_Specs_1_43, &STATE_VARIABLE_Specs_2_44, OldPredIdTable0_21, &OldPredIdTable_24, STATE_VARIABLE_ProcModeErrorMap_1_40, &STATE_VARIABLE_ProcModeErrorMap_2_45, STATE_VARIABLE_ModuleInfo_1_39, &STATE_VARIABLE_ModuleInfo_2_46);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_2_46, &Globals_25);
    ErrorsSoFar_26 = parse_tree__error_util__contains_errors_2_f_0(Globals_25, STATE_VARIABLE_Specs_2_44);
    switch (Changed_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *SafeToContinue_17 = (MR_Integer) 0;
          *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_2_44;
          *STATE_VARIABLE_ProcModeErrorMap_35 = STATE_VARIABLE_ProcModeErrorMap_2_45;
          *STATE_VARIABLE_ModuleInfo_37 = STATE_VARIABLE_ModuleInfo_2_46;
        }
        break;
      case (MR_Integer) 1:
        switch (ErrorsSoFar_26) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = (NumIterationsLeft_15 <= (MR_Integer) 1);
              if (succeeded)
              {
                MR_Word MaxIterSpec_27;
                MR_Word Globals_81;
                MR_Integer MaxIterations_82;
                MR_Word Pieces_83;
                MR_Word Var_88;
                MR_Word Var_90;
                MR_Word Var_93;
                MR_Word Var_96;
                MR_Word Var_99;
                MR_Word Var_102;
                MR_Word Var_105;
                MR_Word Var_106;

                hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_2_46, &Globals_81);
                libs__globals__lookup_int_option_3_p_0(Globals_81, (MR_Integer) 125, &MaxIterations_82);
                {
                  Var_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_106, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, Var_106, 1) = ((MR_Box) (MaxIterations_82));
                }
                {
                  Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_105, 0) = ((MR_Box) (Var_106));
                  MR_hl_field(1, Var_105, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[13])));
                }
                {
                  Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_102, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[10])));
                  MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_105));
                }
                {
                  Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_99, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[9])));
                  MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_102));
                }
                {
                  Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_96, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[8])));
                  MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_99));
                }
                {
                  Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_93, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[7])));
                  MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_96));
                }
                {
                  Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_90, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[6])));
                  MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_93));
                }
                {
                  Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_88, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_90));
                }
                {
                  Pieces_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_83, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[5])));
                  MR_hl_field(1, Pieces_83, 1) = ((MR_Box) (Var_88));
                }
                {
                  MaxIterSpec_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaxIterSpec_27, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.modes.report_max_iterations_exceeded\'/1"));
                  MR_hl_field(1, MaxIterSpec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, MaxIterSpec_27, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__modes_scalar_common_3[0])));
                  MR_hl_field(1, MaxIterSpec_27, 3) = ((MR_Box) (Pieces_83));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_33 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (MaxIterSpec_27));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_2_44));
                }
                *SafeToContinue_17 = (MR_Integer) 1;
                *STATE_VARIABLE_ModuleInfo_37 = STATE_VARIABLE_ModuleInfo_2_46;
                *STATE_VARIABLE_ProcModeErrorMap_35 = STATE_VARIABLE_ProcModeErrorMap_2_45;
              }
              else
              {
                MR_Word DebugModes_28;
                MR_Word STATE_VARIABLE_ModuleInfo_4_60;
                MR_Integer Var_62;
                MR_Integer next_value_of_NumIterationsLeft_15;
                MR_Word next_value_of_STATE_VARIABLE_ProcModeErrorMap_0_34;
                MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_36;

                libs__globals__lookup_bool_option_3_p_0(Globals_25, (MR_Integer) 702, &DebugModes_28);
                switch (DebugModes_28) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word InferenceSpecs_29;
                      MR_Word ModuleName_31;
                      MR_Word DebugStream_32;

                      check_hlds__modes__report_mode_inference_messages_for_preds_6_p_0(STATE_VARIABLE_ModuleInfo_2_46, STATE_VARIABLE_ProcModeErrorMap_2_45, (MR_Integer) 1, PredIds_16, (MR_Word) ((MR_Unsigned) 0U), &InferenceSpecs_29);
                      hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_2_46, &ModuleName_31);
                      libs__globals__get_debug_output_stream_5_p_0(Globals_25, ModuleName_31, &DebugStream_32);
                      mercury__io__write_string_4_p_0(DebugStream_32, (MR_String) "Inferences by current iteration:\n");
                      parse_tree__write_error_spec__write_diag_specs_5_p_0(DebugStream_32, Globals_25, InferenceSpecs_29);
                      mercury__io__write_string_4_p_0(DebugStream_32, (MR_String) "End of inferences.\n");
                    }
                    break;
                }
                switch (WhatToCheck_13) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word STATE_VARIABLE_ModuleInfo_3_59;

                      check_hlds__clause_to_proc__copy_clauses_to_nonmethod_procs_for_preds_in_module_info_3_p_0(PredIds_16, STATE_VARIABLE_ModuleInfo_2_46, &STATE_VARIABLE_ModuleInfo_3_59);
                      check_hlds__introduce_exists_casts__introduce_exists_casts_3_p_0(PredIds_16, STATE_VARIABLE_ModuleInfo_3_59, &STATE_VARIABLE_ModuleInfo_4_60);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word PredIdTable0_111;
                      MR_Word PredIdTable_112;
                      MR_Word Var_113;
                      MR_Box conv9_PredIdTable_112;

                      hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_2_46, &PredIdTable0_111);
                      {
                        Var_113 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_113, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_10[0]));
                        MR_hl_field(0, Var_113, 1) = ((MR_Box) (check_hlds__modes__modecheck_to_fixpoint_11_p_0_2));
                        MR_hl_field(0, Var_113, 2) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(0, Var_113, 3) = ((MR_Box) (OldPredIdTable_24));
                      }
                      mercury__list__foldl_4_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__modes_scalar_common_2[2]), Var_113, PredIds_16, ((MR_Box) (PredIdTable0_111)), &conv9_PredIdTable_112);
                      PredIdTable_112 = ((MR_Word) (conv9_PredIdTable_112));
                      hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_112, STATE_VARIABLE_ModuleInfo_2_46, &STATE_VARIABLE_ModuleInfo_4_60);
                    }
                    break;
                }
                Var_62 = (MR_Integer) ((MR_Unsigned) NumIterationsLeft_15 - (MR_Unsigned) 1);
                // direct tailcall eliminated
                ;
                next_value_of_NumIterationsLeft_15 = Var_62;
                next_value_of_STATE_VARIABLE_ProcModeErrorMap_0_34 = STATE_VARIABLE_ProcModeErrorMap_2_45;
                next_value_of_STATE_VARIABLE_ModuleInfo_0_36 = STATE_VARIABLE_ModuleInfo_4_60;
                NumIterationsLeft_15 = next_value_of_NumIterationsLeft_15;
                STATE_VARIABLE_ProcModeErrorMap_0_34 = next_value_of_STATE_VARIABLE_ProcModeErrorMap_0_34;
                STATE_VARIABLE_ModuleInfo_0_36 = next_value_of_STATE_VARIABLE_ModuleInfo_0_36;
                continue;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *SafeToContinue_17 = (MR_Integer) 1;
              *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_2_44;
              *STATE_VARIABLE_ProcModeErrorMap_35 = STATE_VARIABLE_ProcModeErrorMap_2_45;
              *STATE_VARIABLE_ModuleInfo_37 = STATE_VARIABLE_ModuleInfo_2_46;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__modes__report_mode_inference_messages_for_preds_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ProcModeErrorMap_2,
  MR_Word OutputDetism_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
    else
    {
      MR_Word PredId_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word PredIds_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word PredInfo_19;
      MR_Word Markers_20;
      MR_Word STATE_VARIABLE_Specs_1_26;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_1, PredId_16, &PredInfo_19);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_19, &Markers_20);
      succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_20, (MR_Integer) 3);
      if (succeeded)
      {
        MR_Word ProcIds_21;
        MR_Word Procs_22;

        ProcIds_21 = hlds__hlds_pred__pred_info_all_proc_ids_1_f_0(PredInfo_19);
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_19, &Procs_22);
        check_hlds__modes__report_mode_inference_messages_for_procs_9_p_0(ModuleInfo_1, ProcModeErrorMap_2, OutputDetism_3, PredId_16, PredInfo_19, Procs_22, ProcIds_21, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_1_26);
      }
      else
        STATE_VARIABLE_Specs_1_26 = STATE_VARIABLE_Specs_0_5;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = PredIds_17;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_1_26;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
check_hlds__modes__report_mode_inference_messages_for_procs_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_51;

  conv1_LambdaHeadVar__2_51 = check_hlds__modes__IntroducedFrom__func__report_mode_inference_message__2000__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_51));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__modes__report_mode_inference_messages_for_procs_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ProcModeErrorMap_2,
  MR_Word OutputDetism_3,
  MR_Word PredId_4,
  MR_Word PredInfo_5,
  MR_Word Procs_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
    else
    {
      MR_Integer ProcId_25 = ((MR_Integer) ((MR_hl_field(1, HeadVar__7_7, 0))));
      MR_Word ProcIds_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 1))));
      MR_Word ModeErrors_28;
      MR_Word STATE_VARIABLE_Specs_1_39;
      MR_Word IsValid_29;
      MR_Word next_value_of_HeadVar__7_7;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_8;

      check_hlds__mode_info__look_up_proc_mode_errors_raw_4_p_0(ProcModeErrorMap_2, PredId_4, ProcId_25, &ModeErrors_28);
      if ((ModeErrors_28 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        IsValid_29 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Globals_32;
        MR_Word VerboseErrors_33;

        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_1, &Globals_32);
        libs__globals__lookup_bool_option_3_p_0(Globals_32, (MR_Integer) 140, &VerboseErrors_33);
        succeeded = (VerboseErrors_33 == (MR_Integer) 1);
        if (succeeded)
        {
          IsValid_29 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        MR_Word ProcInfo_34;
        MR_Word Spec_35;
        MR_String PredName_42;
        MR_Word Name_43;
        MR_Word Context_44;
        MR_Word OrigPredFormArity_45;
        MR_Integer NumExtraArg_46;
        MR_Word VarSet_47;
        MR_Word PredOrFunc_48;
        MR_String Verb_50;
        MR_String Detail_56;
        MR_Word Pieces_59;
        MR_Word STATE_VARIABLE_ArgModes_1_62;
        MR_Word STATE_VARIABLE_ArgModes_3_66;
        MR_Word STATE_VARIABLE_MaybeDet_1_67;
        MR_Word STATE_VARIABLE_ArgModes_4_68;
        MR_Word STATE_VARIABLE_MaybeDet_3_71;
        MR_Word STATE_VARIABLE_ArgModes_5_74;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Box conv0_ProcInfo_34;
        MR_Word STATE_VARIABLE_ArgModes_2_63;

        mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), Procs_6, ((MR_Box) (ProcId_25)), &conv0_ProcInfo_34);
        ProcInfo_34 = ((MR_Word) (conv0_ProcInfo_34));
        PredName_42 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_5);
        {
          Name_43 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Name_43, 0) = ((MR_Box) (PredName_42));
        }
        hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_5, &Context_44);
        hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_5, &OrigPredFormArity_45);
        hlds__hlds_proc__proc_info_get_argmodes_2_p_0(ProcInfo_34, &STATE_VARIABLE_ArgModes_1_62);
        NumExtraArg_46 = parse_tree__prog_data__num_extra_args_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), OrigPredFormArity_45, STATE_VARIABLE_ArgModes_1_62);
        succeeded = mercury__list__drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumExtraArg_46, STATE_VARIABLE_ArgModes_1_62, &STATE_VARIABLE_ArgModes_2_63);
        if (succeeded)
          STATE_VARIABLE_ArgModes_3_66 = STATE_VARIABLE_ArgModes_2_63;
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.modes.report_mode_inference_message\'/5", (MR_String) "list.drop failed");
            return;
          }
        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &VarSet_47);
        PredOrFunc_48 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_5);
        switch (OutputDetism_3) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            STATE_VARIABLE_MaybeDet_1_67 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 0:
            {
              MR_Word Detism_49;

              hlds__hlds_proc__proc_info_get_inferred_determinism_2_p_0(ProcInfo_34, &Detism_49);
              {
                STATE_VARIABLE_MaybeDet_1_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_MaybeDet_1_67, 0) = ((MR_Box) (Detism_49));
              }
            }
            break;
        }
        switch (IsValid_29) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InitialInsts_51;
              MR_Integer OrigPredFormArityInt_53;
              MR_Word FinalInsts_54;
              MR_Word Var_70;

              Verb_50 = (MR_String) "REJECTED";
              hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_1, STATE_VARIABLE_ArgModes_3_66, &InitialInsts_51);
              OrigPredFormArityInt_53 = (MR_Integer) (OrigPredFormArity_45);
              mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), OrigPredFormArityInt_53, ((MR_Box) (MR_mkword(3, &check_hlds__modes_scalar_common_1[61]))), &FinalInsts_54);
              Var_70 = mercury__assoc_list__from_corresponding_lists_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InitialInsts_51, FinalInsts_54);
              STATE_VARIABLE_ArgModes_4_68 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__modes_scalar_common_2[4]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&check_hlds__modes_scalar_common_2[5]), Var_70);
              STATE_VARIABLE_MaybeDet_3_71 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              Verb_50 = (MR_String) "Inferred";
              STATE_VARIABLE_ArgModes_4_68 = STATE_VARIABLE_ArgModes_3_66;
              STATE_VARIABLE_MaybeDet_3_71 = STATE_VARIABLE_MaybeDet_1_67;
            }
            break;
        }
        parse_tree__prog_mode__strip_module_names_from_mode_list_4_p_0((MR_Integer) 0, (MR_Integer) 1, STATE_VARIABLE_ArgModes_4_68, &STATE_VARIABLE_ArgModes_5_74);
        switch (PredOrFunc_48) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word FuncArgModes_57;
              MR_Word RetMode_58;
              MR_Box conv2_RetMode_58;

              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), STATE_VARIABLE_ArgModes_5_74, &FuncArgModes_57, &conv2_RetMode_58);
              RetMode_58 = ((MR_Word) (conv2_RetMode_58));
              Detail_56 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_decl_to_string_6_f_0((MR_Integer) 1, VarSet_47, Name_43, FuncArgModes_57, RetMode_58, STATE_VARIABLE_MaybeDet_3_71);
            }
            break;
          case (MR_Integer) 0:
            Detail_56 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_decl_to_string_6_f_0((MR_Integer) 1, VarSet_47, Name_43, STATE_VARIABLE_ArgModes_5_74, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_MaybeDet_3_71);
            break;
        }
        {
          Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_77, 1) = ((MR_Box) (Verb_50));
        }
        {
          Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_79, 1) = ((MR_Box) (Detail_56));
        }
        {
          Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
          MR_hl_field(1, Var_78, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__modes_scalar_common_1[11])));
        }
        {
          Pieces_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_59, 0) = ((MR_Box) (Var_77));
          MR_hl_field(1, Pieces_59, 1) = ((MR_Box) (Var_78));
        }
        {
          Spec_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_35, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.modes.report_mode_inference_message\'/5"));
          MR_hl_field(0, Spec_35, 1) = ((MR_Box) (MR_mkword(2, &check_hlds__modes_scalar_common_3[5])));
          MR_hl_field(0, Spec_35, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__modes_scalar_common_3[0])));
          MR_hl_field(0, Spec_35, 3) = ((MR_Box) (Context_44));
          MR_hl_field(0, Spec_35, 4) = ((MR_Box) (Pieces_59));
        }
        {
          STATE_VARIABLE_Specs_1_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_39, 0) = ((MR_Box) (Spec_35));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_39, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_8));
        }
      }
      else
        STATE_VARIABLE_Specs_1_39 = STATE_VARIABLE_Specs_0_8;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__7_7 = ProcIds_26;
      next_value_of_STATE_VARIABLE_Specs_0_8 = STATE_VARIABLE_Specs_1_39;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
      STATE_VARIABLE_Specs_0_8 = next_value_of_STATE_VARIABLE_Specs_0_8;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__modes__modecheck_queued_procs_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1364__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__modes__modecheck_queued_procs_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word HowToCheckGoal_14,
  MR_Word STATE_VARIABLE_Changed_0_31,
  MR_Word * STATE_VARIABLE_Changed_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34,
  MR_Word STATE_VARIABLE_OldPredIdTable_0_35,
  MR_Word * STATE_VARIABLE_OldPredIdTable_36,
  MR_Word STATE_VARIABLE_ProcModeErrorMap_0_37,
  MR_Word * STATE_VARIABLE_ProcModeErrorMap_38,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Requests0_20;
    MR_Word RequestQueue0_21;
    MR_Word PredProcId_22;
    MR_Word RequestQueue1_23;
    MR_Box conv0_PredProcId_22;

    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_module__module_info_get_proc_requests_2_p_0(STATE_VARIABLE_ModuleInfo_0_39, &Requests0_20);
    check_hlds__proc_requests__get_req_queue_2_p_0(Requests0_20, &RequestQueue0_21);
    succeeded = mercury__queue__get_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_proc_id_0), &conv0_PredProcId_22, RequestQueue0_21, &RequestQueue1_23);
    if (succeeded)
    {
      PredProcId_22 = ((MR_Word) (conv0_PredProcId_22));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Requests1_24;
      MR_Word PredId_25;
      MR_Word ValidPredIds_27;
      MR_Word STATE_VARIABLE_ModuleInfo_1_41;
      MR_Word STATE_VARIABLE_OldPredIdTable_1_44;
      MR_Word STATE_VARIABLE_ProcModeErrorMap_1_45;
      MR_Word STATE_VARIABLE_ModuleInfo_2_46;
      MR_Word STATE_VARIABLE_Changed_1_47;
      MR_Word STATE_VARIABLE_Specs_1_48;
      MR_Word next_value_of_STATE_VARIABLE_Changed_0_31;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_33;
      MR_Word next_value_of_STATE_VARIABLE_OldPredIdTable_0_35;
      MR_Word next_value_of_STATE_VARIABLE_ProcModeErrorMap_0_37;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_39;

      check_hlds__proc_requests__set_req_queue_3_p_0(RequestQueue1_23, Requests0_20, &Requests1_24);
      hlds__hlds_module__module_info_set_proc_requests_3_p_0(Requests1_24, STATE_VARIABLE_ModuleInfo_0_39, &STATE_VARIABLE_ModuleInfo_1_41);
      PredId_25 = ((MR_Word) ((MR_hl_field(0, PredProcId_22, 0))));
      hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(STATE_VARIABLE_ModuleInfo_1_41, &ValidPredIds_27);
      succeeded = mercury__set_tree234__member_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), ((MR_Box) (PredId_25)), ValidPredIds_27);
      if (succeeded)
      {
        MR_Word HeadChanged_29;
        MR_Word HeadSpecs_30;
        MR_Word PredId_70;
        MR_Integer ProcId_71;
        MR_Word PredInfo0_72;
        MR_Word ProcInfo0_73;
        MR_Word ProcInfo1_74;
        MR_Word PredInfo1_75;
        MR_Word ModeSpecs_76;
        MR_Word Globals_77;
        MR_Word ModeErrors_78;
        MR_Word STATE_VARIABLE_ModuleInfo_1_88;
        MR_Word STATE_VARIABLE_ModuleInfo_2_91;
        MR_Word STATE_VARIABLE_ProcModeErrorMap_1_92;
        MR_Word STATE_VARIABLE_Changed_1_94;
        MR_Word Globals_52;
        MR_Word VeryVerbose_53;

        hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_1_41, &Globals_52);
        libs__globals__lookup_bool_option_3_p_0(Globals_52, (MR_Integer) 132, &VeryVerbose_53);
        switch (VeryVerbose_53) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ProcStr_54;

              ProcStr_54 = hlds__hlds_out__hlds_out_util__pred_proc_id_to_user_string_2_f_0(STATE_VARIABLE_ModuleInfo_1_41, PredProcId_22);
              switch (HowToCheckGoal_14) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_4_p_0(ProgressStream_13, (MR_String) "% Mode-analysing ");
                    mercury__io__write_string_4_p_0(ProgressStream_13, ProcStr_54);
                    mercury__io__write_string_4_p_0(ProgressStream_13, (MR_String) "\n");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_4_p_0(ProgressStream_13, (MR_String) "% Analysing unique modes for\n% ");
                    mercury__io__write_string_4_p_0(ProgressStream_13, ProcStr_54);
                  }
                  break;
              }
            }
            break;
        }
        PredId_70 = ((MR_Word) ((MR_hl_field(0, PredProcId_22, 0))));
        ProcId_71 = ((MR_Integer) ((MR_hl_field(0, PredProcId_22, 1))));
        hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_1_41, PredId_70, &PredInfo0_72);
        hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo0_72, ProcId_71, &ProcInfo0_73);
        hlds__hlds_proc__proc_info_set_can_process_3_p_0((MR_Integer) 1, ProcInfo0_73, &ProcInfo1_74);
        hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_71, ProcInfo1_74, PredInfo0_72, &PredInfo1_75);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_70, PredInfo1_75, STATE_VARIABLE_ModuleInfo_1_41, &STATE_VARIABLE_ModuleInfo_1_88);
        check_hlds__modes__definitely_modecheck_proc_12_p_0((MR_Integer) 0, (MR_Integer) 0, PredId_70, ProcId_71, ProcInfo1_74, STATE_VARIABLE_ModuleInfo_1_88, &STATE_VARIABLE_ModuleInfo_2_91, STATE_VARIABLE_ProcModeErrorMap_0_37, &STATE_VARIABLE_ProcModeErrorMap_1_92, (MR_Integer) 0, &STATE_VARIABLE_Changed_1_94, &ModeSpecs_76);
        hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_2_91, &Globals_77);
        ModeErrors_78 = parse_tree__error_util__contains_errors_2_f_0(Globals_77, ModeSpecs_76);
        switch (ModeErrors_78) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (HowToCheckGoal_14) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  HeadSpecs_30 = ModeSpecs_76;
                  HeadChanged_29 = STATE_VARIABLE_Changed_1_94;
                  STATE_VARIABLE_OldPredIdTable_1_44 = STATE_VARIABLE_OldPredIdTable_0_35;
                  STATE_VARIABLE_ProcModeErrorMap_1_45 = STATE_VARIABLE_ProcModeErrorMap_1_92;
                  STATE_VARIABLE_ModuleInfo_2_46 = STATE_VARIABLE_ModuleInfo_2_91;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PredInfo2_79;
                  MR_Word ProcInfo2_80;
                  MR_Word SwitchDetectInfo_81;
                  MR_Word ProcInfo3_82;
                  MR_Word PredInfo3_83;
                  MR_Word DetismSpecs_84;
                  MR_Word UniqueChanged_85;
                  MR_Word UniqueSpecs_86;
                  MR_Word STATE_VARIABLE_ModuleInfo_4_95;
                  MR_Word STATE_VARIABLE_ModuleInfo_5_96;
                  MR_Word STATE_VARIABLE_ModuleInfo_6_97;
                  MR_Word Var_98;
                  MR_Word ProcInfo_106;
                  MR_Word OldPredInfo0_107;
                  MR_Word OldProcTable0_108;
                  MR_Word OldProcTable_109;
                  MR_Word OldPredInfo_110;
                  MR_Word _PredInfo_105;
                  MR_Box conv1_OldPredInfo0_107;

                  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_2_91, PredId_70, &PredInfo2_79);
                  hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo2_79, ProcId_71, &ProcInfo2_80);
                  SwitchDetectInfo_81 = check_hlds__switch_detection__init_switch_detect_info_1_f_0(STATE_VARIABLE_ModuleInfo_2_91);
                  check_hlds__switch_detection__detect_switches_in_proc_3_p_0(SwitchDetectInfo_81, ProcInfo2_80, &ProcInfo3_82);
                  hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_71, ProcInfo3_82, PredInfo2_79, &PredInfo3_83);
                  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_70, PredInfo3_83, STATE_VARIABLE_ModuleInfo_2_91, &STATE_VARIABLE_ModuleInfo_4_95);
                  check_hlds__cse_detection__detect_cse_in_queued_proc_4_p_0(PredId_70, ProcId_71, STATE_VARIABLE_ModuleInfo_4_95, &STATE_VARIABLE_ModuleInfo_5_96);
                  check_hlds__det_analysis__determinism_check_proc_6_p_0(ProgressStream_13, PredId_70, ProcId_71, &DetismSpecs_84, STATE_VARIABLE_ModuleInfo_5_96, &STATE_VARIABLE_ModuleInfo_6_97);
                  {
                    Var_98 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_98, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_8[0]));
                    MR_hl_field(0, Var_98, 1) = ((MR_Box) (check_hlds__modes__modecheck_queued_procs_12_p_0_1));
                    MR_hl_field(0, Var_98, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_98, 3) = ((MR_Box) (DetismSpecs_84));
                    MR_hl_field(0, Var_98, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  mercury__require__expect_3_p_0(Var_98, (MR_String) "predicate \140check_hlds.modes.modecheck_queued_proc\'/11", (MR_String) "found detism error");
                  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_6_97, PredId_70, ProcId_71, &_PredInfo_105, &ProcInfo_106);
                  mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_OldPredIdTable_0_35, ((MR_Box) (PredId_70)), &conv1_OldPredInfo0_107);
                  OldPredInfo0_107 = ((MR_Word) (conv1_OldPredInfo0_107));
                  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(OldPredInfo0_107, &OldProcTable0_108);
                  mercury__map__set_4_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_71)), ((MR_Box) (ProcInfo_106)), OldProcTable0_108, &OldProcTable_109);
                  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(OldProcTable_109, OldPredInfo0_107, &OldPredInfo_110);
                  mercury__map__det_update_4_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_70)), ((MR_Box) (OldPredInfo_110)), STATE_VARIABLE_OldPredIdTable_0_35, &STATE_VARIABLE_OldPredIdTable_1_44);
                  check_hlds__modes__modecheck_proc_general_10_p_0((MR_Integer) 1, (MR_Integer) 0, PredId_70, ProcId_71, STATE_VARIABLE_ModuleInfo_6_97, &STATE_VARIABLE_ModuleInfo_2_46, STATE_VARIABLE_ProcModeErrorMap_1_92, &STATE_VARIABLE_ProcModeErrorMap_1_45, &UniqueChanged_85, &UniqueSpecs_86);
                  mercury__bool__or_3_p_0(UniqueChanged_85, STATE_VARIABLE_Changed_1_94, &HeadChanged_29);
                  HeadSpecs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0), ModeSpecs_76, UniqueSpecs_86);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              hlds__hlds_module__module_info_make_pred_id_invalid_3_p_0(PredId_70, STATE_VARIABLE_ModuleInfo_2_91, &STATE_VARIABLE_ModuleInfo_2_46);
              HeadSpecs_30 = ModeSpecs_76;
              HeadChanged_29 = STATE_VARIABLE_Changed_1_94;
              STATE_VARIABLE_OldPredIdTable_1_44 = STATE_VARIABLE_OldPredIdTable_0_35;
              STATE_VARIABLE_ProcModeErrorMap_1_45 = STATE_VARIABLE_ProcModeErrorMap_1_92;
            }
            break;
        }
        mercury__bool__or_3_p_0(HeadChanged_29, STATE_VARIABLE_Changed_0_31, &STATE_VARIABLE_Changed_1_47);
        STATE_VARIABLE_Specs_1_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0), HeadSpecs_30, STATE_VARIABLE_Specs_0_33);
      }
      else
      {
        STATE_VARIABLE_ModuleInfo_2_46 = STATE_VARIABLE_ModuleInfo_1_41;
        STATE_VARIABLE_ProcModeErrorMap_1_45 = STATE_VARIABLE_ProcModeErrorMap_0_37;
        STATE_VARIABLE_OldPredIdTable_1_44 = STATE_VARIABLE_OldPredIdTable_0_35;
        STATE_VARIABLE_Specs_1_48 = STATE_VARIABLE_Specs_0_33;
        STATE_VARIABLE_Changed_1_47 = STATE_VARIABLE_Changed_0_31;
      }
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_Changed_0_31 = STATE_VARIABLE_Changed_1_47;
      next_value_of_STATE_VARIABLE_Specs_0_33 = STATE_VARIABLE_Specs_1_48;
      next_value_of_STATE_VARIABLE_OldPredIdTable_0_35 = STATE_VARIABLE_OldPredIdTable_1_44;
      next_value_of_STATE_VARIABLE_ProcModeErrorMap_0_37 = STATE_VARIABLE_ProcModeErrorMap_1_45;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_39 = STATE_VARIABLE_ModuleInfo_2_46;
      STATE_VARIABLE_Changed_0_31 = next_value_of_STATE_VARIABLE_Changed_0_31;
      STATE_VARIABLE_Specs_0_33 = next_value_of_STATE_VARIABLE_Specs_0_33;
      STATE_VARIABLE_OldPredIdTable_0_35 = next_value_of_STATE_VARIABLE_OldPredIdTable_0_35;
      STATE_VARIABLE_ProcModeErrorMap_0_37 = next_value_of_STATE_VARIABLE_ProcModeErrorMap_0_37;
      STATE_VARIABLE_ModuleInfo_0_39 = next_value_of_STATE_VARIABLE_ModuleInfo_0_39;
      continue;
    }
    else
    {
      *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
      *STATE_VARIABLE_ProcModeErrorMap_38 = STATE_VARIABLE_ProcModeErrorMap_0_37;
      *STATE_VARIABLE_OldPredIdTable_36 = STATE_VARIABLE_OldPredIdTable_0_35;
      *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
      *STATE_VARIABLE_Changed_32 = STATE_VARIABLE_Changed_0_31;
    }
    break;
  }
}

void MR_CALL 
check_hlds__modes__modecheck_proc_general_10_p_0(
  MR_Word WhatToCheck_11,
  MR_Word MayChangeCalledProc_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * STATE_VARIABLE_ModuleInfo_22,
  MR_Word STATE_VARIABLE_ProcModeErrorMap_0_23,
  MR_Word * STATE_VARIABLE_ProcModeErrorMap_24,
  MR_Word * Changed_17,
  MR_Word * Specs_18)
{
  MR_bool succeeded;
  MR_Word ProcInfo_20;
  MR_Word ProcModeErrors_28;
  MR_Word CanProcess_29;
  MR_Word _PredInfo_19;

  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_21, PredId_13, ProcId_14, &_PredInfo_19, &ProcInfo_20);
  check_hlds__mode_info__look_up_proc_mode_errors_raw_4_p_0(STATE_VARIABLE_ProcModeErrorMap_0_23, PredId_13, ProcId_14, &ProcModeErrors_28);
  hlds__hlds_proc__proc_info_get_can_process_2_p_0(ProcInfo_20, &CanProcess_29);
  succeeded = (ProcModeErrors_28 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (CanProcess_29 == (MR_Integer) 1);
  if (succeeded)
    check_hlds__modes__definitely_modecheck_proc_12_p_0(WhatToCheck_11, MayChangeCalledProc_12, PredId_13, ProcId_14, ProcInfo_20, STATE_VARIABLE_ModuleInfo_0_21, STATE_VARIABLE_ModuleInfo_22, STATE_VARIABLE_ProcModeErrorMap_0_23, STATE_VARIABLE_ProcModeErrorMap_24, (MR_Integer) 0, Changed_17, Specs_18);
  else
  {
    *Specs_18 = (MR_Word) ((MR_Unsigned) 0U);
    *Changed_17 = (MR_Integer) 0;
    *STATE_VARIABLE_ProcModeErrorMap_24 = STATE_VARIABLE_ProcModeErrorMap_0_23;
    *STATE_VARIABLE_ModuleInfo_22 = STATE_VARIABLE_ModuleInfo_0_21;
  }
}

static MR_Box MR_CALL 
check_hlds__modes__definitely_modecheck_proc_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = check_hlds__mode_errors__mode_warning_info_to_spec_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__modes__definitely_modecheck_proc_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = check_hlds__mode_errors__mode_error_info_to_spec_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__modes__definitely_modecheck_proc_12_p_0(
  MR_Word WhatToCheck_13,
  MR_Word MayChangeCalledProc_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word ProcInfo0_17,
  MR_Word STATE_VARIABLE_ModuleInfo_0_30,
  MR_Word * STATE_VARIABLE_ModuleInfo_31,
  MR_Word STATE_VARIABLE_ProcModeErrorMap_0_32,
  MR_Word * STATE_VARIABLE_ProcModeErrorMap_33,
  MR_Word STATE_VARIABLE_Changed_0_34,
  MR_Word * STATE_VARIABLE_Changed_35,
  MR_Word * Specs_21)
{
  MR_bool succeeded;
  MR_Word PredInfo0_22;
  MR_Word ProcInfo_23;
  MR_Word ClausesInfo_24;
  MR_Word PredInfo1_25;
  MR_Word ProcMap1_26;
  MR_Word ProcMap_27;
  MR_Word PredInfo2_28;
  MR_Word PredInfo_29;
  MR_Word STATE_VARIABLE_ModuleInfo_1_36;
  MR_Word Markers_39;
  MR_Word InferModes_40;
  MR_Word IsUnifyPred_41;
  MR_Word Origin_42;
  MR_Word ClausesInfo0_43;
  MR_Word Clauses_44;
  MR_Word Context_48;
  MR_Word HeadVars_49;
  MR_Word ArgModes0_50;
  MR_Word ArgLives0_51;
  MR_Word ArgInitialInsts_52;
  MR_Word InstAL_53;
  MR_Word InstMap0_54;
  MR_Word LiveVarsList_55;
  MR_Word LiveVars_56;
  MR_Word HeadInstVars_57;
  MR_Word MaybeDebugFlags_58;
  MR_Word BodyGoal0_62;
  MR_Word ArgFinalInsts0_63;
  MR_Word BodyGoal_64;
  MR_Word ArgFinalInsts_65;
  MR_Word ModeErrors_66;
  MR_Word ArgModes_77;
  MR_Word VarTable_78;
  MR_Word NeedToRequantify_79;
  MR_Word STATE_VARIABLE_ModeInfo_1_81;
  MR_Word STATE_VARIABLE_ModeInfo_2_82;
  MR_Word STATE_VARIABLE_ProcInfo_1_83;
  MR_Word STATE_VARIABLE_ModeInfo_3_84;
  MR_Word STATE_VARIABLE_ProcInfo_2_91;
  MR_Word STATE_VARIABLE_ProcInfo_3_92;
  MR_Word STATE_VARIABLE_ProcInfo_4_93;
  MR_Word Body1_112;
  MR_Word ArgFinalInsts1_113;
  MR_Word ModeInfo1_114;
  MR_Word ModeErrors1_115;
  MR_Word _ItemNumbers_45;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_30, PredId_15, &PredInfo0_22);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_22, &Markers_39);
  succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_39, (MR_Integer) 3);
  if (succeeded)
    InferModes_40 = (MR_Integer) 1;
  else
    InferModes_40 = (MR_Integer) 0;
  succeeded = hlds__hlds_pred_tests__is_unify_pred_1_p_0(PredInfo0_22);
  if (succeeded)
    IsUnifyPred_41 = (MR_Integer) 1;
  else
    IsUnifyPred_41 = (MR_Integer) 0;
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_22, &Origin_42);
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_22, &ClausesInfo0_43);
  hlds__hlds_clauses__clauses_info_clauses_4_p_0(&Clauses_44, &_ItemNumbers_45, ClausesInfo0_43, &ClausesInfo_24);
  if ((Clauses_44 == (MR_Word) ((MR_Unsigned) 0U)))
    hlds__hlds_proc__proc_info_get_context_2_p_0(ProcInfo0_17, &Context_48);
  else
  {
    MR_Word FirstClause_46 = ((MR_Word) ((MR_hl_field(1, Clauses_44, 0))));

    Context_48 = ((MR_Word) ((MR_hl_field(0, FirstClause_46, 3))));
  }
  hlds__hlds_proc__proc_info_get_headvars_2_p_0(ProcInfo0_17, &HeadVars_49);
  hlds__hlds_proc__proc_info_get_argmodes_2_p_0(ProcInfo0_17, &ArgModes0_50);
  hlds__hlds_proc_util__proc_info_arglives_3_p_0(STATE_VARIABLE_ModuleInfo_0_30, ProcInfo0_17, &ArgLives0_51);
  hlds__mode_util__mode_list_get_initial_insts_3_p_0(STATE_VARIABLE_ModuleInfo_0_30, ArgModes0_50, &ArgInitialInsts_52);
  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__modes_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), HeadVars_49, ArgInitialInsts_52, &InstAL_53);
  InstMap0_54 = hlds__instmap__instmap_from_assoc_list_1_f_0(InstAL_53);
  hlds__mode_util__get_live_vars_3_p_0(HeadVars_49, ArgLives0_51, &LiveVarsList_55);
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveVarsList_55, &LiveVars_56);
  hlds__mode_util__get_constrained_inst_vars_3_p_0(STATE_VARIABLE_ModuleInfo_0_30, ArgModes0_50, &HeadInstVars_57);
  check_hlds__mode_info__mode_info_init_11_p_0(STATE_VARIABLE_ModuleInfo_0_30, STATE_VARIABLE_ProcModeErrorMap_0_32, PredId_15, ProcId_16, Context_48, LiveVars_56, HeadInstVars_57, InstMap0_54, WhatToCheck_13, MayChangeCalledProc_14, &STATE_VARIABLE_ModeInfo_1_81);
  check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(STATE_VARIABLE_Changed_0_34, STATE_VARIABLE_ModeInfo_1_81, &STATE_VARIABLE_ModeInfo_2_82);
  check_hlds__mode_info__mode_info_get_debug_modes_2_p_0(STATE_VARIABLE_ModeInfo_2_82, &MaybeDebugFlags_58);
  if ((MaybeDebugFlags_58 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_ProcInfo_1_83 = ProcInfo0_17;
  else
  {
    MR_Word DebugFlags_59 = ((MR_Word) ((MR_hl_field(1, MaybeDebugFlags_58, 0))));
    MR_Word DebugGoalIds_60 = ((((MR_Unsigned) ((MR_hl_field(0, DebugFlags_59, 2))) >> 1)) & (MR_Integer) 1);

    switch (DebugGoalIds_60) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word _ContainingGoalMap_61;

          hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(STATE_VARIABLE_ModuleInfo_0_30, &_ContainingGoalMap_61, ProcInfo0_17, &STATE_VARIABLE_ProcInfo_1_83);
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_ProcInfo_1_83 = ProcInfo0_17;
        break;
    }
  }
  hlds__hlds_proc__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_1_83, &BodyGoal0_62);
  hlds__mode_util__mode_list_get_final_insts_3_p_0(STATE_VARIABLE_ModuleInfo_0_30, ArgModes0_50, &ArgFinalInsts0_63);
  check_hlds__modes__do_modecheck_proc_body_15_p_0(STATE_VARIABLE_ModuleInfo_0_30, WhatToCheck_13, InferModes_40, IsUnifyPred_41, Markers_39, PredId_15, ProcId_16, BodyGoal0_62, &Body1_112, HeadVars_49, InstMap0_54, ArgFinalInsts0_63, &ArgFinalInsts1_113, STATE_VARIABLE_ModeInfo_2_82, &ModeInfo1_114);
  check_hlds__mode_info__mode_info_get_errors_2_p_0(ModeInfo1_114, &ModeErrors1_115);
  if ((ModeErrors1_115 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    BodyGoal_64 = Body1_112;
    ArgFinalInsts_65 = ArgFinalInsts1_113;
    STATE_VARIABLE_ModeInfo_3_84 = ModeInfo1_114;
  }
  else
  {
    MR_Word HadFromGroundTerm_118;

    check_hlds__mode_info__mode_info_get_had_from_ground_term_2_p_0(ModeInfo1_114, &HadFromGroundTerm_118);
    switch (HadFromGroundTerm_118) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          BodyGoal_64 = Body1_112;
          ArgFinalInsts_65 = ArgFinalInsts1_113;
          STATE_VARIABLE_ModeInfo_3_84 = ModeInfo1_114;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word ModeInfo2_119;

          check_hlds__mode_info__mode_info_set_make_ground_terms_unique_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_2_82, &ModeInfo2_119);
          check_hlds__modes__do_modecheck_proc_body_15_p_0(STATE_VARIABLE_ModuleInfo_0_30, WhatToCheck_13, InferModes_40, IsUnifyPred_41, Markers_39, PredId_15, ProcId_16, BodyGoal0_62, &BodyGoal_64, HeadVars_49, InstMap0_54, ArgFinalInsts0_63, &ArgFinalInsts_65, ModeInfo2_119, &STATE_VARIABLE_ModeInfo_3_84);
        }
        break;
    }
  }
  check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_3_84, &ModeErrors_66);
  switch (InferModes_40) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        check_hlds__mode_info__set_proc_mode_errors_5_p_0(PredId_15, ProcId_16, ModeErrors_66, STATE_VARIABLE_ProcModeErrorMap_0_32, STATE_VARIABLE_ProcModeErrorMap_33);
        *Specs_21 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_85;

        succeeded = ((MR_tag((MR_Word) Origin_42)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_85 = ((MR_Word) ((MR_hl_field(1, Origin_42, 0))));
          succeeded = ((((MR_tag((MR_Word) Var_85)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_85, 0)))) == (MR_Integer) 1)));
        }
        if (succeeded)
          *Specs_21 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word AllErrorSpecs_70;
          MR_Word ErrorSpecs_73;
          MR_Word StateVarWarningSpecs_74;
          MR_Word ModeWarnings_75;
          MR_Word WarningSpecs_76;
          MR_Word Var_86;
          MR_Word Var_88;
          MR_Word Var_89;
          MR_Word Var_90;

          {
            Var_86 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_86, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_4[1]));
            MR_hl_field(0, Var_86, 1) = ((MR_Box) (check_hlds__modes__definitely_modecheck_proc_12_p_0_1));
            MR_hl_field(0, Var_86, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_86, 3) = ((MR_Box) (STATE_VARIABLE_ModeInfo_3_84));
          }
          AllErrorSpecs_70 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0), Var_86, ModeErrors_66);
          if ((AllErrorSpecs_70 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            ErrorSpecs_73 = (MR_Word) ((MR_Unsigned) 0U);
            StateVarWarningSpecs_74 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word ErrorSpec_71 = ((MR_Word) ((MR_hl_field(1, AllErrorSpecs_70, 0))));

            {
              ErrorSpecs_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ErrorSpecs_73, 0) = ((MR_Box) (ErrorSpec_71));
              MR_hl_field(1, ErrorSpecs_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            hlds__hlds_proc__proc_info_get_statevar_warnings_2_p_0(STATE_VARIABLE_ProcInfo_1_83, &StateVarWarningSpecs_74);
          }
          check_hlds__mode_info__mode_info_get_warnings_2_p_0(STATE_VARIABLE_ModeInfo_3_84, &ModeWarnings_75);
          {
            Var_88 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_88, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_4[2]));
            MR_hl_field(0, Var_88, 1) = ((MR_Box) (check_hlds__modes__definitely_modecheck_proc_12_p_0_2));
            MR_hl_field(0, Var_88, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_88, 3) = ((MR_Box) (STATE_VARIABLE_ModeInfo_3_84));
          }
          WarningSpecs_76 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0), Var_88, ModeWarnings_75);
          Var_90 = (MR_Word) (StateVarWarningSpecs_74);
          Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0), WarningSpecs_76, Var_90);
          *Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0), ErrorSpecs_73, Var_89);
        }
        *STATE_VARIABLE_ProcModeErrorMap_33 = STATE_VARIABLE_ProcModeErrorMap_0_32;
      }
      break;
  }
  parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(ArgInitialInsts_52, ArgFinalInsts_65, &ArgModes_77);
  check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(STATE_VARIABLE_ModeInfo_3_84, STATE_VARIABLE_Changed_35);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_3_84, &STATE_VARIABLE_ModuleInfo_1_36);
  check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_3_84, &VarTable_78);
  check_hlds__mode_info__mode_info_get_need_to_requantify_2_p_0(STATE_VARIABLE_ModeInfo_3_84, &NeedToRequantify_79);
  hlds__hlds_proc__proc_info_set_goal_3_p_0(BodyGoal_64, STATE_VARIABLE_ProcInfo_1_83, &STATE_VARIABLE_ProcInfo_2_91);
  hlds__hlds_proc__proc_info_set_var_table_3_p_0(VarTable_78, STATE_VARIABLE_ProcInfo_2_91, &STATE_VARIABLE_ProcInfo_3_92);
  hlds__hlds_proc__proc_info_set_argmodes_3_p_0(ArgModes_77, STATE_VARIABLE_ProcInfo_3_92, &STATE_VARIABLE_ProcInfo_4_93);
  switch (NeedToRequantify_79) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      ProcInfo_23 = STATE_VARIABLE_ProcInfo_4_93;
      break;
    case (MR_Integer) 0:
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_4_93, &ProcInfo_23);
      break;
  }
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_1_36, PredId_15, &PredInfo1_25);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo1_25, &ProcMap1_26);
  mercury__map__det_update_4_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_16)), ((MR_Box) (ProcInfo_23)), ProcMap1_26, &ProcMap_27);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcMap_27, PredInfo1_25, &PredInfo2_28);
  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_24, PredInfo2_28, &PredInfo_29);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_15, PredInfo_29, STATE_VARIABLE_ModuleInfo_1_36, STATE_VARIABLE_ModuleInfo_31);
}

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_Case_16;
  MR_Word conv9_STATE_VARIABLE_ModeInfo_31;

  check_hlds__modes__unique_modecheck_clause_switch_9_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), &conv10_Case_16, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_ModeInfo_31);
  *wrapper_arg_2 = ((MR_Box) (conv10_Case_16));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_ModeInfo_31));
}

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_Disjunct_20;
  MR_Word conv6_STATE_VARIABLE_ModeInfo_26;

  check_hlds__modes__unique_modecheck_clause_disj_11_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) ((MR_hl_field(0, closure, 9)))), ((MR_Word) (wrapper_arg_1)), &conv7_Disjunct_20, ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_ModeInfo_26);
  *wrapper_arg_2 = ((MR_Box) (conv7_Disjunct_20));
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_ModeInfo_26));
}

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_Case_16;
  MR_Word conv3_STATE_VARIABLE_ModeInfo_31;

  check_hlds__modes__modecheck_clause_switch_9_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), &conv4_Case_16, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_ModeInfo_31);
  *wrapper_arg_2 = ((MR_Box) (conv4_Case_16));
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_ModeInfo_31));
}

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Disjunct_14;
  MR_Word conv0_STATE_VARIABLE_ModeInfo_20;

  check_hlds__modes__modecheck_clause_disj_8_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv1_Disjunct_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ModeInfo_20);
  *wrapper_arg_2 = ((MR_Box) (conv1_Disjunct_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ModeInfo_20));
}

static MR_bool MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__type_util__var_is_or_may_contain_solver_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word WhatToCheck_17,
  MR_Word InferModes_18,
  MR_Word IsUnifyPred_19,
  MR_Word Markers_20,
  MR_Word PredId_21,
  MR_Integer ProcId_22,
  MR_Word Body0_23,
  MR_Word * Body_24,
  MR_Word HeadVars_25,
  MR_Word InstMap0_26,
  MR_Word ArgFinalInsts0_27,
  MR_Word * ArgFinalInsts_28,
  MR_Word STATE_VARIABLE_ModeInfo_0_64,
  MR_Word * STATE_VARIABLE_ModeInfo_65)
{
  MR_bool succeeded;
  MR_String CheckpointMsg_30;
  MR_Word BodyGoalExpr0_31;
  MR_Word BodyGoalInfo0_32;
  MR_Integer Var_69;
  MR_Integer Var_72;
  MR_String Var_135;
  MR_String Var_143;
  MR_String Var_144;
  MR_String Var_151;
  MR_Word ClausesForm0_36;
  MR_Word BodyNonLocals_42;
  MR_Word TypeInfo_105_105;
  MR_Word TypeCtorInfo_107_107;
  MR_Word VarTable0_43;
  MR_Word SolverNonLocals_44;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;

  Var_69 = hlds__pred_proc_id__pred_id_to_int_1_f_0(PredId_21);
  Var_72 = hlds__pred_proc_id__proc_id_to_int_1_f_0(ProcId_22);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__modes_scalar_common_3[2]), Var_72, &Var_135);
  Var_143 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_135);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__modes_scalar_common_3[2]), Var_69, &Var_144);
  Var_151 = mercury__string__f_43_43_2_f_0(Var_144, Var_143);
  CheckpointMsg_30 = mercury__string__f_43_43_2_f_0((MR_String) "procedure_", Var_151);
  BodyGoalExpr0_31 = ((MR_Word) ((MR_hl_field(0, Body0_23, 0))));
  BodyGoalInfo0_32 = ((MR_Word) ((MR_hl_field(0, Body0_23, 1))));
  succeeded = (InferModes_18 == (MR_Integer) 0);
  if (succeeded)
  {
    Var_74 = (MR_Integer) 24;
    succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_20, Var_74);
    if (succeeded)
    {
      if (((((MR_tag((MR_Word) BodyGoalExpr0_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BodyGoalExpr0_31, 0)))) == (MR_Integer) 3))))
      {
        MR_Word Disjuncts0_33 = ((MR_Word) ((MR_hl_field(3, BodyGoalExpr0_31, 1))));

        succeeded = (Disjuncts0_33 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          {
            ClausesForm0_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ClausesForm0_36, 0) = ((MR_Box) (Disjuncts0_33));
          }
          succeeded = MR_TRUE;
        }
      }
      else
      if (((((MR_tag((MR_Word) BodyGoalExpr0_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BodyGoalExpr0_31, 0)))) == (MR_Integer) 4))))
      {
        MR_Word SwitchVar0_37 = ((MR_Word) ((MR_hl_field(3, BodyGoalExpr0_31, 1))));
        MR_Word CanFail0_38 = ((MR_Unsigned) ((MR_hl_field(3, BodyGoalExpr0_31, 2))) & (MR_Integer) 1);
        MR_Word Cases0_39 = ((MR_Word) ((MR_hl_field(3, BodyGoalExpr0_31, 3))));

        succeeded = (Cases0_39 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          {
            ClausesForm0_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ClausesForm0_36, 0) = ((MR_Box) (SwitchVar0_37));
            MR_hl_field(1, ClausesForm0_36, 1) = (MR_Box) ((MR_Unsigned) (CanFail0_38));
            MR_hl_field(1, ClausesForm0_36, 2) = ((MR_Box) (Cases0_39));
          }
          succeeded = MR_TRUE;
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        BodyNonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(BodyGoalInfo0_32);
        check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_64, &VarTable0_43);
        TypeInfo_105_105 = (MR_Word) (&check_hlds__modes_scalar_common_1[2]);
        TypeCtorInfo_107_107 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        {
          Var_75 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_75, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_4[0]));
          MR_hl_field(0, Var_75, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_1));
          MR_hl_field(0, Var_75, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_75, 3) = ((MR_Box) (ModuleInfo_16));
          MR_hl_field(0, Var_75, 4) = ((MR_Box) (VarTable0_43));
        }
        Var_76 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_107_107, BodyNonLocals_42);
        SolverNonLocals_44 = mercury__list__filter_2_f_0(TypeInfo_105_105, Var_75, Var_76);
        succeeded = (SolverNonLocals_44 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
  if (succeeded)
  {
    MR_Word BodyContext_45;
    MR_Word NewGoalExpr_49;
    MR_Word HeadVarFinalInsts_59;
    MR_Word FinalInstMap_60;
    MR_Word DeltaInstMap_61;
    MR_Word BodyGoalInfo_62;
    MR_Word STATE_VARIABLE_ModeInfo_1_77;

    BodyContext_45 = hlds__hlds_goal__goal_info_get_context_1_f_0(BodyGoalInfo0_32);
    succeeded = mercury__term_context__is_dummy_context_1_p_0(BodyContext_45);
    if (succeeded)
      STATE_VARIABLE_ModeInfo_1_77 = STATE_VARIABLE_ModeInfo_0_64;
    else
      check_hlds__mode_info__mode_info_set_context_3_p_0(BodyContext_45, STATE_VARIABLE_ModeInfo_0_64, &STATE_VARIABLE_ModeInfo_1_77);
    switch (WhatToCheck_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        if (((MR_tag((MR_Word) ClausesForm0_36)) == (MR_Integer) 0))
        {
          MR_Word Disjuncts1_46 = ((MR_Word) ((MR_hl_field(0, ClausesForm0_36, 0))));
          MR_Word Disjuncts2_47;
          MR_Word Disjuncts_48;
          MR_Word Var_78;
          MR_Box conv2_STATE_VARIABLE_ModeInfo_65;

          hlds__goal_transform__flatten_disj_2_p_0(Disjuncts1_46, &Disjuncts2_47);
          {
            Var_78 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_78, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_5[0]));
            MR_hl_field(0, Var_78, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_2));
            MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(0, Var_78, 3) = ((MR_Box) (CheckpointMsg_30));
            MR_hl_field(0, Var_78, 4) = ((MR_Box) (HeadVars_25));
            MR_hl_field(0, Var_78, 5) = ((MR_Box) (InstMap0_26));
            MR_hl_field(0, Var_78, 6) = ((MR_Box) (ArgFinalInsts0_27));
          }
          mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0), Var_78, Disjuncts2_47, &Disjuncts_48, ((MR_Box) (STATE_VARIABLE_ModeInfo_1_77)), &conv2_STATE_VARIABLE_ModeInfo_65);
          *STATE_VARIABLE_ModeInfo_65 = ((MR_Word) (conv2_STATE_VARIABLE_ModeInfo_65));
          {
            NewGoalExpr_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, NewGoalExpr_49, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, NewGoalExpr_49, 1) = ((MR_Box) (Disjuncts_48));
          }
        }
        else
        {
          MR_Word SwitchVar_50 = ((MR_Word) ((MR_hl_field(1, ClausesForm0_36, 0))));
          MR_Word CanFail_51 = ((MR_Unsigned) ((MR_hl_field(1, ClausesForm0_36, 1))) & (MR_Integer) 1);
          MR_Word Cases1_52 = ((MR_Word) ((MR_hl_field(1, ClausesForm0_36, 2))));
          MR_Word Cases_53;
          MR_Word Var_80;
          MR_Box conv5_STATE_VARIABLE_ModeInfo_65;

          {
            Var_80 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_80, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[0]));
            MR_hl_field(0, Var_80, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_3));
            MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 5));
            MR_hl_field(0, Var_80, 3) = ((MR_Box) (CheckpointMsg_30));
            MR_hl_field(0, Var_80, 4) = ((MR_Box) (HeadVars_25));
            MR_hl_field(0, Var_80, 5) = ((MR_Box) (InstMap0_26));
            MR_hl_field(0, Var_80, 6) = ((MR_Box) (ArgFinalInsts0_27));
            MR_hl_field(0, Var_80, 7) = ((MR_Box) (SwitchVar_50));
          }
          mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0), Var_80, Cases1_52, &Cases_53, ((MR_Box) (STATE_VARIABLE_ModeInfo_1_77)), &conv5_STATE_VARIABLE_ModeInfo_65);
          *STATE_VARIABLE_ModeInfo_65 = ((MR_Word) (conv5_STATE_VARIABLE_ModeInfo_65));
          {
            NewGoalExpr_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, NewGoalExpr_49, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, NewGoalExpr_49, 1) = ((MR_Box) (SwitchVar_50));
            MR_hl_field(3, NewGoalExpr_49, 2) = (MR_Box) ((MR_Unsigned) (CanFail_51));
            MR_hl_field(3, NewGoalExpr_49, 3) = ((MR_Box) (Cases_53));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word NondetLiveVars0_54;
          MR_Word Detism_55;
          MR_Word NonLocals_56;
          MR_Word SolnCount_58;
          MR_Word STATE_VARIABLE_ModeInfo_4_83;
          MR_Word Var_57;

          check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(STATE_VARIABLE_ModeInfo_1_77, &NondetLiveVars0_54);
          Detism_55 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(BodyGoalInfo0_32);
          NonLocals_56 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(BodyGoalInfo0_32);
          parse_tree__prog_data__determinism_components_3_p_0(Detism_55, &Var_57, &SolnCount_58);
          switch (SolnCount_58) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 3:
              STATE_VARIABLE_ModeInfo_4_83 = STATE_VARIABLE_ModeInfo_1_77;
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 1:
            case (MR_Integer) 0:
              {
                MR_Word Var_82;

                Var_82 = mercury__bag__init_0_f_0((MR_Word) (&check_hlds__modes_scalar_common_1[2]));
                check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(Var_82, STATE_VARIABLE_ModeInfo_1_77, &STATE_VARIABLE_ModeInfo_4_83);
              }
              break;
          }
          if (((MR_tag((MR_Word) ClausesForm0_36)) == (MR_Integer) 0))
          {
            MR_Word STATE_VARIABLE_ModeInfo_7_86;
            MR_Word Var_87;
            MR_Word Disjuncts1_98 = ((MR_Word) ((MR_hl_field(0, ClausesForm0_36, 0))));
            MR_Word Disjuncts2_99;
            MR_Word Disjuncts_100;
            MR_Box conv8_STATE_VARIABLE_ModeInfo_65;

            hlds__goal_transform__flatten_disj_2_p_0(Disjuncts1_98, &Disjuncts2_99);
            switch (SolnCount_58) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 3:
                {
                  MR_Word STATE_VARIABLE_ModeInfo_5_84;
                  MR_Word STATE_VARIABLE_ModeInfo_6_85;

                  check_hlds__mode_info__mode_info_add_live_vars_3_p_0(NonLocals_56, STATE_VARIABLE_ModeInfo_4_83, &STATE_VARIABLE_ModeInfo_5_84);
                  check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(STATE_VARIABLE_ModeInfo_5_84, &STATE_VARIABLE_ModeInfo_6_85);
                  check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(NonLocals_56, STATE_VARIABLE_ModeInfo_6_85, &STATE_VARIABLE_ModeInfo_7_86);
                }
                break;
              case (MR_Integer) 2:
                STATE_VARIABLE_ModeInfo_7_86 = STATE_VARIABLE_ModeInfo_4_83;
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_ModeInfo_7_86 = STATE_VARIABLE_ModeInfo_4_83;
                break;
              case (MR_Integer) 0:
                STATE_VARIABLE_ModeInfo_7_86 = STATE_VARIABLE_ModeInfo_4_83;
                break;
            }
            {
              Var_87 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_87, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_7[0]));
              MR_hl_field(0, Var_87, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_4));
              MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 7));
              MR_hl_field(0, Var_87, 3) = ((MR_Box) (CheckpointMsg_30));
              MR_hl_field(0, Var_87, 4) = ((MR_Box) (HeadVars_25));
              MR_hl_field(0, Var_87, 5) = ((MR_Box) (InstMap0_26));
              MR_hl_field(0, Var_87, 6) = ((MR_Box) (ArgFinalInsts0_27));
              MR_hl_field(0, Var_87, 7) = ((MR_Box) (Detism_55));
              MR_hl_field(0, Var_87, 8) = ((MR_Box) (NonLocals_56));
              MR_hl_field(0, Var_87, 9) = ((MR_Box) (NondetLiveVars0_54));
            }
            mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0), Var_87, Disjuncts2_99, &Disjuncts_100, ((MR_Box) (STATE_VARIABLE_ModeInfo_7_86)), &conv8_STATE_VARIABLE_ModeInfo_65);
            *STATE_VARIABLE_ModeInfo_65 = ((MR_Word) (conv8_STATE_VARIABLE_ModeInfo_65));
            {
              NewGoalExpr_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, NewGoalExpr_49, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, NewGoalExpr_49, 1) = ((MR_Box) (Disjuncts_100));
            }
          }
          else
          {
            MR_Word Var_89;
            MR_Word SwitchVar_101 = ((MR_Word) ((MR_hl_field(1, ClausesForm0_36, 0))));
            MR_Word CanFail_102 = ((MR_Unsigned) ((MR_hl_field(1, ClausesForm0_36, 1))) & (MR_Integer) 1);
            MR_Word Cases1_103 = ((MR_Word) ((MR_hl_field(1, ClausesForm0_36, 2))));
            MR_Word Cases_104;
            MR_Box conv11_STATE_VARIABLE_ModeInfo_65;

            {
              Var_89 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_89, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[0]));
              MR_hl_field(0, Var_89, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_5));
              MR_hl_field(0, Var_89, 2) = ((MR_Box) ((MR_Integer) 5));
              MR_hl_field(0, Var_89, 3) = ((MR_Box) (CheckpointMsg_30));
              MR_hl_field(0, Var_89, 4) = ((MR_Box) (HeadVars_25));
              MR_hl_field(0, Var_89, 5) = ((MR_Box) (InstMap0_26));
              MR_hl_field(0, Var_89, 6) = ((MR_Box) (ArgFinalInsts0_27));
              MR_hl_field(0, Var_89, 7) = ((MR_Box) (SwitchVar_101));
            }
            mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0), Var_89, Cases1_103, &Cases_104, ((MR_Box) (STATE_VARIABLE_ModeInfo_4_83)), &conv11_STATE_VARIABLE_ModeInfo_65);
            *STATE_VARIABLE_ModeInfo_65 = ((MR_Word) (conv11_STATE_VARIABLE_ModeInfo_65));
            {
              NewGoalExpr_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, NewGoalExpr_49, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, NewGoalExpr_49, 1) = ((MR_Box) (SwitchVar_101));
              MR_hl_field(3, NewGoalExpr_49, 2) = (MR_Box) ((MR_Unsigned) (CanFail_102));
              MR_hl_field(3, NewGoalExpr_49, 3) = ((MR_Box) (Cases_104));
            }
          }
        }
        break;
    }
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__modes_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), HeadVars_25, ArgFinalInsts0_27, &HeadVarFinalInsts_59);
    FinalInstMap_60 = hlds__instmap__instmap_from_assoc_list_1_f_0(HeadVarFinalInsts_59);
    hlds__instmap__compute_instmap_delta_4_p_0(InstMap0_26, FinalInstMap_60, BodyNonLocals_42, &DeltaInstMap_61);
    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(DeltaInstMap_61, BodyGoalInfo0_32, &BodyGoalInfo_62);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Body_24 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (NewGoalExpr_49));
      MR_hl_field(0, base, 1) = ((MR_Box) (BodyGoalInfo_62));
    }
    *ArgFinalInsts_28 = ArgFinalInsts0_27;
  }
  else
  {
    MR_Word GroundMatchesBound_63;
    MR_Word STATE_VARIABLE_ModeInfo_10_92;
    MR_Word STATE_VARIABLE_ModeInfo_11_93;
    MR_Word STATE_VARIABLE_ModeInfo_13_96;
    MR_Word ModuleInfo_153;
    MR_Word Errors_154;
    MR_Word Changed0_157;
    MR_Word InstMap_158;
    MR_Word VarTable_159;
    MR_Word VarFinalInsts0_160;
    MR_Word ArgTypes_161;

    check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, CheckpointMsg_30, BodyGoalInfo0_32, STATE_VARIABLE_ModeInfo_0_64, &STATE_VARIABLE_ModeInfo_10_92);
    switch (WhatToCheck_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__modecheck_goal__modecheck_goal_4_p_0(Body0_23, Body_24, STATE_VARIABLE_ModeInfo_10_92, &STATE_VARIABLE_ModeInfo_11_93);
        break;
      case (MR_Integer) 1:
        check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Body0_23, Body_24, STATE_VARIABLE_ModeInfo_10_92, &STATE_VARIABLE_ModeInfo_11_93);
        break;
    }
    check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, CheckpointMsg_30, BodyGoalInfo0_32, STATE_VARIABLE_ModeInfo_11_93, &STATE_VARIABLE_ModeInfo_13_96);
    switch (IsUnifyPred_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        GroundMatchesBound_63 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        GroundMatchesBound_63 = (MR_Integer) 1;
        break;
    }
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_13_96, &ModuleInfo_153);
    check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_13_96, &Errors_154);
    if ((Errors_154 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      Changed0_157 = (MR_Integer) 0;
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_13_96, &InstMap_158);
    }
    else
    {
      Changed0_157 = (MR_Integer) 1;
      hlds__instmap__init_unreachable_1_p_0(&InstMap_158);
    }
    check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_13_96, &VarTable_159);
    hlds__instmap__instmap_lookup_vars_3_p_0(InstMap_158, HeadVars_25, &VarFinalInsts0_160);
    parse_tree__var_table__lookup_var_types_3_p_0(VarTable_159, HeadVars_25, &ArgTypes_161);
    switch (InferModes_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word PredId_162;
          MR_Integer ProcId_163;
          MR_Word ProcInfo_164;
          MR_Word ArgLives_165;
          MR_Word VarFinalInsts1_166;
          MR_Word Changed1_168;
          MR_Word Changed2_169;
          MR_Word Changed_170;
          MR_Word STATE_VARIABLE_ModeInfo_1_174;
          MR_Word Var_175;
          MR_Word Var_176;
          MR_Word Var_177;

          check_hlds__mode_info__mode_info_get_pred_id_2_p_0(STATE_VARIABLE_ModeInfo_13_96, &PredId_162);
          check_hlds__mode_info__mode_info_get_proc_id_2_p_0(STATE_VARIABLE_ModeInfo_13_96, &ProcId_163);
          hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_153, PredId_162, ProcId_163, &ProcInfo_164);
          hlds__hlds_proc_util__proc_info_arglives_3_p_0(ModuleInfo_153, ProcInfo_164, &ArgLives_165);
          check_hlds__modecheck_util__normalise_insts_4_p_0(ModuleInfo_153, ArgTypes_161, VarFinalInsts0_160, &VarFinalInsts1_166);
          check_hlds__modes__maybe_clobber_insts_3_p_0(VarFinalInsts1_166, ArgLives_165, ArgFinalInsts_28);
          check_hlds__modes__check_final_insts_10_p_0(InferModes_18, GroundMatchesBound_63, HeadVars_25, *ArgFinalInsts_28, ArgFinalInsts0_27, (MR_Integer) 1, (MR_Integer) 0, &Changed1_168, STATE_VARIABLE_ModeInfo_13_96, &STATE_VARIABLE_ModeInfo_1_174);
          check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(STATE_VARIABLE_ModeInfo_1_174, &Changed2_169);
          {
            Var_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_177, 0) = ((MR_Box) (Changed2_169));
            MR_hl_field(1, Var_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_176 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_176, 0) = ((MR_Box) (Changed1_168));
            MR_hl_field(1, Var_176, 1) = ((MR_Box) (Var_177));
          }
          {
            Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_175, 0) = ((MR_Box) (Changed0_157));
            MR_hl_field(1, Var_175, 1) = ((MR_Box) (Var_176));
          }
          mercury__bool__or_list_2_p_0(Var_175, &Changed_170);
          check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(Changed_170, STATE_VARIABLE_ModeInfo_1_174, STATE_VARIABLE_ModeInfo_65);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word _Changed1_171;

          check_hlds__modes__check_final_insts_10_p_0(InferModes_18, GroundMatchesBound_63, HeadVars_25, VarFinalInsts0_160, ArgFinalInsts0_27, (MR_Integer) 1, (MR_Integer) 0, &_Changed1_171, STATE_VARIABLE_ModeInfo_13_96, STATE_VARIABLE_ModeInfo_65);
          *ArgFinalInsts_28 = ArgFinalInsts0_27;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__modes__check_final_insts_10_p_0(
  MR_Word InferModes_11,
  MR_Word GroundMatchesBound_12,
  MR_Word Vars_13,
  MR_Word VarInsts_14,
  MR_Word ExpectedInsts_15,
  MR_Integer ArgNum_16,
  MR_Word STATE_VARIABLE_Changed_0_25,
  MR_Word * STATE_VARIABLE_Changed_26,
  MR_Word STATE_VARIABLE_ModeInfo_0_27,
  MR_Word * STATE_VARIABLE_ModeInfo_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Vars_13 == (MR_Word) ((MR_Unsigned) 0U));

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      succeeded = (VarInsts_14 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (ExpectedInsts_15 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      *STATE_VARIABLE_ModeInfo_28 = STATE_VARIABLE_ModeInfo_0_27;
      *STATE_VARIABLE_Changed_26 = STATE_VARIABLE_Changed_0_25;
    }
    else
    {
      MR_Word HeadVar_19;
      MR_Word TailVars_20;
      MR_Word HeadVarInst_21;
      MR_Word TailVarInsts_22;
      MR_Word HeadExpectedInst_23;
      MR_Word TailExpectedInsts_24;

      succeeded = (Vars_13 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadVar_19 = ((MR_Word) ((MR_hl_field(1, Vars_13, 0))));
        TailVars_20 = ((MR_Word) ((MR_hl_field(1, Vars_13, 1))));
        succeeded = (VarInsts_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadVarInst_21 = ((MR_Word) ((MR_hl_field(1, VarInsts_14, 0))));
          TailVarInsts_22 = ((MR_Word) ((MR_hl_field(1, VarInsts_14, 1))));
          succeeded = (ExpectedInsts_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadExpectedInst_23 = ((MR_Word) ((MR_hl_field(1, ExpectedInsts_15, 0))));
            TailExpectedInsts_24 = ((MR_Word) ((MR_hl_field(1, ExpectedInsts_15, 1))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Changed_1_29;
        MR_Word STATE_VARIABLE_ModeInfo_1_30;
        MR_Integer Var_31;
        MR_Word ModuleInfo_37;
        MR_Word VarTable_38;
        MR_Word Type_39;
        MR_Word next_value_of_Vars_13;
        MR_Word next_value_of_VarInsts_14;
        MR_Word next_value_of_ExpectedInsts_15;
        MR_Integer next_value_of_ArgNum_16;
        MR_Word next_value_of_STATE_VARIABLE_Changed_0_25;
        MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_27;

        check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_27, &ModuleInfo_37);
        check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_27, &VarTable_38);
        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_38, HeadVar_19, &Type_39);
        succeeded = hlds__inst_match__inst_matches_final_gmb_5_p_0(ModuleInfo_37, GroundMatchesBound_12, Type_39, HeadVarInst_21, HeadExpectedInst_23);
        if (succeeded)
        {
          STATE_VARIABLE_ModeInfo_1_30 = STATE_VARIABLE_ModeInfo_0_27;
          STATE_VARIABLE_Changed_1_29 = STATE_VARIABLE_Changed_0_25;
        }
        else
        {
          STATE_VARIABLE_Changed_1_29 = (MR_Integer) 1;
          switch (InferModes_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              STATE_VARIABLE_ModeInfo_1_30 = STATE_VARIABLE_ModeInfo_0_27;
              break;
            case (MR_Integer) 0:
              {
                MR_Word Reason_40;
                MR_Word WaitingVars_41;
                MR_Word ModeError_42;

                succeeded = hlds__inst_match__inst_matches_initial_4_p_0(ModuleInfo_37, Type_39, HeadVarInst_21, HeadExpectedInst_23);
                if (succeeded)
                  Reason_40 = (MR_Integer) 0;
                else
                {
                  {
                    MR_Word Var_43;
                    MR_Word Var_44;

                    succeeded = ((MR_tag((MR_Word) HeadExpectedInst_23)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Var_43 = ((MR_Unsigned) ((MR_hl_field(1, HeadExpectedInst_23, 0))) & (MR_Integer) 7);
                      Var_44 = ((MR_Word) ((MR_hl_field(1, HeadExpectedInst_23, 1))));
                      succeeded = (Var_43 == (MR_Integer) 0);
                      if (succeeded)
                        succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
                    }
                  }
                  if (!(succeeded))
                    succeeded = hlds__inst_match__inst_matches_initial_4_p_0(ModuleInfo_37, Type_39, HeadExpectedInst_23, HeadVarInst_21);
                  if (succeeded)
                    Reason_40 = (MR_Integer) 1;
                  else
                    Reason_40 = (MR_Integer) 2;
                }
                parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars_41);
                {
                  ModeError_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, ModeError_42, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                  MR_hl_field(3, ModeError_42, 1) = ((MR_Box) (ArgNum_16));
                  MR_hl_field(3, ModeError_42, 2) = ((MR_Box) (HeadVar_19));
                  MR_hl_field(3, ModeError_42, 3) = ((MR_Box) (HeadVarInst_21));
                  MR_hl_field(3, ModeError_42, 4) = ((MR_Box) (HeadExpectedInst_23));
                  MR_hl_field(3, ModeError_42, 5) = (MR_Box) ((MR_Unsigned) (Reason_40));
                }
                check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_41, ModeError_42, STATE_VARIABLE_ModeInfo_0_27, &STATE_VARIABLE_ModeInfo_1_30);
              }
              break;
          }
        }
        Var_31 = (MR_Integer) ((MR_Unsigned) ArgNum_16 + (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_Vars_13 = TailVars_20;
        next_value_of_VarInsts_14 = TailVarInsts_22;
        next_value_of_ExpectedInsts_15 = TailExpectedInsts_24;
        next_value_of_ArgNum_16 = Var_31;
        next_value_of_STATE_VARIABLE_Changed_0_25 = STATE_VARIABLE_Changed_1_29;
        next_value_of_STATE_VARIABLE_ModeInfo_0_27 = STATE_VARIABLE_ModeInfo_1_30;
        Vars_13 = next_value_of_Vars_13;
        VarInsts_14 = next_value_of_VarInsts_14;
        ExpectedInsts_15 = next_value_of_ExpectedInsts_15;
        ArgNum_16 = next_value_of_ArgNum_16;
        STATE_VARIABLE_Changed_0_25 = next_value_of_STATE_VARIABLE_Changed_0_25;
        STATE_VARIABLE_ModeInfo_0_27 = next_value_of_STATE_VARIABLE_ModeInfo_0_27;
        continue;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modes.check_final_insts\'/10", (MR_String) "length mismatch");
          return;
        }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__modes__maybe_clobber_insts_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modes.maybe_clobber_insts\'/3", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modes.maybe_clobber_insts\'/3", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word IsLive_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word IsLives_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Inst_18;
      MR_Word Insts_19;

      switch (IsLive_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Inst_18 = (MR_Word) (MR_mkword(1, &check_hlds__modes_scalar_common_1[26]));
          break;
        case (MR_Integer) 0:
          Inst_18 = Var_23;
          break;
      }
      check_hlds__modes__maybe_clobber_insts_3_p_0(Var_22, IsLives_17, &Insts_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Inst_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (Insts_19));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modes____Unify____clause_form_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modes____Compare____clause_form_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__modes____Unify____include_detism_on_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modes____Unify____include_detism_on_modes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modes____Compare____include_detism_on_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modes____Compare____include_detism_on_modes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__modes____Unify____is_proc_valid_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modes____Unify____is_proc_valid_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modes____Compare____is_proc_valid_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modes____Compare____is_proc_valid_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__modes____Unify____maybe_infer_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modes____Unify____maybe_infer_modes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modes____Compare____maybe_infer_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modes____Compare____maybe_infer_modes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__modes____Unify____maybe_unify_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modes____Unify____maybe_unify_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modes____Compare____maybe_unify_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modes____Compare____maybe_unify_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__modes__init(void)
{
}

void mercury__check_hlds__modes__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__modes__check_hlds__modes__type_ctor_info_clause_form_0);
  MR_register_type_ctor_info(&check_hlds__modes__check_hlds__modes__type_ctor_info_include_detism_on_modes_0);
  MR_register_type_ctor_info(&check_hlds__modes__check_hlds__modes__type_ctor_info_is_proc_valid_0);
  MR_register_type_ctor_info(&check_hlds__modes__check_hlds__modes__type_ctor_info_maybe_infer_modes_0);
  MR_register_type_ctor_info(&check_hlds__modes__check_hlds__modes__type_ctor_info_maybe_unify_pred_0);
}

void mercury__check_hlds__modes__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__modes__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.modes.
