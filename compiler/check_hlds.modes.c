/*
** Automatically generated from `modes.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 492 "modes.m"
struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s {
#line 497 "modes.m"
  MR_bool check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded;
#line 565 "modes.m"
  MR_Word check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcTable_71;
#line 569 "modes.m"
  jmp_buf check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__commit_0;
#line 569 "modes.m"
  MR_Word check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcInfo_81;
#line 569 "modes.m"
  MR_Word check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__V_84_84;
#line 569 "modes.m"
  MR_Integer check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0___ProcId_73;
#line 569 "modes.m"
  MR_Box check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv2__ProcId_73;
#line 569 "modes.m"
  MR_Box check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv1_ProcInfo_81;
#line 492 "modes.m"
};


#line 177 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 180 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 183 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 186 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 189 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 192 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 195 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 198 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 201 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 204 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 207 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 210 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_0[1];

#line 213 "check_hlds.modes.c"
static const MR_DuFunctorDesc check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0;

#line 216 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0;

#line 219 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_1[3];

#line 222 "check_hlds.modes.c"
static const MR_DuFunctorDesc check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1;

#line 225 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_0[1];

#line 228 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_1[1];

#line 231 "check_hlds.modes.c"
static const MR_DuPtagLayout check_hlds__modes__check_hlds__modes__du_ptag_ordered_clause_form_0[2];

#line 234 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_name_ordered_clause_form_0[2];

#line 237 "check_hlds.modes.c"
static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_clause_form_0[2];

#line 240 "check_hlds.modes.c"
static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_0;

#line 243 "check_hlds.modes.c"
static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_1;

#line 246 "check_hlds.modes.c"
static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_value_ordered_modes_safe_to_continue_0[2];

#line 249 "check_hlds.modes.c"
static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_name_ordered_modes_safe_to_continue_0[2];

#line 252 "check_hlds.modes.c"
static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_modes_safe_to_continue_0[2];

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

#line 273 "check_hlds.modes.c"
static MR_bool MR_CALL 
check_hlds__modes____Unify____modes_safe_to_continue_0_0_10001(
#line 276 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 278 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2);

#line 281 "check_hlds.modes.c"
static void MR_CALL 
check_hlds__modes____Compare____modes_safe_to_continue_0_0_10001(
#line 284 "check_hlds.modes.c"
  MR_Box * check_hlds__modes__wrapper_arg_1,
#line 286 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 288 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_3);

#line 1060 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1060__1_2_p_0(
#line 1060 "modes.m"
  MR_Word check_hlds__modes__DetismSpecs_37,
#line 1060 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_56);

#line 1090 "modes.m"
static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0(
#line 1090 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__1_1,
#line 1090 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1090 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3);

#line 1090 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0(
#line 1090 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1090 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2);

#line 1434 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_nonunique_modes_2_p_0(
#line 1434 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1434 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2);

#line 1416 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_fully_in_out_modes_2_p_0(
#line 1416 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1416 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2);

#line 1377 "modes.m"
static void MR_CALL 
check_hlds__modes__proc_check_eval_methods_5_p_0(
#line 1377 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1377 "modes.m"
  MR_Word check_hlds__modes__PredId_2,
#line 1377 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3,
#line 1377 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_4,
#line 1377 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_5);

#line 1366 "modes.m"
static void MR_CALL 
check_hlds__modes__pred_check_eval_methods_4_p_0(
#line 1366 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1366 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1366 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_3,
#line 1366 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_4);

#line 1279 "modes.m"
static void MR_CALL 
check_hlds__modes__check_final_insts_12_p_0(
#line 1279 "modes.m"
  MR_Word check_hlds__modes__Vars_13,
#line 1279 "modes.m"
  MR_Word check_hlds__modes__Insts_14,
#line 1279 "modes.m"
  MR_Word check_hlds__modes__VarInsts_15,
#line 1279 "modes.m"
  MR_Word check_hlds__modes__InferModes_16,
#line 1279 "modes.m"
  MR_Integer check_hlds__modes__ArgNum_17,
#line 1279 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_18,
#line 1279 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Goal_0_33,
#line 1279 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Goal_34,
#line 1279 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_35,
#line 1279 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_36,
#line 1279 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_37,
#line 1279 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_38);

#line 1261 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_clobber_insts_3_p_0(
#line 1261 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1261 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1261 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__3_3);

#line 1208 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_final_insts_8_p_0(
#line 1208 "modes.m"
  MR_Word check_hlds__modes__HeadVars_9,
#line 1208 "modes.m"
  MR_Word check_hlds__modes__InferModes_10,
#line 1208 "modes.m"
  MR_Word check_hlds__modes__FinalInsts0_11,
#line 1208 "modes.m"
  MR_Word * check_hlds__modes__FinalInsts_12,
#line 1208 "modes.m"
  MR_Word check_hlds__modes__Body0_13,
#line 1208 "modes.m"
  MR_Word * check_hlds__modes__Body_14,
#line 1208 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_34,
#line 1208 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_35);

#line 1163 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_switch_9_p_0(
#line 1163 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1163 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1163 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28);

#line 1143 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_disj_11_p_0(
#line 1143 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_12,
#line 1143 "modes.m"
  MR_Word check_hlds__modes__HeadVars_13,
#line 1143 "modes.m"
  MR_Word check_hlds__modes__InstMap0_14,
#line 1143 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_15,
#line 1143 "modes.m"
  MR_Word check_hlds__modes__DisjDetism_16,
#line 1143 "modes.m"
  MR_Word check_hlds__modes__DisjNonLocals_17,
#line 1143 "modes.m"
  MR_Word check_hlds__modes__NondetLiveVars0_18,
#line 1143 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_19,
#line 1143 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_20,
#line 1143 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_24,
#line 1143 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_25);

#line 1109 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_switch_9_p_0(
#line 1109 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1109 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1109 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1109 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1109 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1109 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1109 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1109 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1109 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28);

#line 1094 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_disj_8_p_0(
#line 1094 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_9,
#line 1094 "modes.m"
  MR_Word check_hlds__modes__HeadVars_10,
#line 1094 "modes.m"
  MR_Word check_hlds__modes__InstMap0_11,
#line 1094 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_12,
#line 1094 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_13,
#line 1094 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_14,
#line 1094 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
#line 1094 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19);

#line 1060 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0_1(
#line 1060 "modes.m"
  MR_Box check_hlds__modes__closure_arg);

#line 943 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0(
#line 943 "modes.m"
  MR_Word check_hlds__modes__HowToCheckGoal_8,
#line 943 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26,
#line 943 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_OldPredTable_27,
#line 943 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28,
#line 943 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_29,
#line 943 "modes.m"
  MR_Word * check_hlds__modes__Changed_11,
#line 943 "modes.m"
  MR_Word * check_hlds__modes__Specs_12);

#line 901 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0_5(
#line 901 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 901 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 901 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 901 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 901 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4);

#line 893 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0_4(
#line 893 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 893 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 893 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 893 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 893 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4);

#line 867 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0_3(
#line 867 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 867 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 867 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 867 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 867 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4);

#line 860 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0_2(
#line 860 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 860 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 860 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 860 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 860 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4);

#line 841 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0_1(
#line 841 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 841 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1);

#line 813 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0(
#line 813 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_15,
#line 813 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_16,
#line 813 "modes.m"
  MR_Word check_hlds__modes__InferModes_17,
#line 813 "modes.m"
  MR_Word check_hlds__modes__Markers_18,
#line 813 "modes.m"
  MR_Word check_hlds__modes__PredId_19,
#line 813 "modes.m"
  MR_Integer check_hlds__modes__ProcId_20,
#line 813 "modes.m"
  MR_Word check_hlds__modes__Body0_21,
#line 813 "modes.m"
  MR_Word * check_hlds__modes__Body_22,
#line 813 "modes.m"
  MR_Word check_hlds__modes__HeadVars_23,
#line 813 "modes.m"
  MR_Word check_hlds__modes__InstMap0_24,
#line 813 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_25,
#line 813 "modes.m"
  MR_Word * check_hlds__modes__ArgFinalInsts_26,
#line 813 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_63,
#line 813 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_64);

#line 737 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_2(
#line 737 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 737 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1);

#line 717 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_1(
#line 717 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 717 "modes.m"
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
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27,
#line 623 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_28,
#line 623 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_29,
#line 623 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_30,
#line 623 "modes.m"
  MR_Word * check_hlds__modes__Specs_16);

#line 594 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_procs_10_p_0(
#line 594 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 594 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 594 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_3,
#line 594 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_4,
#line 594 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5,
#line 594 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_6,
#line 594 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_7,
#line 594 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_8,
#line 594 "modes.m"
  MR_Word check_hlds__modes__HeadVar__9_9,
#line 594 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__10_10);

#line 569 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_1(
#line 569 "modes.m"
  void * check_hlds__modes__env_ptr_arg);

#line 569 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_3(
#line 569 "modes.m"
  void * check_hlds__modes__env_ptr_arg);

#line 569 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_2(
#line 569 "modes.m"
  void * check_hlds__modes__env_ptr_arg);

#line 569 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_4(
#line 569 "modes.m"
  void * check_hlds__modes__env_ptr_arg);

#line 492 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0(
#line 492 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_10,
#line 492 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_11,
#line 492 "modes.m"
  MR_Word check_hlds__modes__PredId_12,
#line 492 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25,
#line 492 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_26,
#line 492 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_27,
#line 492 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_28,
#line 492 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_29,
#line 492 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_30);

#line 461 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_proc_body_4_p_0(
#line 461 "modes.m"
  MR_Word check_hlds__modes__OldProcTable_5,
#line 461 "modes.m"
  MR_Integer check_hlds__modes__ProcId_6,
#line 461 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ProcTable_0_12,
#line 461 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ProcTable_13);

#line 451 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0_1(
#line 451 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 451 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 451 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 451 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3);

#line 433 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0(
#line 433 "modes.m"
  MR_Word check_hlds__modes__OldPredTable_5,
#line 433 "modes.m"
  MR_Word check_hlds__modes__PredId_6,
#line 433 "modes.m"
  MR_Word check_hlds__modes__PredTable0_7,
#line 433 "modes.m"
  MR_Word * check_hlds__modes__PredTable_8);

#line 425 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_2(
#line 425 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 425 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 425 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 425 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3);

#line 322 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_1(
#line 322 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 322 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 322 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 322 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3,
#line 322 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_4,
#line 322 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_5,
#line 322 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_6,
#line 322 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_7);

#line 310 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0(
#line 310 "modes.m"
  MR_Word check_hlds__modes__PredIds_9,
#line 310 "modes.m"
  MR_Integer check_hlds__modes__MaxIterations_10,
#line 310 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_11,
#line 310 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_12,
#line 310 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31,
#line 310 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_32,
#line 310 "modes.m"
  MR_Word * check_hlds__modes__SafeToContinue_14,
#line 310 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_33);


static /* final */ const MR_Box check_hlds__modes_scalar_common_1[48][2];

static /* final */ const MR_Box check_hlds__modes_scalar_common_2[4][3];

static /* final */ const MR_Box check_hlds__modes_scalar_common_3[7][1];

static /* final */ const MR_Box check_hlds__modes_scalar_common_4[2][12];

static /* final */ const MR_Box check_hlds__modes_scalar_common_5[2][7];

static /* final */ const MR_Box check_hlds__modes_scalar_common_6[3][6];

static /* final */ const MR_Box check_hlds__modes_scalar_common_7[1][11];

static /* final */ const MR_Box check_hlds__modes_scalar_common_8[1][14];

static /* final */ const MR_Box check_hlds__modes_scalar_common_9[1][5];




static /* final */ const MR_Box check_hlds__modes_scalar_common_1[48][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "iterations.)"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "with partially instantiated modes."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[4])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration not allowed for procedure"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is not currently implemented."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[4])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "with partially instantiated modes"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Tabling of predicates/functions"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in them no longer being unique."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[4])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of the unique arguments which would result"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is not allowed as this would lead to a copying"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Tabling of predicates/functions with unique modes"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[4])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__modes_scalar_common_3[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "must have mode"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (&check_hlds__modes_scalar_common_3[1])),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__modes_scalar_common_1[33]))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[32])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[35])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Mode analysis iteration limit exceeded."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "You may need to declare the modes explicitly"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "or use the"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "option to increase the limit."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "(The current limit is"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Sorry, not implemented:"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__modes_scalar_common_3[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__modes_scalar_common_3[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 47 */
  {
    ((MR_Box) (&check_hlds__modes_scalar_common_3[6])),
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
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
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

static /* final */ const MR_Box check_hlds__modes_scalar_common_3[7][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "(di, uo)"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "main"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "--mode-inference-iteration-limit"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[16])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[27])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[37])))
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
    ((MR_Box) (&check_hlds__modes__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1297 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1305 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1314 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 1323 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1331 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1340 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1348 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1356 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1364 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1372 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1380 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1388 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1393 "check_hlds.modes.c"
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

#line 1408 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0
  }
};

#line 1416 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_1[3] = {
  (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_can_fail_0,
  (MR_PseudoTypeInfo) &check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0
};

#line 1423 "check_hlds.modes.c"
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

#line 1438 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_0[1] = {
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0
};

#line 1443 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_1[1] = {
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1
};

#line 1448 "check_hlds.modes.c"
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

#line 1462 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_name_ordered_clause_form_0[2] = {
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0,
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1
};

#line 1468 "check_hlds.modes.c"
static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_clause_form_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1474 "check_hlds.modes.c"
const MR_TypeCtorInfo_Struct check_hlds__modes__check_hlds__modes__type_ctor_info_clause_form_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modes____Unify____clause_form_0_0_10001)),
  ((MR_Box) (check_hlds__modes____Compare____clause_form_0_0_10001)),
  (MR_String) "check_hlds.modes",
  (MR_String) "clause_form",
  {
    check_hlds__modes__check_hlds__modes__du_name_ordered_clause_form_0
  },
  {
    check_hlds__modes__check_hlds__modes__du_ptag_ordered_clause_form_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__modes__check_hlds__modes__functor_number_map_clause_form_0
};

#line 1495 "check_hlds.modes.c"
static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_0 = {
  (MR_String) "modes_safe_to_continue",
  (MR_Integer) 0
};

#line 1501 "check_hlds.modes.c"
static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_1 = {
  (MR_String) "modes_unsafe_to_continue",
  (MR_Integer) 1
};

#line 1507 "check_hlds.modes.c"
static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_value_ordered_modes_safe_to_continue_0[2] = {
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_0,
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_1
};

#line 1513 "check_hlds.modes.c"
static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_name_ordered_modes_safe_to_continue_0[2] = {
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_0,
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_1
};

#line 1519 "check_hlds.modes.c"
static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_modes_safe_to_continue_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1525 "check_hlds.modes.c"
const MR_TypeCtorInfo_Struct check_hlds__modes__check_hlds__modes__type_ctor_info_modes_safe_to_continue_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__modes____Unify____modes_safe_to_continue_0_0_10001)),
  ((MR_Box) (check_hlds__modes____Compare____modes_safe_to_continue_0_0_10001)),
  (MR_String) "check_hlds.modes",
  (MR_String) "modes_safe_to_continue",
  {
    check_hlds__modes__check_hlds__modes__enum_name_ordered_modes_safe_to_continue_0
  },
  {
    check_hlds__modes__check_hlds__modes__enum_value_ordered_modes_safe_to_continue_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__modes__check_hlds__modes__functor_number_map_modes_safe_to_continue_0
};

#line 1546 "check_hlds.modes.c"
static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0_10001(
#line 1549 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 1551 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2)
#line 1553 "check_hlds.modes.c"
{
#line 1555 "check_hlds.modes.c"
  {
#line 1557 "check_hlds.modes.c"
    MR_bool check_hlds__modes__succeeded;

#line 1560 "check_hlds.modes.c"
    {
#line 1562 "check_hlds.modes.c"
      check_hlds__modes__succeeded = check_hlds__modes____Unify____clause_form_0_0(((MR_Word) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2));
    }
#line 1565 "check_hlds.modes.c"
    return check_hlds__modes__succeeded;
#line 1567 "check_hlds.modes.c"
  }
#line 1569 "check_hlds.modes.c"
}

#line 1572 "check_hlds.modes.c"
static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0_10001(
#line 1575 "check_hlds.modes.c"
  MR_Box * check_hlds__modes__wrapper_arg_1,
#line 1577 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 1579 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_3)
#line 1581 "check_hlds.modes.c"
{
#line 1583 "check_hlds.modes.c"
  {
#line 1585 "check_hlds.modes.c"
    MR_Word check_hlds__modes__conv0_HeadVar__1_1;

#line 1588 "check_hlds.modes.c"
    {
#line 1590 "check_hlds.modes.c"
      check_hlds__modes____Compare____clause_form_0_0(&check_hlds__modes__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modes__wrapper_arg_2), ((MR_Word) check_hlds__modes__wrapper_arg_3));
    }
#line 1593 "check_hlds.modes.c"
    *check_hlds__modes__wrapper_arg_1 = ((MR_Box) (check_hlds__modes__conv0_HeadVar__1_1));
#line 1595 "check_hlds.modes.c"
  }
#line 1597 "check_hlds.modes.c"
}

#line 1600 "check_hlds.modes.c"
static MR_bool MR_CALL 
check_hlds__modes____Unify____modes_safe_to_continue_0_0_10001(
#line 1603 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 1605 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2)
#line 1607 "check_hlds.modes.c"
{
#line 1609 "check_hlds.modes.c"
  {
#line 1611 "check_hlds.modes.c"
    MR_bool check_hlds__modes__succeeded;

#line 1614 "check_hlds.modes.c"
    {
#line 1616 "check_hlds.modes.c"
      check_hlds__modes__succeeded = check_hlds__modes____Unify____modes_safe_to_continue_0_0(((MR_Word) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2));
    }
#line 1619 "check_hlds.modes.c"
    return check_hlds__modes__succeeded;
#line 1621 "check_hlds.modes.c"
  }
#line 1623 "check_hlds.modes.c"
}

#line 1626 "check_hlds.modes.c"
static void MR_CALL 
check_hlds__modes____Compare____modes_safe_to_continue_0_0_10001(
#line 1629 "check_hlds.modes.c"
  MR_Box * check_hlds__modes__wrapper_arg_1,
#line 1631 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 1633 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_3)
#line 1635 "check_hlds.modes.c"
{
#line 1637 "check_hlds.modes.c"
  {
#line 1639 "check_hlds.modes.c"
    MR_Word check_hlds__modes__conv0_HeadVar__1_1;

#line 1642 "check_hlds.modes.c"
    {
#line 1644 "check_hlds.modes.c"
      check_hlds__modes____Compare____modes_safe_to_continue_0_0(&check_hlds__modes__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modes__wrapper_arg_2), ((MR_Word) check_hlds__modes__wrapper_arg_3));
    }
#line 1647 "check_hlds.modes.c"
    *check_hlds__modes__wrapper_arg_1 = ((MR_Box) (check_hlds__modes__conv0_HeadVar__1_1));
#line 1649 "check_hlds.modes.c"
  }
#line 1651 "check_hlds.modes.c"
}

#line 1060 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1060__1_2_p_0(
#line 1060 "modes.m"
  MR_Word check_hlds__modes__DetismSpecs_37,
#line 1060 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_56)
#line 1060 "modes.m"
{
#line 1060 "modes.m"
  {
#line 1060 "modes.m"
    MR_bool check_hlds__modes__succeeded;

#line 1060 "modes.m"
    {
#line 1060 "modes.m"
      return check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modes_scalar_common_1[0], ((MR_Box) (check_hlds__modes__DetismSpecs_37)), ((MR_Box) (check_hlds__modes__HeadVar__2_56)));
    }
#line 1060 "modes.m"
    return check_hlds__modes__succeeded;
#line 1060 "modes.m"
  }
#line 1060 "modes.m"
}

#line 79 "modes.m"
void MR_CALL 
check_hlds__modes____Compare____modes_safe_to_continue_0_0(
#line 79 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__1_1,
#line 79 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 79 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3)
#line 79 "modes.m"
{
#line 79 "modes.m"
  {
#line 79 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 79 "modes.m"
    MR_Integer check_hlds__modes__Cast_HeadVar1_4 = (MR_Integer) check_hlds__modes__HeadVar__2_2;
#line 79 "modes.m"
    MR_Integer check_hlds__modes__Cast_HeadVar2_5 = (MR_Integer) check_hlds__modes__HeadVar__3_3;

#line 79 "modes.m"
    {
#line 79 "modes.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__modes__HeadVar__1_1, check_hlds__modes__Cast_HeadVar1_4, check_hlds__modes__Cast_HeadVar2_5);
#line 79 "modes.m"
      return;
    }
#line 79 "modes.m"
  }
#line 79 "modes.m"
}

#line 79 "modes.m"
MR_bool MR_CALL 
check_hlds__modes____Unify____modes_safe_to_continue_0_0(
#line 79 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_1,
#line 79 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2)
#line 79 "modes.m"
{
#line 1721 "check_hlds.modes.c"
  {
#line 1723 "check_hlds.modes.c"
    MR_bool check_hlds__modes__succeeded = (check_hlds__modes__HeadVar__2_1 == check_hlds__modes__HeadVar__2_2);

#line 1726 "check_hlds.modes.c"
    return check_hlds__modes__succeeded;
#line 1728 "check_hlds.modes.c"
  }
#line 79 "modes.m"
}

#line 1090 "modes.m"
static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0(
#line 1090 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__1_1,
#line 1090 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1090 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3)
#line 1090 "modes.m"
{
#line 1090 "modes.m"
  {
#line 1090 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1090 "modes.m"
    MR_Integer check_hlds__modes__CastX_22 = (MR_Integer) check_hlds__modes__HeadVar__2_2;
#line 1090 "modes.m"
    MR_Integer check_hlds__modes__CastY_23 = (MR_Integer) check_hlds__modes__HeadVar__3_3;

#line 1090 "modes.m"
    check_hlds__modes__succeeded = (check_hlds__modes__CastX_22 == check_hlds__modes__CastY_23);
#line 1090 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1757 "check_hlds.modes.c"
      *check_hlds__modes__HeadVar__1_1 = (MR_Integer) 0;
#line 1090 "modes.m"
    else
#line 1090 "modes.m"
      if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1090 "modes.m"
        {
#line 1090 "modes.m"
          MR_Word check_hlds__modes__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));

#line 1090 "modes.m"
          if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1090 "modes.m"
            {
#line 1090 "modes.m"
              MR_Word check_hlds__modes__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__3_3, (MR_Integer) 0)));

#line 1090 "modes.m"
              {
#line 1090 "modes.m"
                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[3], check_hlds__modes__HeadVar__1_1, ((MR_Box) (check_hlds__modes__V_28_28)), ((MR_Box) (check_hlds__modes__V_5_5)));
#line 1090 "modes.m"
                return;
              }
#line 1090 "modes.m"
            }
#line 1090 "modes.m"
          else
#line 1786 "check_hlds.modes.c"
            *check_hlds__modes__HeadVar__1_1 = (MR_Integer) 1;
#line 1090 "modes.m"
        }
#line 1090 "modes.m"
      else
#line 1090 "modes.m"
        {
#line 1090 "modes.m"
          MR_Word check_hlds__modes__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 2)));
#line 1090 "modes.m"
          MR_Word check_hlds__modes__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1090 "modes.m"
          MR_Word check_hlds__modes__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));

#line 1090 "modes.m"
          if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1803 "check_hlds.modes.c"
            *check_hlds__modes__HeadVar__1_1 = (MR_Integer) 2;
#line 1090 "modes.m"
          else
#line 1090 "modes.m"
            {
#line 1090 "modes.m"
              MR_Word check_hlds__modes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 0)));
#line 1090 "modes.m"
              MR_Word check_hlds__modes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 1)));
#line 1090 "modes.m"
              MR_Word check_hlds__modes__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 2)));
#line 1090 "modes.m"
              MR_Word check_hlds__modes__V_20_20;

#line 1090 "modes.m"
              {
#line 1090 "modes.m"
                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[1], &check_hlds__modes__V_20_20, ((MR_Box) (check_hlds__modes__V_31_31)), ((MR_Box) (check_hlds__modes__V_17_17)));
              }
#line 1823 "check_hlds.modes.c"
              check_hlds__modes__succeeded = (check_hlds__modes__V_20_20 == (MR_Integer) 0);
#line 1090 "modes.m"
              check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1090 "modes.m"
              if (check_hlds__modes__succeeded)
#line 1090 "modes.m"
                *check_hlds__modes__HeadVar__1_1 = check_hlds__modes__V_20_20;
#line 1090 "modes.m"
              else
#line 1090 "modes.m"
                {
#line 1090 "modes.m"
                  MR_Word check_hlds__modes__V_21_21;
#line 1090 "modes.m"
                  MR_Integer check_hlds__modes__V_32_32 = (MR_Integer) check_hlds__modes__V_30_30;
#line 1090 "modes.m"
                  MR_Integer check_hlds__modes__V_33_33 = (MR_Integer) check_hlds__modes__V_18_18;

#line 1090 "modes.m"
                  {
#line 1090 "modes.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__modes__V_21_21, check_hlds__modes__V_32_32, check_hlds__modes__V_33_33);
                  }
#line 1847 "check_hlds.modes.c"
                  check_hlds__modes__succeeded = (check_hlds__modes__V_21_21 == (MR_Integer) 0);
#line 1090 "modes.m"
                  check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1090 "modes.m"
                  if (check_hlds__modes__succeeded)
#line 1090 "modes.m"
                    *check_hlds__modes__HeadVar__1_1 = check_hlds__modes__V_21_21;
#line 1090 "modes.m"
                  else
#line 1090 "modes.m"
                    {
#line 1090 "modes.m"
                      {
#line 1090 "modes.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[2], check_hlds__modes__HeadVar__1_1, ((MR_Box) (check_hlds__modes__V_29_29)), ((MR_Box) (check_hlds__modes__V_19_19)));
#line 1090 "modes.m"
                        return;
                      }
#line 1090 "modes.m"
                    }
#line 1090 "modes.m"
                }
#line 1090 "modes.m"
            }
#line 1090 "modes.m"
        }
#line 1090 "modes.m"
  }
#line 1090 "modes.m"
}

#line 1090 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0(
#line 1090 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1090 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2)
#line 1090 "modes.m"
{
#line 1090 "modes.m"
  {
#line 1090 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1090 "modes.m"
    MR_Integer check_hlds__modes__CastX_11 = (MR_Integer) check_hlds__modes__HeadVar__1_1;
#line 1090 "modes.m"
    MR_Integer check_hlds__modes__CastY_12 = (MR_Integer) check_hlds__modes__HeadVar__2_2;

#line 1090 "modes.m"
    check_hlds__modes__succeeded = (check_hlds__modes__CastX_11 == check_hlds__modes__CastY_12);
#line 1090 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1090 "modes.m"
      check_hlds__modes__succeeded = MR_TRUE;
#line 1090 "modes.m"
    else
#line 1090 "modes.m"
      if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1090 "modes.m"
        {
#line 1090 "modes.m"
          MR_Word check_hlds__modes__TypeInfo_13_13;
#line 1090 "modes.m"
          MR_Word check_hlds__modes__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1090 "modes.m"
          MR_Word check_hlds__modes__V_4_4;

#line 1090 "modes.m"
          check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1090 "modes.m"
          if (check_hlds__modes__succeeded)
#line 1090 "modes.m"
            {
#line 1090 "modes.m"
              check_hlds__modes__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1924 "check_hlds.modes.c"
              check_hlds__modes__TypeInfo_13_13 = (MR_Word) &check_hlds__modes_scalar_common_1[3];
#line 1926 "check_hlds.modes.c"
              {
#line 1928 "check_hlds.modes.c"
                return check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modes__TypeInfo_13_13, ((MR_Box) (check_hlds__modes__V_3_3)), ((MR_Box) (check_hlds__modes__V_4_4)));
              }
#line 1090 "modes.m"
            }
#line 1090 "modes.m"
        }
#line 1090 "modes.m"
      else
#line 1090 "modes.m"
        {
#line 1090 "modes.m"
          MR_Word check_hlds__modes__TypeInfo_14_14;
#line 1090 "modes.m"
          MR_Word check_hlds__modes__TypeInfo_15_15;
#line 1090 "modes.m"
          MR_Word check_hlds__modes__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1090 "modes.m"
          MR_Word check_hlds__modes__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1090 "modes.m"
          MR_Word check_hlds__modes__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 2)));
#line 1090 "modes.m"
          MR_Word check_hlds__modes__V_8_8;
#line 1090 "modes.m"
          MR_Word check_hlds__modes__V_9_9;
#line 1090 "modes.m"
          MR_Word check_hlds__modes__V_10_10;

#line 1090 "modes.m"
          check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1090 "modes.m"
          if (check_hlds__modes__succeeded)
#line 1090 "modes.m"
            {
#line 1090 "modes.m"
              check_hlds__modes__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1090 "modes.m"
              check_hlds__modes__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1090 "modes.m"
              check_hlds__modes__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 2)));
#line 1968 "check_hlds.modes.c"
              check_hlds__modes__TypeInfo_14_14 = (MR_Word) &check_hlds__modes_scalar_common_1[1];
#line 1970 "check_hlds.modes.c"
              {
#line 1972 "check_hlds.modes.c"
                check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modes__TypeInfo_14_14, ((MR_Box) (check_hlds__modes__V_5_5)), ((MR_Box) (check_hlds__modes__V_8_8)));
              }
#line 1090 "modes.m"
              if (check_hlds__modes__succeeded)
#line 1090 "modes.m"
                {
#line 1979 "check_hlds.modes.c"
                  check_hlds__modes__succeeded = (check_hlds__modes__V_6_6 == check_hlds__modes__V_9_9);
#line 1090 "modes.m"
                  if (check_hlds__modes__succeeded)
#line 1090 "modes.m"
                    {
#line 1985 "check_hlds.modes.c"
                      check_hlds__modes__TypeInfo_15_15 = (MR_Word) &check_hlds__modes_scalar_common_1[2];
#line 1987 "check_hlds.modes.c"
                      {
#line 1989 "check_hlds.modes.c"
                        return check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modes__TypeInfo_15_15, ((MR_Box) (check_hlds__modes__V_7_7)), ((MR_Box) (check_hlds__modes__V_10_10)));
                      }
#line 1090 "modes.m"
                    }
