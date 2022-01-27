/*
** Automatically generated from `modes.m'
** by the Mercury compiler,
** version rotd-2021-11-02
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.cse_detection.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.delay_partial_inst.mih"
#include "check_hlds.det_analysis.mih"
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.introduce_exists_casts.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_debug.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.modecheck_goal.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.switch_detection.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unique_modes.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"



struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s {
  MR_bool check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded;
  MR_Word check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcTable_74;
  jmp_buf check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__commit_0;
  MR_Word check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcInfo_85;
  MR_Word check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__Var_88;
  MR_Integer check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0___ProcId_76;
  MR_Box check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv2__ProcId_76;
  MR_Box check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv1_ProcInfo_85;
};


static const MR_FA_TypeInfo_Struct1 check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

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
check_hlds__modes__IntroducedFrom__func__report_mode_inference_message__1851__1_1_f_0(
  MR_Word LambdaHeadVar__1_46);

static MR_bool MR_CALL 
check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1270__1_2_p_0(
  MR_Word DetismSpecs_37,
  MR_Word HeadVar__2_58);

static void MR_CALL 
check_hlds__modes____Compare____maybe_unify_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modes____Unify____maybe_unify_pred_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__modes____Compare____maybe_infer_modes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modes____Unify____maybe_infer_modes_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__modes____Compare____include_detism_on_modes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modes____Unify____include_detism_on_modes_0_0(
  MR_Word HeadVar__2_1,
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
  MR_Word STATE_VARIABLE_ModeInfo_0_26,
  MR_Word * STATE_VARIABLE_ModeInfo_27);

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
  MR_Word STATE_VARIABLE_ModeInfo_0_23,
  MR_Word * STATE_VARIABLE_ModeInfo_24);

static void MR_CALL 
check_hlds__modes__modecheck_clause_switch_9_p_0(
  MR_String CheckpointMsg_10,
  MR_Word HeadVars_11,
  MR_Word InstMap0_12,
  MR_Word ArgFinalInsts0_13,
  MR_Word Var_14,
  MR_Word Case0_15,
  MR_Word * Case_16,
  MR_Word STATE_VARIABLE_ModeInfo_0_26,
  MR_Word * STATE_VARIABLE_ModeInfo_27);

static void MR_CALL 
check_hlds__modes__modecheck_clause_disj_8_p_0(
  MR_String CheckpointMsg_9,
  MR_Word HeadVars_10,
  MR_Word InstMap0_11,
  MR_Word ArgFinalInsts0_12,
  MR_Word Disjunct0_13,
  MR_Word * Disjunct_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_17,
  MR_Word * STATE_VARIABLE_ModeInfo_18);

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0(
  MR_Word WhatToCheck_10,
  MR_Word MayChangeCalledProc_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_Changed_0_29,
  MR_Word * STATE_VARIABLE_Changed_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

static void MR_CALL 
check_hlds__modes__maybe_modecheck_procs_11_p_0(
  MR_Word WhatToCheck_1,
  MR_Word MayChangeCalledProc_2,
  MR_Word PredId_3,
  MR_Word ProcTable0_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7,
  MR_Word STATE_VARIABLE_Changed_0_8,
  MR_Word * STATE_VARIABLE_Changed_9,
  MR_Word HeadVar__10_10,
  MR_Word * HeadVar__11_11);

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
  MR_Word OldPredTable_5,
  MR_Word PredId_6,
  MR_Word PredTable0_7,
  MR_Word * PredTable_8);

static void MR_CALL 
check_hlds__modes__modecheck_final_insts_6_p_0(
  MR_Word InferModes_7,
  MR_Word HeadVars_8,
  MR_Word STATE_VARIABLE_FinalInsts_0_11,
  MR_Word * STATE_VARIABLE_FinalInsts_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_13,
  MR_Word * STATE_VARIABLE_ModeInfo_14);

static void MR_CALL 
check_hlds__modes__pred_check_eval_methods_and_main_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_3,
  MR_Word * STATE_VARIABLE_Specs_4);

static void MR_CALL 
check_hlds__modes__proc_check_eval_methods_and_main_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static MR_bool MR_CALL 
check_hlds__modes__only_nonunique_modes_2_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__modes__only_fully_in_out_modes_2_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0(
  MR_Word PredIds_9,
  MR_Integer NumIterationsLeft_10,
  MR_Word WhatToCheck_11,
  MR_Word MayChangeCalledProc_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word * SafeToContinue_14,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
check_hlds__modes__report_mode_inference_messages_for_preds_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word OutputDetism_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static MR_Box MR_CALL 
check_hlds__modes__report_mode_inference_messages_for_procs_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__modes__report_mode_inference_messages_for_procs_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word OutputDetism_2,
  MR_Word PredInfo_3,
  MR_Word Procs_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static MR_bool MR_CALL 
check_hlds__modes__modecheck_queued_procs_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__modes__modecheck_queued_procs_9_p_0(
  MR_Word HowToCheckGoal_10,
  MR_Word STATE_VARIABLE_OldPredTable_0_26,
  MR_Word * STATE_VARIABLE_OldPredTable_27,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word STATE_VARIABLE_Changed_0_30,
  MR_Word * STATE_VARIABLE_Changed_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33);

static MR_Box MR_CALL 
check_hlds__modes__definitely_modecheck_proc_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__modes__definitely_modecheck_proc_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__modes__definitely_modecheck_proc_10_p_0(
  MR_Word WhatToCheck_11,
  MR_Word MayChangeCalledProc_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word ProcInfo0_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_Changed_0_31,
  MR_Word * STATE_VARIABLE_Changed_32,
  MR_Word * Specs_18);

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


static /* final */ const MR_Box check_hlds__modes_scalar_common_1[63][2];

static /* final */ const MR_Box check_hlds__modes_scalar_common_2[6][3];

static /* final */ const MR_Box check_hlds__modes_scalar_common_3[4][1];

static /* final */ const MR_Box check_hlds__modes_scalar_common_4[3][6];

static /* final */ const MR_Box check_hlds__modes_scalar_common_5[1][11];

static /* final */ const MR_Box check_hlds__modes_scalar_common_6[2][12];

static /* final */ const MR_Box check_hlds__modes_scalar_common_7[1][14];

static /* final */ const MR_Box check_hlds__modes_scalar_common_8[2][5];

static /* final */ const MR_Box check_hlds__modes_scalar_common_9[2][7];




static /* final */ const MR_Box check_hlds__modes_scalar_common_1[63][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Mode analysis iteration limit exceeded."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "You may need to declare the modes explicitly"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or use the"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--mode-inference-iteration-limit"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option to increase the limit."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(The current limit is"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "iterations.)"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: no mode declaration for"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[10])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to enable mode inference.)"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[10])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--infer-modes"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(Use"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: no mode declaration for exported"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Sorry, not implemented:"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with partially instantiated modes."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[10])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration not allowed for procedure"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not currently implemented."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[10])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with partially instantiated modes"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Tabling of predicates/functions"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not allowed for procedure with unique modes."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[10])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which would destroy their uniqueness."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[10])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not allowed, as tabling requires copying arguments,"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Tabling of predicates/functions with unique modes"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "(di, uo)"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[16])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must have mode"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[48])))
  },
  /* row 51 */
  {
    ((MR_Box) (&check_hlds__modes_scalar_common_3[2])),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 11U)),
    ((MR_Box) (&check_hlds__modes_scalar_common_1[51]))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[50])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[53])))
  },
  /* row 55 */
  {
    ((MR_Box) (&check_hlds__modes_scalar_common_3[3])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) (&check_hlds__modes_scalar_common_1[55]))
  },
  /* row 57 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[35])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__modes_scalar_common_1[57]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 59 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[46])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__modes_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 61 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[22])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__modes_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__modes_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 3U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__modes_scalar_common_8[1])),
    ((MR_Box) (check_hlds__modes__report_mode_inference_messages_for_procs_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__modes_scalar_common_3[4][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 1 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "main"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "..."))
  },
};

static /* final */ const MR_Box check_hlds__modes_scalar_common_4[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__modes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__modes_scalar_common_5[1][11] = {
  /* row 0 */
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

static /* final */ const MR_Box check_hlds__modes_scalar_common_6[2][12] = {
  /* row 0 */
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_how_to_check_goal_0)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_may_change_called_proc_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__modes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__modes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__modes_scalar_common_7[1][14] = {
  /* row 0 */
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
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__modes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modes__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box check_hlds__modes_scalar_common_9[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__modes__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__modes__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&check_hlds__modes__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_0[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0)
};

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
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)
  }
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

static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_0[1] = {
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0
};

static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_1[1] = {
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1
};

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
  {     check_hlds__modes__check_hlds__modes__du_name_ordered_clause_form_0 },
  {     check_hlds__modes__check_hlds__modes__du_ptag_ordered_clause_form_0 },
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
  {     check_hlds__modes__check_hlds__modes__enum_name_ordered_include_detism_on_modes_0 },
  {     check_hlds__modes__check_hlds__modes__enum_ordinal_ordered_include_detism_on_modes_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__modes__check_hlds__modes__functor_number_map_include_detism_on_modes_0,

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
  {     check_hlds__modes__check_hlds__modes__enum_name_ordered_maybe_infer_modes_0 },
  {     check_hlds__modes__check_hlds__modes__enum_ordinal_ordered_maybe_infer_modes_0 },
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
  {     check_hlds__modes__check_hlds__modes__enum_name_ordered_maybe_unify_pred_0 },
  {     check_hlds__modes__check_hlds__modes__enum_ordinal_ordered_maybe_unify_pred_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__modes__check_hlds__modes__functor_number_map_maybe_unify_pred_0,

};

static MR_Word MR_CALL 
check_hlds__modes__IntroducedFrom__func__report_mode_inference_message__1851__1_1_f_0(
  MR_Word LambdaHeadVar__1_46)
{
  {
    MR_Word LambdaHeadVar__2_47;
    MR_Word I_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_46, (MR_Integer) 0))));
    MR_Word F_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_46, (MR_Integer) 1))));

    {
      LambdaHeadVar__2_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_47, 0) = ((MR_Box) (I_68));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_47, 1) = ((MR_Box) (F_69));
    }
    return LambdaHeadVar__2_47;
  }
}

