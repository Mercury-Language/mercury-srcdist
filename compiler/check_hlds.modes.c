/*
** Automatically generated from `modes.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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



#line 494 "modes.m"
struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s {
#line 499 "modes.m"
  MR_bool check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded;
#line 567 "modes.m"
  MR_Word check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcTable_71;
#line 571 "modes.m"
  jmp_buf check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__commit_0;
#line 571 "modes.m"
  MR_Word check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcInfo_81;
#line 571 "modes.m"
  MR_Word check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__V_84_84;
#line 571 "modes.m"
  MR_Integer check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0___ProcId_73;
#line 571 "modes.m"
  MR_Box check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv2__ProcId_73;
#line 571 "modes.m"
  MR_Box check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv1_ProcInfo_81;
#line 494 "modes.m"
};


#line 192 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 195 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 198 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 201 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 204 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 207 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 210 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 213 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 216 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 219 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 222 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 225 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_0[1];

#line 228 "check_hlds.modes.c"
static const MR_DuFunctorDesc check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0;

#line 231 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0;

#line 234 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_1[3];

#line 237 "check_hlds.modes.c"
static const MR_DuFunctorDesc check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1;

#line 240 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_0[1];

#line 243 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_1[1];

#line 246 "check_hlds.modes.c"
static const MR_DuPtagLayout check_hlds__modes__check_hlds__modes__du_ptag_ordered_clause_form_0[2];

#line 249 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_name_ordered_clause_form_0[2];

#line 252 "check_hlds.modes.c"
static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_clause_form_0[2];

#line 255 "check_hlds.modes.c"
static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0_10001(
#line 258 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 260 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2);

#line 263 "check_hlds.modes.c"
static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0_10001(
#line 266 "check_hlds.modes.c"
  MR_Box * check_hlds__modes__wrapper_arg_1,
#line 268 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 270 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_3);

#line 1091 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1091__1_2_p_0(
#line 1091 "modes.m"
  MR_Word check_hlds__modes__DetismSpecs_37,
#line 1091 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_56);

#line 1121 "modes.m"
static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0(
#line 1121 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__1_1,
#line 1121 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1121 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3);

#line 1121 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0(
#line 1121 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1121 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2);

#line 1483 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_nonunique_modes_2_p_0(
#line 1483 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1483 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2);

#line 1465 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_fully_in_out_modes_2_p_0(
#line 1465 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1465 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2);

#line 1426 "modes.m"
static void MR_CALL 
check_hlds__modes__proc_check_eval_methods_5_p_0(
#line 1426 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1426 "modes.m"
  MR_Word check_hlds__modes__PredId_2,
#line 1426 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3,
#line 1426 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_4,
#line 1426 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_5);

#line 1415 "modes.m"
static void MR_CALL 
check_hlds__modes__pred_check_eval_methods_4_p_0(
#line 1415 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1415 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1415 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_3,
#line 1415 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_4);

#line 1320 "modes.m"
static void MR_CALL 
check_hlds__modes__check_final_insts_13_p_0(
#line 1320 "modes.m"
  MR_Word check_hlds__modes__Vars_14,
#line 1320 "modes.m"
  MR_Word check_hlds__modes__Insts_15,
#line 1320 "modes.m"
  MR_Word check_hlds__modes__VarInsts_16,
#line 1320 "modes.m"
  MR_Word check_hlds__modes__InferModes_17,
#line 1320 "modes.m"
  MR_Word check_hlds__modes__GroundMatchesBound_18,
#line 1320 "modes.m"
  MR_Integer check_hlds__modes__ArgNum_19,
#line 1320 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_20,
#line 1320 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Goal_0_35,
#line 1320 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Goal_36,
#line 1320 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_37,
#line 1320 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_38,
#line 1320 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39,
#line 1320 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_40);

#line 1302 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_clobber_insts_3_p_0(
#line 1302 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1302 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1302 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__3_3);

#line 1239 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_final_insts_8_p_0(
#line 1239 "modes.m"
  MR_Word check_hlds__modes__HeadVars_9,
#line 1239 "modes.m"
  MR_Word check_hlds__modes__InferModes_10,
#line 1239 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14,
#line 1239 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_FinalInsts_15,
#line 1239 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Body_0_16,
#line 1239 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Body_17,
#line 1239 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
#line 1239 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19);

#line 1194 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_switch_9_p_0(
#line 1194 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1194 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1194 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1194 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1194 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1194 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1194 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1194 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1194 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28);

#line 1174 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_disj_11_p_0(
#line 1174 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_12,
#line 1174 "modes.m"
  MR_Word check_hlds__modes__HeadVars_13,
#line 1174 "modes.m"
  MR_Word check_hlds__modes__InstMap0_14,
#line 1174 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_15,
#line 1174 "modes.m"
  MR_Word check_hlds__modes__DisjDetism_16,
#line 1174 "modes.m"
  MR_Word check_hlds__modes__DisjNonLocals_17,
#line 1174 "modes.m"
  MR_Word check_hlds__modes__NondetLiveVars0_18,
#line 1174 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_19,
#line 1174 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_20,
#line 1174 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_24,
#line 1174 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_25);

#line 1140 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_switch_9_p_0(
#line 1140 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1140 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1140 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1140 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1140 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1140 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1140 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1140 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1140 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28);

#line 1125 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_disj_8_p_0(
#line 1125 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_9,
#line 1125 "modes.m"
  MR_Word check_hlds__modes__HeadVars_10,
#line 1125 "modes.m"
  MR_Word check_hlds__modes__InstMap0_11,
#line 1125 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_12,
#line 1125 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_13,
#line 1125 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_14,
#line 1125 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
#line 1125 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19);

#line 1091 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0_1(
#line 1091 "modes.m"
  MR_Box check_hlds__modes__closure_arg);

#line 979 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0(
#line 979 "modes.m"
  MR_Word check_hlds__modes__HowToCheckGoal_8,
#line 979 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26,
#line 979 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_OldPredTable_27,
#line 979 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28,
#line 979 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_29,
#line 979 "modes.m"
  MR_Word * check_hlds__modes__Changed_11,
#line 979 "modes.m"
  MR_Word * check_hlds__modes__Specs_12);

#line 930 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_5(
#line 930 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 930 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 930 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 930 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 930 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4);

#line 922 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_4(
#line 922 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 922 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 922 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 922 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 922 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4);

#line 887 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_3(
#line 887 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 887 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 887 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 887 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 887 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4);

#line 880 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_2(
#line 880 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 880 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 880 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 880 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 880 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4);

#line 861 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_1(
#line 861 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 861 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1);

#line 833 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0(
#line 833 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_16,
#line 833 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_17,
#line 833 "modes.m"
  MR_Word check_hlds__modes__InferModes_18,
#line 833 "modes.m"
  MR_Word check_hlds__modes__Markers_19,
#line 833 "modes.m"
  MR_Word check_hlds__modes__IsUnifyPred_20,
#line 833 "modes.m"
  MR_Word check_hlds__modes__PredId_21,
#line 833 "modes.m"
  MR_Integer check_hlds__modes__ProcId_22,
#line 833 "modes.m"
  MR_Word check_hlds__modes__Body0_23,
#line 833 "modes.m"
  MR_Word * check_hlds__modes__Body_24,
#line 833 "modes.m"
  MR_Word check_hlds__modes__HeadVars_25,
#line 833 "modes.m"
  MR_Word check_hlds__modes__InstMap0_26,
#line 833 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_27,
#line 833 "modes.m"
  MR_Word * check_hlds__modes__ArgFinalInsts_28,
#line 833 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66,
#line 833 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_67);

#line 752 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_2(
#line 752 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 752 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1);

#line 732 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_1(
#line 732 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 732 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1);

#line 623 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0(
#line 623 "modes.m"
  MR_Integer check_hlds__modes__ProcId_10,
#line 623 "modes.m"
  MR_Word check_hlds__modes__PredId_11,
#line 623 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_12,
#line 623 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_13,
#line 623 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23,
#line 623 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_24,
#line 623 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_25,
#line 623 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_26,
#line 623 "modes.m"
  MR_Word * check_hlds__modes__Specs_16);

#line 596 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_procs_10_p_0(
#line 596 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 596 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 596 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_3,
#line 596 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_4,
#line 596 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5,
#line 596 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_6,
#line 596 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_7,
#line 596 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_8,
#line 596 "modes.m"
  MR_Word check_hlds__modes__HeadVar__9_9,
#line 596 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__10_10);

#line 571 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_1(
#line 571 "modes.m"
  void * check_hlds__modes__env_ptr_arg);

#line 571 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_3(
#line 571 "modes.m"
  void * check_hlds__modes__env_ptr_arg);

#line 571 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_2(
#line 571 "modes.m"
  void * check_hlds__modes__env_ptr_arg);

#line 571 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_4(
#line 571 "modes.m"
  void * check_hlds__modes__env_ptr_arg);

#line 494 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0(
#line 494 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_10,
#line 494 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_11,
#line 494 "modes.m"
  MR_Word check_hlds__modes__PredId_12,
#line 494 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25,
#line 494 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_26,
#line 494 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_27,
#line 494 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_28,
#line 494 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_29,
#line 494 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_30);

#line 463 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_proc_body_4_p_0(
#line 463 "modes.m"
  MR_Word check_hlds__modes__OldProcTable_5,
#line 463 "modes.m"
  MR_Integer check_hlds__modes__ProcId_6,
#line 463 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ProcTable_0_12,
#line 463 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ProcTable_13);

#line 453 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0_1(
#line 453 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 453 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 453 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 453 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3);

#line 435 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0(
#line 435 "modes.m"
  MR_Word check_hlds__modes__OldPredTable_5,
#line 435 "modes.m"
  MR_Word check_hlds__modes__PredId_6,
#line 435 "modes.m"
  MR_Word check_hlds__modes__PredTable0_7,
#line 435 "modes.m"
  MR_Word * check_hlds__modes__PredTable_8);

#line 427 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_2(
#line 427 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 427 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 427 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 427 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3);

#line 324 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_1(
#line 324 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 324 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 324 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 324 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3,
#line 324 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_4,
#line 324 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_5,
#line 324 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_6,
#line 324 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_7);

#line 311 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0(
#line 311 "modes.m"
  MR_Word check_hlds__modes__PredIds_9,
#line 311 "modes.m"
  MR_Integer check_hlds__modes__MaxIterations_10,
#line 311 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_11,
#line 311 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_12,
#line 311 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31,
#line 311 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_32,
#line 311 "modes.m"
  MR_Word * check_hlds__modes__SafeToContinue_14,
#line 311 "modes.m"
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



#line 1283 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1291 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1300 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 1309 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1317 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1326 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1334 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1342 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1350 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1358 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1366 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1374 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1379 "check_hlds.modes.c"
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
  NULL
};

#line 1394 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0
  }
};

#line 1402 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_1[3] = {
  (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_can_fail_0,
  (MR_PseudoTypeInfo) &check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0
};

#line 1409 "check_hlds.modes.c"
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
  NULL
};

#line 1424 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_0[1] = {
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0
};

#line 1429 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_1[1] = {
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1
};

#line 1434 "check_hlds.modes.c"
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

#line 1448 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_name_ordered_clause_form_0[2] = {
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0,
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1
};

#line 1454 "check_hlds.modes.c"
static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_clause_form_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1460 "check_hlds.modes.c"
const MR_TypeCtorInfo_Struct check_hlds__modes__check_hlds__modes__type_ctor_info_clause_form_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1477 "check_hlds.modes.c"
static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0_10001(
#line 1480 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 1482 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2)
#line 1484 "check_hlds.modes.c"
{
#line 1486 "check_hlds.modes.c"
  {
#line 1488 "check_hlds.modes.c"
    MR_bool check_hlds__modes__succeeded;

#line 1491 "check_hlds.modes.c"
    {
#line 1493 "check_hlds.modes.c"
      check_hlds__modes__succeeded = check_hlds__modes____Unify____clause_form_0_0(((MR_Word) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2));
    }
#line 1496 "check_hlds.modes.c"
    return check_hlds__modes__succeeded;
#line 1498 "check_hlds.modes.c"
  }
#line 1500 "check_hlds.modes.c"
}

#line 1503 "check_hlds.modes.c"
static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0_10001(
#line 1506 "check_hlds.modes.c"
  MR_Box * check_hlds__modes__wrapper_arg_1,
#line 1508 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 1510 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_3)
#line 1512 "check_hlds.modes.c"
{
#line 1514 "check_hlds.modes.c"
  {
#line 1516 "check_hlds.modes.c"
    MR_Word check_hlds__modes__conv0_HeadVar__1_1;

#line 1519 "check_hlds.modes.c"
    {
#line 1521 "check_hlds.modes.c"
      check_hlds__modes____Compare____clause_form_0_0(&check_hlds__modes__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modes__wrapper_arg_2), ((MR_Word) check_hlds__modes__wrapper_arg_3));
    }
#line 1524 "check_hlds.modes.c"
    *check_hlds__modes__wrapper_arg_1 = ((MR_Box) (check_hlds__modes__conv0_HeadVar__1_1));
#line 1526 "check_hlds.modes.c"
  }
#line 1528 "check_hlds.modes.c"
}

#line 1091 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1091__1_2_p_0(
#line 1091 "modes.m"
  MR_Word check_hlds__modes__DetismSpecs_37,
#line 1091 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_56)
#line 1091 "modes.m"
{
#line 1091 "modes.m"
  {
#line 1091 "modes.m"
    MR_bool check_hlds__modes__succeeded;

#line 1091 "modes.m"
    {
#line 1091 "modes.m"
      check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modes_scalar_common_1[0], ((MR_Box) (check_hlds__modes__DetismSpecs_37)), ((MR_Box) (check_hlds__modes__HeadVar__2_56)));
    }
#line 1091 "modes.m"
    return check_hlds__modes__succeeded;
#line 1091 "modes.m"
  }
#line 1091 "modes.m"
}

#line 1121 "modes.m"
static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0(
#line 1121 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__1_1,
#line 1121 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1121 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3)
#line 1121 "modes.m"
{
#line 1121 "modes.m"
  {
#line 1121 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1121 "modes.m"
    MR_Integer check_hlds__modes__CastX_22 = (MR_Integer) check_hlds__modes__HeadVar__2_2;
#line 1121 "modes.m"
    MR_Integer check_hlds__modes__CastY_23 = (MR_Integer) check_hlds__modes__HeadVar__3_3;

#line 1121 "modes.m"
    check_hlds__modes__succeeded = (check_hlds__modes__CastX_22 == check_hlds__modes__CastY_23);
#line 1121 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1581 "check_hlds.modes.c"
      *check_hlds__modes__HeadVar__1_1 = (MR_Integer) 0;
#line 1121 "modes.m"
    else
#line 1121 "modes.m"
    if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1121 "modes.m"
      {
#line 1121 "modes.m"
        MR_Word check_hlds__modes__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));

#line 1121 "modes.m"
        if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1121 "modes.m"
          {
#line 1121 "modes.m"
            MR_Word check_hlds__modes__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__3_3, (MR_Integer) 0)));

#line 1121 "modes.m"
            {
#line 1121 "modes.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[3], check_hlds__modes__HeadVar__1_1, ((MR_Box) (check_hlds__modes__V_28_28)), ((MR_Box) (check_hlds__modes__V_5_5)));
            }
#line 1121 "modes.m"
          }
#line 1121 "modes.m"
        else
#line 1608 "check_hlds.modes.c"
          *check_hlds__modes__HeadVar__1_1 = (MR_Integer) 1;
#line 1121 "modes.m"
      }
#line 1121 "modes.m"
    else
#line 1121 "modes.m"
      {
#line 1121 "modes.m"
        MR_Word check_hlds__modes__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 2)));
#line 1121 "modes.m"
        MR_Word check_hlds__modes__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1121 "modes.m"
        MR_Word check_hlds__modes__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));

#line 1121 "modes.m"
        if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1625 "check_hlds.modes.c"
          *check_hlds__modes__HeadVar__1_1 = (MR_Integer) 2;
#line 1121 "modes.m"
        else
#line 1121 "modes.m"
          {
#line 1121 "modes.m"
            MR_Word check_hlds__modes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 0)));
#line 1121 "modes.m"
            MR_Word check_hlds__modes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 1)));
#line 1121 "modes.m"
            MR_Word check_hlds__modes__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 2)));
#line 1121 "modes.m"
            MR_Word check_hlds__modes__V_20_20;

#line 1121 "modes.m"
            {
#line 1121 "modes.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[1], &check_hlds__modes__V_20_20, ((MR_Box) (check_hlds__modes__V_31_31)), ((MR_Box) (check_hlds__modes__V_17_17)));
            }
#line 1645 "check_hlds.modes.c"
            check_hlds__modes__succeeded = (check_hlds__modes__V_20_20 == (MR_Integer) 0);
#line 1121 "modes.m"
            check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1121 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1121 "modes.m"
              *check_hlds__modes__HeadVar__1_1 = check_hlds__modes__V_20_20;
#line 1121 "modes.m"
            else
#line 1121 "modes.m"
              {
#line 1121 "modes.m"
                MR_Word check_hlds__modes__V_21_21;
#line 1121 "modes.m"
                MR_Integer check_hlds__modes__V_32_32 = (MR_Integer) check_hlds__modes__V_30_30;
#line 1121 "modes.m"
                MR_Integer check_hlds__modes__V_33_33 = (MR_Integer) check_hlds__modes__V_18_18;

#line 1121 "modes.m"
                {
#line 1121 "modes.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__modes__V_21_21, check_hlds__modes__V_32_32, check_hlds__modes__V_33_33);
                }
#line 1669 "check_hlds.modes.c"
                check_hlds__modes__succeeded = (check_hlds__modes__V_21_21 == (MR_Integer) 0);
#line 1121 "modes.m"
                check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1121 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1121 "modes.m"
                  *check_hlds__modes__HeadVar__1_1 = check_hlds__modes__V_21_21;
#line 1121 "modes.m"
                else
#line 1121 "modes.m"
                  {
#line 1121 "modes.m"
                    {
#line 1121 "modes.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[2], check_hlds__modes__HeadVar__1_1, ((MR_Box) (check_hlds__modes__V_29_29)), ((MR_Box) (check_hlds__modes__V_19_19)));
                    }
#line 1121 "modes.m"
                  }
#line 1121 "modes.m"
              }
#line 1121 "modes.m"
          }
#line 1121 "modes.m"
      }
#line 1121 "modes.m"
  }
#line 1121 "modes.m"
}

#line 1121 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0(
#line 1121 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1121 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2)
#line 1121 "modes.m"
{
#line 1121 "modes.m"
  {
#line 1121 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1121 "modes.m"
    MR_Integer check_hlds__modes__CastX_11 = (MR_Integer) check_hlds__modes__HeadVar__1_1;
#line 1121 "modes.m"
    MR_Integer check_hlds__modes__CastY_12 = (MR_Integer) check_hlds__modes__HeadVar__2_2;

#line 1121 "modes.m"
    check_hlds__modes__succeeded = (check_hlds__modes__CastX_11 == check_hlds__modes__CastY_12);
#line 1121 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1121 "modes.m"
      check_hlds__modes__succeeded = MR_TRUE;
#line 1121 "modes.m"
    else
#line 1121 "modes.m"
    if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1121 "modes.m"
      {
#line 1121 "modes.m"
        MR_Word check_hlds__modes__TypeInfo_13_13;
#line 1121 "modes.m"
        MR_Word check_hlds__modes__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1121 "modes.m"
        MR_Word check_hlds__modes__V_4_4;

#line 1121 "modes.m"
        check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1121 "modes.m"
        if (check_hlds__modes__succeeded)
#line 1121 "modes.m"
          {
#line 1121 "modes.m"
            check_hlds__modes__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1744 "check_hlds.modes.c"
            check_hlds__modes__TypeInfo_13_13 = (MR_Word) &check_hlds__modes_scalar_common_1[3];
#line 1746 "check_hlds.modes.c"
            {
#line 1748 "check_hlds.modes.c"
              check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modes__TypeInfo_13_13, ((MR_Box) (check_hlds__modes__V_3_3)), ((MR_Box) (check_hlds__modes__V_4_4)));
            }
#line 1121 "modes.m"
          }
#line 1121 "modes.m"
      }
#line 1121 "modes.m"
    else
#line 1121 "modes.m"
      {
#line 1121 "modes.m"
        MR_Word check_hlds__modes__TypeInfo_14_14;
#line 1121 "modes.m"
        MR_Word check_hlds__modes__TypeInfo_15_15;
#line 1121 "modes.m"
        MR_Word check_hlds__modes__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1121 "modes.m"
        MR_Word check_hlds__modes__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1121 "modes.m"
        MR_Word check_hlds__modes__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 2)));
#line 1121 "modes.m"
        MR_Word check_hlds__modes__V_8_8;
#line 1121 "modes.m"
        MR_Word check_hlds__modes__V_9_9;
#line 1121 "modes.m"
        MR_Word check_hlds__modes__V_10_10;

#line 1121 "modes.m"
        check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1121 "modes.m"
        if (check_hlds__modes__succeeded)
#line 1121 "modes.m"
          {
#line 1121 "modes.m"
            check_hlds__modes__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1121 "modes.m"
            check_hlds__modes__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1121 "modes.m"
            check_hlds__modes__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 2)));
#line 1788 "check_hlds.modes.c"
            check_hlds__modes__TypeInfo_14_14 = (MR_Word) &check_hlds__modes_scalar_common_1[1];
#line 1790 "check_hlds.modes.c"
            {
#line 1792 "check_hlds.modes.c"
              check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modes__TypeInfo_14_14, ((MR_Box) (check_hlds__modes__V_5_5)), ((MR_Box) (check_hlds__modes__V_8_8)));
            }
#line 1121 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1121 "modes.m"
              {
#line 1799 "check_hlds.modes.c"
                check_hlds__modes__succeeded = (check_hlds__modes__V_6_6 == check_hlds__modes__V_9_9);
#line 1121 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1121 "modes.m"
                  {
#line 1805 "check_hlds.modes.c"
                    check_hlds__modes__TypeInfo_15_15 = (MR_Word) &check_hlds__modes_scalar_common_1[2];
#line 1807 "check_hlds.modes.c"
                    {
#line 1809 "check_hlds.modes.c"
                      check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modes__TypeInfo_15_15, ((MR_Box) (check_hlds__modes__V_7_7)), ((MR_Box) (check_hlds__modes__V_10_10)));
                    }
#line 1121 "modes.m"
                  }
#line 1121 "modes.m"
              }
#line 1121 "modes.m"
          }
#line 1121 "modes.m"
      }
#line 1121 "modes.m"
    return check_hlds__modes__succeeded;
#line 1121 "modes.m"
  }
#line 1121 "modes.m"
}

#line 1483 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_nonunique_modes_2_p_0(
#line 1483 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1483 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2)
#line 1483 "modes.m"
{
#line 1485 "modes.m"
  while (MR_TRUE)
#line 1485 "modes.m"
    {
#line 1485 "modes.m"
      /* tailcall optimized into a loop */
#line 1485 "modes.m"
      {
#line 1485 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 1485 "modes.m"
        if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1485 "modes.m"
          check_hlds__modes__succeeded = MR_TRUE;
#line 1485 "modes.m"
        else
#line 1486 "modes.m"
          {
#line 1486 "modes.m"
            MR_Word check_hlds__modes__Mode_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1486 "modes.m"
            MR_Word check_hlds__modes__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1486 "modes.m"
            MR_Word check_hlds__modes__InitialInst_7;
#line 1486 "modes.m"
            MR_Word check_hlds__modes__FinalInst_8;

#line 1487 "modes.m"
            {
#line 1487 "modes.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__Mode_4, &check_hlds__modes__InitialInst_7, &check_hlds__modes__FinalInst_8);
            }
#line 1488 "modes.m"
            {
#line 1488 "modes.m"
              check_hlds__modes__succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__InitialInst_7);
            }
#line 1486 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1486 "modes.m"
              {
#line 1489 "modes.m"
                {
#line 1489 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__FinalInst_8);
                }
#line 1486 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1490 "modes.m"
                  {
#line 1490 "modes.m"
                    /* direct tailcall eliminated */
#line 1490 "modes.m"
                    {
#line 1490 "modes.m"
                      MR_Word check_hlds__modes__HeadVar__1__tmp_copy_1 = check_hlds__modes__Rest_5;

#line 1490 "modes.m"
                      check_hlds__modes__HeadVar__1_1 = check_hlds__modes__HeadVar__1__tmp_copy_1;
#line 1490 "modes.m"
                    }
#line 1490 "modes.m"
                    continue;
#line 1490 "modes.m"
                  }
#line 1486 "modes.m"
              }
#line 1486 "modes.m"
          }
#line 1485 "modes.m"
        return check_hlds__modes__succeeded;
#line 1485 "modes.m"
      }
#line 1485 "modes.m"
      break;
#line 1485 "modes.m"
    }
#line 1483 "modes.m"
}

#line 1465 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_fully_in_out_modes_2_p_0(
#line 1465 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1465 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2)
#line 1465 "modes.m"
{
#line 1468 "modes.m"
  while (MR_TRUE)
#line 1468 "modes.m"
    {
#line 1468 "modes.m"
      /* tailcall optimized into a loop */
#line 1468 "modes.m"
      {
#line 1468 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 1468 "modes.m"
        if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1468 "modes.m"
          check_hlds__modes__succeeded = MR_TRUE;
#line 1468 "modes.m"
        else
#line 1469 "modes.m"
          {
#line 1469 "modes.m"
            MR_Word check_hlds__modes__Mode_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1469 "modes.m"
            MR_Word check_hlds__modes__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1469 "modes.m"
            MR_Word check_hlds__modes__InitialInst_7;
#line 1469 "modes.m"
            MR_Word check_hlds__modes__FinalInst_8;

#line 1470 "modes.m"
            {
#line 1470 "modes.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__Mode_4, &check_hlds__modes__InitialInst_7, &check_hlds__modes__FinalInst_8);
            }
#line 1472 "modes.m"
            {
#line 1472 "modes.m"
              check_hlds__modes__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__InitialInst_7);
            }
#line 1473 "modes.m"
            if (!(check_hlds__modes__succeeded))
#line 1474 "modes.m"
              {
#line 1474 "modes.m"
                {
#line 1474 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__InitialInst_7);
                }
#line 1474 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1474 "modes.m"
                  {
#line 1476 "modes.m"
                    {
#line 1476 "modes.m"
                      check_hlds__modes__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__FinalInst_8);
                    }
#line 1477 "modes.m"
                    if (!(check_hlds__modes__succeeded))
#line 1478 "modes.m"
                      {
#line 1478 "modes.m"
                        check_hlds__modes__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__FinalInst_8);
                      }
#line 1474 "modes.m"
                  }
#line 1474 "modes.m"
              }
#line 1469 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1481 "modes.m"
              {
#line 1481 "modes.m"
                /* direct tailcall eliminated */
#line 1481 "modes.m"
                {
#line 1481 "modes.m"
                  MR_Word check_hlds__modes__HeadVar__1__tmp_copy_1 = check_hlds__modes__Rest_5;

#line 1481 "modes.m"
                  check_hlds__modes__HeadVar__1_1 = check_hlds__modes__HeadVar__1__tmp_copy_1;
#line 1481 "modes.m"
                }
#line 1481 "modes.m"
                continue;
#line 1481 "modes.m"
              }
#line 1469 "modes.m"
          }
#line 1468 "modes.m"
        return check_hlds__modes__succeeded;
#line 1468 "modes.m"
      }
#line 1468 "modes.m"
      break;
#line 1468 "modes.m"
    }
#line 1465 "modes.m"
}

#line 1426 "modes.m"
static void MR_CALL 
check_hlds__modes__proc_check_eval_methods_5_p_0(
#line 1426 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1426 "modes.m"
  MR_Word check_hlds__modes__PredId_2,
#line 1426 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3,
#line 1426 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_4,
#line 1426 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_5)
#line 1426 "modes.m"
{
#line 1429 "modes.m"
  while (MR_TRUE)
#line 1429 "modes.m"
    {
#line 1429 "modes.m"
      /* tailcall optimized into a loop */
#line 1429 "modes.m"
      {
#line 1429 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 1429 "modes.m"
        if ((check_hlds__modes__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1429 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Specs_5 = check_hlds__modes__STATE_VARIABLE_Specs_0_4;
#line 1429 "modes.m"
        else
#line 1430 "modes.m"
          {
#line 1430 "modes.m"
            MR_Integer check_hlds__modes__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 0)));
#line 1430 "modes.m"
            MR_Word check_hlds__modes__ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 1)));
#line 1430 "modes.m"
            MR_Word check_hlds__modes__PredInfo_16;
#line 1430 "modes.m"
            MR_Word check_hlds__modes__ProcInfo_17;
#line 1430 "modes.m"
            MR_Word check_hlds__modes__EvalMethod_18;
#line 1430 "modes.m"
            MR_Word check_hlds__modes__Modes_19;
#line 1430 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_26_26;
#line 1430 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_28_28;
#line 1430 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_31_31;
#line 1435 "modes.m"
            MR_Word check_hlds__modes__V_25_25;
#line 1444 "modes.m"
            MR_Word check_hlds__modes__V_27_27;
#line 1453 "modes.m"
            MR_String check_hlds__modes__V_29_29;
#line 1453 "modes.m"
            MR_Integer check_hlds__modes__V_30_30;
#line 1494 "modes.m"
            MR_Word check_hlds__modes__Di_123;
#line 1494 "modes.m"
            MR_Word check_hlds__modes__Uo_124;
#line 1494 "modes.m"
            MR_Word check_hlds__modes__DiInitialInst_125;
#line 1494 "modes.m"
            MR_Word check_hlds__modes__DiFinalInst_126;
#line 1494 "modes.m"
            MR_Word check_hlds__modes__UoInitialInst_127;
#line 1494 "modes.m"
            MR_Word check_hlds__modes__UoFinalInst_128;
#line 1494 "modes.m"
            MR_Word check_hlds__modes__Unique_129;
#line 1494 "modes.m"
            MR_Word check_hlds__modes__Clobbered_130;
#line 1494 "modes.m"
            MR_Word check_hlds__modes__Free_131;
#line 1494 "modes.m"
            MR_Word check_hlds__modes__V_133_133;
#line 1494 "modes.m"
            MR_Word check_hlds__modes__V_134_134;
#line 1494 "modes.m"
            MR_Word check_hlds__modes__V_135_135;
#line 1494 "modes.m"
            MR_Word check_hlds__modes__V_136_136;
#line 1494 "modes.m"
            MR_Word check_hlds__modes__V_137_137;
#line 1494 "modes.m"
            MR_Word check_hlds__modes__V_138_138;
#line 1494 "modes.m"
            MR_Word check_hlds__modes__V_139_139;
#line 1494 "modes.m"
            MR_Word check_hlds__modes__V_140_140;
#line 1494 "modes.m"
            MR_Word check_hlds__modes__V_141_141;

#line 1431 "modes.m"
            {
#line 1431 "modes.m"
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__PredId_2, check_hlds__modes__ProcId_13, &check_hlds__modes__PredInfo_16, &check_hlds__modes__ProcInfo_17);
            }