#line 1090 "modes.m"
                }
#line 1090 "modes.m"
            }
#line 1090 "modes.m"
        }
#line 1090 "modes.m"
    return check_hlds__modes__succeeded;
#line 1090 "modes.m"
  }
#line 1090 "modes.m"
}

#line 1434 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_nonunique_modes_2_p_0(
#line 1434 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1434 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2)
#line 1434 "modes.m"
{
#line 1436 "modes.m"
  while (MR_TRUE)
#line 1436 "modes.m"
    {
#line 1436 "modes.m"
      /* tailcall optimized into a loop */
#line 1436 "modes.m"
      {
#line 1436 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 1436 "modes.m"
        if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1436 "modes.m"
          check_hlds__modes__succeeded = MR_TRUE;
#line 1436 "modes.m"
        else
#line 1437 "modes.m"
          {
#line 1437 "modes.m"
            MR_Word check_hlds__modes__Mode_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1437 "modes.m"
            MR_Word check_hlds__modes__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1437 "modes.m"
            MR_Word check_hlds__modes__InitialInst_7;
#line 1437 "modes.m"
            MR_Word check_hlds__modes__FinalInst_8;

#line 1438 "modes.m"
            {
#line 1438 "modes.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__Mode_4, &check_hlds__modes__InitialInst_7, &check_hlds__modes__FinalInst_8);
            }
#line 1439 "modes.m"
            {
#line 1439 "modes.m"
              check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__InitialInst_7);
            }
#line 1437 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1437 "modes.m"
              {
#line 1440 "modes.m"
                {
#line 1440 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__FinalInst_8);
                }
#line 1437 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1441 "modes.m"
                  {
#line 1441 "modes.m"
                    /* direct tailcall eliminated */
#line 1441 "modes.m"
                    {
#line 1441 "modes.m"
                      MR_Word check_hlds__modes__HeadVar__1__tmp_copy_1 = check_hlds__modes__Rest_5;

#line 1441 "modes.m"
                      check_hlds__modes__HeadVar__1_1 = check_hlds__modes__HeadVar__1__tmp_copy_1;
#line 1441 "modes.m"
                    }
#line 1441 "modes.m"
                    continue;
#line 1441 "modes.m"
                  }
#line 1437 "modes.m"
              }
#line 1437 "modes.m"
          }
#line 1436 "modes.m"
        return check_hlds__modes__succeeded;
#line 1436 "modes.m"
      }
#line 1436 "modes.m"
      break;
#line 1436 "modes.m"
    }
#line 1434 "modes.m"
}

#line 1416 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_fully_in_out_modes_2_p_0(
#line 1416 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1416 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2)
#line 1416 "modes.m"
{
#line 1419 "modes.m"
  while (MR_TRUE)
#line 1419 "modes.m"
    {
#line 1419 "modes.m"
      /* tailcall optimized into a loop */
#line 1419 "modes.m"
      {
#line 1419 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 1419 "modes.m"
        if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1419 "modes.m"
          check_hlds__modes__succeeded = MR_TRUE;
#line 1419 "modes.m"
        else
#line 1420 "modes.m"
          {
#line 1420 "modes.m"
            MR_Word check_hlds__modes__Mode_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1420 "modes.m"
            MR_Word check_hlds__modes__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1420 "modes.m"
            MR_Word check_hlds__modes__InitialInst_7;
#line 1420 "modes.m"
            MR_Word check_hlds__modes__FinalInst_8;

#line 1421 "modes.m"
            {
#line 1421 "modes.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__Mode_4, &check_hlds__modes__InitialInst_7, &check_hlds__modes__FinalInst_8);
            }
#line 1423 "modes.m"
            {
#line 1423 "modes.m"
              check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__InitialInst_7);
            }
#line 1424 "modes.m"
            if (!(check_hlds__modes__succeeded))
#line 1425 "modes.m"
              {
#line 1425 "modes.m"
                {
#line 1425 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__InitialInst_7);
                }
#line 1425 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1425 "modes.m"
                  {
#line 1427 "modes.m"
                    {
#line 1427 "modes.m"
                      check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__FinalInst_8);
                    }
#line 1428 "modes.m"
                    if (!(check_hlds__modes__succeeded))
#line 1429 "modes.m"
                      {
#line 1429 "modes.m"
                        check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__FinalInst_8);
                      }
#line 1425 "modes.m"
                  }
#line 1425 "modes.m"
              }
#line 1420 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1432 "modes.m"
              {
#line 1432 "modes.m"
                /* direct tailcall eliminated */
#line 1432 "modes.m"
                {
#line 1432 "modes.m"
                  MR_Word check_hlds__modes__HeadVar__1__tmp_copy_1 = check_hlds__modes__Rest_5;

#line 1432 "modes.m"
                  check_hlds__modes__HeadVar__1_1 = check_hlds__modes__HeadVar__1__tmp_copy_1;
#line 1432 "modes.m"
                }
#line 1432 "modes.m"
                continue;
#line 1432 "modes.m"
              }
#line 1420 "modes.m"
          }
#line 1419 "modes.m"
        return check_hlds__modes__succeeded;
#line 1419 "modes.m"
      }
#line 1419 "modes.m"
      break;
#line 1419 "modes.m"
    }
#line 1416 "modes.m"
}

#line 1377 "modes.m"
static void MR_CALL 
check_hlds__modes__proc_check_eval_methods_5_p_0(
#line 1377 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1377 "modes.m"
  MR_Word check_hlds__modes__PredId_2,
#line 1377 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3,
#line 1377 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_4,
#line 1377 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_5)
#line 1377 "modes.m"
{
#line 1380 "modes.m"
  while (MR_TRUE)
#line 1380 "modes.m"
    {
#line 1380 "modes.m"
      /* tailcall optimized into a loop */
#line 1380 "modes.m"
      {
#line 1380 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 1380 "modes.m"
        if ((check_hlds__modes__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1380 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Specs_5 = check_hlds__modes__STATE_VARIABLE_Specs_0_4;
#line 1380 "modes.m"
        else
#line 1381 "modes.m"
          {
#line 1381 "modes.m"
            MR_Integer check_hlds__modes__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 0)));
#line 1381 "modes.m"
            MR_Word check_hlds__modes__ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 1)));
#line 1381 "modes.m"
            MR_Word check_hlds__modes__PredInfo_16;
#line 1381 "modes.m"
            MR_Word check_hlds__modes__ProcInfo_17;
#line 1381 "modes.m"
            MR_Word check_hlds__modes__EvalMethod_18;
#line 1381 "modes.m"
            MR_Word check_hlds__modes__Modes_19;
#line 1381 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_26_26;
#line 1381 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_28_28;
#line 1381 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_31_31;
#line 1386 "modes.m"
            MR_Word check_hlds__modes__V_25_25;
#line 1395 "modes.m"
            MR_Word check_hlds__modes__V_27_27;
#line 1404 "modes.m"
            MR_String check_hlds__modes__V_29_29;
#line 1404 "modes.m"
            MR_Integer check_hlds__modes__V_30_30;
#line 1445 "modes.m"
            MR_Word check_hlds__modes__Di_121;
#line 1445 "modes.m"
            MR_Word check_hlds__modes__Uo_122;
#line 1445 "modes.m"
            MR_Word check_hlds__modes__DiInitialInst_123;
#line 1445 "modes.m"
            MR_Word check_hlds__modes__DiFinalInst_124;
#line 1445 "modes.m"
            MR_Word check_hlds__modes__UoInitialInst_125;
#line 1445 "modes.m"
            MR_Word check_hlds__modes__UoFinalInst_126;
#line 1445 "modes.m"
            MR_Word check_hlds__modes__Free_127;
#line 1445 "modes.m"
            MR_Word check_hlds__modes__V_129_129;
#line 1445 "modes.m"
            MR_Word check_hlds__modes__V_130_130;
#line 1445 "modes.m"
            MR_Word check_hlds__modes__V_131_131;
#line 1445 "modes.m"
            MR_Word check_hlds__modes__V_132_132;
#line 1445 "modes.m"
            MR_Word check_hlds__modes__V_133_133;
#line 1445 "modes.m"
            MR_Word check_hlds__modes__V_134_134;
#line 1445 "modes.m"
            MR_Word check_hlds__modes__V_135_135;
#line 1445 "modes.m"
            MR_Word check_hlds__modes__V_136_136;
#line 1445 "modes.m"
            MR_Word check_hlds__modes__V_140_140;
#line 1445 "modes.m"
            MR_Word check_hlds__modes__V_141_141;
#line 1445 "modes.m"
            MR_Word check_hlds__modes__V_142_142;

#line 1382 "modes.m"
            {
#line 1382 "modes.m"
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__PredId_2, check_hlds__modes__ProcId_13, &check_hlds__modes__PredInfo_16, &check_hlds__modes__ProcInfo_17);
            }
#line 1383 "modes.m"
            {
#line 1383 "modes.m"
              hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__EvalMethod_18);
            }
#line 1384 "modes.m"
            {
#line 1384 "modes.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Modes_19);
            }
#line 1386 "modes.m"
            {
#line 1386 "modes.m"
              check_hlds__modes__V_25_25 = hlds__hlds_pred__eval_method_requires_ground_args_1_f_0(check_hlds__modes__EvalMethod_18);
            }
#line 1386 "modes.m"
            check_hlds__modes__succeeded = (check_hlds__modes__V_25_25 == (MR_Integer) 1);
#line 1386 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1386 "modes.m"
              {
#line 1387 "modes.m"
                {
#line 1387 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__modes__only_fully_in_out_modes_2_p_0(check_hlds__modes__Modes_19, check_hlds__modes__ModuleInfo_1);
                }
#line 1387 "modes.m"
                check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1386 "modes.m"
              }
#line 1391 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1389 "modes.m"
              {
#line 1389 "modes.m"
                MR_Word check_hlds__modes__GroundArgsSpec_20;
#line 1389 "modes.m"
                MR_Word check_hlds__modes__EvalMethod_35;
#line 1389 "modes.m"
                MR_Word check_hlds__modes__Context_36;
#line 1389 "modes.m"
                MR_String check_hlds__modes__EvalMethodS_37;
#line 1389 "modes.m"
                MR_Word check_hlds__modes__MainPieces_38;
#line 1389 "modes.m"
                MR_Word check_hlds__modes__Msg_40;
#line 1389 "modes.m"
                MR_Word check_hlds__modes__V_43_43;
#line 1389 "modes.m"
                MR_Word check_hlds__modes__V_44_44;
#line 1389 "modes.m"
                MR_Word check_hlds__modes__V_65_65;
#line 1389 "modes.m"
                MR_Word check_hlds__modes__V_66_66;
#line 1389 "modes.m"
                MR_Word check_hlds__modes__V_73_73;

#line 1465 "modes.m"
                {
#line 1465 "modes.m"
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__EvalMethod_35);
                }
#line 1466 "modes.m"
                {
#line 1466 "modes.m"
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Context_36);
                }
#line 1467 "modes.m"
                {
#line 1467 "modes.m"
                  check_hlds__modes__EvalMethodS_37 = parse_tree__prog_out__eval_method_to_string_1_f_0(check_hlds__modes__EvalMethod_35);
                }
#line 1469 "modes.m"
                {
#line 1469 "modes.m"
                  check_hlds__modes__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1469 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 1469 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_44_44, 1) = ((MR_Box) (check_hlds__modes__EvalMethodS_37));
#line 1469 "modes.m"
                }
#line 1469 "modes.m"
                {
#line 1469 "modes.m"
                  check_hlds__modes__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1469 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_43_43, 0) = ((MR_Box) (check_hlds__modes__V_44_44));
#line 1469 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[10])));
#line 1469 "modes.m"
                }
#line 1468 "modes.m"
                {
#line 1468 "modes.m"
                  check_hlds__modes__MainPieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1468 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[43])));
#line 1468 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_38, 1) = ((MR_Box) (check_hlds__modes__V_43_43));
#line 1468 "modes.m"
                }
#line 1476 "modes.m"
                {
#line 1476 "modes.m"
                  check_hlds__modes__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1476 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_66_66, 0) = ((MR_Box) (check_hlds__modes__MainPieces_38));
#line 1476 "modes.m"
                }
#line 1476 "modes.m"
                {
#line 1476 "modes.m"
                  check_hlds__modes__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1476 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_65_65, 0) = ((MR_Box) (check_hlds__modes__V_66_66));
#line 1476 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[44])));
#line 1476 "modes.m"
                }
#line 1475 "modes.m"
                {
#line 1475 "modes.m"
                  check_hlds__modes__Msg_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1475 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_40, 0) = ((MR_Box) (check_hlds__modes__Context_36));
#line 1475 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_40, 1) = ((MR_Box) (check_hlds__modes__V_65_65));
#line 1475 "modes.m"
                }
#line 1478 "modes.m"
                {
#line 1478 "modes.m"
                  check_hlds__modes__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1478 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_73_73, 0) = ((MR_Box) (check_hlds__modes__Msg_40));
#line 1478 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1478 "modes.m"
                }
#line 1477 "modes.m"
                {
#line 1477 "modes.m"
                  check_hlds__modes__GroundArgsSpec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1477 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__GroundArgsSpec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1477 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__GroundArgsSpec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[3])));
#line 1477 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__GroundArgsSpec_20, 2) = ((MR_Box) (check_hlds__modes__V_73_73));
#line 1477 "modes.m"
                }
#line 1390 "modes.m"
                {
#line 1390 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Specs_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_26_26, 0) = ((MR_Box) (check_hlds__modes__GroundArgsSpec_20));
#line 1390 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_26_26, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_0_4));
#line 1390 "modes.m"
                }
#line 1389 "modes.m"
              }
#line 1391 "modes.m"
            else
#line 1390 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_26_26 = check_hlds__modes__STATE_VARIABLE_Specs_0_4;
#line 1395 "modes.m"
            {
#line 1395 "modes.m"
              check_hlds__modes__V_27_27 = hlds__hlds_pred__eval_method_destroys_uniqueness_1_f_0(check_hlds__modes__EvalMethod_18);
            }
#line 1395 "modes.m"
            check_hlds__modes__succeeded = (check_hlds__modes__V_27_27 == (MR_Integer) 1);
#line 1395 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1395 "modes.m"
              {
#line 1396 "modes.m"
                {
#line 1396 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__modes__only_nonunique_modes_2_p_0(check_hlds__modes__Modes_19, check_hlds__modes__ModuleInfo_1);
                }
#line 1396 "modes.m"
                check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1395 "modes.m"
              }
#line 1400 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1398 "modes.m"
              {
#line 1398 "modes.m"
                MR_Word check_hlds__modes__UniquenessSpec_21;
#line 1398 "modes.m"
                MR_Word check_hlds__modes__EvalMethod_77;
#line 1398 "modes.m"
                MR_Word check_hlds__modes__Context_78;
#line 1398 "modes.m"
                MR_String check_hlds__modes__EvalMethodS_79;
#line 1398 "modes.m"
                MR_Word check_hlds__modes__MainPieces_80;
#line 1398 "modes.m"
                MR_Word check_hlds__modes__Msg_82;
#line 1398 "modes.m"
                MR_Word check_hlds__modes__V_85_85;
#line 1398 "modes.m"
                MR_Word check_hlds__modes__V_86_86;
#line 1398 "modes.m"
                MR_Word check_hlds__modes__V_110_110;
#line 1398 "modes.m"
                MR_Word check_hlds__modes__V_111_111;
#line 1398 "modes.m"
                MR_Word check_hlds__modes__V_118_118;

#line 1483 "modes.m"
                {
#line 1483 "modes.m"
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__EvalMethod_77);
                }
#line 1484 "modes.m"
                {
#line 1484 "modes.m"
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Context_78);
                }
#line 1485 "modes.m"
                {
#line 1485 "modes.m"
                  check_hlds__modes__EvalMethodS_79 = parse_tree__prog_out__eval_method_to_string_1_f_0(check_hlds__modes__EvalMethod_77);
                }
#line 1487 "modes.m"
                {
#line 1487 "modes.m"
                  check_hlds__modes__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1487 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 1487 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_86_86, 1) = ((MR_Box) (check_hlds__modes__EvalMethodS_79));
#line 1487 "modes.m"
                }
#line 1487 "modes.m"
                {
#line 1487 "modes.m"
                  check_hlds__modes__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1487 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_85_85, 0) = ((MR_Box) (check_hlds__modes__V_86_86));
#line 1487 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[19])));
#line 1487 "modes.m"
                }
#line 1486 "modes.m"
                {
#line 1486 "modes.m"
                  check_hlds__modes__MainPieces_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1486 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[45])));
#line 1486 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_80, 1) = ((MR_Box) (check_hlds__modes__V_85_85));
#line 1486 "modes.m"
                }
#line 1496 "modes.m"
                {
#line 1496 "modes.m"
                  check_hlds__modes__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1496 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_111_111, 0) = ((MR_Box) (check_hlds__modes__MainPieces_80));
#line 1496 "modes.m"
                }
#line 1496 "modes.m"
                {
#line 1496 "modes.m"
                  check_hlds__modes__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1496 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_110_110, 0) = ((MR_Box) (check_hlds__modes__V_111_111));
#line 1496 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[46])));
#line 1496 "modes.m"
                }
#line 1495 "modes.m"
                {
#line 1495 "modes.m"
                  check_hlds__modes__Msg_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1495 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_82, 0) = ((MR_Box) (check_hlds__modes__Context_78));
#line 1495 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_82, 1) = ((MR_Box) (check_hlds__modes__V_110_110));
#line 1495 "modes.m"
                }
#line 1498 "modes.m"
                {
#line 1498 "modes.m"
                  check_hlds__modes__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1498 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_118_118, 0) = ((MR_Box) (check_hlds__modes__Msg_82));
#line 1498 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1498 "modes.m"
                }
#line 1497 "modes.m"
                {
#line 1497 "modes.m"
                  check_hlds__modes__UniquenessSpec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1497 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__UniquenessSpec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1497 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__UniquenessSpec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[3])));
#line 1497 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__UniquenessSpec_21, 2) = ((MR_Box) (check_hlds__modes__V_118_118));
#line 1497 "modes.m"
                }
#line 1399 "modes.m"
                {
#line 1399 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Specs_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_28_28, 0) = ((MR_Box) (check_hlds__modes__UniquenessSpec_21));
#line 1399 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_28_28, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_26_26));
#line 1399 "modes.m"
                }
#line 1398 "modes.m"
              }
#line 1400 "modes.m"
            else
#line 1399 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_28_28 = check_hlds__modes__STATE_VARIABLE_Specs_26_26;
#line 1404 "modes.m"
            {
#line 1404 "modes.m"
              check_hlds__modes__V_29_29 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__modes__PredInfo_16);
            }
#line 1404 "modes.m"
            check_hlds__modes__succeeded = (strcmp(check_hlds__modes__V_29_29, (MR_String) "main") == 0);
#line 1404 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1404 "modes.m"
              {
#line 1405 "modes.m"
                {
#line 1405 "modes.m"
                  check_hlds__modes__V_30_30 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__modes__PredInfo_16);
                }
#line 1405 "modes.m"
                check_hlds__modes__succeeded = (check_hlds__modes__V_30_30 == (MR_Integer) 2);
#line 1404 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1404 "modes.m"
                  {
#line 1406 "modes.m"
                    {
#line 1406 "modes.m"
                      check_hlds__modes__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(check_hlds__modes__PredInfo_16);
                    }
#line 1404 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1404 "modes.m"
                      {
#line 1445 "modes.m"
                        check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Modes_19)) == (MR_mktag((MR_Integer) 1)));
#line 1445 "modes.m"
                        if (check_hlds__modes__succeeded)
#line 1445 "modes.m"
                          {
#line 1445 "modes.m"
                            check_hlds__modes__Di_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Modes_19, (MR_Integer) 0)));
#line 1445 "modes.m"
                            check_hlds__modes__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Modes_19, (MR_Integer) 1)));
#line 1445 "modes.m"
                            check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__V_129_129)) == (MR_mktag((MR_Integer) 1)));
#line 1445 "modes.m"
                            if (check_hlds__modes__succeeded)
#line 1445 "modes.m"
                              {
#line 1445 "modes.m"
                                check_hlds__modes__Uo_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__V_129_129, (MR_Integer) 0)));
#line 1445 "modes.m"
                                check_hlds__modes__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__V_129_129, (MR_Integer) 1)));
#line 1445 "modes.m"
                                check_hlds__modes__succeeded = (check_hlds__modes__V_130_130 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1445 "modes.m"
                                if (check_hlds__modes__succeeded)
#line 1445 "modes.m"
                                  {
#line 1446 "modes.m"
                                    {
#line 1446 "modes.m"
                                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__Di_121, &check_hlds__modes__DiInitialInst_123, &check_hlds__modes__DiFinalInst_124);
                                    }
#line 1447 "modes.m"
                                    {
#line 1447 "modes.m"
                                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__Uo_122, &check_hlds__modes__UoInitialInst_125, &check_hlds__modes__UoFinalInst_126);
                                    }
#line 1456 "modes.m"
                                    check_hlds__modes__V_132_132 = (MR_Integer) 1;
#line 1456 "modes.m"
                                    check_hlds__modes__V_133_133 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1456 "modes.m"
                                    check_hlds__modes__V_131_131 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[3]);
#line 1456 "modes.m"
                                    {
#line 1456 "modes.m"
                                      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__DiInitialInst_123, &check_hlds__modes__V_140_140);
                                    }
#line 1456 "modes.m"
                                    {
#line 1456 "modes.m"
                                      check_hlds__modes__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modes__V_131_131, check_hlds__modes__V_140_140);
                                    }
#line 1445 "modes.m"
                                    if (check_hlds__modes__succeeded)
#line 1445 "modes.m"
                                      {
#line 1457 "modes.m"
                                        check_hlds__modes__V_135_135 = (MR_Integer) 3;
#line 1457 "modes.m"
                                        check_hlds__modes__V_136_136 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1457 "modes.m"
                                        check_hlds__modes__V_134_134 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[2]);
#line 1457 "modes.m"
                                        {
#line 1457 "modes.m"
                                          check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__DiFinalInst_124, &check_hlds__modes__V_141_141);
                                        }
#line 1457 "modes.m"
                                        {
#line 1457 "modes.m"
                                          check_hlds__modes__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modes__V_134_134, check_hlds__modes__V_141_141);
                                        }
#line 1445 "modes.m"
                                        if (check_hlds__modes__succeeded)
#line 1445 "modes.m"
                                          {
#line 1458 "modes.m"
                                            {
#line 1458 "modes.m"
                                              check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__UoInitialInst_125, &check_hlds__modes__Free_127);
                                            }
#line 1459 "modes.m"
                                            if ((check_hlds__modes__Free_127 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1459 "modes.m"
                                              check_hlds__modes__succeeded = MR_TRUE;
#line 1459 "modes.m"
                                            else
#line 1459 "modes.m"
                                              if (((MR_tag((MR_Word) check_hlds__modes__Free_127)) == (MR_mktag((MR_Integer) 1))))
#line 1459 "modes.m"
                                                check_hlds__modes__succeeded = MR_TRUE;
#line 1459 "modes.m"
                                              else
#line 1459 "modes.m"
                                                check_hlds__modes__succeeded = MR_FALSE;
#line 1445 "modes.m"
                                            if (check_hlds__modes__succeeded)
#line 1445 "modes.m"
                                              {
#line 1460 "modes.m"
                                                {
#line 1460 "modes.m"
                                                  check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__UoFinalInst_126, &check_hlds__modes__V_142_142);
                                                }
#line 1460 "modes.m"
                                                {
#line 1460 "modes.m"
                                                  check_hlds__modes__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modes__V_131_131, check_hlds__modes__V_142_142);
                                                }
#line 1445 "modes.m"
                                              }
#line 1445 "modes.m"
                                          }
#line 1445 "modes.m"
                                      }
#line 1445 "modes.m"
                                  }
#line 1445 "modes.m"
                              }
#line 1445 "modes.m"
                          }
#line 1407 "modes.m"
                        check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1404 "modes.m"
                      }
#line 1404 "modes.m"
                  }
#line 1404 "modes.m"
              }
#line 1411 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1409 "modes.m"
              {
#line 1409 "modes.m"
                MR_Word check_hlds__modes__MainSpec_22;
#line 1409 "modes.m"
                MR_Word check_hlds__modes__Context_148;
#line 1409 "modes.m"
                MR_Word check_hlds__modes__Msg_150;
#line 1409 "modes.m"
                MR_Word check_hlds__modes__V_177_177;

#line 1503 "modes.m"
                {
#line 1503 "modes.m"
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Context_148);
                }
#line 1506 "modes.m"
                {
#line 1506 "modes.m"
                  check_hlds__modes__Msg_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1506 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_150, 0) = ((MR_Box) (check_hlds__modes__Context_148));
#line 1506 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[47])));
#line 1506 "modes.m"
                }
#line 1508 "modes.m"
                {
#line 1508 "modes.m"
                  check_hlds__modes__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1508 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_177_177, 0) = ((MR_Box) (check_hlds__modes__Msg_150));
#line 1508 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_177_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1508 "modes.m"
                }
#line 1507 "modes.m"
                {
#line 1507 "modes.m"
                  check_hlds__modes__MainSpec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1507 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__MainSpec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1507 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__MainSpec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[3])));
#line 1507 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__MainSpec_22, 2) = ((MR_Box) (check_hlds__modes__V_177_177));
#line 1507 "modes.m"
                }
#line 1410 "modes.m"
                {
#line 1410 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Specs_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_31_31, 0) = ((MR_Box) (check_hlds__modes__MainSpec_22));
#line 1410 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_31_31, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_28_28));
#line 1410 "modes.m"
                }
#line 1409 "modes.m"
              }
#line 1411 "modes.m"
            else
#line 1410 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_31_31 = check_hlds__modes__STATE_VARIABLE_Specs_28_28;
#line 1414 "modes.m"
            /* direct tailcall eliminated */
#line 1414 "modes.m"
            {
#line 1414 "modes.m"
              MR_Word check_hlds__modes__HeadVar__3__tmp_copy_3 = check_hlds__modes__ProcIds_14;
#line 1414 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_4 = check_hlds__modes__STATE_VARIABLE_Specs_31_31;

#line 1414 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_0_4 = check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 1414 "modes.m"
              check_hlds__modes__HeadVar__3_3 = check_hlds__modes__HeadVar__3__tmp_copy_3;
#line 1414 "modes.m"
            }
#line 1414 "modes.m"
            continue;
#line 1381 "modes.m"
          }
#line 1380 "modes.m"
      }
#line 1380 "modes.m"
      break;
#line 1380 "modes.m"
    }
#line 1377 "modes.m"
}

#line 1366 "modes.m"
static void MR_CALL 
check_hlds__modes__pred_check_eval_methods_4_p_0(
#line 1366 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1366 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1366 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_3,
#line 1366 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_4)
#line 1366 "modes.m"
{
#line 1369 "modes.m"
  while (MR_TRUE)
#line 1369 "modes.m"
    {
#line 1369 "modes.m"
      /* tailcall optimized into a loop */
#line 1369 "modes.m"
      {
#line 1369 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 1369 "modes.m"
        if ((check_hlds__modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1369 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Specs_4 = check_hlds__modes__STATE_VARIABLE_Specs_0_3;
#line 1369 "modes.m"
        else
#line 1370 "modes.m"
          {
#line 1370 "modes.m"
            MR_Word check_hlds__modes__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1370 "modes.m"
            MR_Word check_hlds__modes__PredIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1370 "modes.m"
            MR_Word check_hlds__modes__Preds_13;
#line 1370 "modes.m"
            MR_Word check_hlds__modes__PredInfo_14;
#line 1370 "modes.m"
            MR_Word check_hlds__modes__ProcIds_15;
#line 1370 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_18_18;
#line 1372 "modes.m"
            MR_Box check_hlds__modes__conv0_PredInfo_14;

#line 1371 "modes.m"
            {
#line 1371 "modes.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__ModuleInfo_1, &check_hlds__modes__Preds_13);
            }
#line 1372 "modes.m"
            {
#line 1372 "modes.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__modes__Preds_13, ((MR_Box) (check_hlds__modes__PredId_10)), &check_hlds__modes__conv0_PredInfo_14);
            }
#line 1372 "modes.m"
            check_hlds__modes__PredInfo_14 = ((MR_Word) check_hlds__modes__conv0_PredInfo_14);
#line 1373 "modes.m"
            {
#line 1373 "modes.m"
              check_hlds__modes__ProcIds_15 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__modes__PredInfo_14);
            }
#line 1374 "modes.m"
            {
#line 1374 "modes.m"
              check_hlds__modes__proc_check_eval_methods_5_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__PredId_10, check_hlds__modes__ProcIds_15, check_hlds__modes__STATE_VARIABLE_Specs_0_3, &check_hlds__modes__STATE_VARIABLE_Specs_18_18);
            }
#line 1375 "modes.m"
            /* direct tailcall eliminated */
#line 1375 "modes.m"
            {
#line 1375 "modes.m"
              MR_Word check_hlds__modes__HeadVar__2__tmp_copy_2 = check_hlds__modes__PredIds_11;
#line 1375 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_3 = check_hlds__modes__STATE_VARIABLE_Specs_18_18;

#line 1375 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_0_3 = check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_3;
#line 1375 "modes.m"
              check_hlds__modes__HeadVar__2_2 = check_hlds__modes__HeadVar__2__tmp_copy_2;
#line 1375 "modes.m"
            }
#line 1375 "modes.m"
            continue;
#line 1370 "modes.m"
          }
#line 1369 "modes.m"
      }
#line 1369 "modes.m"
      break;
#line 1369 "modes.m"
    }
#line 1366 "modes.m"
}

#line 1279 "modes.m"
static void MR_CALL 
check_hlds__modes__check_final_insts_12_p_0(
#line 1279 "modes.m"
  MR_Word check_hlds__modes__Vars_13,
#line 1279 "modes.m"
  MR_Word check_hlds__modes__Insts_14,
#line 1279 "modes.m"
  MR_Word check_hlds__modes__VarInsts_15,
#line 1279 "modes.m"
  MR_Word check_hlds__modes__InferModes_16,
#line 1279 "modes.m"
  MR_Integer check_hlds__modes__ArgNum_17,
#line 1279 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_18,
#line 1279 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Goal_0_33,
#line 1279 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Goal_34,
#line 1279 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_35,
#line 1279 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_36,
#line 1279 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_37,
#line 1279 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_38)
#line 1279 "modes.m"
{
#line 1292 "modes.m"
  while (MR_TRUE)
#line 1292 "modes.m"
    {
#line 1292 "modes.m"
      /* tailcall optimized into a loop */
#line 1292 "modes.m"
      {
#line 1292 "modes.m"
        MR_bool check_hlds__modes__succeeded = (check_hlds__modes__Vars_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 1287 "modes.m"
        if (check_hlds__modes__succeeded)
#line 1287 "modes.m"
          {
#line 1288 "modes.m"
            check_hlds__modes__succeeded = (check_hlds__modes__Insts_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1287 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1289 "modes.m"
              check_hlds__modes__succeeded = (check_hlds__modes__VarInsts_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1287 "modes.m"
          }
#line 1292 "modes.m"
        if (check_hlds__modes__succeeded)
#line 1291 "modes.m"
          {
#line 1291 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_ModeInfo_38 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_37;
#line 1291 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Changed_36 = check_hlds__modes__STATE_VARIABLE_Changed_0_35;
#line 1291 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Goal_34 = check_hlds__modes__STATE_VARIABLE_Goal_0_33;
#line 1291 "modes.m"
          }
#line 1292 "modes.m"
        else
#line 1349 "modes.m"
          {
#line 1349 "modes.m"
            MR_Word check_hlds__modes__Var_22;
#line 1349 "modes.m"
            MR_Word check_hlds__modes__VarsTail_23;
#line 1349 "modes.m"
            MR_Word check_hlds__modes__Inst_24;
#line 1349 "modes.m"
            MR_Word check_hlds__modes__InstsTail_25;
#line 1349 "modes.m"
            MR_Word check_hlds__modes__VarInst_26;
#line 1349 "modes.m"
            MR_Word check_hlds__modes__VarInstsTail_27;

#line 1293 "modes.m"
            check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Vars_13)) == (MR_mktag((MR_Integer) 1)));
#line 1293 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1293 "modes.m"
              {
#line 1293 "modes.m"
                check_hlds__modes__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Vars_13, (MR_Integer) 0)));
#line 1293 "modes.m"
                check_hlds__modes__VarsTail_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Vars_13, (MR_Integer) 1)));
#line 1294 "modes.m"
                check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Insts_14)) == (MR_mktag((MR_Integer) 1)));