static MR_bool MR_CALL 
check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1270__1_2_p_0(
  MR_Word DetismSpecs_37,
  MR_Word HeadVar__2_58)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__modes_scalar_common_1[0]), ((MR_Box) (DetismSpecs_37)), ((MR_Box) (HeadVar__2_58)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modes____Compare____maybe_unify_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
check_hlds__modes____Unify____maybe_unify_pred_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modes____Compare____maybe_infer_modes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
check_hlds__modes____Unify____maybe_infer_modes_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modes____Compare____include_detism_on_modes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
check_hlds__modes____Unify____include_detism_on_modes_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_22 == CastY_23);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modes_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_28)), ((MR_Box) (ArgY1_5)));
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word ArgY3_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word SubResult1_16;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modes_scalar_common_1[1]), &SubResult1_16, ((MR_Box) (Var_31)), ((MR_Box) (ArgY1_15)));
        succeeded = (SubResult1_16 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_16;
        else
        {
          MR_Word SubResult2_19;
          MR_Integer Var_32 = (MR_Integer) (Var_30);
          MR_Integer Var_33 = (MR_Integer) (ArgY2_18);

          succeeded = (Var_32 < Var_33);
          if (succeeded)
          {
            SubResult2_19 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_32 > Var_33);
            if (succeeded)
            {
              SubResult2_19 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult2_19 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult2_19;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modes_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_29)), ((MR_Box) (ArgY3_21)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_13_13 = (MR_Word) (&check_hlds__modes_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    else
    {
      MR_Word TypeInfo_14_14;
      MR_Word TypeInfo_15_15;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY2_8;
      MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_10;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
        ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        TypeInfo_14_14 = (MR_Word) (&check_hlds__modes_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
        if (succeeded)
        {
          succeeded = (ArgX2_7 == ArgY2_8);
          if (succeeded)
          {
            TypeInfo_15_15 = (MR_Word) (&check_hlds__modes_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
          }
        }
      }
    }
    return succeeded;
  }
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
  MR_Word STATE_VARIABLE_ModeInfo_0_26,
  MR_Word * STATE_VARIABLE_ModeInfo_27)
{
  {
    MR_bool succeeded;
    MR_Word MainConsId_18;
    MR_Word OtherConsIds_19;
    MR_Word Goal0_20;
    MR_Word InstMap1_21;
    MR_Word Goal1_22;
    MR_Word InstMap_23;
    MR_Word Goal_24;
    MR_Word STATE_VARIABLE_ModeInfo_29_29;
    MR_Word STATE_VARIABLE_ModeInfo_30_30;
    MR_Word STATE_VARIABLE_ModeInfo_31_31;
    MR_Word STATE_VARIABLE_ModeInfo_32_32;
    MR_Word STATE_VARIABLE_ModeInfo_34_34;
    MR_Word _ArgFinalInsts_25;

    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, CheckpointMsg_10, STATE_VARIABLE_ModeInfo_0_26, &STATE_VARIABLE_ModeInfo_29_29);
    MainConsId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_15, (MR_Integer) 0))));
    OtherConsIds_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_15, (MR_Integer) 1))));
    Goal0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_15, (MR_Integer) 2))));
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_12, STATE_VARIABLE_ModeInfo_29_29, &STATE_VARIABLE_ModeInfo_30_30);
    check_hlds__modecheck_util__modecheck_functors_test_5_p_0(Var_14, MainConsId_18, OtherConsIds_19, STATE_VARIABLE_ModeInfo_30_30, &STATE_VARIABLE_ModeInfo_31_31);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_31_31, &InstMap1_21);
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap1_21);
    if (succeeded)
      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Goal0_20, &Goal1_22, STATE_VARIABLE_ModeInfo_31_31, &STATE_VARIABLE_ModeInfo_32_32);
    else
    {
      Goal1_22 = hlds__make_goal__true_goal_0_f_0();
      STATE_VARIABLE_ModeInfo_32_32 = STATE_VARIABLE_ModeInfo_31_31;
    }
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_32_32, &InstMap_23);
    check_hlds__modecheck_util__fixup_instmap_switch_var_5_p_0(Var_14, InstMap0_12, InstMap_23, Goal1_22, &Goal_24);
    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, CheckpointMsg_10, STATE_VARIABLE_ModeInfo_32_32, &STATE_VARIABLE_ModeInfo_34_34);
    check_hlds__modes__modecheck_final_insts_6_p_0((MR_Integer) 0, HeadVars_11, ArgFinalInsts0_13, &_ArgFinalInsts_25, STATE_VARIABLE_ModeInfo_34_34, STATE_VARIABLE_ModeInfo_27);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Case_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_24));
    }
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
  MR_Word STATE_VARIABLE_ModeInfo_0_23,
  MR_Word * STATE_VARIABLE_ModeInfo_24)
{
  {
    MR_Word STATE_VARIABLE_ModeInfo_26_26;
    MR_Word STATE_VARIABLE_ModeInfo_27_27;
    MR_Word STATE_VARIABLE_ModeInfo_28_28;
    MR_Word STATE_VARIABLE_ModeInfo_29_29;
    MR_Word STATE_VARIABLE_ModeInfo_30_30;
    MR_Word STATE_VARIABLE_ModeInfo_32_32;
    MR_Word _ArgFinalInsts_22;

    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, CheckpointMsg_12, STATE_VARIABLE_ModeInfo_0_23, &STATE_VARIABLE_ModeInfo_26_26);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_14, STATE_VARIABLE_ModeInfo_26_26, &STATE_VARIABLE_ModeInfo_27_27);
    check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(NondetLiveVars0_18, STATE_VARIABLE_ModeInfo_27_27, &STATE_VARIABLE_ModeInfo_28_28);
    check_hlds__unique_modes__prepare_for_disjunct_5_p_0(Disjunct0_19, DisjDetism_16, DisjNonLocals_17, STATE_VARIABLE_ModeInfo_28_28, &STATE_VARIABLE_ModeInfo_29_29);
    check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Disjunct0_19, Disjunct_20, STATE_VARIABLE_ModeInfo_29_29, &STATE_VARIABLE_ModeInfo_30_30);
    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, CheckpointMsg_12, STATE_VARIABLE_ModeInfo_30_30, &STATE_VARIABLE_ModeInfo_32_32);
    check_hlds__modes__modecheck_final_insts_6_p_0((MR_Integer) 0, HeadVars_13, ArgFinalInsts0_15, &_ArgFinalInsts_22, STATE_VARIABLE_ModeInfo_32_32, STATE_VARIABLE_ModeInfo_24);
  }
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
  MR_Word STATE_VARIABLE_ModeInfo_0_26,
  MR_Word * STATE_VARIABLE_ModeInfo_27)
{
  {
    MR_bool succeeded;
    MR_Word MainConsId_18;
    MR_Word OtherConsIds_19;
    MR_Word Goal0_20;
    MR_Word InstMap1_21;
    MR_Word Goal1_22;
    MR_Word InstMap_23;
    MR_Word Goal_24;
    MR_Word STATE_VARIABLE_ModeInfo_29_29;
    MR_Word STATE_VARIABLE_ModeInfo_30_30;
    MR_Word STATE_VARIABLE_ModeInfo_31_31;
    MR_Word STATE_VARIABLE_ModeInfo_32_32;
    MR_Word STATE_VARIABLE_ModeInfo_34_34;
    MR_Word _ArgFinalInsts_25;

    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, CheckpointMsg_10, STATE_VARIABLE_ModeInfo_0_26, &STATE_VARIABLE_ModeInfo_29_29);
    MainConsId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_15, (MR_Integer) 0))));
    OtherConsIds_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_15, (MR_Integer) 1))));
    Goal0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_15, (MR_Integer) 2))));
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_12, STATE_VARIABLE_ModeInfo_29_29, &STATE_VARIABLE_ModeInfo_30_30);
    check_hlds__modecheck_util__modecheck_functors_test_5_p_0(Var_14, MainConsId_18, OtherConsIds_19, STATE_VARIABLE_ModeInfo_30_30, &STATE_VARIABLE_ModeInfo_31_31);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_31_31, &InstMap1_21);
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap1_21);
    if (succeeded)
    {
      check_hlds__modecheck_goal__modecheck_goal_4_p_0(Goal0_20, &Goal1_22, STATE_VARIABLE_ModeInfo_31_31, &STATE_VARIABLE_ModeInfo_32_32);
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_32_32, &InstMap_23);
    }
    else
    {
      Goal1_22 = hlds__make_goal__true_goal_0_f_0();
      InstMap_23 = InstMap1_21;
      STATE_VARIABLE_ModeInfo_32_32 = STATE_VARIABLE_ModeInfo_31_31;
    }
    check_hlds__modecheck_util__fixup_instmap_switch_var_5_p_0(Var_14, InstMap0_12, InstMap_23, Goal1_22, &Goal_24);
    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, CheckpointMsg_10, STATE_VARIABLE_ModeInfo_32_32, &STATE_VARIABLE_ModeInfo_34_34);
    check_hlds__modes__modecheck_final_insts_6_p_0((MR_Integer) 0, HeadVars_11, ArgFinalInsts0_13, &_ArgFinalInsts_25, STATE_VARIABLE_ModeInfo_34_34, STATE_VARIABLE_ModeInfo_27);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Case_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_24));
    }
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
  MR_Word STATE_VARIABLE_ModeInfo_0_17,
  MR_Word * STATE_VARIABLE_ModeInfo_18)
{
  {
    MR_Word STATE_VARIABLE_ModeInfo_20_20;
    MR_Word STATE_VARIABLE_ModeInfo_21_21;
    MR_Word STATE_VARIABLE_ModeInfo_22_22;
    MR_Word STATE_VARIABLE_ModeInfo_24_24;
    MR_Word _ArgFinalInsts_16;

    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, CheckpointMsg_9, STATE_VARIABLE_ModeInfo_0_17, &STATE_VARIABLE_ModeInfo_20_20);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_11, STATE_VARIABLE_ModeInfo_20_20, &STATE_VARIABLE_ModeInfo_21_21);
    check_hlds__modecheck_goal__modecheck_goal_4_p_0(Disjunct0_13, Disjunct_14, STATE_VARIABLE_ModeInfo_21_21, &STATE_VARIABLE_ModeInfo_22_22);
    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, CheckpointMsg_9, STATE_VARIABLE_ModeInfo_22_22, &STATE_VARIABLE_ModeInfo_24_24);
    check_hlds__modes__modecheck_final_insts_6_p_0((MR_Integer) 0, HeadVars_10, ArgFinalInsts0_12, &_ArgFinalInsts_16, STATE_VARIABLE_ModeInfo_24_24, STATE_VARIABLE_ModeInfo_18);
  }
}

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0___ProcId_76 = ((MR_Integer) ((env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv2__ProcId_76));
    (env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcInfo_85 = ((MR_Word) ((env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv1_ProcInfo_85));
    check_hlds__modes__maybe_modecheck_pred_9_p_0_2(env_ptr);
  }
}

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word ArgX1_92;

      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcInfo_85, &(env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__Var_88);
      (env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = ((env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__Var_88 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
      {
        ArgX1_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__Var_88, (MR_Integer) 0))));
        check_hlds__modes__maybe_modecheck_pred_9_p_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__commit_0) == 0)
      {
        mercury__map__member_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcTable_74, &(env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv2__ProcId_76, &(env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv1_ProcInfo_85, check_hlds__modes__maybe_modecheck_pred_9_p_0_3, env_ptr);
        (env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0(
  MR_Word WhatToCheck_10,
  MR_Word MayChangeCalledProc_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_Changed_0_29,
  MR_Word * STATE_VARIABLE_Changed_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  {
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s env;

    {
      MR_Word Preds0_16;
      MR_Word PredInfo0_17;
      MR_Box conv0_PredInfo0_17;

      hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_27, &Preds0_16);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds0_16, ((MR_Box) (PredId_12)), &conv0_PredInfo0_17);
      PredInfo0_17 = ((MR_Word) (conv0_PredInfo0_17));
      (env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_17);
      if (!((env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded))
      {
        (env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(PredInfo0_17);
        if (!((env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded))
        {
          MR_Word PredMarkers_49;

          hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_17, &PredMarkers_49);
          (env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_49, (MR_Integer) 10);
        }
      }
      if ((env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
      {
        *STATE_VARIABLE_ModuleInfo_28 = STATE_VARIABLE_ModuleInfo_0_27;
        *STATE_VARIABLE_Changed_30 = STATE_VARIABLE_Changed_0_29;
        *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
      }
      else
      {
        MR_Word ThisPredDeclSpecs_20;
        MR_Word ThisPredProcSpecs_21;
        MR_Word Globals_22;
        MR_Word ContainsError_23;
        MR_Word Statistics_24;
        MR_Word STATE_VARIABLE_ModuleInfo_35_35;
        MR_Word Var_38;
        MR_Word ProcTable0_78;
        MR_Word ProcIds_79;
        MR_Word SpecsAcc_80;
        MR_Word Var_84;
        MR_Word Markers_58;
        MR_String Msg_59;
        MR_Word ModuleName_25;
        MR_Word ProgressStream_26;

        hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_17, &Markers_58);
        (env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_58, (MR_Integer) 3);
        if ((env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
          switch (WhatToCheck_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Msg_59 = (MR_String) "% Mode-analysing ";
              break;
            case (MR_Integer) 1:
              Msg_59 = (MR_String) "% Unique-mode-analysing ";
              break;
          }
        else
          switch (WhatToCheck_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Msg_59 = (MR_String) "% Mode-checking ";
              break;
            case (MR_Integer) 1:
              Msg_59 = (MR_String) "% Unique-mode-checking ";
              break;
          }
        hlds__passes_aux__write_pred_progress_message_5_p_0(Msg_59, PredId_12, STATE_VARIABLE_ModuleInfo_0_27);
        switch (WhatToCheck_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_17, &(env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcTable_74);
              check_hlds__modes__maybe_modecheck_pred_9_p_0_4(&env);
              if ((env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
                ThisPredDeclSpecs_20 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word PredStatus_100;
                MR_Word Var_111;

                hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_17, &PredStatus_100);
                Var_111 = (MR_Word) (PredStatus_100);
                (env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = (Var_111 == (MR_Word) ((MR_Unsigned) 32U));
                if ((env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
                {
                  MR_Word Globals_101;
                  MR_Word InferModesOpt_102;

                  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_27, &Globals_101);
                  libs__globals__lookup_bool_option_3_p_0(Globals_101, (MR_Integer) 209, &InferModesOpt_102);
                  switch (InferModesOpt_102) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Markers_103;
                        MR_Word Msgs_104;
                        MR_Word Context_108;
                        MR_Word Spec_109;

                        hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_17, &Markers_103);
                        hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_17, &Context_108);
                        (env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_103, (MR_Integer) 4);
                        if ((env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
                          Msgs_104 = (MR_Word) ((MR_Unsigned) 0U);
                        else
                        {
                          MR_Word PredDesc_105;
                          MR_Word MainPieces_106;
                          MR_Word Var_119;
                          MR_Word Var_137;
                          MR_Word Var_138;
                          MR_Word Var_139;

                          PredDesc_105 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(STATE_VARIABLE_ModuleInfo_0_27, (MR_Integer) 1, PredId_12);
                          Var_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredDesc_105, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[16])));
                          MainPieces_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[14])), Var_119);
                          {
                            Var_139 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_139, 0) = ((MR_Box) (MainPieces_106));
                          }
                          {
                            Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Var_139));
                            MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[62])));
                          }
                          {
                            Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (Context_108));
                            MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (Var_138));
                          }
                          {
                            Msgs_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Msgs_104, 0) = ((MR_Box) (Var_137));
                            MR_hl_field(MR_mktag(1), Msgs_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                        }
                        {
                          Spec_109 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Spec_109, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.modes.maybe_report_error_no_modes\'/3"));
                          MR_hl_field(MR_mktag(0), Spec_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(0), Spec_109, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[0])));
                          MR_hl_field(MR_mktag(0), Spec_109, 3) = ((MR_Box) (Msgs_104));
                        }
                        {
                          ThisPredDeclSpecs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ThisPredDeclSpecs_20, 0) = ((MR_Box) (Spec_109));
                          MR_hl_field(MR_mktag(1), ThisPredDeclSpecs_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      ThisPredDeclSpecs_20 = (MR_Word) ((MR_Unsigned) 0U);
                      break;
                  }
                }
                else
                {
                  MR_Word Pieces_110;
                  MR_Word Var_154;
                  MR_Word Var_155;
                  MR_Word Context_168;
                  MR_Word Spec_169;

                  hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_17, &Context_168);
                  Var_155 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(STATE_VARIABLE_ModuleInfo_0_27, (MR_Integer) 0, PredId_12);
                  Var_154 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_155, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[16])));
                  Pieces_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[24])), Var_154);
                  {
                    Spec_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Spec_169, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.modes.maybe_report_error_no_modes\'/3"));
                    MR_hl_field(MR_mktag(1), Spec_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), Spec_169, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[0])));
                    MR_hl_field(MR_mktag(1), Spec_169, 3) = ((MR_Box) (Context_168));
                    MR_hl_field(MR_mktag(1), Spec_169, 4) = ((MR_Box) (Pieces_110));
                  }
                  {
                    ThisPredDeclSpecs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ThisPredDeclSpecs_20, 0) = ((MR_Box) (Spec_169));
                    MR_hl_field(MR_mktag(1), ThisPredDeclSpecs_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 1:
            ThisPredDeclSpecs_20 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_17, &ProcTable0_78);
        ProcIds_79 = hlds__hlds_pred__pred_info_valid_procids_1_f_0(PredInfo0_17);
        Var_84 = parse_tree__error_util__init_error_spec_accumulator_0_f_0();
        check_hlds__modes__maybe_modecheck_procs_11_p_0(WhatToCheck_10, MayChangeCalledProc_11, PredId_12, ProcTable0_78, ProcIds_79, STATE_VARIABLE_ModuleInfo_0_27, &STATE_VARIABLE_ModuleInfo_35_35, STATE_VARIABLE_Changed_0_29, STATE_VARIABLE_Changed_30, Var_84, &SpecsAcc_80);
        ThisPredProcSpecs_21 = parse_tree__error_util__error_spec_accumulator_to_list_1_f_0(SpecsAcc_80);
        Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ThisPredProcSpecs_21, STATE_VARIABLE_Specs_0_31);
        *STATE_VARIABLE_Specs_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ThisPredDeclSpecs_20, Var_38);
        hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_35_35, &Globals_22);
        ContainsError_23 = parse_tree__error_util__contains_errors_2_f_0(Globals_22, ThisPredProcSpecs_21);
        switch (ContainsError_23) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_ModuleInfo_28 = STATE_VARIABLE_ModuleInfo_35_35;
            break;
          case (MR_Integer) 1:
            hlds__hlds_module__module_info_make_pred_id_invalid_3_p_0(PredId_12, STATE_VARIABLE_ModuleInfo_35_35, STATE_VARIABLE_ModuleInfo_28);
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 77, &Statistics_24);
        hlds__hlds_module__module_info_get_name_2_p_0(*STATE_VARIABLE_ModuleInfo_28, &ModuleName_25);
        libs__globals__get_progress_output_stream_5_p_0(Globals_22, ModuleName_25, &ProgressStream_26);
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_26, Statistics_24);
      }
    }
  }
}