#line 1432 "modes.m"
            {
#line 1432 "modes.m"
              hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__EvalMethod_18);
            }
#line 1433 "modes.m"
            {
#line 1433 "modes.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Modes_19);
            }
#line 1435 "modes.m"
            {
#line 1435 "modes.m"
              check_hlds__modes__V_25_25 = hlds__hlds_pred__eval_method_requires_ground_args_1_f_0(check_hlds__modes__EvalMethod_18);
            }
#line 1435 "modes.m"
            check_hlds__modes__succeeded = (check_hlds__modes__V_25_25 == (MR_Integer) 1);
#line 1435 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1435 "modes.m"
              {
#line 1436 "modes.m"
                {
#line 1436 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__modes__only_fully_in_out_modes_2_p_0(check_hlds__modes__Modes_19, check_hlds__modes__ModuleInfo_1);
                }
#line 1436 "modes.m"
                check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1435 "modes.m"
              }
#line 1434 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1438 "modes.m"
              {
#line 1438 "modes.m"
                MR_Word check_hlds__modes__GroundArgsSpec_20;
#line 1438 "modes.m"
                MR_Word check_hlds__modes__EvalMethod_35;
#line 1438 "modes.m"
                MR_Word check_hlds__modes__Context_36;
#line 1438 "modes.m"
                MR_String check_hlds__modes__EvalMethodS_37;
#line 1438 "modes.m"
                MR_Word check_hlds__modes__MainPieces_38;
#line 1438 "modes.m"
                MR_Word check_hlds__modes__Msg_40;
#line 1438 "modes.m"
                MR_Word check_hlds__modes__V_43_43;
#line 1438 "modes.m"
                MR_Word check_hlds__modes__V_44_44;
#line 1438 "modes.m"
                MR_Word check_hlds__modes__V_65_65;
#line 1438 "modes.m"
                MR_Word check_hlds__modes__V_66_66;
#line 1438 "modes.m"
                MR_Word check_hlds__modes__V_74_74;

#line 1516 "modes.m"
                {
#line 1516 "modes.m"
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__EvalMethod_35);
                }
#line 1517 "modes.m"
                {
#line 1517 "modes.m"
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Context_36);
                }
#line 1518 "modes.m"
                {
#line 1518 "modes.m"
                  check_hlds__modes__EvalMethodS_37 = parse_tree__prog_out__eval_method_to_string_1_f_0(check_hlds__modes__EvalMethod_35);
                }
#line 1520 "modes.m"
                {
#line 1520 "modes.m"
                  check_hlds__modes__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1520 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 1520 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_44_44, 1) = ((MR_Box) (check_hlds__modes__EvalMethodS_37));
#line 1520 "modes.m"
                }
#line 1520 "modes.m"
                {
#line 1520 "modes.m"
                  check_hlds__modes__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1520 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_43_43, 0) = ((MR_Box) (check_hlds__modes__V_44_44));
#line 1520 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[10])));
#line 1520 "modes.m"
                }
#line 1519 "modes.m"
                {
#line 1519 "modes.m"
                  check_hlds__modes__MainPieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1519 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[45])));
#line 1519 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_38, 1) = ((MR_Box) (check_hlds__modes__V_43_43));
#line 1519 "modes.m"
                }
#line 1527 "modes.m"
                {
#line 1527 "modes.m"
                  check_hlds__modes__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1527 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_66_66, 0) = ((MR_Box) (check_hlds__modes__MainPieces_38));
#line 1527 "modes.m"
                }
#line 1527 "modes.m"
                {
#line 1527 "modes.m"
                  check_hlds__modes__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1527 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_65_65, 0) = ((MR_Box) (check_hlds__modes__V_66_66));
#line 1527 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[47])));
#line 1527 "modes.m"
                }
#line 1526 "modes.m"
                {
#line 1526 "modes.m"
                  check_hlds__modes__Msg_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1526 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_40, 0) = ((MR_Box) (check_hlds__modes__Context_36));
#line 1526 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_40, 1) = ((MR_Box) (check_hlds__modes__V_65_65));
#line 1526 "modes.m"
                }
#line 1529 "modes.m"
                {
#line 1529 "modes.m"
                  check_hlds__modes__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1529 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_74_74, 0) = ((MR_Box) (check_hlds__modes__Msg_40));
#line 1529 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1529 "modes.m"
                }
#line 1528 "modes.m"
                {
#line 1528 "modes.m"
                  check_hlds__modes__GroundArgsSpec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1528 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__GroundArgsSpec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1528 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__GroundArgsSpec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[1])));
#line 1528 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__GroundArgsSpec_20, 2) = ((MR_Box) (check_hlds__modes__V_74_74));
#line 1528 "modes.m"
                }
#line 1439 "modes.m"
                {
#line 1439 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Specs_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1439 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_26_26, 0) = ((MR_Box) (check_hlds__modes__GroundArgsSpec_20));
#line 1439 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_26_26, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_0_4));
#line 1439 "modes.m"
                }
#line 1438 "modes.m"
              }
#line 1434 "modes.m"
            else
#line 1434 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_26_26 = check_hlds__modes__STATE_VARIABLE_Specs_0_4;
#line 1444 "modes.m"
            {
#line 1444 "modes.m"
              check_hlds__modes__V_27_27 = hlds__hlds_pred__eval_method_destroys_uniqueness_1_f_0(check_hlds__modes__EvalMethod_18);
            }
#line 1444 "modes.m"
            check_hlds__modes__succeeded = (check_hlds__modes__V_27_27 == (MR_Integer) 1);
#line 1444 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1444 "modes.m"
              {
#line 1445 "modes.m"
                {
#line 1445 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__modes__only_nonunique_modes_2_p_0(check_hlds__modes__Modes_19, check_hlds__modes__ModuleInfo_1);
                }
#line 1445 "modes.m"
                check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1444 "modes.m"
              }
#line 1443 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1447 "modes.m"
              {
#line 1447 "modes.m"
                MR_Word check_hlds__modes__UniquenessSpec_21;
#line 1447 "modes.m"
                MR_Word check_hlds__modes__EvalMethod_78;
#line 1447 "modes.m"
                MR_Word check_hlds__modes__Context_79;
#line 1447 "modes.m"
                MR_String check_hlds__modes__EvalMethodS_80;
#line 1447 "modes.m"
                MR_Word check_hlds__modes__MainPieces_81;
#line 1447 "modes.m"
                MR_Word check_hlds__modes__Msg_83;
#line 1447 "modes.m"
                MR_Word check_hlds__modes__V_86_86;
#line 1447 "modes.m"
                MR_Word check_hlds__modes__V_87_87;
#line 1447 "modes.m"
                MR_Word check_hlds__modes__V_111_111;
#line 1447 "modes.m"
                MR_Word check_hlds__modes__V_112_112;
#line 1447 "modes.m"
                MR_Word check_hlds__modes__V_120_120;

#line 1534 "modes.m"
                {
#line 1534 "modes.m"
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__EvalMethod_78);
                }
#line 1535 "modes.m"
                {
#line 1535 "modes.m"
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Context_79);
                }
#line 1536 "modes.m"
                {
#line 1536 "modes.m"
                  check_hlds__modes__EvalMethodS_80 = parse_tree__prog_out__eval_method_to_string_1_f_0(check_hlds__modes__EvalMethod_78);
                }
#line 1538 "modes.m"
                {
#line 1538 "modes.m"
                  check_hlds__modes__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 1538 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_87_87, 1) = ((MR_Box) (check_hlds__modes__EvalMethodS_80));
#line 1538 "modes.m"
                }
#line 1538 "modes.m"
                {
#line 1538 "modes.m"
                  check_hlds__modes__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_86_86, 0) = ((MR_Box) (check_hlds__modes__V_87_87));
#line 1538 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[19])));
#line 1538 "modes.m"
                }
#line 1537 "modes.m"
                {
#line 1537 "modes.m"
                  check_hlds__modes__MainPieces_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[48])));
#line 1537 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_81, 1) = ((MR_Box) (check_hlds__modes__V_86_86));
#line 1537 "modes.m"
                }
#line 1547 "modes.m"
                {
#line 1547 "modes.m"
                  check_hlds__modes__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1547 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_112_112, 0) = ((MR_Box) (check_hlds__modes__MainPieces_81));
#line 1547 "modes.m"
                }
#line 1547 "modes.m"
                {
#line 1547 "modes.m"
                  check_hlds__modes__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1547 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_111_111, 0) = ((MR_Box) (check_hlds__modes__V_112_112));
#line 1547 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[50])));
#line 1547 "modes.m"
                }
#line 1546 "modes.m"
                {
#line 1546 "modes.m"
                  check_hlds__modes__Msg_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1546 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_83, 0) = ((MR_Box) (check_hlds__modes__Context_79));
#line 1546 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_83, 1) = ((MR_Box) (check_hlds__modes__V_111_111));
#line 1546 "modes.m"
                }
#line 1549 "modes.m"
                {
#line 1549 "modes.m"
                  check_hlds__modes__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1549 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_120_120, 0) = ((MR_Box) (check_hlds__modes__Msg_83));
#line 1549 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1549 "modes.m"
                }
#line 1548 "modes.m"
                {
#line 1548 "modes.m"
                  check_hlds__modes__UniquenessSpec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1548 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__UniquenessSpec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1548 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__UniquenessSpec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[1])));
#line 1548 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__UniquenessSpec_21, 2) = ((MR_Box) (check_hlds__modes__V_120_120));
#line 1548 "modes.m"
                }
#line 1448 "modes.m"
                {
#line 1448 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Specs_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1448 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_28_28, 0) = ((MR_Box) (check_hlds__modes__UniquenessSpec_21));
#line 1448 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_28_28, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_26_26));
#line 1448 "modes.m"
                }
#line 1447 "modes.m"
              }
#line 1443 "modes.m"
            else
#line 1443 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_28_28 = check_hlds__modes__STATE_VARIABLE_Specs_26_26;
#line 1453 "modes.m"
            {
#line 1453 "modes.m"
              check_hlds__modes__V_29_29 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__modes__PredInfo_16);
            }
#line 1453 "modes.m"
            check_hlds__modes__succeeded = (strcmp(check_hlds__modes__V_29_29, (MR_String) "main") == 0);
#line 1453 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1453 "modes.m"
              {
#line 1454 "modes.m"
                {
#line 1454 "modes.m"
                  check_hlds__modes__V_30_30 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__modes__PredInfo_16);
                }
#line 1454 "modes.m"
                check_hlds__modes__succeeded = (check_hlds__modes__V_30_30 == (MR_Integer) 2);
#line 1453 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1453 "modes.m"
                  {
#line 1455 "modes.m"
                    {
#line 1455 "modes.m"
                      check_hlds__modes__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(check_hlds__modes__PredInfo_16);
                    }
#line 1453 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1453 "modes.m"
                      {
#line 1494 "modes.m"
                        check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Modes_19)) == (MR_mktag((MR_Integer) 1)));
#line 1494 "modes.m"
                        if (check_hlds__modes__succeeded)
#line 1494 "modes.m"
                          {
#line 1494 "modes.m"
                            check_hlds__modes__Di_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Modes_19, (MR_Integer) 0)));
#line 1494 "modes.m"
                            check_hlds__modes__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Modes_19, (MR_Integer) 1)));
#line 1494 "modes.m"
                            check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__V_133_133)) == (MR_mktag((MR_Integer) 1)));
#line 1494 "modes.m"
                            if (check_hlds__modes__succeeded)
#line 1494 "modes.m"
                              {
#line 1494 "modes.m"
                                check_hlds__modes__Uo_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__V_133_133, (MR_Integer) 0)));
#line 1494 "modes.m"
                                check_hlds__modes__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__V_133_133, (MR_Integer) 1)));
#line 1494 "modes.m"
                                check_hlds__modes__succeeded = (check_hlds__modes__V_134_134 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1494 "modes.m"
                                if (check_hlds__modes__succeeded)
#line 1494 "modes.m"
                                  {
#line 1495 "modes.m"
                                    {
#line 1495 "modes.m"
                                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__Di_123, &check_hlds__modes__DiInitialInst_125, &check_hlds__modes__DiFinalInst_126);
                                    }
#line 1496 "modes.m"
                                    {
#line 1496 "modes.m"
                                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__Uo_124, &check_hlds__modes__UoInitialInst_127, &check_hlds__modes__UoFinalInst_128);
                                    }
#line 1505 "modes.m"
                                    check_hlds__modes__V_135_135 = (MR_Integer) 1;
#line 1505 "modes.m"
                                    check_hlds__modes__V_136_136 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1506 "modes.m"
                                    check_hlds__modes__V_137_137 = (MR_Integer) 3;
#line 1506 "modes.m"
                                    check_hlds__modes__V_138_138 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1505 "modes.m"
                                    check_hlds__modes__Unique_129 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[3]);
#line 1506 "modes.m"
                                    check_hlds__modes__Clobbered_130 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[2]);
#line 1507 "modes.m"
                                    {
#line 1507 "modes.m"
                                      check_hlds__inst_util__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__DiInitialInst_125, &check_hlds__modes__V_139_139);
                                    }
#line 1507 "modes.m"
                                    {
#line 1507 "modes.m"
                                      check_hlds__modes__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modes__Unique_129, check_hlds__modes__V_139_139);
                                    }
#line 1494 "modes.m"
                                    if (check_hlds__modes__succeeded)
#line 1494 "modes.m"
                                      {
#line 1508 "modes.m"
                                        {
#line 1508 "modes.m"
                                          check_hlds__inst_util__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__DiFinalInst_126, &check_hlds__modes__V_140_140);
                                        }
#line 1508 "modes.m"
                                        {
#line 1508 "modes.m"
                                          check_hlds__modes__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modes__Clobbered_130, check_hlds__modes__V_140_140);
                                        }
#line 1494 "modes.m"
                                        if (check_hlds__modes__succeeded)
#line 1494 "modes.m"
                                          {
#line 1509 "modes.m"
                                            {
#line 1509 "modes.m"
                                              check_hlds__inst_util__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__UoInitialInst_127, &check_hlds__modes__Free_131);
                                            }
#line 1510 "modes.m"
                                            if ((check_hlds__modes__Free_131 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1510 "modes.m"
                                              check_hlds__modes__succeeded = MR_TRUE;
#line 1510 "modes.m"
                                            else
#line 1510 "modes.m"
                                            if (((MR_tag((MR_Word) check_hlds__modes__Free_131)) == (MR_mktag((MR_Integer) 1))))
#line 1510 "modes.m"
                                              check_hlds__modes__succeeded = MR_TRUE;
#line 1510 "modes.m"
                                            else
#line 1510 "modes.m"
                                              check_hlds__modes__succeeded = MR_FALSE;
#line 1494 "modes.m"
                                            if (check_hlds__modes__succeeded)
#line 1494 "modes.m"
                                              {
#line 1511 "modes.m"
                                                {
#line 1511 "modes.m"
                                                  check_hlds__inst_util__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__UoFinalInst_128, &check_hlds__modes__V_141_141);
                                                }
#line 1511 "modes.m"
                                                {
#line 1511 "modes.m"
                                                  check_hlds__modes__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modes__Unique_129, check_hlds__modes__V_141_141);
                                                }
#line 1494 "modes.m"
                                              }
#line 1494 "modes.m"
                                          }
#line 1494 "modes.m"
                                      }
#line 1494 "modes.m"
                                  }
#line 1494 "modes.m"
                              }
#line 1494 "modes.m"
                          }
#line 1456 "modes.m"
                        check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1453 "modes.m"
                      }
#line 1453 "modes.m"
                  }
#line 1453 "modes.m"
              }
#line 1452 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1458 "modes.m"
              {
#line 1458 "modes.m"
                MR_Word check_hlds__modes__MainSpec_22;
#line 1458 "modes.m"
                MR_Word check_hlds__modes__Context_147;
#line 1458 "modes.m"
                MR_Word check_hlds__modes__Msg_149;
#line 1458 "modes.m"
                MR_Word check_hlds__modes__V_176_176;

#line 1554 "modes.m"
                {
#line 1554 "modes.m"
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Context_147);
                }
#line 1557 "modes.m"
                {
#line 1557 "modes.m"
                  check_hlds__modes__Msg_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1557 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_149, 0) = ((MR_Box) (check_hlds__modes__Context_147));
#line 1557 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[51])));
#line 1557 "modes.m"
                }
#line 1559 "modes.m"
                {
#line 1559 "modes.m"
                  check_hlds__modes__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1559 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_176_176, 0) = ((MR_Box) (check_hlds__modes__Msg_149));
#line 1559 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_176_176, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1559 "modes.m"
                }
#line 1558 "modes.m"
                {
#line 1558 "modes.m"
                  check_hlds__modes__MainSpec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1558 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__MainSpec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1558 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__MainSpec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[1])));
#line 1558 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__MainSpec_22, 2) = ((MR_Box) (check_hlds__modes__V_176_176));
#line 1558 "modes.m"
                }
#line 1459 "modes.m"
                {
#line 1459 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Specs_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1459 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_31_31, 0) = ((MR_Box) (check_hlds__modes__MainSpec_22));
#line 1459 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_31_31, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_28_28));
#line 1459 "modes.m"
                }
#line 1458 "modes.m"
              }
#line 1452 "modes.m"
            else
#line 1452 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_31_31 = check_hlds__modes__STATE_VARIABLE_Specs_28_28;
#line 1463 "modes.m"
            /* direct tailcall eliminated */
#line 1463 "modes.m"
            {
#line 1463 "modes.m"
              MR_Word check_hlds__modes__HeadVar__3__tmp_copy_3 = check_hlds__modes__ProcIds_14;
#line 1463 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_4 = check_hlds__modes__STATE_VARIABLE_Specs_31_31;

#line 1463 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_0_4 = check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 1463 "modes.m"
              check_hlds__modes__HeadVar__3_3 = check_hlds__modes__HeadVar__3__tmp_copy_3;
#line 1463 "modes.m"
            }
#line 1463 "modes.m"
            continue;
#line 1430 "modes.m"
          }
#line 1429 "modes.m"
      }
#line 1429 "modes.m"
      break;
#line 1429 "modes.m"
    }
#line 1426 "modes.m"
}

#line 1415 "modes.m"
static void MR_CALL 
check_hlds__modes__pred_check_eval_methods_4_p_0(
#line 1415 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1415 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1415 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_3,
#line 1415 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_4)
#line 1415 "modes.m"
{
#line 1418 "modes.m"
  while (MR_TRUE)
#line 1418 "modes.m"
    {
#line 1418 "modes.m"
      /* tailcall optimized into a loop */
#line 1418 "modes.m"
      {
#line 1418 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 1418 "modes.m"
        if ((check_hlds__modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1418 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Specs_4 = check_hlds__modes__STATE_VARIABLE_Specs_0_3;
#line 1418 "modes.m"
        else
#line 1419 "modes.m"
          {
#line 1419 "modes.m"
            MR_Word check_hlds__modes__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1419 "modes.m"
            MR_Word check_hlds__modes__PredIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1419 "modes.m"
            MR_Word check_hlds__modes__Preds_13;
#line 1419 "modes.m"
            MR_Word check_hlds__modes__PredInfo_14;
#line 1419 "modes.m"
            MR_Word check_hlds__modes__ProcIds_15;
#line 1419 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_18_18;
#line 1421 "modes.m"
            MR_Box check_hlds__modes__conv0_PredInfo_14;

#line 1420 "modes.m"
            {
#line 1420 "modes.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__ModuleInfo_1, &check_hlds__modes__Preds_13);
            }
#line 1421 "modes.m"
            {
#line 1421 "modes.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__modes__Preds_13, ((MR_Box) (check_hlds__modes__PredId_10)), &check_hlds__modes__conv0_PredInfo_14);
            }
#line 1421 "modes.m"
            check_hlds__modes__PredInfo_14 = ((MR_Word) check_hlds__modes__conv0_PredInfo_14);
#line 1422 "modes.m"
            {
#line 1422 "modes.m"
              check_hlds__modes__ProcIds_15 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__modes__PredInfo_14);
            }
#line 1423 "modes.m"
            {
#line 1423 "modes.m"
              check_hlds__modes__proc_check_eval_methods_5_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__PredId_10, check_hlds__modes__ProcIds_15, check_hlds__modes__STATE_VARIABLE_Specs_0_3, &check_hlds__modes__STATE_VARIABLE_Specs_18_18);
            }
#line 1424 "modes.m"
            /* direct tailcall eliminated */
#line 1424 "modes.m"
            {
#line 1424 "modes.m"
              MR_Word check_hlds__modes__HeadVar__2__tmp_copy_2 = check_hlds__modes__PredIds_11;
#line 1424 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_3 = check_hlds__modes__STATE_VARIABLE_Specs_18_18;

#line 1424 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_0_3 = check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_3;
#line 1424 "modes.m"
              check_hlds__modes__HeadVar__2_2 = check_hlds__modes__HeadVar__2__tmp_copy_2;
#line 1424 "modes.m"
            }
#line 1424 "modes.m"
            continue;
#line 1419 "modes.m"
          }
#line 1418 "modes.m"
      }
#line 1418 "modes.m"
      break;
#line 1418 "modes.m"
    }
#line 1415 "modes.m"
}

#line 1320 "modes.m"
static void MR_CALL 
check_hlds__modes__check_final_insts_13_p_0(
#line 1320 "modes.m"
  MR_Word check_hlds__modes__Vars_14,
#line 1320 "modes.m"
  MR_Word check_hlds__modes__Insts_15,
#line 1320 "modes.m"
  MR_Word check_hlds__modes__VarInsts_16,
#line 1320 "modes.m"
  MR_Word check_hlds__modes__InferModes_17,
#line 1320 "modes.m"
  MR_Word check_hlds__modes__GroundMatchesBound_18,
#line 1320 "modes.m"
  MR_Integer check_hlds__modes__ArgNum_19,
#line 1320 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_20,
#line 1320 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Goal_0_35,
#line 1320 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Goal_36,
#line 1320 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_37,
#line 1320 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_38,
#line 1320 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39,
#line 1320 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_40)
#line 1320 "modes.m"
{
#line 1327 "modes.m"
  while (MR_TRUE)
#line 1327 "modes.m"
    {
#line 1327 "modes.m"
      /* tailcall optimized into a loop */
#line 1327 "modes.m"
      {
#line 1327 "modes.m"
        MR_bool check_hlds__modes__succeeded = (check_hlds__modes__Vars_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 1328 "modes.m"
        if (check_hlds__modes__succeeded)
#line 1328 "modes.m"
          {
#line 1329 "modes.m"
            check_hlds__modes__succeeded = (check_hlds__modes__Insts_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1328 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1330 "modes.m"
              check_hlds__modes__succeeded = (check_hlds__modes__VarInsts_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1328 "modes.m"
          }
#line 1327 "modes.m"
        if (check_hlds__modes__succeeded)
#line 1332 "modes.m"
          {
#line 1332 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_ModeInfo_40 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39;
#line 1332 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Changed_38 = check_hlds__modes__STATE_VARIABLE_Changed_0_37;
#line 1332 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Goal_36 = check_hlds__modes__STATE_VARIABLE_Goal_0_35;
#line 1332 "modes.m"
          }
#line 1327 "modes.m"
        else
#line 1333 "modes.m"
          {
#line 1333 "modes.m"
            MR_Word check_hlds__modes__Var_24;
#line 1333 "modes.m"
            MR_Word check_hlds__modes__VarsTail_25;
#line 1333 "modes.m"
            MR_Word check_hlds__modes__Inst_26;
#line 1333 "modes.m"
            MR_Word check_hlds__modes__InstsTail_27;
#line 1333 "modes.m"
            MR_Word check_hlds__modes__VarInst_28;
#line 1333 "modes.m"
            MR_Word check_hlds__modes__VarInstsTail_29;

#line 1334 "modes.m"
            check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Vars_14)) == (MR_mktag((MR_Integer) 1)));
#line 1334 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1334 "modes.m"
              {
#line 1334 "modes.m"
                check_hlds__modes__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Vars_14, (MR_Integer) 0)));
#line 1334 "modes.m"
                check_hlds__modes__VarsTail_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Vars_14, (MR_Integer) 1)));
#line 1335 "modes.m"
                check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Insts_15)) == (MR_mktag((MR_Integer) 1)));
#line 1335 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1335 "modes.m"
                  {
#line 1335 "modes.m"
                    check_hlds__modes__Inst_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Insts_15, (MR_Integer) 0)));
#line 1335 "modes.m"
                    check_hlds__modes__InstsTail_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Insts_15, (MR_Integer) 1)));
#line 1336 "modes.m"
                    check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__VarInsts_16)) == (MR_mktag((MR_Integer) 1)));
#line 1336 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1336 "modes.m"
                      {
#line 1336 "modes.m"
                        check_hlds__modes__VarInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__VarInsts_16, (MR_Integer) 0)));
#line 1336 "modes.m"
                        check_hlds__modes__VarInstsTail_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__VarInsts_16, (MR_Integer) 1)));
#line 1336 "modes.m"
                      }
#line 1335 "modes.m"
                  }
#line 1334 "modes.m"
              }
#line 1333 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1338 "modes.m"
              {
#line 1338 "modes.m"
                MR_Word check_hlds__modes__VarTypes_30;
#line 1338 "modes.m"
                MR_Word check_hlds__modes__Type_31;
#line 1338 "modes.m"
                MR_Word check_hlds__modes__STATE_VARIABLE_Changed_41_41;
#line 1338 "modes.m"
                MR_Word check_hlds__modes__STATE_VARIABLE_Goal_42_42;
#line 1338 "modes.m"
                MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43;
#line 1338 "modes.m"
                MR_Integer check_hlds__modes__V_45_45;

#line 1338 "modes.m"
                {
#line 1338 "modes.m"
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modes__VarTypes_30);
                }
#line 1339 "modes.m"
                {
#line 1339 "modes.m"
                  hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modes__VarTypes_30, check_hlds__modes__Var_24, &check_hlds__modes__Type_31);
                }
#line 1341 "modes.m"
                {
#line 1341 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__inst_match__inst_matches_final_gmb_5_p_0(check_hlds__modes__VarInst_28, check_hlds__modes__Inst_26, check_hlds__modes__Type_31, check_hlds__modes__ModuleInfo_20, check_hlds__modes__GroundMatchesBound_18);
                }
#line 1340 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1344 "modes.m"
                  {
#line 1344 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39;
#line 1344 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_Changed_41_41 = check_hlds__modes__STATE_VARIABLE_Changed_0_37;
#line 1344 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_Goal_42_42 = check_hlds__modes__STATE_VARIABLE_Goal_0_35;
#line 1344 "modes.m"
                  }
#line 1340 "modes.m"
                else
#line 1346 "modes.m"
                  {
#line 1346 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_Changed_41_41 = (MR_Integer) 1;
#line 1359 "modes.m"
                    {
#line 1359 "modes.m"
                      check_hlds__modes__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__modes__ModuleInfo_20, check_hlds__modes__VarInst_28);
                    }
#line 1359 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1359 "modes.m"
                      {
#line 1360 "modes.m"
                        {
#line 1360 "modes.m"
                          check_hlds__modes__succeeded = check_hlds__inst_test__inst_is_any_2_p_0(check_hlds__modes__ModuleInfo_20, check_hlds__modes__Inst_26);
                        }
#line 1359 "modes.m"
                        if (check_hlds__modes__succeeded)
#line 1359 "modes.m"
                          {
#line 1361 "modes.m"
                            {
#line 1361 "modes.m"
                              check_hlds__modes__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(check_hlds__modes__ModuleInfo_20, check_hlds__modes__Type_31);
                            }
#line 1359 "modes.m"
                            if (check_hlds__modes__succeeded)
#line 1362 "modes.m"
                              {
#line 1362 "modes.m"
                                check_hlds__modes__succeeded = check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39);
                              }
#line 1359 "modes.m"
                          }
#line 1359 "modes.m"
                      }
#line 1347 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1364 "modes.m"
                      {
#line 1364 "modes.m"
                        check_hlds__modecheck_util__prepend_initialisation_call_7_p_0(check_hlds__modes__Var_24, check_hlds__modes__Type_31, check_hlds__modes__VarInst_28, check_hlds__modes__STATE_VARIABLE_Goal_0_35, &check_hlds__modes__STATE_VARIABLE_Goal_42_42, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43);
                      }
#line 1347 "modes.m"
                    else
#line 1372 "modes.m"
                      {
#line 1372 "modes.m"
#line 1372 "modes.m"
                        switch (check_hlds__modes__InferModes_17) {
#line 1372 "modes.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 1372 "modes.m"
                          case (MR_Integer) 0:
#line 1373 "modes.m"
                            {
#line 1373 "modes.m"
                              MR_Word check_hlds__modes__Reason_32;
#line 1373 "modes.m"
                              MR_Word check_hlds__modes__WaitingVars_33;
#line 1373 "modes.m"
                              MR_Word check_hlds__modes__ModeError_34;

#line 1377 "modes.m"
                              {
#line 1377 "modes.m"
                                check_hlds__modes__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modes__VarInst_28, check_hlds__modes__Inst_26, check_hlds__modes__Type_31, check_hlds__modes__ModuleInfo_20);
                              }
#line 1376 "modes.m"
                              if (check_hlds__modes__succeeded)
#line 1379 "modes.m"
                                check_hlds__modes__Reason_32 = (MR_Integer) 0;
#line 1376 "modes.m"
                              else
#line 1380 "modes.m"
                                {
#line 1381 "modes.m"
                                  {
#line 1381 "modes.m"
                                    check_hlds__modes__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modes__Inst_26, check_hlds__modes__VarInst_28, check_hlds__modes__Type_31, check_hlds__modes__ModuleInfo_20);
                                  }
#line 1380 "modes.m"
                                  if (check_hlds__modes__succeeded)
#line 1383 "modes.m"
                                    check_hlds__modes__Reason_32 = (MR_Integer) 1;
#line 1380 "modes.m"
                                  else
#line 1386 "modes.m"
                                    check_hlds__modes__Reason_32 = (MR_Integer) 2;
#line 1380 "modes.m"
                                }
#line 1388 "modes.m"
                              {
#line 1388 "modes.m"
                                parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modes__WaitingVars_33);
                              }
#line 1389 "modes.m"
                              {
#line 1389 "modes.m"
                                check_hlds__modes__ModeError_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "modes.m"
                                MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 1389 "modes.m"
                                MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 1) = ((MR_Box) (check_hlds__modes__ArgNum_19));
#line 1389 "modes.m"
                                MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 2) = ((MR_Box) (check_hlds__modes__Var_24));
#line 1389 "modes.m"
                                MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 3) = ((MR_Box) (check_hlds__modes__VarInst_28));