#line 1294 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1294 "modes.m"
                  {
#line 1294 "modes.m"
                    check_hlds__modes__Inst_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Insts_14, (MR_Integer) 0)));
#line 1294 "modes.m"
                    check_hlds__modes__InstsTail_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Insts_14, (MR_Integer) 1)));
#line 1295 "modes.m"
                    check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__VarInsts_15)) == (MR_mktag((MR_Integer) 1)));
#line 1295 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1295 "modes.m"
                      {
#line 1295 "modes.m"
                        check_hlds__modes__VarInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__VarInsts_15, (MR_Integer) 0)));
#line 1295 "modes.m"
                        check_hlds__modes__VarInstsTail_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__VarInsts_15, (MR_Integer) 1)));
#line 1295 "modes.m"
                      }
#line 1294 "modes.m"
                  }
#line 1293 "modes.m"
              }
#line 1349 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1297 "modes.m"
              {
#line 1297 "modes.m"
                MR_Word check_hlds__modes__VarTypes_28;
#line 1297 "modes.m"
                MR_Word check_hlds__modes__Type_29;
#line 1297 "modes.m"
                MR_Word check_hlds__modes__STATE_VARIABLE_Changed_39_39;
#line 1297 "modes.m"
                MR_Word check_hlds__modes__STATE_VARIABLE_Goal_40_40;
#line 1297 "modes.m"
                MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_41_41;
#line 1297 "modes.m"
                MR_Integer check_hlds__modes__V_43_43;

#line 1297 "modes.m"
                {
#line 1297 "modes.m"
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__modes__VarTypes_28);
                }
#line 1298 "modes.m"
                {
#line 1298 "modes.m"
                  parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modes__VarTypes_28, check_hlds__modes__Var_22, &check_hlds__modes__Type_29);
                }
#line 1299 "modes.m"
                {
#line 1299 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__inst_match__inst_matches_final_typed_4_p_0(check_hlds__modes__VarInst_26, check_hlds__modes__Inst_24, check_hlds__modes__Type_29, check_hlds__modes__ModuleInfo_18);
                }
#line 1301 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1300 "modes.m"
                  {
#line 1300 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_ModeInfo_41_41 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_37;
#line 1300 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_Changed_39_39 = check_hlds__modes__STATE_VARIABLE_Changed_0_35;
#line 1300 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_Goal_40_40 = check_hlds__modes__STATE_VARIABLE_Goal_0_33;
#line 1300 "modes.m"
                  }
#line 1301 "modes.m"
                else
#line 1302 "modes.m"
                  {
#line 1302 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_Changed_39_39 = (MR_Integer) 1;
#line 1315 "modes.m"
                    {
#line 1315 "modes.m"
                      check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modes__ModuleInfo_18, check_hlds__modes__VarInst_26);
                    }
#line 1315 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1315 "modes.m"
                      {
#line 1316 "modes.m"
                        {
#line 1316 "modes.m"
                          check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_any_2_p_0(check_hlds__modes__ModuleInfo_18, check_hlds__modes__Inst_24);
                        }
#line 1315 "modes.m"
                        if (check_hlds__modes__succeeded)
#line 1315 "modes.m"
                          {
#line 1317 "modes.m"
                            {
#line 1317 "modes.m"
                              check_hlds__modes__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(check_hlds__modes__ModuleInfo_18, check_hlds__modes__Type_29);
                            }
#line 1315 "modes.m"
                            if (check_hlds__modes__succeeded)
#line 1318 "modes.m"
                              {
#line 1318 "modes.m"
                                check_hlds__modes__succeeded = check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_37);
                              }
#line 1315 "modes.m"
                          }
#line 1315 "modes.m"
                      }
#line 1322 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1320 "modes.m"
                      {
#line 1320 "modes.m"
                        check_hlds__modecheck_util__prepend_initialisation_call_7_p_0(check_hlds__modes__Var_22, check_hlds__modes__Type_29, check_hlds__modes__VarInst_26, check_hlds__modes__STATE_VARIABLE_Goal_0_33, &check_hlds__modes__STATE_VARIABLE_Goal_40_40, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__modes__STATE_VARIABLE_ModeInfo_41_41);
                      }
#line 1322 "modes.m"
                    else
#line 1328 "modes.m"
                      {
#line 1328 "modes.m"
                        if ((check_hlds__modes__InferModes_16 == (MR_Integer) 0))
#line 1329 "modes.m"
                          {
#line 1329 "modes.m"
                            MR_Word check_hlds__modes__Reason_30;
#line 1329 "modes.m"
                            MR_Word check_hlds__modes__WaitingVars_31;
#line 1329 "modes.m"
                            MR_Word check_hlds__modes__ModeError_32;

#line 1332 "modes.m"
                            {
#line 1332 "modes.m"
                              check_hlds__modes__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modes__VarInst_26, check_hlds__modes__Inst_24, check_hlds__modes__Type_29, check_hlds__modes__ModuleInfo_18);
                            }
#line 1334 "modes.m"
                            if (check_hlds__modes__succeeded)
#line 1333 "modes.m"
                              check_hlds__modes__Reason_30 = (MR_Integer) 0;
#line 1334 "modes.m"
                            else
#line 1336 "modes.m"
                              {
#line 1334 "modes.m"
                                {
#line 1334 "modes.m"
                                  check_hlds__modes__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modes__Inst_24, check_hlds__modes__VarInst_26, check_hlds__modes__Type_29, check_hlds__modes__ModuleInfo_18);
                                }
#line 1336 "modes.m"
                                if (check_hlds__modes__succeeded)
#line 1335 "modes.m"
                                  check_hlds__modes__Reason_30 = (MR_Integer) 1;
#line 1336 "modes.m"
                                else
#line 1338 "modes.m"
                                  check_hlds__modes__Reason_30 = (MR_Integer) 2;
#line 1336 "modes.m"
                              }
#line 1340 "modes.m"
                            {
#line 1340 "modes.m"
                              parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modes__WaitingVars_31);
                            }
#line 1341 "modes.m"
                            {
#line 1341 "modes.m"
                              check_hlds__modes__ModeError_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1341 "modes.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 1341 "modes.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_32, 1) = ((MR_Box) (check_hlds__modes__ArgNum_17));
#line 1341 "modes.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_32, 2) = ((MR_Box) (check_hlds__modes__Var_22));
#line 1341 "modes.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_32, 3) = ((MR_Box) (check_hlds__modes__VarInst_26));
#line 1341 "modes.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_32, 4) = ((MR_Box) (check_hlds__modes__Inst_24));
#line 1341 "modes.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_32, 5) = ((MR_Box) (check_hlds__modes__Reason_30));
#line 1341 "modes.m"
                            }
#line 1343 "modes.m"
                            {
#line 1343 "modes.m"
                              check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modes__WaitingVars_31, check_hlds__modes__ModeError_32, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__modes__STATE_VARIABLE_ModeInfo_41_41);
                            }
#line 1329 "modes.m"
                          }
#line 1328 "modes.m"
                        else
#line 1327 "modes.m"
                          check_hlds__modes__STATE_VARIABLE_ModeInfo_41_41 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_37;
#line 1343 "modes.m"
                        check_hlds__modes__STATE_VARIABLE_Goal_40_40 = check_hlds__modes__STATE_VARIABLE_Goal_0_33;
#line 1328 "modes.m"
                      }
#line 1302 "modes.m"
                  }
#line 1348 "modes.m"
                check_hlds__modes__V_43_43 = (check_hlds__modes__ArgNum_17 + (MR_Integer) 1);
#line 1347 "modes.m"
                /* direct tailcall eliminated */
#line 1347 "modes.m"
                {
#line 1347 "modes.m"
                  MR_Word check_hlds__modes__Vars__tmp_copy_13 = check_hlds__modes__VarsTail_23;
#line 1347 "modes.m"
                  MR_Word check_hlds__modes__Insts__tmp_copy_14 = check_hlds__modes__InstsTail_25;
#line 1347 "modes.m"
                  MR_Word check_hlds__modes__VarInsts__tmp_copy_15 = check_hlds__modes__VarInstsTail_27;
#line 1347 "modes.m"
                  MR_Integer check_hlds__modes__ArgNum__tmp_copy_17 = check_hlds__modes__V_43_43;
#line 1347 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_Goal_0__tmp_copy_33 = check_hlds__modes__STATE_VARIABLE_Goal_40_40;
#line 1347 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_35 = check_hlds__modes__STATE_VARIABLE_Changed_39_39;
#line 1347 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0__tmp_copy_37 = check_hlds__modes__STATE_VARIABLE_ModeInfo_41_41;

#line 1347 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_ModeInfo_0_37 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0__tmp_copy_37;
#line 1347 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Changed_0_35 = check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_35;
#line 1347 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Goal_0_33 = check_hlds__modes__STATE_VARIABLE_Goal_0__tmp_copy_33;
#line 1347 "modes.m"
                  check_hlds__modes__ArgNum_17 = check_hlds__modes__ArgNum__tmp_copy_17;
#line 1347 "modes.m"
                  check_hlds__modes__VarInsts_15 = check_hlds__modes__VarInsts__tmp_copy_15;
#line 1347 "modes.m"
                  check_hlds__modes__Insts_14 = check_hlds__modes__Insts__tmp_copy_14;
#line 1347 "modes.m"
                  check_hlds__modes__Vars_13 = check_hlds__modes__Vars__tmp_copy_13;
#line 1347 "modes.m"
                }
#line 1347 "modes.m"
                continue;
#line 1297 "modes.m"
              }
#line 1349 "modes.m"
            else
#line 1350 "modes.m"
              {
#line 1350 "modes.m"
                {
#line 1350 "modes.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.check_final_insts\'/12", (MR_String) "length mismatch");
#line 1350 "modes.m"
                  return;
                }
#line 1350 "modes.m"
              }
#line 1349 "modes.m"
          }
#line 1292 "modes.m"
      }
#line 1292 "modes.m"
      break;
#line 1292 "modes.m"
    }
#line 1279 "modes.m"
}

#line 1261 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_clobber_insts_3_p_0(
#line 1261 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1261 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1261 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__3_3)
#line 1261 "modes.m"
{
#line 1264 "modes.m"
  {
#line 1264 "modes.m"
    MR_bool check_hlds__modes__succeeded;

#line 1264 "modes.m"
    if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1264 "modes.m"
      if ((check_hlds__modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1268 "modes.m"
        *check_hlds__modes__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1264 "modes.m"
      else
#line 1264 "modes.m"
        {
#line 1265 "modes.m"
          {
#line 1265 "modes.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.maybe_clobber_insts\'/3", (MR_String) "length mismatch");
#line 1265 "modes.m"
            return;
          }
#line 1264 "modes.m"
        }
#line 1264 "modes.m"
    else
#line 1264 "modes.m"
      {
#line 1264 "modes.m"
        MR_Word check_hlds__modes__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1264 "modes.m"
        MR_Word check_hlds__modes__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));

#line 1264 "modes.m"
        if ((check_hlds__modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1266 "modes.m"
          {
#line 1267 "modes.m"
            {
#line 1267 "modes.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.maybe_clobber_insts\'/3", (MR_String) "length mismatch");
#line 1267 "modes.m"
              return;
            }
#line 1266 "modes.m"
          }
#line 1264 "modes.m"
        else
#line 1269 "modes.m"
          {
#line 1269 "modes.m"
            MR_Word check_hlds__modes__IsLive_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1269 "modes.m"
            MR_Word check_hlds__modes__IsLives_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1269 "modes.m"
            MR_Word check_hlds__modes__Inst_20;
#line 1269 "modes.m"
            MR_Word check_hlds__modes__Insts_21;

#line 1273 "modes.m"
            if ((check_hlds__modes__IsLive_18 == (MR_Integer) 1))
#line 1271 "modes.m"
              {
#line 1272 "modes.m"
                check_hlds__modes__Inst_20 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[2]);
#line 1271 "modes.m"
              }
#line 1273 "modes.m"
            else
#line 1274 "modes.m"
              check_hlds__modes__Inst_20 = check_hlds__modes__V_25_25;
#line 1277 "modes.m"
            {
#line 1277 "modes.m"
              check_hlds__modes__maybe_clobber_insts_3_p_0(check_hlds__modes__V_24_24, check_hlds__modes__IsLives_19, &check_hlds__modes__Insts_21);
            }
#line 1269 "modes.m"
            {
#line 1269 "modes.m"
              MR_Word base;
#line 1269 "modes.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1269 "modes.m"
              *check_hlds__modes__HeadVar__3_3 = base;
#line 1269 "modes.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modes__Inst_20));
#line 1269 "modes.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modes__Insts_21));
#line 1269 "modes.m"
            }
#line 1269 "modes.m"
          }
#line 1264 "modes.m"
      }
#line 1264 "modes.m"
  }
#line 1261 "modes.m"
}

#line 1208 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_final_insts_8_p_0(
#line 1208 "modes.m"
  MR_Word check_hlds__modes__HeadVars_9,
#line 1208 "modes.m"
  MR_Word check_hlds__modes__InferModes_10,
#line 1208 "modes.m"
  MR_Word check_hlds__modes__FinalInsts0_11,
#line 1208 "modes.m"
  MR_Word * check_hlds__modes__FinalInsts_12,
#line 1208 "modes.m"
  MR_Word check_hlds__modes__Body0_13,
#line 1208 "modes.m"
  MR_Word * check_hlds__modes__Body_14,
#line 1208 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_34,
#line 1208 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_35)
#line 1208 "modes.m"
{
#line 1213 "modes.m"
  {
#line 1213 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1213 "modes.m"
    MR_Word check_hlds__modes__ModuleInfo_16;
#line 1213 "modes.m"
    MR_Word check_hlds__modes__Errors_17;
#line 1213 "modes.m"
    MR_Word check_hlds__modes__Changed0_20;
#line 1213 "modes.m"
    MR_Word check_hlds__modes__InstMap_21;
#line 1213 "modes.m"
    MR_Word check_hlds__modes__VarTypes_22;
#line 1213 "modes.m"
    MR_Word check_hlds__modes__VarFinalInsts1_23;
#line 1213 "modes.m"
    MR_Word check_hlds__modes__ArgTypes_24;

#line 1214 "modes.m"
    {
#line 1214 "modes.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__modes__ModuleInfo_16);
    }
#line 1215 "modes.m"
    {
#line 1215 "modes.m"
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__modes__Errors_17);
    }
#line 1229 "modes.m"
    if ((check_hlds__modes__Errors_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1230 "modes.m"
      {
#line 1231 "modes.m"
        check_hlds__modes__Changed0_20 = (MR_Integer) 0;
#line 1232 "modes.m"
        {
#line 1232 "modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__modes__InstMap_21);
        }
#line 1230 "modes.m"
      }
#line 1229 "modes.m"
    else
#line 1223 "modes.m"
      {
#line 1227 "modes.m"
        check_hlds__modes__Changed0_20 = (MR_Integer) 1;
#line 1228 "modes.m"
        {
#line 1228 "modes.m"
          hlds__instmap__init_unreachable_1_p_0(&check_hlds__modes__InstMap_21);
        }
#line 1223 "modes.m"
      }
#line 1234 "modes.m"
    {
#line 1234 "modes.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__modes__VarTypes_22);
    }
#line 1235 "modes.m"
    {
#line 1235 "modes.m"
      hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modes__InstMap_21, check_hlds__modes__HeadVars_9, &check_hlds__modes__VarFinalInsts1_23);
    }
#line 1236 "modes.m"
    {
#line 1236 "modes.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__modes__VarTypes_22, check_hlds__modes__HeadVars_9, &check_hlds__modes__ArgTypes_24);
    }
#line 1254 "modes.m"
    if ((check_hlds__modes__InferModes_10 == (MR_Integer) 0))
#line 1255 "modes.m"
      {
#line 1256 "modes.m"
        MR_Word check_hlds__modes___Changed1_33;

#line 1256 "modes.m"
        {
#line 1256 "modes.m"
          check_hlds__modes__check_final_insts_12_p_0(check_hlds__modes__HeadVars_9, check_hlds__modes__FinalInsts0_11, check_hlds__modes__VarFinalInsts1_23, check_hlds__modes__InferModes_10, (MR_Integer) 1, check_hlds__modes__ModuleInfo_16, check_hlds__modes__Body0_13, check_hlds__modes__Body_14, (MR_Integer) 0, &check_hlds__modes___Changed1_33, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_34, check_hlds__modes__STATE_VARIABLE_ModeInfo_35);
        }
#line 1258 "modes.m"
        *check_hlds__modes__FinalInsts_12 = check_hlds__modes__FinalInsts0_11;
#line 1255 "modes.m"
      }
#line 1254 "modes.m"
    else
#line 1238 "modes.m"
      {
#line 1238 "modes.m"
        MR_Word check_hlds__modes__VarFinalInsts2_25;
#line 1238 "modes.m"
        MR_Word check_hlds__modes__PredId_26;
#line 1238 "modes.m"
        MR_Integer check_hlds__modes__ProcId_27;
#line 1238 "modes.m"
        MR_Word check_hlds__modes__ProcInfo_28;
#line 1238 "modes.m"
        MR_Word check_hlds__modes__ArgLives_29;
#line 1238 "modes.m"
        MR_Word check_hlds__modes__Changed1_30;
#line 1238 "modes.m"
        MR_Word check_hlds__modes__Changed2_31;
#line 1238 "modes.m"
        MR_Word check_hlds__modes__Changed_32;
#line 1238 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_41_41;
#line 1238 "modes.m"
        MR_Word check_hlds__modes__V_42_42;
#line 1238 "modes.m"
        MR_Word check_hlds__modes__V_43_43;
#line 1238 "modes.m"
        MR_Word check_hlds__modes__V_44_44;

#line 1239 "modes.m"
        {
#line 1239 "modes.m"
          check_hlds__mode_util__normalise_insts_4_p_0(check_hlds__modes__ModuleInfo_16, check_hlds__modes__ArgTypes_24, check_hlds__modes__VarFinalInsts1_23, &check_hlds__modes__VarFinalInsts2_25);
        }
#line 1244 "modes.m"
        {
#line 1244 "modes.m"
          check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__modes__PredId_26);
        }
#line 1245 "modes.m"
        {
#line 1245 "modes.m"
          check_hlds__mode_info__mode_info_get_proc_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__modes__ProcId_27);
        }
#line 1246 "modes.m"
        {
#line 1246 "modes.m"
          hlds__hlds_module__module_info_proc_info_4_p_0(check_hlds__modes__ModuleInfo_16, check_hlds__modes__PredId_26, check_hlds__modes__ProcId_27, &check_hlds__modes__ProcInfo_28);
        }
#line 1247 "modes.m"
        {
#line 1247 "modes.m"
          hlds__hlds_pred__proc_info_arglives_3_p_0(check_hlds__modes__ProcInfo_28, check_hlds__modes__ModuleInfo_16, &check_hlds__modes__ArgLives_29);
        }
#line 1248 "modes.m"
        {
#line 1248 "modes.m"
          check_hlds__modes__maybe_clobber_insts_3_p_0(check_hlds__modes__VarFinalInsts2_25, check_hlds__modes__ArgLives_29, check_hlds__modes__FinalInsts_12);
        }
#line 1249 "modes.m"
        {
#line 1249 "modes.m"
          check_hlds__modes__check_final_insts_12_p_0(check_hlds__modes__HeadVars_9, check_hlds__modes__FinalInsts0_11, *check_hlds__modes__FinalInsts_12, check_hlds__modes__InferModes_10, (MR_Integer) 1, check_hlds__modes__ModuleInfo_16, check_hlds__modes__Body0_13, check_hlds__modes__Body_14, (MR_Integer) 0, &check_hlds__modes__Changed1_30, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__modes__STATE_VARIABLE_ModeInfo_41_41);
        }
#line 1251 "modes.m"
        {
#line 1251 "modes.m"
          check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__modes__Changed2_31);
        }
#line 1252 "modes.m"
        {
#line 1252 "modes.m"
          check_hlds__modes__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__modes__V_44_44, 0) = ((MR_Box) (check_hlds__modes__Changed2_31));
#line 1252 "modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__modes__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1252 "modes.m"
        }
#line 1252 "modes.m"
        {
#line 1252 "modes.m"
          check_hlds__modes__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__modes__V_43_43, 0) = ((MR_Box) (check_hlds__modes__Changed1_30));
#line 1252 "modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__modes__V_43_43, 1) = ((MR_Box) (check_hlds__modes__V_44_44));
#line 1252 "modes.m"
        }
#line 1252 "modes.m"
        {
#line 1252 "modes.m"
          check_hlds__modes__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__modes__V_42_42, 0) = ((MR_Box) (check_hlds__modes__Changed0_20));
#line 1252 "modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__modes__V_42_42, 1) = ((MR_Box) (check_hlds__modes__V_43_43));
#line 1252 "modes.m"
        }
#line 1252 "modes.m"
        {
#line 1252 "modes.m"
          mercury__bool__or_list_2_p_0(check_hlds__modes__V_42_42, &check_hlds__modes__Changed_32);
        }
#line 1253 "modes.m"
        {
#line 1253 "modes.m"
          check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(check_hlds__modes__Changed_32, check_hlds__modes__STATE_VARIABLE_ModeInfo_41_41, check_hlds__modes__STATE_VARIABLE_ModeInfo_35);
#line 1253 "modes.m"
          return;
        }
#line 1238 "modes.m"
      }
#line 1213 "modes.m"
  }
#line 1208 "modes.m"
}

#line 1163 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_switch_9_p_0(
#line 1163 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1163 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1163 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28)
#line 1163 "modes.m"
{
#line 1168 "modes.m"
  {
#line 1168 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1168 "modes.m"
    MR_Word check_hlds__modes__MainConsId_18;
#line 1168 "modes.m"
    MR_Word check_hlds__modes__OtherConsIds_19;
#line 1168 "modes.m"
    MR_Word check_hlds__modes__Goal0_20;
#line 1168 "modes.m"
    MR_Word check_hlds__modes__InstMap1_21;
#line 1168 "modes.m"
    MR_Word check_hlds__modes__Goal1_22;
#line 1168 "modes.m"
    MR_Word check_hlds__modes__InstMap_23;
#line 1168 "modes.m"
    MR_Word check_hlds__modes__Goal2_24;
#line 1168 "modes.m"
    MR_Word check_hlds__modes__Goal_26;
#line 1168 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30;
#line 1168 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31;
#line 1168 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1168 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33;
#line 1168 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35;
#line 1191 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_25;

#line 1169 "modes.m"
    {
#line 1169 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27, &check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30);
    }
#line 1170 "modes.m"
    check_hlds__modes__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 0)));
#line 1170 "modes.m"
    check_hlds__modes__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 1)));
#line 1170 "modes.m"
    check_hlds__modes__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 2)));
#line 1171 "modes.m"
    {
#line 1171 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31);
    }
#line 1173 "modes.m"
    {
#line 1173 "modes.m"
      check_hlds__modecheck_util__modecheck_functors_test_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__MainConsId_18, check_hlds__modes__OtherConsIds_19, check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32);
    }
#line 1175 "modes.m"
    {
#line 1175 "modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__InstMap1_21);
    }
#line 1176 "modes.m"
    {
#line 1176 "modes.m"
      check_hlds__modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modes__InstMap1_21);
    }
#line 1178 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1177 "modes.m"
      {
#line 1177 "modes.m"
        check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modes__Goal0_20, &check_hlds__modes__Goal1_22, check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33);
      }
#line 1178 "modes.m"
    else
#line 1182 "modes.m"
      {
#line 1182 "modes.m"
        {
#line 1182 "modes.m"
          check_hlds__modes__Goal1_22 = hlds__make_goal__true_goal_0_f_0();
        }
#line 1182 "modes.m"
        check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33 = check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1182 "modes.m"
      }
#line 1186 "modes.m"
    {
#line 1186 "modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__InstMap_23);
    }
#line 1187 "modes.m"
    {
#line 1187 "modes.m"
      check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__InstMap0_12, check_hlds__modes__InstMap_23, check_hlds__modes__Goal1_22, &check_hlds__modes__Goal2_24);
    }
#line 1188 "modes.m"
    {
#line 1188 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35);
    }
#line 1191 "modes.m"
    {
#line 1191 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_11, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_13, &check_hlds__modes___ArgFinalInsts_25, check_hlds__modes__Goal2_24, &check_hlds__modes__Goal_26, check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35, check_hlds__modes__STATE_VARIABLE_ModeInfo_28);
    }
#line 1193 "modes.m"
    {
#line 1193 "modes.m"
      MR_Word base;
#line 1193 "modes.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1193 "modes.m"
      *check_hlds__modes__Case_16 = base;
#line 1193 "modes.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__MainConsId_18));
#line 1193 "modes.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__OtherConsIds_19));
#line 1193 "modes.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modes__Goal_26));
#line 1193 "modes.m"
    }
#line 1168 "modes.m"
  }
#line 1163 "modes.m"
}

#line 1143 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_disj_11_p_0(
#line 1143 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_12,
#line 1143 "modes.m"
  MR_Word check_hlds__modes__HeadVars_13,
#line 1143 "modes.m"
  MR_Word check_hlds__modes__InstMap0_14,
#line 1143 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_15,
#line 1143 "modes.m"
  MR_Word check_hlds__modes__DisjDetism_16,
#line 1143 "modes.m"
  MR_Word check_hlds__modes__DisjNonLocals_17,
#line 1143 "modes.m"
  MR_Word check_hlds__modes__NondetLiveVars0_18,
#line 1143 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_19,
#line 1143 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_20,
#line 1143 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_24,
#line 1143 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_25)
#line 1143 "modes.m"
{
#line 1150 "modes.m"
  {
#line 1150 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1150 "modes.m"
    MR_Word check_hlds__modes__Disjunct1_22;
#line 1150 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_27_27;
#line 1150 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_28_28;
#line 1150 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_29_29;
#line 1150 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30;
#line 1150 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31;
#line 1150 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33;
#line 1160 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_23;

#line 1151 "modes.m"
    {
#line 1151 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_24, &check_hlds__modes__STATE_VARIABLE_ModeInfo_27_27);
    }
#line 1152 "modes.m"
    {
#line 1152 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_14, check_hlds__modes__STATE_VARIABLE_ModeInfo_27_27, &check_hlds__modes__STATE_VARIABLE_ModeInfo_28_28);
    }
#line 1153 "modes.m"
    {
#line 1153 "modes.m"
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__modes__NondetLiveVars0_18, check_hlds__modes__STATE_VARIABLE_ModeInfo_28_28, &check_hlds__modes__STATE_VARIABLE_ModeInfo_29_29);
    }
#line 1154 "modes.m"
    {
#line 1154 "modes.m"
      check_hlds__unique_modes__prepare_for_disjunct_5_p_0(check_hlds__modes__Disjunct0_19, check_hlds__modes__DisjDetism_16, check_hlds__modes__DisjNonLocals_17, check_hlds__modes__STATE_VARIABLE_ModeInfo_29_29, &check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30);
    }
#line 1156 "modes.m"
    {
#line 1156 "modes.m"
      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modes__Disjunct0_19, &check_hlds__modes__Disjunct1_22, check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31);
    }
#line 1157 "modes.m"
    {
#line 1157 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33);
    }
#line 1160 "modes.m"
    {
#line 1160 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_13, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_15, &check_hlds__modes___ArgFinalInsts_23, check_hlds__modes__Disjunct1_22, check_hlds__modes__Disjunct_20, check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, check_hlds__modes__STATE_VARIABLE_ModeInfo_25);
    }
#line 1150 "modes.m"
  }