static void MR_CALL 
check_hlds__modes__maybe_modecheck_procs_11_p_0(
  MR_Word WhatToCheck_1,
  MR_Word MayChangeCalledProc_2,
  MR_Word PredId_3,
  MR_Word ProcTable0_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7,
  MR_Word STATE_VARIABLE_Changed_0_8,
  MR_Word * STATE_VARIABLE_Changed_9,
  MR_Word HeadVar__10_10,
  MR_Word * HeadVar__11_11)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__11_11 = HeadVar__10_10;
      *STATE_VARIABLE_Changed_9 = STATE_VARIABLE_Changed_0_8;
      *STATE_VARIABLE_ModuleInfo_7 = STATE_VARIABLE_ModuleInfo_0_6;
    }
    else
    {
      MR_Integer ProcId_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ProcIds_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word ProcInfo0_34;
      MR_Word ProcSpecs_35;
      MR_Word STATE_VARIABLE_ModuleInfo_42_42;
      MR_Word STATE_VARIABLE_Changed_43_43;
      MR_Word STATE_VARIABLE_SpecsAcc_44_44;
      MR_Word CanProcess_62;
      MR_Box conv0_ProcInfo0_34;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Changed_0_8;
      MR_Word next_value_of_HeadVar__10_10;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_4, ((MR_Box) (ProcId_29)), &conv0_ProcInfo0_34);
      ProcInfo0_34 = ((MR_Word) (conv0_ProcInfo0_34));
      hlds__hlds_pred__proc_info_get_can_process_2_p_0(ProcInfo0_34, &CanProcess_62);
      switch (CanProcess_62) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          check_hlds__modes__definitely_modecheck_proc_10_p_0(WhatToCheck_1, MayChangeCalledProc_2, PredId_3, ProcId_29, ProcInfo0_34, STATE_VARIABLE_ModuleInfo_0_6, &STATE_VARIABLE_ModuleInfo_42_42, STATE_VARIABLE_Changed_0_8, &STATE_VARIABLE_Changed_43_43, &ProcSpecs_35);
          break;
        case (MR_Integer) 0:
          {
            ProcSpecs_35 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_ModuleInfo_42_42 = STATE_VARIABLE_ModuleInfo_0_6;
            STATE_VARIABLE_Changed_43_43 = STATE_VARIABLE_Changed_0_8;
          }
          break;
      }
      parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0(ProcSpecs_35, HeadVar__10_10, &STATE_VARIABLE_SpecsAcc_44_44);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ProcIds_30;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_6 = STATE_VARIABLE_ModuleInfo_42_42;
      next_value_of_STATE_VARIABLE_Changed_0_8 = STATE_VARIABLE_Changed_43_43;
      next_value_of_HeadVar__10_10 = STATE_VARIABLE_SpecsAcc_44_44;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_ModuleInfo_0_6 = next_value_of_STATE_VARIABLE_ModuleInfo_0_6;
      STATE_VARIABLE_Changed_0_8 = next_value_of_STATE_VARIABLE_Changed_0_8;
      HeadVar__10_10 = next_value_of_HeadVar__10_10;
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
  {
    MR_Word OldProcInfo_8;
    MR_Word OldProcBody_9;
    MR_Word ProcInfo0_10;
    MR_Word ProcInfo_11;
    MR_Box conv0_OldProcInfo_8;
    MR_Box conv1_ProcInfo0_10;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), OldProcTable_5, ((MR_Box) (ProcId_6)), &conv0_OldProcInfo_8);
    OldProcInfo_8 = ((MR_Word) (conv0_OldProcInfo_8));
    hlds__hlds_pred__proc_info_get_goal_2_p_0(OldProcInfo_8, &OldProcBody_9);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_12, ((MR_Box) (ProcId_6)), &conv1_ProcInfo0_10);
    ProcInfo0_10 = ((MR_Word) (conv1_ProcInfo0_10));
    hlds__hlds_pred__proc_info_set_goal_3_p_0(OldProcBody_9, ProcInfo0_10, &ProcInfo_11);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_6)), ((MR_Box) (ProcInfo_11)), STATE_VARIABLE_ProcTable_0_12, STATE_VARIABLE_ProcTable_13);
  }
}

static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ProcTable_13;

    check_hlds__modes__copy_proc_body_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ProcTable_13);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ProcTable_13));
  }
}

static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0(
  MR_Word OldPredTable_5,
  MR_Word PredId_6,
  MR_Word PredTable0_7,
  MR_Word * PredTable_8)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo0_9;
    MR_Box conv0_PredInfo0_9;
    MR_Word Markers_10;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_7, ((MR_Box) (PredId_6)), &conv0_PredInfo0_9);
    PredInfo0_9 = ((MR_Word) (conv0_PredInfo0_9));
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_9, &Markers_10);
    succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_10, (MR_Integer) 10);
    if (succeeded)
      *PredTable_8 = PredTable0_7;
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
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), OldPredTable_5, ((MR_Box) (PredId_6)), &conv1_OldPredInfo_12);
      OldPredInfo_12 = ((MR_Word) (conv1_OldPredInfo_12));
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(OldPredInfo_12, &OldProcTable_13);
      mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), OldProcTable_13, &OldProcIds_14);
      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_9[1]));
        MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (check_hlds__modes__copy_pred_body_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (OldProcTable_13));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&check_hlds__modes_scalar_common_2[1]), Var_18, OldProcIds_14, ((MR_Box) (ProcTable0_11)), &conv3_ProcTable_15);
      ProcTable_15 = ((MR_Word) (conv3_ProcTable_15));
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_15, PredInfo0_9, &PredInfo_16);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_6)), ((MR_Box) (PredInfo_16)), PredTable0_7, PredTable_8);
    }
  }
}

void MR_CALL 
check_hlds__modes__modecheck_lambda_final_insts_4_p_0(
  MR_Word HeadVars_5,
  MR_Word ArgFinalInsts_6,
  MR_Word STATE_VARIABLE_ModeInfo_0_9,
  MR_Word * STATE_VARIABLE_ModeInfo_10)
{
  {
    MR_Word _NewFinalInsts_8;

    check_hlds__modes__modecheck_final_insts_6_p_0((MR_Integer) 0, HeadVars_5, ArgFinalInsts_6, &_NewFinalInsts_8, STATE_VARIABLE_ModeInfo_0_9, STATE_VARIABLE_ModeInfo_10);
  }
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
  {
    MR_Word ModuleInfo_26;
    MR_Word Errors_27;
    MR_Word Changed0_30;
    MR_Word InstMap_31;
    MR_Word VarTypes_32;
    MR_Word VarFinalInsts0_33;
    MR_Word ArgTypes_34;

    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_13, &ModuleInfo_26);
    check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_0_13, &Errors_27);
    if ((Errors_27 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      Changed0_30 = (MR_Integer) 0;
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_13, &InstMap_31);
    }
    else
    {
      Changed0_30 = (MR_Integer) 1;
      hlds__instmap__init_unreachable_1_p_0(&InstMap_31);
    }
    check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_0_13, &VarTypes_32);
    hlds__instmap__instmap_lookup_vars_3_p_0(InstMap_31, HeadVars_8, &VarFinalInsts0_33);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_32, HeadVars_8, &ArgTypes_34);
    switch (InferModes_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word PredId_35;
          MR_Integer ProcId_36;
          MR_Word ProcInfo_37;
          MR_Word ArgLives_38;
          MR_Word VarFinalInsts1_39;
          MR_Word Changed1_41;
          MR_Word Changed2_42;
          MR_Word Changed_43;
          MR_Word STATE_VARIABLE_ModeInfo_40_50;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Var_53;

          check_hlds__mode_info__mode_info_get_pred_id_2_p_0(STATE_VARIABLE_ModeInfo_0_13, &PredId_35);
          check_hlds__mode_info__mode_info_get_proc_id_2_p_0(STATE_VARIABLE_ModeInfo_0_13, &ProcId_36);
          hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_26, PredId_35, ProcId_36, &ProcInfo_37);
          hlds__hlds_pred__proc_info_arglives_3_p_0(ModuleInfo_26, ProcInfo_37, &ArgLives_38);
          check_hlds__modecheck_util__normalise_insts_4_p_0(ModuleInfo_26, ArgTypes_34, VarFinalInsts0_33, &VarFinalInsts1_39);
          check_hlds__modes__maybe_clobber_insts_3_p_0(VarFinalInsts1_39, ArgLives_38, STATE_VARIABLE_FinalInsts_12);
          check_hlds__modes__check_final_insts_10_p_0(InferModes_7, (MR_Integer) 0, HeadVars_8, *STATE_VARIABLE_FinalInsts_12, STATE_VARIABLE_FinalInsts_0_11, (MR_Integer) 1, (MR_Integer) 0, &Changed1_41, STATE_VARIABLE_ModeInfo_0_13, &STATE_VARIABLE_ModeInfo_40_50);
          check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(STATE_VARIABLE_ModeInfo_40_50, &Changed2_42);
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Changed2_42));
            MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Changed1_41));
            MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_53));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Changed0_30));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_52));
          }
          mercury__bool__or_list_2_p_0(Var_51, &Changed_43);
          check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(Changed_43, STATE_VARIABLE_ModeInfo_40_50, STATE_VARIABLE_ModeInfo_14);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word _Changed1_44;

          check_hlds__modes__check_final_insts_10_p_0(InferModes_7, (MR_Integer) 0, HeadVars_8, VarFinalInsts0_33, STATE_VARIABLE_FinalInsts_0_11, (MR_Integer) 1, (MR_Integer) 0, &_Changed1_44, STATE_VARIABLE_ModeInfo_0_13, STATE_VARIABLE_ModeInfo_14);
          *STATE_VARIABLE_FinalInsts_12 = STATE_VARIABLE_FinalInsts_0_11;
        }
        break;
    }
  }
}

void MR_CALL 
check_hlds__modes__modecheck_proc_6_p_0(
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13,
  MR_Word * Changed_10,
  MR_Word * Specs_11)
{
  check_hlds__modes__modecheck_proc_general_8_p_0((MR_Integer) 0, (MR_Integer) 0, PredId_7, ProcId_8, STATE_VARIABLE_ModuleInfo_0_12, STATE_VARIABLE_ModuleInfo_13, Changed_10, Specs_11);
}

void MR_CALL 
check_hlds__modes__modecheck_proc_general_8_p_0(
  MR_Word WhatToCheck_9,
  MR_Word MayChangeCalledProc_10,
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19,
  MR_Word * Changed_14,
  MR_Word * Specs_15)
{
  {
    MR_Word ProcInfo_17;
    MR_Word CanProcess_34;
    MR_Word _PredInfo_16;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_18, PredId_11, ProcId_12, &_PredInfo_16, &ProcInfo_17);
    hlds__hlds_pred__proc_info_get_can_process_2_p_0(ProcInfo_17, &CanProcess_34);
    switch (CanProcess_34) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        check_hlds__modes__definitely_modecheck_proc_10_p_0(WhatToCheck_9, MayChangeCalledProc_10, PredId_11, ProcId_12, ProcInfo_17, STATE_VARIABLE_ModuleInfo_0_18, STATE_VARIABLE_ModuleInfo_19, (MR_Integer) 0, Changed_14, Specs_15);
        break;
      case (MR_Integer) 0:
        {
          *Specs_15 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_ModuleInfo_19 = STATE_VARIABLE_ModuleInfo_0_18;
          *Changed_14 = (MR_Integer) 0;
        }
        break;
    }
  }
}

void MR_CALL 
check_hlds__modes__modecheck_module_2_p_0(
  MR_Word ModuleInfo0_3,
  MR_Tuple * HeadVar__2_2)
{
  {
    MR_Word ModuleInfo_4;
    MR_Word SafeToContinue_5;
    MR_Word Specs_6;

    check_hlds__modes__check_pred_modes_6_p_0((MR_Integer) 0, (MR_Integer) 0, ModuleInfo0_3, &ModuleInfo_4, &SafeToContinue_5, &Specs_6);
    {
      MR_Tuple base;
      base = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SafeToContinue_5));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Specs_6));
    }
  }
}

