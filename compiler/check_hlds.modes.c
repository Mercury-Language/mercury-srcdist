/*
** Automatically generated from `modes.m'
** by the Mercury compiler,
** version rotd-2017-01-16
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


/* :- module check_hlds.modes. */
/* :- implementation. */

/*
INIT mercury__check_hlds__modes__init
ENDINIT
*/

#include "check_hlds.modes.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_debug.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.modecheck_goal.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.switch_detection.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "check_hlds.unique_modes.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s {
  MR_bool check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded;
  MR_Word check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcTable_71;
  jmp_buf check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__commit_0;
  MR_Word check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcInfo_81;
  MR_Word check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__V_84_84;
  MR_Integer check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0___ProcId_73;
  MR_Box check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv2__ProcId_73;
  MR_Box check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv1_ProcInfo_81;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_0[1];

static const MR_DuFunctorDesc check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0;

static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_1[3];

static const MR_DuFunctorDesc check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1;

static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_1[1];

static const MR_DuPtagLayout check_hlds__modes__check_hlds__modes__du_ptag_ordered_clause_form_0[2];

static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_name_ordered_clause_form_0[2];

static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_clause_form_0[2];

static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0_10001(
  MR_Box check_hlds__modes__wrapper_arg_1,
  MR_Box check_hlds__modes__wrapper_arg_2);

static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0_10001(
  MR_Box * check_hlds__modes__wrapper_arg_1,
  MR_Box check_hlds__modes__wrapper_arg_2,
  MR_Box check_hlds__modes__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1082__1_2_p_0(
  MR_Word check_hlds__modes__DetismSpecs_37,
  MR_Word check_hlds__modes__HeadVar__2_56);

static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0(
  MR_Word * check_hlds__modes__HeadVar__1_1,
  MR_Word check_hlds__modes__HeadVar__2_2,
  MR_Word check_hlds__modes__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0(
  MR_Word check_hlds__modes__HeadVar__1_1,
  MR_Word check_hlds__modes__HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__modes__only_nonunique_modes_2_p_0(
  MR_Word check_hlds__modes__HeadVar__1_1,
  MR_Word check_hlds__modes__ModuleInfo_2);

static MR_bool MR_CALL 
check_hlds__modes__only_fully_in_out_modes_2_p_0(
  MR_Word check_hlds__modes__HeadVar__1_1,
  MR_Word check_hlds__modes__ModuleInfo_2);

static void MR_CALL 
check_hlds__modes__proc_check_eval_methods_5_p_0(
  MR_Word check_hlds__modes__ModuleInfo_1,
  MR_Word check_hlds__modes__PredId_2,
  MR_Word check_hlds__modes__HeadVar__3_3,
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_4,
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_5);

static void MR_CALL 
check_hlds__modes__pred_check_eval_methods_4_p_0(
  MR_Word check_hlds__modes__ModuleInfo_1,
  MR_Word check_hlds__modes__HeadVar__2_2,
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_3,
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_4);

static void MR_CALL 
check_hlds__modes__check_final_insts_13_p_0(
  MR_Word check_hlds__modes__Vars_14,
  MR_Word check_hlds__modes__Insts_15,
  MR_Word check_hlds__modes__VarInsts_16,
  MR_Word check_hlds__modes__InferModes_17,
  MR_Word check_hlds__modes__GroundMatchesBound_18,
  MR_Integer check_hlds__modes__ArgNum_19,
  MR_Word check_hlds__modes__ModuleInfo_20,
  MR_Word check_hlds__modes__STATE_VARIABLE_Goal_0_35,
  MR_Word * check_hlds__modes__STATE_VARIABLE_Goal_36,
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_37,
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_38,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_40);

static void MR_CALL 
check_hlds__modes__maybe_clobber_insts_3_p_0(
  MR_Word check_hlds__modes__HeadVar__1_1,
  MR_Word check_hlds__modes__HeadVar__2_2,
  MR_Word * check_hlds__modes__HeadVar__3_3);

static void MR_CALL 
check_hlds__modes__modecheck_final_insts_8_p_0(
  MR_Word check_hlds__modes__HeadVars_9,
  MR_Word check_hlds__modes__InferModes_10,
  MR_Word check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14,
  MR_Word * check_hlds__modes__STATE_VARIABLE_FinalInsts_15,
  MR_Word check_hlds__modes__STATE_VARIABLE_Body_0_16,
  MR_Word * check_hlds__modes__STATE_VARIABLE_Body_17,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19);

static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_switch_9_p_0(
  MR_String check_hlds__modes__CheckpointMsg_10,
  MR_Word check_hlds__modes__HeadVars_11,
  MR_Word check_hlds__modes__InstMap0_12,
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
  MR_Word check_hlds__modes__Var_14,
  MR_Word check_hlds__modes__Case0_15,
  MR_Word * check_hlds__modes__Case_16,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28);

static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_disj_11_p_0(
  MR_String check_hlds__modes__CheckpointMsg_12,
  MR_Word check_hlds__modes__HeadVars_13,
  MR_Word check_hlds__modes__InstMap0_14,
  MR_Word check_hlds__modes__ArgFinalInsts0_15,
  MR_Word check_hlds__modes__DisjDetism_16,
  MR_Word check_hlds__modes__DisjNonLocals_17,
  MR_Word check_hlds__modes__NondetLiveVars0_18,
  MR_Word check_hlds__modes__Disjunct0_19,
  MR_Word * check_hlds__modes__Disjunct_20,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_24,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_25);

static void MR_CALL 
check_hlds__modes__modecheck_clause_switch_9_p_0(
  MR_String check_hlds__modes__CheckpointMsg_10,
  MR_Word check_hlds__modes__HeadVars_11,
  MR_Word check_hlds__modes__InstMap0_12,
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
  MR_Word check_hlds__modes__Var_14,
  MR_Word check_hlds__modes__Case0_15,
  MR_Word * check_hlds__modes__Case_16,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28);

static void MR_CALL 
check_hlds__modes__modecheck_clause_disj_8_p_0(
  MR_String check_hlds__modes__CheckpointMsg_9,
  MR_Word check_hlds__modes__HeadVars_10,
  MR_Word check_hlds__modes__InstMap0_11,
  MR_Word check_hlds__modes__ArgFinalInsts0_12,
  MR_Word check_hlds__modes__Disjunct0_13,
  MR_Word * check_hlds__modes__Disjunct_14,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19);

static MR_bool MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0_1(
  MR_Box check_hlds__modes__closure_arg);

static void MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0(
  MR_Word check_hlds__modes__HowToCheckGoal_8,
  MR_Word check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26,
  MR_Word * check_hlds__modes__STATE_VARIABLE_OldPredTable_27,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_29,
  MR_Word * check_hlds__modes__Changed_11,
  MR_Word * check_hlds__modes__Specs_12);

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_5(
  MR_Box check_hlds__modes__closure_arg,
  MR_Box check_hlds__modes__wrapper_arg_1,
  MR_Box * check_hlds__modes__wrapper_arg_2,
  MR_Box check_hlds__modes__wrapper_arg_3,
  MR_Box * check_hlds__modes__wrapper_arg_4);

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_4(
  MR_Box check_hlds__modes__closure_arg,
  MR_Box check_hlds__modes__wrapper_arg_1,
  MR_Box * check_hlds__modes__wrapper_arg_2,
  MR_Box check_hlds__modes__wrapper_arg_3,
  MR_Box * check_hlds__modes__wrapper_arg_4);

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_3(
  MR_Box check_hlds__modes__closure_arg,
  MR_Box check_hlds__modes__wrapper_arg_1,
  MR_Box * check_hlds__modes__wrapper_arg_2,
  MR_Box check_hlds__modes__wrapper_arg_3,
  MR_Box * check_hlds__modes__wrapper_arg_4);

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_2(
  MR_Box check_hlds__modes__closure_arg,
  MR_Box check_hlds__modes__wrapper_arg_1,
  MR_Box * check_hlds__modes__wrapper_arg_2,
  MR_Box check_hlds__modes__wrapper_arg_3,
  MR_Box * check_hlds__modes__wrapper_arg_4);

static MR_bool MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_1(
  MR_Box check_hlds__modes__closure_arg,
  MR_Box check_hlds__modes__wrapper_arg_1);

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0(
  MR_Word check_hlds__modes__ModuleInfo_16,
  MR_Word check_hlds__modes__WhatToCheck_17,
  MR_Word check_hlds__modes__InferModes_18,
  MR_Word check_hlds__modes__Markers_19,
  MR_Word check_hlds__modes__IsUnifyPred_20,
  MR_Word check_hlds__modes__PredId_21,
  MR_Integer check_hlds__modes__ProcId_22,
  MR_Word check_hlds__modes__Body0_23,
  MR_Word * check_hlds__modes__Body_24,
  MR_Word check_hlds__modes__HeadVars_25,
  MR_Word check_hlds__modes__InstMap0_26,
  MR_Word check_hlds__modes__ArgFinalInsts0_27,
  MR_Word * check_hlds__modes__ArgFinalInsts_28,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_67);

static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_2(
  MR_Box check_hlds__modes__closure_arg,
  MR_Box check_hlds__modes__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_1(
  MR_Box check_hlds__modes__closure_arg,
  MR_Box check_hlds__modes__wrapper_arg_1);

static void MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0(
  MR_Integer check_hlds__modes__ProcId_10,
  MR_Word check_hlds__modes__PredId_11,
  MR_Word check_hlds__modes__WhatToCheck_12,
  MR_Word check_hlds__modes__MayChangeCalledProc_13,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_24,
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_25,
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_26,
  MR_Word * check_hlds__modes__Specs_16);

static void MR_CALL 
check_hlds__modes__modecheck_procs_10_p_0(
  MR_Word check_hlds__modes__HeadVar__1_1,
  MR_Word check_hlds__modes__HeadVar__2_2,
  MR_Word check_hlds__modes__WhatToCheck_3,
  MR_Word check_hlds__modes__MayChangeCalledProc_4,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_6,
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_7,
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_8,
  MR_Word check_hlds__modes__HeadVar__9_9,
  MR_Word * check_hlds__modes__HeadVar__10_10);

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_1(
  void * check_hlds__modes__env_ptr_arg);

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_3(
  void * check_hlds__modes__env_ptr_arg);

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_2(
  void * check_hlds__modes__env_ptr_arg);

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_4(
  void * check_hlds__modes__env_ptr_arg);

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0(
  MR_Word check_hlds__modes__WhatToCheck_10,
  MR_Word check_hlds__modes__MayChangeCalledProc_11,
  MR_Word check_hlds__modes__PredId_12,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_26,
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_27,
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_28,
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_29,
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_30);

static void MR_CALL 
check_hlds__modes__copy_proc_body_4_p_0(
  MR_Word check_hlds__modes__OldProcTable_5,
  MR_Integer check_hlds__modes__ProcId_6,
  MR_Word check_hlds__modes__STATE_VARIABLE_ProcTable_0_12,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ProcTable_13);

static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0_1(
  MR_Box check_hlds__modes__closure_arg,
  MR_Box check_hlds__modes__wrapper_arg_1,
  MR_Box check_hlds__modes__wrapper_arg_2,
  MR_Box * check_hlds__modes__wrapper_arg_3);

static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0(
  MR_Word check_hlds__modes__OldPredTable_5,
  MR_Word check_hlds__modes__PredId_6,
  MR_Word check_hlds__modes__PredTable0_7,
  MR_Word * check_hlds__modes__PredTable_8);

static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_2(
  MR_Box check_hlds__modes__closure_arg,
  MR_Box check_hlds__modes__wrapper_arg_1,
  MR_Box check_hlds__modes__wrapper_arg_2,
  MR_Box * check_hlds__modes__wrapper_arg_3);

static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_1(
  MR_Box check_hlds__modes__closure_arg,
  MR_Box check_hlds__modes__wrapper_arg_1,
  MR_Box check_hlds__modes__wrapper_arg_2,
  MR_Box * check_hlds__modes__wrapper_arg_3,
  MR_Box check_hlds__modes__wrapper_arg_4,
  MR_Box * check_hlds__modes__wrapper_arg_5,
  MR_Box check_hlds__modes__wrapper_arg_6,
  MR_Box * check_hlds__modes__wrapper_arg_7);

static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0(
  MR_Word check_hlds__modes__PredIds_9,
  MR_Integer check_hlds__modes__MaxIterations_10,
  MR_Word check_hlds__modes__WhatToCheck_11,
  MR_Word check_hlds__modes__MayChangeCalledProc_12,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_32,
  MR_Word * check_hlds__modes__SafeToContinue_14,
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_33);


static /* final */ const MR_Box check_hlds__modes_scalar_common_1[52][2];

static /* final */ const MR_Box check_hlds__modes_scalar_common_2[4][3];

static /* final */ const MR_Box check_hlds__modes_scalar_common_3[4][1];

static /* final */ const MR_Box check_hlds__modes_scalar_common_4[2][12];

static /* final */ const MR_Box check_hlds__modes_scalar_common_5[2][7];

static /* final */ const MR_Box check_hlds__modes_scalar_common_6[3][6];

static /* final */ const MR_Box check_hlds__modes_scalar_common_7[1][11];

static /* final */ const MR_Box check_hlds__modes_scalar_common_8[1][14];

static /* final */ const MR_Box check_hlds__modes_scalar_common_9[1][5];




static /* final */ const MR_Box check_hlds__modes_scalar_common_1[52][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "iterations.)"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with partially instantiated modes."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[4])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration not allowed for procedure"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not currently implemented."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[4])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with partially instantiated modes"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Tabling of predicates/functions"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with unique modes."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[4])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in them no longer being unique."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[4])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of the unique arguments which would result"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not allowed as this would lead to a copying"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Tabling of predicates/functions with unique modes"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[4])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "(di, uo)"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must have mode"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (&check_hlds__modes_scalar_common_3[0])),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__modes_scalar_common_1[34]))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[33])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Mode analysis iteration limit exceeded."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "You may need to declare the modes explicitly"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or use the"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--mode-inference-iteration-limit"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option to increase the limit."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(The current limit is"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Sorry, not implemented:"))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[16])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__modes_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[27])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__modes_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 51 */
  {
    ((MR_Box) (&check_hlds__modes_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__modes_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__modes_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "main"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[38])))
  },
};

static /* final */ const MR_Box check_hlds__modes_scalar_common_4[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
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

static /* final */ const MR_Box check_hlds__modes_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__modes__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__modes__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&check_hlds__modes__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box check_hlds__modes_scalar_common_6[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__modes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__modes_scalar_common_7[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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

static /* final */ const MR_Box check_hlds__modes_scalar_common_8[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
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

static /* final */ const MR_Box check_hlds__modes_scalar_common_9[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__modes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0 = {
  (MR_String) "clause_disj",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__modes__check_hlds__modes__field_types_clause_form_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0
  }
};

static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_1[3] = {
  (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_can_fail_0,
  (MR_PseudoTypeInfo) &check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0
};

static const MR_DuFunctorDesc check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1 = {
  (MR_String) "clause_switch",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__modes__check_hlds__modes__field_types_clause_form_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_0[1] = {
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0
};

static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_1[1] = {
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1
};

static const MR_DuPtagLayout check_hlds__modes__check_hlds__modes__du_ptag_ordered_clause_form_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modes____Unify____clause_form_0_0_10001)),
  ((MR_Box) (check_hlds__modes____Compare____clause_form_0_0_10001)),
  (MR_String) "check_hlds.modes",
  (MR_String) "clause_form",
  {     check_hlds__modes__check_hlds__modes__du_name_ordered_clause_form_0 },
  {     check_hlds__modes__check_hlds__modes__du_ptag_ordered_clause_form_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__modes__check_hlds__modes__functor_number_map_clause_form_0
};

static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0_10001(
  MR_Box check_hlds__modes__wrapper_arg_1,
  MR_Box check_hlds__modes__wrapper_arg_2)
{
  {
    MR_bool check_hlds__modes__succeeded;

    {
      check_hlds__modes__succeeded = check_hlds__modes____Unify____clause_form_0_0(((MR_Word) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2));
    }
    return check_hlds__modes__succeeded;
  }
}

static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0_10001(
  MR_Box * check_hlds__modes__wrapper_arg_1,
  MR_Box check_hlds__modes__wrapper_arg_2,
  MR_Box check_hlds__modes__wrapper_arg_3)
{
  {
    MR_Word check_hlds__modes__conv0_HeadVar__1_1;

    {
      check_hlds__modes____Compare____clause_form_0_0(&check_hlds__modes__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modes__wrapper_arg_2), ((MR_Word) check_hlds__modes__wrapper_arg_3));
    }
    *check_hlds__modes__wrapper_arg_1 = ((MR_Box) (check_hlds__modes__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1082__1_2_p_0(
  MR_Word check_hlds__modes__DetismSpecs_37,
  MR_Word check_hlds__modes__HeadVar__2_56)
{
  {
    MR_bool check_hlds__modes__succeeded;

    {
      check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modes_scalar_common_1[0], ((MR_Box) (check_hlds__modes__DetismSpecs_37)), ((MR_Box) (check_hlds__modes__HeadVar__2_56)));
    }
    return check_hlds__modes__succeeded;
  }
}

static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0(
  MR_Word * check_hlds__modes__HeadVar__1_1,
  MR_Word check_hlds__modes__HeadVar__2_2,
  MR_Word check_hlds__modes__HeadVar__3_3)
{
  {
    MR_bool check_hlds__modes__succeeded;
    MR_Integer check_hlds__modes__CastX_22 = (MR_Integer) check_hlds__modes__HeadVar__2_2;
    MR_Integer check_hlds__modes__CastY_23 = (MR_Integer) check_hlds__modes__HeadVar__3_3;

    check_hlds__modes__succeeded = (check_hlds__modes__CastX_22 == check_hlds__modes__CastY_23);
    if (check_hlds__modes__succeeded)
      *check_hlds__modes__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word check_hlds__modes__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word check_hlds__modes__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[3], check_hlds__modes__HeadVar__1_1, ((MR_Box) (check_hlds__modes__V_28_28)), ((MR_Box) (check_hlds__modes__V_5_5)));
            }
          }
        else
          *check_hlds__modes__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Word check_hlds__modes__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__modes__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__modes__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *check_hlds__modes__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word check_hlds__modes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__modes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__modes__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 2)));
            MR_Word check_hlds__modes__V_20_20;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[1], &check_hlds__modes__V_20_20, ((MR_Box) (check_hlds__modes__V_31_31)), ((MR_Box) (check_hlds__modes__V_17_17)));
            }
            check_hlds__modes__succeeded = (check_hlds__modes__V_20_20 == (MR_Integer) 0);
            check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
            if (check_hlds__modes__succeeded)
              *check_hlds__modes__HeadVar__1_1 = check_hlds__modes__V_20_20;
            else
              {
                MR_Word check_hlds__modes__V_21_21;
                MR_Integer check_hlds__modes__V_32_32 = (MR_Integer) check_hlds__modes__V_30_30;
                MR_Integer check_hlds__modes__V_33_33 = (MR_Integer) check_hlds__modes__V_18_18;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__modes__V_21_21, check_hlds__modes__V_32_32, check_hlds__modes__V_33_33);
                }
                check_hlds__modes__succeeded = (check_hlds__modes__V_21_21 == (MR_Integer) 0);
                check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
                if (check_hlds__modes__succeeded)
                  *check_hlds__modes__HeadVar__1_1 = check_hlds__modes__V_21_21;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[2], check_hlds__modes__HeadVar__1_1, ((MR_Box) (check_hlds__modes__V_29_29)), ((MR_Box) (check_hlds__modes__V_19_19)));
                    }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0(
  MR_Word check_hlds__modes__HeadVar__1_1,
  MR_Word check_hlds__modes__HeadVar__2_2)
{
  {
    MR_bool check_hlds__modes__succeeded;
    MR_Integer check_hlds__modes__CastX_11 = (MR_Integer) check_hlds__modes__HeadVar__1_1;
    MR_Integer check_hlds__modes__CastY_12 = (MR_Integer) check_hlds__modes__HeadVar__2_2;

    check_hlds__modes__succeeded = (check_hlds__modes__CastX_11 == check_hlds__modes__CastY_12);
    if (check_hlds__modes__succeeded)
      check_hlds__modes__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word check_hlds__modes__TypeInfo_13_13;
        MR_Word check_hlds__modes__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__modes__V_4_4;

        check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (check_hlds__modes__succeeded)
          {
            check_hlds__modes__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
            check_hlds__modes__TypeInfo_13_13 = (MR_Word) &check_hlds__modes_scalar_common_1[3];
            {
              check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modes__TypeInfo_13_13, ((MR_Box) (check_hlds__modes__V_3_3)), ((MR_Box) (check_hlds__modes__V_4_4)));
            }
          }
      }
    else
      {
        MR_Word check_hlds__modes__TypeInfo_14_14;
        MR_Word check_hlds__modes__TypeInfo_15_15;
        MR_Word check_hlds__modes__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__modes__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__modes__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__modes__V_8_8;
        MR_Word check_hlds__modes__V_9_9;
        MR_Word check_hlds__modes__V_10_10;

        check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__modes__succeeded)
          {
            check_hlds__modes__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
            check_hlds__modes__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
            check_hlds__modes__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 2)));
            check_hlds__modes__TypeInfo_14_14 = (MR_Word) &check_hlds__modes_scalar_common_1[1];
            {
              check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modes__TypeInfo_14_14, ((MR_Box) (check_hlds__modes__V_5_5)), ((MR_Box) (check_hlds__modes__V_8_8)));
            }
            if (check_hlds__modes__succeeded)
              {
                check_hlds__modes__succeeded = (check_hlds__modes__V_6_6 == check_hlds__modes__V_9_9);
                if (check_hlds__modes__succeeded)
                  {
                    check_hlds__modes__TypeInfo_15_15 = (MR_Word) &check_hlds__modes_scalar_common_1[2];
                    {
                      check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modes__TypeInfo_15_15, ((MR_Box) (check_hlds__modes__V_7_7)), ((MR_Box) (check_hlds__modes__V_10_10)));
                    }
                  }
              }
          }
      }
    return check_hlds__modes__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modes__only_nonunique_modes_2_p_0(
  MR_Word check_hlds__modes__HeadVar__1_1,
  MR_Word check_hlds__modes__ModuleInfo_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modes__succeeded;

        if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__modes__succeeded = MR_TRUE;
        else
          {
            MR_Word check_hlds__modes__Mode_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__modes__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__modes__InitialInst_7;
            MR_Word check_hlds__modes__FinalInst_8;

            {
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__Mode_4, &check_hlds__modes__InitialInst_7, &check_hlds__modes__FinalInst_8);
            }
            {
              check_hlds__modes__succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__InitialInst_7);
            }
            if (check_hlds__modes__succeeded)
              {
                {
                  check_hlds__modes__succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__FinalInst_8);
                }
                if (check_hlds__modes__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word check_hlds__modes__HeadVar__1__tmp_copy_1 = check_hlds__modes__Rest_5;

                      check_hlds__modes__HeadVar__1_1 = check_hlds__modes__HeadVar__1__tmp_copy_1;
                    }
                    continue;
                  }
              }
          }
        return check_hlds__modes__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__modes__only_fully_in_out_modes_2_p_0(
  MR_Word check_hlds__modes__HeadVar__1_1,
  MR_Word check_hlds__modes__ModuleInfo_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modes__succeeded;

        if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__modes__succeeded = MR_TRUE;
        else
          {
            MR_Word check_hlds__modes__Mode_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__modes__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__modes__InitialInst_7;
            MR_Word check_hlds__modes__FinalInst_8;

            {
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__Mode_4, &check_hlds__modes__InitialInst_7, &check_hlds__modes__FinalInst_8);
            }
            {
              check_hlds__modes__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__InitialInst_7);
            }
            if (!(check_hlds__modes__succeeded))
              {
                {
                  check_hlds__modes__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__InitialInst_7);
                }
                if (check_hlds__modes__succeeded)
                  {
                    {
                      check_hlds__modes__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__FinalInst_8);
                    }
                    if (!(check_hlds__modes__succeeded))
                      {
                        check_hlds__modes__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__FinalInst_8);
                      }
                  }
              }
            if (check_hlds__modes__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__modes__HeadVar__1__tmp_copy_1 = check_hlds__modes__Rest_5;

                  check_hlds__modes__HeadVar__1_1 = check_hlds__modes__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__modes__succeeded;
      }
      break;
    }
}