#line 1389 "modes.m"
                                MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 4) = ((MR_Box) (check_hlds__modes__Inst_26));
#line 1389 "modes.m"
                                MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 5) = ((MR_Box) (check_hlds__modes__Reason_32));
#line 1389 "modes.m"
                              }
#line 1391 "modes.m"
                              {
#line 1391 "modes.m"
                                check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modes__WaitingVars_33, check_hlds__modes__ModeError_34, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43);
                              }
#line 1373 "modes.m"
                            }
#line 1372 "modes.m"
                            break;
#line 1372 "modes.m"
                          case (MR_Integer) 1:
#line 1371 "modes.m"
                            check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39;
#line 1372 "modes.m"
                            break;
#line 1372 "modes.m"
                        }
#line 1372 "modes.m"
                        check_hlds__modes__STATE_VARIABLE_Goal_42_42 = check_hlds__modes__STATE_VARIABLE_Goal_0_35;
#line 1372 "modes.m"
                      }
#line 1346 "modes.m"
                  }
#line 1396 "modes.m"
                check_hlds__modes__V_45_45 = (check_hlds__modes__ArgNum_19 + (MR_Integer) 1);
#line 1395 "modes.m"
                /* direct tailcall eliminated */
#line 1395 "modes.m"
                {
#line 1395 "modes.m"
                  MR_Word check_hlds__modes__Vars__tmp_copy_14 = check_hlds__modes__VarsTail_25;
#line 1395 "modes.m"
                  MR_Word check_hlds__modes__Insts__tmp_copy_15 = check_hlds__modes__InstsTail_27;
#line 1395 "modes.m"
                  MR_Word check_hlds__modes__VarInsts__tmp_copy_16 = check_hlds__modes__VarInstsTail_29;
#line 1395 "modes.m"
                  MR_Integer check_hlds__modes__ArgNum__tmp_copy_19 = check_hlds__modes__V_45_45;
#line 1395 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_Goal_0__tmp_copy_35 = check_hlds__modes__STATE_VARIABLE_Goal_42_42;
#line 1395 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_37 = check_hlds__modes__STATE_VARIABLE_Changed_41_41;
#line 1395 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0__tmp_copy_39 = check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43;

#line 1395 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0__tmp_copy_39;
#line 1395 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Changed_0_37 = check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_37;
#line 1395 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Goal_0_35 = check_hlds__modes__STATE_VARIABLE_Goal_0__tmp_copy_35;
#line 1395 "modes.m"
                  check_hlds__modes__ArgNum_19 = check_hlds__modes__ArgNum__tmp_copy_19;
#line 1395 "modes.m"
                  check_hlds__modes__VarInsts_16 = check_hlds__modes__VarInsts__tmp_copy_16;
#line 1395 "modes.m"
                  check_hlds__modes__Insts_15 = check_hlds__modes__Insts__tmp_copy_15;
#line 1395 "modes.m"
                  check_hlds__modes__Vars_14 = check_hlds__modes__Vars__tmp_copy_14;
#line 1395 "modes.m"
                }
#line 1395 "modes.m"
                continue;
#line 1338 "modes.m"
              }
#line 1333 "modes.m"
            else
#line 1399 "modes.m"
              {
#line 1399 "modes.m"
                {
#line 1399 "modes.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.check_final_insts\'/13", (MR_String) "length mismatch");
#line 1399 "modes.m"
                  return;
                }
#line 1399 "modes.m"
              }
#line 1333 "modes.m"
          }
#line 1327 "modes.m"
      }
#line 1327 "modes.m"
      break;
#line 1327 "modes.m"
    }
#line 1320 "modes.m"
}

#line 1302 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_clobber_insts_3_p_0(
#line 1302 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1302 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1302 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__3_3)
#line 1302 "modes.m"
{
#line 1305 "modes.m"
  {
#line 1305 "modes.m"
    MR_bool check_hlds__modes__succeeded;

#line 1305 "modes.m"
    if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1305 "modes.m"
      if ((check_hlds__modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1309 "modes.m"
        *check_hlds__modes__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1305 "modes.m"
      else
#line 1305 "modes.m"
        {
#line 1306 "modes.m"
          {
#line 1306 "modes.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.maybe_clobber_insts\'/3", (MR_String) "length mismatch");
#line 1306 "modes.m"
            return;
          }
#line 1305 "modes.m"
        }
#line 1305 "modes.m"
    else
#line 1305 "modes.m"
      {
#line 1305 "modes.m"
        MR_Word check_hlds__modes__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1305 "modes.m"
        MR_Word check_hlds__modes__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));

#line 1305 "modes.m"
        if ((check_hlds__modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1307 "modes.m"
          {
#line 1308 "modes.m"
            {
#line 1308 "modes.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.maybe_clobber_insts\'/3", (MR_String) "length mismatch");
#line 1308 "modes.m"
              return;
            }
#line 1307 "modes.m"
          }
#line 1305 "modes.m"
        else
#line 1310 "modes.m"
          {
#line 1310 "modes.m"
            MR_Word check_hlds__modes__IsLive_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1310 "modes.m"
            MR_Word check_hlds__modes__IsLives_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1310 "modes.m"
            MR_Word check_hlds__modes__Inst_20;
#line 1310 "modes.m"
            MR_Word check_hlds__modes__Insts_21;

#line 1314 "modes.m"
#line 1314 "modes.m"
            switch (check_hlds__modes__IsLive_18) {
#line 1314 "modes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1314 "modes.m"
              case (MR_Integer) 1:
#line 1312 "modes.m"
                {
#line 1313 "modes.m"
                  check_hlds__modes__Inst_20 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[2]);
#line 1312 "modes.m"
                }
#line 1314 "modes.m"
                break;
#line 1314 "modes.m"
              case (MR_Integer) 0:
#line 1315 "modes.m"
                check_hlds__modes__Inst_20 = check_hlds__modes__V_25_25;
#line 1314 "modes.m"
                break;
#line 1314 "modes.m"
            }
#line 1318 "modes.m"
            {
#line 1318 "modes.m"
              check_hlds__modes__maybe_clobber_insts_3_p_0(check_hlds__modes__V_24_24, check_hlds__modes__IsLives_19, &check_hlds__modes__Insts_21);
            }
#line 1310 "modes.m"
            {
#line 1310 "modes.m"
              MR_Word base;
#line 1310 "modes.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1310 "modes.m"
              *check_hlds__modes__HeadVar__3_3 = base;
#line 1310 "modes.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modes__Inst_20));
#line 1310 "modes.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modes__Insts_21));
#line 1310 "modes.m"
            }
#line 1310 "modes.m"
          }
#line 1305 "modes.m"
      }
#line 1305 "modes.m"
  }
#line 1302 "modes.m"
}

#line 1239 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_final_insts_8_p_0(
#line 1239 "modes.m"
  MR_Word check_hlds__modes__HeadVars_9,
#line 1239 "modes.m"
  MR_Word check_hlds__modes__InferModes_10,
#line 1239 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14,
#line 1239 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_FinalInsts_15,
#line 1239 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Body_0_16,
#line 1239 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Body_17,
#line 1239 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
#line 1239 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19)
#line 1239 "modes.m"
{
#line 1243 "modes.m"
  {
#line 1243 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1243 "modes.m"
    MR_Word check_hlds__modes__ModuleInfo_34;
#line 1243 "modes.m"
    MR_Word check_hlds__modes__Errors_35;
#line 1243 "modes.m"
    MR_Word check_hlds__modes__Changed0_38;
#line 1243 "modes.m"
    MR_Word check_hlds__modes__InstMap_39;
#line 1243 "modes.m"
    MR_Word check_hlds__modes__VarTypes_40;
#line 1243 "modes.m"
    MR_Word check_hlds__modes__VarFinalInsts1_41;
#line 1243 "modes.m"
    MR_Word check_hlds__modes__ArgTypes_42;

#line 1253 "modes.m"
    {
#line 1253 "modes.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__ModuleInfo_34);
    }
#line 1254 "modes.m"
    {
#line 1254 "modes.m"
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__Errors_35);
    }
#line 1268 "modes.m"
    if ((check_hlds__modes__Errors_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1269 "modes.m"
      {
#line 1270 "modes.m"
        check_hlds__modes__Changed0_38 = (MR_Integer) 0;
#line 1271 "modes.m"
        {
#line 1271 "modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__InstMap_39);
        }
#line 1269 "modes.m"
      }
#line 1268 "modes.m"
    else
#line 1262 "modes.m"
      {
#line 1266 "modes.m"
        check_hlds__modes__Changed0_38 = (MR_Integer) 1;
#line 1267 "modes.m"
        {
#line 1267 "modes.m"
          hlds__instmap__init_unreachable_1_p_0(&check_hlds__modes__InstMap_39);
        }
#line 1262 "modes.m"
      }
#line 1273 "modes.m"
    {
#line 1273 "modes.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__VarTypes_40);
    }
#line 1274 "modes.m"
    {
#line 1274 "modes.m"
      hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modes__InstMap_39, check_hlds__modes__HeadVars_9, &check_hlds__modes__VarFinalInsts1_41);
    }
#line 1275 "modes.m"
    {
#line 1275 "modes.m"
      hlds__vartypes__lookup_var_types_3_p_0(check_hlds__modes__VarTypes_40, check_hlds__modes__HeadVars_9, &check_hlds__modes__ArgTypes_42);
    }
#line 1294 "modes.m"
#line 1294 "modes.m"
    switch (check_hlds__modes__InferModes_10) {
#line 1294 "modes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1294 "modes.m"
      case (MR_Integer) 0:
#line 1295 "modes.m"
        {
#line 1296 "modes.m"
          MR_Word check_hlds__modes___Changed1_51;

#line 1296 "modes.m"
          {
#line 1296 "modes.m"
            check_hlds__modes__check_final_insts_13_p_0(check_hlds__modes__HeadVars_9, check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14, check_hlds__modes__VarFinalInsts1_41, check_hlds__modes__InferModes_10, (MR_Integer) 0, (MR_Integer) 1, check_hlds__modes__ModuleInfo_34, check_hlds__modes__STATE_VARIABLE_Body_0_16, check_hlds__modes__STATE_VARIABLE_Body_17, (MR_Integer) 0, &check_hlds__modes___Changed1_51, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, check_hlds__modes__STATE_VARIABLE_ModeInfo_19);
          }
#line 1299 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_FinalInsts_15 = check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14;
#line 1295 "modes.m"
        }
#line 1294 "modes.m"
        break;
#line 1294 "modes.m"
      case (MR_Integer) 1:
#line 1277 "modes.m"
        {
#line 1277 "modes.m"
          MR_Word check_hlds__modes__VarFinalInsts2_43;
#line 1277 "modes.m"
          MR_Word check_hlds__modes__PredId_44;
#line 1277 "modes.m"
          MR_Integer check_hlds__modes__ProcId_45;
#line 1277 "modes.m"
          MR_Word check_hlds__modes__ProcInfo_46;
#line 1277 "modes.m"
          MR_Word check_hlds__modes__ArgLives_47;
#line 1277 "modes.m"
          MR_Word check_hlds__modes__Changed1_48;
#line 1277 "modes.m"
          MR_Word check_hlds__modes__Changed2_49;
#line 1277 "modes.m"
          MR_Word check_hlds__modes__Changed_50;
#line 1277 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_43_57;
#line 1277 "modes.m"
          MR_Word check_hlds__modes__V_58_58;
#line 1277 "modes.m"
          MR_Word check_hlds__modes__V_59_59;
#line 1277 "modes.m"
          MR_Word check_hlds__modes__V_60_60;

#line 1278 "modes.m"
          {
#line 1278 "modes.m"
            check_hlds__mode_util__normalise_insts_4_p_0(check_hlds__modes__ModuleInfo_34, check_hlds__modes__ArgTypes_42, check_hlds__modes__VarFinalInsts1_41, &check_hlds__modes__VarFinalInsts2_43);
          }
#line 1283 "modes.m"
          {
#line 1283 "modes.m"
            check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__PredId_44);
          }
#line 1284 "modes.m"
          {
#line 1284 "modes.m"
            check_hlds__mode_info__mode_info_get_proc_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__ProcId_45);
          }
#line 1285 "modes.m"
          {
#line 1285 "modes.m"
            hlds__hlds_module__module_info_proc_info_4_p_0(check_hlds__modes__ModuleInfo_34, check_hlds__modes__PredId_44, check_hlds__modes__ProcId_45, &check_hlds__modes__ProcInfo_46);
          }
#line 1286 "modes.m"
          {
#line 1286 "modes.m"
            hlds__hlds_pred__proc_info_arglives_3_p_0(check_hlds__modes__ProcInfo_46, check_hlds__modes__ModuleInfo_34, &check_hlds__modes__ArgLives_47);
          }
#line 1287 "modes.m"
          {
#line 1287 "modes.m"
            check_hlds__modes__maybe_clobber_insts_3_p_0(check_hlds__modes__VarFinalInsts2_43, check_hlds__modes__ArgLives_47, check_hlds__modes__STATE_VARIABLE_FinalInsts_15);
          }
#line 1288 "modes.m"
          {
#line 1288 "modes.m"
            check_hlds__modes__check_final_insts_13_p_0(check_hlds__modes__HeadVars_9, check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14, *check_hlds__modes__STATE_VARIABLE_FinalInsts_15, check_hlds__modes__InferModes_10, (MR_Integer) 0, (MR_Integer) 1, check_hlds__modes__ModuleInfo_34, check_hlds__modes__STATE_VARIABLE_Body_0_16, check_hlds__modes__STATE_VARIABLE_Body_17, (MR_Integer) 0, &check_hlds__modes__Changed1_48, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__STATE_VARIABLE_ModeInfo_43_57);
          }
#line 1291 "modes.m"
          {
#line 1291 "modes.m"
            check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_43_57, &check_hlds__modes__Changed2_49);
          }
#line 1292 "modes.m"
          {
#line 1292 "modes.m"
            check_hlds__modes__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1292 "modes.m"
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_60_60, 0) = ((MR_Box) (check_hlds__modes__Changed2_49));
#line 1292 "modes.m"
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1292 "modes.m"
          }
#line 1292 "modes.m"
          {
#line 1292 "modes.m"
            check_hlds__modes__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1292 "modes.m"
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_59_59, 0) = ((MR_Box) (check_hlds__modes__Changed1_48));
#line 1292 "modes.m"
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_59_59, 1) = ((MR_Box) (check_hlds__modes__V_60_60));
#line 1292 "modes.m"
          }
#line 1292 "modes.m"
          {
#line 1292 "modes.m"
            check_hlds__modes__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1292 "modes.m"
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_58_58, 0) = ((MR_Box) (check_hlds__modes__Changed0_38));
#line 1292 "modes.m"
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_58_58, 1) = ((MR_Box) (check_hlds__modes__V_59_59));
#line 1292 "modes.m"
          }
#line 1292 "modes.m"
          {
#line 1292 "modes.m"
            mercury__bool__or_list_2_p_0(check_hlds__modes__V_58_58, &check_hlds__modes__Changed_50);
          }
#line 1293 "modes.m"
          {
#line 1293 "modes.m"
            check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(check_hlds__modes__Changed_50, check_hlds__modes__STATE_VARIABLE_ModeInfo_43_57, check_hlds__modes__STATE_VARIABLE_ModeInfo_19);
          }
#line 1277 "modes.m"
        }
#line 1294 "modes.m"
        break;
#line 1294 "modes.m"
    }
#line 1243 "modes.m"
  }
#line 1239 "modes.m"
}

#line 1194 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_switch_9_p_0(
#line 1194 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1194 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1194 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1194 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1194 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1194 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1194 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1194 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1194 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28)
#line 1194 "modes.m"
{
#line 1199 "modes.m"
  {
#line 1199 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1199 "modes.m"
    MR_Word check_hlds__modes__MainConsId_18;
#line 1199 "modes.m"
    MR_Word check_hlds__modes__OtherConsIds_19;
#line 1199 "modes.m"
    MR_Word check_hlds__modes__Goal0_20;
#line 1199 "modes.m"
    MR_Word check_hlds__modes__InstMap1_21;
#line 1199 "modes.m"
    MR_Word check_hlds__modes__Goal1_22;
#line 1199 "modes.m"
    MR_Word check_hlds__modes__InstMap_23;
#line 1199 "modes.m"
    MR_Word check_hlds__modes__Goal2_24;
#line 1199 "modes.m"
    MR_Word check_hlds__modes__Goal_26;
#line 1199 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30;
#line 1199 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31;
#line 1199 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1199 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33;
#line 1199 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35;
#line 1222 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_25;

#line 1200 "modes.m"
    {
#line 1200 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27, &check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30);
    }
#line 1201 "modes.m"
    check_hlds__modes__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 0)));
#line 1201 "modes.m"
    check_hlds__modes__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 1)));
#line 1201 "modes.m"
    check_hlds__modes__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 2)));
#line 1202 "modes.m"
    {
#line 1202 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31);
    }
#line 1204 "modes.m"
    {
#line 1204 "modes.m"
      check_hlds__modecheck_util__modecheck_functors_test_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__MainConsId_18, check_hlds__modes__OtherConsIds_19, check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32);
    }
#line 1206 "modes.m"
    {
#line 1206 "modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__InstMap1_21);
    }
#line 1207 "modes.m"
    {
#line 1207 "modes.m"
      check_hlds__modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modes__InstMap1_21);
    }
#line 1207 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1208 "modes.m"
      {
#line 1208 "modes.m"
        check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modes__Goal0_20, &check_hlds__modes__Goal1_22, check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33);
      }
#line 1207 "modes.m"
    else
#line 1213 "modes.m"
      {
#line 1213 "modes.m"
        {
#line 1213 "modes.m"
          check_hlds__modes__Goal1_22 = hlds__make_goal__true_goal_0_f_0();
        }
#line 1213 "modes.m"
        check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33 = check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1213 "modes.m"
      }
#line 1217 "modes.m"
    {
#line 1217 "modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__InstMap_23);
    }
#line 1218 "modes.m"
    {
#line 1218 "modes.m"
      check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__InstMap0_12, check_hlds__modes__InstMap_23, check_hlds__modes__Goal1_22, &check_hlds__modes__Goal2_24);
    }
#line 1219 "modes.m"
    {
#line 1219 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35);
    }
#line 1222 "modes.m"
    {
#line 1222 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_11, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_13, &check_hlds__modes___ArgFinalInsts_25, check_hlds__modes__Goal2_24, &check_hlds__modes__Goal_26, check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35, check_hlds__modes__STATE_VARIABLE_ModeInfo_28);
    }
#line 1224 "modes.m"
    {
#line 1224 "modes.m"
      MR_Word base;
#line 1224 "modes.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1224 "modes.m"
      *check_hlds__modes__Case_16 = base;
#line 1224 "modes.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__MainConsId_18));
#line 1224 "modes.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__OtherConsIds_19));
#line 1224 "modes.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modes__Goal_26));
#line 1224 "modes.m"
    }
#line 1199 "modes.m"
  }
#line 1194 "modes.m"
}

#line 1174 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_disj_11_p_0(
#line 1174 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_12,
#line 1174 "modes.m"
  MR_Word check_hlds__modes__HeadVars_13,
#line 1174 "modes.m"
  MR_Word check_hlds__modes__InstMap0_14,
#line 1174 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_15,
#line 1174 "modes.m"
  MR_Word check_hlds__modes__DisjDetism_16,
#line 1174 "modes.m"
  MR_Word check_hlds__modes__DisjNonLocals_17,
#line 1174 "modes.m"
  MR_Word check_hlds__modes__NondetLiveVars0_18,
#line 1174 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_19,
#line 1174 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_20,
#line 1174 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_24,
#line 1174 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_25)
#line 1174 "modes.m"
{
#line 1181 "modes.m"
  {
#line 1181 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1181 "modes.m"
    MR_Word check_hlds__modes__Disjunct1_22;
#line 1181 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_27_27;
#line 1181 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_28_28;
#line 1181 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_29_29;
#line 1181 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30;
#line 1181 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31;
#line 1181 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33;
#line 1191 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_23;

#line 1182 "modes.m"
    {
#line 1182 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_24, &check_hlds__modes__STATE_VARIABLE_ModeInfo_27_27);
    }
#line 1183 "modes.m"
    {
#line 1183 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_14, check_hlds__modes__STATE_VARIABLE_ModeInfo_27_27, &check_hlds__modes__STATE_VARIABLE_ModeInfo_28_28);
    }
#line 1184 "modes.m"
    {
#line 1184 "modes.m"
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__modes__NondetLiveVars0_18, check_hlds__modes__STATE_VARIABLE_ModeInfo_28_28, &check_hlds__modes__STATE_VARIABLE_ModeInfo_29_29);
    }
#line 1185 "modes.m"
    {
#line 1185 "modes.m"
      check_hlds__unique_modes__prepare_for_disjunct_5_p_0(check_hlds__modes__Disjunct0_19, check_hlds__modes__DisjDetism_16, check_hlds__modes__DisjNonLocals_17, check_hlds__modes__STATE_VARIABLE_ModeInfo_29_29, &check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30);
    }
#line 1187 "modes.m"
    {
#line 1187 "modes.m"
      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modes__Disjunct0_19, &check_hlds__modes__Disjunct1_22, check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31);
    }
#line 1188 "modes.m"
    {
#line 1188 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33);
    }
#line 1191 "modes.m"
    {
#line 1191 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_13, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_15, &check_hlds__modes___ArgFinalInsts_23, check_hlds__modes__Disjunct1_22, check_hlds__modes__Disjunct_20, check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, check_hlds__modes__STATE_VARIABLE_ModeInfo_25);
    }
#line 1181 "modes.m"
  }
#line 1174 "modes.m"
}

#line 1140 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_switch_9_p_0(
#line 1140 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1140 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1140 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1140 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1140 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1140 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1140 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1140 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1140 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28)
#line 1140 "modes.m"
{
#line 1145 "modes.m"
  {
#line 1145 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1145 "modes.m"
    MR_Word check_hlds__modes__MainConsId_18;
#line 1145 "modes.m"
    MR_Word check_hlds__modes__OtherConsIds_19;
#line 1145 "modes.m"
    MR_Word check_hlds__modes__Goal0_20;
#line 1145 "modes.m"
    MR_Word check_hlds__modes__InstMap1_21;
#line 1145 "modes.m"
    MR_Word check_hlds__modes__Goal1_22;
#line 1145 "modes.m"
    MR_Word check_hlds__modes__InstMap_23;
#line 1145 "modes.m"
    MR_Word check_hlds__modes__Goal2_24;
#line 1145 "modes.m"
    MR_Word check_hlds__modes__Goal_26;
#line 1145 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30;
#line 1145 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31;
#line 1145 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1145 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33;
#line 1145 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35;
#line 1170 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_25;

#line 1146 "modes.m"
    {
#line 1146 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27, &check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30);
    }
#line 1147 "modes.m"
    check_hlds__modes__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 0)));
#line 1147 "modes.m"
    check_hlds__modes__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 1)));
#line 1147 "modes.m"
    check_hlds__modes__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 2)));
#line 1148 "modes.m"
    {
#line 1148 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31);
    }
#line 1150 "modes.m"
    {
#line 1150 "modes.m"
      check_hlds__modecheck_util__modecheck_functors_test_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__MainConsId_18, check_hlds__modes__OtherConsIds_19, check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32);
    }
#line 1153 "modes.m"
    {
#line 1153 "modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__InstMap1_21);
    }
#line 1154 "modes.m"
    {
#line 1154 "modes.m"
      check_hlds__modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modes__InstMap1_21);
    }
#line 1154 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1155 "modes.m"
      {
#line 1155 "modes.m"
        {
#line 1155 "modes.m"
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modes__Goal0_20, &check_hlds__modes__Goal1_22, check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33);
        }
#line 1156 "modes.m"
        {
#line 1156 "modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__InstMap_23);
        }
#line 1155 "modes.m"
      }
#line 1154 "modes.m"
    else
#line 1161 "modes.m"
      {
#line 1161 "modes.m"
        {
#line 1161 "modes.m"
          check_hlds__modes__Goal1_22 = hlds__make_goal__true_goal_0_f_0();
        }
#line 1162 "modes.m"
        check_hlds__modes__InstMap_23 = check_hlds__modes__InstMap1_21;
#line 1161 "modes.m"
        check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33 = check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1161 "modes.m"
      }
#line 1166 "modes.m"
    {
#line 1166 "modes.m"
      check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__InstMap0_12, check_hlds__modes__InstMap_23, check_hlds__modes__Goal1_22, &check_hlds__modes__Goal2_24);
    }
#line 1167 "modes.m"
    {
#line 1167 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35);
    }
#line 1170 "modes.m"
    {
#line 1170 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_11, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_13, &check_hlds__modes___ArgFinalInsts_25, check_hlds__modes__Goal2_24, &check_hlds__modes__Goal_26, check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35, check_hlds__modes__STATE_VARIABLE_ModeInfo_28);
    }
#line 1172 "modes.m"
    {
#line 1172 "modes.m"
      MR_Word base;
#line 1172 "modes.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1172 "modes.m"
      *check_hlds__modes__Case_16 = base;
#line 1172 "modes.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__MainConsId_18));
#line 1172 "modes.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__OtherConsIds_19));
#line 1172 "modes.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modes__Goal_26));
#line 1172 "modes.m"
    }
#line 1145 "modes.m"
  }
#line 1140 "modes.m"
}

#line 1125 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_disj_8_p_0(
#line 1125 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_9,
#line 1125 "modes.m"
  MR_Word check_hlds__modes__HeadVars_10,
#line 1125 "modes.m"
  MR_Word check_hlds__modes__InstMap0_11,
#line 1125 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_12,
#line 1125 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_13,
#line 1125 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_14,
#line 1125 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
#line 1125 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19)
#line 1125 "modes.m"
{
#line 1130 "modes.m"
  {
#line 1130 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1130 "modes.m"
    MR_Word check_hlds__modes__Disjunct1_16;
#line 1130 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_21_21;
#line 1130 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_22_22;
#line 1130 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_23_23;
#line 1130 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_25_25;
#line 1137 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_17;

#line 1131 "modes.m"
    {
#line 1131 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_9, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__STATE_VARIABLE_ModeInfo_21_21);
    }
#line 1132 "modes.m"
    {
#line 1132 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_11, check_hlds__modes__STATE_VARIABLE_ModeInfo_21_21, &check_hlds__modes__STATE_VARIABLE_ModeInfo_22_22);
    }
#line 1133 "modes.m"
    {
#line 1133 "modes.m"
      check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modes__Disjunct0_13, &check_hlds__modes__Disjunct1_16, check_hlds__modes__STATE_VARIABLE_ModeInfo_22_22, &check_hlds__modes__STATE_VARIABLE_ModeInfo_23_23);
    }
#line 1134 "modes.m"
    {
#line 1134 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_9, check_hlds__modes__STATE_VARIABLE_ModeInfo_23_23, &check_hlds__modes__STATE_VARIABLE_ModeInfo_25_25);
    }
#line 1137 "modes.m"
    {
#line 1137 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_10, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_12, &check_hlds__modes___ArgFinalInsts_17, check_hlds__modes__Disjunct1_16, check_hlds__modes__Disjunct_14, check_hlds__modes__STATE_VARIABLE_ModeInfo_25_25, check_hlds__modes__STATE_VARIABLE_ModeInfo_19);
    }
#line 1130 "modes.m"
  }
#line 1125 "modes.m"
}

#line 1091 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0_1(
#line 1091 "modes.m"
  MR_Box check_hlds__modes__closure_arg)
#line 1091 "modes.m"
{
#line 1091 "modes.m"
  {
#line 1091 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1091 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;

#line 1091 "modes.m"
    {
#line 1091 "modes.m"
      check_hlds__modes__succeeded = check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1091__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))));
    }
#line 1091 "modes.m"
    return check_hlds__modes__succeeded;
#line 1091 "modes.m"
  }
#line 1091 "modes.m"
}

#line 979 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0(
#line 979 "modes.m"
  MR_Word check_hlds__modes__HowToCheckGoal_8,
#line 979 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26,
#line 979 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_OldPredTable_27,
#line 979 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28,
#line 979 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_29,
#line 979 "modes.m"
  MR_Word * check_hlds__modes__Changed_11,
#line 979 "modes.m"
  MR_Word * check_hlds__modes__Specs_12)
#line 979 "modes.m"
{
#line 984 "modes.m"
  {
#line 984 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 984 "modes.m"
    MR_Word check_hlds__modes__Requests0_13;
#line 984 "modes.m"
    MR_Word check_hlds__modes__RequestQueue0_14;
#line 987 "modes.m"
    MR_Word check_hlds__modes__PredProcId_15;
#line 987 "modes.m"
    MR_Word check_hlds__modes__RequestQueue1_16;
#line 987 "modes.m"
    MR_Box check_hlds__modes__conv0_PredProcId_15;

#line 985 "modes.m"
    {
#line 985 "modes.m"
      hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28, &check_hlds__modes__Requests0_13);
    }
#line 986 "modes.m"
    {
#line 986 "modes.m"
      check_hlds__unify_proc__get_req_queue_2_p_0(check_hlds__modes__Requests0_13, &check_hlds__modes__RequestQueue0_14);
    }
#line 987 "modes.m"
    {
#line 987 "modes.m"
      check_hlds__modes__succeeded = mercury__queue__get_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, &check_hlds__modes__conv0_PredProcId_15, check_hlds__modes__RequestQueue0_14, &check_hlds__modes__RequestQueue1_16);
    }
#line 987 "modes.m"
    if (check_hlds__modes__succeeded)
#line 987 "modes.m"
      {
#line 987 "modes.m"
        check_hlds__modes__PredProcId_15 = ((MR_Word) check_hlds__modes__conv0_PredProcId_15);
#line 987 "modes.m"
        check_hlds__modes__succeeded = MR_TRUE;
#line 987 "modes.m"
      }
#line 987 "modes.m"
    if (check_hlds__modes__succeeded)
#line 988 "modes.m"
      {
#line 988 "modes.m"
        MR_Word check_hlds__modes__Requests1_17;
#line 988 "modes.m"
        MR_Word check_hlds__modes__PredId_18;
#line 988 "modes.m"
        MR_Word check_hlds__modes__ValidPredIds_20;
#line 988 "modes.m"
        MR_Word check_hlds__modes__HeadChanged_22;
#line 988 "modes.m"
        MR_Word check_hlds__modes__HeadSpecs_23;
#line 988 "modes.m"
        MR_Word check_hlds__modes__TailChanged_24;
#line 988 "modes.m"
        MR_Word check_hlds__modes__TailSpecs_25;
#line 988 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30;
#line 988 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33;
#line 988 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34;
#line 997 "modes.m"
        MR_Integer check_hlds__modes___ProcId_19;

#line 988 "modes.m"
        {
#line 988 "modes.m"
          check_hlds__unify_proc__set_req_queue_3_p_0(check_hlds__modes__RequestQueue1_16, check_hlds__modes__Requests0_13, &check_hlds__modes__Requests1_17);
        }
#line 989 "modes.m"
        {
#line 989 "modes.m"
          hlds__hlds_module__module_info_set_proc_requests_3_p_0(check_hlds__modes__Requests1_17, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30);
        }
#line 997 "modes.m"
        check_hlds__modes__PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 0)));