#line 1143 "modes.m"
}

#line 1109 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_switch_9_p_0(
#line 1109 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1109 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1109 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1109 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1109 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1109 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1109 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1109 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1109 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28)
#line 1109 "modes.m"
{
#line 1114 "modes.m"
  {
#line 1114 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1114 "modes.m"
    MR_Word check_hlds__modes__MainConsId_18;
#line 1114 "modes.m"
    MR_Word check_hlds__modes__OtherConsIds_19;
#line 1114 "modes.m"
    MR_Word check_hlds__modes__Goal0_20;
#line 1114 "modes.m"
    MR_Word check_hlds__modes__InstMap1_21;
#line 1114 "modes.m"
    MR_Word check_hlds__modes__Goal1_22;
#line 1114 "modes.m"
    MR_Word check_hlds__modes__InstMap_23;
#line 1114 "modes.m"
    MR_Word check_hlds__modes__Goal2_24;
#line 1114 "modes.m"
    MR_Word check_hlds__modes__Goal_26;
#line 1114 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30;
#line 1114 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31;
#line 1114 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1114 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33;
#line 1114 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35;
#line 1139 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_25;

#line 1115 "modes.m"
    {
#line 1115 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27, &check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30);
    }
#line 1116 "modes.m"
    check_hlds__modes__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 0)));
#line 1116 "modes.m"
    check_hlds__modes__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 1)));
#line 1116 "modes.m"
    check_hlds__modes__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 2)));
#line 1117 "modes.m"
    {
#line 1117 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31);
    }
#line 1119 "modes.m"
    {
#line 1119 "modes.m"
      check_hlds__modecheck_util__modecheck_functors_test_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__MainConsId_18, check_hlds__modes__OtherConsIds_19, check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32);
    }
#line 1122 "modes.m"
    {
#line 1122 "modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__InstMap1_21);
    }
#line 1123 "modes.m"
    {
#line 1123 "modes.m"
      check_hlds__modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modes__InstMap1_21);
    }
#line 1126 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1124 "modes.m"
      {
#line 1124 "modes.m"
        {
#line 1124 "modes.m"
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modes__Goal0_20, &check_hlds__modes__Goal1_22, check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33);
        }
#line 1125 "modes.m"
        {
#line 1125 "modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__InstMap_23);
        }
#line 1124 "modes.m"
      }
#line 1126 "modes.m"
    else
#line 1130 "modes.m"
      {
#line 1130 "modes.m"
        {
#line 1130 "modes.m"
          check_hlds__modes__Goal1_22 = hlds__make_goal__true_goal_0_f_0();
        }
#line 1131 "modes.m"
        check_hlds__modes__InstMap_23 = check_hlds__modes__InstMap1_21;
#line 1131 "modes.m"
        check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33 = check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1130 "modes.m"
      }
#line 1135 "modes.m"
    {
#line 1135 "modes.m"
      check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__InstMap0_12, check_hlds__modes__InstMap_23, check_hlds__modes__Goal1_22, &check_hlds__modes__Goal2_24);
    }
#line 1136 "modes.m"
    {
#line 1136 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35);
    }
#line 1139 "modes.m"
    {
#line 1139 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_11, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_13, &check_hlds__modes___ArgFinalInsts_25, check_hlds__modes__Goal2_24, &check_hlds__modes__Goal_26, check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35, check_hlds__modes__STATE_VARIABLE_ModeInfo_28);
    }
#line 1141 "modes.m"
    {
#line 1141 "modes.m"
      MR_Word base;
#line 1141 "modes.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1141 "modes.m"
      *check_hlds__modes__Case_16 = base;
#line 1141 "modes.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__MainConsId_18));
#line 1141 "modes.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__OtherConsIds_19));
#line 1141 "modes.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modes__Goal_26));
#line 1141 "modes.m"
    }
#line 1114 "modes.m"
  }
#line 1109 "modes.m"
}

#line 1094 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_disj_8_p_0(
#line 1094 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_9,
#line 1094 "modes.m"
  MR_Word check_hlds__modes__HeadVars_10,
#line 1094 "modes.m"
  MR_Word check_hlds__modes__InstMap0_11,
#line 1094 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_12,
#line 1094 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_13,
#line 1094 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_14,
#line 1094 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
#line 1094 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19)
#line 1094 "modes.m"
{
#line 1099 "modes.m"
  {
#line 1099 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1099 "modes.m"
    MR_Word check_hlds__modes__Disjunct1_16;
#line 1099 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_21_21;
#line 1099 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_22_22;
#line 1099 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_23_23;
#line 1099 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_25_25;
#line 1106 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_17;

#line 1100 "modes.m"
    {
#line 1100 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_9, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__STATE_VARIABLE_ModeInfo_21_21);
    }
#line 1101 "modes.m"
    {
#line 1101 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_11, check_hlds__modes__STATE_VARIABLE_ModeInfo_21_21, &check_hlds__modes__STATE_VARIABLE_ModeInfo_22_22);
    }
#line 1102 "modes.m"
    {
#line 1102 "modes.m"
      check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modes__Disjunct0_13, &check_hlds__modes__Disjunct1_16, check_hlds__modes__STATE_VARIABLE_ModeInfo_22_22, &check_hlds__modes__STATE_VARIABLE_ModeInfo_23_23);
    }
#line 1103 "modes.m"
    {
#line 1103 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_9, check_hlds__modes__STATE_VARIABLE_ModeInfo_23_23, &check_hlds__modes__STATE_VARIABLE_ModeInfo_25_25);
    }
#line 1106 "modes.m"
    {
#line 1106 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_10, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_12, &check_hlds__modes___ArgFinalInsts_17, check_hlds__modes__Disjunct1_16, check_hlds__modes__Disjunct_14, check_hlds__modes__STATE_VARIABLE_ModeInfo_25_25, check_hlds__modes__STATE_VARIABLE_ModeInfo_19);
    }
#line 1099 "modes.m"
  }
#line 1094 "modes.m"
}

#line 1060 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0_1(
#line 1060 "modes.m"
  MR_Box check_hlds__modes__closure_arg)
#line 1060 "modes.m"
{
#line 1060 "modes.m"
  {
#line 1060 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1060 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;

#line 1060 "modes.m"
    {
#line 1060 "modes.m"
      return check_hlds__modes__succeeded = check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1060__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))));
    }
#line 1060 "modes.m"
    return check_hlds__modes__succeeded;
#line 1060 "modes.m"
  }
#line 1060 "modes.m"
}

#line 943 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0(
#line 943 "modes.m"
  MR_Word check_hlds__modes__HowToCheckGoal_8,
#line 943 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26,
#line 943 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_OldPredTable_27,
#line 943 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28,
#line 943 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_29,
#line 943 "modes.m"
  MR_Word * check_hlds__modes__Changed_11,
#line 943 "modes.m"
  MR_Word * check_hlds__modes__Specs_12)
#line 943 "modes.m"
{
#line 948 "modes.m"
  {
#line 948 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 948 "modes.m"
    MR_Word check_hlds__modes__Requests0_13;
#line 948 "modes.m"
    MR_Word check_hlds__modes__RequestQueue0_14;
#line 978 "modes.m"
    MR_Word check_hlds__modes__PredProcId_15;
#line 978 "modes.m"
    MR_Word check_hlds__modes__RequestQueue1_16;
#line 951 "modes.m"
    MR_Box check_hlds__modes__conv0_PredProcId_15;

#line 949 "modes.m"
    {
#line 949 "modes.m"
      hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28, &check_hlds__modes__Requests0_13);
    }
#line 950 "modes.m"
    {
#line 950 "modes.m"
      check_hlds__unify_proc__get_req_queue_2_p_0(check_hlds__modes__Requests0_13, &check_hlds__modes__RequestQueue0_14);
    }
#line 951 "modes.m"
    {
#line 951 "modes.m"
      check_hlds__modes__succeeded = mercury__queue__get_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, &check_hlds__modes__conv0_PredProcId_15, check_hlds__modes__RequestQueue0_14, &check_hlds__modes__RequestQueue1_16);
    }
#line 951 "modes.m"
    if (check_hlds__modes__succeeded)
#line 951 "modes.m"
      {
#line 951 "modes.m"
        check_hlds__modes__PredProcId_15 = ((MR_Word) check_hlds__modes__conv0_PredProcId_15);
#line 951 "modes.m"
        check_hlds__modes__succeeded = MR_TRUE;
#line 951 "modes.m"
      }
#line 978 "modes.m"
    if (check_hlds__modes__succeeded)
#line 952 "modes.m"
      {
#line 952 "modes.m"
        MR_Word check_hlds__modes__Requests1_17;
#line 952 "modes.m"
        MR_Word check_hlds__modes__PredId_18;
#line 952 "modes.m"
        MR_Word check_hlds__modes__ValidPredIds_20;
#line 952 "modes.m"
        MR_Word check_hlds__modes__HeadChanged_22;
#line 952 "modes.m"
        MR_Word check_hlds__modes__HeadSpecs_23;
#line 952 "modes.m"
        MR_Word check_hlds__modes__TailChanged_24;
#line 952 "modes.m"
        MR_Word check_hlds__modes__TailSpecs_25;
#line 952 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30;
#line 952 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31;
#line 952 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_OldPredTable_34_34;
#line 952 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35;
#line 961 "modes.m"
        MR_Integer check_hlds__modes___ProcId_19;

#line 952 "modes.m"
        {
#line 952 "modes.m"
          check_hlds__unify_proc__set_req_queue_3_p_0(check_hlds__modes__RequestQueue1_16, check_hlds__modes__Requests0_13, &check_hlds__modes__Requests1_17);
        }
#line 953 "modes.m"
        {
#line 953 "modes.m"
          hlds__hlds_module__module_info_set_proc_requests_3_p_0(check_hlds__modes__Requests1_17, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30);
        }
#line 961 "modes.m"
        check_hlds__modes__PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 0)));
#line 961 "modes.m"
        check_hlds__modes___ProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 1)));
#line 962 "modes.m"
        {
#line 962 "modes.m"
          hlds__hlds_module__module_info_get_valid_predids_3_p_0(&check_hlds__modes__ValidPredIds_20, check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31);
        }
#line 963 "modes.m"
        {
#line 963 "modes.m"
          check_hlds__modes__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (check_hlds__modes__PredId_18)), check_hlds__modes__ValidPredIds_20);
        }
#line 970 "modes.m"
        if (check_hlds__modes__succeeded)
#line 967 "modes.m"
          {
#line 967 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_61_111;
#line 967 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_62_112;
#line 967 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_63_113;
#line 967 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_64_114;
#line 967 "modes.m"
            MR_Word check_hlds__modes__PredId_70;
#line 967 "modes.m"
            MR_Integer check_hlds__modes__ProcId_71;
#line 967 "modes.m"
            MR_Word check_hlds__modes__Preds0_72;
#line 967 "modes.m"
            MR_Word check_hlds__modes__PredInfo0_73;
#line 967 "modes.m"
            MR_Word check_hlds__modes__Procs0_74;
#line 967 "modes.m"
            MR_Word check_hlds__modes__ProcInfo0_75;
#line 967 "modes.m"
            MR_Word check_hlds__modes__ProcInfo1_76;
#line 967 "modes.m"
            MR_Word check_hlds__modes__Procs1_77;
#line 967 "modes.m"
            MR_Word check_hlds__modes__PredInfo1_78;
#line 967 "modes.m"
            MR_Word check_hlds__modes__Preds1_79;
#line 967 "modes.m"
            MR_Word check_hlds__modes__ModeSpecs_80;
#line 967 "modes.m"
            MR_Word check_hlds__modes__Globals_81;
#line 967 "modes.m"
            MR_Word check_hlds__modes__ModeErrors_82;
#line 967 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_46_96;
#line 967 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97;
#line 967 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Changed_48_98;
#line 964 "modes.m"
            MR_Word check_hlds__modes__Globals_47;
#line 964 "modes.m"
            MR_Word check_hlds__modes__VeryVerbose_48;
#line 1020 "modes.m"
            MR_Box check_hlds__modes__conv1_PredInfo0_73;
#line 1022 "modes.m"
            MR_Box check_hlds__modes__conv2_ProcInfo0_75;

#line 987 "modes.m"
            {
#line 987 "modes.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31, &check_hlds__modes__Globals_47);
            }
#line 988 "modes.m"
            {
#line 988 "modes.m"
              libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_47, (MR_Integer) 45, &check_hlds__modes__VeryVerbose_48);
            }
#line 1006 "modes.m"
            if ((check_hlds__modes__VeryVerbose_48 == (MR_Integer) 0))
#line 1007 "modes.m"
              {
#line 1007 "modes.m"
              }
#line 1006 "modes.m"
            else
#line 990 "modes.m"
              {
#line 994 "modes.m"
                if ((check_hlds__modes__HowToCheckGoal_8 == (MR_Integer) 0))
#line 992 "modes.m"
                  {
#line 993 "modes.m"
                    {
#line 993 "modes.m"
                      mercury__io__write_string_3_p_0((MR_String) "% Mode-analyzing ");
                    }
#line 992 "modes.m"
                  }
#line 994 "modes.m"
                else
#line 995 "modes.m"
                  {
#line 996 "modes.m"
                    {
#line 996 "modes.m"
                      mercury__io__write_string_3_p_0((MR_String) "% Analyzing modes, determinism, and unique-modes for\n% ");
                    }
#line 995 "modes.m"
                  }
#line 999 "modes.m"
                {
#line 999 "modes.m"
                  hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31, check_hlds__modes__PredProcId_15);
                }
#line 1000 "modes.m"
                {
#line 1000 "modes.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 990 "modes.m"
              }
#line 1017 "modes.m"
            check_hlds__modes__PredId_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 0)));
#line 1017 "modes.m"
            check_hlds__modes__ProcId_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 1)));
#line 1019 "modes.m"
            {
#line 1019 "modes.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31, &check_hlds__modes__Preds0_72);
            }
#line 4387 "check_hlds.modes.c"
            check_hlds__modes__TypeCtorInfo_61_111 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 4389 "check_hlds.modes.c"
            check_hlds__modes__TypeCtorInfo_62_112 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 1020 "modes.m"
            {
#line 1020 "modes.m"
              mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_61_111, check_hlds__modes__TypeCtorInfo_62_112, check_hlds__modes__Preds0_72, ((MR_Box) (check_hlds__modes__PredId_70)), &check_hlds__modes__conv1_PredInfo0_73);
            }
#line 1020 "modes.m"
            check_hlds__modes__PredInfo0_73 = ((MR_Word) check_hlds__modes__conv1_PredInfo0_73);
#line 1021 "modes.m"
            {
#line 1021 "modes.m"
              hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__modes__PredInfo0_73, &check_hlds__modes__Procs0_74);
            }
#line 4403 "check_hlds.modes.c"
            check_hlds__modes__TypeCtorInfo_63_113 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 4405 "check_hlds.modes.c"
            check_hlds__modes__TypeCtorInfo_64_114 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 1022 "modes.m"
            {
#line 1022 "modes.m"
              mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_63_113, check_hlds__modes__TypeCtorInfo_64_114, check_hlds__modes__Procs0_74, ((MR_Box) (check_hlds__modes__ProcId_71)), &check_hlds__modes__conv2_ProcInfo0_75);
            }
#line 1022 "modes.m"
            check_hlds__modes__ProcInfo0_75 = ((MR_Word) check_hlds__modes__conv2_ProcInfo0_75);
#line 1024 "modes.m"
            {
#line 1024 "modes.m"
              hlds__hlds_pred__proc_info_set_can_process_3_p_0((MR_Integer) 1, check_hlds__modes__ProcInfo0_75, &check_hlds__modes__ProcInfo1_76);
            }
#line 1026 "modes.m"
            {
#line 1026 "modes.m"
              mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_63_113, check_hlds__modes__TypeCtorInfo_64_114, ((MR_Box) (check_hlds__modes__ProcId_71)), ((MR_Box) (check_hlds__modes__ProcInfo1_76)), check_hlds__modes__Procs0_74, &check_hlds__modes__Procs1_77);
            }
#line 1027 "modes.m"
            {
#line 1027 "modes.m"
              hlds__hlds_pred__pred_info_set_procedures_3_p_0(check_hlds__modes__Procs1_77, check_hlds__modes__PredInfo0_73, &check_hlds__modes__PredInfo1_78);
            }
#line 1028 "modes.m"
            {
#line 1028 "modes.m"
              mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_61_111, check_hlds__modes__TypeCtorInfo_62_112, ((MR_Box) (check_hlds__modes__PredId_70)), ((MR_Box) (check_hlds__modes__PredInfo1_78)), check_hlds__modes__Preds0_72, &check_hlds__modes__Preds1_79);
            }
#line 1029 "modes.m"
            {
#line 1029 "modes.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__Preds1_79, check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_46_96);
            }
#line 620 "modes.m"
            {
#line 620 "modes.m"
              check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_71, check_hlds__modes__PredId_70, (MR_Integer) 0, (MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ModuleInfo_46_96, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97, (MR_Integer) 0, &check_hlds__modes__STATE_VARIABLE_Changed_48_98, &check_hlds__modes__ModeSpecs_80);
            }
#line 1034 "modes.m"
            {
#line 1034 "modes.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97, &check_hlds__modes__Globals_81);
            }
#line 1035 "modes.m"
            {
#line 1035 "modes.m"
              check_hlds__modes__ModeErrors_82 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__modes__Globals_81, check_hlds__modes__ModeSpecs_80);
            }
#line 1040 "modes.m"
            if ((check_hlds__modes__ModeErrors_82 == (MR_Integer) 0))
#line 1067 "modes.m"
              if ((check_hlds__modes__HowToCheckGoal_8 == (MR_Integer) 0))
#line 1068 "modes.m"
                {
#line 1069 "modes.m"
                  check_hlds__modes__HeadSpecs_23 = check_hlds__modes__ModeSpecs_80;
#line 1069 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_OldPredTable_34_34 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 1069 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97;
#line 1069 "modes.m"
                  check_hlds__modes__HeadChanged_22 = check_hlds__modes__STATE_VARIABLE_Changed_48_98;
#line 1068 "modes.m"
                }
#line 1067 "modes.m"
              else
#line 1043 "modes.m"
                {
#line 1043 "modes.m"
                  MR_Word check_hlds__modes__TypeCtorInfo_19_151;
#line 1043 "modes.m"
                  MR_Word check_hlds__modes__TypeCtorInfo_20_152;
#line 1043 "modes.m"
                  MR_Word check_hlds__modes__Preds2_83;
#line 1043 "modes.m"
                  MR_Word check_hlds__modes__PredInfo2_84;
#line 1043 "modes.m"
                  MR_Word check_hlds__modes__Procs2_85;
#line 1043 "modes.m"
                  MR_Word check_hlds__modes__ProcInfo2_86;
#line 1043 "modes.m"
                  MR_Word check_hlds__modes__SwitchDetectInfo_87;
#line 1043 "modes.m"
                  MR_Word check_hlds__modes__ProcInfo3_88;
#line 1043 "modes.m"
                  MR_Word check_hlds__modes__Procs3_89;
#line 1043 "modes.m"
                  MR_Word check_hlds__modes__PredInfo3_90;
#line 1043 "modes.m"
                  MR_Word check_hlds__modes__Preds3_91;
#line 1043 "modes.m"
                  MR_Word check_hlds__modes__DetismSpecs_92;
#line 1043 "modes.m"
                  MR_Word check_hlds__modes__NewChanged_93;
#line 1043 "modes.m"
                  MR_Word check_hlds__modes__UniqueSpecs_94;
#line 1043 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_49_99;
#line 1043 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_50_100;
#line 1043 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_101;
#line 1043 "modes.m"
                  MR_Word check_hlds__modes__V_102_102;
#line 1043 "modes.m"
                  MR_Word check_hlds__modes__ProcInfo_145;
#line 1043 "modes.m"
                  MR_Word check_hlds__modes__OldPredInfo0_146;
#line 1043 "modes.m"
                  MR_Word check_hlds__modes__OldProcTable0_147;
#line 1043 "modes.m"
                  MR_Word check_hlds__modes__OldProcTable_148;
#line 1043 "modes.m"
                  MR_Word check_hlds__modes__OldPredInfo_149;
#line 1046 "modes.m"
                  MR_Box check_hlds__modes__conv3_PredInfo2_84;
#line 1048 "modes.m"
                  MR_Box check_hlds__modes__conv4_ProcInfo2_86;
#line 1080 "modes.m"
                  MR_Word check_hlds__modes___PredInfo_144;
#line 1082 "modes.m"
                  MR_Box check_hlds__modes__conv5_OldPredInfo0_146;

#line 1045 "modes.m"
                  {
#line 1045 "modes.m"
                    hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97, &check_hlds__modes__Preds2_83);
                  }
#line 1046 "modes.m"
                  {
#line 1046 "modes.m"
                    mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_61_111, check_hlds__modes__TypeCtorInfo_62_112, check_hlds__modes__Preds2_83, ((MR_Box) (check_hlds__modes__PredId_70)), &check_hlds__modes__conv3_PredInfo2_84);
                  }
#line 1046 "modes.m"
                  check_hlds__modes__PredInfo2_84 = ((MR_Word) check_hlds__modes__conv3_PredInfo2_84);
#line 1047 "modes.m"
                  {
#line 1047 "modes.m"
                    hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__modes__PredInfo2_84, &check_hlds__modes__Procs2_85);
                  }
#line 1048 "modes.m"
                  {
#line 1048 "modes.m"
                    mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_63_113, check_hlds__modes__TypeCtorInfo_64_114, check_hlds__modes__Procs2_85, ((MR_Box) (check_hlds__modes__ProcId_71)), &check_hlds__modes__conv4_ProcInfo2_86);
                  }
#line 1048 "modes.m"
                  check_hlds__modes__ProcInfo2_86 = ((MR_Word) check_hlds__modes__conv4_ProcInfo2_86);
#line 1050 "modes.m"
                  {
#line 1050 "modes.m"
                    check_hlds__modes__SwitchDetectInfo_87 = check_hlds__switch_detection__init_switch_detect_info_1_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97);
                  }
#line 1051 "modes.m"
                  {
#line 1051 "modes.m"
                    check_hlds__switch_detection__detect_switches_in_proc_3_p_0(check_hlds__modes__SwitchDetectInfo_87, check_hlds__modes__ProcInfo2_86, &check_hlds__modes__ProcInfo3_88);
                  }
#line 1053 "modes.m"
                  {
#line 1053 "modes.m"
                    mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_63_113, check_hlds__modes__TypeCtorInfo_64_114, ((MR_Box) (check_hlds__modes__ProcId_71)), ((MR_Box) (check_hlds__modes__ProcInfo3_88)), check_hlds__modes__Procs2_85, &check_hlds__modes__Procs3_89);
                  }
#line 1054 "modes.m"
                  {
#line 1054 "modes.m"
                    hlds__hlds_pred__pred_info_set_procedures_3_p_0(check_hlds__modes__Procs3_89, check_hlds__modes__PredInfo2_84, &check_hlds__modes__PredInfo3_90);
                  }
#line 1055 "modes.m"
                  {
#line 1055 "modes.m"
                    mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_61_111, check_hlds__modes__TypeCtorInfo_62_112, ((MR_Box) (check_hlds__modes__PredId_70)), ((MR_Box) (check_hlds__modes__PredInfo3_90)), check_hlds__modes__Preds2_83, &check_hlds__modes__Preds3_91);
                  }
#line 1056 "modes.m"
                  {
#line 1056 "modes.m"
                    hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__Preds3_91, check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_49_99);
                  }
#line 1058 "modes.m"
                  {
#line 1058 "modes.m"
                    check_hlds__cse_detection__detect_cse_in_proc_4_p_0(check_hlds__modes__PredId_70, check_hlds__modes__ProcId_71, check_hlds__modes__STATE_VARIABLE_ModuleInfo_49_99, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_50_100);
                  }
#line 1059 "modes.m"
                  {
#line 1059 "modes.m"
                    check_hlds__det_analysis__determinism_check_proc_5_p_0(check_hlds__modes__ProcId_71, check_hlds__modes__PredId_70, check_hlds__modes__STATE_VARIABLE_ModuleInfo_50_100, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_101, &check_hlds__modes__DetismSpecs_92);
                  }
#line 1060 "modes.m"
                  {
#line 1060 "modes.m"
                    check_hlds__modes__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1060 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_102_102, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_9[0]));
#line 1060 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_102_102, 1) = ((MR_Box) (check_hlds__modes__modecheck_queued_procs_7_p_0_1));
#line 1060 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_102_102, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1060 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_102_102, 3) = ((MR_Box) (check_hlds__modes__DetismSpecs_92));
#line 1060 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_102_102, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1060 "modes.m"
                  }
#line 1060 "modes.m"
                  {
#line 1060 "modes.m"
                    mercury__require__expect_4_p_0(check_hlds__modes__V_102_102, (MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.modecheck_queued_proc\'/8", (MR_String) "found detism error");
                  }
#line 1080 "modes.m"
                  {
#line 1080 "modes.m"
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_101, check_hlds__modes__PredId_70, check_hlds__modes__ProcId_71, &check_hlds__modes___PredInfo_144, &check_hlds__modes__ProcInfo_145);
                  }
#line 4619 "check_hlds.modes.c"
                  check_hlds__modes__TypeCtorInfo_19_151 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 4621 "check_hlds.modes.c"
                  check_hlds__modes__TypeCtorInfo_20_152 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 1082 "modes.m"
                  {
#line 1082 "modes.m"
                    mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_19_151, check_hlds__modes__TypeCtorInfo_20_152, check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26, ((MR_Box) (check_hlds__modes__PredId_70)), &check_hlds__modes__conv5_OldPredInfo0_146);
                  }
#line 1082 "modes.m"
                  check_hlds__modes__OldPredInfo0_146 = ((MR_Word) check_hlds__modes__conv5_OldPredInfo0_146);
#line 1083 "modes.m"
                  {
#line 1083 "modes.m"
                    hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__modes__OldPredInfo0_146, &check_hlds__modes__OldProcTable0_147);
                  }
#line 1084 "modes.m"
                  {
#line 1084 "modes.m"
                    mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (check_hlds__modes__ProcId_71)), ((MR_Box) (check_hlds__modes__ProcInfo_145)), check_hlds__modes__OldProcTable0_147, &check_hlds__modes__OldProcTable_148);
                  }
#line 1085 "modes.m"
                  {
#line 1085 "modes.m"
                    hlds__hlds_pred__pred_info_set_procedures_3_p_0(check_hlds__modes__OldProcTable_148, check_hlds__modes__OldPredInfo0_146, &check_hlds__modes__OldPredInfo_149);
                  }
#line 1086 "modes.m"
                  {
#line 1086 "modes.m"
                    mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_19_151, check_hlds__modes__TypeCtorInfo_20_152, ((MR_Box) (check_hlds__modes__PredId_70)), ((MR_Box) (check_hlds__modes__OldPredInfo_149)), check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26, &check_hlds__modes__STATE_VARIABLE_OldPredTable_34_34);
                  }
#line 1063 "modes.m"
                  {
#line 1063 "modes.m"
                    check_hlds__unique_modes__unique_modes_check_proc_6_p_0(check_hlds__modes__ProcId_71, check_hlds__modes__PredId_70, check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_101, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35, &check_hlds__modes__NewChanged_93, &check_hlds__modes__UniqueSpecs_94);
                  }
#line 1065 "modes.m"
                  {
#line 1065 "modes.m"
                    mercury__bool__or_3_p_0(check_hlds__modes__NewChanged_93, check_hlds__modes__STATE_VARIABLE_Changed_48_98, &check_hlds__modes__HeadChanged_22);
                  }
#line 1066 "modes.m"
                  {
#line 1066 "modes.m"
                    check_hlds__modes__HeadSpecs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__ModeSpecs_80, check_hlds__modes__UniqueSpecs_94);
                  }
#line 1043 "modes.m"
                }
#line 1040 "modes.m"
            else
#line 1037 "modes.m"
              {
#line 1038 "modes.m"
                {
#line 1038 "modes.m"
                  hlds__hlds_module__module_info_remove_predid_3_p_0(check_hlds__modes__PredId_70, check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35);
                }
#line 1039 "modes.m"
                check_hlds__modes__HeadSpecs_23 = check_hlds__modes__ModeSpecs_80;
#line 1039 "modes.m"
                check_hlds__modes__STATE_VARIABLE_OldPredTable_34_34 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 1039 "modes.m"
                check_hlds__modes__HeadChanged_22 = check_hlds__modes__STATE_VARIABLE_Changed_48_98;
#line 1037 "modes.m"
              }
#line 967 "modes.m"
          }
#line 970 "modes.m"
        else
#line 971 "modes.m"
          {
#line 971 "modes.m"
            check_hlds__modes__HeadSpecs_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 972 "modes.m"
            check_hlds__modes__HeadChanged_22 = (MR_Integer) 0;
#line 972 "modes.m"
            check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31;
#line 972 "modes.m"
            check_hlds__modes__STATE_VARIABLE_OldPredTable_34_34 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 971 "modes.m"
          }
#line 974 "modes.m"
        {
#line 974 "modes.m"
          check_hlds__modes__modecheck_queued_procs_7_p_0(check_hlds__modes__HowToCheckGoal_8, check_hlds__modes__STATE_VARIABLE_OldPredTable_34_34, check_hlds__modes__STATE_VARIABLE_OldPredTable_27, check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35, check_hlds__modes__STATE_VARIABLE_ModuleInfo_29, &check_hlds__modes__TailChanged_24, &check_hlds__modes__TailSpecs_25);
        }
#line 976 "modes.m"
        {
#line 976 "modes.m"
          mercury__bool__or_3_p_0(check_hlds__modes__HeadChanged_22, check_hlds__modes__TailChanged_24, check_hlds__modes__Changed_11);
        }
#line 977 "modes.m"
        {
#line 977 "modes.m"
          *check_hlds__modes__Specs_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__HeadSpecs_23, check_hlds__modes__TailSpecs_25);
        }
#line 952 "modes.m"
      }
#line 978 "modes.m"
    else