static void MR_CALL 
check_hlds__modes__proc_check_eval_methods_5_p_0(
  MR_Word check_hlds__modes__ModuleInfo_1,
  MR_Word check_hlds__modes__PredId_2,
  MR_Word check_hlds__modes__HeadVar__3_3,
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_4,
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modes__succeeded;

        if ((check_hlds__modes__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__modes__STATE_VARIABLE_Specs_5 = check_hlds__modes__STATE_VARIABLE_Specs_0_4;
        else
          {
            MR_Integer check_hlds__modes__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__modes__ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__modes__PredInfo_16;
            MR_Word check_hlds__modes__ProcInfo_17;
            MR_Word check_hlds__modes__EvalMethod_18;
            MR_Word check_hlds__modes__Modes_19;
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_26_26;
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_28_28;
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_31_31;
            MR_Word check_hlds__modes__V_25_25;
            MR_Word check_hlds__modes__V_27_27;
            MR_String check_hlds__modes__V_29_29;
            MR_Integer check_hlds__modes__V_30_30;
            MR_Word check_hlds__modes__Di_123;
            MR_Word check_hlds__modes__Uo_124;
            MR_Word check_hlds__modes__DiInitialInst_125;
            MR_Word check_hlds__modes__DiFinalInst_126;
            MR_Word check_hlds__modes__UoInitialInst_127;
            MR_Word check_hlds__modes__UoFinalInst_128;
            MR_Word check_hlds__modes__Unique_129;
            MR_Word check_hlds__modes__Clobbered_130;
            MR_Word check_hlds__modes__Free_131;
            MR_Word check_hlds__modes__V_133_133;
            MR_Word check_hlds__modes__V_134_134;
            MR_Word check_hlds__modes__V_135_135;
            MR_Word check_hlds__modes__V_136_136;
            MR_Word check_hlds__modes__V_137_137;
            MR_Word check_hlds__modes__V_138_138;
            MR_Word check_hlds__modes__V_139_139;
            MR_Word check_hlds__modes__V_140_140;
            MR_Word check_hlds__modes__V_141_141;

            {
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__PredId_2, check_hlds__modes__ProcId_13, &check_hlds__modes__PredInfo_16, &check_hlds__modes__ProcInfo_17);
            }
            {
              hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__EvalMethod_18);
            }
            {
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Modes_19);
            }
            {
              check_hlds__modes__V_25_25 = hlds__hlds_pred__eval_method_requires_ground_args_1_f_0(check_hlds__modes__EvalMethod_18);
            }
            check_hlds__modes__succeeded = (check_hlds__modes__V_25_25 == (MR_Integer) 1);
            if (check_hlds__modes__succeeded)
              {
                {
                  check_hlds__modes__succeeded = check_hlds__modes__only_fully_in_out_modes_2_p_0(check_hlds__modes__Modes_19, check_hlds__modes__ModuleInfo_1);
                }
                check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
              }
            if (check_hlds__modes__succeeded)
              {
                MR_Word check_hlds__modes__GroundArgsSpec_20;
                MR_Word check_hlds__modes__EvalMethod_35;
                MR_Word check_hlds__modes__Context_36;
                MR_String check_hlds__modes__EvalMethodS_37;
                MR_Word check_hlds__modes__MainPieces_38;
                MR_Word check_hlds__modes__Msg_40;
                MR_Word check_hlds__modes__V_43_43;
                MR_Word check_hlds__modes__V_44_44;
                MR_Word check_hlds__modes__V_65_65;
                MR_Word check_hlds__modes__V_66_66;
                MR_Word check_hlds__modes__V_74_74;

                {
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__EvalMethod_35);
                }
                {
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Context_36);
                }
                {
                  check_hlds__modes__EvalMethodS_37 = parse_tree__prog_out__eval_method_to_string_1_f_0(check_hlds__modes__EvalMethod_35);
                }
                {
                  check_hlds__modes__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_44_44, 1) = ((MR_Box) (check_hlds__modes__EvalMethodS_37));
                }
                {
                  check_hlds__modes__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_43_43, 0) = ((MR_Box) (check_hlds__modes__V_44_44));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[10])));
                }
                {
                  check_hlds__modes__MainPieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[45])));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_38, 1) = ((MR_Box) (check_hlds__modes__V_43_43));
                }
                {
                  check_hlds__modes__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_66_66, 0) = ((MR_Box) (check_hlds__modes__MainPieces_38));
                }
                {
                  check_hlds__modes__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_65_65, 0) = ((MR_Box) (check_hlds__modes__V_66_66));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[47])));
                }
                {
                  check_hlds__modes__Msg_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_40, 0) = ((MR_Box) (check_hlds__modes__Context_36));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_40, 1) = ((MR_Box) (check_hlds__modes__V_65_65));
                }
                {
                  check_hlds__modes__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_74_74, 0) = ((MR_Box) (check_hlds__modes__Msg_40));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__modes__GroundArgsSpec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__modes__GroundArgsSpec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__GroundArgsSpec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[1])));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__GroundArgsSpec_20, 2) = ((MR_Box) (check_hlds__modes__V_74_74));
                }
                {
                  check_hlds__modes__STATE_VARIABLE_Specs_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_26_26, 0) = ((MR_Box) (check_hlds__modes__GroundArgsSpec_20));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_26_26, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_0_4));
                }
              }
            else
              check_hlds__modes__STATE_VARIABLE_Specs_26_26 = check_hlds__modes__STATE_VARIABLE_Specs_0_4;
            {
              check_hlds__modes__V_27_27 = hlds__hlds_pred__eval_method_destroys_uniqueness_1_f_0(check_hlds__modes__EvalMethod_18);
            }
            check_hlds__modes__succeeded = (check_hlds__modes__V_27_27 == (MR_Integer) 1);
            if (check_hlds__modes__succeeded)
              {
                {
                  check_hlds__modes__succeeded = check_hlds__modes__only_nonunique_modes_2_p_0(check_hlds__modes__Modes_19, check_hlds__modes__ModuleInfo_1);
                }
                check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
              }
            if (check_hlds__modes__succeeded)
              {
                MR_Word check_hlds__modes__UniquenessSpec_21;
                MR_Word check_hlds__modes__EvalMethod_78;
                MR_Word check_hlds__modes__Context_79;
                MR_String check_hlds__modes__EvalMethodS_80;
                MR_Word check_hlds__modes__MainPieces_81;
                MR_Word check_hlds__modes__Msg_83;
                MR_Word check_hlds__modes__V_86_86;
                MR_Word check_hlds__modes__V_87_87;
                MR_Word check_hlds__modes__V_111_111;
                MR_Word check_hlds__modes__V_112_112;
                MR_Word check_hlds__modes__V_120_120;

                {
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__EvalMethod_78);
                }
                {
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Context_79);
                }
                {
                  check_hlds__modes__EvalMethodS_80 = parse_tree__prog_out__eval_method_to_string_1_f_0(check_hlds__modes__EvalMethod_78);
                }
                {
                  check_hlds__modes__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_87_87, 1) = ((MR_Box) (check_hlds__modes__EvalMethodS_80));
                }
                {
                  check_hlds__modes__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_86_86, 0) = ((MR_Box) (check_hlds__modes__V_87_87));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[19])));
                }
                {
                  check_hlds__modes__MainPieces_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[48])));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_81, 1) = ((MR_Box) (check_hlds__modes__V_86_86));
                }
                {
                  check_hlds__modes__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_112_112, 0) = ((MR_Box) (check_hlds__modes__MainPieces_81));
                }
                {
                  check_hlds__modes__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_111_111, 0) = ((MR_Box) (check_hlds__modes__V_112_112));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[50])));
                }
                {
                  check_hlds__modes__Msg_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_83, 0) = ((MR_Box) (check_hlds__modes__Context_79));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_83, 1) = ((MR_Box) (check_hlds__modes__V_111_111));
                }
                {
                  check_hlds__modes__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_120_120, 0) = ((MR_Box) (check_hlds__modes__Msg_83));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__modes__UniquenessSpec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__modes__UniquenessSpec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__UniquenessSpec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[1])));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__UniquenessSpec_21, 2) = ((MR_Box) (check_hlds__modes__V_120_120));
                }
                {
                  check_hlds__modes__STATE_VARIABLE_Specs_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_28_28, 0) = ((MR_Box) (check_hlds__modes__UniquenessSpec_21));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_28_28, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_26_26));
                }
              }
            else
              check_hlds__modes__STATE_VARIABLE_Specs_28_28 = check_hlds__modes__STATE_VARIABLE_Specs_26_26;
            {
              check_hlds__modes__V_29_29 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__modes__PredInfo_16);
            }
            check_hlds__modes__succeeded = (strcmp(check_hlds__modes__V_29_29, (MR_String) "main") == 0);
            if (check_hlds__modes__succeeded)
              {
                {
                  check_hlds__modes__V_30_30 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__modes__PredInfo_16);
                }
                check_hlds__modes__succeeded = (check_hlds__modes__V_30_30 == (MR_Integer) 2);
                if (check_hlds__modes__succeeded)
                  {
                    {
                      check_hlds__modes__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(check_hlds__modes__PredInfo_16);
                    }
                    if (check_hlds__modes__succeeded)
                      {
                        check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Modes_19)) == (MR_mktag((MR_Integer) 1)));
                        if (check_hlds__modes__succeeded)
                          {
                            check_hlds__modes__Di_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Modes_19, (MR_Integer) 0)));
                            check_hlds__modes__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Modes_19, (MR_Integer) 1)));
                            check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__V_133_133)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__modes__succeeded)
                              {
                                check_hlds__modes__Uo_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__V_133_133, (MR_Integer) 0)));
                                check_hlds__modes__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__V_133_133, (MR_Integer) 1)));
                                check_hlds__modes__succeeded = (check_hlds__modes__V_134_134 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (check_hlds__modes__succeeded)
                                  {
                                    {
                                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__Di_123, &check_hlds__modes__DiInitialInst_125, &check_hlds__modes__DiFinalInst_126);
                                    }
                                    {
                                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__Uo_124, &check_hlds__modes__UoInitialInst_127, &check_hlds__modes__UoFinalInst_128);
                                    }
                                    check_hlds__modes__V_135_135 = (MR_Integer) 1;
                                    check_hlds__modes__V_136_136 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                    check_hlds__modes__V_137_137 = (MR_Integer) 3;
                                    check_hlds__modes__V_138_138 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                    check_hlds__modes__Unique_129 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[3]);
                                    check_hlds__modes__Clobbered_130 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[2]);
                                    {
                                      check_hlds__inst_util__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__DiInitialInst_125, &check_hlds__modes__V_139_139);
                                    }
                                    {
                                      check_hlds__modes__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modes__Unique_129, check_hlds__modes__V_139_139);
                                    }
                                    if (check_hlds__modes__succeeded)
                                      {
                                        {
                                          check_hlds__inst_util__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__DiFinalInst_126, &check_hlds__modes__V_140_140);
                                        }
                                        {
                                          check_hlds__modes__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modes__Clobbered_130, check_hlds__modes__V_140_140);
                                        }
                                        if (check_hlds__modes__succeeded)
                                          {
                                            {
                                              check_hlds__inst_util__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__UoInitialInst_127, &check_hlds__modes__Free_131);
                                            }
                                            if ((check_hlds__modes__Free_131 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              check_hlds__modes__succeeded = MR_TRUE;
                                            else
                                            if (((MR_tag((MR_Word) check_hlds__modes__Free_131)) == (MR_mktag((MR_Integer) 1))))
                                              check_hlds__modes__succeeded = MR_TRUE;
                                            else
                                              check_hlds__modes__succeeded = MR_FALSE;
                                            if (check_hlds__modes__succeeded)
                                              {
                                                {
                                                  check_hlds__inst_util__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__UoFinalInst_128, &check_hlds__modes__V_141_141);
                                                }
                                                {
                                                  check_hlds__modes__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modes__Unique_129, check_hlds__modes__V_141_141);
                                                }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
                      }
                  }
              }
            if (check_hlds__modes__succeeded)
              {
                MR_Word check_hlds__modes__MainSpec_22;
                MR_Word check_hlds__modes__Context_147;
                MR_Word check_hlds__modes__Msg_149;
                MR_Word check_hlds__modes__V_176_176;

                {
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Context_147);
                }
                {
                  check_hlds__modes__Msg_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_149, 0) = ((MR_Box) (check_hlds__modes__Context_147));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[51])));
                }
                {
                  check_hlds__modes__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_176_176, 0) = ((MR_Box) (check_hlds__modes__Msg_149));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_176_176, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__modes__MainSpec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__modes__MainSpec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__MainSpec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[1])));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__MainSpec_22, 2) = ((MR_Box) (check_hlds__modes__V_176_176));
                }
                {
                  check_hlds__modes__STATE_VARIABLE_Specs_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_31_31, 0) = ((MR_Box) (check_hlds__modes__MainSpec_22));
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_31_31, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_28_28));
                }
              }
            else
              check_hlds__modes__STATE_VARIABLE_Specs_31_31 = check_hlds__modes__STATE_VARIABLE_Specs_28_28;
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__modes__HeadVar__3__tmp_copy_3 = check_hlds__modes__ProcIds_14;
              MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_4 = check_hlds__modes__STATE_VARIABLE_Specs_31_31;

              check_hlds__modes__STATE_VARIABLE_Specs_0_4 = check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_4;
              check_hlds__modes__HeadVar__3_3 = check_hlds__modes__HeadVar__3__tmp_copy_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__modes__pred_check_eval_methods_4_p_0(
  MR_Word check_hlds__modes__ModuleInfo_1,
  MR_Word check_hlds__modes__HeadVar__2_2,
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_3,
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modes__succeeded;

        if ((check_hlds__modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__modes__STATE_VARIABLE_Specs_4 = check_hlds__modes__STATE_VARIABLE_Specs_0_3;
        else
          {
            MR_Word check_hlds__modes__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__modes__PredIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__modes__Preds_13;
            MR_Word check_hlds__modes__PredInfo_14;
            MR_Word check_hlds__modes__ProcIds_15;
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_18_18;
            MR_Box check_hlds__modes__conv0_PredInfo_14;

            {
              hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__ModuleInfo_1, &check_hlds__modes__Preds_13);
            }
            {
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__modes__Preds_13, ((MR_Box) (check_hlds__modes__PredId_10)), &check_hlds__modes__conv0_PredInfo_14);
            }
            check_hlds__modes__PredInfo_14 = ((MR_Word) check_hlds__modes__conv0_PredInfo_14);
            {
              check_hlds__modes__ProcIds_15 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__modes__PredInfo_14);
            }
            {
              check_hlds__modes__proc_check_eval_methods_5_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__PredId_10, check_hlds__modes__ProcIds_15, check_hlds__modes__STATE_VARIABLE_Specs_0_3, &check_hlds__modes__STATE_VARIABLE_Specs_18_18);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__modes__HeadVar__2__tmp_copy_2 = check_hlds__modes__PredIds_11;
              MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_3 = check_hlds__modes__STATE_VARIABLE_Specs_18_18;

              check_hlds__modes__STATE_VARIABLE_Specs_0_3 = check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_3;
              check_hlds__modes__HeadVar__2_2 = check_hlds__modes__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__modes__check_final_insts_13_p_0(
  MR_Word check_hlds__modes__Vars_14,
  MR_Word check_hlds__modes__Insts_15,
  MR_Word check_hlds__modes__VarInsts_16,
  MR_Word check_hlds__modes__InferModes_17,
  MR_Word check_hlds__modes__GroundMatchesBound_18,
  MR_Integer check_hlds__modes__ArgNum_19,
  MR_Word check_hlds__modes__ModuleInfo_20,
  MR_Word check_hlds__modes__STATE_VARIABLE_Goal_0_35,
  MR_Word * check_hlds__modes__STATE_VARIABLE_Goal_36,
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_37,
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_38,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_40)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modes__succeeded = (check_hlds__modes__Vars_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

        if (check_hlds__modes__succeeded)
          {
            check_hlds__modes__succeeded = (check_hlds__modes__Insts_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (check_hlds__modes__succeeded)
              check_hlds__modes__succeeded = (check_hlds__modes__VarInsts_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        if (check_hlds__modes__succeeded)
          {
            *check_hlds__modes__STATE_VARIABLE_ModeInfo_40 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39;
            *check_hlds__modes__STATE_VARIABLE_Changed_38 = check_hlds__modes__STATE_VARIABLE_Changed_0_37;
            *check_hlds__modes__STATE_VARIABLE_Goal_36 = check_hlds__modes__STATE_VARIABLE_Goal_0_35;
          }
        else
          {
            MR_Word check_hlds__modes__Var_24;
            MR_Word check_hlds__modes__VarsTail_25;
            MR_Word check_hlds__modes__Inst_26;
            MR_Word check_hlds__modes__InstsTail_27;
            MR_Word check_hlds__modes__VarInst_28;
            MR_Word check_hlds__modes__VarInstsTail_29;

            check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Vars_14)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__modes__succeeded)
              {
                check_hlds__modes__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Vars_14, (MR_Integer) 0)));
                check_hlds__modes__VarsTail_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Vars_14, (MR_Integer) 1)));
                check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Insts_15)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__modes__succeeded)
                  {
                    check_hlds__modes__Inst_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Insts_15, (MR_Integer) 0)));
                    check_hlds__modes__InstsTail_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Insts_15, (MR_Integer) 1)));
                    check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__VarInsts_16)) == (MR_mktag((MR_Integer) 1)));
                    if (check_hlds__modes__succeeded)
                      {
                        check_hlds__modes__VarInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__VarInsts_16, (MR_Integer) 0)));
                        check_hlds__modes__VarInstsTail_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__VarInsts_16, (MR_Integer) 1)));
                      }
                  }
              }
            if (check_hlds__modes__succeeded)
              {
                MR_Word check_hlds__modes__VarTypes_30;
                MR_Word check_hlds__modes__Type_31;
                MR_Word check_hlds__modes__STATE_VARIABLE_Changed_41_41;
                MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_44_44;
                MR_Integer check_hlds__modes__V_45_45;

                {
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modes__VarTypes_30);
                }
                {
                  hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modes__VarTypes_30, check_hlds__modes__Var_24, &check_hlds__modes__Type_31);
                }
                {
                  check_hlds__modes__succeeded = check_hlds__inst_match__inst_matches_final_gmb_5_p_0(check_hlds__modes__VarInst_28, check_hlds__modes__Inst_26, check_hlds__modes__Type_31, check_hlds__modes__ModuleInfo_20, check_hlds__modes__GroundMatchesBound_18);
                }
                if (check_hlds__modes__succeeded)
                  {
                    check_hlds__modes__STATE_VARIABLE_ModeInfo_44_44 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39;
                    check_hlds__modes__STATE_VARIABLE_Changed_41_41 = check_hlds__modes__STATE_VARIABLE_Changed_0_37;
                  }
                else
                  {
                    check_hlds__modes__STATE_VARIABLE_Changed_41_41 = (MR_Integer) 1;
                    switch (check_hlds__modes__InferModes_17) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word check_hlds__modes__Reason_32;
                          MR_Word check_hlds__modes__WaitingVars_33;
                          MR_Word check_hlds__modes__ModeError_34;

                          {
                            check_hlds__modes__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modes__VarInst_28, check_hlds__modes__Inst_26, check_hlds__modes__Type_31, check_hlds__modes__ModuleInfo_20);
                          }
                          if (check_hlds__modes__succeeded)
                            check_hlds__modes__Reason_32 = (MR_Integer) 0;
                          else
                            {
                              {
                                MR_Word check_hlds__modes__V_42_42;
                                MR_Word check_hlds__modes__V_43_43;

                                check_hlds__modes__succeeded = ((((MR_tag((MR_Word) check_hlds__modes__Inst_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__Inst_26, (MR_Integer) 0)))) == (MR_Integer) 1)));
                                if (check_hlds__modes__succeeded)
                                  {
                                    check_hlds__modes__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__Inst_26, (MR_Integer) 1)));
                                    check_hlds__modes__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__Inst_26, (MR_Integer) 2)));
                                    check_hlds__modes__succeeded = (check_hlds__modes__V_42_42 == (MR_Integer) 0);
                                    if (check_hlds__modes__succeeded)
                                      check_hlds__modes__succeeded = (check_hlds__modes__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  }
                              }
                              if (!(check_hlds__modes__succeeded))
                                {
                                  check_hlds__modes__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modes__Inst_26, check_hlds__modes__VarInst_28, check_hlds__modes__Type_31, check_hlds__modes__ModuleInfo_20);
                                }
                              if (check_hlds__modes__succeeded)
                                check_hlds__modes__Reason_32 = (MR_Integer) 1;
                              else
                                check_hlds__modes__Reason_32 = (MR_Integer) 2;
                            }
                          {
                            parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modes__WaitingVars_33);
                          }
                          {
                            check_hlds__modes__ModeError_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
                            MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 1) = ((MR_Box) (check_hlds__modes__ArgNum_19));
                            MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 2) = ((MR_Box) (check_hlds__modes__Var_24));
                            MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 3) = ((MR_Box) (check_hlds__modes__VarInst_28));
                            MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 4) = ((MR_Box) (check_hlds__modes__Inst_26));
                            MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 5) = ((MR_Box) (check_hlds__modes__Reason_32));
                          }
                          {
                            check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modes__WaitingVars_33, check_hlds__modes__ModeError_34, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modes__STATE_VARIABLE_ModeInfo_44_44);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        check_hlds__modes__STATE_VARIABLE_ModeInfo_44_44 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39;
                        break;
                    }
                  }
                check_hlds__modes__V_45_45 = (check_hlds__modes__ArgNum_19 + (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__modes__Vars__tmp_copy_14 = check_hlds__modes__VarsTail_25;
                  MR_Word check_hlds__modes__Insts__tmp_copy_15 = check_hlds__modes__InstsTail_27;
                  MR_Word check_hlds__modes__VarInsts__tmp_copy_16 = check_hlds__modes__VarInstsTail_29;
                  MR_Integer check_hlds__modes__ArgNum__tmp_copy_19 = check_hlds__modes__V_45_45;
                  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_37 = check_hlds__modes__STATE_VARIABLE_Changed_41_41;
                  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0__tmp_copy_39 = check_hlds__modes__STATE_VARIABLE_ModeInfo_44_44;

                  check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0__tmp_copy_39;
                  check_hlds__modes__STATE_VARIABLE_Changed_0_37 = check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_37;
                  check_hlds__modes__ArgNum_19 = check_hlds__modes__ArgNum__tmp_copy_19;
                  check_hlds__modes__VarInsts_16 = check_hlds__modes__VarInsts__tmp_copy_16;
                  check_hlds__modes__Insts_15 = check_hlds__modes__Insts__tmp_copy_15;
                  check_hlds__modes__Vars_14 = check_hlds__modes__Vars__tmp_copy_14;
                }
                continue;
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.check_final_insts\'/13", (MR_String) "length mismatch");
                  return;
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__modes__maybe_clobber_insts_3_p_0(
  MR_Word check_hlds__modes__HeadVar__1_1,
  MR_Word check_hlds__modes__HeadVar__2_2,
  MR_Word * check_hlds__modes__HeadVar__3_3)
{
  {
    MR_bool check_hlds__modes__succeeded;

    if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__modes__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.maybe_clobber_insts\'/3", (MR_String) "length mismatch");
            return;
          }
        }
    else
      {
        MR_Word check_hlds__modes__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__modes__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));

        if ((check_hlds__modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.maybe_clobber_insts\'/3", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Word check_hlds__modes__IsLive_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__modes__IsLives_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__modes__Inst_20;
            MR_Word check_hlds__modes__Insts_21;

            switch (check_hlds__modes__IsLive_18) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  check_hlds__modes__Inst_20 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[2]);
                }
                break;
              case (MR_Integer) 0:
                check_hlds__modes__Inst_20 = check_hlds__modes__V_25_25;
                break;
            }
            {
              check_hlds__modes__maybe_clobber_insts_3_p_0(check_hlds__modes__V_24_24, check_hlds__modes__IsLives_19, &check_hlds__modes__Insts_21);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__modes__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modes__Inst_20));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modes__Insts_21));
            }
          }
      }
  }
}