#line 997 "modes.m"
        check_hlds__modes___ProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 1)));
#line 998 "modes.m"
        {
#line 998 "modes.m"
          hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__modes__ValidPredIds_20);
        }
#line 999 "modes.m"
        {
#line 999 "modes.m"
          check_hlds__modes__succeeded = mercury__set_tree234__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (check_hlds__modes__PredId_18)), check_hlds__modes__ValidPredIds_20);
        }
#line 999 "modes.m"
        if (check_hlds__modes__succeeded)
#line 1003 "modes.m"
          {
#line 1003 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_61_110;
#line 1003 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_62_111;
#line 1003 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_64_113;
#line 1003 "modes.m"
            MR_Word check_hlds__modes__PredId_69;
#line 1003 "modes.m"
            MR_Integer check_hlds__modes__ProcId_70;
#line 1003 "modes.m"
            MR_Word check_hlds__modes__Preds0_71;
#line 1003 "modes.m"
            MR_Word check_hlds__modes__PredInfo0_72;
#line 1003 "modes.m"
            MR_Word check_hlds__modes__Procs0_73;
#line 1003 "modes.m"
            MR_Word check_hlds__modes__ProcInfo0_74;
#line 1003 "modes.m"
            MR_Word check_hlds__modes__ProcInfo1_75;
#line 1003 "modes.m"
            MR_Word check_hlds__modes__Procs1_76;
#line 1003 "modes.m"
            MR_Word check_hlds__modes__PredInfo1_77;
#line 1003 "modes.m"
            MR_Word check_hlds__modes__Preds1_78;
#line 1003 "modes.m"
            MR_Word check_hlds__modes__ModeSpecs_79;
#line 1003 "modes.m"
            MR_Word check_hlds__modes__Globals_80;
#line 1003 "modes.m"
            MR_Word check_hlds__modes__ModeErrors_81;
#line 1003 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_46_95;
#line 1003 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96;
#line 1003 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Changed_48_97;
#line 1000 "modes.m"
            MR_Word check_hlds__modes__Globals_46;
#line 1000 "modes.m"
            MR_Word check_hlds__modes__VeryVerbose_47;
#line 1050 "modes.m"
            MR_Box check_hlds__modes__conv1_PredInfo0_72;
#line 1052 "modes.m"
            MR_Box check_hlds__modes__conv2_ProcInfo0_74;

#line 1023 "modes.m"
            {
#line 1023 "modes.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__modes__Globals_46);
            }
#line 1024 "modes.m"
            {
#line 1024 "modes.m"
              libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_46, (MR_Integer) 47, &check_hlds__modes__VeryVerbose_47);
            }
#line 1037 "modes.m"
#line 1037 "modes.m"
            switch (check_hlds__modes__VeryVerbose_47) {
#line 1037 "modes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1037 "modes.m"
              case (MR_Integer) 0:
#line 1038 "modes.m"
                {
#line 1038 "modes.m"
                }
#line 1037 "modes.m"
                break;
#line 1037 "modes.m"
              case (MR_Integer) 1:
#line 1026 "modes.m"
                {
#line 1030 "modes.m"
#line 1030 "modes.m"
                  switch (check_hlds__modes__HowToCheckGoal_8) {
#line 1030 "modes.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1030 "modes.m"
                    case (MR_Integer) 0:
#line 1028 "modes.m"
                      {
#line 1029 "modes.m"
                        {
#line 1029 "modes.m"
                          mercury__io__write_string_3_p_0((MR_String) "% Mode-analyzing ");
                        }
#line 1028 "modes.m"
                      }
#line 1030 "modes.m"
                      break;
#line 1030 "modes.m"
                    case (MR_Integer) 1:
#line 1031 "modes.m"
                      {
#line 1032 "modes.m"
                        {
#line 1032 "modes.m"
                          mercury__io__write_string_3_p_0((MR_String) "% Analyzing modes, determinism, and unique-modes for\n% ");
                        }
#line 1031 "modes.m"
                      }
#line 1030 "modes.m"
                      break;
#line 1030 "modes.m"
                  }
#line 1035 "modes.m"
                  {
#line 1035 "modes.m"
                    hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30, check_hlds__modes__PredProcId_15);
                  }
#line 1036 "modes.m"
                  {
#line 1036 "modes.m"
                    mercury__io__write_string_3_p_0((MR_String) "\n");
                  }
#line 1026 "modes.m"
                }
#line 1037 "modes.m"
                break;
#line 1037 "modes.m"
            }
#line 1047 "modes.m"
            check_hlds__modes__PredId_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 0)));
#line 1047 "modes.m"
            check_hlds__modes__ProcId_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 1)));
#line 1049 "modes.m"
            {
#line 1049 "modes.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__modes__Preds0_71);
            }
#line 4258 "check_hlds.modes.c"
            check_hlds__modes__TypeCtorInfo_61_110 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 4260 "check_hlds.modes.c"
            check_hlds__modes__TypeCtorInfo_62_111 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 1050 "modes.m"
            {
#line 1050 "modes.m"
              mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_61_110, check_hlds__modes__TypeCtorInfo_62_111, check_hlds__modes__Preds0_71, ((MR_Box) (check_hlds__modes__PredId_69)), &check_hlds__modes__conv1_PredInfo0_72);
            }
#line 1050 "modes.m"
            check_hlds__modes__PredInfo0_72 = ((MR_Word) check_hlds__modes__conv1_PredInfo0_72);
#line 1051 "modes.m"
            {
#line 1051 "modes.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__PredInfo0_72, &check_hlds__modes__Procs0_73);
            }
#line 4274 "check_hlds.modes.c"
            check_hlds__modes__TypeCtorInfo_64_113 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 1052 "modes.m"
            {
#line 1052 "modes.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__modes__TypeCtorInfo_64_113, check_hlds__modes__Procs0_73, check_hlds__modes__ProcId_70, &check_hlds__modes__conv2_ProcInfo0_74);
            }
#line 1052 "modes.m"
            check_hlds__modes__ProcInfo0_74 = ((MR_Word) check_hlds__modes__conv2_ProcInfo0_74);
#line 1055 "modes.m"
            {
#line 1055 "modes.m"
              hlds__hlds_pred__proc_info_set_can_process_3_p_0((MR_Integer) 1, check_hlds__modes__ProcInfo0_74, &check_hlds__modes__ProcInfo1_75);
            }
#line 1057 "modes.m"
            {
#line 1057 "modes.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__modes__TypeCtorInfo_64_113, check_hlds__modes__ProcId_70, ((MR_Box) (check_hlds__modes__ProcInfo1_75)), check_hlds__modes__Procs0_73, &check_hlds__modes__Procs1_76);
            }
#line 1058 "modes.m"
            {
#line 1058 "modes.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__modes__Procs1_76, check_hlds__modes__PredInfo0_72, &check_hlds__modes__PredInfo1_77);
            }
#line 1059 "modes.m"
            {
#line 1059 "modes.m"
              mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_61_110, check_hlds__modes__TypeCtorInfo_62_111, ((MR_Box) (check_hlds__modes__PredId_69)), ((MR_Box) (check_hlds__modes__PredInfo1_77)), check_hlds__modes__Preds0_71, &check_hlds__modes__Preds1_78);
            }
#line 1060 "modes.m"
            {
#line 1060 "modes.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__Preds1_78, check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_46_95);
            }
#line 620 "modes.m"
            {
#line 620 "modes.m"
              check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_70, check_hlds__modes__PredId_69, (MR_Integer) 0, (MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ModuleInfo_46_95, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96, (MR_Integer) 0, &check_hlds__modes__STATE_VARIABLE_Changed_48_97, &check_hlds__modes__ModeSpecs_79);
            }
#line 1065 "modes.m"
            {
#line 1065 "modes.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96, &check_hlds__modes__Globals_80);
            }
#line 1066 "modes.m"
            {
#line 1066 "modes.m"
              check_hlds__modes__ModeErrors_81 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__modes__Globals_80, check_hlds__modes__ModeSpecs_79);
            }
#line 1071 "modes.m"
#line 1071 "modes.m"
            switch (check_hlds__modes__ModeErrors_81) {
#line 1071 "modes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1071 "modes.m"
              case (MR_Integer) 0:
#line 1098 "modes.m"
#line 1098 "modes.m"
                switch (check_hlds__modes__HowToCheckGoal_8) {
#line 1098 "modes.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1098 "modes.m"
                  case (MR_Integer) 0:
#line 1099 "modes.m"
                    {
#line 1100 "modes.m"
                      check_hlds__modes__HeadSpecs_23 = check_hlds__modes__ModeSpecs_79;
#line 1099 "modes.m"
                      check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 1099 "modes.m"
                      check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96;
#line 1099 "modes.m"
                      check_hlds__modes__HeadChanged_22 = check_hlds__modes__STATE_VARIABLE_Changed_48_97;
#line 1099 "modes.m"
                    }
#line 1098 "modes.m"
                    break;
#line 1098 "modes.m"
                  case (MR_Integer) 1:
#line 1074 "modes.m"
                    {
#line 1074 "modes.m"
                      MR_Word check_hlds__modes__TypeCtorInfo_19_150;
#line 1074 "modes.m"
                      MR_Word check_hlds__modes__TypeCtorInfo_20_151;
#line 1074 "modes.m"
                      MR_Word check_hlds__modes__Preds2_82;
#line 1074 "modes.m"
                      MR_Word check_hlds__modes__PredInfo2_83;
#line 1074 "modes.m"
                      MR_Word check_hlds__modes__Procs2_84;
#line 1074 "modes.m"
                      MR_Word check_hlds__modes__ProcInfo2_85;
#line 1074 "modes.m"
                      MR_Word check_hlds__modes__SwitchDetectInfo_86;
#line 1074 "modes.m"
                      MR_Word check_hlds__modes__ProcInfo3_87;
#line 1074 "modes.m"
                      MR_Word check_hlds__modes__Procs3_88;
#line 1074 "modes.m"
                      MR_Word check_hlds__modes__PredInfo3_89;
#line 1074 "modes.m"
                      MR_Word check_hlds__modes__Preds3_90;
#line 1074 "modes.m"
                      MR_Word check_hlds__modes__DetismSpecs_91;
#line 1074 "modes.m"
                      MR_Word check_hlds__modes__NewChanged_92;
#line 1074 "modes.m"
                      MR_Word check_hlds__modes__UniqueSpecs_93;
#line 1074 "modes.m"
                      MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_49_98;
#line 1074 "modes.m"
                      MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_50_99;
#line 1074 "modes.m"
                      MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_100;
#line 1074 "modes.m"
                      MR_Word check_hlds__modes__V_101_101;
#line 1074 "modes.m"
                      MR_Word check_hlds__modes__ProcInfo_144;
#line 1074 "modes.m"
                      MR_Word check_hlds__modes__OldPredInfo0_145;
#line 1074 "modes.m"
                      MR_Word check_hlds__modes__OldProcTable0_146;
#line 1074 "modes.m"
                      MR_Word check_hlds__modes__OldProcTable_147;
#line 1074 "modes.m"
                      MR_Word check_hlds__modes__OldPredInfo_148;
#line 1077 "modes.m"
                      MR_Box check_hlds__modes__conv3_PredInfo2_83;
#line 1079 "modes.m"
                      MR_Box check_hlds__modes__conv4_ProcInfo2_85;
#line 1111 "modes.m"
                      MR_Word check_hlds__modes___PredInfo_143;
#line 1113 "modes.m"
                      MR_Box check_hlds__modes__conv5_OldPredInfo0_145;

#line 1076 "modes.m"
                      {
#line 1076 "modes.m"
                        hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96, &check_hlds__modes__Preds2_82);
                      }
#line 1077 "modes.m"
                      {
#line 1077 "modes.m"
                        mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_61_110, check_hlds__modes__TypeCtorInfo_62_111, check_hlds__modes__Preds2_82, ((MR_Box) (check_hlds__modes__PredId_69)), &check_hlds__modes__conv3_PredInfo2_83);
                      }
#line 1077 "modes.m"
                      check_hlds__modes__PredInfo2_83 = ((MR_Word) check_hlds__modes__conv3_PredInfo2_83);
#line 1078 "modes.m"
                      {
#line 1078 "modes.m"
                        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__PredInfo2_83, &check_hlds__modes__Procs2_84);
                      }
#line 1079 "modes.m"
                      {
#line 1079 "modes.m"
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__modes__TypeCtorInfo_64_113, check_hlds__modes__Procs2_84, check_hlds__modes__ProcId_70, &check_hlds__modes__conv4_ProcInfo2_85);
                      }
#line 1079 "modes.m"
                      check_hlds__modes__ProcInfo2_85 = ((MR_Word) check_hlds__modes__conv4_ProcInfo2_85);
#line 1081 "modes.m"
                      {
#line 1081 "modes.m"
                        check_hlds__modes__SwitchDetectInfo_86 = check_hlds__switch_detection__init_switch_detect_info_1_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96);
                      }
#line 1082 "modes.m"
                      {
#line 1082 "modes.m"
                        check_hlds__switch_detection__detect_switches_in_proc_3_p_0(check_hlds__modes__SwitchDetectInfo_86, check_hlds__modes__ProcInfo2_85, &check_hlds__modes__ProcInfo3_87);
                      }
#line 1084 "modes.m"
                      {
#line 1084 "modes.m"
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__modes__TypeCtorInfo_64_113, check_hlds__modes__ProcId_70, ((MR_Box) (check_hlds__modes__ProcInfo3_87)), check_hlds__modes__Procs2_84, &check_hlds__modes__Procs3_88);
                      }
#line 1085 "modes.m"
                      {
#line 1085 "modes.m"
                        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__modes__Procs3_88, check_hlds__modes__PredInfo2_83, &check_hlds__modes__PredInfo3_89);
                      }
#line 1086 "modes.m"
                      {
#line 1086 "modes.m"
                        mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_61_110, check_hlds__modes__TypeCtorInfo_62_111, ((MR_Box) (check_hlds__modes__PredId_69)), ((MR_Box) (check_hlds__modes__PredInfo3_89)), check_hlds__modes__Preds2_82, &check_hlds__modes__Preds3_90);
                      }
#line 1087 "modes.m"
                      {
#line 1087 "modes.m"
                        hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__Preds3_90, check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_49_98);
                      }
#line 1089 "modes.m"
                      {
#line 1089 "modes.m"
                        check_hlds__cse_detection__detect_cse_in_proc_4_p_0(check_hlds__modes__PredId_69, check_hlds__modes__ProcId_70, check_hlds__modes__STATE_VARIABLE_ModuleInfo_49_98, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_50_99);
                      }
#line 1090 "modes.m"
                      {
#line 1090 "modes.m"
                        check_hlds__det_analysis__determinism_check_proc_5_p_0(check_hlds__modes__ProcId_70, check_hlds__modes__PredId_69, check_hlds__modes__STATE_VARIABLE_ModuleInfo_50_99, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_100, &check_hlds__modes__DetismSpecs_91);
                      }
#line 1091 "modes.m"
                      {
#line 1091 "modes.m"
                        check_hlds__modes__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1091 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_101_101, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_9[0]));
#line 1091 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_101_101, 1) = ((MR_Box) (check_hlds__modes__modecheck_queued_procs_7_p_0_1));
#line 1091 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_101_101, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1091 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_101_101, 3) = ((MR_Box) (check_hlds__modes__DetismSpecs_91));
#line 1091 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_101_101, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1091 "modes.m"
                      }
#line 1091 "modes.m"
                      {
#line 1091 "modes.m"
                        mercury__require__expect_4_p_0(check_hlds__modes__V_101_101, (MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.modecheck_queued_proc\'/8", (MR_String) "found detism error");
                      }
#line 1111 "modes.m"
                      {
#line 1111 "modes.m"
                        hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_100, check_hlds__modes__PredId_69, check_hlds__modes__ProcId_70, &check_hlds__modes___PredInfo_143, &check_hlds__modes__ProcInfo_144);
                      }
#line 4500 "check_hlds.modes.c"
                      check_hlds__modes__TypeCtorInfo_19_150 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 4502 "check_hlds.modes.c"
                      check_hlds__modes__TypeCtorInfo_20_151 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 1113 "modes.m"
                      {
#line 1113 "modes.m"
                        mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_19_150, check_hlds__modes__TypeCtorInfo_20_151, check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26, ((MR_Box) (check_hlds__modes__PredId_69)), &check_hlds__modes__conv5_OldPredInfo0_145);
                      }
#line 1113 "modes.m"
                      check_hlds__modes__OldPredInfo0_145 = ((MR_Word) check_hlds__modes__conv5_OldPredInfo0_145);
#line 1114 "modes.m"
                      {
#line 1114 "modes.m"
                        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__OldPredInfo0_145, &check_hlds__modes__OldProcTable0_146);
                      }
#line 1115 "modes.m"
                      {
#line 1115 "modes.m"
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__modes__ProcId_70, ((MR_Box) (check_hlds__modes__ProcInfo_144)), check_hlds__modes__OldProcTable0_146, &check_hlds__modes__OldProcTable_147);
                      }
#line 1116 "modes.m"
                      {
#line 1116 "modes.m"
                        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__modes__OldProcTable_147, check_hlds__modes__OldPredInfo0_145, &check_hlds__modes__OldPredInfo_148);
                      }
#line 1117 "modes.m"
                      {
#line 1117 "modes.m"
                        mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_19_150, check_hlds__modes__TypeCtorInfo_20_151, ((MR_Box) (check_hlds__modes__PredId_69)), ((MR_Box) (check_hlds__modes__OldPredInfo_148)), check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26, &check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33);
                      }
#line 1094 "modes.m"
                      {
#line 1094 "modes.m"
                        check_hlds__unique_modes__unique_modes_check_proc_6_p_0(check_hlds__modes__ProcId_70, check_hlds__modes__PredId_69, check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_100, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34, &check_hlds__modes__NewChanged_92, &check_hlds__modes__UniqueSpecs_93);
                      }
#line 1096 "modes.m"
                      {
#line 1096 "modes.m"
                        mercury__bool__or_3_p_0(check_hlds__modes__NewChanged_92, check_hlds__modes__STATE_VARIABLE_Changed_48_97, &check_hlds__modes__HeadChanged_22);
                      }
#line 1097 "modes.m"
                      {
#line 1097 "modes.m"
                        check_hlds__modes__HeadSpecs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__ModeSpecs_79, check_hlds__modes__UniqueSpecs_93);
                      }
#line 1074 "modes.m"
                    }
#line 1098 "modes.m"
                    break;
#line 1098 "modes.m"
                }
#line 1071 "modes.m"
                break;
#line 1071 "modes.m"
              case (MR_Integer) 1:
#line 1068 "modes.m"
                {
#line 1069 "modes.m"
                  {
#line 1069 "modes.m"
                    hlds__hlds_module__module_info_make_pred_id_invalid_3_p_0(check_hlds__modes__PredId_69, check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34);
                  }
#line 1070 "modes.m"
                  check_hlds__modes__HeadSpecs_23 = check_hlds__modes__ModeSpecs_79;
#line 1068 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 1068 "modes.m"
                  check_hlds__modes__HeadChanged_22 = check_hlds__modes__STATE_VARIABLE_Changed_48_97;
#line 1068 "modes.m"
                }
#line 1071 "modes.m"
                break;
#line 1071 "modes.m"
            }
#line 1003 "modes.m"
          }
#line 999 "modes.m"
        else
#line 1007 "modes.m"
          {
#line 1007 "modes.m"
            check_hlds__modes__HeadSpecs_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1008 "modes.m"
            check_hlds__modes__HeadChanged_22 = (MR_Integer) 0;
#line 1007 "modes.m"
            check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30;
#line 1007 "modes.m"
            check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 1007 "modes.m"
          }
#line 1010 "modes.m"
        {
#line 1010 "modes.m"
          check_hlds__modes__modecheck_queued_procs_7_p_0(check_hlds__modes__HowToCheckGoal_8, check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33, check_hlds__modes__STATE_VARIABLE_OldPredTable_27, check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34, check_hlds__modes__STATE_VARIABLE_ModuleInfo_29, &check_hlds__modes__TailChanged_24, &check_hlds__modes__TailSpecs_25);
        }
#line 1012 "modes.m"
        {
#line 1012 "modes.m"
          mercury__bool__or_3_p_0(check_hlds__modes__HeadChanged_22, check_hlds__modes__TailChanged_24, check_hlds__modes__Changed_11);
        }
#line 1013 "modes.m"
        {
#line 1013 "modes.m"
          *check_hlds__modes__Specs_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__HeadSpecs_23, check_hlds__modes__TailSpecs_25);
        }
#line 988 "modes.m"
      }
#line 987 "modes.m"
    else
#line 1015 "modes.m"
      {
#line 1015 "modes.m"
        *check_hlds__modes__Changed_11 = (MR_Integer) 0;
#line 1016 "modes.m"
        *check_hlds__modes__Specs_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1015 "modes.m"
        *check_hlds__modes__STATE_VARIABLE_ModuleInfo_29 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28;
#line 1015 "modes.m"
        *check_hlds__modes__STATE_VARIABLE_OldPredTable_27 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 1015 "modes.m"
      }
#line 984 "modes.m"
  }
#line 979 "modes.m"
}

#line 930 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_5(
#line 930 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 930 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 930 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 930 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 930 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4)
#line 930 "modes.m"
{
#line 930 "modes.m"
  {
#line 930 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 930 "modes.m"
    MR_Word check_hlds__modes__conv10_Case_16;
#line 930 "modes.m"
    MR_Word check_hlds__modes__conv9_STATE_VARIABLE_ModeInfo_28;

#line 930 "modes.m"
    {
#line 930 "modes.m"
      check_hlds__modes__unique_modecheck_clause_switch_9_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 7))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv10_Case_16, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv9_STATE_VARIABLE_ModeInfo_28);
    }
#line 930 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv10_Case_16));
#line 930 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv9_STATE_VARIABLE_ModeInfo_28));
#line 930 "modes.m"
  }
#line 930 "modes.m"
}

#line 922 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_4(
#line 922 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 922 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 922 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 922 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 922 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4)
#line 922 "modes.m"
{
#line 922 "modes.m"
  {
#line 922 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 922 "modes.m"
    MR_Word check_hlds__modes__conv7_Disjunct_20;
#line 922 "modes.m"
    MR_Word check_hlds__modes__conv6_STATE_VARIABLE_ModeInfo_25;

#line 922 "modes.m"
    {
#line 922 "modes.m"
      check_hlds__modes__unique_modecheck_clause_disj_11_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 9))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv7_Disjunct_20, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv6_STATE_VARIABLE_ModeInfo_25);
    }
#line 922 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv7_Disjunct_20));
#line 922 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv6_STATE_VARIABLE_ModeInfo_25));
#line 922 "modes.m"
  }
#line 922 "modes.m"
}

#line 887 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_3(
#line 887 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 887 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 887 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 887 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 887 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4)
#line 887 "modes.m"
{
#line 887 "modes.m"
  {
#line 887 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 887 "modes.m"
    MR_Word check_hlds__modes__conv4_Case_16;
#line 887 "modes.m"
    MR_Word check_hlds__modes__conv3_STATE_VARIABLE_ModeInfo_28;

#line 887 "modes.m"
    {
#line 887 "modes.m"
      check_hlds__modes__modecheck_clause_switch_9_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 7))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv4_Case_16, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv3_STATE_VARIABLE_ModeInfo_28);
    }
#line 887 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv4_Case_16));
#line 887 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv3_STATE_VARIABLE_ModeInfo_28));
#line 887 "modes.m"
  }
#line 887 "modes.m"
}

#line 880 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_2(
#line 880 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 880 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 880 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 880 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 880 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4)
#line 880 "modes.m"
{
#line 880 "modes.m"
  {
#line 880 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 880 "modes.m"
    MR_Word check_hlds__modes__conv1_Disjunct_14;
#line 880 "modes.m"
    MR_Word check_hlds__modes__conv0_STATE_VARIABLE_ModeInfo_19;

#line 880 "modes.m"
    {
#line 880 "modes.m"
      check_hlds__modes__modecheck_clause_disj_8_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv1_Disjunct_14, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv0_STATE_VARIABLE_ModeInfo_19);
    }
#line 880 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv1_Disjunct_14));
#line 880 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv0_STATE_VARIABLE_ModeInfo_19));
#line 880 "modes.m"
  }
#line 880 "modes.m"
}

#line 861 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_1(
#line 861 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 861 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1)
#line 861 "modes.m"
{
#line 861 "modes.m"
  {
#line 861 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 861 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;

#line 861 "modes.m"
    {
#line 861 "modes.m"
      check_hlds__modes__succeeded = check_hlds__type_util__var_is_or_may_contain_solver_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modes__wrapper_arg_1));
    }
#line 861 "modes.m"
    return check_hlds__modes__succeeded;
#line 861 "modes.m"
  }
#line 861 "modes.m"
}

#line 833 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0(
#line 833 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_16,
#line 833 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_17,
#line 833 "modes.m"
  MR_Word check_hlds__modes__InferModes_18,
#line 833 "modes.m"
  MR_Word check_hlds__modes__Markers_19,
#line 833 "modes.m"
  MR_Word check_hlds__modes__IsUnifyPred_20,
#line 833 "modes.m"
  MR_Word check_hlds__modes__PredId_21,
#line 833 "modes.m"
  MR_Integer check_hlds__modes__ProcId_22,
#line 833 "modes.m"
  MR_Word check_hlds__modes__Body0_23,
#line 833 "modes.m"
  MR_Word * check_hlds__modes__Body_24,
#line 833 "modes.m"
  MR_Word check_hlds__modes__HeadVars_25,
#line 833 "modes.m"
  MR_Word check_hlds__modes__InstMap0_26,
#line 833 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_27,
#line 833 "modes.m"
  MR_Word * check_hlds__modes__ArgFinalInsts_28,
#line 833 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66,
#line 833 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_67)
#line 833 "modes.m"
{
#line 841 "modes.m"
  {
#line 841 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 841 "modes.m"
    MR_String check_hlds__modes__CheckpointMsg_30;
#line 841 "modes.m"
    MR_Integer check_hlds__modes__V_71_71;
#line 841 "modes.m"
    MR_Integer check_hlds__modes__V_74_74;
#line 841 "modes.m"
    MR_String check_hlds__modes__V_151_151;
#line 841 "modes.m"
    MR_Word check_hlds__modes__V_157_157;
#line 841 "modes.m"
    MR_String check_hlds__modes__V_159_159;
#line 841 "modes.m"
    MR_String check_hlds__modes__V_160_160;
#line 841 "modes.m"
    MR_String check_hlds__modes__V_167_167;
#line 845 "modes.m"
    MR_Word check_hlds__modes__BodyGoalInfo0_32;
#line 845 "modes.m"
    MR_Word check_hlds__modes__ClausesForm0_36;
#line 845 "modes.m"
    MR_Word check_hlds__modes__BodyNonLocals_42;
#line 846 "modes.m"
    MR_Word check_hlds__modes__TypeInfo_121_121;
#line 846 "modes.m"
    MR_Word check_hlds__modes__TypeCtorInfo_123_123;
#line 846 "modes.m"
    MR_Word check_hlds__modes__BodyGoalExpr0_31;
#line 846 "modes.m"
    MR_Word check_hlds__modes__VarTypes0_43;
#line 846 "modes.m"
    MR_Word check_hlds__modes__SolverNonLocals_44;
#line 846 "modes.m"
    MR_Word check_hlds__modes__V_76_76;
#line 846 "modes.m"
    MR_Word check_hlds__modes__V_77_77;
#line 846 "modes.m"
    MR_Word check_hlds__modes__V_78_78;

#line 843 "modes.m"
    {
#line 843 "modes.m"
      check_hlds__modes__V_71_71 = hlds__hlds_pred__pred_id_to_int_1_f_0(check_hlds__modes__PredId_21);
    }
#line 843 "modes.m"
    {
#line 843 "modes.m"
      check_hlds__modes__V_74_74 = hlds__hlds_pred__proc_id_to_int_1_f_0(check_hlds__modes__ProcId_22);
    }
#line 4895 "check_hlds.modes.c"
    check_hlds__modes__V_157_157 = (MR_Word) &check_hlds__modes_scalar_common_3[2];
#line 843 "modes.m"
    {
#line 843 "modes.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__modes__V_157_157, check_hlds__modes__V_74_74, &check_hlds__modes__V_151_151);
    }
#line 842 "modes.m"
    {
#line 842 "modes.m"
      check_hlds__modes__V_159_159 = mercury__string__f_43_43_2_f_0((MR_String) "_", check_hlds__modes__V_151_151);
    }
#line 843 "modes.m"
    {
#line 843 "modes.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__modes__V_157_157, check_hlds__modes__V_71_71, &check_hlds__modes__V_160_160);
    }
#line 842 "modes.m"
    {
#line 842 "modes.m"
      check_hlds__modes__V_167_167 = mercury__string__f_43_43_2_f_0(check_hlds__modes__V_160_160, check_hlds__modes__V_159_159);
    }
#line 842 "modes.m"
    {
#line 842 "modes.m"
      check_hlds__modes__CheckpointMsg_30 = mercury__string__f_43_43_2_f_0((MR_String) "procedure_", check_hlds__modes__V_167_167);
    }
#line 846 "modes.m"
    check_hlds__modes__succeeded = (check_hlds__modes__InferModes_18 == (MR_Integer) 0);
#line 846 "modes.m"
    if (check_hlds__modes__succeeded)
#line 846 "modes.m"
      {
#line 847 "modes.m"
        check_hlds__modes__V_76_76 = (MR_Integer) 21;
#line 847 "modes.m"
        {
#line 847 "modes.m"
          check_hlds__modes__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_19, check_hlds__modes__V_76_76);
        }
#line 846 "modes.m"
        if (check_hlds__modes__succeeded)
#line 846 "modes.m"
          {
#line 848 "modes.m"
            check_hlds__modes__BodyGoalExpr0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Body0_23, (MR_Integer) 0)));
#line 848 "modes.m"
            check_hlds__modes__BodyGoalInfo0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Body0_23, (MR_Integer) 1)));
#line 853 "modes.m"
            if (((((MR_tag((MR_Word) check_hlds__modes__BodyGoalExpr0_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 850 "modes.m"
              {
#line 850 "modes.m"
                MR_Word check_hlds__modes__Disjuncts0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 1)));
#line 851 "modes.m"
                MR_Word check_hlds__modes__V_34_34;
#line 851 "modes.m"
                MR_Word check_hlds__modes__V_35_35;

#line 851 "modes.m"
                check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Disjuncts0_33)) == (MR_mktag((MR_Integer) 1)));
#line 851 "modes.m"
                if (check_hlds__modes__succeeded)
#line 851 "modes.m"
                  {
#line 851 "modes.m"
                    check_hlds__modes__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Disjuncts0_33, (MR_Integer) 0)));