#line 979 "modes.m"
      {
#line 979 "modes.m"
        *check_hlds__modes__Changed_11 = (MR_Integer) 0;
#line 980 "modes.m"
        *check_hlds__modes__Specs_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 980 "modes.m"
        *check_hlds__modes__STATE_VARIABLE_ModuleInfo_29 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28;
#line 980 "modes.m"
        *check_hlds__modes__STATE_VARIABLE_OldPredTable_27 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 979 "modes.m"
      }
#line 948 "modes.m"
  }
#line 943 "modes.m"
}

#line 901 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0_5(
#line 901 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 901 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 901 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 901 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 901 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4)
#line 901 "modes.m"
{
#line 901 "modes.m"
  {
#line 901 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 901 "modes.m"
    MR_Word check_hlds__modes__conv10_Case_16;
#line 901 "modes.m"
    MR_Word check_hlds__modes__conv9_STATE_VARIABLE_ModeInfo_28;

#line 901 "modes.m"
    {
#line 901 "modes.m"
      check_hlds__modes__unique_modecheck_clause_switch_9_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 7))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv10_Case_16, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv9_STATE_VARIABLE_ModeInfo_28);
    }
#line 901 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv10_Case_16));
#line 901 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv9_STATE_VARIABLE_ModeInfo_28));
#line 901 "modes.m"
  }
#line 901 "modes.m"
}

#line 893 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0_4(
#line 893 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 893 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 893 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 893 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 893 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4)
#line 893 "modes.m"
{
#line 893 "modes.m"
  {
#line 893 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 893 "modes.m"
    MR_Word check_hlds__modes__conv7_Disjunct_20;
#line 893 "modes.m"
    MR_Word check_hlds__modes__conv6_STATE_VARIABLE_ModeInfo_25;

#line 893 "modes.m"
    {
#line 893 "modes.m"
      check_hlds__modes__unique_modecheck_clause_disj_11_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 9))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv7_Disjunct_20, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv6_STATE_VARIABLE_ModeInfo_25);
    }
#line 893 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv7_Disjunct_20));
#line 893 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv6_STATE_VARIABLE_ModeInfo_25));
#line 893 "modes.m"
  }
#line 893 "modes.m"
}

#line 867 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0_3(
#line 867 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 867 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 867 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 867 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 867 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4)
#line 867 "modes.m"
{
#line 867 "modes.m"
  {
#line 867 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 867 "modes.m"
    MR_Word check_hlds__modes__conv4_Case_16;
#line 867 "modes.m"
    MR_Word check_hlds__modes__conv3_STATE_VARIABLE_ModeInfo_28;

#line 867 "modes.m"
    {
#line 867 "modes.m"
      check_hlds__modes__modecheck_clause_switch_9_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 7))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv4_Case_16, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv3_STATE_VARIABLE_ModeInfo_28);
    }
#line 867 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv4_Case_16));
#line 867 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv3_STATE_VARIABLE_ModeInfo_28));
#line 867 "modes.m"
  }
#line 867 "modes.m"
}

#line 860 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0_2(
#line 860 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 860 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 860 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 860 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 860 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4)
#line 860 "modes.m"
{
#line 860 "modes.m"
  {
#line 860 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 860 "modes.m"
    MR_Word check_hlds__modes__conv1_Disjunct_14;
#line 860 "modes.m"
    MR_Word check_hlds__modes__conv0_STATE_VARIABLE_ModeInfo_19;

#line 860 "modes.m"
    {
#line 860 "modes.m"
      check_hlds__modes__modecheck_clause_disj_8_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv1_Disjunct_14, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv0_STATE_VARIABLE_ModeInfo_19);
    }
#line 860 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv1_Disjunct_14));
#line 860 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv0_STATE_VARIABLE_ModeInfo_19));
#line 860 "modes.m"
  }
#line 860 "modes.m"
}

#line 841 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0_1(
#line 841 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 841 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1)
#line 841 "modes.m"
{
#line 841 "modes.m"
  {
#line 841 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 841 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;

#line 841 "modes.m"
    {
#line 841 "modes.m"
      return check_hlds__modes__succeeded = check_hlds__type_util__var_is_or_may_contain_solver_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modes__wrapper_arg_1));
    }
#line 841 "modes.m"
    return check_hlds__modes__succeeded;
#line 841 "modes.m"
  }
#line 841 "modes.m"
}

#line 813 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0(
#line 813 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_15,
#line 813 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_16,
#line 813 "modes.m"
  MR_Word check_hlds__modes__InferModes_17,
#line 813 "modes.m"
  MR_Word check_hlds__modes__Markers_18,
#line 813 "modes.m"
  MR_Word check_hlds__modes__PredId_19,
#line 813 "modes.m"
  MR_Integer check_hlds__modes__ProcId_20,
#line 813 "modes.m"
  MR_Word check_hlds__modes__Body0_21,
#line 813 "modes.m"
  MR_Word * check_hlds__modes__Body_22,
#line 813 "modes.m"
  MR_Word check_hlds__modes__HeadVars_23,
#line 813 "modes.m"
  MR_Word check_hlds__modes__InstMap0_24,
#line 813 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_25,
#line 813 "modes.m"
  MR_Word * check_hlds__modes__ArgFinalInsts_26,
#line 813 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_63,
#line 813 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_64)
#line 813 "modes.m"
{
#line 821 "modes.m"
  {
#line 821 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 821 "modes.m"
    MR_String check_hlds__modes__CheckpointMsg_28;
#line 821 "modes.m"
    MR_Integer check_hlds__modes__V_68_68;
#line 821 "modes.m"
    MR_Integer check_hlds__modes__V_71_71;
#line 821 "modes.m"
    MR_String check_hlds__modes__V_152_152;
#line 821 "modes.m"
    MR_String check_hlds__modes__V_154_154;
#line 821 "modes.m"
    MR_String check_hlds__modes__V_155_155;
#line 821 "modes.m"
    MR_String check_hlds__modes__V_156_156;
#line 917 "modes.m"
    MR_Word check_hlds__modes__BodyGoalInfo0_30;
#line 917 "modes.m"
    MR_Word check_hlds__modes__ClausesForm0_34;
#line 917 "modes.m"
    MR_Word check_hlds__modes__BodyNonLocals_40;
#line 826 "modes.m"
    MR_Word check_hlds__modes__TypeInfo_120_120;
#line 826 "modes.m"
    MR_Word check_hlds__modes__TypeCtorInfo_122_122;
#line 826 "modes.m"
    MR_Word check_hlds__modes__BodyGoalExpr0_29;
#line 826 "modes.m"
    MR_Word check_hlds__modes__VarTypes0_41;
#line 826 "modes.m"
    MR_Word check_hlds__modes__SolverNonLocals_42;
#line 826 "modes.m"
    MR_Word check_hlds__modes__V_73_73;
#line 826 "modes.m"
    MR_Word check_hlds__modes__V_74_74;
#line 826 "modes.m"
    MR_Word check_hlds__modes__V_75_75;

#line 823 "modes.m"
    {
#line 823 "modes.m"
      check_hlds__modes__V_68_68 = hlds__hlds_pred__pred_id_to_int_1_f_0(check_hlds__modes__PredId_19);
    }
#line 823 "modes.m"
    {
#line 823 "modes.m"
      check_hlds__modes__V_71_71 = hlds__hlds_pred__proc_id_to_int_1_f_0(check_hlds__modes__ProcId_20);
    }
#line 5000 "check_hlds.modes.c"
    {
#line 5002 "check_hlds.modes.c"
      check_hlds__modes__V_152_152 = mercury__string__int_to_string_1_f_0(check_hlds__modes__V_71_71);
    }
#line 5005 "check_hlds.modes.c"
    {
#line 5007 "check_hlds.modes.c"
      check_hlds__modes__V_154_154 = mercury__string__f_43_43_2_f_0((MR_String) "_", check_hlds__modes__V_152_152);
    }
#line 5010 "check_hlds.modes.c"
    {
#line 5012 "check_hlds.modes.c"
      check_hlds__modes__V_155_155 = mercury__string__int_to_string_1_f_0(check_hlds__modes__V_68_68);
    }
#line 5015 "check_hlds.modes.c"
    {
#line 5017 "check_hlds.modes.c"
      check_hlds__modes__V_156_156 = mercury__string__f_43_43_2_f_0(check_hlds__modes__V_155_155, check_hlds__modes__V_154_154);
    }
#line 5020 "check_hlds.modes.c"
    {
#line 5022 "check_hlds.modes.c"
      check_hlds__modes__CheckpointMsg_28 = mercury__string__f_43_43_2_f_0((MR_String) "procedure_", check_hlds__modes__V_156_156);
    }
#line 826 "modes.m"
    check_hlds__modes__succeeded = (check_hlds__modes__InferModes_17 == (MR_Integer) 0);
#line 826 "modes.m"
    if (check_hlds__modes__succeeded)
#line 826 "modes.m"
      {
#line 827 "modes.m"
        check_hlds__modes__V_73_73 = (MR_Integer) 21;
#line 827 "modes.m"
        {
#line 827 "modes.m"
          check_hlds__modes__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_18, check_hlds__modes__V_73_73);
        }
#line 826 "modes.m"
        if (check_hlds__modes__succeeded)
#line 826 "modes.m"
          {
#line 828 "modes.m"
            check_hlds__modes__BodyGoalExpr0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Body0_21, (MR_Integer) 0)));
#line 828 "modes.m"
            check_hlds__modes__BodyGoalInfo0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Body0_21, (MR_Integer) 1)));
#line 833 "modes.m"
            if (((((MR_tag((MR_Word) check_hlds__modes__BodyGoalExpr0_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_29, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 830 "modes.m"
              {
#line 830 "modes.m"
                MR_Word check_hlds__modes__Disjuncts0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_29, (MR_Integer) 1)));
#line 831 "modes.m"
                MR_Word check_hlds__modes__V_32_32;
#line 831 "modes.m"
                MR_Word check_hlds__modes__V_33_33;

#line 831 "modes.m"
                check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Disjuncts0_31)) == (MR_mktag((MR_Integer) 1)));
#line 831 "modes.m"
                if (check_hlds__modes__succeeded)
#line 831 "modes.m"
                  {
#line 831 "modes.m"
                    check_hlds__modes__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Disjuncts0_31, (MR_Integer) 0)));
#line 831 "modes.m"
                    check_hlds__modes__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Disjuncts0_31, (MR_Integer) 1)));
#line 832 "modes.m"
                    {
#line 832 "modes.m"
                      check_hlds__modes__ClausesForm0_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 832 "modes.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modes__ClausesForm0_34, 0) = ((MR_Box) (check_hlds__modes__Disjuncts0_31));
#line 832 "modes.m"
                    }
#line 832 "modes.m"
                    check_hlds__modes__succeeded = MR_TRUE;
#line 831 "modes.m"
                  }
#line 830 "modes.m"
              }
#line 833 "modes.m"
            else
#line 833 "modes.m"
              if (((((MR_tag((MR_Word) check_hlds__modes__BodyGoalExpr0_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_29, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 834 "modes.m"
                {
#line 834 "modes.m"
                  MR_Word check_hlds__modes__SwitchVar0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_29, (MR_Integer) 1)));
#line 834 "modes.m"
                  MR_Word check_hlds__modes__CanFail0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_29, (MR_Integer) 2)));
#line 834 "modes.m"
                  MR_Word check_hlds__modes__Cases0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_29, (MR_Integer) 3)));
#line 835 "modes.m"
                  MR_Word check_hlds__modes__V_38_38;
#line 835 "modes.m"
                  MR_Word check_hlds__modes__V_39_39;

#line 835 "modes.m"
                  check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Cases0_37)) == (MR_mktag((MR_Integer) 1)));
#line 835 "modes.m"
                  if (check_hlds__modes__succeeded)
#line 835 "modes.m"
                    {
#line 835 "modes.m"
                      check_hlds__modes__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Cases0_37, (MR_Integer) 0)));
#line 835 "modes.m"
                      check_hlds__modes__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Cases0_37, (MR_Integer) 1)));
#line 836 "modes.m"
                      {
#line 836 "modes.m"
                        check_hlds__modes__ClausesForm0_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 836 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_34, 0) = ((MR_Box) (check_hlds__modes__SwitchVar0_35));
#line 836 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_34, 1) = ((MR_Box) (check_hlds__modes__CanFail0_36));
#line 836 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_34, 2) = ((MR_Box) (check_hlds__modes__Cases0_37));
#line 836 "modes.m"
                      }
#line 836 "modes.m"
                      check_hlds__modes__succeeded = MR_TRUE;
#line 835 "modes.m"
                    }
#line 834 "modes.m"
                }
#line 833 "modes.m"
              else
#line 833 "modes.m"
                check_hlds__modes__succeeded = MR_FALSE;
#line 826 "modes.m"
            if (check_hlds__modes__succeeded)
#line 826 "modes.m"
              {
#line 838 "modes.m"
                {
#line 838 "modes.m"
                  check_hlds__modes__BodyNonLocals_40 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modes__BodyGoalInfo0_30);
                }
#line 839 "modes.m"
                {
#line 839 "modes.m"
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_63, &check_hlds__modes__VarTypes0_41);
                }
#line 5144 "check_hlds.modes.c"
                check_hlds__modes__TypeInfo_120_120 = (MR_Word) &check_hlds__modes_scalar_common_1[1];
#line 5146 "check_hlds.modes.c"
                check_hlds__modes__TypeCtorInfo_122_122 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 841 "modes.m"
                {
#line 841 "modes.m"
                  check_hlds__modes__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 841 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_74_74, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[2]));
#line 841 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_74_74, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_14_p_0_1));
#line 841 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 841 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_74_74, 3) = ((MR_Box) (check_hlds__modes__ModuleInfo_15));
#line 841 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_74_74, 4) = ((MR_Box) (check_hlds__modes__VarTypes0_41));
#line 841 "modes.m"
                }
#line 842 "modes.m"
                {
#line 842 "modes.m"
                  check_hlds__modes__V_75_75 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__modes__TypeCtorInfo_122_122, check_hlds__modes__BodyNonLocals_40);
                }
#line 840 "modes.m"
                {
#line 840 "modes.m"
                  check_hlds__modes__SolverNonLocals_42 = mercury__list__filter_2_f_0(check_hlds__modes__TypeInfo_120_120, check_hlds__modes__V_74_74, check_hlds__modes__V_75_75);
                }
#line 843 "modes.m"
                check_hlds__modes__succeeded = (check_hlds__modes__SolverNonLocals_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 826 "modes.m"
              }
#line 826 "modes.m"
          }
#line 826 "modes.m"
      }
#line 917 "modes.m"
    if (check_hlds__modes__succeeded)
#line 845 "modes.m"
      {
#line 845 "modes.m"
        MR_Word check_hlds__modes__BodyContext_43;
#line 845 "modes.m"
        MR_Word check_hlds__modes__EmptyContext_44;
#line 845 "modes.m"
        MR_Word check_hlds__modes__NewGoalExpr_48;
#line 845 "modes.m"
        MR_Word check_hlds__modes__HeadVarFinalInsts_58;
#line 845 "modes.m"
        MR_Word check_hlds__modes__FinalInstMap_59;
#line 845 "modes.m"
        MR_Word check_hlds__modes__DeltaInstMap_60;
#line 845 "modes.m"
        MR_Word check_hlds__modes__BodyGoalInfo_61;
#line 845 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_76_76;

#line 845 "modes.m"
        {
#line 845 "modes.m"
          check_hlds__modes__BodyContext_43 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__modes__BodyGoalInfo0_30);
        }
#line 846 "modes.m"
        {
#line 846 "modes.m"
          mercury__term__context_init_1_p_0(&check_hlds__modes__EmptyContext_44);
        }
#line 847 "modes.m"
        {
#line 847 "modes.m"
          check_hlds__modes__succeeded = mercury__term____Unify____context_0_0(check_hlds__modes__BodyContext_43, check_hlds__modes__EmptyContext_44);
        }
#line 849 "modes.m"
        if (check_hlds__modes__succeeded)
#line 847 "modes.m"
          check_hlds__modes__STATE_VARIABLE_ModeInfo_76_76 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_63;
#line 849 "modes.m"
        else
#line 850 "modes.m"
          {
#line 850 "modes.m"
            check_hlds__mode_info__mode_info_set_context_3_p_0(check_hlds__modes__BodyContext_43, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_63, &check_hlds__modes__STATE_VARIABLE_ModeInfo_76_76);
          }
#line 872 "modes.m"
        if ((check_hlds__modes__WhatToCheck_16 == (MR_Integer) 0))
#line 864 "modes.m"
          if (((MR_tag((MR_Word) check_hlds__modes__ClausesForm0_34)) == (MR_mktag((MR_Integer) 0))))
#line 857 "modes.m"
            {
#line 857 "modes.m"
              MR_Word check_hlds__modes__TypeCtorInfo_127_127;
#line 857 "modes.m"
              MR_Word check_hlds__modes__Disjuncts1_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__ClausesForm0_34, (MR_Integer) 0)));
#line 857 "modes.m"
              MR_Word check_hlds__modes__Disjuncts2_46;
#line 857 "modes.m"
              MR_Word check_hlds__modes__Disjuncts_47;
#line 857 "modes.m"
              MR_Word check_hlds__modes__V_90_90;
#line 859 "modes.m"
              MR_Box check_hlds__modes__conv2_STATE_VARIABLE_ModeInfo_64;

#line 858 "modes.m"
              {
#line 858 "modes.m"
                check_hlds__modes__Disjuncts2_46 = hlds__goal_util__flatten_disjs_1_f_0(check_hlds__modes__Disjuncts1_45);
              }
#line 860 "modes.m"
              {
#line 860 "modes.m"
                check_hlds__modes__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 860 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_90_90, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_7[0]));
#line 860 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_90_90, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_14_p_0_2));
#line 860 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 860 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_90_90, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_28));
#line 860 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_90_90, 4) = ((MR_Box) (check_hlds__modes__HeadVars_23));
#line 860 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_90_90, 5) = ((MR_Box) (check_hlds__modes__InstMap0_24));
#line 860 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_90_90, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_25));
#line 860 "modes.m"
              }
#line 5273 "check_hlds.modes.c"
              check_hlds__modes__TypeCtorInfo_127_127 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 859 "modes.m"
              {
#line 859 "modes.m"
                mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_127_127, check_hlds__modes__TypeCtorInfo_127_127, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_90_90, check_hlds__modes__Disjuncts2_46, &check_hlds__modes__Disjuncts_47, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_76_76)), &check_hlds__modes__conv2_STATE_VARIABLE_ModeInfo_64);
              }
#line 859 "modes.m"
              *check_hlds__modes__STATE_VARIABLE_ModeInfo_64 = ((MR_Word) check_hlds__modes__conv2_STATE_VARIABLE_ModeInfo_64);
#line 863 "modes.m"
              {
#line 863 "modes.m"
                check_hlds__modes__NewGoalExpr_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 863 "modes.m"
                MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 863 "modes.m"
                MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 1) = ((MR_Box) (check_hlds__modes__Disjuncts_47));
#line 863 "modes.m"
              }
#line 857 "modes.m"
            }
#line 864 "modes.m"
          else
#line 865 "modes.m"
            {
#line 865 "modes.m"
              MR_Word check_hlds__modes__TypeCtorInfo_133_133;
#line 865 "modes.m"
              MR_Word check_hlds__modes__SwitchVar_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_34, (MR_Integer) 0)));
#line 865 "modes.m"
              MR_Word check_hlds__modes__CanFail_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_34, (MR_Integer) 1)));
#line 865 "modes.m"
              MR_Word check_hlds__modes__Cases1_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_34, (MR_Integer) 2)));
#line 865 "modes.m"
              MR_Word check_hlds__modes__Cases_52;
#line 865 "modes.m"
              MR_Word check_hlds__modes__V_88_88;
#line 866 "modes.m"
              MR_Box check_hlds__modes__conv5_STATE_VARIABLE_ModeInfo_64;

#line 867 "modes.m"
              {
#line 867 "modes.m"
                check_hlds__modes__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 867 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_88_88, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_4[1]));
#line 867 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_88_88, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_14_p_0_3));
#line 867 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_88_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 867 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_88_88, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_28));
#line 867 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_88_88, 4) = ((MR_Box) (check_hlds__modes__HeadVars_23));
#line 867 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_88_88, 5) = ((MR_Box) (check_hlds__modes__InstMap0_24));
#line 867 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_88_88, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_25));
#line 867 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_88_88, 7) = ((MR_Box) (check_hlds__modes__SwitchVar_49));
#line 867 "modes.m"
              }
#line 5335 "check_hlds.modes.c"
              check_hlds__modes__TypeCtorInfo_133_133 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 866 "modes.m"
              {
#line 866 "modes.m"
                mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_133_133, check_hlds__modes__TypeCtorInfo_133_133, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_88_88, check_hlds__modes__Cases1_51, &check_hlds__modes__Cases_52, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_76_76)), &check_hlds__modes__conv5_STATE_VARIABLE_ModeInfo_64);
              }
#line 866 "modes.m"
              *check_hlds__modes__STATE_VARIABLE_ModeInfo_64 = ((MR_Word) check_hlds__modes__conv5_STATE_VARIABLE_ModeInfo_64);
#line 870 "modes.m"
              {
#line 870 "modes.m"
                check_hlds__modes__NewGoalExpr_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 870 "modes.m"
                MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 870 "modes.m"
                MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 1) = ((MR_Box) (check_hlds__modes__SwitchVar_49));
#line 870 "modes.m"
                MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 2) = ((MR_Box) (check_hlds__modes__CanFail_50));
#line 870 "modes.m"
                MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 3) = ((MR_Box) (check_hlds__modes__Cases_52));
#line 870 "modes.m"
              }
#line 865 "modes.m"
            }
#line 872 "modes.m"
        else
#line 873 "modes.m"
          {
#line 873 "modes.m"
            MR_Word check_hlds__modes__NondetLiveVars0_53;
#line 873 "modes.m"
            MR_Word check_hlds__modes__Detism_54;
#line 873 "modes.m"
            MR_Word check_hlds__modes__NonLocals_55;
#line 873 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79;
#line 877 "modes.m"
            MR_Word check_hlds__modes__V_150_150;
#line 877 "modes.m"
            MR_Word check_hlds__modes__V_56_56;

#line 874 "modes.m"
            {
#line 874 "modes.m"
              check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_76_76, &check_hlds__modes__NondetLiveVars0_53);
            }
#line 875 "modes.m"
            {
#line 875 "modes.m"
              check_hlds__modes__Detism_54 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__modes__BodyGoalInfo0_30);
            }
#line 876 "modes.m"
            {
#line 876 "modes.m"
              check_hlds__modes__NonLocals_55 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modes__BodyGoalInfo0_30);
            }
#line 877 "modes.m"
            {
#line 877 "modes.m"
              parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modes__Detism_54, &check_hlds__modes__V_56_56, &check_hlds__modes__V_150_150);
            }
#line 877 "modes.m"
            check_hlds__modes__succeeded = ((MR_Integer) 3 == check_hlds__modes__V_150_150);
#line 879 "modes.m"
            if (check_hlds__modes__succeeded)
#line 877 "modes.m"
              check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79 = check_hlds__modes__STATE_VARIABLE_ModeInfo_76_76;
#line 879 "modes.m"
            else
#line 880 "modes.m"
              {
#line 880 "modes.m"
                MR_Word check_hlds__modes__V_78_78;

#line 880 "modes.m"
                {
#line 880 "modes.m"
                  check_hlds__modes__V_78_78 = mercury__bag__init_0_f_0((MR_Word) &check_hlds__modes_scalar_common_1[1]);
                }
#line 880 "modes.m"
                {
#line 880 "modes.m"
                  check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__modes__V_78_78, check_hlds__modes__STATE_VARIABLE_ModeInfo_76_76, &check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79);
                }
#line 880 "modes.m"
              }
#line 898 "modes.m"
            if (((MR_tag((MR_Word) check_hlds__modes__ClausesForm0_34)) == (MR_mktag((MR_Integer) 0))))
#line 883 "modes.m"
              {
#line 883 "modes.m"
                MR_Word check_hlds__modes__TypeCtorInfo_140_140;
#line 883 "modes.m"
                MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_85_85;
#line 883 "modes.m"
                MR_Word check_hlds__modes__V_86_86;
#line 883 "modes.m"
                MR_Word check_hlds__modes__Disjuncts1_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__ClausesForm0_34, (MR_Integer) 0)));
#line 883 "modes.m"
                MR_Word check_hlds__modes__Disjuncts2_100;
#line 883 "modes.m"
                MR_Word check_hlds__modes__Disjuncts_101;
#line 885 "modes.m"
                MR_Word check_hlds__modes__V_151_151;
#line 885 "modes.m"
                MR_Word check_hlds__modes__V_57_57;
#line 892 "modes.m"
                MR_Box check_hlds__modes__conv8_STATE_VARIABLE_ModeInfo_64;

#line 884 "modes.m"
                {
#line 884 "modes.m"
                  check_hlds__modes__Disjuncts2_100 = hlds__goal_util__flatten_disjs_1_f_0(check_hlds__modes__Disjuncts1_99);
                }
#line 885 "modes.m"
                {
#line 885 "modes.m"
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modes__Detism_54, &check_hlds__modes__V_57_57, &check_hlds__modes__V_151_151);
                }
#line 885 "modes.m"
                check_hlds__modes__succeeded = ((MR_Integer) 3 == check_hlds__modes__V_151_151);
#line 889 "modes.m"
                if (check_hlds__modes__succeeded)
#line 886 "modes.m"
                  {
#line 886 "modes.m"
                    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_83_83;
#line 886 "modes.m"
                    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_84_84;

#line 886 "modes.m"
                    {
#line 886 "modes.m"
                      check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__modes__NonLocals_55, check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79, &check_hlds__modes__STATE_VARIABLE_ModeInfo_83_83);
                    }
#line 887 "modes.m"
                    {
#line 887 "modes.m"
                      check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_83_83, &check_hlds__modes__STATE_VARIABLE_ModeInfo_84_84);
                    }
#line 888 "modes.m"
                    {
#line 888 "modes.m"
                      check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modes__NonLocals_55, check_hlds__modes__STATE_VARIABLE_ModeInfo_84_84, &check_hlds__modes__STATE_VARIABLE_ModeInfo_85_85);
                    }
#line 886 "modes.m"
                  }
#line 889 "modes.m"
                else
#line 888 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_ModeInfo_85_85 = check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79;
#line 893 "modes.m"
                {
#line 893 "modes.m"
                  check_hlds__modes__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 893 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_86_86, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_8[0]));
#line 893 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_86_86, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_14_p_0_4));
#line 893 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_86_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 893 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_86_86, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_28));
#line 893 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_86_86, 4) = ((MR_Box) (check_hlds__modes__HeadVars_23));
#line 893 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_86_86, 5) = ((MR_Box) (check_hlds__modes__InstMap0_24));
#line 893 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_86_86, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_25));
#line 893 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_86_86, 7) = ((MR_Box) (check_hlds__modes__Detism_54));
#line 893 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_86_86, 8) = ((MR_Box) (check_hlds__modes__NonLocals_55));
#line 893 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_86_86, 9) = ((MR_Box) (check_hlds__modes__NondetLiveVars0_53));
#line 893 "modes.m"
                }
#line 5513 "check_hlds.modes.c"
                check_hlds__modes__TypeCtorInfo_140_140 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 892 "modes.m"
                {
#line 892 "modes.m"
                  mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_140_140, check_hlds__modes__TypeCtorInfo_140_140, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_86_86, check_hlds__modes__Disjuncts2_100, &check_hlds__modes__Disjuncts_101, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_85_85)), &check_hlds__modes__conv8_STATE_VARIABLE_ModeInfo_64);
                }
#line 892 "modes.m"
                *check_hlds__modes__STATE_VARIABLE_ModeInfo_64 = ((MR_Word) check_hlds__modes__conv8_STATE_VARIABLE_ModeInfo_64);
#line 897 "modes.m"
                {
#line 897 "modes.m"
                  check_hlds__modes__NewGoalExpr_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 897 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 1) = ((MR_Box) (check_hlds__modes__Disjuncts_101));
#line 897 "modes.m"
                }
#line 883 "modes.m"
              }
#line 898 "modes.m"
            else
#line 899 "modes.m"
              {
#line 899 "modes.m"
                MR_Word check_hlds__modes__TypeCtorInfo_146_146;
#line 899 "modes.m"
                MR_Word check_hlds__modes__V_80_80;
#line 899 "modes.m"
                MR_Word check_hlds__modes__SwitchVar_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_34, (MR_Integer) 0)));
#line 899 "modes.m"
                MR_Word check_hlds__modes__CanFail_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_34, (MR_Integer) 1)));
#line 899 "modes.m"
                MR_Word check_hlds__modes__Cases1_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_34, (MR_Integer) 2)));
#line 899 "modes.m"
                MR_Word check_hlds__modes__Cases_105;
#line 900 "modes.m"
                MR_Box check_hlds__modes__conv11_STATE_VARIABLE_ModeInfo_64;

#line 901 "modes.m"
                {
#line 901 "modes.m"
                  check_hlds__modes__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 901 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_80_80, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_4[1]));
#line 901 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_80_80, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_14_p_0_5));
#line 901 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_80_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 901 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_80_80, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_28));
#line 901 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_80_80, 4) = ((MR_Box) (check_hlds__modes__HeadVars_23));
#line 901 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_80_80, 5) = ((MR_Box) (check_hlds__modes__InstMap0_24));
#line 901 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_80_80, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_25));
#line 901 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_80_80, 7) = ((MR_Box) (check_hlds__modes__SwitchVar_102));
#line 901 "modes.m"
                }
#line 5575 "check_hlds.modes.c"
                check_hlds__modes__TypeCtorInfo_146_146 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 900 "modes.m"
                {
#line 900 "modes.m"
                  mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_146_146, check_hlds__modes__TypeCtorInfo_146_146, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_80_80, check_hlds__modes__Cases1_104, &check_hlds__modes__Cases_105, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79)), &check_hlds__modes__conv11_STATE_VARIABLE_ModeInfo_64);
                }
#line 900 "modes.m"
                *check_hlds__modes__STATE_VARIABLE_ModeInfo_64 = ((MR_Word) check_hlds__modes__conv11_STATE_VARIABLE_ModeInfo_64);