void MR_CALL 
check_hlds__modes__check_pred_modes_6_p_0(
  MR_Word WhatToCheck_7,
  MR_Word MayChangeCalledProc_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word * SafeToContinue_10,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  {
    MR_bool succeeded;
    MR_Word PredIds_12;
    MR_Word Globals_13;
    MR_Integer MaxIterations_14;
    MR_Word SafeToContinue0_15;
    MR_Word STATE_VARIABLE_ModuleInfo_35_35;
    MR_Word STATE_VARIABLE_Specs_36_36;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &PredIds_12);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &Globals_13);
    libs__globals__lookup_int_option_3_p_0(Globals_13, (MR_Integer) 213, &MaxIterations_14);
    check_hlds__modes__modecheck_to_fixpoint_8_p_0(PredIds_12, MaxIterations_14, WhatToCheck_7, MayChangeCalledProc_8, STATE_VARIABLE_ModuleInfo_0_31, &STATE_VARIABLE_ModuleInfo_35_35, &SafeToContinue0_15, &STATE_VARIABLE_Specs_36_36);
    switch (WhatToCheck_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (SafeToContinue0_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DelayPartialInstantiations_16;

              libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 313, &DelayPartialInstantiations_16);
              switch (DelayPartialInstantiations_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *SafeToContinue_10 = (MR_Integer) 0;
                    *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_35_35;
                    *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_36_36;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ChangedPreds_20;
                    MR_Word AfterDPIModuleInfo_21;
                    MR_Word AfterDPISafeToContinue_22;
                    MR_Word AfterDPISpecs_23;
                    MR_Word MaybeBeforeDPISeverity_24;
                    MR_Word MaybeAfterDPISeverity_25;
                    MR_Word STATE_VARIABLE_ModuleInfo_38_38;

                    check_hlds__delay_partial_inst__delay_partial_inst_preds_4_p_0(PredIds_12, &ChangedPreds_20, STATE_VARIABLE_ModuleInfo_35_35, &STATE_VARIABLE_ModuleInfo_38_38);
                    check_hlds__modes__modecheck_to_fixpoint_8_p_0(ChangedPreds_20, MaxIterations_14, WhatToCheck_7, MayChangeCalledProc_8, STATE_VARIABLE_ModuleInfo_38_38, &AfterDPIModuleInfo_21, &AfterDPISafeToContinue_22, &AfterDPISpecs_23);
                    MaybeBeforeDPISeverity_24 = parse_tree__error_util__worst_severity_in_specs_2_f_0(Globals_13, STATE_VARIABLE_Specs_36_36);
                    MaybeAfterDPISeverity_25 = parse_tree__error_util__worst_severity_in_specs_2_f_0(Globals_13, AfterDPISpecs_23);
                    if ((MaybeBeforeDPISeverity_24 == (MR_Word) ((MR_Unsigned) 0U)))
                      if ((MaybeAfterDPISeverity_25 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        *STATE_VARIABLE_Specs_33 = AfterDPISpecs_23;
                        *STATE_VARIABLE_ModuleInfo_32 = AfterDPIModuleInfo_21;
                        *SafeToContinue_10 = AfterDPISafeToContinue_22;
                      }
                      else
                      {
                        *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_36_36;
                        *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_35_35;
                        *SafeToContinue_10 = SafeToContinue0_15;
                      }
                    else
                    {
                      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBeforeDPISeverity_24, (MR_Integer) 0))));

                      if ((MaybeAfterDPISeverity_25 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        *STATE_VARIABLE_Specs_33 = AfterDPISpecs_23;
                        *STATE_VARIABLE_ModuleInfo_32 = AfterDPIModuleInfo_21;
                        *SafeToContinue_10 = AfterDPISafeToContinue_22;
                      }
                      else
                      {
                        MR_Word AfterDPISeverity_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAfterDPISeverity_25, (MR_Integer) 0))));
                        MR_Word WorstSeverity_30;

                        WorstSeverity_30 = parse_tree__error_util__worst_severity_2_f_0(Var_54, AfterDPISeverity_29);
                        succeeded = (AfterDPISeverity_29 == WorstSeverity_30);
                        if (succeeded)
                        {
                          *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_36_36;
                          *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_35_35;
                          *SafeToContinue_10 = SafeToContinue0_15;
                        }
                        else
                        {
                          *STATE_VARIABLE_Specs_33 = AfterDPISpecs_23;
                          *STATE_VARIABLE_ModuleInfo_32 = AfterDPIModuleInfo_21;
                          *SafeToContinue_10 = AfterDPISafeToContinue_22;
                        }
                      }
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              check_hlds__modes__report_mode_inference_messages_for_preds_5_p_0(STATE_VARIABLE_ModuleInfo_35_35, (MR_Integer) 1, PredIds_12, STATE_VARIABLE_Specs_36_36, STATE_VARIABLE_Specs_33);
              *SafeToContinue_10 = (MR_Integer) 1;
              *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_35_35;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Specs_52_52;
          MR_Word PredIds_59;

          check_hlds__modes__report_mode_inference_messages_for_preds_5_p_0(STATE_VARIABLE_ModuleInfo_35_35, (MR_Integer) 0, PredIds_12, STATE_VARIABLE_Specs_36_36, &STATE_VARIABLE_Specs_52_52);
          hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_35_35, &PredIds_59);
          check_hlds__modes__pred_check_eval_methods_and_main_4_p_0(STATE_VARIABLE_ModuleInfo_35_35, PredIds_59, STATE_VARIABLE_Specs_52_52, STATE_VARIABLE_Specs_33);
          *SafeToContinue_10 = SafeToContinue0_15;
          *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_35_35;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__modes__pred_check_eval_methods_and_main_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_3,
  MR_Word * STATE_VARIABLE_Specs_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_4 = STATE_VARIABLE_Specs_0_3;
    else
    {
      MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PredIds_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Preds_13;
      MR_Word PredInfo_14;
      MR_Word ProcIds_15;
      MR_Word STATE_VARIABLE_Specs_18_18;
      MR_Box conv0_PredInfo_14;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_3;

      hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo_1, &Preds_13);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds_13, ((MR_Box) (PredId_10)), &conv0_PredInfo_14);
      PredInfo_14 = ((MR_Word) (conv0_PredInfo_14));
      ProcIds_15 = hlds__hlds_pred__pred_info_valid_procids_1_f_0(PredInfo_14);
      check_hlds__modes__proc_check_eval_methods_and_main_5_p_0(ModuleInfo_1, PredInfo_14, ProcIds_15, STATE_VARIABLE_Specs_0_3, &STATE_VARIABLE_Specs_18_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_11;
      next_value_of_STATE_VARIABLE_Specs_0_3 = STATE_VARIABLE_Specs_18_18;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Specs_0_3 = next_value_of_STATE_VARIABLE_Specs_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__modes__proc_check_eval_methods_and_main_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
    else
    {
      MR_Integer ProcId_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ProcIds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ProcTable_16;
      MR_Word ProcInfo_17;
      MR_Word EvalMethod_18;
      MR_Word Modes_19;
      MR_Word STATE_VARIABLE_Specs_28_28;
      MR_Word STATE_VARIABLE_Specs_31_31;
      MR_Box conv0_ProcInfo_17;
      MR_String Var_29;
      MR_Integer Var_30;
      MR_Word Di_124;
      MR_Word Uo_125;
      MR_Word DiInitialInst_126;
      MR_Word DiFinalInst_127;
      MR_Word UoInitialInst_128;
      MR_Word UoFinalInst_129;
      MR_Word Unique_130;
      MR_Word Clobbered_131;
      MR_Word Free_132;
      MR_Word Var_134;
      MR_Word Var_135;
      MR_Word Var_140;
      MR_Word Var_141;
      MR_Word Var_142;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_2, &ProcTable_16);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_16, ((MR_Box) (ProcId_13)), &conv0_ProcInfo_17);
      ProcInfo_17 = ((MR_Word) (conv0_ProcInfo_17));
      hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_17, &EvalMethod_18);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_17, &Modes_19);
      if ((EvalMethod_18 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Specs_28_28 = STATE_VARIABLE_Specs_0_4;
      else
      {
        MR_Word TabledMethod_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), EvalMethod_18, (MR_Integer) 0))));
        MR_Word STATE_VARIABLE_Specs_26_26;
        MR_Word Var_27;

        succeeded = check_hlds__modes__only_fully_in_out_modes_2_p_0(ModuleInfo_1, Modes_19);
        if (succeeded)
          STATE_VARIABLE_Specs_26_26 = STATE_VARIABLE_Specs_0_4;
        else
        {
          MR_Word GroundArgsSpec_21;
          MR_Word Context_38;
          MR_String TabledMethodStr_39;
          MR_Word MainPieces_40;
          MR_Word Msg_42;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_77;

          hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_17, &Context_38);
          TabledMethodStr_39 = parse_tree__prog_out__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_20);
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 29U));
            MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (TabledMethodStr_39));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[29])));
          }
          {
            MainPieces_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MainPieces_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[25])));
            MR_hl_field(MR_mktag(1), MainPieces_40, 1) = ((MR_Box) (Var_45));
          }
          {
            Var_68 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (MainPieces_40));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[58])));
          }
          {
            Msg_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Msg_42, 0) = ((MR_Box) (Context_38));
            MR_hl_field(MR_mktag(1), Msg_42, 1) = ((MR_Box) (Var_67));
          }
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Msg_42));
            MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            GroundArgsSpec_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), GroundArgsSpec_21, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.modes.report_eval_method_requires_ground_args\'/2"));
            MR_hl_field(MR_mktag(0), GroundArgsSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), GroundArgsSpec_21, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[0])));
            MR_hl_field(MR_mktag(0), GroundArgsSpec_21, 3) = ((MR_Box) (Var_77));
          }
          {
            STATE_VARIABLE_Specs_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_26_26, 0) = ((MR_Box) (GroundArgsSpec_21));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_26_26, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
          }
        }
        Var_27 = hlds__hlds_pred__tabled_eval_method_destroys_uniqueness_1_f_0(TabledMethod_20);
        succeeded = (Var_27 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = check_hlds__modes__only_nonunique_modes_2_p_0(ModuleInfo_1, Modes_19);
          succeeded = !(succeeded);
        }
        if (succeeded)
        {
          MR_Word UniquenessSpec_22;
          MR_Word Context_82;
          MR_String TabledMethodStr_83;
          MR_Word MainPieces_84;
          MR_Word Msg_86;
          MR_Word Var_89;
          MR_Word Var_90;
          MR_Word Var_111;
          MR_Word Var_112;
          MR_Word Var_121;

          hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_17, &Context_82);
          TabledMethodStr_83 = parse_tree__prog_out__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_20);
          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) ((MR_Unsigned) 29U));
            MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (TabledMethodStr_83));
          }
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
            MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[40])));
          }
          {
            MainPieces_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MainPieces_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[36])));
            MR_hl_field(MR_mktag(1), MainPieces_84, 1) = ((MR_Box) (Var_89));
          }
          {
            Var_112 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (MainPieces_84));
          }
          {
            Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Var_112));
            MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[60])));
          }
          {
            Msg_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Msg_86, 0) = ((MR_Box) (Context_82));
            MR_hl_field(MR_mktag(1), Msg_86, 1) = ((MR_Box) (Var_111));
          }
          {
            Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Msg_86));
            MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            UniquenessSpec_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), UniquenessSpec_22, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.modes.report_eval_method_destroys_uniqueness\'/2"));
            MR_hl_field(MR_mktag(0), UniquenessSpec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), UniquenessSpec_22, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[0])));
            MR_hl_field(MR_mktag(0), UniquenessSpec_22, 3) = ((MR_Box) (Var_121));
          }
          {
            STATE_VARIABLE_Specs_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_28_28, 0) = ((MR_Box) (UniquenessSpec_22));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_28_28, 1) = ((MR_Box) (STATE_VARIABLE_Specs_26_26));
          }
        }
        else
          STATE_VARIABLE_Specs_28_28 = STATE_VARIABLE_Specs_26_26;
      }
      Var_29 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_2);
      succeeded = (strcmp(Var_29, (MR_String) "main") == 0);
      if (succeeded)
      {
        Var_30 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_2);
        succeeded = (Var_30 == (MR_Integer) 2);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_2);
          if (succeeded)
          {
            succeeded = (Modes_19 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Di_124 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_19, (MR_Integer) 0))));
              Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_19, (MR_Integer) 1))));
              succeeded = (Var_134 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Uo_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_134, (MR_Integer) 0))));
                Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_134, (MR_Integer) 1))));
                succeeded = (Var_135 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_1, Di_124, &DiInitialInst_126, &DiFinalInst_127);
                  check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_1, Uo_125, &UoInitialInst_128, &UoFinalInst_129);
                  Unique_130 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[4]));
                  Clobbered_131 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[3]));
                  check_hlds__inst_util__inst_expand_3_p_0(ModuleInfo_1, DiInitialInst_126, &Var_140);
                  succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Unique_130, Var_140);
                  if (succeeded)
                  {
                    check_hlds__inst_util__inst_expand_3_p_0(ModuleInfo_1, DiFinalInst_127, &Var_141);
                    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Clobbered_131, Var_141);
                    if (succeeded)
                    {
                      check_hlds__inst_util__inst_expand_3_p_0(ModuleInfo_1, UoInitialInst_128, &Free_132);
                      if ((Free_132 == (MR_Word) ((MR_Unsigned) 0U)))
                        succeeded = MR_TRUE;
                      else
                      if (((MR_tag((MR_Word) Free_132)) == (MR_Integer) 1))
                        succeeded = MR_TRUE;
                      else
                        succeeded = MR_FALSE;
                      if (succeeded)
                      {
                        check_hlds__inst_util__inst_expand_3_p_0(ModuleInfo_1, UoFinalInst_129, &Var_142);
                        succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Unique_130, Var_142);
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
        MR_Word MainSpec_23;
        MR_Word Context_148;

        hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_17, &Context_148);
        {
          MainSpec_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MainSpec_23, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.modes.report_wrong_mode_for_main\'/1"));
          MR_hl_field(MR_mktag(1), MainSpec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), MainSpec_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[0])));
          MR_hl_field(MR_mktag(1), MainSpec_23, 3) = ((MR_Box) (Context_148));
          MR_hl_field(MR_mktag(1), MainSpec_23, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[54])));
        }
        {
          STATE_VARIABLE_Specs_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_31_31, 0) = ((MR_Box) (MainSpec_23));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_31_31, 1) = ((MR_Box) (STATE_VARIABLE_Specs_28_28));
        }
      }
      else
        STATE_VARIABLE_Specs_31_31 = STATE_VARIABLE_Specs_28_28;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ProcIds_14;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_31_31;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
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
      MR_Word Mode_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Modes_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word InitialInst_7;
      MR_Word FinalInst_8;
      MR_Word next_value_of_HeadVar__2_2;

      check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_1, Mode_5, &InitialInst_7, &FinalInst_8);
      succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_1, InitialInst_7);
      if (succeeded)
      {
        succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_1, FinalInst_8);
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
check_hlds__modes__only_fully_in_out_modes_2_p_0(
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
      MR_Word Mode_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Modes_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word InitialInst_7;
      MR_Word FinalInst_8;
      MR_Word next_value_of_HeadVar__2_2;

      check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_1, Mode_5, &InitialInst_7, &FinalInst_8);
      succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_1, InitialInst_7);
      if (!(succeeded))
      {
        succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_1, InitialInst_7);
        if (succeeded)
        {
          succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_1, FinalInst_8);
          if (!(succeeded))
            succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_1, FinalInst_8);
        }
      }
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Modes_6;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_PredTable_8;

    check_hlds__modes__copy_pred_body_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_PredTable_8);
    *wrapper_arg_3 = ((MR_Box) (conv6_PredTable_8));
  }
}

static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ModuleInfo_28;
    MR_Word conv1_STATE_VARIABLE_Changed_30;
    MR_Word conv0_STATE_VARIABLE_Specs_32;

    check_hlds__modes__maybe_modecheck_pred_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_28, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Changed_30, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_32);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_28));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Changed_30));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_32));
  }
}