#line 851 "modes.m"
                    check_hlds__modes__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Disjuncts0_33, (MR_Integer) 1)));
#line 852 "modes.m"
                    {
#line 852 "modes.m"
                      check_hlds__modes__ClausesForm0_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 852 "modes.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modes__ClausesForm0_36, 0) = ((MR_Box) (check_hlds__modes__Disjuncts0_33));
#line 852 "modes.m"
                    }
#line 852 "modes.m"
                    check_hlds__modes__succeeded = MR_TRUE;
#line 851 "modes.m"
                  }
#line 850 "modes.m"
              }
#line 853 "modes.m"
            else
#line 853 "modes.m"
            if (((((MR_tag((MR_Word) check_hlds__modes__BodyGoalExpr0_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 854 "modes.m"
              {
#line 854 "modes.m"
                MR_Word check_hlds__modes__SwitchVar0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 1)));
#line 854 "modes.m"
                MR_Word check_hlds__modes__CanFail0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 2)));
#line 854 "modes.m"
                MR_Word check_hlds__modes__Cases0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 3)));
#line 855 "modes.m"
                MR_Word check_hlds__modes__V_40_40;
#line 855 "modes.m"
                MR_Word check_hlds__modes__V_41_41;

#line 855 "modes.m"
                check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Cases0_39)) == (MR_mktag((MR_Integer) 1)));
#line 855 "modes.m"
                if (check_hlds__modes__succeeded)
#line 855 "modes.m"
                  {
#line 855 "modes.m"
                    check_hlds__modes__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Cases0_39, (MR_Integer) 0)));
#line 855 "modes.m"
                    check_hlds__modes__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Cases0_39, (MR_Integer) 1)));
#line 856 "modes.m"
                    {
#line 856 "modes.m"
                      check_hlds__modes__ClausesForm0_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 856 "modes.m"
                      MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, 0) = ((MR_Box) (check_hlds__modes__SwitchVar0_37));
#line 856 "modes.m"
                      MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, 1) = ((MR_Box) (check_hlds__modes__CanFail0_38));
#line 856 "modes.m"
                      MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, 2) = ((MR_Box) (check_hlds__modes__Cases0_39));
#line 856 "modes.m"
                    }
#line 856 "modes.m"
                    check_hlds__modes__succeeded = MR_TRUE;
#line 855 "modes.m"
                  }
#line 854 "modes.m"
              }
#line 853 "modes.m"
            else
#line 853 "modes.m"
              check_hlds__modes__succeeded = MR_FALSE;
#line 846 "modes.m"
            if (check_hlds__modes__succeeded)
#line 846 "modes.m"
              {
#line 858 "modes.m"
                {
#line 858 "modes.m"
                  check_hlds__modes__BodyNonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modes__BodyGoalInfo0_32);
                }
#line 859 "modes.m"
                {
#line 859 "modes.m"
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66, &check_hlds__modes__VarTypes0_43);
                }
#line 5041 "check_hlds.modes.c"
                check_hlds__modes__TypeInfo_121_121 = (MR_Word) &check_hlds__modes_scalar_common_1[1];
#line 5043 "check_hlds.modes.c"
                check_hlds__modes__TypeCtorInfo_123_123 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 861 "modes.m"
                {
#line 861 "modes.m"
                  check_hlds__modes__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 861 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[2]));
#line 861 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_1));
#line 861 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 861 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 3) = ((MR_Box) (check_hlds__modes__ModuleInfo_16));
#line 861 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 4) = ((MR_Box) (check_hlds__modes__VarTypes0_43));
#line 861 "modes.m"
                }
#line 862 "modes.m"
                {
#line 862 "modes.m"
                  check_hlds__modes__V_78_78 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__modes__TypeCtorInfo_123_123, check_hlds__modes__BodyNonLocals_42);
                }
#line 860 "modes.m"
                {
#line 860 "modes.m"
                  check_hlds__modes__SolverNonLocals_44 = mercury__list__filter_2_f_0(check_hlds__modes__TypeInfo_121_121, check_hlds__modes__V_77_77, check_hlds__modes__V_78_78);
                }
#line 863 "modes.m"
                check_hlds__modes__succeeded = (check_hlds__modes__SolverNonLocals_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 846 "modes.m"
              }
#line 846 "modes.m"
          }
#line 846 "modes.m"
      }
#line 845 "modes.m"
    if (check_hlds__modes__succeeded)
#line 865 "modes.m"
      {
#line 865 "modes.m"
        MR_Word check_hlds__modes__BodyContext_45;
#line 865 "modes.m"
        MR_Word check_hlds__modes__EmptyContext_46;
#line 865 "modes.m"
        MR_Word check_hlds__modes__NewGoalExpr_50;
#line 865 "modes.m"
        MR_Word check_hlds__modes__HeadVarFinalInsts_60;
#line 865 "modes.m"
        MR_Word check_hlds__modes__FinalInstMap_61;
#line 865 "modes.m"
        MR_Word check_hlds__modes__DeltaInstMap_62;
#line 865 "modes.m"
        MR_Word check_hlds__modes__BodyGoalInfo_63;
#line 865 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79;

#line 865 "modes.m"
        {
#line 865 "modes.m"
          check_hlds__modes__BodyContext_45 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__modes__BodyGoalInfo0_32);
        }
#line 866 "modes.m"
        {
#line 866 "modes.m"
          mercury__term__context_init_1_p_0(&check_hlds__modes__EmptyContext_46);
        }
#line 867 "modes.m"
        {
#line 867 "modes.m"
          check_hlds__modes__succeeded = mercury__term____Unify____context_0_0(check_hlds__modes__BodyContext_45, check_hlds__modes__EmptyContext_46);
        }
#line 867 "modes.m"
        if (check_hlds__modes__succeeded)
#line 867 "modes.m"
          check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66;
#line 867 "modes.m"
        else
#line 870 "modes.m"
          {
#line 870 "modes.m"
            check_hlds__mode_info__mode_info_set_context_3_p_0(check_hlds__modes__BodyContext_45, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66, &check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79);
          }
#line 892 "modes.m"
#line 892 "modes.m"
        switch (check_hlds__modes__WhatToCheck_17) {
#line 892 "modes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 892 "modes.m"
          case (MR_Integer) 0:
#line 884 "modes.m"
            if (((MR_tag((MR_Word) check_hlds__modes__ClausesForm0_36)) == (MR_mktag((MR_Integer) 0))))
#line 877 "modes.m"
              {
#line 877 "modes.m"
                MR_Word check_hlds__modes__TypeCtorInfo_128_128;
#line 877 "modes.m"
                MR_Word check_hlds__modes__Disjuncts1_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__ClausesForm0_36, (MR_Integer) 0)));
#line 877 "modes.m"
                MR_Word check_hlds__modes__Disjuncts2_48;
#line 877 "modes.m"
                MR_Word check_hlds__modes__Disjuncts_49;
#line 877 "modes.m"
                MR_Word check_hlds__modes__V_91_91;
#line 879 "modes.m"
                MR_Box check_hlds__modes__conv2_STATE_VARIABLE_ModeInfo_67;

#line 878 "modes.m"
                {
#line 878 "modes.m"
                  hlds__goal_util__flatten_disj_2_p_0(check_hlds__modes__Disjuncts1_47, &check_hlds__modes__Disjuncts2_48);
                }
#line 880 "modes.m"
                {
#line 880 "modes.m"
                  check_hlds__modes__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 880 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_7[0]));
#line 880 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_2));
#line 880 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 880 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_30));
#line 880 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 4) = ((MR_Box) (check_hlds__modes__HeadVars_25));
#line 880 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 5) = ((MR_Box) (check_hlds__modes__InstMap0_26));
#line 880 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_27));
#line 880 "modes.m"
                }
#line 5175 "check_hlds.modes.c"
                check_hlds__modes__TypeCtorInfo_128_128 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 879 "modes.m"
                {
#line 879 "modes.m"
                  mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_128_128, check_hlds__modes__TypeCtorInfo_128_128, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_91_91, check_hlds__modes__Disjuncts2_48, &check_hlds__modes__Disjuncts_49, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79)), &check_hlds__modes__conv2_STATE_VARIABLE_ModeInfo_67);
                }
#line 879 "modes.m"
                *check_hlds__modes__STATE_VARIABLE_ModeInfo_67 = ((MR_Word) check_hlds__modes__conv2_STATE_VARIABLE_ModeInfo_67);
#line 883 "modes.m"
                {
#line 883 "modes.m"
                  check_hlds__modes__NewGoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 883 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 883 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 1) = ((MR_Box) (check_hlds__modes__Disjuncts_49));
#line 883 "modes.m"
                }
#line 877 "modes.m"
              }
#line 884 "modes.m"
            else
#line 885 "modes.m"
              {
#line 885 "modes.m"
                MR_Word check_hlds__modes__TypeCtorInfo_134_134;
#line 885 "modes.m"
                MR_Word check_hlds__modes__SwitchVar_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 0)));
#line 885 "modes.m"
                MR_Word check_hlds__modes__CanFail_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 1)));
#line 885 "modes.m"
                MR_Word check_hlds__modes__Cases1_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 2)));
#line 885 "modes.m"
                MR_Word check_hlds__modes__Cases_54;
#line 885 "modes.m"
                MR_Word check_hlds__modes__V_89_89;
#line 886 "modes.m"
                MR_Box check_hlds__modes__conv5_STATE_VARIABLE_ModeInfo_67;

#line 887 "modes.m"
                {
#line 887 "modes.m"
                  check_hlds__modes__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 887 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_4[1]));
#line 887 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_3));
#line 887 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 887 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_30));
#line 887 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 4) = ((MR_Box) (check_hlds__modes__HeadVars_25));
#line 887 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 5) = ((MR_Box) (check_hlds__modes__InstMap0_26));
#line 887 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_27));
#line 887 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 7) = ((MR_Box) (check_hlds__modes__SwitchVar_51));
#line 887 "modes.m"
                }
#line 5237 "check_hlds.modes.c"
                check_hlds__modes__TypeCtorInfo_134_134 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 886 "modes.m"
                {
#line 886 "modes.m"
                  mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_134_134, check_hlds__modes__TypeCtorInfo_134_134, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_89_89, check_hlds__modes__Cases1_53, &check_hlds__modes__Cases_54, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79)), &check_hlds__modes__conv5_STATE_VARIABLE_ModeInfo_67);
                }
#line 886 "modes.m"
                *check_hlds__modes__STATE_VARIABLE_ModeInfo_67 = ((MR_Word) check_hlds__modes__conv5_STATE_VARIABLE_ModeInfo_67);
#line 890 "modes.m"
                {
#line 890 "modes.m"
                  check_hlds__modes__NewGoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 890 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 890 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 1) = ((MR_Box) (check_hlds__modes__SwitchVar_51));
#line 890 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 2) = ((MR_Box) (check_hlds__modes__CanFail_52));
#line 890 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 3) = ((MR_Box) (check_hlds__modes__Cases_54));
#line 890 "modes.m"
                }
#line 885 "modes.m"
              }
#line 892 "modes.m"
            break;
#line 892 "modes.m"
          case (MR_Integer) 1:
#line 893 "modes.m"
            {
#line 893 "modes.m"
              MR_Word check_hlds__modes__NondetLiveVars0_55;
#line 893 "modes.m"
              MR_Word check_hlds__modes__Detism_56;
#line 893 "modes.m"
              MR_Word check_hlds__modes__NonLocals_57;
#line 893 "modes.m"
              MR_Word check_hlds__modes__SolnCount_59;
#line 893 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81;
#line 897 "modes.m"
              MR_Word check_hlds__modes__V_58_58;

#line 894 "modes.m"
              {
#line 894 "modes.m"
                check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79, &check_hlds__modes__NondetLiveVars0_55);
              }
#line 895 "modes.m"
              {
#line 895 "modes.m"
                check_hlds__modes__Detism_56 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__modes__BodyGoalInfo0_32);
              }
#line 896 "modes.m"
              {
#line 896 "modes.m"
                check_hlds__modes__NonLocals_57 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modes__BodyGoalInfo0_32);
              }
#line 897 "modes.m"
              {
#line 897 "modes.m"
                parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modes__Detism_56, &check_hlds__modes__V_58_58, &check_hlds__modes__SolnCount_59);
              }
#line 900 "modes.m"
#line 900 "modes.m"
              switch (check_hlds__modes__SolnCount_59) {
#line 900 "modes.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 900 "modes.m"
                case (MR_Integer) 3:
#line 899 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81 = check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79;
#line 900 "modes.m"
                  break;
#line 900 "modes.m"
                case (MR_Integer) 2:
#line 900 "modes.m"
                case (MR_Integer) 1:
#line 900 "modes.m"
                case (MR_Integer) 0:
#line 904 "modes.m"
                  {
#line 904 "modes.m"
                    MR_Word check_hlds__modes__V_80_80;

#line 905 "modes.m"
                    {
#line 905 "modes.m"
                      check_hlds__modes__V_80_80 = mercury__bag__init_0_f_0((MR_Word) &check_hlds__modes_scalar_common_1[1]);
                    }
#line 905 "modes.m"
                    {
#line 905 "modes.m"
                      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__modes__V_80_80, check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79, &check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81);
                    }
#line 904 "modes.m"
                  }
#line 900 "modes.m"
                  break;
#line 900 "modes.m"
              }
#line 927 "modes.m"
              if (((MR_tag((MR_Word) check_hlds__modes__ClausesForm0_36)) == (MR_mktag((MR_Integer) 0))))
#line 908 "modes.m"
                {
#line 908 "modes.m"
                  MR_Word check_hlds__modes__TypeCtorInfo_141_141;
#line 908 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86;
#line 908 "modes.m"
                  MR_Word check_hlds__modes__V_87_87;
#line 908 "modes.m"
                  MR_Word check_hlds__modes__Disjuncts1_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__ClausesForm0_36, (MR_Integer) 0)));
#line 908 "modes.m"
                  MR_Word check_hlds__modes__Disjuncts2_101;
#line 908 "modes.m"
                  MR_Word check_hlds__modes__Disjuncts_102;
#line 921 "modes.m"
                  MR_Box check_hlds__modes__conv8_STATE_VARIABLE_ModeInfo_67;

#line 909 "modes.m"
                  {
#line 909 "modes.m"
                    hlds__goal_util__flatten_disj_2_p_0(check_hlds__modes__Disjuncts1_100, &check_hlds__modes__Disjuncts2_101);
                  }
#line 915 "modes.m"
#line 915 "modes.m"
                  switch (check_hlds__modes__SolnCount_59) {
#line 915 "modes.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 915 "modes.m"
                    case (MR_Integer) 3:
#line 911 "modes.m"
                      {
#line 911 "modes.m"
                        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_84_84;
#line 911 "modes.m"
                        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_85_85;

#line 912 "modes.m"
                        {
#line 912 "modes.m"
                          check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__modes__NonLocals_57, check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81, &check_hlds__modes__STATE_VARIABLE_ModeInfo_84_84);
                        }
#line 913 "modes.m"
                        {
#line 913 "modes.m"
                          check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_84_84, &check_hlds__modes__STATE_VARIABLE_ModeInfo_85_85);
                        }
#line 914 "modes.m"
                        {
#line 914 "modes.m"
                          check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modes__NonLocals_57, check_hlds__modes__STATE_VARIABLE_ModeInfo_85_85, &check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86);
                        }
#line 911 "modes.m"
                      }
#line 915 "modes.m"
                      break;
#line 915 "modes.m"
                    case (MR_Integer) 2:
#line 918 "modes.m"
                      check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86 = check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81;
#line 915 "modes.m"
                      break;
#line 915 "modes.m"
                    case (MR_Integer) 1:
#line 917 "modes.m"
                      check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86 = check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81;
#line 915 "modes.m"
                      break;
#line 915 "modes.m"
                    case (MR_Integer) 0:
#line 916 "modes.m"
                      check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86 = check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81;
#line 915 "modes.m"
                      break;
#line 915 "modes.m"
                  }
#line 922 "modes.m"
                  {
#line 922 "modes.m"
                    check_hlds__modes__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 922 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_8[0]));
#line 922 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_4));
#line 922 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 922 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_30));
#line 922 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 4) = ((MR_Box) (check_hlds__modes__HeadVars_25));
#line 922 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 5) = ((MR_Box) (check_hlds__modes__InstMap0_26));
#line 922 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_27));
#line 922 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 7) = ((MR_Box) (check_hlds__modes__Detism_56));
#line 922 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 8) = ((MR_Box) (check_hlds__modes__NonLocals_57));
#line 922 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 9) = ((MR_Box) (check_hlds__modes__NondetLiveVars0_55));
#line 922 "modes.m"
                  }
#line 5442 "check_hlds.modes.c"
                  check_hlds__modes__TypeCtorInfo_141_141 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 921 "modes.m"
                  {
#line 921 "modes.m"
                    mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_141_141, check_hlds__modes__TypeCtorInfo_141_141, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_87_87, check_hlds__modes__Disjuncts2_101, &check_hlds__modes__Disjuncts_102, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86)), &check_hlds__modes__conv8_STATE_VARIABLE_ModeInfo_67);
                  }
#line 921 "modes.m"
                  *check_hlds__modes__STATE_VARIABLE_ModeInfo_67 = ((MR_Word) check_hlds__modes__conv8_STATE_VARIABLE_ModeInfo_67);
#line 926 "modes.m"
                  {
#line 926 "modes.m"
                    check_hlds__modes__NewGoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 926 "modes.m"
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 926 "modes.m"
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 1) = ((MR_Box) (check_hlds__modes__Disjuncts_102));
#line 926 "modes.m"
                  }
#line 908 "modes.m"
                }
#line 927 "modes.m"
              else
#line 928 "modes.m"
                {
#line 928 "modes.m"
                  MR_Word check_hlds__modes__TypeCtorInfo_147_147;
#line 928 "modes.m"
                  MR_Word check_hlds__modes__V_82_82;
#line 928 "modes.m"
                  MR_Word check_hlds__modes__SwitchVar_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 0)));
#line 928 "modes.m"
                  MR_Word check_hlds__modes__CanFail_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 1)));
#line 928 "modes.m"
                  MR_Word check_hlds__modes__Cases1_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 2)));
#line 928 "modes.m"
                  MR_Word check_hlds__modes__Cases_106;
#line 929 "modes.m"
                  MR_Box check_hlds__modes__conv11_STATE_VARIABLE_ModeInfo_67;

#line 930 "modes.m"
                  {
#line 930 "modes.m"
                    check_hlds__modes__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 930 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_4[1]));
#line 930 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_5));
#line 930 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 930 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_30));
#line 930 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 4) = ((MR_Box) (check_hlds__modes__HeadVars_25));
#line 930 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 5) = ((MR_Box) (check_hlds__modes__InstMap0_26));
#line 930 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_27));
#line 930 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 7) = ((MR_Box) (check_hlds__modes__SwitchVar_103));
#line 930 "modes.m"
                  }
#line 5504 "check_hlds.modes.c"
                  check_hlds__modes__TypeCtorInfo_147_147 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 929 "modes.m"
                  {
#line 929 "modes.m"
                    mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_147_147, check_hlds__modes__TypeCtorInfo_147_147, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_82_82, check_hlds__modes__Cases1_105, &check_hlds__modes__Cases_106, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81)), &check_hlds__modes__conv11_STATE_VARIABLE_ModeInfo_67);
                  }
#line 929 "modes.m"
                  *check_hlds__modes__STATE_VARIABLE_ModeInfo_67 = ((MR_Word) check_hlds__modes__conv11_STATE_VARIABLE_ModeInfo_67);
#line 933 "modes.m"
                  {
#line 933 "modes.m"
                    check_hlds__modes__NewGoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 933 "modes.m"
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 933 "modes.m"
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 1) = ((MR_Box) (check_hlds__modes__SwitchVar_103));
#line 933 "modes.m"
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 2) = ((MR_Box) (check_hlds__modes__CanFail_104));
#line 933 "modes.m"
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 3) = ((MR_Box) (check_hlds__modes__Cases_106));
#line 933 "modes.m"
                  }
#line 928 "modes.m"
                }
#line 893 "modes.m"
            }
#line 892 "modes.m"
            break;
#line 892 "modes.m"
        }
#line 938 "modes.m"
        {
#line 938 "modes.m"
          mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modes__HeadVars_25, check_hlds__modes__ArgFinalInsts0_27, &check_hlds__modes__HeadVarFinalInsts_60);
        }
#line 940 "modes.m"
        {
#line 940 "modes.m"
          check_hlds__modes__FinalInstMap_61 = hlds__instmap__instmap_from_assoc_list_1_f_0(check_hlds__modes__HeadVarFinalInsts_60);
        }
#line 941 "modes.m"
        {
#line 941 "modes.m"
          hlds__instmap__compute_instmap_delta_4_p_0(check_hlds__modes__InstMap0_26, check_hlds__modes__FinalInstMap_61, check_hlds__modes__BodyNonLocals_42, &check_hlds__modes__DeltaInstMap_62);
        }
#line 943 "modes.m"
        {
#line 943 "modes.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modes__DeltaInstMap_62, check_hlds__modes__BodyGoalInfo0_32, &check_hlds__modes__BodyGoalInfo_63);
        }
#line 944 "modes.m"
        {
#line 944 "modes.m"
          MR_Word base;
#line 944 "modes.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 944 "modes.m"
          *check_hlds__modes__Body_24 = base;
#line 944 "modes.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__NewGoalExpr_50));
#line 944 "modes.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__BodyGoalInfo_63));
#line 944 "modes.m"
        }
#line 945 "modes.m"
        *check_hlds__modes__ArgFinalInsts_28 = check_hlds__modes__ArgFinalInsts0_27;
#line 865 "modes.m"
      }
#line 845 "modes.m"
    else
#line 948 "modes.m"
      {
#line 948 "modes.m"
        MR_Word check_hlds__modes__Body1_64;
#line 948 "modes.m"
        MR_Word check_hlds__modes__GroundMatchesBound_65;
#line 948 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_94_94;
#line 948 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_96_96;
#line 948 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98;
#line 948 "modes.m"
        MR_Word check_hlds__modes__ModuleInfo_180;
#line 948 "modes.m"
        MR_Word check_hlds__modes__Errors_181;
#line 948 "modes.m"
        MR_Word check_hlds__modes__Changed0_184;
#line 948 "modes.m"
        MR_Word check_hlds__modes__InstMap_185;
#line 948 "modes.m"
        MR_Word check_hlds__modes__VarTypes_186;
#line 948 "modes.m"
        MR_Word check_hlds__modes__VarFinalInsts1_187;
#line 948 "modes.m"
        MR_Word check_hlds__modes__ArgTypes_188;

#line 948 "modes.m"
        {
#line 948 "modes.m"
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_30, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66, &check_hlds__modes__STATE_VARIABLE_ModeInfo_94_94);
        }
#line 952 "modes.m"
#line 952 "modes.m"
        switch (check_hlds__modes__WhatToCheck_17) {
#line 952 "modes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 952 "modes.m"
          case (MR_Integer) 0:
#line 951 "modes.m"
            {
#line 951 "modes.m"
              check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modes__Body0_23, &check_hlds__modes__Body1_64, check_hlds__modes__STATE_VARIABLE_ModeInfo_94_94, &check_hlds__modes__STATE_VARIABLE_ModeInfo_96_96);
            }
#line 952 "modes.m"
            break;
#line 952 "modes.m"
          case (MR_Integer) 1:
#line 954 "modes.m"
            {
#line 954 "modes.m"
              check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modes__Body0_23, &check_hlds__modes__Body1_64, check_hlds__modes__STATE_VARIABLE_ModeInfo_94_94, &check_hlds__modes__STATE_VARIABLE_ModeInfo_96_96);
            }
#line 952 "modes.m"
            break;
#line 952 "modes.m"
        }
#line 956 "modes.m"
        {
#line 956 "modes.m"
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_30, check_hlds__modes__STATE_VARIABLE_ModeInfo_96_96, &check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98);
        }
#line 962 "modes.m"
#line 962 "modes.m"
        switch (check_hlds__modes__IsUnifyPred_20) {
#line 962 "modes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 962 "modes.m"
          case (MR_Integer) 0:
#line 961 "modes.m"
            check_hlds__modes__GroundMatchesBound_65 = (MR_Integer) 0;
#line 962 "modes.m"
            break;
#line 962 "modes.m"
          case (MR_Integer) 1:
#line 964 "modes.m"
            check_hlds__modes__GroundMatchesBound_65 = (MR_Integer) 1;
#line 962 "modes.m"
            break;
#line 962 "modes.m"
        }
#line 1253 "modes.m"
        {
#line 1253 "modes.m"
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modes__ModuleInfo_180);
        }
#line 1254 "modes.m"
        {
#line 1254 "modes.m"
          check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modes__Errors_181);
        }
#line 1268 "modes.m"
        if ((check_hlds__modes__Errors_181 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1269 "modes.m"
          {
#line 1270 "modes.m"
            check_hlds__modes__Changed0_184 = (MR_Integer) 0;
#line 1271 "modes.m"
            {
#line 1271 "modes.m"
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modes__InstMap_185);
            }
#line 1269 "modes.m"
          }
#line 1268 "modes.m"
        else
#line 1262 "modes.m"
          {
#line 1266 "modes.m"
            check_hlds__modes__Changed0_184 = (MR_Integer) 1;
#line 1267 "modes.m"
            {
#line 1267 "modes.m"
              hlds__instmap__init_unreachable_1_p_0(&check_hlds__modes__InstMap_185);
            }
#line 1262 "modes.m"
          }
#line 1273 "modes.m"
        {
#line 1273 "modes.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modes__VarTypes_186);
        }
#line 1274 "modes.m"
        {
#line 1274 "modes.m"
          hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modes__InstMap_185, check_hlds__modes__HeadVars_25, &check_hlds__modes__VarFinalInsts1_187);
        }
#line 1275 "modes.m"
        {
#line 1275 "modes.m"
          hlds__vartypes__lookup_var_types_3_p_0(check_hlds__modes__VarTypes_186, check_hlds__modes__HeadVars_25, &check_hlds__modes__ArgTypes_188);
        }
#line 1294 "modes.m"
#line 1294 "modes.m"
        switch (check_hlds__modes__InferModes_18) {
#line 1294 "modes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1294 "modes.m"
          case (MR_Integer) 0:
#line 1295 "modes.m"
            {
#line 1296 "modes.m"
              MR_Word check_hlds__modes___Changed1_197;

#line 1296 "modes.m"
              {
#line 1296 "modes.m"
                check_hlds__modes__check_final_insts_13_p_0(check_hlds__modes__HeadVars_25, check_hlds__modes__ArgFinalInsts0_27, check_hlds__modes__VarFinalInsts1_187, check_hlds__modes__InferModes_18, check_hlds__modes__GroundMatchesBound_65, (MR_Integer) 1, check_hlds__modes__ModuleInfo_180, check_hlds__modes__Body1_64, check_hlds__modes__Body_24, (MR_Integer) 0, &check_hlds__modes___Changed1_197, check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, check_hlds__modes__STATE_VARIABLE_ModeInfo_67);
              }
#line 1299 "modes.m"
              *check_hlds__modes__ArgFinalInsts_28 = check_hlds__modes__ArgFinalInsts0_27;
#line 1295 "modes.m"
            }
#line 1294 "modes.m"
            break;
#line 1294 "modes.m"
          case (MR_Integer) 1:
#line 1277 "modes.m"
            {
#line 1277 "modes.m"
              MR_Word check_hlds__modes__VarFinalInsts2_189;
#line 1277 "modes.m"
              MR_Word check_hlds__modes__PredId_190;
#line 1277 "modes.m"
              MR_Integer check_hlds__modes__ProcId_191;
#line 1277 "modes.m"
              MR_Word check_hlds__modes__ProcInfo_192;
#line 1277 "modes.m"
              MR_Word check_hlds__modes__ArgLives_193;
#line 1277 "modes.m"
              MR_Word check_hlds__modes__Changed1_194;
#line 1277 "modes.m"
              MR_Word check_hlds__modes__Changed2_195;
#line 1277 "modes.m"
              MR_Word check_hlds__modes__Changed_196;
#line 1277 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_43_203;
#line 1277 "modes.m"
              MR_Word check_hlds__modes__V_204_204;
#line 1277 "modes.m"
              MR_Word check_hlds__modes__V_205_205;
#line 1277 "modes.m"
              MR_Word check_hlds__modes__V_206_206;

#line 1278 "modes.m"
              {
#line 1278 "modes.m"
                check_hlds__mode_util__normalise_insts_4_p_0(check_hlds__modes__ModuleInfo_180, check_hlds__modes__ArgTypes_188, check_hlds__modes__VarFinalInsts1_187, &check_hlds__modes__VarFinalInsts2_189);
              }
#line 1283 "modes.m"
              {
#line 1283 "modes.m"
                check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modes__PredId_190);
              }
#line 1284 "modes.m"
              {
#line 1284 "modes.m"
                check_hlds__mode_info__mode_info_get_proc_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modes__ProcId_191);
              }
#line 1285 "modes.m"
              {
#line 1285 "modes.m"
                hlds__hlds_module__module_info_proc_info_4_p_0(check_hlds__modes__ModuleInfo_180, check_hlds__modes__PredId_190, check_hlds__modes__ProcId_191, &check_hlds__modes__ProcInfo_192);
              }
#line 1286 "modes.m"
              {
#line 1286 "modes.m"
                hlds__hlds_pred__proc_info_arglives_3_p_0(check_hlds__modes__ProcInfo_192, check_hlds__modes__ModuleInfo_180, &check_hlds__modes__ArgLives_193);
              }
#line 1287 "modes.m"
              {
#line 1287 "modes.m"
                check_hlds__modes__maybe_clobber_insts_3_p_0(check_hlds__modes__VarFinalInsts2_189, check_hlds__modes__ArgLives_193, check_hlds__modes__ArgFinalInsts_28);
              }
#line 1288 "modes.m"
              {
#line 1288 "modes.m"
                check_hlds__modes__check_final_insts_13_p_0(check_hlds__modes__HeadVars_25, check_hlds__modes__ArgFinalInsts0_27, *check_hlds__modes__ArgFinalInsts_28, check_hlds__modes__InferModes_18, check_hlds__modes__GroundMatchesBound_65, (MR_Integer) 1, check_hlds__modes__ModuleInfo_180, check_hlds__modes__Body1_64, check_hlds__modes__Body_24, (MR_Integer) 0, &check_hlds__modes__Changed1_194, check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modes__STATE_VARIABLE_ModeInfo_43_203);
              }
#line 1291 "modes.m"
              {
#line 1291 "modes.m"
                check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_43_203, &check_hlds__modes__Changed2_195);
              }