#line 904 "modes.m"
                {
#line 904 "modes.m"
                  check_hlds__modes__NewGoalExpr_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 904 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 904 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 1) = ((MR_Box) (check_hlds__modes__SwitchVar_102));
#line 904 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 2) = ((MR_Box) (check_hlds__modes__CanFail_103));
#line 904 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 3) = ((MR_Box) (check_hlds__modes__Cases_105));
#line 904 "modes.m"
                }
#line 899 "modes.m"
              }
#line 873 "modes.m"
          }
#line 909 "modes.m"
        {
#line 909 "modes.m"
          mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modes__HeadVars_23, check_hlds__modes__ArgFinalInsts0_25, &check_hlds__modes__HeadVarFinalInsts_58);
        }
#line 911 "modes.m"
        {
#line 911 "modes.m"
          check_hlds__modes__FinalInstMap_59 = hlds__instmap__instmap_from_assoc_list_1_f_0(check_hlds__modes__HeadVarFinalInsts_58);
        }
#line 912 "modes.m"
        {
#line 912 "modes.m"
          hlds__instmap__compute_instmap_delta_4_p_0(check_hlds__modes__InstMap0_24, check_hlds__modes__FinalInstMap_59, check_hlds__modes__BodyNonLocals_40, &check_hlds__modes__DeltaInstMap_60);
        }
#line 914 "modes.m"
        {
#line 914 "modes.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modes__DeltaInstMap_60, check_hlds__modes__BodyGoalInfo0_30, &check_hlds__modes__BodyGoalInfo_61);
        }
#line 915 "modes.m"
        {
#line 915 "modes.m"
          MR_Word base;
#line 915 "modes.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 915 "modes.m"
          *check_hlds__modes__Body_22 = base;
#line 915 "modes.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__NewGoalExpr_48));
#line 915 "modes.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__BodyGoalInfo_61));
#line 915 "modes.m"
        }
#line 916 "modes.m"
        *check_hlds__modes__ArgFinalInsts_26 = check_hlds__modes__ArgFinalInsts0_25;
#line 845 "modes.m"
      }
#line 917 "modes.m"
    else
#line 919 "modes.m"
      {
#line 919 "modes.m"
        MR_Word check_hlds__modes__Body1_62;
#line 919 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_93_93;
#line 919 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_95_95;
#line 919 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_97_97;

#line 919 "modes.m"
        {
#line 919 "modes.m"
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_28, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_63, &check_hlds__modes__STATE_VARIABLE_ModeInfo_93_93);
        }
#line 923 "modes.m"
        if ((check_hlds__modes__WhatToCheck_16 == (MR_Integer) 0))
#line 922 "modes.m"
          {
#line 922 "modes.m"
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modes__Body0_21, &check_hlds__modes__Body1_62, check_hlds__modes__STATE_VARIABLE_ModeInfo_93_93, &check_hlds__modes__STATE_VARIABLE_ModeInfo_95_95);
          }
#line 923 "modes.m"
        else
#line 925 "modes.m"
          {
#line 925 "modes.m"
            check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modes__Body0_21, &check_hlds__modes__Body1_62, check_hlds__modes__STATE_VARIABLE_ModeInfo_93_93, &check_hlds__modes__STATE_VARIABLE_ModeInfo_95_95);
          }
#line 927 "modes.m"
        {
#line 927 "modes.m"
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_28, check_hlds__modes__STATE_VARIABLE_ModeInfo_95_95, &check_hlds__modes__STATE_VARIABLE_ModeInfo_97_97);
        }
#line 930 "modes.m"
        {
#line 930 "modes.m"
          check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_23, check_hlds__modes__InferModes_17, check_hlds__modes__ArgFinalInsts0_25, check_hlds__modes__ArgFinalInsts_26, check_hlds__modes__Body1_62, check_hlds__modes__Body_22, check_hlds__modes__STATE_VARIABLE_ModeInfo_97_97, check_hlds__modes__STATE_VARIABLE_ModeInfo_64);
#line 930 "modes.m"
          return;
        }
#line 919 "modes.m"
      }
#line 821 "modes.m"
  }
#line 813 "modes.m"
}

#line 737 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_2(
#line 737 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 737 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1)
#line 737 "modes.m"
{
#line 737 "modes.m"
  {
#line 737 "modes.m"
    MR_Box check_hlds__modes__wrapper_arg_2;
#line 737 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 737 "modes.m"
    MR_Word check_hlds__modes__conv1_HeadVar__3_3;

#line 737 "modes.m"
    {
#line 737 "modes.m"
      check_hlds__modes__conv1_HeadVar__3_3 = check_hlds__mode_errors__mode_warning_info_to_spec_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modes__wrapper_arg_1));
    }
#line 737 "modes.m"
    check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv1_HeadVar__3_3));
#line 737 "modes.m"
    return check_hlds__modes__wrapper_arg_2;
#line 737 "modes.m"
  }
#line 737 "modes.m"
}

#line 717 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_1(
#line 717 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 717 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1)
#line 717 "modes.m"
{
#line 717 "modes.m"
  {
#line 717 "modes.m"
    MR_Box check_hlds__modes__wrapper_arg_2;
#line 717 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 717 "modes.m"
    MR_Word check_hlds__modes__conv0_HeadVar__3_3;

#line 717 "modes.m"
    {
#line 717 "modes.m"
      check_hlds__modes__conv0_HeadVar__3_3 = check_hlds__mode_errors__mode_error_info_to_spec_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modes__wrapper_arg_1));
    }
#line 717 "modes.m"
    check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv0_HeadVar__3_3));
#line 717 "modes.m"
    return check_hlds__modes__wrapper_arg_2;
#line 717 "modes.m"
  }
#line 717 "modes.m"
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
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27,
#line 623 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_28,
#line 623 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_29,
#line 623 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_30,
#line 623 "modes.m"
  MR_Word * check_hlds__modes__Specs_16)
#line 623 "modes.m"
{
#line 628 "modes.m"
  {
#line 628 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 628 "modes.m"
    MR_Word check_hlds__modes__ProcInfo0_18;
#line 628 "modes.m"
    MR_Word check_hlds__modes__CanProcess_19;
#line 629 "modes.m"
    MR_Word check_hlds__modes___PredInfo0_17;

#line 629 "modes.m"
    {
#line 629 "modes.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, &check_hlds__modes___PredInfo0_17, &check_hlds__modes__ProcInfo0_18);
    }
#line 631 "modes.m"
    {
#line 631 "modes.m"
      hlds__hlds_pred__proc_info_get_can_process_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__CanProcess_19);
    }
#line 635 "modes.m"
    if ((check_hlds__modes__CanProcess_19 == (MR_Integer) 0))
#line 633 "modes.m"
      {
#line 634 "modes.m"
        *check_hlds__modes__Specs_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 634 "modes.m"
        *check_hlds__modes__STATE_VARIABLE_ModuleInfo_28 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27;
#line 634 "modes.m"
        *check_hlds__modes__STATE_VARIABLE_Changed_30 = check_hlds__modes__STATE_VARIABLE_Changed_0_29;
#line 633 "modes.m"
      }
#line 635 "modes.m"
    else
#line 636 "modes.m"
      {
#line 636 "modes.m"
        MR_Word check_hlds__modes__TypeCtorInfo_34_34;
#line 636 "modes.m"
        MR_Word check_hlds__modes__TypeCtorInfo_35_35;
#line 636 "modes.m"
        MR_Word check_hlds__modes__ProcInfo_20;
#line 636 "modes.m"
        MR_Word check_hlds__modes__Preds1_21;
#line 636 "modes.m"
        MR_Word check_hlds__modes__PredInfo1_22;
#line 636 "modes.m"
        MR_Word check_hlds__modes__Procs1_23;
#line 636 "modes.m"
        MR_Word check_hlds__modes__Procs_24;
#line 636 "modes.m"
        MR_Word check_hlds__modes__PredInfo_25;
#line 636 "modes.m"
        MR_Word check_hlds__modes__Preds_26;
#line 636 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31;
#line 636 "modes.m"
        MR_Word check_hlds__modes__HeadVars_52;
#line 636 "modes.m"
        MR_Word check_hlds__modes__ArgModes0_53;
#line 636 "modes.m"
        MR_Word check_hlds__modes__ArgLives0_54;
#line 636 "modes.m"
        MR_Word check_hlds__modes__Body0_55;
#line 636 "modes.m"
        MR_Word check_hlds__modes__PredInfo_56;
#line 636 "modes.m"
        MR_Word check_hlds__modes__ClausesInfo_57;
#line 636 "modes.m"
        MR_Word check_hlds__modes__ClausesRep_58;
#line 636 "modes.m"
        MR_Word check_hlds__modes__Clauses_60;
#line 636 "modes.m"
        MR_Word check_hlds__modes__Context_63;
#line 636 "modes.m"
        MR_Word check_hlds__modes__ArgInitialInsts_65;
#line 636 "modes.m"
        MR_Word check_hlds__modes__InstAL_66;
#line 636 "modes.m"
        MR_Word check_hlds__modes__InstMap0_67;
#line 636 "modes.m"
        MR_Word check_hlds__modes__LiveVarsList_68;
#line 636 "modes.m"
        MR_Word check_hlds__modes__LiveVars_69;
#line 636 "modes.m"
        MR_Word check_hlds__modes__Markers_70;
#line 636 "modes.m"
        MR_Word check_hlds__modes__InferModes_71;
#line 636 "modes.m"
        MR_Word check_hlds__modes__ArgFinalInsts0_72;
#line 636 "modes.m"
        MR_Word check_hlds__modes__Body_73;
#line 636 "modes.m"
        MR_Word check_hlds__modes__ArgFinalInsts_74;
#line 636 "modes.m"
        MR_Word check_hlds__modes__ModeErrors_75;
#line 636 "modes.m"
        MR_Word check_hlds__modes__ArgModes_83;
#line 636 "modes.m"
        MR_Word check_hlds__modes__VarSet_84;
#line 636 "modes.m"
        MR_Word check_hlds__modes__VarTypes_85;
#line 636 "modes.m"
        MR_Word check_hlds__modes__NeedToRequantify_86;
#line 636 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_61_87;
#line 636 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_62_88;
#line 636 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90;
#line 636 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_69_95;
#line 636 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_72_98;
#line 636 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_73_99;
#line 636 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_74_100;
#line 636 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_75_101;
#line 636 "modes.m"
        MR_Word check_hlds__modes__Body1_132;
#line 636 "modes.m"
        MR_Word check_hlds__modes__ArgFinalInsts1_133;
#line 636 "modes.m"
        MR_Word check_hlds__modes__ModeInfo1_134;
#line 636 "modes.m"
        MR_Word check_hlds__modes__ModeErrors1_135;
#line 665 "modes.m"
        MR_Word check_hlds__modes___ItemNumbers_59;
#line 640 "modes.m"
        MR_Box check_hlds__modes__conv2_PredInfo1_22;

#line 656 "modes.m"
        {
#line 656 "modes.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__HeadVars_52);
        }
#line 657 "modes.m"
        {
#line 657 "modes.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__ArgModes0_53);
        }
#line 658 "modes.m"
        {
#line 658 "modes.m"
          hlds__hlds_pred__proc_info_arglives_3_p_0(check_hlds__modes__ProcInfo0_18, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, &check_hlds__modes__ArgLives0_54);
        }
#line 659 "modes.m"
        {
#line 659 "modes.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__Body0_55);
        }
#line 663 "modes.m"
        {
#line 663 "modes.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__PredId_11, &check_hlds__modes__PredInfo_56);
        }
#line 664 "modes.m"
        {
#line 664 "modes.m"
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__modes__PredInfo_56, &check_hlds__modes__ClausesInfo_57);
        }
#line 665 "modes.m"
        {
#line 665 "modes.m"
          hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__modes__ClausesInfo_57, &check_hlds__modes__ClausesRep_58, &check_hlds__modes___ItemNumbers_59);
        }
#line 666 "modes.m"
        {
#line 666 "modes.m"
          hlds__hlds_clauses__get_clause_list_2_p_0(check_hlds__modes__ClausesRep_58, &check_hlds__modes__Clauses_60);
        }
#line 670 "modes.m"
        if ((check_hlds__modes__Clauses_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 672 "modes.m"
          {
#line 672 "modes.m"
            hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__Context_63);
          }
#line 670 "modes.m"
        else
#line 668 "modes.m"
          {
#line 668 "modes.m"
            MR_Word check_hlds__modes__FirstClause_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Clauses_60, (MR_Integer) 0)));
#line 668 "modes.m"
            MR_Word check_hlds__modes__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Clauses_60, (MR_Integer) 1)));
#line 669 "modes.m"
            MR_Word check_hlds__modes__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_61, (MR_Integer) 0)));
#line 669 "modes.m"
            MR_Word check_hlds__modes__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_61, (MR_Integer) 1)));
#line 669 "modes.m"
            MR_Word check_hlds__modes__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_61, (MR_Integer) 2)));
#line 669 "modes.m"
            MR_Word check_hlds__modes__V_107_107;

#line 669 "modes.m"
            check_hlds__modes__Context_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_61, (MR_Integer) 3)));
#line 669 "modes.m"
            check_hlds__modes__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_61, (MR_Integer) 4)));
#line 668 "modes.m"
          }
#line 681 "modes.m"
        {
#line 681 "modes.m"
          check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__ArgModes0_53, &check_hlds__modes__ArgInitialInsts_65);
        }
#line 682 "modes.m"
        {
#line 682 "modes.m"
          mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modes__HeadVars_52, check_hlds__modes__ArgInitialInsts_65, &check_hlds__modes__InstAL_66);
        }
#line 683 "modes.m"
        {
#line 683 "modes.m"
          check_hlds__modes__InstMap0_67 = hlds__instmap__instmap_from_assoc_list_1_f_0(check_hlds__modes__InstAL_66);
        }
#line 687 "modes.m"
        {
#line 687 "modes.m"
          check_hlds__modecheck_util__get_live_vars_3_p_0(check_hlds__modes__HeadVars_52, check_hlds__modes__ArgLives0_54, &check_hlds__modes__LiveVarsList_68);
        }
#line 688 "modes.m"
        {
#line 688 "modes.m"
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modes__LiveVarsList_68, &check_hlds__modes__LiveVars_69);
        }
#line 691 "modes.m"
        {
#line 691 "modes.m"
          check_hlds__mode_info__mode_info_init_9_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, check_hlds__modes__Context_63, check_hlds__modes__LiveVars_69, check_hlds__modes__InstMap0_67, check_hlds__modes__WhatToCheck_12, check_hlds__modes__MayChangeCalledProc_13, &check_hlds__modes__STATE_VARIABLE_ModeInfo_61_87);
        }
#line 693 "modes.m"
        {
#line 693 "modes.m"
          check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(check_hlds__modes__STATE_VARIABLE_Changed_0_29, check_hlds__modes__STATE_VARIABLE_ModeInfo_61_87, &check_hlds__modes__STATE_VARIABLE_ModeInfo_62_88);
        }
#line 695 "modes.m"
        {
#line 695 "modes.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modes__PredInfo_56, &check_hlds__modes__Markers_70);
        }
#line 696 "modes.m"
        {
#line 696 "modes.m"
          check_hlds__modes__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_70, (MR_Integer) 3);
        }
#line 698 "modes.m"
        if (check_hlds__modes__succeeded)
#line 697 "modes.m"
          check_hlds__modes__InferModes_71 = (MR_Integer) 1;
#line 698 "modes.m"
        else
#line 699 "modes.m"
          check_hlds__modes__InferModes_71 = (MR_Integer) 0;
#line 701 "modes.m"
        {
#line 701 "modes.m"
          check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__ArgModes0_53, &check_hlds__modes__ArgFinalInsts0_72);
        }
#line 773 "modes.m"
        {
#line 773 "modes.m"
          check_hlds__modes__do_modecheck_proc_body_14_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__WhatToCheck_12, check_hlds__modes__InferModes_71, check_hlds__modes__Markers_70, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, check_hlds__modes__Body0_55, &check_hlds__modes__Body1_132, check_hlds__modes__HeadVars_52, check_hlds__modes__InstMap0_67, check_hlds__modes__ArgFinalInsts0_72, &check_hlds__modes__ArgFinalInsts1_133, check_hlds__modes__STATE_VARIABLE_ModeInfo_62_88, &check_hlds__modes__ModeInfo1_134);
        }
#line 776 "modes.m"
        {
#line 776 "modes.m"
          check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__ModeInfo1_134, &check_hlds__modes__ModeErrors1_135);
        }
#line 782 "modes.m"
        if ((check_hlds__modes__ModeErrors1_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 778 "modes.m"
          {
#line 779 "modes.m"
            check_hlds__modes__Body_73 = check_hlds__modes__Body1_132;
#line 780 "modes.m"
            check_hlds__modes__ArgFinalInsts_74 = check_hlds__modes__ArgFinalInsts1_133;
#line 781 "modes.m"
            check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90 = check_hlds__modes__ModeInfo1_134;
#line 778 "modes.m"
          }
#line 782 "modes.m"
        else
#line 783 "modes.m"
          {
#line 783 "modes.m"
            MR_Word check_hlds__modes__HadFromGroundTerm_138;

#line 784 "modes.m"
            {
#line 784 "modes.m"
              check_hlds__mode_info__mode_info_get_had_from_ground_term_2_p_0(check_hlds__modes__ModeInfo1_134, &check_hlds__modes__HadFromGroundTerm_138);
            }
#line 803 "modes.m"
            if ((check_hlds__modes__HadFromGroundTerm_138 == (MR_Integer) 1))
#line 804 "modes.m"
              {
#line 807 "modes.m"
                check_hlds__modes__Body_73 = check_hlds__modes__Body1_132;
#line 808 "modes.m"
                check_hlds__modes__ArgFinalInsts_74 = check_hlds__modes__ArgFinalInsts1_133;
#line 809 "modes.m"
                check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90 = check_hlds__modes__ModeInfo1_134;
#line 804 "modes.m"
              }
#line 803 "modes.m"
            else
#line 786 "modes.m"
              {
#line 786 "modes.m"
                MR_Word check_hlds__modes__ModeInfo2_139;

#line 798 "modes.m"
                {
#line 798 "modes.m"
                  check_hlds__mode_info__mode_info_set_make_ground_terms_unique_3_p_0((MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ModeInfo_62_88, &check_hlds__modes__ModeInfo2_139);
                }
#line 800 "modes.m"
                {
#line 800 "modes.m"
                  check_hlds__modes__do_modecheck_proc_body_14_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__WhatToCheck_12, check_hlds__modes__InferModes_71, check_hlds__modes__Markers_70, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, check_hlds__modes__Body0_55, &check_hlds__modes__Body_73, check_hlds__modes__HeadVars_52, check_hlds__modes__InstMap0_67, check_hlds__modes__ArgFinalInsts0_72, &check_hlds__modes__ArgFinalInsts_74, check_hlds__modes__ModeInfo2_139, &check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90);
                }
#line 786 "modes.m"
              }
#line 783 "modes.m"
          }
#line 707 "modes.m"
        {
#line 707 "modes.m"
          check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90, &check_hlds__modes__ModeErrors_75);
        }
#line 715 "modes.m"
        if ((check_hlds__modes__InferModes_71 == (MR_Integer) 0))
#line 716 "modes.m"
          {
#line 716 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_86_112 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 716 "modes.m"
            MR_Word check_hlds__modes__AllErrorSpecs_76;
#line 716 "modes.m"
            MR_Word check_hlds__modes__ErrorSpecs_79;
#line 716 "modes.m"
            MR_Word check_hlds__modes__StateVarWarningSpecs_80;
#line 716 "modes.m"
            MR_Word check_hlds__modes__ModeWarnings_81;
#line 716 "modes.m"
            MR_Word check_hlds__modes__WarningSpecs_82;
#line 716 "modes.m"
            MR_Word check_hlds__modes__V_91_91;
#line 716 "modes.m"
            MR_Word check_hlds__modes__V_93_93;
#line 716 "modes.m"
            MR_Word check_hlds__modes__V_94_94;

#line 717 "modes.m"
            {
#line 717 "modes.m"
              check_hlds__modes__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 717 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[0]));
#line 717 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 1) = ((MR_Box) (check_hlds__modes__maybe_modecheck_proc_9_p_0_1));
#line 717 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 717 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 3) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90));
#line 717 "modes.m"
            }
#line 717 "modes.m"
            {
#line 717 "modes.m"
              check_hlds__modes__AllErrorSpecs_76 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__modes__TypeCtorInfo_86_112, check_hlds__modes__V_91_91, check_hlds__modes__ModeErrors_75);
            }
#line 729 "modes.m"
            if ((check_hlds__modes__AllErrorSpecs_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 730 "modes.m"
              {
#line 731 "modes.m"
                check_hlds__modes__ErrorSpecs_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 734 "modes.m"
                check_hlds__modes__StateVarWarningSpecs_80 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 730 "modes.m"
              }
#line 729 "modes.m"
            else
#line 725 "modes.m"
              {
#line 725 "modes.m"
                MR_Word check_hlds__modes__ErrorSpec_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__AllErrorSpecs_76, (MR_Integer) 0)));
#line 725 "modes.m"
                MR_Word check_hlds__modes__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__AllErrorSpecs_76, (MR_Integer) 1)));

#line 726 "modes.m"
                {
#line 726 "modes.m"
                  check_hlds__modes__ErrorSpecs_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__ErrorSpecs_79, 0) = ((MR_Box) (check_hlds__modes__ErrorSpec_77));
#line 726 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__ErrorSpecs_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 726 "modes.m"
                }
#line 727 "modes.m"
                {
#line 727 "modes.m"
                  hlds__hlds_pred__proc_info_get_statevar_warnings_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__StateVarWarningSpecs_80);
                }
#line 725 "modes.m"
              }
#line 736 "modes.m"
            {
#line 736 "modes.m"
              check_hlds__mode_info__mode_info_get_warnings_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90, &check_hlds__modes__ModeWarnings_81);
            }
#line 737 "modes.m"
            {
#line 737 "modes.m"
              check_hlds__modes__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 737 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[1]));
#line 737 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 1) = ((MR_Box) (check_hlds__modes__maybe_modecheck_proc_9_p_0_2));
#line 737 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 737 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 3) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90));
#line 737 "modes.m"
            }
#line 737 "modes.m"
            {
#line 737 "modes.m"
              check_hlds__modes__WarningSpecs_82 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0, check_hlds__modes__TypeCtorInfo_86_112, check_hlds__modes__V_93_93, check_hlds__modes__ModeWarnings_81);
            }
#line 739 "modes.m"
            {
#line 739 "modes.m"
              check_hlds__modes__V_94_94 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_86_112, check_hlds__modes__WarningSpecs_82, check_hlds__modes__StateVarWarningSpecs_80);
            }
#line 739 "modes.m"
            {
#line 739 "modes.m"
              *check_hlds__modes__Specs_16 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_86_112, check_hlds__modes__ErrorSpecs_79, check_hlds__modes__V_94_94);
            }
#line 739 "modes.m"
            check_hlds__modes__STATE_VARIABLE_ProcInfo_69_95 = check_hlds__modes__ProcInfo0_18;
#line 716 "modes.m"
          }
#line 715 "modes.m"
        else
#line 709 "modes.m"
          {
#line 713 "modes.m"
            {
#line 713 "modes.m"
              check_hlds__modes__STATE_VARIABLE_ProcInfo_69_95 = hlds__hlds_pred__f_109_111_100_101_95_101_114_114_111_114_115_32_58_61_2_f_0(check_hlds__modes__ProcInfo0_18, check_hlds__modes__ModeErrors_75);
            }
#line 714 "modes.m"
            *check_hlds__modes__Specs_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "modes.m"
          }
#line 744 "modes.m"
        {
#line 744 "modes.m"
          parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(check_hlds__modes__ArgInitialInsts_65, check_hlds__modes__ArgFinalInsts_74, &check_hlds__modes__ArgModes_83);
        }
#line 745 "modes.m"
        {
#line 745 "modes.m"
          check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90, check_hlds__modes__STATE_VARIABLE_Changed_30);
        }
#line 746 "modes.m"
        {
#line 746 "modes.m"
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31);
        }
#line 747 "modes.m"
        {
#line 747 "modes.m"
          check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90, &check_hlds__modes__VarSet_84);
        }
#line 750 "modes.m"
        {
#line 750 "modes.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90, &check_hlds__modes__VarTypes_85);
        }
#line 751 "modes.m"
        {
#line 751 "modes.m"
          check_hlds__mode_info__mode_info_get_need_to_requantify_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90, &check_hlds__modes__NeedToRequantify_86);
        }
#line 752 "modes.m"
        {
#line 752 "modes.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__modes__Body_73, check_hlds__modes__STATE_VARIABLE_ProcInfo_69_95, &check_hlds__modes__STATE_VARIABLE_ProcInfo_72_98);
        }
#line 753 "modes.m"
        {
#line 753 "modes.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__modes__VarSet_84, check_hlds__modes__STATE_VARIABLE_ProcInfo_72_98, &check_hlds__modes__STATE_VARIABLE_ProcInfo_73_99);
        }
#line 754 "modes.m"
        {
#line 754 "modes.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__modes__VarTypes_85, check_hlds__modes__STATE_VARIABLE_ProcInfo_73_99, &check_hlds__modes__STATE_VARIABLE_ProcInfo_74_100);
        }
#line 755 "modes.m"
        {
#line 755 "modes.m"
          hlds__hlds_pred__proc_info_set_argmodes_3_p_0(check_hlds__modes__ArgModes_83, check_hlds__modes__STATE_VARIABLE_ProcInfo_74_100, &check_hlds__modes__STATE_VARIABLE_ProcInfo_75_101);
        }
#line 758 "modes.m"
        if ((check_hlds__modes__NeedToRequantify_86 == (MR_Integer) 1))
#line 757 "modes.m"
          check_hlds__modes__ProcInfo_20 = check_hlds__modes__STATE_VARIABLE_ProcInfo_75_101;
#line 758 "modes.m"
        else
#line 759 "modes.m"
          {
#line 760 "modes.m"
            {
#line 760 "modes.m"
              hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ProcInfo_75_101, &check_hlds__modes__ProcInfo_20);
            }
#line 759 "modes.m"
          }
#line 639 "modes.m"
        {
#line 639 "modes.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31, &check_hlds__modes__Preds1_21);
        }
#line 6311 "check_hlds.modes.c"
        check_hlds__modes__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 6313 "check_hlds.modes.c"
        check_hlds__modes__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 640 "modes.m"
        {
#line 640 "modes.m"
          mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_34_34, check_hlds__modes__TypeCtorInfo_35_35, check_hlds__modes__Preds1_21, ((MR_Box) (check_hlds__modes__PredId_11)), &check_hlds__modes__conv2_PredInfo1_22);
        }
#line 640 "modes.m"
        check_hlds__modes__PredInfo1_22 = ((MR_Word) check_hlds__modes__conv2_PredInfo1_22);
#line 641 "modes.m"
        {
#line 641 "modes.m"
          hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__modes__PredInfo1_22, &check_hlds__modes__Procs1_23);
        }
#line 642 "modes.m"
        {
#line 642 "modes.m"
          mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (check_hlds__modes__ProcId_10)), ((MR_Box) (check_hlds__modes__ProcInfo_20)), check_hlds__modes__Procs1_23, &check_hlds__modes__Procs_24);
        }
#line 643 "modes.m"
        {
#line 643 "modes.m"
          hlds__hlds_pred__pred_info_set_procedures_3_p_0(check_hlds__modes__Procs_24, check_hlds__modes__PredInfo1_22, &check_hlds__modes__PredInfo_25);
        }
#line 644 "modes.m"
        {
#line 644 "modes.m"
          mercury__map__set_4_p_0(check_hlds__modes__TypeCtorInfo_34_34, check_hlds__modes__TypeCtorInfo_35_35, ((MR_Box) (check_hlds__modes__PredId_11)), ((MR_Box) (check_hlds__modes__PredInfo_25)), check_hlds__modes__Preds1_21, &check_hlds__modes__Preds_26);
        }
#line 645 "modes.m"
        {
#line 645 "modes.m"
          hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__Preds_26, check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31, check_hlds__modes__STATE_VARIABLE_ModuleInfo_28);
#line 645 "modes.m"
          return;
        }
#line 636 "modes.m"
      }
#line 628 "modes.m"
  }
#line 623 "modes.m"
}

#line 594 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_procs_10_p_0(
#line 594 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 594 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 594 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_3,
#line 594 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_4,
#line 594 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5,
#line 594 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_6,
#line 594 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_7,
#line 594 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_8,
#line 594 "modes.m"
  MR_Word check_hlds__modes__HeadVar__9_9,