static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0(
  MR_Word PredIds_9,
  MR_Integer NumIterationsLeft_10,
  MR_Word WhatToCheck_11,
  MR_Word MayChangeCalledProc_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word * SafeToContinue_14,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word OldPredTable0_16;
    MR_Word Changed1_17;
    MR_Word OldPredTable_18;
    MR_Word Changed_19;
    MR_Word Globals_20;
    MR_Word ErrorsSoFar_21;
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_ModuleInfo_32_32;
    MR_Word STATE_VARIABLE_Specs_35_35;
    MR_Word STATE_VARIABLE_ModuleInfo_36_36;
    MR_Word STATE_VARIABLE_Specs_37_37;
    MR_Box conv5_STATE_VARIABLE_ModuleInfo_32_32;
    MR_Box conv4_Changed1_17;
    MR_Box conv3_STATE_VARIABLE_Specs_35_35;

    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_28, &OldPredTable0_16);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (check_hlds__modes__modecheck_to_fixpoint_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (WhatToCheck_11));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (MayChangeCalledProc_12));
    }
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&check_hlds__modes_scalar_common_1[0]), Var_31, PredIds_9, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_28)), &conv5_STATE_VARIABLE_ModuleInfo_32_32, ((MR_Box) ((MR_Integer) 0)), &conv4_Changed1_17, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_STATE_VARIABLE_Specs_35_35);
    STATE_VARIABLE_ModuleInfo_32_32 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_32_32));
    Changed1_17 = ((MR_Word) (conv4_Changed1_17));
    STATE_VARIABLE_Specs_35_35 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_35_35));
    check_hlds__modes__modecheck_queued_procs_9_p_0(WhatToCheck_11, OldPredTable0_16, &OldPredTable_18, STATE_VARIABLE_ModuleInfo_32_32, &STATE_VARIABLE_ModuleInfo_36_36, Changed1_17, &Changed_19, STATE_VARIABLE_Specs_35_35, &STATE_VARIABLE_Specs_37_37);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_36_36, &Globals_20);
    ErrorsSoFar_21 = parse_tree__error_util__contains_errors_2_f_0(Globals_20, STATE_VARIABLE_Specs_37_37);
    switch (Changed_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *SafeToContinue_14 = (MR_Integer) 0;
          *STATE_VARIABLE_ModuleInfo_29 = STATE_VARIABLE_ModuleInfo_36_36;
          *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_37_37;
        }
        break;
      case (MR_Integer) 1:
        switch (ErrorsSoFar_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = (NumIterationsLeft_10 <= (MR_Integer) 1);
              if (succeeded)
              {
                MR_Word MaxIterSpec_22;
                MR_Word Globals_70;
                MR_Integer MaxIterations_71;
                MR_Word Pieces_72;
                MR_Word Msg_73;
                MR_Word Var_77;
                MR_Word Var_79;
                MR_Word Var_82;
                MR_Word Var_85;
                MR_Word Var_88;
                MR_Word Var_91;
                MR_Word Var_94;
                MR_Word Var_95;
                MR_Word Var_105;
                MR_Word Var_106;
                MR_Word Var_112;

                hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_36_36, &Globals_70);
                libs__globals__lookup_int_option_3_p_0(Globals_70, (MR_Integer) 213, &MaxIterations_71);
                {
                  Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Var_95, 1) = ((MR_Box) (MaxIterations_71));
                }
                {
                  Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
                  MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[12])));
                }
                {
                  Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[9])));
                  MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_94));
                }
                {
                  Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[8])));
                  MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_91));
                }
                {
                  Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[7])));
                  MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_88));
                }
                {
                  Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[6])));
                  MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_85));
                }
                {
                  Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[5])));
                  MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_82));
                }
                {
                  Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_79));
                }
                {
                  Pieces_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[4])));
                  MR_hl_field(MR_mktag(1), Pieces_72, 1) = ((MR_Box) (Var_77));
                }
                {
                  Var_106 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (Pieces_72));
                }
                {
                  Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Var_106));
                  MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Msg_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Msg_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(2), Msg_73, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(2), Msg_73, 2) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(2), Msg_73, 3) = ((MR_Box) (Var_105));
                }
                {
                  Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Msg_73));
                  MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MaxIterSpec_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), MaxIterSpec_22, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.modes.report_max_iterations_exceeded\'/1"));
                  MR_hl_field(MR_mktag(0), MaxIterSpec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), MaxIterSpec_22, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[0])));
                  MR_hl_field(MR_mktag(0), MaxIterSpec_22, 3) = ((MR_Box) (Var_112));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_30 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MaxIterSpec_22));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_37_37));
                }
                *SafeToContinue_14 = (MR_Integer) 1;
                *STATE_VARIABLE_ModuleInfo_29 = STATE_VARIABLE_ModuleInfo_36_36;
              }
              else
              {
                MR_Word DebugModes_23;
                MR_Word STATE_VARIABLE_ModuleInfo_52_52;
                MR_Integer Var_53;
                MR_Integer next_value_of_NumIterationsLeft_10;
                MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_28;

                libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 82, &DebugModes_23);
                switch (DebugModes_23) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word InferenceSpecs_24;
                      MR_Word ModuleName_26;
                      MR_Word DebugStream_27;

                      check_hlds__modes__report_mode_inference_messages_for_preds_5_p_0(STATE_VARIABLE_ModuleInfo_36_36, (MR_Integer) 1, PredIds_9, (MR_Word) ((MR_Unsigned) 0U), &InferenceSpecs_24);
                      hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_36_36, &ModuleName_26);
                      libs__globals__get_debug_output_stream_5_p_0(Globals_20, ModuleName_26, &DebugStream_27);
                      mercury__io__write_string_4_p_0(DebugStream_27, (MR_String) "Inferences by current iteration:\n");
                      parse_tree__error_util__write_error_specs_ignore_5_p_0(DebugStream_27, Globals_20, InferenceSpecs_24);
                      mercury__io__write_string_4_p_0(DebugStream_27, (MR_String) "End of inferences.\n");
                    }
                    break;
                }
                switch (WhatToCheck_11) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word STATE_VARIABLE_ModuleInfo_51_51;

                      check_hlds__clause_to_proc__copy_clauses_to_nonmethod_procs_for_preds_in_module_info_3_p_0(PredIds_9, STATE_VARIABLE_ModuleInfo_36_36, &STATE_VARIABLE_ModuleInfo_51_51);
                      check_hlds__introduce_exists_casts__introduce_exists_casts_3_p_0(PredIds_9, STATE_VARIABLE_ModuleInfo_51_51, &STATE_VARIABLE_ModuleInfo_52_52);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word PredTable0_119;
                      MR_Word PredTable_120;
                      MR_Word Var_121;
                      MR_Box conv7_PredTable_120;

                      hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_36_36, &PredTable0_119);
                      {
                        Var_121 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_9[0]));
                        MR_hl_field(MR_mktag(0), Var_121, 1) = ((MR_Box) (check_hlds__modes__modecheck_to_fixpoint_8_p_0_2));
                        MR_hl_field(MR_mktag(0), Var_121, 2) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), Var_121, 3) = ((MR_Box) (OldPredTable_18));
                      }
                      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__modes_scalar_common_2[0]), Var_121, PredIds_9, ((MR_Box) (PredTable0_119)), &conv7_PredTable_120);
                      PredTable_120 = ((MR_Word) (conv7_PredTable_120));
                      hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_120, STATE_VARIABLE_ModuleInfo_36_36, &STATE_VARIABLE_ModuleInfo_52_52);
                    }
                    break;
                }
                Var_53 = (MR_Integer) ((MR_Unsigned) NumIterationsLeft_10 - (MR_Unsigned) 1);
                // direct tailcall eliminated
                ;
                next_value_of_NumIterationsLeft_10 = Var_53;
                next_value_of_STATE_VARIABLE_ModuleInfo_0_28 = STATE_VARIABLE_ModuleInfo_52_52;
                NumIterationsLeft_10 = next_value_of_NumIterationsLeft_10;
                STATE_VARIABLE_ModuleInfo_0_28 = next_value_of_STATE_VARIABLE_ModuleInfo_0_28;
                continue;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *SafeToContinue_14 = (MR_Integer) 1;
              *STATE_VARIABLE_ModuleInfo_29 = STATE_VARIABLE_ModuleInfo_36_36;
              *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_37_37;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__modes__report_mode_inference_messages_for_preds_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word OutputDetism_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
    else
    {
      MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word PredIds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word PredInfo_16;
      MR_Word Markers_17;
      MR_Word STATE_VARIABLE_Specs_23_23;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_1, PredId_13, &PredInfo_16);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_16, &Markers_17);
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_17, (MR_Integer) 3);
      if (succeeded)
      {
        MR_Word ProcIds_18;
        MR_Word Procs_19;

        ProcIds_18 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_16);
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_16, &Procs_19);
        check_hlds__modes__report_mode_inference_messages_for_procs_7_p_0(ModuleInfo_1, OutputDetism_2, PredInfo_16, Procs_19, ProcIds_18, STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_23_23);
      }
      else
        STATE_VARIABLE_Specs_23_23 = STATE_VARIABLE_Specs_0_4;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = PredIds_14;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_23_23;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
check_hlds__modes__report_mode_inference_messages_for_procs_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_47;

    conv1_LambdaHeadVar__2_47 = check_hlds__modes__IntroducedFrom__func__report_mode_inference_message__1851__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_47));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__modes__report_mode_inference_messages_for_procs_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word OutputDetism_2,
  MR_Word PredInfo_3,
  MR_Word Procs_4,
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
      MR_Integer ProcId_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ProcIds_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Globals_22;
      MR_Word VerboseErrors_23;
      MR_Word ProcInfo_24;
      MR_Word STATE_VARIABLE_Specs_29_29;
      MR_Box conv0_ProcInfo_24;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_1, &Globals_22);
      libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 68, &VerboseErrors_23);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_4, ((MR_Box) (ProcId_19)), &conv0_ProcInfo_24);
      ProcInfo_24 = ((MR_Word) (conv0_ProcInfo_24));
      succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_24);
      if (!(succeeded))
        succeeded = (VerboseErrors_23 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word Spec_25;
        MR_String PredName_38;
        MR_Word Name_39;
        MR_Word Context_40;
        MR_Integer PredArity_41;
        MR_Integer NumArgModes_44;
        MR_Integer NumToDrop_45;
        MR_Word VarSet_46;
        MR_Word PredOrFunc_47;
        MR_String Verb_49;
        MR_String Detail_56;
        MR_Word Pieces_59;
        MR_Word STATE_VARIABLE_ArgModes_33_60;
        MR_Word STATE_VARIABLE_ArgModes_37_64;
        MR_Word STATE_VARIABLE_MaybeDet_39_66;
        MR_Word STATE_VARIABLE_ArgModes_44_71;
        MR_Word STATE_VARIABLE_MaybeDet_49_76;
        MR_Word STATE_VARIABLE_ArgModes_50_77;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word STATE_VARIABLE_ArgModes_34_61;

        PredName_38 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_3);
        {
          Name_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Name_39, 0) = ((MR_Box) (PredName_38));
        }
        hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_3, &Context_40);
        PredArity_41 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_3);
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_24, &STATE_VARIABLE_ArgModes_33_60);
        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), STATE_VARIABLE_ArgModes_33_60, &NumArgModes_44);
        NumToDrop_45 = (MR_Integer) ((MR_Unsigned) NumArgModes_44 - (MR_Unsigned) PredArity_41);
        succeeded = mercury__list__drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumToDrop_45, STATE_VARIABLE_ArgModes_33_60, &STATE_VARIABLE_ArgModes_34_61);
        if (succeeded)
          STATE_VARIABLE_ArgModes_37_64 = STATE_VARIABLE_ArgModes_34_61;
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.modes.report_mode_inference_message\'/4", (MR_String) "list.drop failed");
            return;
          }
        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &VarSet_46);
        PredOrFunc_47 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_3);
        switch (OutputDetism_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            STATE_VARIABLE_MaybeDet_39_66 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 0:
            {
              MR_Word Detism_48;

              hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_24, &Detism_48);
              {
                STATE_VARIABLE_MaybeDet_39_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeDet_39_66, 0) = ((MR_Box) (Detism_48));
              }
            }
            break;
        }
        succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_24);
        if (succeeded)
        {
          Verb_49 = (MR_String) "Inferred";
          STATE_VARIABLE_MaybeDet_49_76 = STATE_VARIABLE_MaybeDet_39_66;
          STATE_VARIABLE_ArgModes_44_71 = STATE_VARIABLE_ArgModes_37_64;
        }
        else
        {
          MR_Word InitialInsts_50;
          MR_Word FinalInsts_52;
          MR_Word Var_75;

          Verb_49 = (MR_String) "REJECTED";
          check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_1, STATE_VARIABLE_ArgModes_37_64, &InitialInsts_50);
          mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), PredArity_41, ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[56]))), &FinalInsts_52);
          Var_75 = mercury__assoc_list__from_corresponding_lists_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InitialInsts_50, FinalInsts_52);
          STATE_VARIABLE_ArgModes_44_71 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__modes_scalar_common_2[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&check_hlds__modes_scalar_common_2[5]), Var_75);
          STATE_VARIABLE_MaybeDet_49_76 = (MR_Word) ((MR_Unsigned) 0U);
        }
        parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(STATE_VARIABLE_ArgModes_44_71, &STATE_VARIABLE_ArgModes_50_77);
        switch (PredOrFunc_47) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word FuncArgModes_57;
              MR_Word RetMode_58;
              MR_Box conv2_RetMode_58;

              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), STATE_VARIABLE_ArgModes_50_77, &FuncArgModes_57, &conv2_RetMode_58);
              RetMode_58 = ((MR_Word) (conv2_RetMode_58));
              Detail_56 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_decl_to_string_6_f_0((MR_Integer) 1, VarSet_46, Name_39, FuncArgModes_57, RetMode_58, STATE_VARIABLE_MaybeDet_49_76);
            }
            break;
          case (MR_Integer) 0:
            Detail_56 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_decl_to_string_6_f_0((MR_Integer) 1, VarSet_46, Name_39, STATE_VARIABLE_ArgModes_50_77, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_MaybeDet_49_76);
            break;
        }
        {
          Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (Verb_49));
        }
        {
          Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (Detail_56));
        }
        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
          MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[10])));
        }
        {
          Pieces_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_59, 0) = ((MR_Box) (Var_80));
          MR_hl_field(MR_mktag(1), Pieces_59, 1) = ((MR_Box) (Var_81));
        }
        {
          Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (Context_40));
          MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (Pieces_59));
        }
        {
          Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
          MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Spec_25, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.modes.report_mode_inference_message\'/4"));
          MR_hl_field(MR_mktag(2), Spec_25, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 63) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
          MR_hl_field(MR_mktag(2), Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(2), Spec_25, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[0])));
          MR_hl_field(MR_mktag(2), Spec_25, 4) = ((MR_Box) (Var_92));
        }
        {
          STATE_VARIABLE_Specs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_29_29, 0) = ((MR_Box) (Spec_25));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_29_29, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_6));
        }
      }
      else
        STATE_VARIABLE_Specs_29_29 = STATE_VARIABLE_Specs_0_6;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ProcIds_20;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_29_29;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__modes__modecheck_queued_procs_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1270__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modes__modecheck_queued_procs_9_p_0(
  MR_Word HowToCheckGoal_10,
  MR_Word STATE_VARIABLE_OldPredTable_0_26,
  MR_Word * STATE_VARIABLE_OldPredTable_27,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word STATE_VARIABLE_Changed_0_30,
  MR_Word * STATE_VARIABLE_Changed_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Requests0_15;
    MR_Word RequestQueue0_16;
    MR_Word PredProcId_17;
    MR_Word RequestQueue1_18;
    MR_Box conv0_PredProcId_17;

    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_module__module_info_get_proc_requests_2_p_0(STATE_VARIABLE_ModuleInfo_0_28, &Requests0_15);
    check_hlds__proc_requests__get_req_queue_2_p_0(Requests0_15, &RequestQueue0_16);
    succeeded = mercury__queue__get_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), &conv0_PredProcId_17, RequestQueue0_16, &RequestQueue1_18);
    if (succeeded)
    {
      PredProcId_17 = ((MR_Word) (conv0_PredProcId_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Requests1_19;
      MR_Word PredId_20;
      MR_Word ValidPredIds_22;
      MR_Word STATE_VARIABLE_ModuleInfo_34_34;
      MR_Word STATE_VARIABLE_OldPredTable_37_37;
      MR_Word STATE_VARIABLE_ModuleInfo_38_38;
      MR_Word STATE_VARIABLE_Changed_39_39;
      MR_Word STATE_VARIABLE_Specs_40_40;
      MR_Word next_value_of_STATE_VARIABLE_OldPredTable_0_26;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_28;
      MR_Word next_value_of_STATE_VARIABLE_Changed_0_30;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_32;

      check_hlds__proc_requests__set_req_queue_3_p_0(RequestQueue1_18, Requests0_15, &Requests1_19);
      hlds__hlds_module__module_info_set_proc_requests_3_p_0(Requests1_19, STATE_VARIABLE_ModuleInfo_0_28, &STATE_VARIABLE_ModuleInfo_34_34);
      PredId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_17, (MR_Integer) 0))));
      hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(STATE_VARIABLE_ModuleInfo_34_34, &ValidPredIds_22);
      succeeded = mercury__set_tree234__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_20)), ValidPredIds_22);
      if (succeeded)
      {
        MR_Word HeadChanged_24;
        MR_Word HeadSpecs_25;
        MR_Word PredId_88;
        MR_Integer ProcId_89;
        MR_Word Preds0_90;
        MR_Word PredInfo0_91;
        MR_Word Procs0_92;
        MR_Word ProcInfo0_93;
        MR_Word ProcInfo1_94;
        MR_Word Procs1_95;
        MR_Word PredInfo1_96;
        MR_Word Preds1_97;
        MR_Word ModeSpecs_98;
        MR_Word Globals_99;
        MR_Word ModeErrors_100;
        MR_Word STATE_VARIABLE_ModuleInfo_46_114;
        MR_Word STATE_VARIABLE_ModuleInfo_49_117;
        MR_Word STATE_VARIABLE_Changed_51_119;
        MR_Word Globals_54;
        MR_Word VeryVerbose_55;
        MR_Box conv1_PredInfo0_91;
        MR_Box conv2_ProcInfo0_93;

        hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_34_34, &Globals_54);
        libs__globals__lookup_bool_option_3_p_0(Globals_54, (MR_Integer) 67, &VeryVerbose_55);
        switch (VeryVerbose_55) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ModuleName_56;
              MR_Word ProgressStream_57;
              MR_String ProcStr_58;

              hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_34_34, &ModuleName_56);
              libs__globals__get_progress_output_stream_5_p_0(Globals_54, ModuleName_56, &ProgressStream_57);
              ProcStr_58 = hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_f_0(STATE_VARIABLE_ModuleInfo_34_34, PredProcId_17);
              switch (HowToCheckGoal_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_4_p_0(ProgressStream_57, (MR_String) "% Mode-analysing ");
                    mercury__io__write_string_4_p_0(ProgressStream_57, ProcStr_58);
                    mercury__io__write_string_4_p_0(ProgressStream_57, (MR_String) "\n");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_4_p_0(ProgressStream_57, (MR_String) "% Analysing unique modes for\n% ");
                    mercury__io__write_string_4_p_0(ProgressStream_57, ProcStr_58);
                  }
                  break;
              }
            }
            break;
        }
        PredId_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_17, (MR_Integer) 0))));
        ProcId_89 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_17, (MR_Integer) 1))));
        hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_34_34, &Preds0_90);
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds0_90, ((MR_Box) (PredId_88)), &conv1_PredInfo0_91);
        PredInfo0_91 = ((MR_Word) (conv1_PredInfo0_91));
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_91, &Procs0_92);
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs0_92, ((MR_Box) (ProcId_89)), &conv2_ProcInfo0_93);
        ProcInfo0_93 = ((MR_Word) (conv2_ProcInfo0_93));
        hlds__hlds_pred__proc_info_set_can_process_3_p_0((MR_Integer) 1, ProcInfo0_93, &ProcInfo1_94);
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_89)), ((MR_Box) (ProcInfo1_94)), Procs0_92, &Procs1_95);
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(Procs1_95, PredInfo0_91, &PredInfo1_96);
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_88)), ((MR_Box) (PredInfo1_96)), Preds0_90, &Preds1_97);
        hlds__hlds_module__module_info_set_preds_3_p_0(Preds1_97, STATE_VARIABLE_ModuleInfo_34_34, &STATE_VARIABLE_ModuleInfo_46_114);
        check_hlds__modes__definitely_modecheck_proc_10_p_0((MR_Integer) 0, (MR_Integer) 0, PredId_88, ProcId_89, ProcInfo1_94, STATE_VARIABLE_ModuleInfo_46_114, &STATE_VARIABLE_ModuleInfo_49_117, (MR_Integer) 0, &STATE_VARIABLE_Changed_51_119, &ModeSpecs_98);
        hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_49_117, &Globals_99);
        ModeErrors_100 = parse_tree__error_util__contains_errors_2_f_0(Globals_99, ModeSpecs_98);
        switch (ModeErrors_100) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (HowToCheckGoal_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  HeadSpecs_25 = ModeSpecs_98;
                  STATE_VARIABLE_OldPredTable_37_37 = STATE_VARIABLE_OldPredTable_0_26;
                  STATE_VARIABLE_ModuleInfo_38_38 = STATE_VARIABLE_ModuleInfo_49_117;
                  HeadChanged_24 = STATE_VARIABLE_Changed_51_119;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Preds2_101;
                  MR_Word PredInfo2_102;
                  MR_Word Procs2_103;
                  MR_Word ProcInfo2_104;
                  MR_Word SwitchDetectInfo_105;
                  MR_Word ProcInfo3_106;
                  MR_Word Procs3_107;
                  MR_Word PredInfo3_108;
                  MR_Word Preds3_109;
                  MR_Word DetismSpecs_110;
                  MR_Word NewChanged_111;
                  MR_Word UniqueSpecs_112;
                  MR_Word STATE_VARIABLE_ModuleInfo_52_120;
                  MR_Word STATE_VARIABLE_ModuleInfo_53_121;
                  MR_Word STATE_VARIABLE_ModuleInfo_54_122;
                  MR_Word Var_123;
                  MR_Word ProcInfo_144;
                  MR_Word OldPredInfo0_145;
                  MR_Word OldProcTable0_146;
                  MR_Word OldProcTable_147;
                  MR_Word OldPredInfo_148;
                  MR_Box conv3_PredInfo2_102;
                  MR_Box conv4_ProcInfo2_104;
                  MR_Word _PredInfo_143;
                  MR_Box conv5_OldPredInfo0_145;

                  hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_49_117, &Preds2_101);
                  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds2_101, ((MR_Box) (PredId_88)), &conv3_PredInfo2_102);
                  PredInfo2_102 = ((MR_Word) (conv3_PredInfo2_102));
                  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo2_102, &Procs2_103);
                  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs2_103, ((MR_Box) (ProcId_89)), &conv4_ProcInfo2_104);
                  ProcInfo2_104 = ((MR_Word) (conv4_ProcInfo2_104));
                  SwitchDetectInfo_105 = check_hlds__switch_detection__init_switch_detect_info_1_f_0(STATE_VARIABLE_ModuleInfo_49_117);
                  check_hlds__switch_detection__detect_switches_in_proc_3_p_0(SwitchDetectInfo_105, ProcInfo2_104, &ProcInfo3_106);
                  mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_89)), ((MR_Box) (ProcInfo3_106)), Procs2_103, &Procs3_107);
                  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(Procs3_107, PredInfo2_102, &PredInfo3_108);
                  mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_88)), ((MR_Box) (PredInfo3_108)), Preds2_101, &Preds3_109);
                  hlds__hlds_module__module_info_set_preds_3_p_0(Preds3_109, STATE_VARIABLE_ModuleInfo_49_117, &STATE_VARIABLE_ModuleInfo_52_120);
                  check_hlds__cse_detection__detect_cse_in_proc_4_p_0(PredId_88, ProcId_89, STATE_VARIABLE_ModuleInfo_52_120, &STATE_VARIABLE_ModuleInfo_53_121);
                  check_hlds__det_analysis__determinism_check_proc_5_p_0(ProcId_89, PredId_88, STATE_VARIABLE_ModuleInfo_53_121, &STATE_VARIABLE_ModuleInfo_54_122, &DetismSpecs_110);
                  {
                    Var_123 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_123, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_8[0]));
                    MR_hl_field(MR_mktag(0), Var_123, 1) = ((MR_Box) (check_hlds__modes__modecheck_queued_procs_9_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_123, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_123, 3) = ((MR_Box) (DetismSpecs_110));
                    MR_hl_field(MR_mktag(0), Var_123, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  mercury__require__expect_3_p_0(Var_123, (MR_String) "predicate \140check_hlds.modes.modecheck_queued_proc\'/8", (MR_String) "found detism error");
                  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_54_122, PredId_88, ProcId_89, &_PredInfo_143, &ProcInfo_144);
                  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_OldPredTable_0_26, ((MR_Box) (PredId_88)), &conv5_OldPredInfo0_145);
                  OldPredInfo0_145 = ((MR_Word) (conv5_OldPredInfo0_145));
                  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(OldPredInfo0_145, &OldProcTable0_146);
                  mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_89)), ((MR_Box) (ProcInfo_144)), OldProcTable0_146, &OldProcTable_147);
                  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(OldProcTable_147, OldPredInfo0_145, &OldPredInfo_148);
                  mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_88)), ((MR_Box) (OldPredInfo_148)), STATE_VARIABLE_OldPredTable_0_26, &STATE_VARIABLE_OldPredTable_37_37);
                  check_hlds__unique_modes__unique_modes_check_proc_6_p_0(PredId_88, ProcId_89, STATE_VARIABLE_ModuleInfo_54_122, &STATE_VARIABLE_ModuleInfo_38_38, &NewChanged_111, &UniqueSpecs_112);
                  mercury__bool__or_3_p_0(NewChanged_111, STATE_VARIABLE_Changed_51_119, &HeadChanged_24);
                  HeadSpecs_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ModeSpecs_98, UniqueSpecs_112);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              hlds__hlds_module__module_info_make_pred_id_invalid_3_p_0(PredId_88, STATE_VARIABLE_ModuleInfo_49_117, &STATE_VARIABLE_ModuleInfo_38_38);
              HeadSpecs_25 = ModeSpecs_98;
              STATE_VARIABLE_OldPredTable_37_37 = STATE_VARIABLE_OldPredTable_0_26;
              HeadChanged_24 = STATE_VARIABLE_Changed_51_119;
            }
            break;
        }
        mercury__bool__or_3_p_0(HeadChanged_24, STATE_VARIABLE_Changed_0_30, &STATE_VARIABLE_Changed_39_39);
        STATE_VARIABLE_Specs_40_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), HeadSpecs_25, STATE_VARIABLE_Specs_0_32);
      }
      else
      {
        STATE_VARIABLE_Specs_40_40 = STATE_VARIABLE_Specs_0_32;
        STATE_VARIABLE_Changed_39_39 = STATE_VARIABLE_Changed_0_30;
        STATE_VARIABLE_ModuleInfo_38_38 = STATE_VARIABLE_ModuleInfo_34_34;
        STATE_VARIABLE_OldPredTable_37_37 = STATE_VARIABLE_OldPredTable_0_26;
      }
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_OldPredTable_0_26 = STATE_VARIABLE_OldPredTable_37_37;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_28 = STATE_VARIABLE_ModuleInfo_38_38;
      next_value_of_STATE_VARIABLE_Changed_0_30 = STATE_VARIABLE_Changed_39_39;
      next_value_of_STATE_VARIABLE_Specs_0_32 = STATE_VARIABLE_Specs_40_40;
      STATE_VARIABLE_OldPredTable_0_26 = next_value_of_STATE_VARIABLE_OldPredTable_0_26;
      STATE_VARIABLE_ModuleInfo_0_28 = next_value_of_STATE_VARIABLE_ModuleInfo_0_28;
      STATE_VARIABLE_Changed_0_30 = next_value_of_STATE_VARIABLE_Changed_0_30;
      STATE_VARIABLE_Specs_0_32 = next_value_of_STATE_VARIABLE_Specs_0_32;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_0_32;
      *STATE_VARIABLE_Changed_31 = STATE_VARIABLE_Changed_0_30;
      *STATE_VARIABLE_ModuleInfo_29 = STATE_VARIABLE_ModuleInfo_0_28;
      *STATE_VARIABLE_OldPredTable_27 = STATE_VARIABLE_OldPredTable_0_26;
    }
    break;
  }
}