static void MR_CALL 
check_hlds__modes__modecheck_final_insts_8_p_0(
  MR_Word check_hlds__modes__HeadVars_9,
  MR_Word check_hlds__modes__InferModes_10,
  MR_Word check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14,
  MR_Word * check_hlds__modes__STATE_VARIABLE_FinalInsts_15,
  MR_Word check_hlds__modes__STATE_VARIABLE_Body_0_16,
  MR_Word * check_hlds__modes__STATE_VARIABLE_Body_17,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19)
{
  {
    MR_bool check_hlds__modes__succeeded;
    MR_Word check_hlds__modes__ModuleInfo_34;
    MR_Word check_hlds__modes__Errors_35;
    MR_Word check_hlds__modes__Changed0_38;
    MR_Word check_hlds__modes__InstMap_39;
    MR_Word check_hlds__modes__VarTypes_40;
    MR_Word check_hlds__modes__VarFinalInsts1_41;
    MR_Word check_hlds__modes__ArgTypes_42;

    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__ModuleInfo_34);
    }
    {
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__Errors_35);
    }
    if ((check_hlds__modes__Errors_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        check_hlds__modes__Changed0_38 = (MR_Integer) 0;
        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__InstMap_39);
        }
      }
    else
      {
        check_hlds__modes__Changed0_38 = (MR_Integer) 1;
        {
          hlds__instmap__init_unreachable_1_p_0(&check_hlds__modes__InstMap_39);
        }
      }
    {
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__VarTypes_40);
    }
    {
      hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modes__InstMap_39, check_hlds__modes__HeadVars_9, &check_hlds__modes__VarFinalInsts1_41);
    }
    {
      hlds__vartypes__lookup_var_types_3_p_0(check_hlds__modes__VarTypes_40, check_hlds__modes__HeadVars_9, &check_hlds__modes__ArgTypes_42);
    }
    switch (check_hlds__modes__InferModes_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__modes___Changed1_51;

          {
            check_hlds__modes__check_final_insts_13_p_0(check_hlds__modes__HeadVars_9, check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14, check_hlds__modes__VarFinalInsts1_41, check_hlds__modes__InferModes_10, (MR_Integer) 0, (MR_Integer) 1, check_hlds__modes__ModuleInfo_34, check_hlds__modes__STATE_VARIABLE_Body_0_16, check_hlds__modes__STATE_VARIABLE_Body_17, (MR_Integer) 0, &check_hlds__modes___Changed1_51, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, check_hlds__modes__STATE_VARIABLE_ModeInfo_19);
          }
          *check_hlds__modes__STATE_VARIABLE_FinalInsts_15 = check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__modes__VarFinalInsts2_43;
          MR_Word check_hlds__modes__PredId_44;
          MR_Integer check_hlds__modes__ProcId_45;
          MR_Word check_hlds__modes__ProcInfo_46;
          MR_Word check_hlds__modes__ArgLives_47;
          MR_Word check_hlds__modes__Changed1_48;
          MR_Word check_hlds__modes__Changed2_49;
          MR_Word check_hlds__modes__Changed_50;
          MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_43_57;
          MR_Word check_hlds__modes__V_58_58;
          MR_Word check_hlds__modes__V_59_59;
          MR_Word check_hlds__modes__V_60_60;

          {
            check_hlds__mode_util__normalise_insts_4_p_0(check_hlds__modes__ModuleInfo_34, check_hlds__modes__ArgTypes_42, check_hlds__modes__VarFinalInsts1_41, &check_hlds__modes__VarFinalInsts2_43);
          }
          {
            check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__PredId_44);
          }
          {
            check_hlds__mode_info__mode_info_get_proc_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__ProcId_45);
          }
          {
            hlds__hlds_module__module_info_proc_info_4_p_0(check_hlds__modes__ModuleInfo_34, check_hlds__modes__PredId_44, check_hlds__modes__ProcId_45, &check_hlds__modes__ProcInfo_46);
          }
          {
            hlds__hlds_pred__proc_info_arglives_3_p_0(check_hlds__modes__ProcInfo_46, check_hlds__modes__ModuleInfo_34, &check_hlds__modes__ArgLives_47);
          }
          {
            check_hlds__modes__maybe_clobber_insts_3_p_0(check_hlds__modes__VarFinalInsts2_43, check_hlds__modes__ArgLives_47, check_hlds__modes__STATE_VARIABLE_FinalInsts_15);
          }
          {
            check_hlds__modes__check_final_insts_13_p_0(check_hlds__modes__HeadVars_9, check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14, *check_hlds__modes__STATE_VARIABLE_FinalInsts_15, check_hlds__modes__InferModes_10, (MR_Integer) 0, (MR_Integer) 1, check_hlds__modes__ModuleInfo_34, check_hlds__modes__STATE_VARIABLE_Body_0_16, check_hlds__modes__STATE_VARIABLE_Body_17, (MR_Integer) 0, &check_hlds__modes__Changed1_48, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__STATE_VARIABLE_ModeInfo_43_57);
          }
          {
            check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_43_57, &check_hlds__modes__Changed2_49);
          }
          {
            check_hlds__modes__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_60_60, 0) = ((MR_Box) (check_hlds__modes__Changed2_49));
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__modes__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_59_59, 0) = ((MR_Box) (check_hlds__modes__Changed1_48));
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_59_59, 1) = ((MR_Box) (check_hlds__modes__V_60_60));
          }
          {
            check_hlds__modes__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_58_58, 0) = ((MR_Box) (check_hlds__modes__Changed0_38));
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_58_58, 1) = ((MR_Box) (check_hlds__modes__V_59_59));
          }
          {
            mercury__bool__or_list_2_p_0(check_hlds__modes__V_58_58, &check_hlds__modes__Changed_50);
          }
          {
            check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(check_hlds__modes__Changed_50, check_hlds__modes__STATE_VARIABLE_ModeInfo_43_57, check_hlds__modes__STATE_VARIABLE_ModeInfo_19);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_switch_9_p_0(
  MR_String check_hlds__modes__CheckpointMsg_10,
  MR_Word check_hlds__modes__HeadVars_11,
  MR_Word check_hlds__modes__InstMap0_12,
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
  MR_Word check_hlds__modes__Var_14,
  MR_Word check_hlds__modes__Case0_15,
  MR_Word * check_hlds__modes__Case_16,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28)
{
  {
    MR_bool check_hlds__modes__succeeded;
    MR_Word check_hlds__modes__MainConsId_18;
    MR_Word check_hlds__modes__OtherConsIds_19;
    MR_Word check_hlds__modes__Goal0_20;
    MR_Word check_hlds__modes__InstMap1_21;
    MR_Word check_hlds__modes__Goal1_22;
    MR_Word check_hlds__modes__InstMap_23;
    MR_Word check_hlds__modes__Goal2_24;
    MR_Word check_hlds__modes__Goal_26;
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30;
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31;
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33;
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35;
    MR_Word check_hlds__modes___ArgFinalInsts_25;

    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27, &check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30);
    }
    check_hlds__modes__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 0)));
    check_hlds__modes__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 1)));
    check_hlds__modes__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 2)));
    {
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31);
    }
    {
      check_hlds__modecheck_util__modecheck_functors_test_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__MainConsId_18, check_hlds__modes__OtherConsIds_19, check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32);
    }
    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__InstMap1_21);
    }
    {
      check_hlds__modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modes__InstMap1_21);
    }
    if (check_hlds__modes__succeeded)
      {
        check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modes__Goal0_20, &check_hlds__modes__Goal1_22, check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33);
      }
    else
      {
        {
          check_hlds__modes__Goal1_22 = hlds__make_goal__true_goal_0_f_0();
        }
        check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33 = check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
      }
    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__InstMap_23);
    }
    {
      check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__InstMap0_12, check_hlds__modes__InstMap_23, check_hlds__modes__Goal1_22, &check_hlds__modes__Goal2_24);
    }
    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35);
    }
    {
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_11, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_13, &check_hlds__modes___ArgFinalInsts_25, check_hlds__modes__Goal2_24, &check_hlds__modes__Goal_26, check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35, check_hlds__modes__STATE_VARIABLE_ModeInfo_28);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__modes__Case_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__MainConsId_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__OtherConsIds_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modes__Goal_26));
    }
  }
}

static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_disj_11_p_0(
  MR_String check_hlds__modes__CheckpointMsg_12,
  MR_Word check_hlds__modes__HeadVars_13,
  MR_Word check_hlds__modes__InstMap0_14,
  MR_Word check_hlds__modes__ArgFinalInsts0_15,
  MR_Word check_hlds__modes__DisjDetism_16,
  MR_Word check_hlds__modes__DisjNonLocals_17,
  MR_Word check_hlds__modes__NondetLiveVars0_18,
  MR_Word check_hlds__modes__Disjunct0_19,
  MR_Word * check_hlds__modes__Disjunct_20,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_24,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_25)
{
  {
    MR_bool check_hlds__modes__succeeded;
    MR_Word check_hlds__modes__Disjunct1_22;
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_27_27;
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_28_28;
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_29_29;
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30;
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31;
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33;
    MR_Word check_hlds__modes___ArgFinalInsts_23;

    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_24, &check_hlds__modes__STATE_VARIABLE_ModeInfo_27_27);
    }
    {
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_14, check_hlds__modes__STATE_VARIABLE_ModeInfo_27_27, &check_hlds__modes__STATE_VARIABLE_ModeInfo_28_28);
    }
    {
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__modes__NondetLiveVars0_18, check_hlds__modes__STATE_VARIABLE_ModeInfo_28_28, &check_hlds__modes__STATE_VARIABLE_ModeInfo_29_29);
    }
    {
      check_hlds__unique_modes__prepare_for_disjunct_5_p_0(check_hlds__modes__Disjunct0_19, check_hlds__modes__DisjDetism_16, check_hlds__modes__DisjNonLocals_17, check_hlds__modes__STATE_VARIABLE_ModeInfo_29_29, &check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30);
    }
    {
      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modes__Disjunct0_19, &check_hlds__modes__Disjunct1_22, check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31);
    }
    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33);
    }
    {
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_13, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_15, &check_hlds__modes___ArgFinalInsts_23, check_hlds__modes__Disjunct1_22, check_hlds__modes__Disjunct_20, check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, check_hlds__modes__STATE_VARIABLE_ModeInfo_25);
    }
  }
}

static void MR_CALL 
check_hlds__modes__modecheck_clause_switch_9_p_0(
  MR_String check_hlds__modes__CheckpointMsg_10,
  MR_Word check_hlds__modes__HeadVars_11,
  MR_Word check_hlds__modes__InstMap0_12,
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
  MR_Word check_hlds__modes__Var_14,
  MR_Word check_hlds__modes__Case0_15,
  MR_Word * check_hlds__modes__Case_16,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28)
{
  {
    MR_bool check_hlds__modes__succeeded;
    MR_Word check_hlds__modes__MainConsId_18;
    MR_Word check_hlds__modes__OtherConsIds_19;
    MR_Word check_hlds__modes__Goal0_20;
    MR_Word check_hlds__modes__InstMap1_21;
    MR_Word check_hlds__modes__Goal1_22;
    MR_Word check_hlds__modes__InstMap_23;
    MR_Word check_hlds__modes__Goal2_24;
    MR_Word check_hlds__modes__Goal_26;
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30;
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31;
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33;
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35;
    MR_Word check_hlds__modes___ArgFinalInsts_25;

    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27, &check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30);
    }
    check_hlds__modes__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 0)));
    check_hlds__modes__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 1)));
    check_hlds__modes__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 2)));
    {
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31);
    }
    {
      check_hlds__modecheck_util__modecheck_functors_test_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__MainConsId_18, check_hlds__modes__OtherConsIds_19, check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32);
    }
    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__InstMap1_21);
    }
    {
      check_hlds__modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modes__InstMap1_21);
    }
    if (check_hlds__modes__succeeded)
      {
        {
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modes__Goal0_20, &check_hlds__modes__Goal1_22, check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33);
        }
        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__InstMap_23);
        }
      }
    else
      {
        {
          check_hlds__modes__Goal1_22 = hlds__make_goal__true_goal_0_f_0();
        }
        check_hlds__modes__InstMap_23 = check_hlds__modes__InstMap1_21;
        check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33 = check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
      }
    {
      check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__InstMap0_12, check_hlds__modes__InstMap_23, check_hlds__modes__Goal1_22, &check_hlds__modes__Goal2_24);
    }
    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35);
    }
    {
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_11, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_13, &check_hlds__modes___ArgFinalInsts_25, check_hlds__modes__Goal2_24, &check_hlds__modes__Goal_26, check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35, check_hlds__modes__STATE_VARIABLE_ModeInfo_28);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__modes__Case_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__MainConsId_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__OtherConsIds_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modes__Goal_26));
    }
  }
}