#line 594 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__10_10)
#line 594 "modes.m"
{
#line 599 "modes.m"
  while (MR_TRUE)
#line 599 "modes.m"
    {
#line 599 "modes.m"
      /* tailcall optimized into a loop */
#line 599 "modes.m"
      {
#line 599 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 599 "modes.m"
        if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 599 "modes.m"
          {
#line 599 "modes.m"
            *check_hlds__modes__HeadVar__10_10 = check_hlds__modes__HeadVar__9_9;
#line 599 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Changed_8 = check_hlds__modes__STATE_VARIABLE_Changed_0_7;
#line 599 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_ModuleInfo_6 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5;
#line 599 "modes.m"
          }
#line 599 "modes.m"
        else
#line 601 "modes.m"
          {
#line 601 "modes.m"
            MR_Integer check_hlds__modes__ProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 601 "modes.m"
            MR_Word check_hlds__modes__ProcIds_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 601 "modes.m"
            MR_Word check_hlds__modes__ProcSpecs_31;
#line 601 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_38_38;
#line 601 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Changed_39_39;
#line 601 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_SpecsAcc_40_40;

#line 603 "modes.m"
            {
#line 603 "modes.m"
              check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_23, check_hlds__modes__HeadVar__2_2, check_hlds__modes__WhatToCheck_3, check_hlds__modes__MayChangeCalledProc_4, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_38_38, check_hlds__modes__STATE_VARIABLE_Changed_0_7, &check_hlds__modes__STATE_VARIABLE_Changed_39_39, &check_hlds__modes__ProcSpecs_31);
            }
#line 605 "modes.m"
            {
#line 605 "modes.m"
              parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0(check_hlds__modes__ProcSpecs_31, check_hlds__modes__HeadVar__9_9, &check_hlds__modes__STATE_VARIABLE_SpecsAcc_40_40);
            }
#line 607 "modes.m"
            /* direct tailcall eliminated */
#line 607 "modes.m"
            {
#line 607 "modes.m"
              MR_Word check_hlds__modes__HeadVar__1__tmp_copy_1 = check_hlds__modes__ProcIds_24;
#line 607 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_38_38;
#line 607 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_7 = check_hlds__modes__STATE_VARIABLE_Changed_39_39;
#line 607 "modes.m"
              MR_Word check_hlds__modes__HeadVar__9__tmp_copy_9 = check_hlds__modes__STATE_VARIABLE_SpecsAcc_40_40;

#line 607 "modes.m"
              check_hlds__modes__HeadVar__9_9 = check_hlds__modes__HeadVar__9__tmp_copy_9;
#line 607 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Changed_0_7 = check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_7;
#line 607 "modes.m"
              check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5;
#line 607 "modes.m"
              check_hlds__modes__HeadVar__1_1 = check_hlds__modes__HeadVar__1__tmp_copy_1;
#line 607 "modes.m"
            }
#line 607 "modes.m"
            continue;
#line 601 "modes.m"
          }
#line 599 "modes.m"
      }
#line 599 "modes.m"
      break;
#line 599 "modes.m"
    }
#line 594 "modes.m"
}

#line 569 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_1(
#line 569 "modes.m"
  void * check_hlds__modes__env_ptr_arg)
#line 569 "modes.m"
{
#line 569 "modes.m"
  {
#line 569 "modes.m"
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * check_hlds__modes__env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) check_hlds__modes__env_ptr_arg;

#line 569 "modes.m"
    MR_builtin_longjmp((check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__commit_0, 1);
#line 569 "modes.m"
  }
#line 569 "modes.m"
}

#line 569 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_3(
#line 569 "modes.m"
  void * check_hlds__modes__env_ptr_arg)
#line 569 "modes.m"
{
#line 569 "modes.m"
  {
#line 569 "modes.m"
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * check_hlds__modes__env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) check_hlds__modes__env_ptr_arg;

#line 569 "modes.m"
    (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0___ProcId_73 = ((MR_Integer) (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv2__ProcId_73);
#line 569 "modes.m"
    (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcInfo_81 = ((MR_Word) (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv1_ProcInfo_81);
#line 569 "modes.m"
    {
#line 569 "modes.m"
      check_hlds__modes__maybe_modecheck_pred_9_p_0_2(check_hlds__modes__env_ptr);
#line 569 "modes.m"
      return;
    }
#line 569 "modes.m"
  }
#line 569 "modes.m"
}

#line 569 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_2(
#line 569 "modes.m"
  void * check_hlds__modes__env_ptr_arg)
#line 569 "modes.m"
{
#line 569 "modes.m"
  {
#line 569 "modes.m"
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * check_hlds__modes__env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) check_hlds__modes__env_ptr_arg;

#line 569 "modes.m"
    {
#line 570 "modes.m"
      MR_Word check_hlds__modes__V_89_89;

#line 570 "modes.m"
      {
#line 570 "modes.m"
        hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcInfo_81, &(check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__V_84_84);
      }
#line 570 "modes.m"
      (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__V_84_84)) == (MR_mktag((MR_Integer) 1)));
#line 570 "modes.m"
      if ((check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
#line 570 "modes.m"
        {
#line 570 "modes.m"
          check_hlds__modes__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__V_84_84, (MR_Integer) 0)));
#line 570 "modes.m"
          {
#line 570 "modes.m"
            check_hlds__modes__maybe_modecheck_pred_9_p_0_1(check_hlds__modes__env_ptr);
#line 570 "modes.m"
            return;
          }
#line 570 "modes.m"
        }
#line 569 "modes.m"
    }
#line 569 "modes.m"
  }
#line 569 "modes.m"
}

#line 569 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_4(
#line 569 "modes.m"
  void * check_hlds__modes__env_ptr_arg)
#line 569 "modes.m"
{
#line 569 "modes.m"
  {
#line 569 "modes.m"
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * check_hlds__modes__env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) check_hlds__modes__env_ptr_arg;

#line 569 "modes.m"
    if (MR_builtin_setjmp((check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__commit_0) == 0)
#line 569 "modes.m"
      {
#line 569 "modes.m"
        {
#line 569 "modes.m"
          {
#line 569 "modes.m"
            mercury__map__member_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcTable_71, &(check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv2__ProcId_73, &(check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv1_ProcInfo_81, check_hlds__modes__maybe_modecheck_pred_9_p_0_3, check_hlds__modes__env_ptr);
          }
#line 569 "modes.m"
        }
#line 569 "modes.m"
        (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = MR_FALSE;
#line 569 "modes.m"
      }
#line 569 "modes.m"
    else
#line 569 "modes.m"
      (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = MR_TRUE;
#line 569 "modes.m"
  }
#line 569 "modes.m"
}

#line 492 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0(
#line 492 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_10,
#line 492 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_11,
#line 492 "modes.m"
  MR_Word check_hlds__modes__PredId_12,
#line 492 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25,
#line 492 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_26,
#line 492 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_27,
#line 492 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_28,
#line 492 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_29,
#line 492 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_30)
#line 492 "modes.m"
{
#line 492 "modes.m"
  {
#line 492 "modes.m"
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s check_hlds__modes__env;

#line 497 "modes.m"
    {
#line 497 "modes.m"
      MR_Word check_hlds__modes__Preds0_16;
#line 497 "modes.m"
      MR_Word check_hlds__modes__PredInfo0_17;
#line 499 "modes.m"
      MR_Box check_hlds__modes__conv0_PredInfo0_17;

#line 498 "modes.m"
      {
#line 498 "modes.m"
        hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25, &check_hlds__modes__Preds0_16);
      }
#line 499 "modes.m"
      {
#line 499 "modes.m"
        mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__modes__Preds0_16, ((MR_Box) (check_hlds__modes__PredId_12)), &check_hlds__modes__conv0_PredInfo0_17);
      }
#line 499 "modes.m"
      check_hlds__modes__PredInfo0_17 = ((MR_Word) check_hlds__modes__conv0_PredInfo0_17);
#line 477 "modes.m"
      {
#line 477 "modes.m"
        (check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__modes__PredInfo0_17);
      }
#line 480 "modes.m"
      if (!((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded))
#line 480 "modes.m"
        {
#line 478 "modes.m"
          {
#line 478 "modes.m"
            (check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(check_hlds__modes__PredInfo0_17);
          }
#line 480 "modes.m"
          if (!((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded))
#line 483 "modes.m"
            {
#line 483 "modes.m"
              MR_Word check_hlds__modes__PredMarkers_46;

#line 483 "modes.m"
              {
#line 483 "modes.m"
                hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modes__PredInfo0_17, &check_hlds__modes__PredMarkers_46);
              }
#line 484 "modes.m"
              {
#line 484 "modes.m"
                (check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__PredMarkers_46, (MR_Integer) 9);
              }
#line 483 "modes.m"
            }
#line 480 "modes.m"
        }
#line 6682 "check_hlds.modes.c"
      if ((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
#line 6684 "check_hlds.modes.c"
        {
#line 502 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_26 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25;
#line 502 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Changed_28 = check_hlds__modes__STATE_VARIABLE_Changed_0_27;
#line 502 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Specs_30 = check_hlds__modes__STATE_VARIABLE_Specs_0_29;
#line 6692 "check_hlds.modes.c"
        }
#line 6694 "check_hlds.modes.c"
      else
#line 6696 "check_hlds.modes.c"
        {
#line 6698 "check_hlds.modes.c"
          MR_Word check_hlds__modes__TypeCtorInfo_43_43;
#line 6700 "check_hlds.modes.c"
          MR_Word check_hlds__modes__ThisPredDeclSpecs_20;
#line 6702 "check_hlds.modes.c"
          MR_Word check_hlds__modes__ThisPredProcSpecs_21;
#line 6704 "check_hlds.modes.c"
          MR_Word check_hlds__modes__Globals_22;
#line 6706 "check_hlds.modes.c"
          MR_Word check_hlds__modes__ContainsError_23;
#line 6708 "check_hlds.modes.c"
          MR_Word check_hlds__modes__Statistics_24;
#line 6710 "check_hlds.modes.c"
          MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33;
#line 6712 "check_hlds.modes.c"
          MR_Word check_hlds__modes__V_36_36;
#line 6714 "check_hlds.modes.c"
          MR_Word check_hlds__modes__ProcIds_75;
#line 6716 "check_hlds.modes.c"
          MR_Word check_hlds__modes__SpecsAcc_76;
#line 6718 "check_hlds.modes.c"
          MR_Word check_hlds__modes__V_80_80;
#line 505 "modes.m"
          MR_Word check_hlds__modes__Markers_55;
#line 505 "modes.m"
          MR_String check_hlds__modes__Msg_56;

#line 535 "modes.m"
          {
#line 535 "modes.m"
            hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modes__PredInfo0_17, &check_hlds__modes__Markers_55);
          }
#line 536 "modes.m"
          {
#line 536 "modes.m"
            (check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_55, (MR_Integer) 3);
          }
#line 544 "modes.m"
          if ((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
#line 540 "modes.m"
            if ((check_hlds__modes__WhatToCheck_10 == (MR_Integer) 0))
#line 539 "modes.m"
              check_hlds__modes__Msg_56 = (MR_String) "% Mode-analysing ";
#line 540 "modes.m"
            else
#line 542 "modes.m"
              check_hlds__modes__Msg_56 = (MR_String) "% Unique-mode-analysing ";
#line 544 "modes.m"
          else
#line 548 "modes.m"
            if ((check_hlds__modes__WhatToCheck_10 == (MR_Integer) 0))
#line 547 "modes.m"
              check_hlds__modes__Msg_56 = (MR_String) "% Mode-checking ";
#line 548 "modes.m"
            else
#line 550 "modes.m"
              check_hlds__modes__Msg_56 = (MR_String) "% Unique-mode-checking ";
#line 553 "modes.m"
          {
#line 553 "modes.m"
            hlds__passes_aux__write_pred_progress_message_5_p_0(check_hlds__modes__Msg_56, check_hlds__modes__PredId_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25);
          }
#line 580 "modes.m"
          if ((check_hlds__modes__WhatToCheck_10 == (MR_Integer) 0))
#line 565 "modes.m"
            {
#line 566 "modes.m"
              {
#line 566 "modes.m"
                hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__modes__PredInfo0_17, &(check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcTable_71);
              }
#line 569 "modes.m"
              {
#line 569 "modes.m"
                check_hlds__modes__maybe_modecheck_pred_9_p_0_4(&check_hlds__modes__env);
              }
#line 575 "modes.m"
              if ((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
#line 574 "modes.m"
                check_hlds__modes__ThisPredDeclSpecs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 575 "modes.m"
              else
#line 577 "modes.m"
                {
#line 577 "modes.m"
                  check_hlds__modes__ThisPredDeclSpecs_20 = check_hlds__mode_errors__maybe_report_error_no_modes_3_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__modes__PredId_12, check_hlds__modes__PredInfo0_17);
                }
#line 565 "modes.m"
            }
#line 580 "modes.m"
          else
#line 582 "modes.m"
            check_hlds__modes__ThisPredDeclSpecs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 587 "modes.m"
          {
#line 587 "modes.m"
            check_hlds__modes__ProcIds_75 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__modes__PredInfo0_17);
          }
#line 589 "modes.m"
          {
#line 589 "modes.m"
            check_hlds__modes__V_80_80 = parse_tree__error_util__init_error_spec_accumulator_0_f_0();
          }
#line 588 "modes.m"
          {
#line 588 "modes.m"
            check_hlds__modes__modecheck_procs_10_p_0(check_hlds__modes__ProcIds_75, check_hlds__modes__PredId_12, check_hlds__modes__WhatToCheck_10, check_hlds__modes__MayChangeCalledProc_11, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__modes__STATE_VARIABLE_Changed_0_27, check_hlds__modes__STATE_VARIABLE_Changed_28, check_hlds__modes__V_80_80, &check_hlds__modes__SpecsAcc_76);
          }
#line 590 "modes.m"
          {
#line 590 "modes.m"
            check_hlds__modes__ThisPredProcSpecs_21 = parse_tree__error_util__error_spec_accumulator_to_list_1_f_0(check_hlds__modes__SpecsAcc_76);
          }
#line 6811 "check_hlds.modes.c"
          check_hlds__modes__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 512 "modes.m"
          {
#line 512 "modes.m"
            check_hlds__modes__V_36_36 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_43_43, check_hlds__modes__ThisPredProcSpecs_21, check_hlds__modes__STATE_VARIABLE_Specs_0_29);
          }
#line 512 "modes.m"
          {
#line 512 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Specs_30 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_43_43, check_hlds__modes__ThisPredDeclSpecs_20, check_hlds__modes__V_36_36);
          }
#line 516 "modes.m"
          {
#line 516 "modes.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33, &check_hlds__modes__Globals_22);
          }
#line 517 "modes.m"
          {
#line 517 "modes.m"
            check_hlds__modes__ContainsError_23 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__modes__Globals_22, check_hlds__modes__ThisPredProcSpecs_21);
          }
#line 521 "modes.m"
          if ((check_hlds__modes__ContainsError_23 == (MR_Integer) 0))
#line 522 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_ModuleInfo_26 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33;
#line 521 "modes.m"
          else
#line 520 "modes.m"
            {
#line 520 "modes.m"
              hlds__hlds_module__module_info_remove_predid_3_p_0(check_hlds__modes__PredId_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__modes__STATE_VARIABLE_ModuleInfo_26);
            }
#line 525 "modes.m"
          {
#line 525 "modes.m"
            libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_22, (MR_Integer) 55, &check_hlds__modes__Statistics_24);
          }
#line 527 "modes.m"
          {
#line 527 "modes.m"
            libs__file_util__maybe_report_stats_3_p_0(check_hlds__modes__Statistics_24);
#line 527 "modes.m"
            return;
          }
#line 6856 "check_hlds.modes.c"
        }
#line 497 "modes.m"
    }
#line 492 "modes.m"
  }
#line 492 "modes.m"
}

#line 461 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_proc_body_4_p_0(
#line 461 "modes.m"
  MR_Word check_hlds__modes__OldProcTable_5,
#line 461 "modes.m"
  MR_Integer check_hlds__modes__ProcId_6,
#line 461 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ProcTable_0_12,
#line 461 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ProcTable_13)
#line 461 "modes.m"
{
#line 464 "modes.m"
  {
#line 464 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 464 "modes.m"
    MR_Word check_hlds__modes__TypeCtorInfo_15_15 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 464 "modes.m"
    MR_Word check_hlds__modes__TypeCtorInfo_16_16 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 464 "modes.m"
    MR_Word check_hlds__modes__OldProcInfo_8;
#line 464 "modes.m"
    MR_Word check_hlds__modes__OldProcBody_9;
#line 464 "modes.m"
    MR_Word check_hlds__modes__ProcInfo0_10;
#line 464 "modes.m"
    MR_Word check_hlds__modes__ProcInfo_11;
#line 465 "modes.m"
    MR_Box check_hlds__modes__conv0_OldProcInfo_8;
#line 467 "modes.m"
    MR_Box check_hlds__modes__conv1_ProcInfo0_10;

#line 465 "modes.m"
    {
#line 465 "modes.m"
      mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_15_15, check_hlds__modes__TypeCtorInfo_16_16, check_hlds__modes__OldProcTable_5, ((MR_Box) (check_hlds__modes__ProcId_6)), &check_hlds__modes__conv0_OldProcInfo_8);
    }
#line 465 "modes.m"
    check_hlds__modes__OldProcInfo_8 = ((MR_Word) check_hlds__modes__conv0_OldProcInfo_8);
#line 466 "modes.m"
    {
#line 466 "modes.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__modes__OldProcInfo_8, &check_hlds__modes__OldProcBody_9);
    }
#line 467 "modes.m"
    {
#line 467 "modes.m"
      mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_15_15, check_hlds__modes__TypeCtorInfo_16_16, check_hlds__modes__STATE_VARIABLE_ProcTable_0_12, ((MR_Box) (check_hlds__modes__ProcId_6)), &check_hlds__modes__conv1_ProcInfo0_10);
    }
#line 467 "modes.m"
    check_hlds__modes__ProcInfo0_10 = ((MR_Word) check_hlds__modes__conv1_ProcInfo0_10);
#line 468 "modes.m"
    {
#line 468 "modes.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__modes__OldProcBody_9, check_hlds__modes__ProcInfo0_10, &check_hlds__modes__ProcInfo_11);
    }
#line 469 "modes.m"
    {
#line 469 "modes.m"
      mercury__map__set_4_p_0(check_hlds__modes__TypeCtorInfo_15_15, check_hlds__modes__TypeCtorInfo_16_16, ((MR_Box) (check_hlds__modes__ProcId_6)), ((MR_Box) (check_hlds__modes__ProcInfo_11)), check_hlds__modes__STATE_VARIABLE_ProcTable_0_12, check_hlds__modes__STATE_VARIABLE_ProcTable_13);
#line 469 "modes.m"
      return;
    }
#line 464 "modes.m"
  }
#line 461 "modes.m"
}

#line 451 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0_1(
#line 451 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 451 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 451 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 451 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3)
#line 451 "modes.m"
{
#line 451 "modes.m"
  {
#line 451 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 451 "modes.m"
    MR_Word check_hlds__modes__conv2_STATE_VARIABLE_ProcTable_13;

#line 451 "modes.m"
    {
#line 451 "modes.m"
      check_hlds__modes__copy_proc_body_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Integer) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2), &check_hlds__modes__conv2_STATE_VARIABLE_ProcTable_13);
    }
#line 451 "modes.m"
    *check_hlds__modes__wrapper_arg_3 = ((MR_Box) (check_hlds__modes__conv2_STATE_VARIABLE_ProcTable_13));
#line 451 "modes.m"
  }
#line 451 "modes.m"
}

#line 433 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0(
#line 433 "modes.m"
  MR_Word check_hlds__modes__OldPredTable_5,
#line 433 "modes.m"
  MR_Word check_hlds__modes__PredId_6,
#line 433 "modes.m"
  MR_Word check_hlds__modes__PredTable0_7,
#line 433 "modes.m"
  MR_Word * check_hlds__modes__PredTable_8)
#line 433 "modes.m"
{
#line 436 "modes.m"
  {
#line 436 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 436 "modes.m"
    MR_Word check_hlds__modes__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 436 "modes.m"
    MR_Word check_hlds__modes__TypeCtorInfo_20_20 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 436 "modes.m"
    MR_Word check_hlds__modes__PredInfo0_9;
#line 437 "modes.m"
    MR_Box check_hlds__modes__conv0_PredInfo0_9;
#line 442 "modes.m"
    MR_Word check_hlds__modes__Markers_10;

#line 437 "modes.m"
    {
#line 437 "modes.m"
      mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_19_19, check_hlds__modes__TypeCtorInfo_20_20, check_hlds__modes__PredTable0_7, ((MR_Box) (check_hlds__modes__PredId_6)), &check_hlds__modes__conv0_PredInfo0_9);
    }
#line 437 "modes.m"
    check_hlds__modes__PredInfo0_9 = ((MR_Word) check_hlds__modes__conv0_PredInfo0_9);
#line 442 "modes.m"
    {
#line 442 "modes.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modes__PredInfo0_9, &check_hlds__modes__Markers_10);
    }
#line 443 "modes.m"
    {
#line 443 "modes.m"
      check_hlds__modes__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_10, (MR_Integer) 9);
    }
#line 446 "modes.m"
    if (check_hlds__modes__succeeded)
#line 445 "modes.m"
      *check_hlds__modes__PredTable_8 = check_hlds__modes__PredTable0_7;
#line 446 "modes.m"
    else
#line 447 "modes.m"
      {
#line 447 "modes.m"
        MR_Word check_hlds__modes__TypeCtorInfo_21_21;
#line 447 "modes.m"
        MR_Word check_hlds__modes__ProcTable0_11;
#line 447 "modes.m"
        MR_Word check_hlds__modes__OldPredInfo_12;
#line 447 "modes.m"
        MR_Word check_hlds__modes__OldProcTable_13;
#line 447 "modes.m"
        MR_Word check_hlds__modes__OldProcIds_14;
#line 447 "modes.m"
        MR_Word check_hlds__modes__ProcTable_15;
#line 447 "modes.m"
        MR_Word check_hlds__modes__PredInfo_16;
#line 447 "modes.m"
        MR_Word check_hlds__modes__V_18_18;
#line 448 "modes.m"
        MR_Box check_hlds__modes__conv1_OldPredInfo_12;
#line 451 "modes.m"
        MR_Box check_hlds__modes__conv3_ProcTable_15;

#line 447 "modes.m"
        {
#line 447 "modes.m"
          hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__modes__PredInfo0_9, &check_hlds__modes__ProcTable0_11);
        }
#line 448 "modes.m"
        {
#line 448 "modes.m"
          mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_19_19, check_hlds__modes__TypeCtorInfo_20_20, check_hlds__modes__OldPredTable_5, ((MR_Box) (check_hlds__modes__PredId_6)), &check_hlds__modes__conv1_OldPredInfo_12);
        }
#line 448 "modes.m"
        check_hlds__modes__OldPredInfo_12 = ((MR_Word) check_hlds__modes__conv1_OldPredInfo_12);
#line 449 "modes.m"
        {
#line 449 "modes.m"
          hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__modes__OldPredInfo_12, &check_hlds__modes__OldProcTable_13);
        }
#line 7058 "check_hlds.modes.c"
        check_hlds__modes__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 450 "modes.m"
        {
#line 450 "modes.m"
          mercury__map__keys_2_p_0(check_hlds__modes__TypeCtorInfo_21_21, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__modes__OldProcTable_13, &check_hlds__modes__OldProcIds_14);
        }
#line 451 "modes.m"
        {
#line 451 "modes.m"
          check_hlds__modes__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 451 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_18_18, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_5[1]));
#line 451 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_18_18, 1) = ((MR_Box) (check_hlds__modes__copy_pred_body_4_p_0_1));
#line 451 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 451 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_18_18, 3) = ((MR_Box) (check_hlds__modes__OldProcTable_13));
#line 451 "modes.m"
        }
#line 451 "modes.m"
        {
#line 451 "modes.m"
          mercury__list__foldl_4_p_0(check_hlds__modes__TypeCtorInfo_21_21, (MR_Word) &check_hlds__modes_scalar_common_2[1], check_hlds__modes__V_18_18, check_hlds__modes__OldProcIds_14, ((MR_Box) (check_hlds__modes__ProcTable0_11)), &check_hlds__modes__conv3_ProcTable_15);
        }
#line 451 "modes.m"
        check_hlds__modes__ProcTable_15 = ((MR_Word) check_hlds__modes__conv3_ProcTable_15);
#line 453 "modes.m"
        {
#line 453 "modes.m"
          hlds__hlds_pred__pred_info_set_procedures_3_p_0(check_hlds__modes__ProcTable_15, check_hlds__modes__PredInfo0_9, &check_hlds__modes__PredInfo_16);
        }
#line 454 "modes.m"
        {
#line 454 "modes.m"
          mercury__map__set_4_p_0(check_hlds__modes__TypeCtorInfo_19_19, check_hlds__modes__TypeCtorInfo_20_20, ((MR_Box) (check_hlds__modes__PredId_6)), ((MR_Box) (check_hlds__modes__PredInfo_16)), check_hlds__modes__PredTable0_7, check_hlds__modes__PredTable_8);
#line 454 "modes.m"
          return;
        }
#line 447 "modes.m"
      }
#line 436 "modes.m"
  }
#line 433 "modes.m"
}

#line 425 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_2(
#line 425 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 425 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 425 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 425 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3)
#line 425 "modes.m"
{
#line 425 "modes.m"
  {
#line 425 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 425 "modes.m"
    MR_Word check_hlds__modes__conv6_PredTable_8;

#line 425 "modes.m"
    {
#line 425 "modes.m"
      check_hlds__modes__copy_pred_body_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2), &check_hlds__modes__conv6_PredTable_8);
    }
#line 425 "modes.m"
    *check_hlds__modes__wrapper_arg_3 = ((MR_Box) (check_hlds__modes__conv6_PredTable_8));
#line 425 "modes.m"
  }
#line 425 "modes.m"
}

#line 322 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_1(
#line 322 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 322 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 322 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 322 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3,
#line 322 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_4,
#line 322 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_5,
#line 322 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_6,
#line 322 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_7)
#line 322 "modes.m"
{
#line 322 "modes.m"
  {
#line 322 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 322 "modes.m"
    MR_Word check_hlds__modes__conv2_STATE_VARIABLE_ModuleInfo_26;
#line 322 "modes.m"
    MR_Word check_hlds__modes__conv1_STATE_VARIABLE_Changed_28;
#line 322 "modes.m"
    MR_Word check_hlds__modes__conv0_STATE_VARIABLE_Specs_30;

#line 322 "modes.m"
    {
#line 322 "modes.m"
      check_hlds__modes__maybe_modecheck_pred_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2), &check_hlds__modes__conv2_STATE_VARIABLE_ModuleInfo_26, ((MR_Word) check_hlds__modes__wrapper_arg_4), &check_hlds__modes__conv1_STATE_VARIABLE_Changed_28, ((MR_Word) check_hlds__modes__wrapper_arg_6), &check_hlds__modes__conv0_STATE_VARIABLE_Specs_30);
    }
#line 322 "modes.m"
    *check_hlds__modes__wrapper_arg_3 = ((MR_Box) (check_hlds__modes__conv2_STATE_VARIABLE_ModuleInfo_26));
#line 322 "modes.m"
    *check_hlds__modes__wrapper_arg_5 = ((MR_Box) (check_hlds__modes__conv1_STATE_VARIABLE_Changed_28));
#line 322 "modes.m"
    *check_hlds__modes__wrapper_arg_7 = ((MR_Box) (check_hlds__modes__conv0_STATE_VARIABLE_Specs_30));
#line 322 "modes.m"
  }
#line 322 "modes.m"
}

#line 310 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0(
#line 310 "modes.m"
  MR_Word check_hlds__modes__PredIds_9,
#line 310 "modes.m"
  MR_Integer check_hlds__modes__MaxIterations_10,
#line 310 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_11,
#line 310 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_12,
#line 310 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31,
#line 310 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_32,
#line 310 "modes.m"
  MR_Word * check_hlds__modes__SafeToContinue_14,
#line 310 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_33)
#line 310 "modes.m"
{
#line 316 "modes.m"
  while (MR_TRUE)
#line 316 "modes.m"
    {
#line 316 "modes.m"
      /* tailcall optimized into a loop */
#line 316 "modes.m"
      {
#line 316 "modes.m"
        MR_bool check_hlds__modes__succeeded;
#line 316 "modes.m"
        MR_Word check_hlds__modes__OldPredTable0_16;
#line 316 "modes.m"
        MR_Word check_hlds__modes__Changed1_17;
#line 316 "modes.m"
        MR_Word check_hlds__modes__OldPredTable_18;
#line 316 "modes.m"
        MR_Word check_hlds__modes__Changed2_19;
#line 316 "modes.m"
        MR_Word check_hlds__modes__QueuedSpecs_20;
#line 316 "modes.m"
        MR_Word check_hlds__modes__Changed_21;
#line 316 "modes.m"
        MR_Word check_hlds__modes__Globals_22;
#line 316 "modes.m"
        MR_Word check_hlds__modes__ErrorsSoFar_23;
#line 316 "modes.m"
        MR_Word check_hlds__modes__V_34_34;
#line 316 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35;
#line 316 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_Specs_38_38;
#line 316 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39;
#line 316 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_Specs_40_40;
#line 322 "modes.m"
        MR_Box check_hlds__modes__conv5_STATE_VARIABLE_ModuleInfo_35_35;
#line 322 "modes.m"
        MR_Box check_hlds__modes__conv4_Changed1_17;
#line 322 "modes.m"
        MR_Box check_hlds__modes__conv3_STATE_VARIABLE_Specs_38_38;

#line 319 "modes.m"
        {
#line 319 "modes.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31, &check_hlds__modes__OldPredTable0_16);
        }
#line 322 "modes.m"
        {
#line 322 "modes.m"
          check_hlds__modes__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 322 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_4[0]));
#line 322 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 1) = ((MR_Box) (check_hlds__modes__modecheck_to_fixpoint_8_p_0_1));
#line 322 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 322 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 3) = ((MR_Box) (check_hlds__modes__WhatToCheck_11));
#line 322 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 4) = ((MR_Box) (check_hlds__modes__MayChangeCalledProc_12));
#line 322 "modes.m"
        }
#line 322 "modes.m"
        {
#line 322 "modes.m"
          mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &check_hlds__modes_scalar_common_1[0], check_hlds__modes__V_34_34, check_hlds__modes__PredIds_9, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31)), &check_hlds__modes__conv5_STATE_VARIABLE_ModuleInfo_35_35, ((MR_Box) ((MR_Integer) 0)), &check_hlds__modes__conv4_Changed1_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__modes__conv3_STATE_VARIABLE_Specs_38_38);
        }
#line 322 "modes.m"
        check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35 = ((MR_Word) check_hlds__modes__conv5_STATE_VARIABLE_ModuleInfo_35_35);
#line 322 "modes.m"
        check_hlds__modes__Changed1_17 = ((MR_Word) check_hlds__modes__conv4_Changed1_17);
#line 322 "modes.m"
        check_hlds__modes__STATE_VARIABLE_Specs_38_38 = ((MR_Word) check_hlds__modes__conv3_STATE_VARIABLE_Specs_38_38);
#line 327 "modes.m"
        {
#line 327 "modes.m"
          check_hlds__modes__modecheck_queued_procs_7_p_0(check_hlds__modes__WhatToCheck_11, check_hlds__modes__OldPredTable0_16, &check_hlds__modes__OldPredTable_18, check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__Changed2_19, &check_hlds__modes__QueuedSpecs_20);
        }