#line 1292 "modes.m"
              {
#line 1292 "modes.m"
                check_hlds__modes__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1292 "modes.m"
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_206_206, 0) = ((MR_Box) (check_hlds__modes__Changed2_195));
#line 1292 "modes.m"
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_206_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1292 "modes.m"
              }
#line 1292 "modes.m"
              {
#line 1292 "modes.m"
                check_hlds__modes__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1292 "modes.m"
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_205_205, 0) = ((MR_Box) (check_hlds__modes__Changed1_194));
#line 1292 "modes.m"
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_205_205, 1) = ((MR_Box) (check_hlds__modes__V_206_206));
#line 1292 "modes.m"
              }
#line 1292 "modes.m"
              {
#line 1292 "modes.m"
                check_hlds__modes__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1292 "modes.m"
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_204_204, 0) = ((MR_Box) (check_hlds__modes__Changed0_184));
#line 1292 "modes.m"
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_204_204, 1) = ((MR_Box) (check_hlds__modes__V_205_205));
#line 1292 "modes.m"
              }
#line 1292 "modes.m"
              {
#line 1292 "modes.m"
                mercury__bool__or_list_2_p_0(check_hlds__modes__V_204_204, &check_hlds__modes__Changed_196);
              }
#line 1293 "modes.m"
              {
#line 1293 "modes.m"
                check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(check_hlds__modes__Changed_196, check_hlds__modes__STATE_VARIABLE_ModeInfo_43_203, check_hlds__modes__STATE_VARIABLE_ModeInfo_67);
              }
#line 1277 "modes.m"
            }
#line 1294 "modes.m"
            break;
#line 1294 "modes.m"
        }
#line 948 "modes.m"
      }
#line 841 "modes.m"
  }
#line 833 "modes.m"
}

#line 752 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_2(
#line 752 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 752 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1)
#line 752 "modes.m"
{
#line 752 "modes.m"
  {
#line 752 "modes.m"
    MR_Box check_hlds__modes__wrapper_arg_2;
#line 752 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 752 "modes.m"
    MR_Word check_hlds__modes__conv1_HeadVar__3_3;

#line 752 "modes.m"
    {
#line 752 "modes.m"
      check_hlds__modes__conv1_HeadVar__3_3 = check_hlds__mode_errors__mode_warning_info_to_spec_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modes__wrapper_arg_1));
    }
#line 752 "modes.m"
    check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv1_HeadVar__3_3));
#line 752 "modes.m"
    return check_hlds__modes__wrapper_arg_2;
#line 752 "modes.m"
  }
#line 752 "modes.m"
}

#line 732 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_1(
#line 732 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 732 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1)
#line 732 "modes.m"
{
#line 732 "modes.m"
  {
#line 732 "modes.m"
    MR_Box check_hlds__modes__wrapper_arg_2;
#line 732 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 732 "modes.m"
    MR_Word check_hlds__modes__conv0_HeadVar__3_3;

#line 732 "modes.m"
    {
#line 732 "modes.m"
      check_hlds__modes__conv0_HeadVar__3_3 = check_hlds__mode_errors__mode_error_info_to_spec_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modes__wrapper_arg_1));
    }
#line 732 "modes.m"
    check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv0_HeadVar__3_3));
#line 732 "modes.m"
    return check_hlds__modes__wrapper_arg_2;
#line 732 "modes.m"
  }
#line 732 "modes.m"
}

#line 623 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0(
#line 623 "modes.m"
  MR_Integer check_hlds__modes__ProcId_10,
#line 623 "modes.m"
  MR_Word check_hlds__modes__PredId_11,
#line 623 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_12,
#line 623 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_13,
#line 623 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23,
#line 623 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_24,
#line 623 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_25,
#line 623 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_26,
#line 623 "modes.m"
  MR_Word * check_hlds__modes__Specs_16)
#line 623 "modes.m"
{
#line 628 "modes.m"
  {
#line 628 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 628 "modes.m"
    MR_Word check_hlds__modes__PredInfo0_17;
#line 628 "modes.m"
    MR_Word check_hlds__modes__ProcInfo0_18;
#line 628 "modes.m"
    MR_Word check_hlds__modes__CanProcess_19;

#line 629 "modes.m"
    {
#line 629 "modes.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, &check_hlds__modes__PredInfo0_17, &check_hlds__modes__ProcInfo0_18);
    }
#line 631 "modes.m"
    {
#line 631 "modes.m"
      hlds__hlds_pred__proc_info_get_can_process_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__CanProcess_19);
    }
#line 635 "modes.m"
#line 635 "modes.m"
    switch (check_hlds__modes__CanProcess_19) {
#line 635 "modes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 635 "modes.m"
      case (MR_Integer) 1:
#line 636 "modes.m"
        {
#line 636 "modes.m"
          MR_Word check_hlds__modes__PredInfo_20;
#line 636 "modes.m"
          MR_Word check_hlds__modes__Preds1_21;
#line 636 "modes.m"
          MR_Word check_hlds__modes__Preds_22;
#line 636 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_27_27;
#line 636 "modes.m"
          MR_Word check_hlds__modes__HeadVars_48;
#line 636 "modes.m"
          MR_Word check_hlds__modes__ArgModes0_49;
#line 636 "modes.m"
          MR_Word check_hlds__modes__ArgLives0_50;
#line 636 "modes.m"
          MR_Word check_hlds__modes__Body0_51;
#line 636 "modes.m"
          MR_Word check_hlds__modes__ClausesInfo0_52;
#line 636 "modes.m"
          MR_Word check_hlds__modes__Clauses_53;
#line 636 "modes.m"
          MR_Word check_hlds__modes__ClausesInfo_55;
#line 636 "modes.m"
          MR_Word check_hlds__modes__Context_58;
#line 636 "modes.m"
          MR_Word check_hlds__modes__ArgInitialInsts_60;
#line 636 "modes.m"
          MR_Word check_hlds__modes__InstAL_61;
#line 636 "modes.m"
          MR_Word check_hlds__modes__InstMap0_62;
#line 636 "modes.m"
          MR_Word check_hlds__modes__LiveVarsList_63;
#line 636 "modes.m"
          MR_Word check_hlds__modes__LiveVars_64;
#line 636 "modes.m"
          MR_Word check_hlds__modes__HeadInstVars_65;
#line 636 "modes.m"
          MR_Word check_hlds__modes__Markers_66;
#line 636 "modes.m"
          MR_Word check_hlds__modes__InferModes_67;
#line 636 "modes.m"
          MR_Word check_hlds__modes__IsUnifyPred_68;
#line 636 "modes.m"
          MR_Word check_hlds__modes__ArgFinalInsts0_69;
#line 636 "modes.m"
          MR_Word check_hlds__modes__Body_70;
#line 636 "modes.m"
          MR_Word check_hlds__modes__ArgFinalInsts_71;
#line 636 "modes.m"
          MR_Word check_hlds__modes__ModeErrors_72;
#line 636 "modes.m"
          MR_Word check_hlds__modes__ArgModes_84;
#line 636 "modes.m"
          MR_Word check_hlds__modes__VarSet_85;
#line 636 "modes.m"
          MR_Word check_hlds__modes__VarTypes_86;
#line 636 "modes.m"
          MR_Word check_hlds__modes__NeedToRequantify_87;
#line 636 "modes.m"
          MR_Word check_hlds__modes__ProcMap1_88;
#line 636 "modes.m"
          MR_Word check_hlds__modes__ProcMap_89;
#line 636 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_PredInfo_71_90;
#line 636 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_72_91;
#line 636 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_73_92;
#line 636 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94;
#line 636 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_80_99;
#line 636 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_83_102;
#line 636 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_84_103;
#line 636 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_85_104;
#line 636 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_86_105;
#line 636 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_88_107;
#line 636 "modes.m"
          MR_Word check_hlds__modes__Body1_140;
#line 636 "modes.m"
          MR_Word check_hlds__modes__ArgFinalInsts1_141;
#line 636 "modes.m"
          MR_Word check_hlds__modes__ModeInfo1_142;
#line 636 "modes.m"
          MR_Word check_hlds__modes__ModeErrors1_143;
#line 663 "modes.m"
          MR_Word check_hlds__modes___ItemNumbers_54;

#line 653 "modes.m"
          {
#line 653 "modes.m"
            hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__HeadVars_48);
          }
#line 654 "modes.m"
          {
#line 654 "modes.m"
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__ArgModes0_49);
          }
#line 655 "modes.m"
          {
#line 655 "modes.m"
            hlds__hlds_pred__proc_info_arglives_3_p_0(check_hlds__modes__ProcInfo0_18, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, &check_hlds__modes__ArgLives0_50);
          }
#line 656 "modes.m"
          {
#line 656 "modes.m"
            hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__Body0_51);
          }
#line 662 "modes.m"
          {
#line 662 "modes.m"
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__modes__PredInfo0_17, &check_hlds__modes__ClausesInfo0_52);
          }
#line 663 "modes.m"
          {
#line 663 "modes.m"
            hlds__hlds_clauses__clauses_info_clauses_4_p_0(&check_hlds__modes__Clauses_53, &check_hlds__modes___ItemNumbers_54, check_hlds__modes__ClausesInfo0_52, &check_hlds__modes__ClausesInfo_55);
          }
#line 664 "modes.m"
          {
#line 664 "modes.m"
            hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__modes__ClausesInfo_55, check_hlds__modes__PredInfo0_17, &check_hlds__modes__STATE_VARIABLE_PredInfo_71_90);
          }
#line 668 "modes.m"
          if ((check_hlds__modes__Clauses_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 670 "modes.m"
            {
#line 670 "modes.m"
              hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__Context_58);
            }
#line 668 "modes.m"
          else
#line 666 "modes.m"
            {
#line 666 "modes.m"
              MR_Word check_hlds__modes__FirstClause_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Clauses_53, (MR_Integer) 0)));
#line 666 "modes.m"
              MR_Word check_hlds__modes__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Clauses_53, (MR_Integer) 1)));
#line 667 "modes.m"
              MR_Word check_hlds__modes__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_56, (MR_Integer) 0)));
#line 667 "modes.m"
              MR_Word check_hlds__modes__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_56, (MR_Integer) 1)));
#line 667 "modes.m"
              MR_Word check_hlds__modes__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_56, (MR_Integer) 2)));
#line 667 "modes.m"
              MR_Word check_hlds__modes__V_112_112;

#line 667 "modes.m"
              check_hlds__modes__Context_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_56, (MR_Integer) 3)));
#line 667 "modes.m"
              check_hlds__modes__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_56, (MR_Integer) 4)));
#line 666 "modes.m"
            }
#line 679 "modes.m"
          {
#line 679 "modes.m"
            check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__modes__ArgModes0_49, &check_hlds__modes__ArgInitialInsts_60);
          }
#line 680 "modes.m"
          {
#line 680 "modes.m"
            mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modes__HeadVars_48, check_hlds__modes__ArgInitialInsts_60, &check_hlds__modes__InstAL_61);
          }
#line 681 "modes.m"
          {
#line 681 "modes.m"
            check_hlds__modes__InstMap0_62 = hlds__instmap__instmap_from_assoc_list_1_f_0(check_hlds__modes__InstAL_61);
          }
#line 685 "modes.m"
          {
#line 685 "modes.m"
            check_hlds__modecheck_util__get_live_vars_3_p_0(check_hlds__modes__HeadVars_48, check_hlds__modes__ArgLives0_50, &check_hlds__modes__LiveVarsList_63);
          }
#line 686 "modes.m"
          {
#line 686 "modes.m"
            parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modes__LiveVarsList_63, &check_hlds__modes__LiveVars_64);
          }
#line 688 "modes.m"
          {
#line 688 "modes.m"
            check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__modes__ArgModes0_49, &check_hlds__modes__HeadInstVars_65);
          }
#line 691 "modes.m"
          {
#line 691 "modes.m"
            check_hlds__mode_info__mode_info_init_10_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, check_hlds__modes__Context_58, check_hlds__modes__LiveVars_64, check_hlds__modes__HeadInstVars_65, check_hlds__modes__InstMap0_62, check_hlds__modes__WhatToCheck_12, check_hlds__modes__MayChangeCalledProc_13, &check_hlds__modes__STATE_VARIABLE_ModeInfo_72_91);
          }
#line 694 "modes.m"
          {
#line 694 "modes.m"
            check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(check_hlds__modes__STATE_VARIABLE_Changed_0_25, check_hlds__modes__STATE_VARIABLE_ModeInfo_72_91, &check_hlds__modes__STATE_VARIABLE_ModeInfo_73_92);
          }
#line 696 "modes.m"
          {
#line 696 "modes.m"
            hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modes__STATE_VARIABLE_PredInfo_71_90, &check_hlds__modes__Markers_66);
          }
#line 697 "modes.m"
          {
#line 697 "modes.m"
            check_hlds__modes__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_66, (MR_Integer) 3);
          }
#line 697 "modes.m"
          if (check_hlds__modes__succeeded)
#line 698 "modes.m"
            check_hlds__modes__InferModes_67 = (MR_Integer) 1;
#line 697 "modes.m"
          else
#line 700 "modes.m"
            check_hlds__modes__InferModes_67 = (MR_Integer) 0;
#line 702 "modes.m"
          {
#line 702 "modes.m"
            check_hlds__modes__succeeded = hlds__hlds_pred__is_unify_pred_1_p_0(check_hlds__modes__STATE_VARIABLE_PredInfo_71_90);
          }
#line 702 "modes.m"
          if (check_hlds__modes__succeeded)
#line 703 "modes.m"
            check_hlds__modes__IsUnifyPred_68 = (MR_Integer) 1;
#line 702 "modes.m"
          else
#line 705 "modes.m"
            check_hlds__modes__IsUnifyPred_68 = (MR_Integer) 0;
#line 707 "modes.m"
          {
#line 707 "modes.m"
            check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__modes__ArgModes0_49, &check_hlds__modes__ArgFinalInsts0_69);
          }
#line 793 "modes.m"
          {
#line 793 "modes.m"
            check_hlds__modes__do_modecheck_proc_body_15_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__modes__WhatToCheck_12, check_hlds__modes__InferModes_67, check_hlds__modes__Markers_66, check_hlds__modes__IsUnifyPred_68, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, check_hlds__modes__Body0_51, &check_hlds__modes__Body1_140, check_hlds__modes__HeadVars_48, check_hlds__modes__InstMap0_62, check_hlds__modes__ArgFinalInsts0_69, &check_hlds__modes__ArgFinalInsts1_141, check_hlds__modes__STATE_VARIABLE_ModeInfo_73_92, &check_hlds__modes__ModeInfo1_142);
          }
#line 796 "modes.m"
          {
#line 796 "modes.m"
            check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__ModeInfo1_142, &check_hlds__modes__ModeErrors1_143);
          }
#line 802 "modes.m"
          if ((check_hlds__modes__ModeErrors1_143 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 798 "modes.m"
            {
#line 799 "modes.m"
              check_hlds__modes__Body_70 = check_hlds__modes__Body1_140;
#line 800 "modes.m"
              check_hlds__modes__ArgFinalInsts_71 = check_hlds__modes__ArgFinalInsts1_141;
#line 801 "modes.m"
              check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94 = check_hlds__modes__ModeInfo1_142;
#line 798 "modes.m"
            }
#line 802 "modes.m"
          else
#line 803 "modes.m"
            {
#line 803 "modes.m"
              MR_Word check_hlds__modes__HadFromGroundTerm_146;

#line 804 "modes.m"
              {
#line 804 "modes.m"
                check_hlds__mode_info__mode_info_get_had_from_ground_term_2_p_0(check_hlds__modes__ModeInfo1_142, &check_hlds__modes__HadFromGroundTerm_146);
              }
#line 823 "modes.m"
#line 823 "modes.m"
              switch (check_hlds__modes__HadFromGroundTerm_146) {
#line 823 "modes.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 823 "modes.m"
                case (MR_Integer) 1:
#line 824 "modes.m"
                  {
#line 827 "modes.m"
                    check_hlds__modes__Body_70 = check_hlds__modes__Body1_140;
#line 828 "modes.m"
                    check_hlds__modes__ArgFinalInsts_71 = check_hlds__modes__ArgFinalInsts1_141;
#line 829 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94 = check_hlds__modes__ModeInfo1_142;
#line 824 "modes.m"
                  }
#line 823 "modes.m"
                  break;
#line 823 "modes.m"
                case (MR_Integer) 0:
#line 806 "modes.m"
                  {
#line 806 "modes.m"
                    MR_Word check_hlds__modes__ModeInfo2_147;

#line 818 "modes.m"
                    {
#line 818 "modes.m"
                      check_hlds__mode_info__mode_info_set_make_ground_terms_unique_3_p_0((MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ModeInfo_73_92, &check_hlds__modes__ModeInfo2_147);
                    }
#line 820 "modes.m"
                    {
#line 820 "modes.m"
                      check_hlds__modes__do_modecheck_proc_body_15_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__modes__WhatToCheck_12, check_hlds__modes__InferModes_67, check_hlds__modes__Markers_66, check_hlds__modes__IsUnifyPred_68, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, check_hlds__modes__Body0_51, &check_hlds__modes__Body_70, check_hlds__modes__HeadVars_48, check_hlds__modes__InstMap0_62, check_hlds__modes__ArgFinalInsts0_69, &check_hlds__modes__ArgFinalInsts_71, check_hlds__modes__ModeInfo2_147, &check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94);
                    }
#line 806 "modes.m"
                  }
#line 823 "modes.m"
                  break;
#line 823 "modes.m"
              }
#line 803 "modes.m"
            }
#line 713 "modes.m"
          {
#line 713 "modes.m"
            check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94, &check_hlds__modes__ModeErrors_72);
          }
#line 721 "modes.m"
#line 721 "modes.m"
          switch (check_hlds__modes__InferModes_67) {
#line 721 "modes.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 721 "modes.m"
            case (MR_Integer) 0:
#line 722 "modes.m"
              {
#line 722 "modes.m"
                MR_Word check_hlds__modes__Origin_73;
#line 724 "modes.m"
                MR_Word check_hlds__modes__V_74_74;
#line 724 "modes.m"
                MR_String check_hlds__modes__V_75_75;
#line 724 "modes.m"
                MR_Word check_hlds__modes__V_76_76;

#line 723 "modes.m"
                {
#line 723 "modes.m"
                  hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__modes__STATE_VARIABLE_PredInfo_71_90, &check_hlds__modes__Origin_73);
                }
#line 724 "modes.m"
                check_hlds__modes__succeeded = ((((MR_tag((MR_Word) check_hlds__modes__Origin_73)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__Origin_73, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 724 "modes.m"
                if (check_hlds__modes__succeeded)
#line 724 "modes.m"
                  {
#line 724 "modes.m"
                    check_hlds__modes__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__Origin_73, (MR_Integer) 1)));
#line 724 "modes.m"
                    check_hlds__modes__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__modes__Origin_73, (MR_Integer) 2)));
#line 724 "modes.m"
                    check_hlds__modes__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__Origin_73, (MR_Integer) 3)));
#line 730 "modes.m"
                    *check_hlds__modes__Specs_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 724 "modes.m"
                  }
#line 724 "modes.m"
                else
#line 733 "modes.m"
                  {
#line 733 "modes.m"
                    MR_Word check_hlds__modes__TypeCtorInfo_98_117 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 733 "modes.m"
                    MR_Word check_hlds__modes__AllErrorSpecs_77;
#line 733 "modes.m"
                    MR_Word check_hlds__modes__ErrorSpecs_80;
#line 733 "modes.m"
                    MR_Word check_hlds__modes__StateVarWarningSpecs_81;
#line 733 "modes.m"
                    MR_Word check_hlds__modes__ModeWarnings_82;
#line 733 "modes.m"
                    MR_Word check_hlds__modes__WarningSpecs_83;
#line 733 "modes.m"
                    MR_Word check_hlds__modes__V_95_95;
#line 733 "modes.m"
                    MR_Word check_hlds__modes__V_97_97;
#line 733 "modes.m"
                    MR_Word check_hlds__modes__V_98_98;

#line 732 "modes.m"
                    {
#line 732 "modes.m"
                      check_hlds__modes__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 732 "modes.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modes__V_95_95, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[0]));
#line 732 "modes.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modes__V_95_95, 1) = ((MR_Box) (check_hlds__modes__maybe_modecheck_proc_9_p_0_1));
#line 732 "modes.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modes__V_95_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 732 "modes.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modes__V_95_95, 3) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94));
#line 732 "modes.m"
                    }
#line 732 "modes.m"
                    {
#line 732 "modes.m"
                      check_hlds__modes__AllErrorSpecs_77 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__modes__TypeCtorInfo_98_117, check_hlds__modes__V_95_95, check_hlds__modes__ModeErrors_72);
                    }
#line 744 "modes.m"
                    if ((check_hlds__modes__AllErrorSpecs_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 745 "modes.m"
                      {
#line 746 "modes.m"
                        check_hlds__modes__ErrorSpecs_80 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 749 "modes.m"
                        check_hlds__modes__StateVarWarningSpecs_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 745 "modes.m"
                      }
#line 744 "modes.m"
                    else
#line 740 "modes.m"
                      {
#line 740 "modes.m"
                        MR_Word check_hlds__modes__ErrorSpec_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__AllErrorSpecs_77, (MR_Integer) 0)));
#line 740 "modes.m"
                        MR_Word check_hlds__modes__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__AllErrorSpecs_77, (MR_Integer) 1)));

#line 741 "modes.m"
                        {
#line 741 "modes.m"
                          check_hlds__modes__ErrorSpecs_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "modes.m"
                          MR_hl_field(MR_mktag(1), check_hlds__modes__ErrorSpecs_80, 0) = ((MR_Box) (check_hlds__modes__ErrorSpec_78));
#line 741 "modes.m"
                          MR_hl_field(MR_mktag(1), check_hlds__modes__ErrorSpecs_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 741 "modes.m"
                        }
#line 742 "modes.m"
                        {
#line 742 "modes.m"
                          hlds__hlds_pred__proc_info_get_statevar_warnings_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__StateVarWarningSpecs_81);
                        }
#line 740 "modes.m"
                      }
#line 751 "modes.m"
                    {
#line 751 "modes.m"
                      check_hlds__mode_info__mode_info_get_warnings_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94, &check_hlds__modes__ModeWarnings_82);
                    }
#line 752 "modes.m"
                    {
#line 752 "modes.m"
                      check_hlds__modes__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 752 "modes.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modes__V_97_97, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[1]));
#line 752 "modes.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modes__V_97_97, 1) = ((MR_Box) (check_hlds__modes__maybe_modecheck_proc_9_p_0_2));
#line 752 "modes.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modes__V_97_97, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 752 "modes.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modes__V_97_97, 3) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94));
#line 752 "modes.m"
                    }
#line 752 "modes.m"
                    {
#line 752 "modes.m"
                      check_hlds__modes__WarningSpecs_83 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0, check_hlds__modes__TypeCtorInfo_98_117, check_hlds__modes__V_97_97, check_hlds__modes__ModeWarnings_82);
                    }
#line 754 "modes.m"
                    {
#line 754 "modes.m"
                      check_hlds__modes__V_98_98 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_98_117, check_hlds__modes__WarningSpecs_83, check_hlds__modes__StateVarWarningSpecs_81);
                    }
#line 754 "modes.m"
                    {
#line 754 "modes.m"
                      *check_hlds__modes__Specs_16 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_98_117, check_hlds__modes__ErrorSpecs_80, check_hlds__modes__V_98_98);
                    }
#line 733 "modes.m"
                  }
#line 722 "modes.m"
                check_hlds__modes__STATE_VARIABLE_ProcInfo_80_99 = check_hlds__modes__ProcInfo0_18;
#line 722 "modes.m"
              }
#line 721 "modes.m"
              break;
#line 721 "modes.m"
            case (MR_Integer) 1:
#line 715 "modes.m"
              {
#line 719 "modes.m"
                {
#line 719 "modes.m"
                  hlds__hlds_pred__proc_info_set_mode_errors_3_p_0(check_hlds__modes__ModeErrors_72, check_hlds__modes__ProcInfo0_18, &check_hlds__modes__STATE_VARIABLE_ProcInfo_80_99);
                }
#line 720 "modes.m"
                *check_hlds__modes__Specs_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 715 "modes.m"
              }
#line 721 "modes.m"
              break;
#line 721 "modes.m"
          }
#line 760 "modes.m"
          {
#line 760 "modes.m"
            parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(check_hlds__modes__ArgInitialInsts_60, check_hlds__modes__ArgFinalInsts_71, &check_hlds__modes__ArgModes_84);
          }
#line 761 "modes.m"
          {
#line 761 "modes.m"
            check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94, check_hlds__modes__STATE_VARIABLE_Changed_26);
          }
#line 762 "modes.m"
          {
#line 762 "modes.m"
            check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_27_27);
          }
#line 763 "modes.m"
          {
#line 763 "modes.m"
            check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94, &check_hlds__modes__VarSet_85);
          }
#line 766 "modes.m"
          {
#line 766 "modes.m"
            check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94, &check_hlds__modes__VarTypes_86);
          }
#line 767 "modes.m"
          {
#line 767 "modes.m"
            check_hlds__mode_info__mode_info_get_need_to_requantify_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_75_94, &check_hlds__modes__NeedToRequantify_87);
          }
#line 768 "modes.m"
          {
#line 768 "modes.m"
            hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__modes__Body_70, check_hlds__modes__STATE_VARIABLE_ProcInfo_80_99, &check_hlds__modes__STATE_VARIABLE_ProcInfo_83_102);
          }
#line 769 "modes.m"
          {
#line 769 "modes.m"
            hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__modes__VarSet_85, check_hlds__modes__STATE_VARIABLE_ProcInfo_83_102, &check_hlds__modes__STATE_VARIABLE_ProcInfo_84_103);
          }
#line 770 "modes.m"
          {
#line 770 "modes.m"
            hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__modes__VarTypes_86, check_hlds__modes__STATE_VARIABLE_ProcInfo_84_103, &check_hlds__modes__STATE_VARIABLE_ProcInfo_85_104);
          }
#line 771 "modes.m"
          {
#line 771 "modes.m"
            hlds__hlds_pred__proc_info_set_argmodes_3_p_0(check_hlds__modes__ArgModes_84, check_hlds__modes__STATE_VARIABLE_ProcInfo_85_104, &check_hlds__modes__STATE_VARIABLE_ProcInfo_86_105);
          }
#line 774 "modes.m"
#line 774 "modes.m"
          switch (check_hlds__modes__NeedToRequantify_87) {
#line 774 "modes.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 774 "modes.m"
            case (MR_Integer) 1:
#line 773 "modes.m"
              check_hlds__modes__STATE_VARIABLE_ProcInfo_88_107 = check_hlds__modes__STATE_VARIABLE_ProcInfo_86_105;
#line 774 "modes.m"
              break;
#line 774 "modes.m"
            case (MR_Integer) 0:
#line 775 "modes.m"
              {
#line 776 "modes.m"
                {
#line 776 "modes.m"
                  hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ProcInfo_86_105, &check_hlds__modes__STATE_VARIABLE_ProcInfo_88_107);
                }
#line 775 "modes.m"
              }
#line 774 "modes.m"
              break;
#line 774 "modes.m"
          }
#line 779 "modes.m"
          {
#line 779 "modes.m"
            hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__STATE_VARIABLE_PredInfo_71_90, &check_hlds__modes__ProcMap1_88);
          }
#line 780 "modes.m"
          {
#line 780 "modes.m"
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__modes__ProcId_10, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ProcInfo_88_107)), check_hlds__modes__ProcMap1_88, &check_hlds__modes__ProcMap_89);
          }
#line 781 "modes.m"
          {
#line 781 "modes.m"
            hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__modes__ProcMap_89, check_hlds__modes__STATE_VARIABLE_PredInfo_71_90, &check_hlds__modes__PredInfo_20);
          }
#line 640 "modes.m"
          {
#line 640 "modes.m"
            hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_27_27, &check_hlds__modes__Preds1_21);
          }
#line 641 "modes.m"
          {
#line 641 "modes.m"
            mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (check_hlds__modes__PredId_11)), ((MR_Box) (check_hlds__modes__PredInfo_20)), check_hlds__modes__Preds1_21, &check_hlds__modes__Preds_22);
          }
#line 642 "modes.m"
          {
#line 642 "modes.m"
            hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__Preds_22, check_hlds__modes__STATE_VARIABLE_ModuleInfo_27_27, check_hlds__modes__STATE_VARIABLE_ModuleInfo_24);
          }
#line 636 "modes.m"
        }
#line 635 "modes.m"
        break;
#line 635 "modes.m"
      case (MR_Integer) 0:
#line 633 "modes.m"
        {
#line 634 "modes.m"
          *check_hlds__modes__Specs_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 633 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_24 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23;
#line 633 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Changed_26 = check_hlds__modes__STATE_VARIABLE_Changed_0_25;
#line 633 "modes.m"
        }
#line 635 "modes.m"
        break;
#line 635 "modes.m"
    }
#line 628 "modes.m"
  }
#line 623 "modes.m"
}

#line 596 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_procs_10_p_0(
#line 596 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 596 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 596 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_3,
#line 596 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_4,
#line 596 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5,
#line 596 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_6,
#line 596 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_7,
#line 596 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_8,
#line 596 "modes.m"
  MR_Word check_hlds__modes__HeadVar__9_9,
#line 596 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__10_10)
#line 596 "modes.m"
{
#line 601 "modes.m"
  while (MR_TRUE)
#line 601 "modes.m"
    {
#line 601 "modes.m"
      /* tailcall optimized into a loop */
#line 601 "modes.m"
      {
#line 601 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 601 "modes.m"
        if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 601 "modes.m"
          {
#line 601 "modes.m"
            *check_hlds__modes__HeadVar__10_10 = check_hlds__modes__HeadVar__9_9;
#line 601 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Changed_8 = check_hlds__modes__STATE_VARIABLE_Changed_0_7;
#line 601 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_ModuleInfo_6 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5;
#line 601 "modes.m"
          }
#line 601 "modes.m"
        else
#line 603 "modes.m"
          {
#line 603 "modes.m"
            MR_Integer check_hlds__modes__ProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 603 "modes.m"
            MR_Word check_hlds__modes__ProcIds_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 603 "modes.m"
            MR_Word check_hlds__modes__ProcSpecs_31;
#line 603 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_38_38;
#line 603 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Changed_39_39;
#line 603 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_SpecsAcc_40_40;

#line 605 "modes.m"
            {
#line 605 "modes.m"
              check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_23, check_hlds__modes__HeadVar__2_2, check_hlds__modes__WhatToCheck_3, check_hlds__modes__MayChangeCalledProc_4, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_38_38, check_hlds__modes__STATE_VARIABLE_Changed_0_7, &check_hlds__modes__STATE_VARIABLE_Changed_39_39, &check_hlds__modes__ProcSpecs_31);
            }
#line 607 "modes.m"
            {
#line 607 "modes.m"
              parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0(check_hlds__modes__ProcSpecs_31, check_hlds__modes__HeadVar__9_9, &check_hlds__modes__STATE_VARIABLE_SpecsAcc_40_40);
            }
#line 609 "modes.m"
            /* direct tailcall eliminated */
#line 609 "modes.m"
            {
#line 609 "modes.m"
              MR_Word check_hlds__modes__HeadVar__1__tmp_copy_1 = check_hlds__modes__ProcIds_24;
#line 609 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_38_38;
#line 609 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_7 = check_hlds__modes__STATE_VARIABLE_Changed_39_39;
#line 609 "modes.m"
              MR_Word check_hlds__modes__HeadVar__9__tmp_copy_9 = check_hlds__modes__STATE_VARIABLE_SpecsAcc_40_40;

#line 609 "modes.m"
              check_hlds__modes__HeadVar__9_9 = check_hlds__modes__HeadVar__9__tmp_copy_9;
#line 609 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Changed_0_7 = check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_7;
#line 609 "modes.m"
              check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5;
#line 609 "modes.m"
              check_hlds__modes__HeadVar__1_1 = check_hlds__modes__HeadVar__1__tmp_copy_1;
#line 609 "modes.m"
            }
#line 609 "modes.m"
            continue;
#line 603 "modes.m"
          }
#line 601 "modes.m"
      }
#line 601 "modes.m"
      break;
#line 601 "modes.m"
    }