static void MR_CALL 
check_hlds__modes__modecheck_clause_disj_8_p_0(
  MR_String check_hlds__modes__CheckpointMsg_9,
  MR_Word check_hlds__modes__HeadVars_10,
  MR_Word check_hlds__modes__InstMap0_11,
  MR_Word check_hlds__modes__ArgFinalInsts0_12,
  MR_Word check_hlds__modes__Disjunct0_13,
  MR_Word * check_hlds__modes__Disjunct_14,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19)
{
  {
    MR_bool check_hlds__modes__succeeded;
    MR_Word check_hlds__modes__Disjunct1_16;
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_21_21;
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_22_22;
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_23_23;
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_25_25;
    MR_Word check_hlds__modes___ArgFinalInsts_17;

    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_9, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__STATE_VARIABLE_ModeInfo_21_21);
    }
    {
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_11, check_hlds__modes__STATE_VARIABLE_ModeInfo_21_21, &check_hlds__modes__STATE_VARIABLE_ModeInfo_22_22);
    }
    {
      check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modes__Disjunct0_13, &check_hlds__modes__Disjunct1_16, check_hlds__modes__STATE_VARIABLE_ModeInfo_22_22, &check_hlds__modes__STATE_VARIABLE_ModeInfo_23_23);
    }
    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_9, check_hlds__modes__STATE_VARIABLE_ModeInfo_23_23, &check_hlds__modes__STATE_VARIABLE_ModeInfo_25_25);
    }
    {
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_10, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_12, &check_hlds__modes___ArgFinalInsts_17, check_hlds__modes__Disjunct1_16, check_hlds__modes__Disjunct_14, check_hlds__modes__STATE_VARIABLE_ModeInfo_25_25, check_hlds__modes__STATE_VARIABLE_ModeInfo_19);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0_1(
  MR_Box check_hlds__modes__closure_arg)
{
  {
    MR_bool check_hlds__modes__succeeded;
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;

    {
      check_hlds__modes__succeeded = check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1082__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))));
    }
    return check_hlds__modes__succeeded;
  }
}

static void MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0(
  MR_Word check_hlds__modes__HowToCheckGoal_8,
  MR_Word check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26,
  MR_Word * check_hlds__modes__STATE_VARIABLE_OldPredTable_27,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_29,
  MR_Word * check_hlds__modes__Changed_11,
  MR_Word * check_hlds__modes__Specs_12)
{
  {
    MR_bool check_hlds__modes__succeeded;
    MR_Word check_hlds__modes__Requests0_13;
    MR_Word check_hlds__modes__RequestQueue0_14;
    MR_Word check_hlds__modes__PredProcId_15;
    MR_Word check_hlds__modes__RequestQueue1_16;
    MR_Box check_hlds__modes__conv0_PredProcId_15;

    {
      hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28, &check_hlds__modes__Requests0_13);
    }
    {
      check_hlds__unify_proc__get_req_queue_2_p_0(check_hlds__modes__Requests0_13, &check_hlds__modes__RequestQueue0_14);
    }
    {
      check_hlds__modes__succeeded = mercury__queue__get_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, &check_hlds__modes__conv0_PredProcId_15, check_hlds__modes__RequestQueue0_14, &check_hlds__modes__RequestQueue1_16);
    }
    if (check_hlds__modes__succeeded)
      {
        check_hlds__modes__PredProcId_15 = ((MR_Word) check_hlds__modes__conv0_PredProcId_15);
        check_hlds__modes__succeeded = MR_TRUE;
      }
    if (check_hlds__modes__succeeded)
      {
        MR_Word check_hlds__modes__Requests1_17;
        MR_Word check_hlds__modes__PredId_18;
        MR_Word check_hlds__modes__ValidPredIds_20;
        MR_Word check_hlds__modes__HeadChanged_22;
        MR_Word check_hlds__modes__HeadSpecs_23;
        MR_Word check_hlds__modes__TailChanged_24;
        MR_Word check_hlds__modes__TailSpecs_25;
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30;
        MR_Word check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33;
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34;
        MR_Integer check_hlds__modes___ProcId_19;

        {
          check_hlds__unify_proc__set_req_queue_3_p_0(check_hlds__modes__RequestQueue1_16, check_hlds__modes__Requests0_13, &check_hlds__modes__Requests1_17);
        }
        {
          hlds__hlds_module__module_info_set_proc_requests_3_p_0(check_hlds__modes__Requests1_17, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30);
        }
        check_hlds__modes__PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 0)));
        check_hlds__modes___ProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 1)));
        {
          hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__modes__ValidPredIds_20);
        }
        {
          check_hlds__modes__succeeded = mercury__set_tree234__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (check_hlds__modes__PredId_18)), check_hlds__modes__ValidPredIds_20);
        }
        if (check_hlds__modes__succeeded)
          {
            MR_Word check_hlds__modes__TypeCtorInfo_61_110;
            MR_Word check_hlds__modes__TypeCtorInfo_62_111;
            MR_Word check_hlds__modes__TypeCtorInfo_64_113;
            MR_Word check_hlds__modes__PredId_69;
            MR_Integer check_hlds__modes__ProcId_70;
            MR_Word check_hlds__modes__Preds0_71;
            MR_Word check_hlds__modes__PredInfo0_72;
            MR_Word check_hlds__modes__Procs0_73;
            MR_Word check_hlds__modes__ProcInfo0_74;
            MR_Word check_hlds__modes__ProcInfo1_75;
            MR_Word check_hlds__modes__Procs1_76;
            MR_Word check_hlds__modes__PredInfo1_77;
            MR_Word check_hlds__modes__Preds1_78;
            MR_Word check_hlds__modes__ModeSpecs_79;
            MR_Word check_hlds__modes__Globals_80;
            MR_Word check_hlds__modes__ModeErrors_81;
            MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_46_95;
            MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96;
            MR_Word check_hlds__modes__STATE_VARIABLE_Changed_48_97;
            MR_Word check_hlds__modes__Globals_46;
            MR_Word check_hlds__modes__VeryVerbose_47;
            MR_Box check_hlds__modes__conv1_PredInfo0_72;
            MR_Box check_hlds__modes__conv2_ProcInfo0_74;

            {
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__modes__Globals_46);
            }
            {
              libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_46, (MR_Integer) 53, &check_hlds__modes__VeryVerbose_47);
            }
            switch (check_hlds__modes__VeryVerbose_47) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  switch (check_hlds__modes__HowToCheckGoal_8) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "% Mode-analyzing ");
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "% Analyzing modes, determinism, and unique-modes for\n% ");
                        }
                      }
                      break;
                  }
                  {
                    hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30, check_hlds__modes__PredProcId_15);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\n");
                  }
                }
                break;
            }
            check_hlds__modes__PredId_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 0)));
            check_hlds__modes__ProcId_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 1)));
            {
              hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__modes__Preds0_71);
            }
            check_hlds__modes__TypeCtorInfo_61_110 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
            check_hlds__modes__TypeCtorInfo_62_111 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
            {
              mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_61_110, check_hlds__modes__TypeCtorInfo_62_111, check_hlds__modes__Preds0_71, ((MR_Box) (check_hlds__modes__PredId_69)), &check_hlds__modes__conv1_PredInfo0_72);
            }
            check_hlds__modes__PredInfo0_72 = ((MR_Word) check_hlds__modes__conv1_PredInfo0_72);
            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__PredInfo0_72, &check_hlds__modes__Procs0_73);
            }
            check_hlds__modes__TypeCtorInfo_64_113 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__modes__TypeCtorInfo_64_113, check_hlds__modes__Procs0_73, check_hlds__modes__ProcId_70, &check_hlds__modes__conv2_ProcInfo0_74);
            }
            check_hlds__modes__ProcInfo0_74 = ((MR_Word) check_hlds__modes__conv2_ProcInfo0_74);
            {
              hlds__hlds_pred__proc_info_set_can_process_3_p_0((MR_Integer) 1, check_hlds__modes__ProcInfo0_74, &check_hlds__modes__ProcInfo1_75);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__modes__TypeCtorInfo_64_113, check_hlds__modes__ProcId_70, ((MR_Box) (check_hlds__modes__ProcInfo1_75)), check_hlds__modes__Procs0_73, &check_hlds__modes__Procs1_76);
            }
            {
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__modes__Procs1_76, check_hlds__modes__PredInfo0_72, &check_hlds__modes__PredInfo1_77);
            }
            {
              mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_61_110, check_hlds__modes__TypeCtorInfo_62_111, ((MR_Box) (check_hlds__modes__PredId_69)), ((MR_Box) (check_hlds__modes__PredInfo1_77)), check_hlds__modes__Preds0_71, &check_hlds__modes__Preds1_78);
            }
            {
              hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__Preds1_78, check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_46_95);
            }
            {
              check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_70, check_hlds__modes__PredId_69, (MR_Integer) 0, (MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ModuleInfo_46_95, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96, (MR_Integer) 0, &check_hlds__modes__STATE_VARIABLE_Changed_48_97, &check_hlds__modes__ModeSpecs_79);
            }
            {
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96, &check_hlds__modes__Globals_80);
            }
            {
              check_hlds__modes__ModeErrors_81 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__modes__Globals_80, check_hlds__modes__ModeSpecs_79);
            }
            switch (check_hlds__modes__ModeErrors_81) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (check_hlds__modes__HowToCheckGoal_8) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      check_hlds__modes__HeadSpecs_23 = check_hlds__modes__ModeSpecs_79;
                      check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
                      check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96;
                      check_hlds__modes__HeadChanged_22 = check_hlds__modes__STATE_VARIABLE_Changed_48_97;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word check_hlds__modes__TypeCtorInfo_19_150;
                      MR_Word check_hlds__modes__TypeCtorInfo_20_151;
                      MR_Word check_hlds__modes__Preds2_82;
                      MR_Word check_hlds__modes__PredInfo2_83;
                      MR_Word check_hlds__modes__Procs2_84;
                      MR_Word check_hlds__modes__ProcInfo2_85;
                      MR_Word check_hlds__modes__SwitchDetectInfo_86;
                      MR_Word check_hlds__modes__ProcInfo3_87;
                      MR_Word check_hlds__modes__Procs3_88;
                      MR_Word check_hlds__modes__PredInfo3_89;
                      MR_Word check_hlds__modes__Preds3_90;
                      MR_Word check_hlds__modes__DetismSpecs_91;
                      MR_Word check_hlds__modes__NewChanged_92;
                      MR_Word check_hlds__modes__UniqueSpecs_93;
                      MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_49_98;
                      MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_50_99;
                      MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_100;
                      MR_Word check_hlds__modes__V_101_101;
                      MR_Word check_hlds__modes__ProcInfo_144;
                      MR_Word check_hlds__modes__OldPredInfo0_145;
                      MR_Word check_hlds__modes__OldProcTable0_146;
                      MR_Word check_hlds__modes__OldProcTable_147;
                      MR_Word check_hlds__modes__OldPredInfo_148;
                      MR_Box check_hlds__modes__conv3_PredInfo2_83;
                      MR_Box check_hlds__modes__conv4_ProcInfo2_85;
                      MR_Word check_hlds__modes___PredInfo_143;
                      MR_Box check_hlds__modes__conv5_OldPredInfo0_145;

                      {
                        hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96, &check_hlds__modes__Preds2_82);
                      }
                      {
                        mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_61_110, check_hlds__modes__TypeCtorInfo_62_111, check_hlds__modes__Preds2_82, ((MR_Box) (check_hlds__modes__PredId_69)), &check_hlds__modes__conv3_PredInfo2_83);
                      }
                      check_hlds__modes__PredInfo2_83 = ((MR_Word) check_hlds__modes__conv3_PredInfo2_83);
                      {
                        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__PredInfo2_83, &check_hlds__modes__Procs2_84);
                      }
                      {
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__modes__TypeCtorInfo_64_113, check_hlds__modes__Procs2_84, check_hlds__modes__ProcId_70, &check_hlds__modes__conv4_ProcInfo2_85);
                      }
                      check_hlds__modes__ProcInfo2_85 = ((MR_Word) check_hlds__modes__conv4_ProcInfo2_85);
                      {
                        check_hlds__modes__SwitchDetectInfo_86 = check_hlds__switch_detection__init_switch_detect_info_1_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96);
                      }
                      {
                        check_hlds__switch_detection__detect_switches_in_proc_3_p_0(check_hlds__modes__SwitchDetectInfo_86, check_hlds__modes__ProcInfo2_85, &check_hlds__modes__ProcInfo3_87);
                      }
                      {
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__modes__TypeCtorInfo_64_113, check_hlds__modes__ProcId_70, ((MR_Box) (check_hlds__modes__ProcInfo3_87)), check_hlds__modes__Procs2_84, &check_hlds__modes__Procs3_88);
                      }
                      {
                        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__modes__Procs3_88, check_hlds__modes__PredInfo2_83, &check_hlds__modes__PredInfo3_89);
                      }
                      {
                        mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_61_110, check_hlds__modes__TypeCtorInfo_62_111, ((MR_Box) (check_hlds__modes__PredId_69)), ((MR_Box) (check_hlds__modes__PredInfo3_89)), check_hlds__modes__Preds2_82, &check_hlds__modes__Preds3_90);
                      }
                      {
                        hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__Preds3_90, check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_49_98);
                      }
                      {
                        check_hlds__cse_detection__detect_cse_in_proc_4_p_0(check_hlds__modes__PredId_69, check_hlds__modes__ProcId_70, check_hlds__modes__STATE_VARIABLE_ModuleInfo_49_98, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_50_99);
                      }
                      {
                        check_hlds__det_analysis__determinism_check_proc_5_p_0(check_hlds__modes__ProcId_70, check_hlds__modes__PredId_69, check_hlds__modes__STATE_VARIABLE_ModuleInfo_50_99, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_100, &check_hlds__modes__DetismSpecs_91);
                      }
                      {
                        check_hlds__modes__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_101_101, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_9[0]));
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_101_101, 1) = ((MR_Box) (check_hlds__modes__modecheck_queued_procs_7_p_0_1));
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_101_101, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_101_101, 3) = ((MR_Box) (check_hlds__modes__DetismSpecs_91));
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_101_101, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        mercury__require__expect_4_p_0(check_hlds__modes__V_101_101, (MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.modecheck_queued_proc\'/8", (MR_String) "found detism error");
                      }
                      {
                        hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_100, check_hlds__modes__PredId_69, check_hlds__modes__ProcId_70, &check_hlds__modes___PredInfo_143, &check_hlds__modes__ProcInfo_144);
                      }
                      check_hlds__modes__TypeCtorInfo_19_150 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
                      check_hlds__modes__TypeCtorInfo_20_151 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
                      {
                        mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_19_150, check_hlds__modes__TypeCtorInfo_20_151, check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26, ((MR_Box) (check_hlds__modes__PredId_69)), &check_hlds__modes__conv5_OldPredInfo0_145);
                      }
                      check_hlds__modes__OldPredInfo0_145 = ((MR_Word) check_hlds__modes__conv5_OldPredInfo0_145);
                      {
                        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__OldPredInfo0_145, &check_hlds__modes__OldProcTable0_146);
                      }
                      {
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__modes__ProcId_70, ((MR_Box) (check_hlds__modes__ProcInfo_144)), check_hlds__modes__OldProcTable0_146, &check_hlds__modes__OldProcTable_147);
                      }
                      {
                        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__modes__OldProcTable_147, check_hlds__modes__OldPredInfo0_145, &check_hlds__modes__OldPredInfo_148);
                      }
                      {
                        mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_19_150, check_hlds__modes__TypeCtorInfo_20_151, ((MR_Box) (check_hlds__modes__PredId_69)), ((MR_Box) (check_hlds__modes__OldPredInfo_148)), check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26, &check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33);
                      }
                      {
                        check_hlds__unique_modes__unique_modes_check_proc_6_p_0(check_hlds__modes__ProcId_70, check_hlds__modes__PredId_69, check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_100, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34, &check_hlds__modes__NewChanged_92, &check_hlds__modes__UniqueSpecs_93);
                      }
                      {
                        mercury__bool__or_3_p_0(check_hlds__modes__NewChanged_92, check_hlds__modes__STATE_VARIABLE_Changed_48_97, &check_hlds__modes__HeadChanged_22);
                      }
                      {
                        check_hlds__modes__HeadSpecs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__ModeSpecs_79, check_hlds__modes__UniqueSpecs_93);
                      }
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    hlds__hlds_module__module_info_make_pred_id_invalid_3_p_0(check_hlds__modes__PredId_69, check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34);
                  }
                  check_hlds__modes__HeadSpecs_23 = check_hlds__modes__ModeSpecs_79;
                  check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
                  check_hlds__modes__HeadChanged_22 = check_hlds__modes__STATE_VARIABLE_Changed_48_97;
                }
                break;
            }
          }
        else
          {
            check_hlds__modes__HeadSpecs_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            check_hlds__modes__HeadChanged_22 = (MR_Integer) 0;
            check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30;
            check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
          }
        {
          check_hlds__modes__modecheck_queued_procs_7_p_0(check_hlds__modes__HowToCheckGoal_8, check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33, check_hlds__modes__STATE_VARIABLE_OldPredTable_27, check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34, check_hlds__modes__STATE_VARIABLE_ModuleInfo_29, &check_hlds__modes__TailChanged_24, &check_hlds__modes__TailSpecs_25);
        }
        {
          mercury__bool__or_3_p_0(check_hlds__modes__HeadChanged_22, check_hlds__modes__TailChanged_24, check_hlds__modes__Changed_11);
        }
        {
          *check_hlds__modes__Specs_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__HeadSpecs_23, check_hlds__modes__TailSpecs_25);
        }
      }
    else
      {
        *check_hlds__modes__Changed_11 = (MR_Integer) 0;
        *check_hlds__modes__Specs_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__modes__STATE_VARIABLE_ModuleInfo_29 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28;
        *check_hlds__modes__STATE_VARIABLE_OldPredTable_27 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
      }
  }
}

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_5(
  MR_Box check_hlds__modes__closure_arg,
  MR_Box check_hlds__modes__wrapper_arg_1,
  MR_Box * check_hlds__modes__wrapper_arg_2,
  MR_Box check_hlds__modes__wrapper_arg_3,
  MR_Box * check_hlds__modes__wrapper_arg_4)
{
  {
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
    MR_Word check_hlds__modes__conv10_Case_16;
    MR_Word check_hlds__modes__conv9_STATE_VARIABLE_ModeInfo_28;

    {
      check_hlds__modes__unique_modecheck_clause_switch_9_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 7))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv10_Case_16, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv9_STATE_VARIABLE_ModeInfo_28);
    }
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv10_Case_16));
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv9_STATE_VARIABLE_ModeInfo_28));
  }
}

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_4(
  MR_Box check_hlds__modes__closure_arg,
  MR_Box check_hlds__modes__wrapper_arg_1,
  MR_Box * check_hlds__modes__wrapper_arg_2,
  MR_Box check_hlds__modes__wrapper_arg_3,
  MR_Box * check_hlds__modes__wrapper_arg_4)
{
  {
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
    MR_Word check_hlds__modes__conv7_Disjunct_20;
    MR_Word check_hlds__modes__conv6_STATE_VARIABLE_ModeInfo_25;

    {
      check_hlds__modes__unique_modecheck_clause_disj_11_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 9))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv7_Disjunct_20, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv6_STATE_VARIABLE_ModeInfo_25);
    }
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv7_Disjunct_20));
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv6_STATE_VARIABLE_ModeInfo_25));
  }
}

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_3(
  MR_Box check_hlds__modes__closure_arg,
  MR_Box check_hlds__modes__wrapper_arg_1,
  MR_Box * check_hlds__modes__wrapper_arg_2,
  MR_Box check_hlds__modes__wrapper_arg_3,
  MR_Box * check_hlds__modes__wrapper_arg_4)
{
  {
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
    MR_Word check_hlds__modes__conv4_Case_16;
    MR_Word check_hlds__modes__conv3_STATE_VARIABLE_ModeInfo_28;

    {
      check_hlds__modes__modecheck_clause_switch_9_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 7))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv4_Case_16, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv3_STATE_VARIABLE_ModeInfo_28);
    }
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv4_Case_16));
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv3_STATE_VARIABLE_ModeInfo_28));
  }
}

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_2(
  MR_Box check_hlds__modes__closure_arg,
  MR_Box check_hlds__modes__wrapper_arg_1,
  MR_Box * check_hlds__modes__wrapper_arg_2,
  MR_Box check_hlds__modes__wrapper_arg_3,
  MR_Box * check_hlds__modes__wrapper_arg_4)
{
  {
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
    MR_Word check_hlds__modes__conv1_Disjunct_14;
    MR_Word check_hlds__modes__conv0_STATE_VARIABLE_ModeInfo_19;

    {
      check_hlds__modes__modecheck_clause_disj_8_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv1_Disjunct_14, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv0_STATE_VARIABLE_ModeInfo_19);
    }
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv1_Disjunct_14));
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv0_STATE_VARIABLE_ModeInfo_19));
  }
}

static MR_bool MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_1(
  MR_Box check_hlds__modes__closure_arg,
  MR_Box check_hlds__modes__wrapper_arg_1)
{
  {
    MR_bool check_hlds__modes__succeeded;
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;

    {
      check_hlds__modes__succeeded = check_hlds__type_util__var_is_or_may_contain_solver_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modes__wrapper_arg_1));
    }
    return check_hlds__modes__succeeded;
  }
}