static MR_Box MR_CALL 
check_hlds__modes__definitely_modecheck_proc_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = check_hlds__mode_errors__mode_warning_info_to_spec_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__modes__definitely_modecheck_proc_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = check_hlds__mode_errors__mode_error_info_to_spec_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__modes__definitely_modecheck_proc_10_p_0(
  MR_Word WhatToCheck_11,
  MR_Word MayChangeCalledProc_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word ProcInfo0_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_Changed_0_31,
  MR_Word * STATE_VARIABLE_Changed_32,
  MR_Word * Specs_18)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo0_19;
    MR_Word ProcInfo_20;
    MR_Word ClausesInfo_21;
    MR_Word PredInfo1_22;
    MR_Word ProcMap1_23;
    MR_Word ProcMap_24;
    MR_Word PredInfo2_25;
    MR_Word PredInfo_26;
    MR_Word PredMap1_27;
    MR_Word PredMap_28;
    MR_Word STATE_VARIABLE_ModuleInfo_33_33;
    MR_Word Markers_56;
    MR_Word InferModes_57;
    MR_Word IsUnifyPred_58;
    MR_Word Origin_59;
    MR_Word ClausesInfo0_60;
    MR_Word Clauses_61;
    MR_Word Context_65;
    MR_Word HeadVars_66;
    MR_Word ArgModes0_67;
    MR_Word ArgLives0_68;
    MR_Word Body0_69;
    MR_Word ArgInitialInsts_71;
    MR_Word InstAL_72;
    MR_Word InstMap0_73;
    MR_Word LiveVarsList_74;
    MR_Word LiveVars_75;
    MR_Word HeadInstVars_76;
    MR_Word ArgFinalInsts0_77;
    MR_Word Body_78;
    MR_Word ArgFinalInsts_79;
    MR_Word ModeErrors_80;
    MR_Word ArgModes_91;
    MR_Word VarSet_92;
    MR_Word VarTypes_93;
    MR_Word NeedToRequantify_94;
    MR_Word STATE_VARIABLE_ModeInfo_70_96;
    MR_Word STATE_VARIABLE_ModeInfo_71_97;
    MR_Word STATE_VARIABLE_ModeInfo_72_98;
    MR_Word STATE_VARIABLE_ProcInfo_77_103;
    MR_Word STATE_VARIABLE_ProcInfo_80_106;
    MR_Word STATE_VARIABLE_ProcInfo_81_107;
    MR_Word STATE_VARIABLE_ProcInfo_82_108;
    MR_Word STATE_VARIABLE_ProcInfo_83_109;
    MR_Word Body1_141;
    MR_Word ArgFinalInsts1_142;
    MR_Word ModeInfo1_143;
    MR_Word ModeErrors1_144;
    MR_Word _ItemNumbers_62;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredId_13, &PredInfo0_19);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_19, &Markers_56);
    succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_56, (MR_Integer) 3);
    if (succeeded)
      InferModes_57 = (MR_Integer) 1;
    else
      InferModes_57 = (MR_Integer) 0;
    succeeded = hlds__hlds_pred__is_unify_pred_1_p_0(PredInfo0_19);
    if (succeeded)
      IsUnifyPred_58 = (MR_Integer) 1;
    else
      IsUnifyPred_58 = (MR_Integer) 0;
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_19, &Origin_59);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_19, &ClausesInfo0_60);
    hlds__hlds_clauses__clauses_info_clauses_4_p_0(&Clauses_61, &_ItemNumbers_62, ClausesInfo0_60, &ClausesInfo_21);
    if ((Clauses_61 == (MR_Word) ((MR_Unsigned) 0U)))
      hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo0_15, &Context_65);
    else
    {
      MR_Word FirstClause_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses_61, (MR_Integer) 0))));

      Context_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstClause_63, (MR_Integer) 3))));
    }
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_15, &HeadVars_66);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo0_15, &ArgModes0_67);
    hlds__hlds_pred__proc_info_arglives_3_p_0(STATE_VARIABLE_ModuleInfo_0_29, ProcInfo0_15, &ArgLives0_68);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_15, &Body0_69);
    check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(STATE_VARIABLE_ModuleInfo_0_29, ArgModes0_67, &ArgInitialInsts_71);
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__modes_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), HeadVars_66, ArgInitialInsts_71, &InstAL_72);
    InstMap0_73 = hlds__instmap__instmap_from_assoc_list_1_f_0(InstAL_72);
    check_hlds__modecheck_util__get_live_vars_3_p_0(HeadVars_66, ArgLives0_68, &LiveVarsList_74);
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveVarsList_74, &LiveVars_75);
    check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0(STATE_VARIABLE_ModuleInfo_0_29, ArgModes0_67, &HeadInstVars_76);
    check_hlds__mode_info__mode_info_init_10_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredId_13, ProcId_14, Context_65, LiveVars_75, HeadInstVars_76, InstMap0_73, WhatToCheck_11, MayChangeCalledProc_12, &STATE_VARIABLE_ModeInfo_70_96);
    check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(STATE_VARIABLE_Changed_0_31, STATE_VARIABLE_ModeInfo_70_96, &STATE_VARIABLE_ModeInfo_71_97);
    check_hlds__mode_util__mode_list_get_final_insts_3_p_0(STATE_VARIABLE_ModuleInfo_0_29, ArgModes0_67, &ArgFinalInsts0_77);
    check_hlds__modes__do_modecheck_proc_body_15_p_0(STATE_VARIABLE_ModuleInfo_0_29, WhatToCheck_11, InferModes_57, IsUnifyPred_58, Markers_56, PredId_13, ProcId_14, Body0_69, &Body1_141, HeadVars_66, InstMap0_73, ArgFinalInsts0_77, &ArgFinalInsts1_142, STATE_VARIABLE_ModeInfo_71_97, &ModeInfo1_143);
    check_hlds__mode_info__mode_info_get_errors_2_p_0(ModeInfo1_143, &ModeErrors1_144);
    if ((ModeErrors1_144 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      Body_78 = Body1_141;
      ArgFinalInsts_79 = ArgFinalInsts1_142;
      STATE_VARIABLE_ModeInfo_72_98 = ModeInfo1_143;
    }
    else
    {
      MR_Word HadFromGroundTerm_147;

      check_hlds__mode_info__mode_info_get_had_from_ground_term_2_p_0(ModeInfo1_143, &HadFromGroundTerm_147);
      switch (HadFromGroundTerm_147) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            Body_78 = Body1_141;
            ArgFinalInsts_79 = ArgFinalInsts1_142;
            STATE_VARIABLE_ModeInfo_72_98 = ModeInfo1_143;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word ModeInfo2_148;

            check_hlds__mode_info__mode_info_set_make_ground_terms_unique_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_71_97, &ModeInfo2_148);
            check_hlds__modes__do_modecheck_proc_body_15_p_0(STATE_VARIABLE_ModuleInfo_0_29, WhatToCheck_11, InferModes_57, IsUnifyPred_58, Markers_56, PredId_13, ProcId_14, Body0_69, &Body_78, HeadVars_66, InstMap0_73, ArgFinalInsts0_77, &ArgFinalInsts_79, ModeInfo2_148, &STATE_VARIABLE_ModeInfo_72_98);
          }
          break;
      }
    }
    check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_72_98, &ModeErrors_80);
    switch (InferModes_57) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          hlds__hlds_pred__proc_info_set_mode_errors_3_p_0(ModeErrors_80, ProcInfo0_15, &STATE_VARIABLE_ProcInfo_77_103);
          *Specs_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 0:
        {
          succeeded = ((((MR_tag((MR_Word) Origin_59)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_59, (MR_Integer) 0)))) == (MR_Integer) 7)));
          if (succeeded)
            *Specs_18 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word AllErrorSpecs_84;
            MR_Word ErrorSpecs_87;
            MR_Word StateVarWarningSpecs_88;
            MR_Word ModeWarnings_89;
            MR_Word WarningSpecs_90;
            MR_Word Var_99;
            MR_Word Var_101;
            MR_Word Var_102;

            {
              Var_99 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (check_hlds__modes__definitely_modecheck_proc_10_p_0_1));
              MR_hl_field(MR_mktag(0), Var_99, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_99, 3) = ((MR_Box) (STATE_VARIABLE_ModeInfo_72_98));
            }
            AllErrorSpecs_84 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_99, ModeErrors_80);
            if ((AllErrorSpecs_84 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              ErrorSpecs_87 = (MR_Word) ((MR_Unsigned) 0U);
              StateVarWarningSpecs_88 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              MR_Word ErrorSpec_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AllErrorSpecs_84, (MR_Integer) 0))));

              {
                ErrorSpecs_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorSpecs_87, 0) = ((MR_Box) (ErrorSpec_85));
                MR_hl_field(MR_mktag(1), ErrorSpecs_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              hlds__hlds_pred__proc_info_get_statevar_warnings_2_p_0(ProcInfo0_15, &StateVarWarningSpecs_88);
            }
            check_hlds__mode_info__mode_info_get_warnings_2_p_0(STATE_VARIABLE_ModeInfo_72_98, &ModeWarnings_89);
            {
              Var_101 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_4[2]));
              MR_hl_field(MR_mktag(0), Var_101, 1) = ((MR_Box) (check_hlds__modes__definitely_modecheck_proc_10_p_0_2));
              MR_hl_field(MR_mktag(0), Var_101, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_101, 3) = ((MR_Box) (STATE_VARIABLE_ModeInfo_72_98));
            }
            WarningSpecs_90 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_101, ModeWarnings_89);
            Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), WarningSpecs_90, StateVarWarningSpecs_88);
            *Specs_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ErrorSpecs_87, Var_102);
          }
          STATE_VARIABLE_ProcInfo_77_103 = ProcInfo0_15;
        }
        break;
    }
    parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(ArgInitialInsts_71, ArgFinalInsts_79, &ArgModes_91);
    check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(STATE_VARIABLE_ModeInfo_72_98, STATE_VARIABLE_Changed_32);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_72_98, &STATE_VARIABLE_ModuleInfo_33_33);
    check_hlds__mode_info__mode_info_get_varset_2_p_0(STATE_VARIABLE_ModeInfo_72_98, &VarSet_92);
    check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_72_98, &VarTypes_93);
    check_hlds__mode_info__mode_info_get_need_to_requantify_2_p_0(STATE_VARIABLE_ModeInfo_72_98, &NeedToRequantify_94);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Body_78, STATE_VARIABLE_ProcInfo_77_103, &STATE_VARIABLE_ProcInfo_80_106);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_92, STATE_VARIABLE_ProcInfo_80_106, &STATE_VARIABLE_ProcInfo_81_107);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_93, STATE_VARIABLE_ProcInfo_81_107, &STATE_VARIABLE_ProcInfo_82_108);
    hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_91, STATE_VARIABLE_ProcInfo_82_108, &STATE_VARIABLE_ProcInfo_83_109);
    switch (NeedToRequantify_94) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ProcInfo_20 = STATE_VARIABLE_ProcInfo_83_109;
        break;
      case (MR_Integer) 0:
        hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_83_109, &ProcInfo_20);
        break;
    }
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_33_33, PredId_13, &PredInfo1_22);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo1_22, &ProcMap1_23);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_14)), ((MR_Box) (ProcInfo_20)), ProcMap1_23, &ProcMap_24);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcMap_24, PredInfo1_22, &PredInfo2_25);
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_21, PredInfo2_25, &PredInfo_26);
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_33_33, &PredMap1_27);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_13)), ((MR_Box) (PredInfo_26)), PredMap1_27, &PredMap_28);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredMap_28, STATE_VARIABLE_ModuleInfo_33_33, STATE_VARIABLE_ModuleInfo_30);
  }
}

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_Case_16;
    MR_Word conv9_STATE_VARIABLE_ModeInfo_27;

    check_hlds__modes__unique_modecheck_clause_switch_9_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), &conv10_Case_16, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_ModeInfo_27);
    *wrapper_arg_2 = ((MR_Box) (conv10_Case_16));
    *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_ModeInfo_27));
  }
}

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_Disjunct_20;
    MR_Word conv6_STATE_VARIABLE_ModeInfo_24;

    check_hlds__modes__unique_modecheck_clause_disj_11_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), &conv7_Disjunct_20, ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_ModeInfo_24);
    *wrapper_arg_2 = ((MR_Box) (conv7_Disjunct_20));
    *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_ModeInfo_24));
  }
}

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_Case_16;
    MR_Word conv3_STATE_VARIABLE_ModeInfo_27;

    check_hlds__modes__modecheck_clause_switch_9_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), &conv4_Case_16, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_ModeInfo_27);
    *wrapper_arg_2 = ((MR_Box) (conv4_Case_16));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_ModeInfo_27));
  }
}

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Disjunct_14;
    MR_Word conv0_STATE_VARIABLE_ModeInfo_18;

    check_hlds__modes__modecheck_clause_disj_8_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv1_Disjunct_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ModeInfo_18);
    *wrapper_arg_2 = ((MR_Box) (conv1_Disjunct_14));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ModeInfo_18));
  }
}