#line 596 "modes.m"
}

#line 571 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_1(
#line 571 "modes.m"
  void * check_hlds__modes__env_ptr_arg)
#line 571 "modes.m"
{
#line 571 "modes.m"
  {
#line 571 "modes.m"
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * check_hlds__modes__env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) check_hlds__modes__env_ptr_arg;

#line 571 "modes.m"
    MR_builtin_longjmp((check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__commit_0, 1);
#line 571 "modes.m"
  }
#line 571 "modes.m"
}

#line 571 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_3(
#line 571 "modes.m"
  void * check_hlds__modes__env_ptr_arg)
#line 571 "modes.m"
{
#line 571 "modes.m"
  {
#line 571 "modes.m"
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * check_hlds__modes__env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) check_hlds__modes__env_ptr_arg;

#line 571 "modes.m"
    (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0___ProcId_73 = ((MR_Integer) (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv2__ProcId_73);
#line 571 "modes.m"
    (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcInfo_81 = ((MR_Word) (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv1_ProcInfo_81);
#line 571 "modes.m"
    {
#line 571 "modes.m"
      check_hlds__modes__maybe_modecheck_pred_9_p_0_2(check_hlds__modes__env_ptr);
    }
#line 571 "modes.m"
  }
#line 571 "modes.m"
}

#line 571 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_2(
#line 571 "modes.m"
  void * check_hlds__modes__env_ptr_arg)
#line 571 "modes.m"
{
#line 571 "modes.m"
  {
#line 571 "modes.m"
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * check_hlds__modes__env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) check_hlds__modes__env_ptr_arg;

#line 571 "modes.m"
    {
#line 572 "modes.m"
      MR_Word check_hlds__modes__V_89_89;

#line 572 "modes.m"
      {
#line 572 "modes.m"
        hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcInfo_81, &(check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__V_84_84);
      }
#line 572 "modes.m"
      (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__V_84_84)) == (MR_mktag((MR_Integer) 1)));
#line 572 "modes.m"
      if ((check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
#line 572 "modes.m"
        {
#line 572 "modes.m"
          check_hlds__modes__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__V_84_84, (MR_Integer) 0)));
#line 572 "modes.m"
          {
#line 572 "modes.m"
            check_hlds__modes__maybe_modecheck_pred_9_p_0_1(check_hlds__modes__env_ptr);
          }
#line 572 "modes.m"
        }
#line 571 "modes.m"
    }
#line 571 "modes.m"
  }
#line 571 "modes.m"
}

#line 571 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_4(
#line 571 "modes.m"
  void * check_hlds__modes__env_ptr_arg)
#line 571 "modes.m"
{
#line 571 "modes.m"
  {
#line 571 "modes.m"
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * check_hlds__modes__env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) check_hlds__modes__env_ptr_arg;

#line 571 "modes.m"
    if (MR_builtin_setjmp((check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__commit_0) == 0)
#line 571 "modes.m"
      {
#line 571 "modes.m"
        {
#line 571 "modes.m"
          {
#line 571 "modes.m"
            mercury__map__member_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcTable_71, &(check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv2__ProcId_73, &(check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv1_ProcInfo_81, check_hlds__modes__maybe_modecheck_pred_9_p_0_3, check_hlds__modes__env_ptr);
          }
#line 571 "modes.m"
        }
#line 571 "modes.m"
        (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = MR_FALSE;
#line 571 "modes.m"
      }
#line 571 "modes.m"
    else
#line 571 "modes.m"
      (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = MR_TRUE;
#line 571 "modes.m"
  }
#line 571 "modes.m"
}

#line 494 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0(
#line 494 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_10,
#line 494 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_11,
#line 494 "modes.m"
  MR_Word check_hlds__modes__PredId_12,
#line 494 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25,
#line 494 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_26,
#line 494 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_27,
#line 494 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_28,
#line 494 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_29,
#line 494 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_30)
#line 494 "modes.m"
{
#line 494 "modes.m"
  {
#line 494 "modes.m"
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s check_hlds__modes__env;

#line 499 "modes.m"
    {
#line 499 "modes.m"
      MR_Word check_hlds__modes__Preds0_16;
#line 499 "modes.m"
      MR_Word check_hlds__modes__PredInfo0_17;
#line 501 "modes.m"
      MR_Box check_hlds__modes__conv0_PredInfo0_17;

#line 500 "modes.m"
      {
#line 500 "modes.m"
        hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25, &check_hlds__modes__Preds0_16);
      }
#line 501 "modes.m"
      {
#line 501 "modes.m"
        mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__modes__Preds0_16, ((MR_Box) (check_hlds__modes__PredId_12)), &check_hlds__modes__conv0_PredInfo0_17);
      }
#line 501 "modes.m"
      check_hlds__modes__PredInfo0_17 = ((MR_Word) check_hlds__modes__conv0_PredInfo0_17);
#line 479 "modes.m"
      {
#line 479 "modes.m"
        (check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__modes__PredInfo0_17);
      }
#line 482 "modes.m"
      if (!((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded))
#line 482 "modes.m"
        {
#line 480 "modes.m"
          {
#line 480 "modes.m"
            (check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(check_hlds__modes__PredInfo0_17);
          }
#line 482 "modes.m"
          if (!((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded))
#line 485 "modes.m"
            {
#line 485 "modes.m"
              MR_Word check_hlds__modes__PredMarkers_46;

#line 485 "modes.m"
              {
#line 485 "modes.m"
                hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modes__PredInfo0_17, &check_hlds__modes__PredMarkers_46);
              }
#line 486 "modes.m"
              {
#line 486 "modes.m"
                (check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__PredMarkers_46, (MR_Integer) 9);
              }
#line 485 "modes.m"
            }
#line 482 "modes.m"
        }
#line 6915 "check_hlds.modes.c"
      if ((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
#line 6917 "check_hlds.modes.c"
        {
#line 504 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_26 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25;
#line 504 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Changed_28 = check_hlds__modes__STATE_VARIABLE_Changed_0_27;
#line 504 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Specs_30 = check_hlds__modes__STATE_VARIABLE_Specs_0_29;
#line 6925 "check_hlds.modes.c"
        }
#line 6927 "check_hlds.modes.c"
      else
#line 6929 "check_hlds.modes.c"
        {
#line 6931 "check_hlds.modes.c"
          MR_Word check_hlds__modes__TypeCtorInfo_43_43;
#line 6933 "check_hlds.modes.c"
          MR_Word check_hlds__modes__ThisPredDeclSpecs_20;
#line 6935 "check_hlds.modes.c"
          MR_Word check_hlds__modes__ThisPredProcSpecs_21;
#line 6937 "check_hlds.modes.c"
          MR_Word check_hlds__modes__Globals_22;
#line 6939 "check_hlds.modes.c"
          MR_Word check_hlds__modes__ContainsError_23;
#line 6941 "check_hlds.modes.c"
          MR_Word check_hlds__modes__Statistics_24;
#line 6943 "check_hlds.modes.c"
          MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33;
#line 6945 "check_hlds.modes.c"
          MR_Word check_hlds__modes__V_36_36;
#line 6947 "check_hlds.modes.c"
          MR_Word check_hlds__modes__ProcIds_75;
#line 6949 "check_hlds.modes.c"
          MR_Word check_hlds__modes__SpecsAcc_76;
#line 6951 "check_hlds.modes.c"
          MR_Word check_hlds__modes__V_80_80;
#line 507 "modes.m"
          MR_Word check_hlds__modes__Markers_55;
#line 507 "modes.m"
          MR_String check_hlds__modes__Msg_56;

#line 537 "modes.m"
          {
#line 537 "modes.m"
            hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modes__PredInfo0_17, &check_hlds__modes__Markers_55);
          }
#line 538 "modes.m"
          {
#line 538 "modes.m"
            (check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_55, (MR_Integer) 3);
          }
#line 538 "modes.m"
          if ((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
#line 542 "modes.m"
#line 542 "modes.m"
            switch (check_hlds__modes__WhatToCheck_10) {
#line 542 "modes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 542 "modes.m"
              case (MR_Integer) 0:
#line 541 "modes.m"
                check_hlds__modes__Msg_56 = (MR_String) "% Mode-analysing ";
#line 542 "modes.m"
                break;
#line 542 "modes.m"
              case (MR_Integer) 1:
#line 544 "modes.m"
                check_hlds__modes__Msg_56 = (MR_String) "% Unique-mode-analysing ";
#line 542 "modes.m"
                break;
#line 542 "modes.m"
            }
#line 538 "modes.m"
          else
#line 550 "modes.m"
#line 550 "modes.m"
            switch (check_hlds__modes__WhatToCheck_10) {
#line 550 "modes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 550 "modes.m"
              case (MR_Integer) 0:
#line 549 "modes.m"
                check_hlds__modes__Msg_56 = (MR_String) "% Mode-checking ";
#line 550 "modes.m"
                break;
#line 550 "modes.m"
              case (MR_Integer) 1:
#line 552 "modes.m"
                check_hlds__modes__Msg_56 = (MR_String) "% Unique-mode-checking ";
#line 550 "modes.m"
                break;
#line 550 "modes.m"
            }
#line 555 "modes.m"
          {
#line 555 "modes.m"
            hlds__passes_aux__write_pred_progress_message_5_p_0(check_hlds__modes__Msg_56, check_hlds__modes__PredId_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25);
          }
#line 582 "modes.m"
#line 582 "modes.m"
          switch (check_hlds__modes__WhatToCheck_10) {
#line 582 "modes.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 582 "modes.m"
            case (MR_Integer) 0:
#line 567 "modes.m"
              {
#line 568 "modes.m"
                {
#line 568 "modes.m"
                  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__PredInfo0_17, &(check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcTable_71);
                }
#line 571 "modes.m"
                {
#line 571 "modes.m"
                  check_hlds__modes__maybe_modecheck_pred_9_p_0_4(&check_hlds__modes__env);
                }
#line 569 "modes.m"
                if ((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
#line 576 "modes.m"
                  check_hlds__modes__ThisPredDeclSpecs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 569 "modes.m"
                else
#line 579 "modes.m"
                  {
#line 579 "modes.m"
                    check_hlds__modes__ThisPredDeclSpecs_20 = check_hlds__mode_errors__maybe_report_error_no_modes_3_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__modes__PredId_12, check_hlds__modes__PredInfo0_17);
                  }
#line 567 "modes.m"
              }
#line 582 "modes.m"
              break;
#line 582 "modes.m"
            case (MR_Integer) 1:
#line 584 "modes.m"
              check_hlds__modes__ThisPredDeclSpecs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 582 "modes.m"
              break;
#line 582 "modes.m"
          }
#line 589 "modes.m"
          {
#line 589 "modes.m"
            check_hlds__modes__ProcIds_75 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__modes__PredInfo0_17);
          }
#line 591 "modes.m"
          {
#line 591 "modes.m"
            check_hlds__modes__V_80_80 = parse_tree__error_util__init_error_spec_accumulator_0_f_0();
          }
#line 590 "modes.m"
          {
#line 590 "modes.m"
            check_hlds__modes__modecheck_procs_10_p_0(check_hlds__modes__ProcIds_75, check_hlds__modes__PredId_12, check_hlds__modes__WhatToCheck_10, check_hlds__modes__MayChangeCalledProc_11, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__modes__STATE_VARIABLE_Changed_0_27, check_hlds__modes__STATE_VARIABLE_Changed_28, check_hlds__modes__V_80_80, &check_hlds__modes__SpecsAcc_76);
          }
#line 592 "modes.m"
          {
#line 592 "modes.m"
            check_hlds__modes__ThisPredProcSpecs_21 = parse_tree__error_util__error_spec_accumulator_to_list_1_f_0(check_hlds__modes__SpecsAcc_76);
          }
#line 7077 "check_hlds.modes.c"
          check_hlds__modes__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 514 "modes.m"
          {
#line 514 "modes.m"
            check_hlds__modes__V_36_36 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_43_43, check_hlds__modes__ThisPredProcSpecs_21, check_hlds__modes__STATE_VARIABLE_Specs_0_29);
          }
#line 514 "modes.m"
          {
#line 514 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Specs_30 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_43_43, check_hlds__modes__ThisPredDeclSpecs_20, check_hlds__modes__V_36_36);
          }
#line 518 "modes.m"
          {
#line 518 "modes.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33, &check_hlds__modes__Globals_22);
          }
#line 519 "modes.m"
          {
#line 519 "modes.m"
            check_hlds__modes__ContainsError_23 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__modes__Globals_22, check_hlds__modes__ThisPredProcSpecs_21);
          }
#line 523 "modes.m"
#line 523 "modes.m"
          switch (check_hlds__modes__ContainsError_23) {
#line 523 "modes.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 523 "modes.m"
            case (MR_Integer) 0:
#line 524 "modes.m"
              *check_hlds__modes__STATE_VARIABLE_ModuleInfo_26 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33;
#line 523 "modes.m"
              break;
#line 523 "modes.m"
            case (MR_Integer) 1:
#line 522 "modes.m"
              {
#line 522 "modes.m"
                hlds__hlds_module__module_info_make_pred_id_invalid_3_p_0(check_hlds__modes__PredId_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__modes__STATE_VARIABLE_ModuleInfo_26);
              }
#line 523 "modes.m"
              break;
#line 523 "modes.m"
          }
#line 527 "modes.m"
          {
#line 527 "modes.m"
            libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_22, (MR_Integer) 57, &check_hlds__modes__Statistics_24);
          }
#line 529 "modes.m"
          {
#line 529 "modes.m"
            libs__file_util__maybe_report_stats_3_p_0(check_hlds__modes__Statistics_24);
          }
#line 7131 "check_hlds.modes.c"
        }
#line 499 "modes.m"
    }
#line 494 "modes.m"
  }
#line 494 "modes.m"
}

#line 463 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_proc_body_4_p_0(
#line 463 "modes.m"
  MR_Word check_hlds__modes__OldProcTable_5,
#line 463 "modes.m"
  MR_Integer check_hlds__modes__ProcId_6,
#line 463 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ProcTable_0_12,
#line 463 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ProcTable_13)
#line 463 "modes.m"
{
#line 466 "modes.m"
  {
#line 466 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 466 "modes.m"
    MR_Word check_hlds__modes__TypeCtorInfo_16_16 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 466 "modes.m"
    MR_Word check_hlds__modes__OldProcInfo_8;
#line 466 "modes.m"
    MR_Word check_hlds__modes__OldProcBody_9;
#line 466 "modes.m"
    MR_Word check_hlds__modes__ProcInfo0_10;
#line 466 "modes.m"
    MR_Word check_hlds__modes__ProcInfo_11;
#line 467 "modes.m"
    MR_Box check_hlds__modes__conv0_OldProcInfo_8;
#line 469 "modes.m"
    MR_Box check_hlds__modes__conv1_ProcInfo0_10;

#line 467 "modes.m"
    {
#line 467 "modes.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__modes__TypeCtorInfo_16_16, check_hlds__modes__OldProcTable_5, check_hlds__modes__ProcId_6, &check_hlds__modes__conv0_OldProcInfo_8);
    }
#line 467 "modes.m"
    check_hlds__modes__OldProcInfo_8 = ((MR_Word) check_hlds__modes__conv0_OldProcInfo_8);
#line 468 "modes.m"
    {
#line 468 "modes.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__modes__OldProcInfo_8, &check_hlds__modes__OldProcBody_9);
    }
#line 469 "modes.m"
    {
#line 469 "modes.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__modes__TypeCtorInfo_16_16, check_hlds__modes__STATE_VARIABLE_ProcTable_0_12, check_hlds__modes__ProcId_6, &check_hlds__modes__conv1_ProcInfo0_10);
    }
#line 469 "modes.m"
    check_hlds__modes__ProcInfo0_10 = ((MR_Word) check_hlds__modes__conv1_ProcInfo0_10);
#line 470 "modes.m"
    {
#line 470 "modes.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__modes__OldProcBody_9, check_hlds__modes__ProcInfo0_10, &check_hlds__modes__ProcInfo_11);
    }
#line 471 "modes.m"
    {
#line 471 "modes.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__modes__TypeCtorInfo_16_16, check_hlds__modes__ProcId_6, ((MR_Box) (check_hlds__modes__ProcInfo_11)), check_hlds__modes__STATE_VARIABLE_ProcTable_0_12, check_hlds__modes__STATE_VARIABLE_ProcTable_13);
    }
#line 466 "modes.m"
  }
#line 463 "modes.m"
}

#line 453 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0_1(
#line 453 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 453 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 453 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 453 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3)
#line 453 "modes.m"
{
#line 453 "modes.m"
  {
#line 453 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 453 "modes.m"
    MR_Word check_hlds__modes__conv2_STATE_VARIABLE_ProcTable_13;

#line 453 "modes.m"
    {
#line 453 "modes.m"
      check_hlds__modes__copy_proc_body_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Integer) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2), &check_hlds__modes__conv2_STATE_VARIABLE_ProcTable_13);
    }
#line 453 "modes.m"
    *check_hlds__modes__wrapper_arg_3 = ((MR_Box) (check_hlds__modes__conv2_STATE_VARIABLE_ProcTable_13));
#line 453 "modes.m"
  }
#line 453 "modes.m"
}

#line 435 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0(
#line 435 "modes.m"
  MR_Word check_hlds__modes__OldPredTable_5,
#line 435 "modes.m"
  MR_Word check_hlds__modes__PredId_6,
#line 435 "modes.m"
  MR_Word check_hlds__modes__PredTable0_7,
#line 435 "modes.m"
  MR_Word * check_hlds__modes__PredTable_8)
#line 435 "modes.m"
{
#line 438 "modes.m"
  {
#line 438 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 438 "modes.m"
    MR_Word check_hlds__modes__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 438 "modes.m"
    MR_Word check_hlds__modes__TypeCtorInfo_20_20 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 438 "modes.m"
    MR_Word check_hlds__modes__PredInfo0_9;
#line 439 "modes.m"
    MR_Box check_hlds__modes__conv0_PredInfo0_9;
#line 444 "modes.m"
    MR_Word check_hlds__modes__Markers_10;

#line 439 "modes.m"
    {
#line 439 "modes.m"
      mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_19_19, check_hlds__modes__TypeCtorInfo_20_20, check_hlds__modes__PredTable0_7, ((MR_Box) (check_hlds__modes__PredId_6)), &check_hlds__modes__conv0_PredInfo0_9);
    }
#line 439 "modes.m"
    check_hlds__modes__PredInfo0_9 = ((MR_Word) check_hlds__modes__conv0_PredInfo0_9);
#line 444 "modes.m"
    {
#line 444 "modes.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modes__PredInfo0_9, &check_hlds__modes__Markers_10);
    }
#line 445 "modes.m"
    {
#line 445 "modes.m"
      check_hlds__modes__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_10, (MR_Integer) 9);
    }
#line 440 "modes.m"
    if (check_hlds__modes__succeeded)
#line 447 "modes.m"
      *check_hlds__modes__PredTable_8 = check_hlds__modes__PredTable0_7;
#line 440 "modes.m"
    else
#line 449 "modes.m"
      {
#line 449 "modes.m"
        MR_Word check_hlds__modes__TypeCtorInfo_21_21;
#line 449 "modes.m"
        MR_Word check_hlds__modes__ProcTable0_11;
#line 449 "modes.m"
        MR_Word check_hlds__modes__OldPredInfo_12;
#line 449 "modes.m"
        MR_Word check_hlds__modes__OldProcTable_13;
#line 449 "modes.m"
        MR_Word check_hlds__modes__OldProcIds_14;
#line 449 "modes.m"
        MR_Word check_hlds__modes__ProcTable_15;
#line 449 "modes.m"
        MR_Word check_hlds__modes__PredInfo_16;
#line 449 "modes.m"
        MR_Word check_hlds__modes__V_18_18;
#line 450 "modes.m"
        MR_Box check_hlds__modes__conv1_OldPredInfo_12;
#line 453 "modes.m"
        MR_Box check_hlds__modes__conv3_ProcTable_15;

#line 449 "modes.m"
        {
#line 449 "modes.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__PredInfo0_9, &check_hlds__modes__ProcTable0_11);
        }
#line 450 "modes.m"
        {
#line 450 "modes.m"
          mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_19_19, check_hlds__modes__TypeCtorInfo_20_20, check_hlds__modes__OldPredTable_5, ((MR_Box) (check_hlds__modes__PredId_6)), &check_hlds__modes__conv1_OldPredInfo_12);
        }
#line 450 "modes.m"
        check_hlds__modes__OldPredInfo_12 = ((MR_Word) check_hlds__modes__conv1_OldPredInfo_12);
#line 451 "modes.m"
        {
#line 451 "modes.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__OldPredInfo_12, &check_hlds__modes__OldProcTable_13);
        }
#line 7329 "check_hlds.modes.c"
        check_hlds__modes__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "modes.m"
        {
#line 452 "modes.m"
          mercury__map__keys_2_p_0(check_hlds__modes__TypeCtorInfo_21_21, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__modes__OldProcTable_13, &check_hlds__modes__OldProcIds_14);
        }
#line 453 "modes.m"
        {
#line 453 "modes.m"
          check_hlds__modes__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 453 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_18_18, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_5[1]));
#line 453 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_18_18, 1) = ((MR_Box) (check_hlds__modes__copy_pred_body_4_p_0_1));
#line 453 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 453 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_18_18, 3) = ((MR_Box) (check_hlds__modes__OldProcTable_13));
#line 453 "modes.m"
        }
#line 453 "modes.m"
        {
#line 453 "modes.m"
          mercury__list__foldl_4_p_0(check_hlds__modes__TypeCtorInfo_21_21, (MR_Word) &check_hlds__modes_scalar_common_2[1], check_hlds__modes__V_18_18, check_hlds__modes__OldProcIds_14, ((MR_Box) (check_hlds__modes__ProcTable0_11)), &check_hlds__modes__conv3_ProcTable_15);
        }
#line 453 "modes.m"
        check_hlds__modes__ProcTable_15 = ((MR_Word) check_hlds__modes__conv3_ProcTable_15);
#line 455 "modes.m"
        {
#line 455 "modes.m"
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__modes__ProcTable_15, check_hlds__modes__PredInfo0_9, &check_hlds__modes__PredInfo_16);
        }
#line 456 "modes.m"
        {
#line 456 "modes.m"
          mercury__map__set_4_p_0(check_hlds__modes__TypeCtorInfo_19_19, check_hlds__modes__TypeCtorInfo_20_20, ((MR_Box) (check_hlds__modes__PredId_6)), ((MR_Box) (check_hlds__modes__PredInfo_16)), check_hlds__modes__PredTable0_7, check_hlds__modes__PredTable_8);
        }
#line 449 "modes.m"
      }
#line 438 "modes.m"
  }
#line 435 "modes.m"
}

#line 427 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_2(
#line 427 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 427 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 427 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 427 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3)
#line 427 "modes.m"
{
#line 427 "modes.m"
  {
#line 427 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 427 "modes.m"
    MR_Word check_hlds__modes__conv6_PredTable_8;

#line 427 "modes.m"
    {
#line 427 "modes.m"
      check_hlds__modes__copy_pred_body_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2), &check_hlds__modes__conv6_PredTable_8);
    }
#line 427 "modes.m"
    *check_hlds__modes__wrapper_arg_3 = ((MR_Box) (check_hlds__modes__conv6_PredTable_8));
#line 427 "modes.m"
  }
#line 427 "modes.m"
}

#line 324 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_1(
#line 324 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 324 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 324 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 324 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3,
#line 324 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_4,
#line 324 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_5,
#line 324 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_6,
#line 324 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_7)
#line 324 "modes.m"
{
#line 324 "modes.m"
  {
#line 324 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 324 "modes.m"
    MR_Word check_hlds__modes__conv2_STATE_VARIABLE_ModuleInfo_26;
#line 324 "modes.m"
    MR_Word check_hlds__modes__conv1_STATE_VARIABLE_Changed_28;
#line 324 "modes.m"
    MR_Word check_hlds__modes__conv0_STATE_VARIABLE_Specs_30;

#line 324 "modes.m"
    {
#line 324 "modes.m"
      check_hlds__modes__maybe_modecheck_pred_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2), &check_hlds__modes__conv2_STATE_VARIABLE_ModuleInfo_26, ((MR_Word) check_hlds__modes__wrapper_arg_4), &check_hlds__modes__conv1_STATE_VARIABLE_Changed_28, ((MR_Word) check_hlds__modes__wrapper_arg_6), &check_hlds__modes__conv0_STATE_VARIABLE_Specs_30);
    }
#line 324 "modes.m"
    *check_hlds__modes__wrapper_arg_3 = ((MR_Box) (check_hlds__modes__conv2_STATE_VARIABLE_ModuleInfo_26));
#line 324 "modes.m"
    *check_hlds__modes__wrapper_arg_5 = ((MR_Box) (check_hlds__modes__conv1_STATE_VARIABLE_Changed_28));
#line 324 "modes.m"
    *check_hlds__modes__wrapper_arg_7 = ((MR_Box) (check_hlds__modes__conv0_STATE_VARIABLE_Specs_30));
#line 324 "modes.m"
  }
#line 324 "modes.m"
}

#line 311 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0(
#line 311 "modes.m"
  MR_Word check_hlds__modes__PredIds_9,
#line 311 "modes.m"
  MR_Integer check_hlds__modes__MaxIterations_10,
#line 311 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_11,
#line 311 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_12,
#line 311 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31,
#line 311 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_32,
#line 311 "modes.m"
  MR_Word * check_hlds__modes__SafeToContinue_14,
#line 311 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_33)
#line 311 "modes.m"
{
#line 317 "modes.m"
  while (MR_TRUE)
#line 317 "modes.m"
    {
#line 317 "modes.m"
      /* tailcall optimized into a loop */
#line 317 "modes.m"
      {
#line 317 "modes.m"
        MR_bool check_hlds__modes__succeeded;
#line 317 "modes.m"
        MR_Word check_hlds__modes__OldPredTable0_16;
#line 317 "modes.m"
        MR_Word check_hlds__modes__Changed1_17;
#line 317 "modes.m"
        MR_Word check_hlds__modes__OldPredTable_18;
#line 317 "modes.m"
        MR_Word check_hlds__modes__Changed2_19;
#line 317 "modes.m"
        MR_Word check_hlds__modes__QueuedSpecs_20;
#line 317 "modes.m"
        MR_Word check_hlds__modes__Changed_21;
#line 317 "modes.m"
        MR_Word check_hlds__modes__Globals_22;
#line 317 "modes.m"
        MR_Word check_hlds__modes__ErrorsSoFar_23;
#line 317 "modes.m"
        MR_Word check_hlds__modes__V_34_34;
#line 317 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35;
#line 317 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_Specs_38_38;
#line 317 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39;
#line 317 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_Specs_40_40;
#line 324 "modes.m"
        MR_Box check_hlds__modes__conv5_STATE_VARIABLE_ModuleInfo_35_35;
#line 324 "modes.m"
        MR_Box check_hlds__modes__conv4_Changed1_17;
#line 324 "modes.m"
        MR_Box check_hlds__modes__conv3_STATE_VARIABLE_Specs_38_38;

#line 320 "modes.m"
        {
#line 320 "modes.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31, &check_hlds__modes__OldPredTable0_16);
        }
#line 324 "modes.m"
        {
#line 324 "modes.m"
          check_hlds__modes__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 324 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_4[0]));
#line 324 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 1) = ((MR_Box) (check_hlds__modes__modecheck_to_fixpoint_8_p_0_1));
#line 324 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 324 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 3) = ((MR_Box) (check_hlds__modes__WhatToCheck_11));
#line 324 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 4) = ((MR_Box) (check_hlds__modes__MayChangeCalledProc_12));
#line 324 "modes.m"
        }
#line 324 "modes.m"
        {
#line 324 "modes.m"
          mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &check_hlds__modes_scalar_common_1[0], check_hlds__modes__V_34_34, check_hlds__modes__PredIds_9, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31)), &check_hlds__modes__conv5_STATE_VARIABLE_ModuleInfo_35_35, ((MR_Box) ((MR_Integer) 0)), &check_hlds__modes__conv4_Changed1_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__modes__conv3_STATE_VARIABLE_Specs_38_38);
        }
#line 324 "modes.m"
        check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35 = ((MR_Word) check_hlds__modes__conv5_STATE_VARIABLE_ModuleInfo_35_35);
#line 324 "modes.m"
        check_hlds__modes__Changed1_17 = ((MR_Word) check_hlds__modes__conv4_Changed1_17);
#line 324 "modes.m"
        check_hlds__modes__STATE_VARIABLE_Specs_38_38 = ((MR_Word) check_hlds__modes__conv3_STATE_VARIABLE_Specs_38_38);
#line 329 "modes.m"
        {
#line 329 "modes.m"
          check_hlds__modes__modecheck_queued_procs_7_p_0(check_hlds__modes__WhatToCheck_11, check_hlds__modes__OldPredTable0_16, &check_hlds__modes__OldPredTable_18, check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__Changed2_19, &check_hlds__modes__QueuedSpecs_20);
        }
#line 331 "modes.m"
        {
#line 331 "modes.m"
          check_hlds__modes__STATE_VARIABLE_Specs_40_40 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__QueuedSpecs_20, check_hlds__modes__STATE_VARIABLE_Specs_38_38);
        }
#line 332 "modes.m"
        {
#line 332 "modes.m"
          mercury__bool__or_3_p_0(check_hlds__modes__Changed1_17, check_hlds__modes__Changed2_19, &check_hlds__modes__Changed_21);
        }
#line 334 "modes.m"
        {
#line 334 "modes.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__Globals_22);
        }