static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0(
  MR_Word check_hlds__modes__ModuleInfo_16,
  MR_Word check_hlds__modes__WhatToCheck_17,
  MR_Word check_hlds__modes__InferModes_18,
  MR_Word check_hlds__modes__Markers_19,
  MR_Word check_hlds__modes__IsUnifyPred_20,
  MR_Word check_hlds__modes__PredId_21,
  MR_Integer check_hlds__modes__ProcId_22,
  MR_Word check_hlds__modes__Body0_23,
  MR_Word * check_hlds__modes__Body_24,
  MR_Word check_hlds__modes__HeadVars_25,
  MR_Word check_hlds__modes__InstMap0_26,
  MR_Word check_hlds__modes__ArgFinalInsts0_27,
  MR_Word * check_hlds__modes__ArgFinalInsts_28,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_67)
{
  {
    MR_bool check_hlds__modes__succeeded;
    MR_String check_hlds__modes__CheckpointMsg_30;
    MR_Integer check_hlds__modes__V_71_71;
    MR_Integer check_hlds__modes__V_74_74;
    MR_String check_hlds__modes__V_151_151;
    MR_Word check_hlds__modes__V_157_157;
    MR_String check_hlds__modes__V_159_159;
    MR_String check_hlds__modes__V_160_160;
    MR_String check_hlds__modes__V_167_167;
    MR_Word check_hlds__modes__BodyGoalInfo0_32;
    MR_Word check_hlds__modes__ClausesForm0_36;
    MR_Word check_hlds__modes__BodyNonLocals_42;
    MR_Word check_hlds__modes__TypeInfo_121_121;
    MR_Word check_hlds__modes__TypeCtorInfo_123_123;
    MR_Word check_hlds__modes__BodyGoalExpr0_31;
    MR_Word check_hlds__modes__VarTypes0_43;
    MR_Word check_hlds__modes__SolverNonLocals_44;
    MR_Word check_hlds__modes__V_76_76;
    MR_Word check_hlds__modes__V_77_77;
    MR_Word check_hlds__modes__V_78_78;

    {
      check_hlds__modes__V_71_71 = hlds__hlds_pred__pred_id_to_int_1_f_0(check_hlds__modes__PredId_21);
    }
    {
      check_hlds__modes__V_74_74 = hlds__hlds_pred__proc_id_to_int_1_f_0(check_hlds__modes__ProcId_22);
    }
    check_hlds__modes__V_157_157 = (MR_Word) &check_hlds__modes_scalar_common_3[2];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__modes__V_157_157, check_hlds__modes__V_74_74, &check_hlds__modes__V_151_151);
    }
    {
      check_hlds__modes__V_159_159 = mercury__string__f_43_43_2_f_0((MR_String) "_", check_hlds__modes__V_151_151);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__modes__V_157_157, check_hlds__modes__V_71_71, &check_hlds__modes__V_160_160);
    }
    {
      check_hlds__modes__V_167_167 = mercury__string__f_43_43_2_f_0(check_hlds__modes__V_160_160, check_hlds__modes__V_159_159);
    }
    {
      check_hlds__modes__CheckpointMsg_30 = mercury__string__f_43_43_2_f_0((MR_String) "procedure_", check_hlds__modes__V_167_167);
    }
    check_hlds__modes__succeeded = (check_hlds__modes__InferModes_18 == (MR_Integer) 0);
    if (check_hlds__modes__succeeded)
      {
        check_hlds__modes__V_76_76 = (MR_Integer) 22;
        {
          check_hlds__modes__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_19, check_hlds__modes__V_76_76);
        }
        if (check_hlds__modes__succeeded)
          {
            check_hlds__modes__BodyGoalExpr0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Body0_23, (MR_Integer) 0)));
            check_hlds__modes__BodyGoalInfo0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Body0_23, (MR_Integer) 1)));
            if (((((MR_tag((MR_Word) check_hlds__modes__BodyGoalExpr0_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 0)))) == (MR_Integer) 3))))
              {
                MR_Word check_hlds__modes__Disjuncts0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 1)));
                MR_Word check_hlds__modes__V_34_34;
                MR_Word check_hlds__modes__V_35_35;

                check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Disjuncts0_33)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__modes__succeeded)
                  {
                    check_hlds__modes__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Disjuncts0_33, (MR_Integer) 0)));
                    check_hlds__modes__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Disjuncts0_33, (MR_Integer) 1)));
                    {
                      check_hlds__modes__ClausesForm0_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__modes__ClausesForm0_36, 0) = ((MR_Box) (check_hlds__modes__Disjuncts0_33));
                    }
                    check_hlds__modes__succeeded = MR_TRUE;
                  }
              }
            else
            if (((((MR_tag((MR_Word) check_hlds__modes__BodyGoalExpr0_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 0)))) == (MR_Integer) 4))))
              {
                MR_Word check_hlds__modes__SwitchVar0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 1)));
                MR_Word check_hlds__modes__CanFail0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 2)));
                MR_Word check_hlds__modes__Cases0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 3)));
                MR_Word check_hlds__modes__V_40_40;
                MR_Word check_hlds__modes__V_41_41;

                check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Cases0_39)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__modes__succeeded)
                  {
                    check_hlds__modes__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Cases0_39, (MR_Integer) 0)));
                    check_hlds__modes__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Cases0_39, (MR_Integer) 1)));
                    {
                      check_hlds__modes__ClausesForm0_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, 0) = ((MR_Box) (check_hlds__modes__SwitchVar0_37));
                      MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, 1) = ((MR_Box) (check_hlds__modes__CanFail0_38));
                      MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, 2) = ((MR_Box) (check_hlds__modes__Cases0_39));
                    }
                    check_hlds__modes__succeeded = MR_TRUE;
                  }
              }
            else
              check_hlds__modes__succeeded = MR_FALSE;
            if (check_hlds__modes__succeeded)
              {
                {
                  check_hlds__modes__BodyNonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modes__BodyGoalInfo0_32);
                }
                {
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66, &check_hlds__modes__VarTypes0_43);
                }
                check_hlds__modes__TypeInfo_121_121 = (MR_Word) &check_hlds__modes_scalar_common_1[1];
                check_hlds__modes__TypeCtorInfo_123_123 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                {
                  check_hlds__modes__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[2]));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_1));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 3) = ((MR_Box) (check_hlds__modes__ModuleInfo_16));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 4) = ((MR_Box) (check_hlds__modes__VarTypes0_43));
                }
                {
                  check_hlds__modes__V_78_78 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__modes__TypeCtorInfo_123_123, check_hlds__modes__BodyNonLocals_42);
                }
                {
                  check_hlds__modes__SolverNonLocals_44 = mercury__list__filter_2_f_0(check_hlds__modes__TypeInfo_121_121, check_hlds__modes__V_77_77, check_hlds__modes__V_78_78);
                }
                check_hlds__modes__succeeded = (check_hlds__modes__SolverNonLocals_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
      }
    if (check_hlds__modes__succeeded)
      {
        MR_Word check_hlds__modes__BodyContext_45;
        MR_Word check_hlds__modes__EmptyContext_46;
        MR_Word check_hlds__modes__NewGoalExpr_50;
        MR_Word check_hlds__modes__HeadVarFinalInsts_60;
        MR_Word check_hlds__modes__FinalInstMap_61;
        MR_Word check_hlds__modes__DeltaInstMap_62;
        MR_Word check_hlds__modes__BodyGoalInfo_63;
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79;

        {
          check_hlds__modes__BodyContext_45 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__modes__BodyGoalInfo0_32);
        }
        {
          mercury__term__context_init_1_p_0(&check_hlds__modes__EmptyContext_46);
        }
        {
          check_hlds__modes__succeeded = mercury__term____Unify____context_0_0(check_hlds__modes__BodyContext_45, check_hlds__modes__EmptyContext_46);
        }
        if (check_hlds__modes__succeeded)
          check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66;
        else
          {
            check_hlds__mode_info__mode_info_set_context_3_p_0(check_hlds__modes__BodyContext_45, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66, &check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79);
          }
        switch (check_hlds__modes__WhatToCheck_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if (((MR_tag((MR_Word) check_hlds__modes__ClausesForm0_36)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word check_hlds__modes__TypeCtorInfo_128_128;
                MR_Word check_hlds__modes__Disjuncts1_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__ClausesForm0_36, (MR_Integer) 0)));
                MR_Word check_hlds__modes__Disjuncts2_48;
                MR_Word check_hlds__modes__Disjuncts_49;
                MR_Word check_hlds__modes__V_91_91;
                MR_Box check_hlds__modes__conv2_STATE_VARIABLE_ModeInfo_67;

                {
                  hlds__goal_util__flatten_disj_2_p_0(check_hlds__modes__Disjuncts1_47, &check_hlds__modes__Disjuncts2_48);
                }
                {
                  check_hlds__modes__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_7[0]));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_2));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_30));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 4) = ((MR_Box) (check_hlds__modes__HeadVars_25));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 5) = ((MR_Box) (check_hlds__modes__InstMap0_26));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_27));
                }
                check_hlds__modes__TypeCtorInfo_128_128 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                {
                  mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_128_128, check_hlds__modes__TypeCtorInfo_128_128, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_91_91, check_hlds__modes__Disjuncts2_48, &check_hlds__modes__Disjuncts_49, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79)), &check_hlds__modes__conv2_STATE_VARIABLE_ModeInfo_67);
                }
                *check_hlds__modes__STATE_VARIABLE_ModeInfo_67 = ((MR_Word) check_hlds__modes__conv2_STATE_VARIABLE_ModeInfo_67);
                {
                  check_hlds__modes__NewGoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 1) = ((MR_Box) (check_hlds__modes__Disjuncts_49));
                }
              }
            else
              {
                MR_Word check_hlds__modes__TypeCtorInfo_134_134;
                MR_Word check_hlds__modes__SwitchVar_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 0)));
                MR_Word check_hlds__modes__CanFail_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 1)));
                MR_Word check_hlds__modes__Cases1_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 2)));
                MR_Word check_hlds__modes__Cases_54;
                MR_Word check_hlds__modes__V_89_89;
                MR_Box check_hlds__modes__conv5_STATE_VARIABLE_ModeInfo_67;

                {
                  check_hlds__modes__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_4[1]));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_3));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_30));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 4) = ((MR_Box) (check_hlds__modes__HeadVars_25));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 5) = ((MR_Box) (check_hlds__modes__InstMap0_26));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_27));
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 7) = ((MR_Box) (check_hlds__modes__SwitchVar_51));
                }
                check_hlds__modes__TypeCtorInfo_134_134 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
                {
                  mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_134_134, check_hlds__modes__TypeCtorInfo_134_134, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_89_89, check_hlds__modes__Cases1_53, &check_hlds__modes__Cases_54, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79)), &check_hlds__modes__conv5_STATE_VARIABLE_ModeInfo_67);
                }
                *check_hlds__modes__STATE_VARIABLE_ModeInfo_67 = ((MR_Word) check_hlds__modes__conv5_STATE_VARIABLE_ModeInfo_67);
                {
                  check_hlds__modes__NewGoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 1) = ((MR_Box) (check_hlds__modes__SwitchVar_51));
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 2) = ((MR_Box) (check_hlds__modes__CanFail_52));
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 3) = ((MR_Box) (check_hlds__modes__Cases_54));
                }
              }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__modes__NondetLiveVars0_55;
              MR_Word check_hlds__modes__Detism_56;
              MR_Word check_hlds__modes__NonLocals_57;
              MR_Word check_hlds__modes__SolnCount_59;
              MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81;
              MR_Word check_hlds__modes__V_58_58;

              {
                check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79, &check_hlds__modes__NondetLiveVars0_55);
              }
              {
                check_hlds__modes__Detism_56 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__modes__BodyGoalInfo0_32);
              }
              {
                check_hlds__modes__NonLocals_57 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modes__BodyGoalInfo0_32);
              }
              {
                parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modes__Detism_56, &check_hlds__modes__V_58_58, &check_hlds__modes__SolnCount_59);
              }
              switch (check_hlds__modes__SolnCount_59) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 3:
                  check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81 = check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79;
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 1:
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__modes__V_80_80;

                    {
                      check_hlds__modes__V_80_80 = mercury__bag__init_0_f_0((MR_Word) &check_hlds__modes_scalar_common_1[1]);
                    }
                    {
                      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__modes__V_80_80, check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79, &check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81);
                    }
                  }
                  break;
              }
              if (((MR_tag((MR_Word) check_hlds__modes__ClausesForm0_36)) == (MR_mktag((MR_Integer) 0))))
                {
                  MR_Word check_hlds__modes__TypeCtorInfo_141_141;
                  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86;
                  MR_Word check_hlds__modes__V_87_87;
                  MR_Word check_hlds__modes__Disjuncts1_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__ClausesForm0_36, (MR_Integer) 0)));
                  MR_Word check_hlds__modes__Disjuncts2_101;
                  MR_Word check_hlds__modes__Disjuncts_102;
                  MR_Box check_hlds__modes__conv8_STATE_VARIABLE_ModeInfo_67;

                  {
                    hlds__goal_util__flatten_disj_2_p_0(check_hlds__modes__Disjuncts1_100, &check_hlds__modes__Disjuncts2_101);
                  }
                  switch (check_hlds__modes__SolnCount_59) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 3:
                      {
                        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_84_84;
                        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_85_85;

                        {
                          check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__modes__NonLocals_57, check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81, &check_hlds__modes__STATE_VARIABLE_ModeInfo_84_84);
                        }
                        {
                          check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_84_84, &check_hlds__modes__STATE_VARIABLE_ModeInfo_85_85);
                        }
                        {
                          check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modes__NonLocals_57, check_hlds__modes__STATE_VARIABLE_ModeInfo_85_85, &check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86);
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86 = check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81;
                      break;
                    case (MR_Integer) 1:
                      check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86 = check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81;
                      break;
                    case (MR_Integer) 0:
                      check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86 = check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81;
                      break;
                  }
                  {
                    check_hlds__modes__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_8[0]));
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_4));
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_30));
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 4) = ((MR_Box) (check_hlds__modes__HeadVars_25));
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 5) = ((MR_Box) (check_hlds__modes__InstMap0_26));
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_27));
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 7) = ((MR_Box) (check_hlds__modes__Detism_56));
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 8) = ((MR_Box) (check_hlds__modes__NonLocals_57));
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 9) = ((MR_Box) (check_hlds__modes__NondetLiveVars0_55));
                  }
                  check_hlds__modes__TypeCtorInfo_141_141 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                  {
                    mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_141_141, check_hlds__modes__TypeCtorInfo_141_141, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_87_87, check_hlds__modes__Disjuncts2_101, &check_hlds__modes__Disjuncts_102, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86)), &check_hlds__modes__conv8_STATE_VARIABLE_ModeInfo_67);
                  }
                  *check_hlds__modes__STATE_VARIABLE_ModeInfo_67 = ((MR_Word) check_hlds__modes__conv8_STATE_VARIABLE_ModeInfo_67);
                  {
                    check_hlds__modes__NewGoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 1) = ((MR_Box) (check_hlds__modes__Disjuncts_102));
                  }
                }
              else
                {
                  MR_Word check_hlds__modes__TypeCtorInfo_147_147;
                  MR_Word check_hlds__modes__V_82_82;
                  MR_Word check_hlds__modes__SwitchVar_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 0)));
                  MR_Word check_hlds__modes__CanFail_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 1)));
                  MR_Word check_hlds__modes__Cases1_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 2)));
                  MR_Word check_hlds__modes__Cases_106;
                  MR_Box check_hlds__modes__conv11_STATE_VARIABLE_ModeInfo_67;

                  {
                    check_hlds__modes__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_4[1]));
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_5));
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_30));
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 4) = ((MR_Box) (check_hlds__modes__HeadVars_25));
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 5) = ((MR_Box) (check_hlds__modes__InstMap0_26));
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_27));
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 7) = ((MR_Box) (check_hlds__modes__SwitchVar_103));
                  }
                  check_hlds__modes__TypeCtorInfo_147_147 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
                  {
                    mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_147_147, check_hlds__modes__TypeCtorInfo_147_147, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_82_82, check_hlds__modes__Cases1_105, &check_hlds__modes__Cases_106, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81)), &check_hlds__modes__conv11_STATE_VARIABLE_ModeInfo_67);
                  }
                  *check_hlds__modes__STATE_VARIABLE_ModeInfo_67 = ((MR_Word) check_hlds__modes__conv11_STATE_VARIABLE_ModeInfo_67);
                  {
                    check_hlds__modes__NewGoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 1) = ((MR_Box) (check_hlds__modes__SwitchVar_103));
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 2) = ((MR_Box) (check_hlds__modes__CanFail_104));
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 3) = ((MR_Box) (check_hlds__modes__Cases_106));
                  }
                }
            }
            break;
        }
        {
          mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modes__HeadVars_25, check_hlds__modes__ArgFinalInsts0_27, &check_hlds__modes__HeadVarFinalInsts_60);
        }
        {
          check_hlds__modes__FinalInstMap_61 = hlds__instmap__instmap_from_assoc_list_1_f_0(check_hlds__modes__HeadVarFinalInsts_60);
        }
        {
          hlds__instmap__compute_instmap_delta_4_p_0(check_hlds__modes__InstMap0_26, check_hlds__modes__FinalInstMap_61, check_hlds__modes__BodyNonLocals_42, &check_hlds__modes__DeltaInstMap_62);
        }
        {
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modes__DeltaInstMap_62, check_hlds__modes__BodyGoalInfo0_32, &check_hlds__modes__BodyGoalInfo_63);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__modes__Body_24 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__NewGoalExpr_50));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__BodyGoalInfo_63));
        }
        *check_hlds__modes__ArgFinalInsts_28 = check_hlds__modes__ArgFinalInsts0_27;
      }
    else
      {
        MR_Word check_hlds__modes__Body1_64;
        MR_Word check_hlds__modes__GroundMatchesBound_65;
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_94_94;
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_96_96;
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98;
        MR_Word check_hlds__modes__ModuleInfo_180;
        MR_Word check_hlds__modes__Errors_181;
        MR_Word check_hlds__modes__Changed0_184;
        MR_Word check_hlds__modes__InstMap_185;
        MR_Word check_hlds__modes__VarTypes_186;
        MR_Word check_hlds__modes__VarFinalInsts1_187;
        MR_Word check_hlds__modes__ArgTypes_188;

        {
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_30, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66, &check_hlds__modes__STATE_VARIABLE_ModeInfo_94_94);
        }
        switch (check_hlds__modes__WhatToCheck_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modes__Body0_23, &check_hlds__modes__Body1_64, check_hlds__modes__STATE_VARIABLE_ModeInfo_94_94, &check_hlds__modes__STATE_VARIABLE_ModeInfo_96_96);
            }
            break;
          case (MR_Integer) 1:
            {
              check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modes__Body0_23, &check_hlds__modes__Body1_64, check_hlds__modes__STATE_VARIABLE_ModeInfo_94_94, &check_hlds__modes__STATE_VARIABLE_ModeInfo_96_96);
            }
            break;
        }
        {
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_30, check_hlds__modes__STATE_VARIABLE_ModeInfo_96_96, &check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98);
        }
        switch (check_hlds__modes__IsUnifyPred_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__modes__GroundMatchesBound_65 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            check_hlds__modes__GroundMatchesBound_65 = (MR_Integer) 1;
            break;
        }
        {
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modes__ModuleInfo_180);
        }
        {
          check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modes__Errors_181);
        }
        if ((check_hlds__modes__Errors_181 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            check_hlds__modes__Changed0_184 = (MR_Integer) 0;
            {
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modes__InstMap_185);
            }
          }
        else
          {
            check_hlds__modes__Changed0_184 = (MR_Integer) 1;
            {
              hlds__instmap__init_unreachable_1_p_0(&check_hlds__modes__InstMap_185);
            }
          }
        {
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modes__VarTypes_186);
        }
        {
          hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modes__InstMap_185, check_hlds__modes__HeadVars_25, &check_hlds__modes__VarFinalInsts1_187);
        }
        {
          hlds__vartypes__lookup_var_types_3_p_0(check_hlds__modes__VarTypes_186, check_hlds__modes__HeadVars_25, &check_hlds__modes__ArgTypes_188);
        }
        switch (check_hlds__modes__InferModes_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__modes___Changed1_197;

              {
                check_hlds__modes__check_final_insts_13_p_0(check_hlds__modes__HeadVars_25, check_hlds__modes__ArgFinalInsts0_27, check_hlds__modes__VarFinalInsts1_187, check_hlds__modes__InferModes_18, check_hlds__modes__GroundMatchesBound_65, (MR_Integer) 1, check_hlds__modes__ModuleInfo_180, check_hlds__modes__Body1_64, check_hlds__modes__Body_24, (MR_Integer) 0, &check_hlds__modes___Changed1_197, check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, check_hlds__modes__STATE_VARIABLE_ModeInfo_67);
              }
              *check_hlds__modes__ArgFinalInsts_28 = check_hlds__modes__ArgFinalInsts0_27;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__modes__VarFinalInsts2_189;
              MR_Word check_hlds__modes__PredId_190;
              MR_Integer check_hlds__modes__ProcId_191;
              MR_Word check_hlds__modes__ProcInfo_192;
              MR_Word check_hlds__modes__ArgLives_193;
              MR_Word check_hlds__modes__Changed1_194;
              MR_Word check_hlds__modes__Changed2_195;
              MR_Word check_hlds__modes__Changed_196;
              MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_43_203;
              MR_Word check_hlds__modes__V_204_204;
              MR_Word check_hlds__modes__V_205_205;
              MR_Word check_hlds__modes__V_206_206;

              {
                check_hlds__mode_util__normalise_insts_4_p_0(check_hlds__modes__ModuleInfo_180, check_hlds__modes__ArgTypes_188, check_hlds__modes__VarFinalInsts1_187, &check_hlds__modes__VarFinalInsts2_189);
              }
              {
                check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modes__PredId_190);
              }
              {
                check_hlds__mode_info__mode_info_get_proc_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modes__ProcId_191);
              }
              {
                hlds__hlds_module__module_info_proc_info_4_p_0(check_hlds__modes__ModuleInfo_180, check_hlds__modes__PredId_190, check_hlds__modes__ProcId_191, &check_hlds__modes__ProcInfo_192);
              }
              {
                hlds__hlds_pred__proc_info_arglives_3_p_0(check_hlds__modes__ProcInfo_192, check_hlds__modes__ModuleInfo_180, &check_hlds__modes__ArgLives_193);
              }
              {
                check_hlds__modes__maybe_clobber_insts_3_p_0(check_hlds__modes__VarFinalInsts2_189, check_hlds__modes__ArgLives_193, check_hlds__modes__ArgFinalInsts_28);
              }
              {
                check_hlds__modes__check_final_insts_13_p_0(check_hlds__modes__HeadVars_25, check_hlds__modes__ArgFinalInsts0_27, *check_hlds__modes__ArgFinalInsts_28, check_hlds__modes__InferModes_18, check_hlds__modes__GroundMatchesBound_65, (MR_Integer) 1, check_hlds__modes__ModuleInfo_180, check_hlds__modes__Body1_64, check_hlds__modes__Body_24, (MR_Integer) 0, &check_hlds__modes__Changed1_194, check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modes__STATE_VARIABLE_ModeInfo_43_203);
              }
              {
                check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_43_203, &check_hlds__modes__Changed2_195);
              }
              {
                check_hlds__modes__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_206_206, 0) = ((MR_Box) (check_hlds__modes__Changed2_195));
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_206_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__modes__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_205_205, 0) = ((MR_Box) (check_hlds__modes__Changed1_194));
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_205_205, 1) = ((MR_Box) (check_hlds__modes__V_206_206));
              }
              {
                check_hlds__modes__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_204_204, 0) = ((MR_Box) (check_hlds__modes__Changed0_184));
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_204_204, 1) = ((MR_Box) (check_hlds__modes__V_205_205));
              }
              {
                mercury__bool__or_list_2_p_0(check_hlds__modes__V_204_204, &check_hlds__modes__Changed_196);
              }
              {
                check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(check_hlds__modes__Changed_196, check_hlds__modes__STATE_VARIABLE_ModeInfo_43_203, check_hlds__modes__STATE_VARIABLE_ModeInfo_67);
              }
            }
            break;
        }
      }
  }
}