#line 329 "modes.m"
        {
#line 329 "modes.m"
          check_hlds__modes__STATE_VARIABLE_Specs_40_40 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__QueuedSpecs_20, check_hlds__modes__STATE_VARIABLE_Specs_38_38);
        }
#line 330 "modes.m"
        {
#line 330 "modes.m"
          mercury__bool__or_3_p_0(check_hlds__modes__Changed1_17, check_hlds__modes__Changed2_19, &check_hlds__modes__Changed_21);
        }
#line 332 "modes.m"
        {
#line 332 "modes.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__Globals_22);
        }
#line 333 "modes.m"
        {
#line 333 "modes.m"
          check_hlds__modes__ErrorsSoFar_23 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__modes__Globals_22, check_hlds__modes__STATE_VARIABLE_Specs_40_40);
        }
#line 338 "modes.m"
        if ((check_hlds__modes__Changed_21 == (MR_Integer) 0))
#line 335 "modes.m"
          {
#line 337 "modes.m"
            *check_hlds__modes__SafeToContinue_14 = (MR_Integer) 0;
#line 337 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_ModuleInfo_32 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39;
#line 337 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Specs_33 = check_hlds__modes__STATE_VARIABLE_Specs_40_40;
#line 335 "modes.m"
          }
#line 338 "modes.m"
        else
#line 344 "modes.m"
          if ((check_hlds__modes__ErrorsSoFar_23 == (MR_Integer) 0))
#line 351 "modes.m"
            {
#line 346 "modes.m"
              check_hlds__modes__succeeded = (check_hlds__modes__MaxIterations_10 <= (MR_Integer) 1);
#line 351 "modes.m"
              if (check_hlds__modes__succeeded)
#line 348 "modes.m"
                {
#line 348 "modes.m"
                  MR_Word check_hlds__modes__MaxIterSpec_24;
#line 348 "modes.m"
                  MR_Word check_hlds__modes__Globals_73;
#line 348 "modes.m"
                  MR_Integer check_hlds__modes__MaxIterations_74;
#line 348 "modes.m"
                  MR_Word check_hlds__modes__Pieces_75;
#line 348 "modes.m"
                  MR_Word check_hlds__modes__Msg_76;
#line 348 "modes.m"
                  MR_Word check_hlds__modes__V_80_80;
#line 348 "modes.m"
                  MR_Word check_hlds__modes__V_82_82;
#line 348 "modes.m"
                  MR_Word check_hlds__modes__V_85_85;
#line 348 "modes.m"
                  MR_Word check_hlds__modes__V_88_88;
#line 348 "modes.m"
                  MR_Word check_hlds__modes__V_91_91;
#line 348 "modes.m"
                  MR_Word check_hlds__modes__V_94_94;
#line 348 "modes.m"
                  MR_Word check_hlds__modes__V_97_97;
#line 348 "modes.m"
                  MR_Word check_hlds__modes__V_98_98;
#line 348 "modes.m"
                  MR_Word check_hlds__modes__V_108_108;
#line 348 "modes.m"
                  MR_Word check_hlds__modes__V_109_109;
#line 348 "modes.m"
                  MR_Word check_hlds__modes__V_114_114;

#line 402 "modes.m"
                  {
#line 402 "modes.m"
                    hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__Globals_73);
                  }
#line 403 "modes.m"
                  {
#line 403 "modes.m"
                    libs__globals__lookup_int_option_3_p_0(check_hlds__modes__Globals_73, (MR_Integer) 167, &check_hlds__modes__MaxIterations_74);
                  }
#line 409 "modes.m"
                  {
#line 409 "modes.m"
                    check_hlds__modes__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "modes.m"
                    MR_hl_field(MR_mktag(3), check_hlds__modes__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 409 "modes.m"
                    MR_hl_field(MR_mktag(3), check_hlds__modes__V_98_98, 1) = ((MR_Box) (check_hlds__modes__MaxIterations_74));
#line 409 "modes.m"
                  }
#line 409 "modes.m"
                  {
#line 409 "modes.m"
                    check_hlds__modes__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_97_97, 0) = ((MR_Box) (check_hlds__modes__V_98_98));
#line 409 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[6])));
#line 409 "modes.m"
                  }
#line 409 "modes.m"
                  {
#line 409 "modes.m"
                    check_hlds__modes__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_94_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[42])));
#line 409 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_94_94, 1) = ((MR_Box) (check_hlds__modes__V_97_97));
#line 409 "modes.m"
                  }
#line 408 "modes.m"
                  {
#line 408 "modes.m"
                    check_hlds__modes__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_91_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[41])));
#line 408 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_91_91, 1) = ((MR_Box) (check_hlds__modes__V_94_94));
#line 408 "modes.m"
                  }
#line 407 "modes.m"
                  {
#line 407 "modes.m"
                    check_hlds__modes__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_88_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__modes_scalar_common_3[2])));
#line 407 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_88_88, 1) = ((MR_Box) (check_hlds__modes__V_91_91));
#line 407 "modes.m"
                  }
#line 407 "modes.m"
                  {
#line 407 "modes.m"
                    check_hlds__modes__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_85_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[40])));
#line 407 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_85_85, 1) = ((MR_Box) (check_hlds__modes__V_88_88));
#line 407 "modes.m"
                  }
#line 406 "modes.m"
                  {
#line 406 "modes.m"
                    check_hlds__modes__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_82_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[39])));
#line 406 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_82_82, 1) = ((MR_Box) (check_hlds__modes__V_85_85));
#line 406 "modes.m"
                  }
#line 405 "modes.m"
                  {
#line 405 "modes.m"
                    check_hlds__modes__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_80_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 405 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_80_80, 1) = ((MR_Box) (check_hlds__modes__V_82_82));
#line 405 "modes.m"
                  }
#line 405 "modes.m"
                  {
#line 405 "modes.m"
                    check_hlds__modes__Pieces_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__Pieces_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[38])));
#line 405 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__Pieces_75, 1) = ((MR_Box) (check_hlds__modes__V_80_80));
#line 405 "modes.m"
                  }
#line 411 "modes.m"
                  {
#line 411 "modes.m"
                    check_hlds__modes__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 411 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_109_109, 0) = ((MR_Box) (check_hlds__modes__Pieces_75));
#line 411 "modes.m"
                  }
#line 411 "modes.m"
                  {
#line 411 "modes.m"
                    check_hlds__modes__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_108_108, 0) = ((MR_Box) (check_hlds__modes__V_109_109));
#line 411 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "modes.m"
                  }
#line 411 "modes.m"
                  {
#line 411 "modes.m"
                    check_hlds__modes__Msg_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 411 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__Msg_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__Msg_76, 1) = ((MR_Box) ((MR_Integer) 1));
#line 411 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__Msg_76, 2) = ((MR_Box) ((MR_Integer) 0));
#line 411 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__Msg_76, 3) = ((MR_Box) (check_hlds__modes__V_108_108));
#line 411 "modes.m"
                  }
#line 413 "modes.m"
                  {
#line 413 "modes.m"
                    check_hlds__modes__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_114_114, 0) = ((MR_Box) (check_hlds__modes__Msg_76));
#line 413 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 413 "modes.m"
                  }
#line 412 "modes.m"
                  {
#line 412 "modes.m"
                    check_hlds__modes__MaxIterSpec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 412 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__MaxIterSpec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 412 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__MaxIterSpec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[3])));
#line 412 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__MaxIterSpec_24, 2) = ((MR_Box) (check_hlds__modes__V_114_114));
#line 412 "modes.m"
                  }
#line 349 "modes.m"
                  {
#line 349 "modes.m"
                    MR_Word base;
#line 349 "modes.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "modes.m"
                    *check_hlds__modes__STATE_VARIABLE_Specs_33 = base;
#line 349 "modes.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modes__MaxIterSpec_24));
#line 349 "modes.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_40_40));
#line 349 "modes.m"
                  }
#line 350 "modes.m"
                  *check_hlds__modes__SafeToContinue_14 = (MR_Integer) 1;
#line 350 "modes.m"
                  *check_hlds__modes__STATE_VARIABLE_ModuleInfo_32 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39;
#line 348 "modes.m"
                }
#line 351 "modes.m"
              else
#line 353 "modes.m"
                {
#line 353 "modes.m"
                  MR_Word check_hlds__modes__DebugModes_25;
#line 353 "modes.m"
                  MR_Integer check_hlds__modes__MaxIterations1_30;
#line 353 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_55_55;

#line 353 "modes.m"
                  {
#line 353 "modes.m"
                    libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_22, (MR_Integer) 58, &check_hlds__modes__DebugModes_25);
                  }
#line 366 "modes.m"
                  if ((check_hlds__modes__DebugModes_25 == (MR_Integer) 0))
#line 367 "modes.m"
                    {
#line 367 "modes.m"
                    }
#line 366 "modes.m"
                  else
#line 355 "modes.m"
                    {
#line 355 "modes.m"
                      MR_Word check_hlds__modes__InferenceSpecs_26;
#line 362 "modes.m"
                      MR_Integer check_hlds__modes___NumWarnings_28;
#line 362 "modes.m"
                      MR_Integer check_hlds__modes___NumErrors_29;

#line 357 "modes.m"
                      {
#line 357 "modes.m"
                        check_hlds__modes__InferenceSpecs_26 = check_hlds__mode_errors__report_mode_inference_messages_3_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, (MR_Integer) 1, check_hlds__modes__PredIds_9);
                      }
#line 360 "modes.m"
                      {
#line 360 "modes.m"
                        mercury__io__write_string_3_p_0((MR_String) "Inferences by current iteration:\n");
                      }
#line 362 "modes.m"
                      {
#line 362 "modes.m"
                        parse_tree__error_util__write_error_specs_8_p_0(check_hlds__modes__InferenceSpecs_26, check_hlds__modes__Globals_22, (MR_Integer) 0, &check_hlds__modes___NumWarnings_28, (MR_Integer) 0, &check_hlds__modes___NumErrors_29);
                      }
#line 364 "modes.m"
                      {
#line 364 "modes.m"
                        mercury__io__write_string_3_p_0((MR_String) "End of inferences.\n");
                      }
#line 355 "modes.m"
                    }
#line 385 "modes.m"
                  if ((check_hlds__modes__WhatToCheck_11 == (MR_Integer) 0))
#line 379 "modes.m"
                    {
#line 379 "modes.m"
                      MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_54_54;

#line 383 "modes.m"
                      {
#line 383 "modes.m"
                        check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_p_0(check_hlds__modes__PredIds_9, check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_54_54);
                      }
#line 384 "modes.m"
                      {
#line 384 "modes.m"
                        check_hlds__clause_to_proc__introduce_exists_casts_3_p_0(check_hlds__modes__PredIds_9, check_hlds__modes__STATE_VARIABLE_ModuleInfo_54_54, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_55_55);
                      }
#line 379 "modes.m"
                    }
#line 385 "modes.m"
                  else
#line 423 "modes.m"
                    {
#line 423 "modes.m"
                      MR_Word check_hlds__modes__PredTable0_121;
#line 423 "modes.m"
                      MR_Word check_hlds__modes__PredTable_122;
#line 423 "modes.m"
                      MR_Word check_hlds__modes__V_123_123;
#line 425 "modes.m"
                      MR_Box check_hlds__modes__conv7_PredTable_122;

#line 424 "modes.m"
                      {
#line 424 "modes.m"
                        hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__PredTable0_121);
                      }
#line 425 "modes.m"
                      {
#line 425 "modes.m"
                        check_hlds__modes__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 425 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_123_123, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_5[0]));
#line 425 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_123_123, 1) = ((MR_Box) (check_hlds__modes__modecheck_to_fixpoint_8_p_0_2));
#line 425 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_123_123, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 425 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_123_123, 3) = ((MR_Box) (check_hlds__modes__OldPredTable_18));
#line 425 "modes.m"
                      }
#line 425 "modes.m"
                      {
#line 425 "modes.m"
                        mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__modes_scalar_common_2[0], check_hlds__modes__V_123_123, check_hlds__modes__PredIds_9, ((MR_Box) (check_hlds__modes__PredTable0_121)), &check_hlds__modes__conv7_PredTable_122);
                      }
#line 425 "modes.m"
                      check_hlds__modes__PredTable_122 = ((MR_Word) check_hlds__modes__conv7_PredTable_122);
#line 426 "modes.m"
                      {
#line 426 "modes.m"
                        hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__PredTable_122, check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_55_55);
                      }
#line 423 "modes.m"
                    }
#line 392 "modes.m"
                  check_hlds__modes__MaxIterations1_30 = (check_hlds__modes__MaxIterations_10 - (MR_Integer) 1);
#line 393 "modes.m"
                  /* direct tailcall eliminated */
#line 393 "modes.m"
                  {
#line 393 "modes.m"
                    MR_Integer check_hlds__modes__MaxIterations__tmp_copy_10 = check_hlds__modes__MaxIterations1_30;
#line 393 "modes.m"
                    MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_31 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_55_55;

#line 393 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_31;
#line 393 "modes.m"
                    check_hlds__modes__MaxIterations_10 = check_hlds__modes__MaxIterations__tmp_copy_10;
#line 393 "modes.m"
                  }
#line 393 "modes.m"
                  continue;
#line 353 "modes.m"
                }
#line 351 "modes.m"
            }
#line 344 "modes.m"
          else
#line 341 "modes.m"
            {
#line 343 "modes.m"
              *check_hlds__modes__SafeToContinue_14 = (MR_Integer) 1;
#line 343 "modes.m"
              *check_hlds__modes__STATE_VARIABLE_ModuleInfo_32 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39;
#line 343 "modes.m"
              *check_hlds__modes__STATE_VARIABLE_Specs_33 = check_hlds__modes__STATE_VARIABLE_Specs_40_40;
#line 341 "modes.m"
            }
#line 316 "modes.m"
      }
#line 316 "modes.m"
      break;
#line 316 "modes.m"
    }
#line 310 "modes.m"
}

#line 125 "modes.m"
void MR_CALL 
check_hlds__modes__modecheck_lambda_final_insts_6_p_0(
#line 125 "modes.m"
  MR_Word check_hlds__modes__HeadVars_7,
#line 125 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts_8,
#line 125 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Goal_0_13,
#line 125 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Goal_14,
#line 125 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_15,
#line 125 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_16)
#line 125 "modes.m"
{
#line 1199 "modes.m"
  {
#line 1199 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1203 "modes.m"
    MR_Word check_hlds__modes___NewFinalInsts_12;

#line 1203 "modes.m"
    {
#line 1203 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_7, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts_8, &check_hlds__modes___NewFinalInsts_12, check_hlds__modes__STATE_VARIABLE_Goal_0_13, check_hlds__modes__STATE_VARIABLE_Goal_14, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_15, check_hlds__modes__STATE_VARIABLE_ModeInfo_16);
    }
#line 1199 "modes.m"
  }
#line 125 "modes.m"
}

#line 118 "modes.m"
void MR_CALL 
check_hlds__modes__modecheck_proc_general_8_p_0(
#line 118 "modes.m"
  MR_Integer check_hlds__modes__ProcId_9,
#line 118 "modes.m"
  MR_Word check_hlds__modes__PredId_10,
#line 118 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_11,
#line 118 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_12,
#line 118 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_16,
#line 118 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_17,
#line 118 "modes.m"
  MR_Word * check_hlds__modes__Specs_14,
#line 118 "modes.m"
  MR_Word * check_hlds__modes__Changed_15)
#line 118 "modes.m"
{
#line 619 "modes.m"
  {
#line 619 "modes.m"
    MR_bool check_hlds__modes__succeeded;

#line 620 "modes.m"
    {
#line 620 "modes.m"
      check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_9, check_hlds__modes__PredId_10, check_hlds__modes__WhatToCheck_11, check_hlds__modes__MayChangeCalledProc_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_16, check_hlds__modes__STATE_VARIABLE_ModuleInfo_17, (MR_Integer) 0, check_hlds__modes__Changed_15, check_hlds__modes__Specs_14);
#line 620 "modes.m"
      return;
    }
#line 619 "modes.m"
  }
#line 118 "modes.m"
}

#line 109 "modes.m"
void MR_CALL 
check_hlds__modes__modecheck_proc_6_p_0(
#line 109 "modes.m"
  MR_Integer check_hlds__modes__ProcId_7,
#line 109 "modes.m"
  MR_Word check_hlds__modes__PredId_8,
#line 109 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_12,
#line 109 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_13,
#line 109 "modes.m"
  MR_Word * check_hlds__modes__Specs_10,
#line 109 "modes.m"
  MR_Word * check_hlds__modes__Changed_11)
#line 109 "modes.m"
{
#line 614 "modes.m"
  {
#line 614 "modes.m"
    MR_bool check_hlds__modes__succeeded;

#line 620 "modes.m"
    {
#line 620 "modes.m"
      check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_7, check_hlds__modes__PredId_8, (MR_Integer) 0, (MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_13, (MR_Integer) 0, check_hlds__modes__Changed_11, check_hlds__modes__Specs_10);
#line 620 "modes.m"
      return;
    }
#line 614 "modes.m"
  }
#line 109 "modes.m"
}

#line 101 "modes.m"
void MR_CALL 
check_hlds__modes__check_pred_modes_6_p_0(
#line 101 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_7,
#line 101 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_8,
#line 101 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_32,
#line 101 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_33,
#line 101 "modes.m"
  MR_Word * check_hlds__modes__SafeToContinue_10,
#line 101 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_34)
#line 101 "modes.m"
{
#line 195 "modes.m"
  {
#line 195 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 195 "modes.m"
    MR_Word check_hlds__modes__PredIds_12;
#line 195 "modes.m"
    MR_Word check_hlds__modes__Globals_13;
#line 195 "modes.m"
    MR_Integer check_hlds__modes__MaxIterations_14;
#line 195 "modes.m"
    MR_Word check_hlds__modes__SafeToContinue0_15;
#line 195 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35;
#line 195 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_37_37;
#line 195 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_Specs_38_38;

#line 196 "modes.m"
    {
#line 196 "modes.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&check_hlds__modes__PredIds_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35);
    }
#line 197 "modes.m"
    {
#line 197 "modes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35, &check_hlds__modes__Globals_13);
    }
#line 198 "modes.m"
    {
#line 198 "modes.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__modes__Globals_13, (MR_Integer) 167, &check_hlds__modes__MaxIterations_14);
    }
#line 200 "modes.m"
    {
#line 200 "modes.m"
      check_hlds__modes__modecheck_to_fixpoint_8_p_0(check_hlds__modes__PredIds_12, check_hlds__modes__MaxIterations_14, check_hlds__modes__WhatToCheck_7, check_hlds__modes__MayChangeCalledProc_8, check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__modes__SafeToContinue0_15, &check_hlds__modes__STATE_VARIABLE_Specs_38_38);
    }
#line 209 "modes.m"
    if ((check_hlds__modes__WhatToCheck_7 == (MR_Integer) 0))
#line 210 "modes.m"
      if ((check_hlds__modes__SafeToContinue0_15 == (MR_Integer) 0))
#line 218 "modes.m"
        {
#line 218 "modes.m"
          MR_Word check_hlds__modes__DelayPartialInstantiations_17;

#line 219 "modes.m"
          {
#line 219 "modes.m"
            libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_13, (MR_Integer) 271, &check_hlds__modes__DelayPartialInstantiations_17);
          }
#line 301 "modes.m"
          if ((check_hlds__modes__DelayPartialInstantiations_17 == (MR_Integer) 0))
#line 302 "modes.m"
            {
#line 303 "modes.m"
              *check_hlds__modes__SafeToContinue_10 = (MR_Integer) 0;
#line 303 "modes.m"
              *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_37_37;
#line 303 "modes.m"
              *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__STATE_VARIABLE_Specs_38_38;
#line 302 "modes.m"
            }
#line 301 "modes.m"
          else
#line 222 "modes.m"
            {
#line 222 "modes.m"
              MR_Word check_hlds__modes__ChangedPreds_21;
#line 222 "modes.m"
              MR_Word check_hlds__modes__AfterDPIModuleInfo_22;
#line 222 "modes.m"
              MR_Word check_hlds__modes__AfterDPISafeToContinue_23;
#line 222 "modes.m"
              MR_Word check_hlds__modes__AfterDPISpecs_24;
#line 222 "modes.m"
              MR_Word check_hlds__modes__MaybeBeforeDPISeverity_25;
#line 222 "modes.m"
              MR_Word check_hlds__modes__MaybeAfterDPISeverity_26;
#line 222 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_40_40;

#line 226 "modes.m"
              {
#line 226 "modes.m"
                check_hlds__delay_partial_inst__delay_partial_inst_preds_4_p_0(check_hlds__modes__PredIds_12, &check_hlds__modes__ChangedPreds_21, check_hlds__modes__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_40_40);
              }
#line 229 "modes.m"
              {
#line 229 "modes.m"
                check_hlds__modes__modecheck_to_fixpoint_8_p_0(check_hlds__modes__ChangedPreds_21, check_hlds__modes__MaxIterations_14, check_hlds__modes__WhatToCheck_7, check_hlds__modes__MayChangeCalledProc_8, check_hlds__modes__STATE_VARIABLE_ModuleInfo_40_40, &check_hlds__modes__AfterDPIModuleInfo_22, &check_hlds__modes__AfterDPISafeToContinue_23, &check_hlds__modes__AfterDPISpecs_24);
              }
#line 232 "modes.m"
              {
#line 232 "modes.m"
                check_hlds__modes__MaybeBeforeDPISeverity_25 = parse_tree__error_util__worst_severity_in_specs_2_f_0(check_hlds__modes__Globals_13, check_hlds__modes__STATE_VARIABLE_Specs_38_38);
              }
#line 234 "modes.m"
              {
#line 234 "modes.m"
                check_hlds__modes__MaybeAfterDPISeverity_26 = parse_tree__error_util__worst_severity_in_specs_2_f_0(check_hlds__modes__Globals_13, check_hlds__modes__AfterDPISpecs_24);
              }
#line 258 "modes.m"
              if ((check_hlds__modes__MaybeBeforeDPISeverity_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 258 "modes.m"
                if ((check_hlds__modes__MaybeAfterDPISeverity_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 251 "modes.m"
                  {
#line 255 "modes.m"
                    *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__AfterDPISpecs_24;
#line 256 "modes.m"
                    *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__AfterDPIModuleInfo_22;
#line 257 "modes.m"
                    *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__AfterDPISafeToContinue_23;
#line 251 "modes.m"
                  }
#line 258 "modes.m"
                else
#line 259 "modes.m"
                  {
#line 262 "modes.m"
                    *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__STATE_VARIABLE_Specs_38_38;
#line 263 "modes.m"
                    *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_37_37;
#line 264 "modes.m"
                    *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__SafeToContinue0_15;
#line 259 "modes.m"
                  }
#line 258 "modes.m"
              else
#line 258 "modes.m"
                {
#line 258 "modes.m"
                  MR_Word check_hlds__modes__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__MaybeBeforeDPISeverity_25, (MR_Integer) 0)));

#line 258 "modes.m"
                  if ((check_hlds__modes__MaybeAfterDPISeverity_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "modes.m"
                    {
#line 269 "modes.m"
                      *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__AfterDPISpecs_24;
#line 270 "modes.m"
                      *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__AfterDPIModuleInfo_22;
#line 271 "modes.m"
                      *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__AfterDPISafeToContinue_23;
#line 266 "modes.m"
                    }
#line 258 "modes.m"
                  else
#line 273 "modes.m"
                    {
#line 273 "modes.m"
                      MR_Word check_hlds__modes__AfterDPISeverity_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__MaybeAfterDPISeverity_26, (MR_Integer) 0)));
#line 273 "modes.m"
                      MR_Word check_hlds__modes__WorstSeverity_31;

#line 275 "modes.m"
                      {
#line 275 "modes.m"
                        check_hlds__modes__WorstSeverity_31 = parse_tree__error_util__worst_severity_2_f_0(check_hlds__modes__V_62_62, check_hlds__modes__AfterDPISeverity_30);
                      }
#line 291 "modes.m"
                      check_hlds__modes__succeeded = (check_hlds__modes__AfterDPISeverity_30 == check_hlds__modes__WorstSeverity_31);
#line 295 "modes.m"
                      if (check_hlds__modes__succeeded)
#line 292 "modes.m"
                        {
#line 292 "modes.m"
                          *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__STATE_VARIABLE_Specs_38_38;
#line 293 "modes.m"
                          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_37_37;
#line 294 "modes.m"
                          *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__SafeToContinue0_15;
#line 292 "modes.m"
                        }
#line 295 "modes.m"
                      else
#line 296 "modes.m"
                        {
#line 296 "modes.m"
                          *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__AfterDPISpecs_24;
#line 297 "modes.m"
                          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__AfterDPIModuleInfo_22;
#line 298 "modes.m"
                          *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__AfterDPISafeToContinue_23;
#line 296 "modes.m"
                        }
#line 273 "modes.m"
                    }
#line 258 "modes.m"
                }
#line 222 "modes.m"
            }
#line 218 "modes.m"
        }
#line 210 "modes.m"
      else
#line 212 "modes.m"
        {
#line 212 "modes.m"
          MR_Word check_hlds__modes__InferenceSpecs_57;

#line 213 "modes.m"
          {
#line 213 "modes.m"
            check_hlds__modes__InferenceSpecs_57 = check_hlds__mode_errors__report_mode_inference_messages_3_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_37_37, (MR_Integer) 1, check_hlds__modes__PredIds_12);
          }
#line 215 "modes.m"
          {
#line 215 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Specs_34 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__InferenceSpecs_57, check_hlds__modes__STATE_VARIABLE_Specs_38_38);
          }
#line 216 "modes.m"
          *check_hlds__modes__SafeToContinue_10 = (MR_Integer) 1;
#line 216 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_37_37;
#line 212 "modes.m"
        }
#line 209 "modes.m"
    else
#line 203 "modes.m"
      {
#line 203 "modes.m"
        MR_Word check_hlds__modes__InferenceSpecs_16;
#line 203 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_Specs_54_54;
#line 203 "modes.m"
        MR_Word check_hlds__modes__PredIds_69;

#line 204 "modes.m"
        {
#line 204 "modes.m"
          check_hlds__modes__InferenceSpecs_16 = check_hlds__mode_errors__report_mode_inference_messages_3_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_37_37, (MR_Integer) 0, check_hlds__modes__PredIds_12);
        }
#line 206 "modes.m"
        {
#line 206 "modes.m"
          check_hlds__modes__STATE_VARIABLE_Specs_54_54 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__InferenceSpecs_16, check_hlds__modes__STATE_VARIABLE_Specs_38_38);
        }
#line 1363 "modes.m"
        {
#line 1363 "modes.m"
          hlds__hlds_module__module_info_get_valid_predids_3_p_0(&check_hlds__modes__PredIds_69, check_hlds__modes__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__modes__STATE_VARIABLE_ModuleInfo_33);
        }
#line 1364 "modes.m"
        {
#line 1364 "modes.m"
          check_hlds__modes__pred_check_eval_methods_4_p_0(*check_hlds__modes__STATE_VARIABLE_ModuleInfo_33, check_hlds__modes__PredIds_69, check_hlds__modes__STATE_VARIABLE_Specs_54_54, check_hlds__modes__STATE_VARIABLE_Specs_34);
        }
#line 208 "modes.m"
        *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__SafeToContinue0_15;
#line 203 "modes.m"
      }
#line 195 "modes.m"
  }
#line 101 "modes.m"
}

#line 95 "modes.m"
void MR_CALL 
check_hlds__modes__modecheck_module_2_p_0(
#line 95 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo0_3,
#line 95 "modes.m"
  MR_Tuple * check_hlds__modes__HeadVar__2_2)
#line 95 "modes.m"
{
#line 179 "modes.m"
  {
#line 179 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 179 "modes.m"
    MR_Word check_hlds__modes__ModuleInfo_4;
#line 179 "modes.m"
    MR_Word check_hlds__modes__SafeToContinue_5;
#line 179 "modes.m"
    MR_Word check_hlds__modes__Specs_6;
#line 179 "modes.m"
    MR_Word check_hlds__modes__Globals_7;
#line 181 "modes.m"
    MR_Word check_hlds__modes__Verbose_9;
#line 187 "modes.m"
    MR_Word check_hlds__modes__Statistics_10;

#line 180 "modes.m"
    {
#line 180 "modes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__ModuleInfo0_3, &check_hlds__modes__Globals_7);
    }
#line 182 "modes.m"
    {
#line 182 "modes.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_7, (MR_Integer) 44, &check_hlds__modes__Verbose_9);
    }
#line 183 "modes.m"
    {
#line 183 "modes.m"
      libs__file_util__maybe_write_string_4_p_0(check_hlds__modes__Verbose_9, (MR_String) "% Mode-checking clauses...\n");
    }
#line 185 "modes.m"
    {
#line 185 "modes.m"
      check_hlds__modes__check_pred_modes_6_p_0((MR_Integer) 0, (MR_Integer) 0, check_hlds__modes__ModuleInfo0_3, &check_hlds__modes__ModuleInfo_4, &check_hlds__modes__SafeToContinue_5, &check_hlds__modes__Specs_6);
    }
#line 179 "modes.m"
    {
#line 179 "modes.m"
      MR_Tuple base;
#line 179 "modes.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 179 "modes.m"
      *check_hlds__modes__HeadVar__2_2 = base;
#line 179 "modes.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__ModuleInfo_4));
#line 179 "modes.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__SafeToContinue_5));
#line 179 "modes.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modes__Specs_6));
#line 179 "modes.m"
    }
#line 188 "modes.m"
    {
#line 188 "modes.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_7, (MR_Integer) 54, &check_hlds__modes__Statistics_10);
    }
#line 189 "modes.m"
    {
#line 189 "modes.m"
      libs__file_util__maybe_report_stats_3_p_0(check_hlds__modes__Statistics_10);
#line 189 "modes.m"
      return;
    }
#line 179 "modes.m"
  }
#line 95 "modes.m"
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
	MR_register_type_ctor_info(&check_hlds__modes__check_hlds__modes__type_ctor_info_modes_safe_to_continue_0);
}

void mercury__check_hlds__modes__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.modes. */