#line 335 "modes.m"
        {
#line 335 "modes.m"
          check_hlds__modes__ErrorsSoFar_23 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__modes__Globals_22, check_hlds__modes__STATE_VARIABLE_Specs_40_40);
        }
#line 340 "modes.m"
#line 340 "modes.m"
        switch (check_hlds__modes__Changed_21) {
#line 340 "modes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 340 "modes.m"
          case (MR_Integer) 0:
#line 337 "modes.m"
            {
#line 339 "modes.m"
              *check_hlds__modes__SafeToContinue_14 = (MR_Integer) 0;
#line 337 "modes.m"
              *check_hlds__modes__STATE_VARIABLE_ModuleInfo_32 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39;
#line 337 "modes.m"
              *check_hlds__modes__STATE_VARIABLE_Specs_33 = check_hlds__modes__STATE_VARIABLE_Specs_40_40;
#line 337 "modes.m"
            }
#line 340 "modes.m"
            break;
#line 340 "modes.m"
          case (MR_Integer) 1:
#line 346 "modes.m"
#line 346 "modes.m"
            switch (check_hlds__modes__ErrorsSoFar_23) {
#line 346 "modes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 346 "modes.m"
              case (MR_Integer) 0:
#line 348 "modes.m"
                {
#line 348 "modes.m"
                  check_hlds__modes__succeeded = (check_hlds__modes__MaxIterations_10 <= (MR_Integer) 1);
#line 348 "modes.m"
                  if (check_hlds__modes__succeeded)
#line 350 "modes.m"
                    {
#line 350 "modes.m"
                      MR_Word check_hlds__modes__MaxIterSpec_24;
#line 350 "modes.m"
                      MR_Word check_hlds__modes__Globals_73;
#line 350 "modes.m"
                      MR_Integer check_hlds__modes__MaxIterations_74;
#line 350 "modes.m"
                      MR_Word check_hlds__modes__Pieces_75;
#line 350 "modes.m"
                      MR_Word check_hlds__modes__Msg_76;
#line 350 "modes.m"
                      MR_Word check_hlds__modes__V_80_80;
#line 350 "modes.m"
                      MR_Word check_hlds__modes__V_82_82;
#line 350 "modes.m"
                      MR_Word check_hlds__modes__V_85_85;
#line 350 "modes.m"
                      MR_Word check_hlds__modes__V_88_88;
#line 350 "modes.m"
                      MR_Word check_hlds__modes__V_91_91;
#line 350 "modes.m"
                      MR_Word check_hlds__modes__V_94_94;
#line 350 "modes.m"
                      MR_Word check_hlds__modes__V_97_97;
#line 350 "modes.m"
                      MR_Word check_hlds__modes__V_98_98;
#line 350 "modes.m"
                      MR_Word check_hlds__modes__V_108_108;
#line 350 "modes.m"
                      MR_Word check_hlds__modes__V_109_109;
#line 350 "modes.m"
                      MR_Word check_hlds__modes__V_114_114;

#line 404 "modes.m"
                      {
#line 404 "modes.m"
                        hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__Globals_73);
                      }
#line 405 "modes.m"
                      {
#line 405 "modes.m"
                        libs__globals__lookup_int_option_3_p_0(check_hlds__modes__Globals_73, (MR_Integer) 173, &check_hlds__modes__MaxIterations_74);
                      }
#line 411 "modes.m"
                      {
#line 411 "modes.m"
                        check_hlds__modes__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "modes.m"
                        MR_hl_field(MR_mktag(3), check_hlds__modes__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 411 "modes.m"
                        MR_hl_field(MR_mktag(3), check_hlds__modes__V_98_98, 1) = ((MR_Box) (check_hlds__modes__MaxIterations_74));
#line 411 "modes.m"
                      }
#line 411 "modes.m"
                      {
#line 411 "modes.m"
                        check_hlds__modes__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_97_97, 0) = ((MR_Box) (check_hlds__modes__V_98_98));
#line 411 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[6])));
#line 411 "modes.m"
                      }
#line 411 "modes.m"
                      {
#line 411 "modes.m"
                        check_hlds__modes__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_94_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[44])));
#line 411 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_94_94, 1) = ((MR_Box) (check_hlds__modes__V_97_97));
#line 411 "modes.m"
                      }
#line 410 "modes.m"
                      {
#line 410 "modes.m"
                        check_hlds__modes__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_91_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[43])));
#line 410 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_91_91, 1) = ((MR_Box) (check_hlds__modes__V_94_94));
#line 410 "modes.m"
                      }
#line 409 "modes.m"
                      {
#line 409 "modes.m"
                        check_hlds__modes__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_88_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[42])));
#line 409 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_88_88, 1) = ((MR_Box) (check_hlds__modes__V_91_91));
#line 409 "modes.m"
                      }
#line 409 "modes.m"
                      {
#line 409 "modes.m"
                        check_hlds__modes__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_85_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[41])));
#line 409 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_85_85, 1) = ((MR_Box) (check_hlds__modes__V_88_88));
#line 409 "modes.m"
                      }
#line 408 "modes.m"
                      {
#line 408 "modes.m"
                        check_hlds__modes__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_82_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[40])));
#line 408 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_82_82, 1) = ((MR_Box) (check_hlds__modes__V_85_85));
#line 408 "modes.m"
                      }
#line 407 "modes.m"
                      {
#line 407 "modes.m"
                        check_hlds__modes__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_80_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 407 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_80_80, 1) = ((MR_Box) (check_hlds__modes__V_82_82));
#line 407 "modes.m"
                      }
#line 407 "modes.m"
                      {
#line 407 "modes.m"
                        check_hlds__modes__Pieces_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__Pieces_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[39])));
#line 407 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__Pieces_75, 1) = ((MR_Box) (check_hlds__modes__V_80_80));
#line 407 "modes.m"
                      }
#line 413 "modes.m"
                      {
#line 413 "modes.m"
                        check_hlds__modes__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 413 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_109_109, 0) = ((MR_Box) (check_hlds__modes__Pieces_75));
#line 413 "modes.m"
                      }
#line 413 "modes.m"
                      {
#line 413 "modes.m"
                        check_hlds__modes__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_108_108, 0) = ((MR_Box) (check_hlds__modes__V_109_109));
#line 413 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 413 "modes.m"
                      }
#line 413 "modes.m"
                      {
#line 413 "modes.m"
                        check_hlds__modes__Msg_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 413 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__Msg_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 413 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__Msg_76, 1) = ((MR_Box) ((MR_Integer) 1));
#line 413 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__Msg_76, 2) = ((MR_Box) ((MR_Integer) 0));
#line 413 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__Msg_76, 3) = ((MR_Box) (check_hlds__modes__V_108_108));
#line 413 "modes.m"
                      }
#line 415 "modes.m"
                      {
#line 415 "modes.m"
                        check_hlds__modes__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_114_114, 0) = ((MR_Box) (check_hlds__modes__Msg_76));
#line 415 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "modes.m"
                      }
#line 414 "modes.m"
                      {
#line 414 "modes.m"
                        check_hlds__modes__MaxIterSpec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 414 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__MaxIterSpec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__MaxIterSpec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[1])));
#line 414 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__MaxIterSpec_24, 2) = ((MR_Box) (check_hlds__modes__V_114_114));
#line 414 "modes.m"
                      }
#line 351 "modes.m"
                      {
#line 351 "modes.m"
                        MR_Word base;
#line 351 "modes.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "modes.m"
                        *check_hlds__modes__STATE_VARIABLE_Specs_33 = base;
#line 351 "modes.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modes__MaxIterSpec_24));
#line 351 "modes.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_40_40));
#line 351 "modes.m"
                      }
#line 352 "modes.m"
                      *check_hlds__modes__SafeToContinue_14 = (MR_Integer) 1;
#line 350 "modes.m"
                      *check_hlds__modes__STATE_VARIABLE_ModuleInfo_32 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39;
#line 350 "modes.m"
                    }
#line 348 "modes.m"
                  else
#line 355 "modes.m"
                    {
#line 355 "modes.m"
                      MR_Word check_hlds__modes__DebugModes_25;
#line 355 "modes.m"
                      MR_Integer check_hlds__modes__MaxIterations1_30;
#line 355 "modes.m"
                      MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_55_55;

#line 355 "modes.m"
                      {
#line 355 "modes.m"
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_22, (MR_Integer) 61, &check_hlds__modes__DebugModes_25);
                      }
#line 368 "modes.m"
#line 368 "modes.m"
                      switch (check_hlds__modes__DebugModes_25) {
#line 368 "modes.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 368 "modes.m"
                        case (MR_Integer) 0:
#line 369 "modes.m"
                          {
#line 369 "modes.m"
                          }
#line 368 "modes.m"
                          break;
#line 368 "modes.m"
                        case (MR_Integer) 1:
#line 357 "modes.m"
                          {
#line 357 "modes.m"
                            MR_Word check_hlds__modes__InferenceSpecs_26;
#line 364 "modes.m"
                            MR_Integer check_hlds__modes___NumWarnings_28;
#line 364 "modes.m"
                            MR_Integer check_hlds__modes___NumErrors_29;

#line 359 "modes.m"
                            {
#line 359 "modes.m"
                              check_hlds__modes__InferenceSpecs_26 = check_hlds__mode_errors__report_mode_inference_messages_3_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, (MR_Integer) 1, check_hlds__modes__PredIds_9);
                            }
#line 362 "modes.m"
                            {
#line 362 "modes.m"
                              mercury__io__write_string_3_p_0((MR_String) "Inferences by current iteration:\n");
                            }
#line 364 "modes.m"
                            {
#line 364 "modes.m"
                              parse_tree__error_util__write_error_specs_8_p_0(check_hlds__modes__InferenceSpecs_26, check_hlds__modes__Globals_22, (MR_Integer) 0, &check_hlds__modes___NumWarnings_28, (MR_Integer) 0, &check_hlds__modes___NumErrors_29);
                            }
#line 366 "modes.m"
                            {
#line 366 "modes.m"
                              mercury__io__write_string_3_p_0((MR_String) "End of inferences.\n");
                            }
#line 357 "modes.m"
                          }
#line 368 "modes.m"
                          break;
#line 368 "modes.m"
                      }
#line 387 "modes.m"
#line 387 "modes.m"
                      switch (check_hlds__modes__WhatToCheck_11) {
#line 387 "modes.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 387 "modes.m"
                        case (MR_Integer) 0:
#line 381 "modes.m"
                          {
#line 381 "modes.m"
                            MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_54_54;

#line 385 "modes.m"
                            {
#line 385 "modes.m"
                              check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_p_0(check_hlds__modes__PredIds_9, check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_54_54);
                            }
#line 386 "modes.m"
                            {
#line 386 "modes.m"
                              check_hlds__clause_to_proc__introduce_exists_casts_3_p_0(check_hlds__modes__PredIds_9, check_hlds__modes__STATE_VARIABLE_ModuleInfo_54_54, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_55_55);
                            }
#line 381 "modes.m"
                          }
#line 387 "modes.m"
                          break;
#line 387 "modes.m"
                        case (MR_Integer) 1:
#line 425 "modes.m"
                          {
#line 425 "modes.m"
                            MR_Word check_hlds__modes__PredTable0_121;
#line 425 "modes.m"
                            MR_Word check_hlds__modes__PredTable_122;
#line 425 "modes.m"
                            MR_Word check_hlds__modes__V_123_123;
#line 427 "modes.m"
                            MR_Box check_hlds__modes__conv7_PredTable_122;

#line 426 "modes.m"
                            {
#line 426 "modes.m"
                              hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__PredTable0_121);
                            }
#line 427 "modes.m"
                            {
#line 427 "modes.m"
                              check_hlds__modes__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 427 "modes.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modes__V_123_123, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_5[0]));
#line 427 "modes.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modes__V_123_123, 1) = ((MR_Box) (check_hlds__modes__modecheck_to_fixpoint_8_p_0_2));
#line 427 "modes.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modes__V_123_123, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 427 "modes.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modes__V_123_123, 3) = ((MR_Box) (check_hlds__modes__OldPredTable_18));
#line 427 "modes.m"
                            }
#line 427 "modes.m"
                            {
#line 427 "modes.m"
                              mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__modes_scalar_common_2[0], check_hlds__modes__V_123_123, check_hlds__modes__PredIds_9, ((MR_Box) (check_hlds__modes__PredTable0_121)), &check_hlds__modes__conv7_PredTable_122);
                            }
#line 427 "modes.m"
                            check_hlds__modes__PredTable_122 = ((MR_Word) check_hlds__modes__conv7_PredTable_122);
#line 428 "modes.m"
                            {
#line 428 "modes.m"
                              hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__PredTable_122, check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_55_55);
                            }
#line 425 "modes.m"
                          }
#line 387 "modes.m"
                          break;
#line 387 "modes.m"
                      }
#line 394 "modes.m"
                      check_hlds__modes__MaxIterations1_30 = (check_hlds__modes__MaxIterations_10 - (MR_Integer) 1);
#line 395 "modes.m"
                      /* direct tailcall eliminated */
#line 395 "modes.m"
                      {
#line 395 "modes.m"
                        MR_Integer check_hlds__modes__MaxIterations__tmp_copy_10 = check_hlds__modes__MaxIterations1_30;
#line 395 "modes.m"
                        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_31 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_55_55;

#line 395 "modes.m"
                        check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_31;
#line 395 "modes.m"
                        check_hlds__modes__MaxIterations_10 = check_hlds__modes__MaxIterations__tmp_copy_10;
#line 395 "modes.m"
                      }
#line 395 "modes.m"
                      continue;
#line 355 "modes.m"
                    }
#line 348 "modes.m"
                }
#line 346 "modes.m"
                break;
#line 346 "modes.m"
              case (MR_Integer) 1:
#line 343 "modes.m"
                {
#line 345 "modes.m"
                  *check_hlds__modes__SafeToContinue_14 = (MR_Integer) 1;
#line 343 "modes.m"
                  *check_hlds__modes__STATE_VARIABLE_ModuleInfo_32 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39;
#line 343 "modes.m"
                  *check_hlds__modes__STATE_VARIABLE_Specs_33 = check_hlds__modes__STATE_VARIABLE_Specs_40_40;
#line 343 "modes.m"
                }
#line 346 "modes.m"
                break;
#line 346 "modes.m"
            }
#line 340 "modes.m"
            break;
#line 340 "modes.m"
        }
#line 317 "modes.m"
      }
#line 317 "modes.m"
      break;
#line 317 "modes.m"
    }
#line 311 "modes.m"
}

#line 123 "modes.m"
void MR_CALL 
check_hlds__modes__modecheck_lambda_final_insts_6_p_0(
#line 123 "modes.m"
  MR_Word check_hlds__modes__HeadVars_7,
#line 123 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts_8,
#line 123 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Goal_0_13,
#line 123 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Goal_14,
#line 123 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_15,
#line 123 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_16)
#line 123 "modes.m"
{
#line 1228 "modes.m"
  {
#line 1228 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1234 "modes.m"
    MR_Word check_hlds__modes___NewFinalInsts_12;

#line 1234 "modes.m"
    {
#line 1234 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_7, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts_8, &check_hlds__modes___NewFinalInsts_12, check_hlds__modes__STATE_VARIABLE_Goal_0_13, check_hlds__modes__STATE_VARIABLE_Goal_14, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_15, check_hlds__modes__STATE_VARIABLE_ModeInfo_16);
    }
#line 1228 "modes.m"
  }
#line 123 "modes.m"
}

#line 116 "modes.m"
void MR_CALL 
check_hlds__modes__modecheck_proc_general_8_p_0(
#line 116 "modes.m"
  MR_Integer check_hlds__modes__ProcId_9,
#line 116 "modes.m"
  MR_Word check_hlds__modes__PredId_10,
#line 116 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_11,
#line 116 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_12,
#line 116 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_16,
#line 116 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_17,
#line 116 "modes.m"
  MR_Word * check_hlds__modes__Specs_14,
#line 116 "modes.m"
  MR_Word * check_hlds__modes__Changed_15)
#line 116 "modes.m"
{
#line 619 "modes.m"
  {
#line 619 "modes.m"
    MR_bool check_hlds__modes__succeeded;

#line 620 "modes.m"
    {
#line 620 "modes.m"
      check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_9, check_hlds__modes__PredId_10, check_hlds__modes__WhatToCheck_11, check_hlds__modes__MayChangeCalledProc_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_16, check_hlds__modes__STATE_VARIABLE_ModuleInfo_17, (MR_Integer) 0, check_hlds__modes__Changed_15, check_hlds__modes__Specs_14);
    }
#line 619 "modes.m"
  }
#line 116 "modes.m"
}

#line 107 "modes.m"
void MR_CALL 
check_hlds__modes__modecheck_proc_6_p_0(
#line 107 "modes.m"
  MR_Integer check_hlds__modes__ProcId_7,
#line 107 "modes.m"
  MR_Word check_hlds__modes__PredId_8,
#line 107 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_12,
#line 107 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_13,
#line 107 "modes.m"
  MR_Word * check_hlds__modes__Specs_10,
#line 107 "modes.m"
  MR_Word * check_hlds__modes__Changed_11)
#line 107 "modes.m"
{
#line 614 "modes.m"
  {
#line 614 "modes.m"
    MR_bool check_hlds__modes__succeeded;

#line 620 "modes.m"
    {
#line 620 "modes.m"
      check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_7, check_hlds__modes__PredId_8, (MR_Integer) 0, (MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_13, (MR_Integer) 0, check_hlds__modes__Changed_11, check_hlds__modes__Specs_10);
    }
#line 614 "modes.m"
  }
#line 107 "modes.m"
}

#line 99 "modes.m"
void MR_CALL 
check_hlds__modes__check_pred_modes_6_p_0(
#line 99 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_7,
#line 99 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_8,
#line 99 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_32,
#line 99 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_33,
#line 99 "modes.m"
  MR_Word * check_hlds__modes__SafeToContinue_10,
#line 99 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_34)
#line 99 "modes.m"
{
#line 196 "modes.m"
  {
#line 196 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 196 "modes.m"
    MR_Word check_hlds__modes__PredIds_12;
#line 196 "modes.m"
    MR_Word check_hlds__modes__Globals_13;
#line 196 "modes.m"
    MR_Integer check_hlds__modes__MaxIterations_14;
#line 196 "modes.m"
    MR_Word check_hlds__modes__SafeToContinue0_15;
#line 196 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36;
#line 196 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_Specs_37_37;

#line 197 "modes.m"
    {
#line 197 "modes.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__modes__PredIds_12);
    }
#line 198 "modes.m"
    {
#line 198 "modes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__modes__Globals_13);
    }
#line 199 "modes.m"
    {
#line 199 "modes.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__modes__Globals_13, (MR_Integer) 173, &check_hlds__modes__MaxIterations_14);
    }
#line 201 "modes.m"
    {
#line 201 "modes.m"
      check_hlds__modes__modecheck_to_fixpoint_8_p_0(check_hlds__modes__PredIds_12, check_hlds__modes__MaxIterations_14, check_hlds__modes__WhatToCheck_7, check_hlds__modes__MayChangeCalledProc_8, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36, &check_hlds__modes__SafeToContinue0_15, &check_hlds__modes__STATE_VARIABLE_Specs_37_37);
    }
#line 210 "modes.m"
#line 210 "modes.m"
    switch (check_hlds__modes__WhatToCheck_7) {
#line 210 "modes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 210 "modes.m"
      case (MR_Integer) 0:
#line 211 "modes.m"
#line 211 "modes.m"
        switch (check_hlds__modes__SafeToContinue0_15) {
#line 211 "modes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 211 "modes.m"
          case (MR_Integer) 0:
#line 219 "modes.m"
            {
#line 219 "modes.m"
              MR_Word check_hlds__modes__DelayPartialInstantiations_17;

#line 220 "modes.m"
              {
#line 220 "modes.m"
                libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_13, (MR_Integer) 270, &check_hlds__modes__DelayPartialInstantiations_17);
              }
#line 302 "modes.m"
#line 302 "modes.m"
              switch (check_hlds__modes__DelayPartialInstantiations_17) {
#line 302 "modes.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 302 "modes.m"
                case (MR_Integer) 0:
#line 303 "modes.m"
                  {
#line 304 "modes.m"
                    *check_hlds__modes__SafeToContinue_10 = (MR_Integer) 0;
#line 303 "modes.m"
                    *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36;
#line 303 "modes.m"
                    *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__STATE_VARIABLE_Specs_37_37;
#line 303 "modes.m"
                  }
#line 302 "modes.m"
                  break;
#line 302 "modes.m"
                case (MR_Integer) 1:
#line 223 "modes.m"
                  {
#line 223 "modes.m"
                    MR_Word check_hlds__modes__ChangedPreds_21;
#line 223 "modes.m"
                    MR_Word check_hlds__modes__AfterDPIModuleInfo_22;
#line 223 "modes.m"
                    MR_Word check_hlds__modes__AfterDPISafeToContinue_23;
#line 223 "modes.m"
                    MR_Word check_hlds__modes__AfterDPISpecs_24;
#line 223 "modes.m"
                    MR_Word check_hlds__modes__MaybeBeforeDPISeverity_25;
#line 223 "modes.m"
                    MR_Word check_hlds__modes__MaybeAfterDPISeverity_26;
#line 223 "modes.m"
                    MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39;

#line 227 "modes.m"
                    {
#line 227 "modes.m"
                      check_hlds__delay_partial_inst__delay_partial_inst_preds_4_p_0(check_hlds__modes__PredIds_12, &check_hlds__modes__ChangedPreds_21, check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39);
                    }
#line 230 "modes.m"
                    {
#line 230 "modes.m"
                      check_hlds__modes__modecheck_to_fixpoint_8_p_0(check_hlds__modes__ChangedPreds_21, check_hlds__modes__MaxIterations_14, check_hlds__modes__WhatToCheck_7, check_hlds__modes__MayChangeCalledProc_8, check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__AfterDPIModuleInfo_22, &check_hlds__modes__AfterDPISafeToContinue_23, &check_hlds__modes__AfterDPISpecs_24);
                    }
#line 233 "modes.m"
                    {
#line 233 "modes.m"
                      check_hlds__modes__MaybeBeforeDPISeverity_25 = parse_tree__error_util__worst_severity_in_specs_2_f_0(check_hlds__modes__Globals_13, check_hlds__modes__STATE_VARIABLE_Specs_37_37);
                    }
#line 235 "modes.m"
                    {
#line 235 "modes.m"
                      check_hlds__modes__MaybeAfterDPISeverity_26 = parse_tree__error_util__worst_severity_in_specs_2_f_0(check_hlds__modes__Globals_13, check_hlds__modes__AfterDPISpecs_24);
                    }
#line 259 "modes.m"
                    if ((check_hlds__modes__MaybeBeforeDPISeverity_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 259 "modes.m"
                      if ((check_hlds__modes__MaybeAfterDPISeverity_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 252 "modes.m"
                        {
#line 256 "modes.m"
                          *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__AfterDPISpecs_24;
#line 257 "modes.m"
                          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__AfterDPIModuleInfo_22;
#line 258 "modes.m"
                          *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__AfterDPISafeToContinue_23;
#line 252 "modes.m"
                        }
#line 259 "modes.m"
                      else
#line 260 "modes.m"
                        {
#line 263 "modes.m"
                          *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__STATE_VARIABLE_Specs_37_37;
#line 264 "modes.m"
                          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36;
#line 265 "modes.m"
                          *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__SafeToContinue0_15;
#line 260 "modes.m"
                        }
#line 259 "modes.m"
                    else
#line 259 "modes.m"
                      {
#line 259 "modes.m"
                        MR_Word check_hlds__modes__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__MaybeBeforeDPISeverity_25, (MR_Integer) 0)));

#line 259 "modes.m"
                        if ((check_hlds__modes__MaybeAfterDPISeverity_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 267 "modes.m"
                          {
#line 270 "modes.m"
                            *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__AfterDPISpecs_24;
#line 271 "modes.m"
                            *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__AfterDPIModuleInfo_22;
#line 272 "modes.m"
                            *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__AfterDPISafeToContinue_23;
#line 267 "modes.m"
                          }
#line 259 "modes.m"
                        else
#line 274 "modes.m"
                          {
#line 274 "modes.m"
                            MR_Word check_hlds__modes__AfterDPISeverity_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__MaybeAfterDPISeverity_26, (MR_Integer) 0)));
#line 274 "modes.m"
                            MR_Word check_hlds__modes__WorstSeverity_31;

#line 276 "modes.m"
                            {
#line 276 "modes.m"
                              check_hlds__modes__WorstSeverity_31 = parse_tree__error_util__worst_severity_2_f_0(check_hlds__modes__V_60_60, check_hlds__modes__AfterDPISeverity_30);
                            }
#line 292 "modes.m"
                            check_hlds__modes__succeeded = (check_hlds__modes__AfterDPISeverity_30 == check_hlds__modes__WorstSeverity_31);
#line 292 "modes.m"
                            if (check_hlds__modes__succeeded)
#line 293 "modes.m"
                              {
#line 293 "modes.m"
                                *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__STATE_VARIABLE_Specs_37_37;
#line 294 "modes.m"
                                *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36;
#line 295 "modes.m"
                                *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__SafeToContinue0_15;
#line 293 "modes.m"
                              }
#line 292 "modes.m"
                            else
#line 297 "modes.m"
                              {
#line 297 "modes.m"
                                *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__AfterDPISpecs_24;
#line 298 "modes.m"
                                *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__AfterDPIModuleInfo_22;
#line 299 "modes.m"
                                *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__AfterDPISafeToContinue_23;
#line 297 "modes.m"
                              }
#line 274 "modes.m"
                          }
#line 259 "modes.m"
                      }
#line 223 "modes.m"
                  }
#line 302 "modes.m"
                  break;
#line 302 "modes.m"
              }
#line 219 "modes.m"
            }
#line 211 "modes.m"
            break;
#line 211 "modes.m"
          case (MR_Integer) 1:
#line 213 "modes.m"
            {
#line 213 "modes.m"
              MR_Word check_hlds__modes__InferenceSpecs_55;

#line 214 "modes.m"
              {
#line 214 "modes.m"
                check_hlds__modes__InferenceSpecs_55 = check_hlds__mode_errors__report_mode_inference_messages_3_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36, (MR_Integer) 1, check_hlds__modes__PredIds_12);
              }
#line 216 "modes.m"
              {
#line 216 "modes.m"
                *check_hlds__modes__STATE_VARIABLE_Specs_34 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__InferenceSpecs_55, check_hlds__modes__STATE_VARIABLE_Specs_37_37);
              }
#line 217 "modes.m"
              *check_hlds__modes__SafeToContinue_10 = (MR_Integer) 1;
#line 213 "modes.m"
              *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36;
#line 213 "modes.m"
            }
#line 211 "modes.m"
            break;
#line 211 "modes.m"
        }
#line 210 "modes.m"
        break;
#line 210 "modes.m"
      case (MR_Integer) 1:
#line 204 "modes.m"
        {
#line 204 "modes.m"
          MR_Word check_hlds__modes__InferenceSpecs_16;
#line 204 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_Specs_53_53;
#line 204 "modes.m"
          MR_Word check_hlds__modes__PredIds_65;

#line 205 "modes.m"
          {
#line 205 "modes.m"
            check_hlds__modes__InferenceSpecs_16 = check_hlds__mode_errors__report_mode_inference_messages_3_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36, (MR_Integer) 0, check_hlds__modes__PredIds_12);
          }
#line 207 "modes.m"
          {
#line 207 "modes.m"
            check_hlds__modes__STATE_VARIABLE_Specs_53_53 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__InferenceSpecs_16, check_hlds__modes__STATE_VARIABLE_Specs_37_37);
          }
#line 1412 "modes.m"
          {
#line 1412 "modes.m"
            hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36, &check_hlds__modes__PredIds_65);
          }
#line 1413 "modes.m"
          {
#line 1413 "modes.m"
            check_hlds__modes__pred_check_eval_methods_4_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36, check_hlds__modes__PredIds_65, check_hlds__modes__STATE_VARIABLE_Specs_53_53, check_hlds__modes__STATE_VARIABLE_Specs_34);
          }
#line 209 "modes.m"
          *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__SafeToContinue0_15;
#line 204 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36;
#line 204 "modes.m"
        }
#line 210 "modes.m"
        break;
#line 210 "modes.m"
    }
#line 196 "modes.m"
  }
#line 99 "modes.m"
}

#line 93 "modes.m"
void MR_CALL 
check_hlds__modes__modecheck_module_2_p_0(
#line 93 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo0_3,
#line 93 "modes.m"
  MR_Tuple * check_hlds__modes__HeadVar__2_2)
#line 93 "modes.m"
{
#line 180 "modes.m"
  {
#line 180 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 180 "modes.m"
    MR_Word check_hlds__modes__ModuleInfo_4;
#line 180 "modes.m"
    MR_Word check_hlds__modes__SafeToContinue_5;
#line 180 "modes.m"
    MR_Word check_hlds__modes__Specs_6;
#line 180 "modes.m"
    MR_Word check_hlds__modes__Globals_7;
#line 182 "modes.m"
    MR_Word check_hlds__modes__Verbose_9;
#line 188 "modes.m"
    MR_Word check_hlds__modes__Statistics_10;

#line 181 "modes.m"
    {
#line 181 "modes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__ModuleInfo0_3, &check_hlds__modes__Globals_7);
    }
#line 183 "modes.m"
    {
#line 183 "modes.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_7, (MR_Integer) 46, &check_hlds__modes__Verbose_9);
    }
#line 184 "modes.m"
    {
#line 184 "modes.m"
      libs__file_util__maybe_write_string_4_p_0(check_hlds__modes__Verbose_9, (MR_String) "% Mode-checking clauses...\n");
    }
#line 186 "modes.m"
    {
#line 186 "modes.m"
      check_hlds__modes__check_pred_modes_6_p_0((MR_Integer) 0, (MR_Integer) 0, check_hlds__modes__ModuleInfo0_3, &check_hlds__modes__ModuleInfo_4, &check_hlds__modes__SafeToContinue_5, &check_hlds__modes__Specs_6);
    }
#line 180 "modes.m"
    {
#line 180 "modes.m"
      MR_Tuple base;
#line 180 "modes.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 180 "modes.m"
      *check_hlds__modes__HeadVar__2_2 = base;
#line 180 "modes.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__ModuleInfo_4));
#line 180 "modes.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__SafeToContinue_5));
#line 180 "modes.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modes__Specs_6));
#line 180 "modes.m"
    }
#line 189 "modes.m"
    {
#line 189 "modes.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_7, (MR_Integer) 56, &check_hlds__modes__Statistics_10);
    }
#line 190 "modes.m"
    {
#line 190 "modes.m"
      libs__file_util__maybe_report_stats_3_p_0(check_hlds__modes__Statistics_10);
    }
#line 180 "modes.m"
  }
#line 93 "modes.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.modes. */