static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_2(
  MR_Box check_hlds__modes__closure_arg,
  MR_Box check_hlds__modes__wrapper_arg_1)
{
  {
    MR_Box check_hlds__modes__wrapper_arg_2;
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
    MR_Word check_hlds__modes__conv1_HeadVar__3_3;

    {
      check_hlds__modes__conv1_HeadVar__3_3 = check_hlds__mode_errors__mode_warning_info_to_spec_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modes__wrapper_arg_1));
    }
    check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv1_HeadVar__3_3));
    return check_hlds__modes__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_1(
  MR_Box check_hlds__modes__closure_arg,
  MR_Box check_hlds__modes__wrapper_arg_1)
{
  {
    MR_Box check_hlds__modes__wrapper_arg_2;
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
    MR_Word check_hlds__modes__conv0_HeadVar__3_3;

    {
      check_hlds__modes__conv0_HeadVar__3_3 = check_hlds__mode_errors__mode_error_info_to_spec_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modes__wrapper_arg_1));
    }
    check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv0_HeadVar__3_3));
    return check_hlds__modes__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0(
  MR_Integer check_hlds__modes__ProcId_10,
  MR_Word check_hlds__modes__PredId_11,
  MR_Word check_hlds__modes__WhatToCheck_12,
  MR_Word check_hlds__modes__MayChangeCalledProc_13,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_24,
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_25,
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_26,
  MR_Word * check_hlds__modes__Specs_16)
{
  {
    MR_bool check_hlds__modes__succeeded;
    MR_Word check_hlds__modes__PredInfo0_17;
    MR_Word check_hlds__modes__ProcInfo0_18;
    MR_Word check_hlds__modes__CanProcess_19;

    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, &check_hlds__modes__PredInfo0_17, &check_hlds__modes__ProcInfo0_18);
    }
    {
      hlds__hlds_pred__proc_info_get_can_process_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__CanProcess_19);
    }
    switch (check_hlds__modes__CanProcess_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__modes__PredInfo_20;
          MR_Word check_hlds__modes__Preds1_21;
          MR_Word check_hlds__modes__Preds_22;
          MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_27_27;
          MR_Word check_hlds__modes__HeadVars_48;
          MR_Word check_hlds__modes__ArgModes0_49;
          MR_Word check_hlds__modes__ArgLives0_50;
          MR_Word check_hlds__modes__Body0_51;
          MR_Word check_hlds__modes__ClausesInfo0_52;
          MR_Word check_hlds__modes__Clauses_53;
          MR_Word check_hlds__modes__ClausesInfo_55;
          MR_Word check_hlds__modes__Context_58;
          MR_Word check_hlds__modes__ArgInitialInsts_60;
          MR_Word check_hlds__modes__InstAL_61;
          MR_Word check_hlds__modes__InstMap0_62;
          MR_Word check_hlds__modes__LiveVarsList_63;
          MR_Word check_hlds__modes__LiveVars_64;
          MR_Word check_hlds__modes__HeadInstVars_65;
          MR_Word check_hlds__modes__Markers_66;
          MR_Word check_hlds__modes__InferModes_67;
          MR_Word check_hlds__modes__IsUnifyPred_68;
          MR_Word check_hlds__modes__ArgFinalInsts0_69;
          MR_Word check_hlds__modes__Body_70;
          MR_Word check_hlds__modes__ArgFinalInsts_71;
          MR_Word check_hlds__modes__ModeErrors_72;
          MR_Word check_hlds__modes__ArgModes_84;
          MR_Word check_hlds__modes__VarSet_85;
          MR_Word check_hlds__modes__VarTypes_86;
          MR_Word check_hlds__modes__NeedToRequantify_87;
          MR_Word check_hlds__modes__ProcMap1_88;
          MR_Word check_hlds__modes__ProcMap_89;
          MR_Word check_hlds__modes__STATE_VARIABLE_PredInfo_71_90;
          MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_72_91;
          MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_73_92;
          MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94;
          MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_80_99;
          MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_83_102;
          MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_84_103;
          MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_85_104;
          MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_86_105;
          MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_88_107;
          MR_Word check_hlds__modes__Body1_140;
          MR_Word check_hlds__modes__ArgFinalInsts1_141;
          MR_Word check_hlds__modes__ModeInfo1_142;
          MR_Word check_hlds__modes__ModeErrors1_143;
          MR_Word check_hlds__modes___ItemNumbers_54;

          {
            hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__HeadVars_48);
          }
          {
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__ArgModes0_49);
          }
          {
            hlds__hlds_pred__proc_info_arglives_3_p_0(check_hlds__modes__ProcInfo0_18, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, &check_hlds__modes__ArgLives0_50);
          }
          {
            hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__Body0_51);
          }
          {
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__modes__PredInfo0_17, &check_hlds__modes__ClausesInfo0_52);
          }
          {
            hlds__hlds_clauses__clauses_info_clauses_4_p_0(&check_hlds__modes__Clauses_53, &check_hlds__modes___ItemNumbers_54, check_hlds__modes__ClausesInfo0_52, &check_hlds__modes__ClausesInfo_55);
          }
          {
            hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__modes__ClausesInfo_55, check_hlds__modes__PredInfo0_17, &check_hlds__modes__STATE_VARIABLE_PredInfo_71_90);
          }
          if ((check_hlds__modes__Clauses_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__Context_58);
            }
          else
            {
              MR_Word check_hlds__modes__FirstClause_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Clauses_53, (MR_Integer) 0)));
              MR_Word check_hlds__modes__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Clauses_53, (MR_Integer) 1)));
              MR_Word check_hlds__modes__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_56, (MR_Integer) 0)));
              MR_Word check_hlds__modes__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_56, (MR_Integer) 1)));
              MR_Word check_hlds__modes__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_56, (MR_Integer) 2)));
              MR_Word check_hlds__modes__V_112_112;

              check_hlds__modes__Context_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_56, (MR_Integer) 3)));
              check_hlds__modes__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_56, (MR_Integer) 4)));
            }
          {
            check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__modes__ArgModes0_49, &check_hlds__modes__ArgInitialInsts_60);
          }
          {
            mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modes__HeadVars_48, check_hlds__modes__ArgInitialInsts_60, &check_hlds__modes__InstAL_61);
          }
          {
            check_hlds__modes__InstMap0_62 = hlds__instmap__instmap_from_assoc_list_1_f_0(check_hlds__modes__InstAL_61);
          }
          {
            check_hlds__modecheck_util__get_live_vars_3_p_0(check_hlds__modes__HeadVars_48, check_hlds__modes__ArgLives0_50, &check_hlds__modes__LiveVarsList_63);
          }
          {
            parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modes__LiveVarsList_63, &check_hlds__modes__LiveVars_64);
          }
          {
            check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__modes__ArgModes0_49, &check_hlds__modes__HeadInstVars_65);
          }
          {
            check_hlds__mode_info__mode_info_init_10_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, check_hlds__modes__Context_58, check_hlds__modes__LiveVars_64, check_hlds__modes__HeadInstVars_65, check_hlds__modes__InstMap0_62, check_hlds__modes__WhatToCheck_12, check_hlds__modes__MayChangeCalledProc_13, &check_hlds__modes__STATE_VARIABLE_ModeInfo_72_91);
          }
          {
            check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(check_hlds__modes__STATE_VARIABLE_Changed_0_25, check_hlds__modes__STATE_VARIABLE_ModeInfo_72_91, &check_hlds__modes__STATE_VARIABLE_ModeInfo_73_92);
          }
          {
            hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modes__STATE_VARIABLE_PredInfo_71_90, &check_hlds__modes__Markers_66);
          }
          {
            check_hlds__modes__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_66, (MR_Integer) 3);
          }
          if (check_hlds__modes__succeeded)
            check_hlds__modes__InferModes_67 = (MR_Integer) 1;
          else
            check_hlds__modes__InferModes_67 = (MR_Integer) 0;
          {
            check_hlds__modes__succeeded = hlds__hlds_pred__is_unify_pred_1_p_0(check_hlds__modes__STATE_VARIABLE_PredInfo_71_90);
          }
          if (check_hlds__modes__succeeded)
            check_hlds__modes__IsUnifyPred_68 = (MR_Integer) 1;
          else
            check_hlds__modes__IsUnifyPred_68 = (MR_Integer) 0;
          {
            check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__modes__ArgModes0_49, &check_hlds__modes__ArgFinalInsts0_69);
          }
          {
            check_hlds__modes__do_modecheck_proc_body_15_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__modes__WhatToCheck_12, check_hlds__modes__InferModes_67, check_hlds__modes__Markers_66, check_hlds__modes__IsUnifyPred_68, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, check_hlds__modes__Body0_51, &check_hlds__modes__Body1_140, check_hlds__modes__HeadVars_48, check_hlds__modes__InstMap0_62, check_hlds__modes__ArgFinalInsts0_69, &check_hlds__modes__ArgFinalInsts1_141, check_hlds__modes__STATE_VARIABLE_ModeInfo_73_92, &check_hlds__modes__ModeInfo1_142);
          }
          {
            check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__ModeInfo1_142, &check_hlds__modes__ModeErrors1_143);
          }
          if ((check_hlds__modes__ModeErrors1_143 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              check_hlds__modes__Body_70 = check_hlds__modes__Body1_140;
              check_hlds__modes__ArgFinalInsts_71 = check_hlds__modes__ArgFinalInsts1_141;
              check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94 = check_hlds__modes__ModeInfo1_142;
            }
          else
            {
              MR_Word check_hlds__modes__HadFromGroundTerm_146;

              {
                check_hlds__mode_info__mode_info_get_had_from_ground_term_2_p_0(check_hlds__modes__ModeInfo1_142, &check_hlds__modes__HadFromGroundTerm_146);
              }
              switch (check_hlds__modes__HadFromGroundTerm_146) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    check_hlds__modes__Body_70 = check_hlds__modes__Body1_140;
                    check_hlds__modes__ArgFinalInsts_71 = check_hlds__modes__ArgFinalInsts1_141;
                    check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94 = check_hlds__modes__ModeInfo1_142;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__modes__ModeInfo2_147;

                    {
                      check_hlds__mode_info__mode_info_set_make_ground_terms_unique_3_p_0((MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ModeInfo_73_92, &check_hlds__modes__ModeInfo2_147);
                    }
                    {
                      check_hlds__modes__do_modecheck_proc_body_15_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__modes__WhatToCheck_12, check_hlds__modes__InferModes_67, check_hlds__modes__Markers_66, check_hlds__modes__IsUnifyPred_68, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, check_hlds__modes__Body0_51, &check_hlds__modes__Body_70, check_hlds__modes__HeadVars_48, check_hlds__modes__InstMap0_62, check_hlds__modes__ArgFinalInsts0_69, &check_hlds__modes__ArgFinalInsts_71, check_hlds__modes__ModeInfo2_147, &check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94);
                    }
                  }
                  break;
              }
            }
          {
            check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94, &check_hlds__modes__ModeErrors_72);
          }
          switch (check_hlds__modes__InferModes_67) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word check_hlds__modes__Origin_73;
                MR_Word check_hlds__modes__V_74_74;
                MR_String check_hlds__modes__V_75_75;
                MR_Word check_hlds__modes__V_76_76;

                {
                  hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__modes__STATE_VARIABLE_PredInfo_71_90, &check_hlds__modes__Origin_73);
                }
                check_hlds__modes__succeeded = ((((MR_tag((MR_Word) check_hlds__modes__Origin_73)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__Origin_73, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (check_hlds__modes__succeeded)
                  {
                    check_hlds__modes__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__Origin_73, (MR_Integer) 1)));
                    check_hlds__modes__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__modes__Origin_73, (MR_Integer) 2)));
                    check_hlds__modes__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__Origin_73, (MR_Integer) 3)));
                    *check_hlds__modes__Specs_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                else
                  {
                    MR_Word check_hlds__modes__TypeCtorInfo_98_117 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
                    MR_Word check_hlds__modes__AllErrorSpecs_77;
                    MR_Word check_hlds__modes__ErrorSpecs_80;
                    MR_Word check_hlds__modes__StateVarWarningSpecs_81;
                    MR_Word check_hlds__modes__ModeWarnings_82;
                    MR_Word check_hlds__modes__WarningSpecs_83;
                    MR_Word check_hlds__modes__V_95_95;
                    MR_Word check_hlds__modes__V_97_97;
                    MR_Word check_hlds__modes__V_98_98;

                    {
                      check_hlds__modes__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__modes__V_95_95, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[0]));
                      MR_hl_field(MR_mktag(0), check_hlds__modes__V_95_95, 1) = ((MR_Box) (check_hlds__modes__maybe_modecheck_proc_9_p_0_1));
                      MR_hl_field(MR_mktag(0), check_hlds__modes__V_95_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), check_hlds__modes__V_95_95, 3) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94));
                    }
                    {
                      check_hlds__modes__AllErrorSpecs_77 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__modes__TypeCtorInfo_98_117, check_hlds__modes__V_95_95, check_hlds__modes__ModeErrors_72);
                    }
                    if ((check_hlds__modes__AllErrorSpecs_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        check_hlds__modes__ErrorSpecs_80 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        check_hlds__modes__StateVarWarningSpecs_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      }
                    else
                      {
                        MR_Word check_hlds__modes__ErrorSpec_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__AllErrorSpecs_77, (MR_Integer) 0)));
                        MR_Word check_hlds__modes__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__AllErrorSpecs_77, (MR_Integer) 1)));

                        {
                          check_hlds__modes__ErrorSpecs_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__modes__ErrorSpecs_80, 0) = ((MR_Box) (check_hlds__modes__ErrorSpec_78));
                          MR_hl_field(MR_mktag(1), check_hlds__modes__ErrorSpecs_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          hlds__hlds_pred__proc_info_get_statevar_warnings_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__StateVarWarningSpecs_81);
                        }
                      }
                    {
                      check_hlds__mode_info__mode_info_get_warnings_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94, &check_hlds__modes__ModeWarnings_82);
                    }
                    {
                      check_hlds__modes__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__modes__V_97_97, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[1]));
                      MR_hl_field(MR_mktag(0), check_hlds__modes__V_97_97, 1) = ((MR_Box) (check_hlds__modes__maybe_modecheck_proc_9_p_0_2));
                      MR_hl_field(MR_mktag(0), check_hlds__modes__V_97_97, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), check_hlds__modes__V_97_97, 3) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94));
                    }
                    {
                      check_hlds__modes__WarningSpecs_83 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0, check_hlds__modes__TypeCtorInfo_98_117, check_hlds__modes__V_97_97, check_hlds__modes__ModeWarnings_82);
                    }
                    {
                      check_hlds__modes__V_98_98 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_98_117, check_hlds__modes__WarningSpecs_83, check_hlds__modes__StateVarWarningSpecs_81);
                    }
                    {
                      *check_hlds__modes__Specs_16 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_98_117, check_hlds__modes__ErrorSpecs_80, check_hlds__modes__V_98_98);
                    }
                  }
                check_hlds__modes__STATE_VARIABLE_ProcInfo_80_99 = check_hlds__modes__ProcInfo0_18;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  hlds__hlds_pred__proc_info_set_mode_errors_3_p_0(check_hlds__modes__ModeErrors_72, check_hlds__modes__ProcInfo0_18, &check_hlds__modes__STATE_VARIABLE_ProcInfo_80_99);
                }
                *check_hlds__modes__Specs_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              break;
          }
          {
            parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(check_hlds__modes__ArgInitialInsts_60, check_hlds__modes__ArgFinalInsts_71, &check_hlds__modes__ArgModes_84);
          }
          {
            check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94, check_hlds__modes__STATE_VARIABLE_Changed_26);
          }
          {
            check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_27_27);
          }
          {
            check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94, &check_hlds__modes__VarSet_85);
          }
          {
            check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94, &check_hlds__modes__VarTypes_86);
          }
          {
            check_hlds__mode_info__mode_info_get_need_to_requantify_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94, &check_hlds__modes__NeedToRequantify_87);
          }
          {
            hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__modes__Body_70, check_hlds__modes__STATE_VARIABLE_ProcInfo_80_99, &check_hlds__modes__STATE_VARIABLE_ProcInfo_83_102);
          }
          {
            hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__modes__VarSet_85, check_hlds__modes__STATE_VARIABLE_ProcInfo_83_102, &check_hlds__modes__STATE_VARIABLE_ProcInfo_84_103);
          }
          {
            hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__modes__VarTypes_86, check_hlds__modes__STATE_VARIABLE_ProcInfo_84_103, &check_hlds__modes__STATE_VARIABLE_ProcInfo_85_104);
          }
          {
            hlds__hlds_pred__proc_info_set_argmodes_3_p_0(check_hlds__modes__ArgModes_84, check_hlds__modes__STATE_VARIABLE_ProcInfo_85_104, &check_hlds__modes__STATE_VARIABLE_ProcInfo_86_105);
          }
          switch (check_hlds__modes__NeedToRequantify_87) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              check_hlds__modes__STATE_VARIABLE_ProcInfo_88_107 = check_hlds__modes__STATE_VARIABLE_ProcInfo_86_105;
              break;
            case (MR_Integer) 0:
              {
                {
                  hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ProcInfo_86_105, &check_hlds__modes__STATE_VARIABLE_ProcInfo_88_107);
                }
              }
              break;
          }
          {
            hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__STATE_VARIABLE_PredInfo_71_90, &check_hlds__modes__ProcMap1_88);
          }
          {
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__modes__ProcId_10, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ProcInfo_88_107)), check_hlds__modes__ProcMap1_88, &check_hlds__modes__ProcMap_89);
          }
          {
            hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__modes__ProcMap_89, check_hlds__modes__STATE_VARIABLE_PredInfo_71_90, &check_hlds__modes__PredInfo_20);
          }
          {
            hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_27_27, &check_hlds__modes__Preds1_21);
          }
          {
            mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (check_hlds__modes__PredId_11)), ((MR_Box) (check_hlds__modes__PredInfo_20)), check_hlds__modes__Preds1_21, &check_hlds__modes__Preds_22);
          }
          {
            hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__Preds_22, check_hlds__modes__STATE_VARIABLE_ModuleInfo_27_27, check_hlds__modes__STATE_VARIABLE_ModuleInfo_24);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          *check_hlds__modes__Specs_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_24 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23;
          *check_hlds__modes__STATE_VARIABLE_Changed_26 = check_hlds__modes__STATE_VARIABLE_Changed_0_25;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__modes__modecheck_procs_10_p_0(
  MR_Word check_hlds__modes__HeadVar__1_1,
  MR_Word check_hlds__modes__HeadVar__2_2,
  MR_Word check_hlds__modes__WhatToCheck_3,
  MR_Word check_hlds__modes__MayChangeCalledProc_4,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_6,
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_7,
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_8,
  MR_Word check_hlds__modes__HeadVar__9_9,
  MR_Word * check_hlds__modes__HeadVar__10_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modes__succeeded;

        if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__modes__HeadVar__10_10 = check_hlds__modes__HeadVar__9_9;
            *check_hlds__modes__STATE_VARIABLE_Changed_8 = check_hlds__modes__STATE_VARIABLE_Changed_0_7;
            *check_hlds__modes__STATE_VARIABLE_ModuleInfo_6 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5;
          }
        else
          {
            MR_Integer check_hlds__modes__ProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__modes__ProcIds_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__modes__ProcSpecs_31;
            MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_38_38;
            MR_Word check_hlds__modes__STATE_VARIABLE_Changed_39_39;
            MR_Word check_hlds__modes__STATE_VARIABLE_SpecsAcc_40_40;

            {
              check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_23, check_hlds__modes__HeadVar__2_2, check_hlds__modes__WhatToCheck_3, check_hlds__modes__MayChangeCalledProc_4, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_38_38, check_hlds__modes__STATE_VARIABLE_Changed_0_7, &check_hlds__modes__STATE_VARIABLE_Changed_39_39, &check_hlds__modes__ProcSpecs_31);
            }
            {
              parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0(check_hlds__modes__ProcSpecs_31, check_hlds__modes__HeadVar__9_9, &check_hlds__modes__STATE_VARIABLE_SpecsAcc_40_40);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__modes__HeadVar__1__tmp_copy_1 = check_hlds__modes__ProcIds_24;
              MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_38_38;
              MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_7 = check_hlds__modes__STATE_VARIABLE_Changed_39_39;
              MR_Word check_hlds__modes__HeadVar__9__tmp_copy_9 = check_hlds__modes__STATE_VARIABLE_SpecsAcc_40_40;

              check_hlds__modes__HeadVar__9_9 = check_hlds__modes__HeadVar__9__tmp_copy_9;
              check_hlds__modes__STATE_VARIABLE_Changed_0_7 = check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_7;
              check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5;
              check_hlds__modes__HeadVar__1_1 = check_hlds__modes__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_1(
  void * check_hlds__modes__env_ptr_arg)
{
  {
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * check_hlds__modes__env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) check_hlds__modes__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_3(
  void * check_hlds__modes__env_ptr_arg)
{
  {
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * check_hlds__modes__env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) check_hlds__modes__env_ptr_arg;

    (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0___ProcId_73 = ((MR_Integer) (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv2__ProcId_73);
    (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcInfo_81 = ((MR_Word) (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv1_ProcInfo_81);
    {
      check_hlds__modes__maybe_modecheck_pred_9_p_0_2(check_hlds__modes__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_2(
  void * check_hlds__modes__env_ptr_arg)
{
  {
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * check_hlds__modes__env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) check_hlds__modes__env_ptr_arg;

    {
      MR_Word check_hlds__modes__V_89_89;

      {
        hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcInfo_81, &(check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__V_84_84);
      }
      (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__V_84_84)) == (MR_mktag((MR_Integer) 1)));
      if ((check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
        {
          check_hlds__modes__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__V_84_84, (MR_Integer) 0)));
          {
            check_hlds__modes__maybe_modecheck_pred_9_p_0_1(check_hlds__modes__env_ptr);
          }
        }
    }
  }
}

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_4(
  void * check_hlds__modes__env_ptr_arg)
{
  {
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * check_hlds__modes__env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) check_hlds__modes__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__map__member_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcTable_71, &(check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv2__ProcId_73, &(check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv1_ProcInfo_81, check_hlds__modes__maybe_modecheck_pred_9_p_0_3, check_hlds__modes__env_ptr);
          }
        }
        (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0(
  MR_Word check_hlds__modes__WhatToCheck_10,
  MR_Word check_hlds__modes__MayChangeCalledProc_11,
  MR_Word check_hlds__modes__PredId_12,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_26,
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_27,
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_28,
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_29,
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_30)
{
  {
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s check_hlds__modes__env;

    {
      MR_Word check_hlds__modes__Preds0_16;
      MR_Word check_hlds__modes__PredInfo0_17;
      MR_Box check_hlds__modes__conv0_PredInfo0_17;

      {
        hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25, &check_hlds__modes__Preds0_16);
      }
      {
        mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__modes__Preds0_16, ((MR_Box) (check_hlds__modes__PredId_12)), &check_hlds__modes__conv0_PredInfo0_17);
      }
      check_hlds__modes__PredInfo0_17 = ((MR_Word) check_hlds__modes__conv0_PredInfo0_17);
      {
        (check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__modes__PredInfo0_17);
      }
      if (!((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded))
        {
          {
            (check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(check_hlds__modes__PredInfo0_17);
          }
          if (!((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded))
            {
              MR_Word check_hlds__modes__PredMarkers_46;

              {
                hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modes__PredInfo0_17, &check_hlds__modes__PredMarkers_46);
              }
              {
                (check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__PredMarkers_46, (MR_Integer) 10);
              }
            }
        }
      if ((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
        {
          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_26 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25;
          *check_hlds__modes__STATE_VARIABLE_Changed_28 = check_hlds__modes__STATE_VARIABLE_Changed_0_27;
          *check_hlds__modes__STATE_VARIABLE_Specs_30 = check_hlds__modes__STATE_VARIABLE_Specs_0_29;
        }
      else
        {
          MR_Word check_hlds__modes__TypeCtorInfo_43_43;
          MR_Word check_hlds__modes__ThisPredDeclSpecs_20;
          MR_Word check_hlds__modes__ThisPredProcSpecs_21;
          MR_Word check_hlds__modes__Globals_22;
          MR_Word check_hlds__modes__ContainsError_23;
          MR_Word check_hlds__modes__Statistics_24;
          MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33;
          MR_Word check_hlds__modes__V_36_36;
          MR_Word check_hlds__modes__ProcIds_75;
          MR_Word check_hlds__modes__SpecsAcc_76;
          MR_Word check_hlds__modes__V_80_80;
          MR_Word check_hlds__modes__Markers_55;
          MR_String check_hlds__modes__Msg_56;

          {
            hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modes__PredInfo0_17, &check_hlds__modes__Markers_55);
          }
          {
            (check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_55, (MR_Integer) 3);
          }
          if ((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
            switch (check_hlds__modes__WhatToCheck_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                check_hlds__modes__Msg_56 = (MR_String) "% Mode-analysing ";
                break;
              case (MR_Integer) 1:
                check_hlds__modes__Msg_56 = (MR_String) "% Unique-mode-analysing ";
                break;
            }
          else
            switch (check_hlds__modes__WhatToCheck_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                check_hlds__modes__Msg_56 = (MR_String) "% Mode-checking ";
                break;
              case (MR_Integer) 1:
                check_hlds__modes__Msg_56 = (MR_String) "% Unique-mode-checking ";
                break;
            }
          {
            hlds__passes_aux__write_pred_progress_message_5_p_0(check_hlds__modes__Msg_56, check_hlds__modes__PredId_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25);
          }
          switch (check_hlds__modes__WhatToCheck_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__PredInfo0_17, &(check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcTable_71);
                }
                {
                  check_hlds__modes__maybe_modecheck_pred_9_p_0_4(&check_hlds__modes__env);
                }
                if ((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
                  check_hlds__modes__ThisPredDeclSpecs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  {
                    check_hlds__modes__ThisPredDeclSpecs_20 = check_hlds__mode_errors__maybe_report_error_no_modes_3_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__modes__PredId_12, check_hlds__modes__PredInfo0_17);
                  }
              }
              break;
            case (MR_Integer) 1:
              check_hlds__modes__ThisPredDeclSpecs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
          }
          {
            check_hlds__modes__ProcIds_75 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__modes__PredInfo0_17);
          }
          {
            check_hlds__modes__V_80_80 = parse_tree__error_util__init_error_spec_accumulator_0_f_0();
          }
          {
            check_hlds__modes__modecheck_procs_10_p_0(check_hlds__modes__ProcIds_75, check_hlds__modes__PredId_12, check_hlds__modes__WhatToCheck_10, check_hlds__modes__MayChangeCalledProc_11, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__modes__STATE_VARIABLE_Changed_0_27, check_hlds__modes__STATE_VARIABLE_Changed_28, check_hlds__modes__V_80_80, &check_hlds__modes__SpecsAcc_76);
          }
          {
            check_hlds__modes__ThisPredProcSpecs_21 = parse_tree__error_util__error_spec_accumulator_to_list_1_f_0(check_hlds__modes__SpecsAcc_76);
          }
          check_hlds__modes__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
          {
            check_hlds__modes__V_36_36 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_43_43, check_hlds__modes__ThisPredProcSpecs_21, check_hlds__modes__STATE_VARIABLE_Specs_0_29);
          }
          {
            *check_hlds__modes__STATE_VARIABLE_Specs_30 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_43_43, check_hlds__modes__ThisPredDeclSpecs_20, check_hlds__modes__V_36_36);
          }
          {
            hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33, &check_hlds__modes__Globals_22);
          }
          {
            check_hlds__modes__ContainsError_23 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__modes__Globals_22, check_hlds__modes__ThisPredProcSpecs_21);
          }
          switch (check_hlds__modes__ContainsError_23) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *check_hlds__modes__STATE_VARIABLE_ModuleInfo_26 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33;
              break;
            case (MR_Integer) 1:
              {
                hlds__hlds_module__module_info_make_pred_id_invalid_3_p_0(check_hlds__modes__PredId_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__modes__STATE_VARIABLE_ModuleInfo_26);
              }
              break;
          }
          {
            libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_22, (MR_Integer) 63, &check_hlds__modes__Statistics_24);
          }
          {
            libs__file_util__maybe_report_stats_3_p_0(check_hlds__modes__Statistics_24);
          }
        }
    }
  }
}

static void MR_CALL 
check_hlds__modes__copy_proc_body_4_p_0(
  MR_Word check_hlds__modes__OldProcTable_5,
  MR_Integer check_hlds__modes__ProcId_6,
  MR_Word check_hlds__modes__STATE_VARIABLE_ProcTable_0_12,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ProcTable_13)
{
  {
    MR_bool check_hlds__modes__succeeded;
    MR_Word check_hlds__modes__TypeCtorInfo_16_16 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    MR_Word check_hlds__modes__OldProcInfo_8;
    MR_Word check_hlds__modes__OldProcBody_9;
    MR_Word check_hlds__modes__ProcInfo0_10;
    MR_Word check_hlds__modes__ProcInfo_11;
    MR_Box check_hlds__modes__conv0_OldProcInfo_8;
    MR_Box check_hlds__modes__conv1_ProcInfo0_10;

    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__modes__TypeCtorInfo_16_16, check_hlds__modes__OldProcTable_5, check_hlds__modes__ProcId_6, &check_hlds__modes__conv0_OldProcInfo_8);
    }
    check_hlds__modes__OldProcInfo_8 = ((MR_Word) check_hlds__modes__conv0_OldProcInfo_8);
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__modes__OldProcInfo_8, &check_hlds__modes__OldProcBody_9);
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__modes__TypeCtorInfo_16_16, check_hlds__modes__STATE_VARIABLE_ProcTable_0_12, check_hlds__modes__ProcId_6, &check_hlds__modes__conv1_ProcInfo0_10);
    }
    check_hlds__modes__ProcInfo0_10 = ((MR_Word) check_hlds__modes__conv1_ProcInfo0_10);
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__modes__OldProcBody_9, check_hlds__modes__ProcInfo0_10, &check_hlds__modes__ProcInfo_11);
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__modes__TypeCtorInfo_16_16, check_hlds__modes__ProcId_6, ((MR_Box) (check_hlds__modes__ProcInfo_11)), check_hlds__modes__STATE_VARIABLE_ProcTable_0_12, check_hlds__modes__STATE_VARIABLE_ProcTable_13);
    }
  }
}