static MR_bool MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__type_util__var_is_or_may_contain_solver_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
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
  {
    MR_bool succeeded;
    MR_String CheckpointMsg_30;
    MR_Integer Var_69;
    MR_Integer Var_72;
    MR_String Var_149;
    MR_String Var_157;
    MR_String Var_158;
    MR_String Var_165;
    MR_Word BodyGoalInfo0_32;
    MR_Word ClausesForm0_36;
    MR_Word BodyNonLocals_42;
    MR_Word TypeInfo_119_119;
    MR_Word TypeCtorInfo_121_121;
    MR_Word BodyGoalExpr0_31;
    MR_Word VarTypes0_43;
    MR_Word SolverNonLocals_44;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;

    Var_69 = hlds__hlds_pred__pred_id_to_int_1_f_0(PredId_21);
    Var_72 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_22);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__modes_scalar_common_3[1]), Var_72, &Var_149);
    Var_157 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_149);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__modes_scalar_common_3[1]), Var_69, &Var_158);
    Var_165 = mercury__string__f_43_43_2_f_0(Var_158, Var_157);
    CheckpointMsg_30 = mercury__string__f_43_43_2_f_0((MR_String) "procedure_", Var_165);
    succeeded = (InferModes_18 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_74 = (MR_Integer) 22;
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_20, Var_74);
      if (succeeded)
      {
        BodyGoalExpr0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Body0_23, (MR_Integer) 0))));
        BodyGoalInfo0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Body0_23, (MR_Integer) 1))));
        if (((((MR_tag((MR_Word) BodyGoalExpr0_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), BodyGoalExpr0_31, (MR_Integer) 0)))) == (MR_Integer) 3))))
        {
          MR_Word Disjuncts0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), BodyGoalExpr0_31, (MR_Integer) 1))));

          succeeded = (Disjuncts0_33 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            {
              ClausesForm0_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ClausesForm0_36, 0) = ((MR_Box) (Disjuncts0_33));
            }
            succeeded = MR_TRUE;
          }
        }
        else
        if (((((MR_tag((MR_Word) BodyGoalExpr0_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), BodyGoalExpr0_31, (MR_Integer) 0)))) == (MR_Integer) 4))))
        {
          MR_Word SwitchVar0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), BodyGoalExpr0_31, (MR_Integer) 1))));
          MR_Word CanFail0_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), BodyGoalExpr0_31, (MR_Integer) 2))) & (MR_Integer) 1);
          MR_Word Cases0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), BodyGoalExpr0_31, (MR_Integer) 3))));

          succeeded = (Cases0_39 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            {
              ClausesForm0_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ClausesForm0_36, 0) = ((MR_Box) (SwitchVar0_37));
              MR_hl_field(MR_mktag(1), ClausesForm0_36, 1) = (MR_Box) ((MR_Unsigned) (CanFail0_38));
              MR_hl_field(MR_mktag(1), ClausesForm0_36, 2) = ((MR_Box) (Cases0_39));
            }
            succeeded = MR_TRUE;
          }
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          BodyNonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(BodyGoalInfo0_32);
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_0_64, &VarTypes0_43);
          TypeInfo_119_119 = (MR_Word) (&check_hlds__modes_scalar_common_1[1]);
          TypeCtorInfo_121_121 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          {
            Var_75 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_1));
            MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (ModuleInfo_16));
            MR_hl_field(MR_mktag(0), Var_75, 4) = ((MR_Box) (VarTypes0_43));
          }
          Var_76 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_121_121, BodyNonLocals_42);
          SolverNonLocals_44 = mercury__list__filter_2_f_0(TypeInfo_119_119, Var_75, Var_76);
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
      MR_Word STATE_VARIABLE_ModeInfo_77_77;

      BodyContext_45 = hlds__hlds_goal__goal_info_get_context_1_f_0(BodyGoalInfo0_32);
      succeeded = mercury__term__is_dummy_context_1_p_0(BodyContext_45);
      if (succeeded)
        STATE_VARIABLE_ModeInfo_77_77 = STATE_VARIABLE_ModeInfo_0_64;
      else
        check_hlds__mode_info__mode_info_set_context_3_p_0(BodyContext_45, STATE_VARIABLE_ModeInfo_0_64, &STATE_VARIABLE_ModeInfo_77_77);
      switch (WhatToCheck_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          if (((MR_tag((MR_Word) ClausesForm0_36)) == (MR_Integer) 0))
          {
            MR_Word Disjuncts1_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesForm0_36, (MR_Integer) 0))));
            MR_Word Disjuncts2_47;
            MR_Word Disjuncts_48;
            MR_Word Var_89;
            MR_Box conv2_STATE_VARIABLE_ModeInfo_65;

            hlds__goal_util__flatten_disj_2_p_0(Disjuncts1_46, &Disjuncts2_47);
            {
              Var_89 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_2));
              MR_hl_field(MR_mktag(0), Var_89, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(0), Var_89, 3) = ((MR_Box) (CheckpointMsg_30));
              MR_hl_field(MR_mktag(0), Var_89, 4) = ((MR_Box) (HeadVars_25));
              MR_hl_field(MR_mktag(0), Var_89, 5) = ((MR_Box) (InstMap0_26));
              MR_hl_field(MR_mktag(0), Var_89, 6) = ((MR_Box) (ArgFinalInsts0_27));
            }
            mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0), Var_89, Disjuncts2_47, &Disjuncts_48, ((MR_Box) (STATE_VARIABLE_ModeInfo_77_77)), &conv2_STATE_VARIABLE_ModeInfo_65);
            *STATE_VARIABLE_ModeInfo_65 = ((MR_Word) (conv2_STATE_VARIABLE_ModeInfo_65));
            {
              NewGoalExpr_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), NewGoalExpr_49, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), NewGoalExpr_49, 1) = ((MR_Box) (Disjuncts_48));
            }
          }
          else
          {
            MR_Word SwitchVar_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ClausesForm0_36, (MR_Integer) 0))));
            MR_Word CanFail_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ClausesForm0_36, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Cases1_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ClausesForm0_36, (MR_Integer) 2))));
            MR_Word Cases_53;
            MR_Word Var_87;
            MR_Box conv5_STATE_VARIABLE_ModeInfo_65;

            {
              Var_87 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_3));
              MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (CheckpointMsg_30));
              MR_hl_field(MR_mktag(0), Var_87, 4) = ((MR_Box) (HeadVars_25));
              MR_hl_field(MR_mktag(0), Var_87, 5) = ((MR_Box) (InstMap0_26));
              MR_hl_field(MR_mktag(0), Var_87, 6) = ((MR_Box) (ArgFinalInsts0_27));
              MR_hl_field(MR_mktag(0), Var_87, 7) = ((MR_Box) (SwitchVar_50));
            }
            mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0), Var_87, Cases1_52, &Cases_53, ((MR_Box) (STATE_VARIABLE_ModeInfo_77_77)), &conv5_STATE_VARIABLE_ModeInfo_65);
            *STATE_VARIABLE_ModeInfo_65 = ((MR_Word) (conv5_STATE_VARIABLE_ModeInfo_65));
            {
              NewGoalExpr_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), NewGoalExpr_49, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), NewGoalExpr_49, 1) = ((MR_Box) (SwitchVar_50));
              MR_hl_field(MR_mktag(3), NewGoalExpr_49, 2) = (MR_Box) ((MR_Unsigned) (CanFail_51));
              MR_hl_field(MR_mktag(3), NewGoalExpr_49, 3) = ((MR_Box) (Cases_53));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word NondetLiveVars0_54;
            MR_Word Detism_55;
            MR_Word NonLocals_56;
            MR_Word SolnCount_58;
            MR_Word STATE_VARIABLE_ModeInfo_79_79;
            MR_Word Var_57;

            check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(STATE_VARIABLE_ModeInfo_77_77, &NondetLiveVars0_54);
            Detism_55 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(BodyGoalInfo0_32);
            NonLocals_56 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(BodyGoalInfo0_32);
            parse_tree__prog_data__determinism_components_3_p_0(Detism_55, &Var_57, &SolnCount_58);
            switch (SolnCount_58) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 3:
                STATE_VARIABLE_ModeInfo_79_79 = STATE_VARIABLE_ModeInfo_77_77;
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 1:
              case (MR_Integer) 0:
                {
                  MR_Word Var_78;

                  Var_78 = mercury__bag__init_0_f_0((MR_Word) (&check_hlds__modes_scalar_common_1[1]));
                  check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(Var_78, STATE_VARIABLE_ModeInfo_77_77, &STATE_VARIABLE_ModeInfo_79_79);
                }
                break;
            }
            if (((MR_tag((MR_Word) ClausesForm0_36)) == (MR_Integer) 0))
            {
              MR_Word STATE_VARIABLE_ModeInfo_84_84;
              MR_Word Var_85;
              MR_Word Disjuncts1_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesForm0_36, (MR_Integer) 0))));
              MR_Word Disjuncts2_99;
              MR_Word Disjuncts_100;
              MR_Box conv8_STATE_VARIABLE_ModeInfo_65;

              hlds__goal_util__flatten_disj_2_p_0(Disjuncts1_98, &Disjuncts2_99);
              switch (SolnCount_58) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 3:
                  {
                    MR_Word STATE_VARIABLE_ModeInfo_82_82;
                    MR_Word STATE_VARIABLE_ModeInfo_83_83;

                    check_hlds__mode_info__mode_info_add_live_vars_3_p_0(NonLocals_56, STATE_VARIABLE_ModeInfo_79_79, &STATE_VARIABLE_ModeInfo_82_82);
                    check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(STATE_VARIABLE_ModeInfo_82_82, &STATE_VARIABLE_ModeInfo_83_83);
                    check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(NonLocals_56, STATE_VARIABLE_ModeInfo_83_83, &STATE_VARIABLE_ModeInfo_84_84);
                  }
                  break;
                case (MR_Integer) 2:
                  STATE_VARIABLE_ModeInfo_84_84 = STATE_VARIABLE_ModeInfo_79_79;
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_ModeInfo_84_84 = STATE_VARIABLE_ModeInfo_79_79;
                  break;
                case (MR_Integer) 0:
                  STATE_VARIABLE_ModeInfo_84_84 = STATE_VARIABLE_ModeInfo_79_79;
                  break;
              }
              {
                Var_85 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_7[0]));
                MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_4));
                MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (CheckpointMsg_30));
                MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) (HeadVars_25));
                MR_hl_field(MR_mktag(0), Var_85, 5) = ((MR_Box) (InstMap0_26));
                MR_hl_field(MR_mktag(0), Var_85, 6) = ((MR_Box) (ArgFinalInsts0_27));
                MR_hl_field(MR_mktag(0), Var_85, 7) = ((MR_Box) (Detism_55));
                MR_hl_field(MR_mktag(0), Var_85, 8) = ((MR_Box) (NonLocals_56));
                MR_hl_field(MR_mktag(0), Var_85, 9) = ((MR_Box) (NondetLiveVars0_54));
              }
              mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0), Var_85, Disjuncts2_99, &Disjuncts_100, ((MR_Box) (STATE_VARIABLE_ModeInfo_84_84)), &conv8_STATE_VARIABLE_ModeInfo_65);
              *STATE_VARIABLE_ModeInfo_65 = ((MR_Word) (conv8_STATE_VARIABLE_ModeInfo_65));
              {
                NewGoalExpr_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), NewGoalExpr_49, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), NewGoalExpr_49, 1) = ((MR_Box) (Disjuncts_100));
              }
            }
            else
            {
              MR_Word Var_80;
              MR_Word SwitchVar_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ClausesForm0_36, (MR_Integer) 0))));
              MR_Word CanFail_102 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ClausesForm0_36, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Cases1_103 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ClausesForm0_36, (MR_Integer) 2))));
              MR_Word Cases_104;
              MR_Box conv11_STATE_VARIABLE_ModeInfo_65;

              {
                Var_80 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[0]));
                MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_5));
                MR_hl_field(MR_mktag(0), Var_80, 2) = ((MR_Box) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(0), Var_80, 3) = ((MR_Box) (CheckpointMsg_30));
                MR_hl_field(MR_mktag(0), Var_80, 4) = ((MR_Box) (HeadVars_25));
                MR_hl_field(MR_mktag(0), Var_80, 5) = ((MR_Box) (InstMap0_26));
                MR_hl_field(MR_mktag(0), Var_80, 6) = ((MR_Box) (ArgFinalInsts0_27));
                MR_hl_field(MR_mktag(0), Var_80, 7) = ((MR_Box) (SwitchVar_101));
              }
              mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0), Var_80, Cases1_103, &Cases_104, ((MR_Box) (STATE_VARIABLE_ModeInfo_79_79)), &conv11_STATE_VARIABLE_ModeInfo_65);
              *STATE_VARIABLE_ModeInfo_65 = ((MR_Word) (conv11_STATE_VARIABLE_ModeInfo_65));
              {
                NewGoalExpr_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), NewGoalExpr_49, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), NewGoalExpr_49, 1) = ((MR_Box) (SwitchVar_101));
                MR_hl_field(MR_mktag(3), NewGoalExpr_49, 2) = (MR_Box) ((MR_Unsigned) (CanFail_102));
                MR_hl_field(MR_mktag(3), NewGoalExpr_49, 3) = ((MR_Box) (Cases_104));
              }
            }
          }
          break;
      }
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__modes_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), HeadVars_25, ArgFinalInsts0_27, &HeadVarFinalInsts_59);
      FinalInstMap_60 = hlds__instmap__instmap_from_assoc_list_1_f_0(HeadVarFinalInsts_59);
      hlds__instmap__compute_instmap_delta_4_p_0(InstMap0_26, FinalInstMap_60, BodyNonLocals_42, &DeltaInstMap_61);
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(DeltaInstMap_61, BodyGoalInfo0_32, &BodyGoalInfo_62);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Body_24 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NewGoalExpr_49));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (BodyGoalInfo_62));
      }
      *ArgFinalInsts_28 = ArgFinalInsts0_27;
    }
    else
    {
      MR_Word GroundMatchesBound_63;
      MR_Word STATE_VARIABLE_ModeInfo_92_92;
      MR_Word STATE_VARIABLE_ModeInfo_94_94;
      MR_Word STATE_VARIABLE_ModeInfo_96_96;
      MR_Word ModuleInfo_175;
      MR_Word Errors_176;
      MR_Word Changed0_179;
      MR_Word InstMap_180;
      MR_Word VarTypes_181;
      MR_Word VarFinalInsts0_182;
      MR_Word ArgTypes_183;

      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, CheckpointMsg_30, STATE_VARIABLE_ModeInfo_0_64, &STATE_VARIABLE_ModeInfo_92_92);
      switch (WhatToCheck_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(Body0_23, Body_24, STATE_VARIABLE_ModeInfo_92_92, &STATE_VARIABLE_ModeInfo_94_94);
          break;
        case (MR_Integer) 1:
          check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Body0_23, Body_24, STATE_VARIABLE_ModeInfo_92_92, &STATE_VARIABLE_ModeInfo_94_94);
          break;
      }
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, CheckpointMsg_30, STATE_VARIABLE_ModeInfo_94_94, &STATE_VARIABLE_ModeInfo_96_96);
      switch (IsUnifyPred_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          GroundMatchesBound_63 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          GroundMatchesBound_63 = (MR_Integer) 1;
          break;
      }
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_96_96, &ModuleInfo_175);
      check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_96_96, &Errors_176);
      if ((Errors_176 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Changed0_179 = (MR_Integer) 0;
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_96_96, &InstMap_180);
      }
      else
      {
        Changed0_179 = (MR_Integer) 1;
        hlds__instmap__init_unreachable_1_p_0(&InstMap_180);
      }
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_96_96, &VarTypes_181);
      hlds__instmap__instmap_lookup_vars_3_p_0(InstMap_180, HeadVars_25, &VarFinalInsts0_182);
      hlds__vartypes__lookup_var_types_3_p_0(VarTypes_181, HeadVars_25, &ArgTypes_183);
      switch (InferModes_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word PredId_184;
            MR_Integer ProcId_185;
            MR_Word ProcInfo_186;
            MR_Word ArgLives_187;
            MR_Word VarFinalInsts1_188;
            MR_Word Changed1_190;
            MR_Word Changed2_191;
            MR_Word Changed_192;
            MR_Word STATE_VARIABLE_ModeInfo_40_199;
            MR_Word Var_200;
            MR_Word Var_201;
            MR_Word Var_202;

            check_hlds__mode_info__mode_info_get_pred_id_2_p_0(STATE_VARIABLE_ModeInfo_96_96, &PredId_184);
            check_hlds__mode_info__mode_info_get_proc_id_2_p_0(STATE_VARIABLE_ModeInfo_96_96, &ProcId_185);
            hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_175, PredId_184, ProcId_185, &ProcInfo_186);
            hlds__hlds_pred__proc_info_arglives_3_p_0(ModuleInfo_175, ProcInfo_186, &ArgLives_187);
            check_hlds__modecheck_util__normalise_insts_4_p_0(ModuleInfo_175, ArgTypes_183, VarFinalInsts0_182, &VarFinalInsts1_188);
            check_hlds__modes__maybe_clobber_insts_3_p_0(VarFinalInsts1_188, ArgLives_187, ArgFinalInsts_28);
            check_hlds__modes__check_final_insts_10_p_0(InferModes_18, GroundMatchesBound_63, HeadVars_25, *ArgFinalInsts_28, ArgFinalInsts0_27, (MR_Integer) 1, (MR_Integer) 0, &Changed1_190, STATE_VARIABLE_ModeInfo_96_96, &STATE_VARIABLE_ModeInfo_40_199);
            check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(STATE_VARIABLE_ModeInfo_40_199, &Changed2_191);
            {
              Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) (Changed2_191));
              MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_201, 0) = ((MR_Box) (Changed1_190));
              MR_hl_field(MR_mktag(1), Var_201, 1) = ((MR_Box) (Var_202));
            }
            {
              Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_200, 0) = ((MR_Box) (Changed0_179));
              MR_hl_field(MR_mktag(1), Var_200, 1) = ((MR_Box) (Var_201));
            }
            mercury__bool__or_list_2_p_0(Var_200, &Changed_192);
            check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(Changed_192, STATE_VARIABLE_ModeInfo_40_199, STATE_VARIABLE_ModeInfo_65);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word _Changed1_193;

            check_hlds__modes__check_final_insts_10_p_0(InferModes_18, GroundMatchesBound_63, HeadVars_25, VarFinalInsts0_182, ArgFinalInsts0_27, (MR_Integer) 1, (MR_Integer) 0, &_Changed1_193, STATE_VARIABLE_ModeInfo_96_96, STATE_VARIABLE_ModeInfo_65);
            *ArgFinalInsts_28 = ArgFinalInsts0_27;
          }
          break;
      }
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
        HeadVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_13, (MR_Integer) 0))));
        TailVars_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_13, (MR_Integer) 1))));
        succeeded = (VarInsts_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadVarInst_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarInsts_14, (MR_Integer) 0))));
          TailVarInsts_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarInsts_14, (MR_Integer) 1))));
          succeeded = (ExpectedInsts_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadExpectedInst_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ExpectedInsts_15, (MR_Integer) 0))));
            TailExpectedInsts_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ExpectedInsts_15, (MR_Integer) 1))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Changed_29_29;
        MR_Word STATE_VARIABLE_ModeInfo_30_30;
        MR_Integer Var_31;
        MR_Word ModuleInfo_49;
        MR_Word VarTypes_50;
        MR_Word Type_51;
        MR_Word next_value_of_Vars_13;
        MR_Word next_value_of_VarInsts_14;
        MR_Word next_value_of_ExpectedInsts_15;
        MR_Integer next_value_of_ArgNum_16;
        MR_Word next_value_of_STATE_VARIABLE_Changed_0_25;
        MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_27;

        check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_27, &ModuleInfo_49);
        check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_0_27, &VarTypes_50);
        hlds__vartypes__lookup_var_type_3_p_0(VarTypes_50, HeadVar_19, &Type_51);
        succeeded = check_hlds__inst_match__inst_matches_final_gmb_5_p_0(ModuleInfo_49, GroundMatchesBound_12, Type_51, HeadVarInst_21, HeadExpectedInst_23);
        if (succeeded)
        {
          STATE_VARIABLE_ModeInfo_30_30 = STATE_VARIABLE_ModeInfo_0_27;
          STATE_VARIABLE_Changed_29_29 = STATE_VARIABLE_Changed_0_25;
        }
        else
        {
          STATE_VARIABLE_Changed_29_29 = (MR_Integer) 1;
          switch (InferModes_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              STATE_VARIABLE_ModeInfo_30_30 = STATE_VARIABLE_ModeInfo_0_27;
              break;
            case (MR_Integer) 0:
              {
                MR_Word Reason_52;
                MR_Word WaitingVars_53;
                MR_Word ModeError_54;

                succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(ModuleInfo_49, Type_51, HeadVarInst_21, HeadExpectedInst_23);
                if (succeeded)
                  Reason_52 = (MR_Integer) 0;
                else
                {
                  {
                    MR_Word Var_56;
                    MR_Word Var_57;

                    succeeded = ((((MR_tag((MR_Word) HeadExpectedInst_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadExpectedInst_23, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadExpectedInst_23, (MR_Integer) 1))) & (MR_Integer) 7);
                      Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadExpectedInst_23, (MR_Integer) 2))));
                      succeeded = (Var_56 == (MR_Integer) 0);
                      if (succeeded)
                        succeeded = (Var_57 == (MR_Word) ((MR_Unsigned) 0U));
                    }
                  }
                  if (!(succeeded))
                    succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(ModuleInfo_49, Type_51, HeadExpectedInst_23, HeadVarInst_21);
                  if (succeeded)
                    Reason_52 = (MR_Integer) 1;
                  else
                    Reason_52 = (MR_Integer) 2;
                }
                parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars_53);
                {
                  ModeError_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ModeError_54, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                  MR_hl_field(MR_mktag(3), ModeError_54, 1) = ((MR_Box) (ArgNum_16));
                  MR_hl_field(MR_mktag(3), ModeError_54, 2) = ((MR_Box) (HeadVar_19));
                  MR_hl_field(MR_mktag(3), ModeError_54, 3) = ((MR_Box) (HeadVarInst_21));
                  MR_hl_field(MR_mktag(3), ModeError_54, 4) = ((MR_Box) (HeadExpectedInst_23));
                  MR_hl_field(MR_mktag(3), ModeError_54, 5) = (MR_Box) ((MR_Unsigned) (Reason_52));
                }
                check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_53, ModeError_54, STATE_VARIABLE_ModeInfo_0_27, &STATE_VARIABLE_ModeInfo_30_30);
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
        next_value_of_STATE_VARIABLE_Changed_0_25 = STATE_VARIABLE_Changed_29_29;
        next_value_of_STATE_VARIABLE_ModeInfo_0_27 = STATE_VARIABLE_ModeInfo_30_30;
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
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modes.maybe_clobber_insts\'/3", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word IsLive_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word IsLives_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Inst_18;
      MR_Word Insts_19;

      switch (IsLive_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Inst_18 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[3]));
          break;
        case (MR_Integer) 0:
          Inst_18 = Var_23;
          break;
      }
      check_hlds__modes__maybe_clobber_insts_3_p_0(Var_22, IsLives_17, &Insts_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_19));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__modes____Unify____clause_form_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__modes____Compare____clause_form_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__modes____Unify____include_detism_on_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__modes____Unify____include_detism_on_modes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modes____Compare____include_detism_on_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__modes____Compare____include_detism_on_modes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__modes____Unify____maybe_infer_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__modes____Unify____maybe_infer_modes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modes____Compare____maybe_infer_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__modes____Compare____maybe_infer_modes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__modes____Unify____maybe_unify_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__modes____Unify____maybe_unify_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modes____Compare____maybe_unify_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__modes____Compare____maybe_unify_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