static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0_1(
  MR_Box check_hlds__modes__closure_arg,
  MR_Box check_hlds__modes__wrapper_arg_1,
  MR_Box check_hlds__modes__wrapper_arg_2,
  MR_Box * check_hlds__modes__wrapper_arg_3)
{
  {
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
    MR_Word check_hlds__modes__conv2_STATE_VARIABLE_ProcTable_13;

    {
      check_hlds__modes__copy_proc_body_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Integer) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2), &check_hlds__modes__conv2_STATE_VARIABLE_ProcTable_13);
    }
    *check_hlds__modes__wrapper_arg_3 = ((MR_Box) (check_hlds__modes__conv2_STATE_VARIABLE_ProcTable_13));
  }
}

static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0(
  MR_Word check_hlds__modes__OldPredTable_5,
  MR_Word check_hlds__modes__PredId_6,
  MR_Word check_hlds__modes__PredTable0_7,
  MR_Word * check_hlds__modes__PredTable_8)
{
  {
    MR_bool check_hlds__modes__succeeded;
    MR_Word check_hlds__modes__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    MR_Word check_hlds__modes__TypeCtorInfo_20_20 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    MR_Word check_hlds__modes__PredInfo0_9;
    MR_Box check_hlds__modes__conv0_PredInfo0_9;
    MR_Word check_hlds__modes__Markers_10;

    {
      mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_19_19, check_hlds__modes__TypeCtorInfo_20_20, check_hlds__modes__PredTable0_7, ((MR_Box) (check_hlds__modes__PredId_6)), &check_hlds__modes__conv0_PredInfo0_9);
    }
    check_hlds__modes__PredInfo0_9 = ((MR_Word) check_hlds__modes__conv0_PredInfo0_9);
    {
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modes__PredInfo0_9, &check_hlds__modes__Markers_10);
    }
    {
      check_hlds__modes__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_10, (MR_Integer) 10);
    }
    if (check_hlds__modes__succeeded)
      *check_hlds__modes__PredTable_8 = check_hlds__modes__PredTable0_7;
    else
      {
        MR_Word check_hlds__modes__TypeCtorInfo_21_21;
        MR_Word check_hlds__modes__ProcTable0_11;
        MR_Word check_hlds__modes__OldPredInfo_12;
        MR_Word check_hlds__modes__OldProcTable_13;
        MR_Word check_hlds__modes__OldProcIds_14;
        MR_Word check_hlds__modes__ProcTable_15;
        MR_Word check_hlds__modes__PredInfo_16;
        MR_Word check_hlds__modes__V_18_18;
        MR_Box check_hlds__modes__conv1_OldPredInfo_12;
        MR_Box check_hlds__modes__conv3_ProcTable_15;

        {
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__PredInfo0_9, &check_hlds__modes__ProcTable0_11);
        }
        {
          mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_19_19, check_hlds__modes__TypeCtorInfo_20_20, check_hlds__modes__OldPredTable_5, ((MR_Box) (check_hlds__modes__PredId_6)), &check_hlds__modes__conv1_OldPredInfo_12);
        }
        check_hlds__modes__OldPredInfo_12 = ((MR_Word) check_hlds__modes__conv1_OldPredInfo_12);
        {
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__OldPredInfo_12, &check_hlds__modes__OldProcTable_13);
        }
        check_hlds__modes__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          mercury__map__keys_2_p_0(check_hlds__modes__TypeCtorInfo_21_21, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__modes__OldProcTable_13, &check_hlds__modes__OldProcIds_14);
        }
        {
          check_hlds__modes__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_18_18, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_18_18, 1) = ((MR_Box) (check_hlds__modes__copy_pred_body_4_p_0_1));
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_18_18, 3) = ((MR_Box) (check_hlds__modes__OldProcTable_13));
        }
        {
          mercury__list__foldl_4_p_0(check_hlds__modes__TypeCtorInfo_21_21, (MR_Word) &check_hlds__modes_scalar_common_2[1], check_hlds__modes__V_18_18, check_hlds__modes__OldProcIds_14, ((MR_Box) (check_hlds__modes__ProcTable0_11)), &check_hlds__modes__conv3_ProcTable_15);
        }
        check_hlds__modes__ProcTable_15 = ((MR_Word) check_hlds__modes__conv3_ProcTable_15);
        {
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__modes__ProcTable_15, check_hlds__modes__PredInfo0_9, &check_hlds__modes__PredInfo_16);
        }
        {
          mercury__map__set_4_p_0(check_hlds__modes__TypeCtorInfo_19_19, check_hlds__modes__TypeCtorInfo_20_20, ((MR_Box) (check_hlds__modes__PredId_6)), ((MR_Box) (check_hlds__modes__PredInfo_16)), check_hlds__modes__PredTable0_7, check_hlds__modes__PredTable_8);
        }
      }
  }
}

static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_2(
  MR_Box check_hlds__modes__closure_arg,
  MR_Box check_hlds__modes__wrapper_arg_1,
  MR_Box check_hlds__modes__wrapper_arg_2,
  MR_Box * check_hlds__modes__wrapper_arg_3)
{
  {
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
    MR_Word check_hlds__modes__conv6_PredTable_8;

    {
      check_hlds__modes__copy_pred_body_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2), &check_hlds__modes__conv6_PredTable_8);
    }
    *check_hlds__modes__wrapper_arg_3 = ((MR_Box) (check_hlds__modes__conv6_PredTable_8));
  }
}

static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_1(
  MR_Box check_hlds__modes__closure_arg,
  MR_Box check_hlds__modes__wrapper_arg_1,
  MR_Box check_hlds__modes__wrapper_arg_2,
  MR_Box * check_hlds__modes__wrapper_arg_3,
  MR_Box check_hlds__modes__wrapper_arg_4,
  MR_Box * check_hlds__modes__wrapper_arg_5,
  MR_Box check_hlds__modes__wrapper_arg_6,
  MR_Box * check_hlds__modes__wrapper_arg_7)
{
  {
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
    MR_Word check_hlds__modes__conv2_STATE_VARIABLE_ModuleInfo_26;
    MR_Word check_hlds__modes__conv1_STATE_VARIABLE_Changed_28;
    MR_Word check_hlds__modes__conv0_STATE_VARIABLE_Specs_30;

    {
      check_hlds__modes__maybe_modecheck_pred_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2), &check_hlds__modes__conv2_STATE_VARIABLE_ModuleInfo_26, ((MR_Word) check_hlds__modes__wrapper_arg_4), &check_hlds__modes__conv1_STATE_VARIABLE_Changed_28, ((MR_Word) check_hlds__modes__wrapper_arg_6), &check_hlds__modes__conv0_STATE_VARIABLE_Specs_30);
    }
    *check_hlds__modes__wrapper_arg_3 = ((MR_Box) (check_hlds__modes__conv2_STATE_VARIABLE_ModuleInfo_26));
    *check_hlds__modes__wrapper_arg_5 = ((MR_Box) (check_hlds__modes__conv1_STATE_VARIABLE_Changed_28));
    *check_hlds__modes__wrapper_arg_7 = ((MR_Box) (check_hlds__modes__conv0_STATE_VARIABLE_Specs_30));
  }
}

static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0(
  MR_Word check_hlds__modes__PredIds_9,
  MR_Integer check_hlds__modes__MaxIterations_10,
  MR_Word check_hlds__modes__WhatToCheck_11,
  MR_Word check_hlds__modes__MayChangeCalledProc_12,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_32,
  MR_Word * check_hlds__modes__SafeToContinue_14,
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_33)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modes__succeeded;
        MR_Word check_hlds__modes__OldPredTable0_16;
        MR_Word check_hlds__modes__Changed1_17;
        MR_Word check_hlds__modes__OldPredTable_18;
        MR_Word check_hlds__modes__Changed2_19;
        MR_Word check_hlds__modes__QueuedSpecs_20;
        MR_Word check_hlds__modes__Changed_21;
        MR_Word check_hlds__modes__Globals_22;
        MR_Word check_hlds__modes__ErrorsSoFar_23;
        MR_Word check_hlds__modes__V_34_34;
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35;
        MR_Word check_hlds__modes__STATE_VARIABLE_Specs_38_38;
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39;
        MR_Word check_hlds__modes__STATE_VARIABLE_Specs_40_40;
        MR_Box check_hlds__modes__conv5_STATE_VARIABLE_ModuleInfo_35_35;
        MR_Box check_hlds__modes__conv4_Changed1_17;
        MR_Box check_hlds__modes__conv3_STATE_VARIABLE_Specs_38_38;

        {
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31, &check_hlds__modes__OldPredTable0_16);
        }
        {
          check_hlds__modes__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 1) = ((MR_Box) (check_hlds__modes__modecheck_to_fixpoint_8_p_0_1));
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 3) = ((MR_Box) (check_hlds__modes__WhatToCheck_11));
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 4) = ((MR_Box) (check_hlds__modes__MayChangeCalledProc_12));
        }
        {
          mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &check_hlds__modes_scalar_common_1[0], check_hlds__modes__V_34_34, check_hlds__modes__PredIds_9, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31)), &check_hlds__modes__conv5_STATE_VARIABLE_ModuleInfo_35_35, ((MR_Box) ((MR_Integer) 0)), &check_hlds__modes__conv4_Changed1_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__modes__conv3_STATE_VARIABLE_Specs_38_38);
        }
        check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35 = ((MR_Word) check_hlds__modes__conv5_STATE_VARIABLE_ModuleInfo_35_35);
        check_hlds__modes__Changed1_17 = ((MR_Word) check_hlds__modes__conv4_Changed1_17);
        check_hlds__modes__STATE_VARIABLE_Specs_38_38 = ((MR_Word) check_hlds__modes__conv3_STATE_VARIABLE_Specs_38_38);
        {
          check_hlds__modes__modecheck_queued_procs_7_p_0(check_hlds__modes__WhatToCheck_11, check_hlds__modes__OldPredTable0_16, &check_hlds__modes__OldPredTable_18, check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__Changed2_19, &check_hlds__modes__QueuedSpecs_20);
        }
        {
          check_hlds__modes__STATE_VARIABLE_Specs_40_40 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__QueuedSpecs_20, check_hlds__modes__STATE_VARIABLE_Specs_38_38);
        }
        {
          mercury__bool__or_3_p_0(check_hlds__modes__Changed1_17, check_hlds__modes__Changed2_19, &check_hlds__modes__Changed_21);
        }
        {
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__Globals_22);
        }
        {
          check_hlds__modes__ErrorsSoFar_23 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__modes__Globals_22, check_hlds__modes__STATE_VARIABLE_Specs_40_40);
        }
        switch (check_hlds__modes__Changed_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *check_hlds__modes__SafeToContinue_14 = (MR_Integer) 0;
              *check_hlds__modes__STATE_VARIABLE_ModuleInfo_32 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39;
              *check_hlds__modes__STATE_VARIABLE_Specs_33 = check_hlds__modes__STATE_VARIABLE_Specs_40_40;
            }
            break;
          case (MR_Integer) 1:
            switch (check_hlds__modes__ErrorsSoFar_23) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  check_hlds__modes__succeeded = (check_hlds__modes__MaxIterations_10 <= (MR_Integer) 1);
                  if (check_hlds__modes__succeeded)
                    {
                      MR_Word check_hlds__modes__MaxIterSpec_24;
                      MR_Word check_hlds__modes__Globals_73;
                      MR_Integer check_hlds__modes__MaxIterations_74;
                      MR_Word check_hlds__modes__Pieces_75;
                      MR_Word check_hlds__modes__Msg_76;
                      MR_Word check_hlds__modes__V_80_80;
                      MR_Word check_hlds__modes__V_82_82;
                      MR_Word check_hlds__modes__V_85_85;
                      MR_Word check_hlds__modes__V_88_88;
                      MR_Word check_hlds__modes__V_91_91;
                      MR_Word check_hlds__modes__V_94_94;
                      MR_Word check_hlds__modes__V_97_97;
                      MR_Word check_hlds__modes__V_98_98;
                      MR_Word check_hlds__modes__V_108_108;
                      MR_Word check_hlds__modes__V_109_109;
                      MR_Word check_hlds__modes__V_114_114;

                      {
                        hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__Globals_73);
                      }
                      {
                        libs__globals__lookup_int_option_3_p_0(check_hlds__modes__Globals_73, (MR_Integer) 180, &check_hlds__modes__MaxIterations_74);
                      }
                      {
                        check_hlds__modes__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), check_hlds__modes__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), check_hlds__modes__V_98_98, 1) = ((MR_Box) (check_hlds__modes__MaxIterations_74));
                      }
                      {
                        check_hlds__modes__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_97_97, 0) = ((MR_Box) (check_hlds__modes__V_98_98));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[6])));
                      }
                      {
                        check_hlds__modes__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_94_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[44])));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_94_94, 1) = ((MR_Box) (check_hlds__modes__V_97_97));
                      }
                      {
                        check_hlds__modes__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_91_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[43])));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_91_91, 1) = ((MR_Box) (check_hlds__modes__V_94_94));
                      }
                      {
                        check_hlds__modes__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_88_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[42])));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_88_88, 1) = ((MR_Box) (check_hlds__modes__V_91_91));
                      }
                      {
                        check_hlds__modes__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_85_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[41])));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_85_85, 1) = ((MR_Box) (check_hlds__modes__V_88_88));
                      }
                      {
                        check_hlds__modes__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_82_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[40])));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_82_82, 1) = ((MR_Box) (check_hlds__modes__V_85_85));
                      }
                      {
                        check_hlds__modes__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_80_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_80_80, 1) = ((MR_Box) (check_hlds__modes__V_82_82));
                      }
                      {
                        check_hlds__modes__Pieces_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__Pieces_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[39])));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__Pieces_75, 1) = ((MR_Box) (check_hlds__modes__V_80_80));
                      }
                      {
                        check_hlds__modes__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_109_109, 0) = ((MR_Box) (check_hlds__modes__Pieces_75));
                      }
                      {
                        check_hlds__modes__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_108_108, 0) = ((MR_Box) (check_hlds__modes__V_109_109));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        check_hlds__modes__Msg_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__Msg_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__Msg_76, 1) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__Msg_76, 2) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__Msg_76, 3) = ((MR_Box) (check_hlds__modes__V_108_108));
                      }
                      {
                        check_hlds__modes__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_114_114, 0) = ((MR_Box) (check_hlds__modes__Msg_76));
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        check_hlds__modes__MaxIterSpec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__modes__MaxIterSpec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), check_hlds__modes__MaxIterSpec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[1])));
                        MR_hl_field(MR_mktag(0), check_hlds__modes__MaxIterSpec_24, 2) = ((MR_Box) (check_hlds__modes__V_114_114));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *check_hlds__modes__STATE_VARIABLE_Specs_33 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modes__MaxIterSpec_24));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_40_40));
                      }
                      *check_hlds__modes__SafeToContinue_14 = (MR_Integer) 1;
                      *check_hlds__modes__STATE_VARIABLE_ModuleInfo_32 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39;
                    }
                  else
                    {
                      MR_Word check_hlds__modes__DebugModes_25;
                      MR_Integer check_hlds__modes__MaxIterations1_30;
                      MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_55_55;

                      {
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_22, (MR_Integer) 67, &check_hlds__modes__DebugModes_25);
                      }
                      switch (check_hlds__modes__DebugModes_25) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word check_hlds__modes__InferenceSpecs_26;
                            MR_Integer check_hlds__modes___NumWarnings_28;
                            MR_Integer check_hlds__modes___NumErrors_29;

                            {
                              check_hlds__modes__InferenceSpecs_26 = check_hlds__mode_errors__report_mode_inference_messages_3_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, (MR_Integer) 1, check_hlds__modes__PredIds_9);
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) "Inferences by current iteration:\n");
                            }
                            {
                              parse_tree__error_util__write_error_specs_8_p_0(check_hlds__modes__InferenceSpecs_26, check_hlds__modes__Globals_22, (MR_Integer) 0, &check_hlds__modes___NumWarnings_28, (MR_Integer) 0, &check_hlds__modes___NumErrors_29);
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) "End of inferences.\n");
                            }
                          }
                          break;
                      }
                      switch (check_hlds__modes__WhatToCheck_11) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_54_54;

                            {
                              check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_p_0(check_hlds__modes__PredIds_9, check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_54_54);
                            }
                            {
                              check_hlds__clause_to_proc__introduce_exists_casts_3_p_0(check_hlds__modes__PredIds_9, check_hlds__modes__STATE_VARIABLE_ModuleInfo_54_54, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_55_55);
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word check_hlds__modes__PredTable0_121;
                            MR_Word check_hlds__modes__PredTable_122;
                            MR_Word check_hlds__modes__V_123_123;
                            MR_Box check_hlds__modes__conv7_PredTable_122;

                            {
                              hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__PredTable0_121);
                            }
                            {
                              check_hlds__modes__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), check_hlds__modes__V_123_123, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_5[0]));
                              MR_hl_field(MR_mktag(0), check_hlds__modes__V_123_123, 1) = ((MR_Box) (check_hlds__modes__modecheck_to_fixpoint_8_p_0_2));
                              MR_hl_field(MR_mktag(0), check_hlds__modes__V_123_123, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                              MR_hl_field(MR_mktag(0), check_hlds__modes__V_123_123, 3) = ((MR_Box) (check_hlds__modes__OldPredTable_18));
                            }
                            {
                              mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__modes_scalar_common_2[0], check_hlds__modes__V_123_123, check_hlds__modes__PredIds_9, ((MR_Box) (check_hlds__modes__PredTable0_121)), &check_hlds__modes__conv7_PredTable_122);
                            }
                            check_hlds__modes__PredTable_122 = ((MR_Word) check_hlds__modes__conv7_PredTable_122);
                            {
                              hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__PredTable_122, check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_55_55);
                            }
                          }
                          break;
                      }
                      check_hlds__modes__MaxIterations1_30 = (check_hlds__modes__MaxIterations_10 - (MR_Integer) 1);
                      /* direct tailcall eliminated */
                      {
                        MR_Integer check_hlds__modes__MaxIterations__tmp_copy_10 = check_hlds__modes__MaxIterations1_30;
                        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_31 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_55_55;

                        check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_31;
                        check_hlds__modes__MaxIterations_10 = check_hlds__modes__MaxIterations__tmp_copy_10;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  *check_hlds__modes__SafeToContinue_14 = (MR_Integer) 1;
                  *check_hlds__modes__STATE_VARIABLE_ModuleInfo_32 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39;
                  *check_hlds__modes__STATE_VARIABLE_Specs_33 = check_hlds__modes__STATE_VARIABLE_Specs_40_40;
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
check_hlds__modes__modecheck_lambda_final_insts_6_p_0(
  MR_Word check_hlds__modes__HeadVars_7,
  MR_Word check_hlds__modes__ArgFinalInsts_8,
  MR_Word check_hlds__modes__STATE_VARIABLE_Goal_0_13,
  MR_Word * check_hlds__modes__STATE_VARIABLE_Goal_14,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_15,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_16)
{
  {
    MR_bool check_hlds__modes__succeeded;
    MR_Word check_hlds__modes___NewFinalInsts_12;

    {
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_7, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts_8, &check_hlds__modes___NewFinalInsts_12, check_hlds__modes__STATE_VARIABLE_Goal_0_13, check_hlds__modes__STATE_VARIABLE_Goal_14, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_15, check_hlds__modes__STATE_VARIABLE_ModeInfo_16);
    }
  }
}

void MR_CALL 
check_hlds__modes__modecheck_proc_general_8_p_0(
  MR_Integer check_hlds__modes__ProcId_9,
  MR_Word check_hlds__modes__PredId_10,
  MR_Word check_hlds__modes__WhatToCheck_11,
  MR_Word check_hlds__modes__MayChangeCalledProc_12,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_17,
  MR_Word * check_hlds__modes__Specs_14,
  MR_Word * check_hlds__modes__Changed_15)
{
  {
    MR_bool check_hlds__modes__succeeded;

    {
      check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_9, check_hlds__modes__PredId_10, check_hlds__modes__WhatToCheck_11, check_hlds__modes__MayChangeCalledProc_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_16, check_hlds__modes__STATE_VARIABLE_ModuleInfo_17, (MR_Integer) 0, check_hlds__modes__Changed_15, check_hlds__modes__Specs_14);
    }
  }
}

void MR_CALL 
check_hlds__modes__modecheck_proc_6_p_0(
  MR_Integer check_hlds__modes__ProcId_7,
  MR_Word check_hlds__modes__PredId_8,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_13,
  MR_Word * check_hlds__modes__Specs_10,
  MR_Word * check_hlds__modes__Changed_11)
{
  {
    MR_bool check_hlds__modes__succeeded;

    {
      check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_7, check_hlds__modes__PredId_8, (MR_Integer) 0, (MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_13, (MR_Integer) 0, check_hlds__modes__Changed_11, check_hlds__modes__Specs_10);
    }
  }
}

void MR_CALL 
check_hlds__modes__check_pred_modes_6_p_0(
  MR_Word check_hlds__modes__WhatToCheck_7,
  MR_Word check_hlds__modes__MayChangeCalledProc_8,
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_33,
  MR_Word * check_hlds__modes__SafeToContinue_10,
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_34)
{
  {
    MR_bool check_hlds__modes__succeeded;
    MR_Word check_hlds__modes__PredIds_12;
    MR_Word check_hlds__modes__Globals_13;
    MR_Integer check_hlds__modes__MaxIterations_14;
    MR_Word check_hlds__modes__SafeToContinue0_15;
    MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36;
    MR_Word check_hlds__modes__STATE_VARIABLE_Specs_37_37;

    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__modes__PredIds_12);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__modes__Globals_13);
    }
    {
      libs__globals__lookup_int_option_3_p_0(check_hlds__modes__Globals_13, (MR_Integer) 180, &check_hlds__modes__MaxIterations_14);
    }
    {
      check_hlds__modes__modecheck_to_fixpoint_8_p_0(check_hlds__modes__PredIds_12, check_hlds__modes__MaxIterations_14, check_hlds__modes__WhatToCheck_7, check_hlds__modes__MayChangeCalledProc_8, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36, &check_hlds__modes__SafeToContinue0_15, &check_hlds__modes__STATE_VARIABLE_Specs_37_37);
    }
    switch (check_hlds__modes__WhatToCheck_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (check_hlds__modes__SafeToContinue0_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__modes__DelayPartialInstantiations_17;

              {
                libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_13, (MR_Integer) 276, &check_hlds__modes__DelayPartialInstantiations_17);
              }
              switch (check_hlds__modes__DelayPartialInstantiations_17) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *check_hlds__modes__SafeToContinue_10 = (MR_Integer) 0;
                    *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36;
                    *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__STATE_VARIABLE_Specs_37_37;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__modes__ChangedPreds_21;
                    MR_Word check_hlds__modes__AfterDPIModuleInfo_22;
                    MR_Word check_hlds__modes__AfterDPISafeToContinue_23;
                    MR_Word check_hlds__modes__AfterDPISpecs_24;
                    MR_Word check_hlds__modes__MaybeBeforeDPISeverity_25;
                    MR_Word check_hlds__modes__MaybeAfterDPISeverity_26;
                    MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39;

                    {
                      check_hlds__delay_partial_inst__delay_partial_inst_preds_4_p_0(check_hlds__modes__PredIds_12, &check_hlds__modes__ChangedPreds_21, check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39);
                    }
                    {
                      check_hlds__modes__modecheck_to_fixpoint_8_p_0(check_hlds__modes__ChangedPreds_21, check_hlds__modes__MaxIterations_14, check_hlds__modes__WhatToCheck_7, check_hlds__modes__MayChangeCalledProc_8, check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__AfterDPIModuleInfo_22, &check_hlds__modes__AfterDPISafeToContinue_23, &check_hlds__modes__AfterDPISpecs_24);
                    }
                    {
                      check_hlds__modes__MaybeBeforeDPISeverity_25 = parse_tree__error_util__worst_severity_in_specs_2_f_0(check_hlds__modes__Globals_13, check_hlds__modes__STATE_VARIABLE_Specs_37_37);
                    }
                    {
                      check_hlds__modes__MaybeAfterDPISeverity_26 = parse_tree__error_util__worst_severity_in_specs_2_f_0(check_hlds__modes__Globals_13, check_hlds__modes__AfterDPISpecs_24);
                    }
                    if ((check_hlds__modes__MaybeBeforeDPISeverity_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      if ((check_hlds__modes__MaybeAfterDPISeverity_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__AfterDPISpecs_24;
                          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__AfterDPIModuleInfo_22;
                          *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__AfterDPISafeToContinue_23;
                        }
                      else
                        {
                          *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__STATE_VARIABLE_Specs_37_37;
                          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36;
                          *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__SafeToContinue0_15;
                        }
                    else
                      {
                        MR_Word check_hlds__modes__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__MaybeBeforeDPISeverity_25, (MR_Integer) 0)));

                        if ((check_hlds__modes__MaybeAfterDPISeverity_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__AfterDPISpecs_24;
                            *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__AfterDPIModuleInfo_22;
                            *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__AfterDPISafeToContinue_23;
                          }
                        else
                          {
                            MR_Word check_hlds__modes__AfterDPISeverity_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__MaybeAfterDPISeverity_26, (MR_Integer) 0)));
                            MR_Word check_hlds__modes__WorstSeverity_31;

                            {
                              check_hlds__modes__WorstSeverity_31 = parse_tree__error_util__worst_severity_2_f_0(check_hlds__modes__V_60_60, check_hlds__modes__AfterDPISeverity_30);
                            }
                            check_hlds__modes__succeeded = (check_hlds__modes__AfterDPISeverity_30 == check_hlds__modes__WorstSeverity_31);
                            if (check_hlds__modes__succeeded)
                              {
                                *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__STATE_VARIABLE_Specs_37_37;
                                *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36;
                                *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__SafeToContinue0_15;
                              }
                            else
                              {
                                *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__AfterDPISpecs_24;
                                *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__AfterDPIModuleInfo_22;
                                *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__AfterDPISafeToContinue_23;
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
              MR_Word check_hlds__modes__InferenceSpecs_55;

              {
                check_hlds__modes__InferenceSpecs_55 = check_hlds__mode_errors__report_mode_inference_messages_3_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36, (MR_Integer) 1, check_hlds__modes__PredIds_12);
              }
              {
                *check_hlds__modes__STATE_VARIABLE_Specs_34 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__InferenceSpecs_55, check_hlds__modes__STATE_VARIABLE_Specs_37_37);
              }
              *check_hlds__modes__SafeToContinue_10 = (MR_Integer) 1;
              *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__modes__InferenceSpecs_16;
          MR_Word check_hlds__modes__STATE_VARIABLE_Specs_53_53;
          MR_Word check_hlds__modes__PredIds_65;

          {
            check_hlds__modes__InferenceSpecs_16 = check_hlds__mode_errors__report_mode_inference_messages_3_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36, (MR_Integer) 0, check_hlds__modes__PredIds_12);
          }
          {
            check_hlds__modes__STATE_VARIABLE_Specs_53_53 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__InferenceSpecs_16, check_hlds__modes__STATE_VARIABLE_Specs_37_37);
          }
          {
            hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36, &check_hlds__modes__PredIds_65);
          }
          {
            check_hlds__modes__pred_check_eval_methods_4_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36, check_hlds__modes__PredIds_65, check_hlds__modes__STATE_VARIABLE_Specs_53_53, check_hlds__modes__STATE_VARIABLE_Specs_34);
          }
          *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__SafeToContinue0_15;
          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36;
        }
        break;
    }
  }
}

void MR_CALL 
check_hlds__modes__modecheck_module_2_p_0(
  MR_Word check_hlds__modes__ModuleInfo0_3,
  MR_Tuple * check_hlds__modes__HeadVar__2_2)
{
  {
    MR_bool check_hlds__modes__succeeded;
    MR_Word check_hlds__modes__ModuleInfo_4;
    MR_Word check_hlds__modes__SafeToContinue_5;
    MR_Word check_hlds__modes__Specs_6;

    {
      check_hlds__modes__check_pred_modes_6_p_0((MR_Integer) 0, (MR_Integer) 0, check_hlds__modes__ModuleInfo0_3, &check_hlds__modes__ModuleInfo_4, &check_hlds__modes__SafeToContinue_5, &check_hlds__modes__Specs_6);
    }
    {
      MR_Tuple base;
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__modes__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__ModuleInfo_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__SafeToContinue_5));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modes__Specs_6));
    }
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

/* :- end_module check_hlds.modes. */
