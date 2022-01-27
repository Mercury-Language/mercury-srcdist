/*
** Automatically generated from `modes.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "enum.mih"
#include "getopt_io.mih"
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
#include "hlds.vartypes.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



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


#line 186 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 189 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 192 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 195 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 198 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 201 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 204 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 207 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 210 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 213 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 216 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 219 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_0[1];

#line 222 "check_hlds.modes.c"
static const MR_DuFunctorDesc check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0;

#line 225 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0;

#line 228 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_1[3];

#line 231 "check_hlds.modes.c"
static const MR_DuFunctorDesc check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1;

#line 234 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_0[1];

#line 237 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_1[1];

#line 240 "check_hlds.modes.c"
static const MR_DuPtagLayout check_hlds__modes__check_hlds__modes__du_ptag_ordered_clause_form_0[2];

#line 243 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_name_ordered_clause_form_0[2];

#line 246 "check_hlds.modes.c"
static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_clause_form_0[2];

#line 249 "check_hlds.modes.c"
static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_0;

#line 252 "check_hlds.modes.c"
static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_1;

#line 255 "check_hlds.modes.c"
static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_value_ordered_modes_safe_to_continue_0[2];

#line 258 "check_hlds.modes.c"
static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_name_ordered_modes_safe_to_continue_0[2];

#line 261 "check_hlds.modes.c"
static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_modes_safe_to_continue_0[2];

#line 264 "check_hlds.modes.c"
static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0_10001(
#line 267 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 269 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2);

#line 272 "check_hlds.modes.c"
static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0_10001(
#line 275 "check_hlds.modes.c"
  MR_Box * check_hlds__modes__wrapper_arg_1,
#line 277 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 279 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_3);

#line 282 "check_hlds.modes.c"
static MR_bool MR_CALL 
check_hlds__modes____Unify____modes_safe_to_continue_0_0_10001(
#line 285 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 287 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2);

#line 290 "check_hlds.modes.c"
static void MR_CALL 
check_hlds__modes____Compare____modes_safe_to_continue_0_0_10001(
#line 293 "check_hlds.modes.c"
  MR_Box * check_hlds__modes__wrapper_arg_1,
#line 295 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 297 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_3);

#line 1077 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1077__1_2_p_0(
#line 1077 "modes.m"
  MR_Word check_hlds__modes__DetismSpecs_37,
#line 1077 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_56);

#line 1107 "modes.m"
static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0(
#line 1107 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__1_1,
#line 1107 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1107 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3);

#line 1107 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0(
#line 1107 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1107 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2);

#line 1465 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_nonunique_modes_2_p_0(
#line 1465 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1465 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2);

#line 1447 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_fully_in_out_modes_2_p_0(
#line 1447 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1447 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2);

#line 1408 "modes.m"
static void MR_CALL 
check_hlds__modes__proc_check_eval_methods_5_p_0(
#line 1408 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1408 "modes.m"
  MR_Word check_hlds__modes__PredId_2,
#line 1408 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3,
#line 1408 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_4,
#line 1408 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_5);

#line 1397 "modes.m"
static void MR_CALL 
check_hlds__modes__pred_check_eval_methods_4_p_0(
#line 1397 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1397 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1397 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_3,
#line 1397 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_4);

#line 1306 "modes.m"
static void MR_CALL 
check_hlds__modes__check_final_insts_13_p_0(
#line 1306 "modes.m"
  MR_Word check_hlds__modes__Vars_14,
#line 1306 "modes.m"
  MR_Word check_hlds__modes__Insts_15,
#line 1306 "modes.m"
  MR_Word check_hlds__modes__VarInsts_16,
#line 1306 "modes.m"
  MR_Word check_hlds__modes__InferModes_17,
#line 1306 "modes.m"
  MR_Word check_hlds__modes__GroundMatchesBound_18,
#line 1306 "modes.m"
  MR_Integer check_hlds__modes__ArgNum_19,
#line 1306 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_20,
#line 1306 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Goal_0_35,
#line 1306 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Goal_36,
#line 1306 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_37,
#line 1306 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_38,
#line 1306 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39,
#line 1306 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_40);

#line 1288 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_clobber_insts_3_p_0(
#line 1288 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1288 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1288 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__3_3);

#line 1225 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_final_insts_8_p_0(
#line 1225 "modes.m"
  MR_Word check_hlds__modes__HeadVars_9,
#line 1225 "modes.m"
  MR_Word check_hlds__modes__InferModes_10,
#line 1225 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14,
#line 1225 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_FinalInsts_15,
#line 1225 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Body_0_16,
#line 1225 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Body_17,
#line 1225 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
#line 1225 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19);

#line 1180 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_switch_9_p_0(
#line 1180 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1180 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1180 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1180 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1180 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1180 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1180 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1180 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1180 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28);

#line 1160 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_disj_11_p_0(
#line 1160 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_12,
#line 1160 "modes.m"
  MR_Word check_hlds__modes__HeadVars_13,
#line 1160 "modes.m"
  MR_Word check_hlds__modes__InstMap0_14,
#line 1160 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_15,
#line 1160 "modes.m"
  MR_Word check_hlds__modes__DisjDetism_16,
#line 1160 "modes.m"
  MR_Word check_hlds__modes__DisjNonLocals_17,
#line 1160 "modes.m"
  MR_Word check_hlds__modes__NondetLiveVars0_18,
#line 1160 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_19,
#line 1160 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_20,
#line 1160 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_24,
#line 1160 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_25);

#line 1126 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_switch_9_p_0(
#line 1126 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1126 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1126 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1126 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1126 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1126 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1126 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1126 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1126 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28);

#line 1111 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_disj_8_p_0(
#line 1111 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_9,
#line 1111 "modes.m"
  MR_Word check_hlds__modes__HeadVars_10,
#line 1111 "modes.m"
  MR_Word check_hlds__modes__InstMap0_11,
#line 1111 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_12,
#line 1111 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_13,
#line 1111 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_14,
#line 1111 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
#line 1111 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19);

#line 1077 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0_1(
#line 1077 "modes.m"
  MR_Box check_hlds__modes__closure_arg);

#line 960 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0(
#line 960 "modes.m"
  MR_Word check_hlds__modes__HowToCheckGoal_8,
#line 960 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26,
#line 960 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_OldPredTable_27,
#line 960 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28,
#line 960 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_29,
#line 960 "modes.m"
  MR_Word * check_hlds__modes__Changed_11,
#line 960 "modes.m"
  MR_Word * check_hlds__modes__Specs_12);

#line 911 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_5(
#line 911 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 911 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 911 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 911 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 911 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4);

#line 903 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_4(
#line 903 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 903 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 903 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 903 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 903 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4);

#line 877 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_3(
#line 877 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 877 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 877 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 877 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 877 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4);

#line 870 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_2(
#line 870 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 870 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 870 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 870 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 870 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4);

#line 851 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_1(
#line 851 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 851 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1);

#line 823 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0(
#line 823 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_16,
#line 823 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_17,
#line 823 "modes.m"
  MR_Word check_hlds__modes__InferModes_18,
#line 823 "modes.m"
  MR_Word check_hlds__modes__Markers_19,
#line 823 "modes.m"
  MR_Word check_hlds__modes__IsUnifyPred_20,
#line 823 "modes.m"
  MR_Word check_hlds__modes__PredId_21,
#line 823 "modes.m"
  MR_Integer check_hlds__modes__ProcId_22,
#line 823 "modes.m"
  MR_Word check_hlds__modes__Body0_23,
#line 823 "modes.m"
  MR_Word * check_hlds__modes__Body_24,
#line 823 "modes.m"
  MR_Word check_hlds__modes__HeadVars_25,
#line 823 "modes.m"
  MR_Word check_hlds__modes__InstMap0_26,
#line 823 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_27,
#line 823 "modes.m"
  MR_Word * check_hlds__modes__ArgFinalInsts_28,
#line 823 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66,
#line 823 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_67);

#line 747 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_2(
#line 747 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 747 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1);

#line 727 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_1(
#line 727 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 727 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1);

#line 625 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0(
#line 625 "modes.m"
  MR_Integer check_hlds__modes__ProcId_10,
#line 625 "modes.m"
  MR_Word check_hlds__modes__PredId_11,
#line 625 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_12,
#line 625 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_13,
#line 625 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27,
#line 625 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_28,
#line 625 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_29,
#line 625 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_30,
#line 625 "modes.m"
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

#line 312 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0(
#line 312 "modes.m"
  MR_Word check_hlds__modes__PredIds_9,
#line 312 "modes.m"
  MR_Integer check_hlds__modes__MaxIterations_10,
#line 312 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_11,
#line 312 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_12,
#line 312 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31,
#line 312 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_32,
#line 312 "modes.m"
  MR_Word * check_hlds__modes__SafeToContinue_14,
#line 312 "modes.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1312 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1320 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1329 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 1338 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1346 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1355 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1363 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1371 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1379 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1387 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1395 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1403 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1408 "check_hlds.modes.c"
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

#line 1423 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0
  }
};

#line 1431 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_1[3] = {
  (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_can_fail_0,
  (MR_PseudoTypeInfo) &check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0
};

#line 1438 "check_hlds.modes.c"
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

#line 1453 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_0[1] = {
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0
};

#line 1458 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_1[1] = {
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1
};

#line 1463 "check_hlds.modes.c"
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

#line 1477 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_name_ordered_clause_form_0[2] = {
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0,
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1
};

#line 1483 "check_hlds.modes.c"
static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_clause_form_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1489 "check_hlds.modes.c"
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

#line 1506 "check_hlds.modes.c"
static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_0 = {
  (MR_String) "modes_safe_to_continue",
  (MR_Integer) 0
};

#line 1512 "check_hlds.modes.c"
static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_1 = {
  (MR_String) "modes_unsafe_to_continue",
  (MR_Integer) 1
};

#line 1518 "check_hlds.modes.c"
static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_value_ordered_modes_safe_to_continue_0[2] = {
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_0,
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_1
};

#line 1524 "check_hlds.modes.c"
static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_name_ordered_modes_safe_to_continue_0[2] = {
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_0,
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_1
};

#line 1530 "check_hlds.modes.c"
static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_modes_safe_to_continue_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1536 "check_hlds.modes.c"
const MR_TypeCtorInfo_Struct check_hlds__modes__check_hlds__modes__type_ctor_info_modes_safe_to_continue_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__modes____Unify____modes_safe_to_continue_0_0_10001)),
  ((MR_Box) (check_hlds__modes____Compare____modes_safe_to_continue_0_0_10001)),
  (MR_String) "check_hlds.modes",
  (MR_String) "modes_safe_to_continue",
  {     check_hlds__modes__check_hlds__modes__enum_name_ordered_modes_safe_to_continue_0 },
  {     check_hlds__modes__check_hlds__modes__enum_value_ordered_modes_safe_to_continue_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__modes__check_hlds__modes__functor_number_map_modes_safe_to_continue_0
};

#line 1553 "check_hlds.modes.c"
static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0_10001(
#line 1556 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 1558 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2)
#line 1560 "check_hlds.modes.c"
{
#line 1562 "check_hlds.modes.c"
  {
#line 1564 "check_hlds.modes.c"
    MR_bool check_hlds__modes__succeeded;

#line 1567 "check_hlds.modes.c"
    {
#line 1569 "check_hlds.modes.c"
      check_hlds__modes__succeeded = check_hlds__modes____Unify____clause_form_0_0(((MR_Word) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2));
    }
#line 1572 "check_hlds.modes.c"
    return check_hlds__modes__succeeded;
#line 1574 "check_hlds.modes.c"
  }
#line 1576 "check_hlds.modes.c"
}

#line 1579 "check_hlds.modes.c"
static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0_10001(
#line 1582 "check_hlds.modes.c"
  MR_Box * check_hlds__modes__wrapper_arg_1,
#line 1584 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 1586 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_3)
#line 1588 "check_hlds.modes.c"
{
#line 1590 "check_hlds.modes.c"
  {
#line 1592 "check_hlds.modes.c"
    MR_Word check_hlds__modes__conv0_HeadVar__1_1;

#line 1595 "check_hlds.modes.c"
    {
#line 1597 "check_hlds.modes.c"
      check_hlds__modes____Compare____clause_form_0_0(&check_hlds__modes__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modes__wrapper_arg_2), ((MR_Word) check_hlds__modes__wrapper_arg_3));
    }
#line 1600 "check_hlds.modes.c"
    *check_hlds__modes__wrapper_arg_1 = ((MR_Box) (check_hlds__modes__conv0_HeadVar__1_1));
#line 1602 "check_hlds.modes.c"
  }
#line 1604 "check_hlds.modes.c"
}

#line 1607 "check_hlds.modes.c"
static MR_bool MR_CALL 
check_hlds__modes____Unify____modes_safe_to_continue_0_0_10001(
#line 1610 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 1612 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2)
#line 1614 "check_hlds.modes.c"
{
#line 1616 "check_hlds.modes.c"
  {
#line 1618 "check_hlds.modes.c"
    MR_bool check_hlds__modes__succeeded;

#line 1621 "check_hlds.modes.c"
    {
#line 1623 "check_hlds.modes.c"
      check_hlds__modes__succeeded = check_hlds__modes____Unify____modes_safe_to_continue_0_0(((MR_Word) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2));
    }
#line 1626 "check_hlds.modes.c"
    return check_hlds__modes__succeeded;
#line 1628 "check_hlds.modes.c"
  }
#line 1630 "check_hlds.modes.c"
}

#line 1633 "check_hlds.modes.c"
static void MR_CALL 
check_hlds__modes____Compare____modes_safe_to_continue_0_0_10001(
#line 1636 "check_hlds.modes.c"
  MR_Box * check_hlds__modes__wrapper_arg_1,
#line 1638 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 1640 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_3)
#line 1642 "check_hlds.modes.c"
{
#line 1644 "check_hlds.modes.c"
  {
#line 1646 "check_hlds.modes.c"
    MR_Word check_hlds__modes__conv0_HeadVar__1_1;

#line 1649 "check_hlds.modes.c"
    {
#line 1651 "check_hlds.modes.c"
      check_hlds__modes____Compare____modes_safe_to_continue_0_0(&check_hlds__modes__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modes__wrapper_arg_2), ((MR_Word) check_hlds__modes__wrapper_arg_3));
    }
#line 1654 "check_hlds.modes.c"
    *check_hlds__modes__wrapper_arg_1 = ((MR_Box) (check_hlds__modes__conv0_HeadVar__1_1));
#line 1656 "check_hlds.modes.c"
  }
#line 1658 "check_hlds.modes.c"
}

#line 1077 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1077__1_2_p_0(
#line 1077 "modes.m"
  MR_Word check_hlds__modes__DetismSpecs_37,
#line 1077 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_56)
#line 1077 "modes.m"
{
#line 1077 "modes.m"
  {
#line 1077 "modes.m"
    MR_bool check_hlds__modes__succeeded;

#line 1077 "modes.m"
    {
#line 1077 "modes.m"
      return check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modes_scalar_common_1[0], ((MR_Box) (check_hlds__modes__DetismSpecs_37)), ((MR_Box) (check_hlds__modes__HeadVar__2_56)));
    }
#line 1077 "modes.m"
    return check_hlds__modes__succeeded;
#line 1077 "modes.m"
  }
#line 1077 "modes.m"
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
#line 1728 "check_hlds.modes.c"
  {
#line 1730 "check_hlds.modes.c"
    MR_bool check_hlds__modes__succeeded = (check_hlds__modes__HeadVar__2_1 == check_hlds__modes__HeadVar__2_2);

#line 1733 "check_hlds.modes.c"
    return check_hlds__modes__succeeded;
#line 1735 "check_hlds.modes.c"
  }
#line 79 "modes.m"
}

#line 1107 "modes.m"
static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0(
#line 1107 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__1_1,
#line 1107 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1107 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3)
#line 1107 "modes.m"
{
#line 1107 "modes.m"
  {
#line 1107 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1107 "modes.m"
    MR_Integer check_hlds__modes__CastX_22 = (MR_Integer) check_hlds__modes__HeadVar__2_2;
#line 1107 "modes.m"
    MR_Integer check_hlds__modes__CastY_23 = (MR_Integer) check_hlds__modes__HeadVar__3_3;

#line 1107 "modes.m"
    check_hlds__modes__succeeded = (check_hlds__modes__CastX_22 == check_hlds__modes__CastY_23);
#line 1107 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1764 "check_hlds.modes.c"
      *check_hlds__modes__HeadVar__1_1 = (MR_Integer) 0;
#line 1107 "modes.m"
    else
#line 1107 "modes.m"
    if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1107 "modes.m"
      {
#line 1107 "modes.m"
        MR_Word check_hlds__modes__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));

#line 1107 "modes.m"
        if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1107 "modes.m"
          {
#line 1107 "modes.m"
            MR_Word check_hlds__modes__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__3_3, (MR_Integer) 0)));

#line 1107 "modes.m"
            {
#line 1107 "modes.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[3], check_hlds__modes__HeadVar__1_1, ((MR_Box) (check_hlds__modes__V_28_28)), ((MR_Box) (check_hlds__modes__V_5_5)));
#line 1107 "modes.m"
              return;
            }
#line 1107 "modes.m"
          }
#line 1107 "modes.m"
        else
#line 1793 "check_hlds.modes.c"
          *check_hlds__modes__HeadVar__1_1 = (MR_Integer) 1;
#line 1107 "modes.m"
      }
#line 1107 "modes.m"
    else
#line 1107 "modes.m"
      {
#line 1107 "modes.m"
        MR_Word check_hlds__modes__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 2)));
#line 1107 "modes.m"
        MR_Word check_hlds__modes__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1107 "modes.m"
        MR_Word check_hlds__modes__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));

#line 1107 "modes.m"
        if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1810 "check_hlds.modes.c"
          *check_hlds__modes__HeadVar__1_1 = (MR_Integer) 2;
#line 1107 "modes.m"
        else
#line 1107 "modes.m"
          {
#line 1107 "modes.m"
            MR_Word check_hlds__modes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 0)));
#line 1107 "modes.m"
            MR_Word check_hlds__modes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 1)));
#line 1107 "modes.m"
            MR_Word check_hlds__modes__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 2)));
#line 1107 "modes.m"
            MR_Word check_hlds__modes__V_20_20;

#line 1107 "modes.m"
            {
#line 1107 "modes.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[1], &check_hlds__modes__V_20_20, ((MR_Box) (check_hlds__modes__V_31_31)), ((MR_Box) (check_hlds__modes__V_17_17)));
            }
#line 1830 "check_hlds.modes.c"
            check_hlds__modes__succeeded = (check_hlds__modes__V_20_20 == (MR_Integer) 0);
#line 1107 "modes.m"
            check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1107 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1107 "modes.m"
              *check_hlds__modes__HeadVar__1_1 = check_hlds__modes__V_20_20;
#line 1107 "modes.m"
            else
#line 1107 "modes.m"
              {
#line 1107 "modes.m"
                MR_Word check_hlds__modes__V_21_21;
#line 1107 "modes.m"
                MR_Integer check_hlds__modes__V_32_32 = (MR_Integer) check_hlds__modes__V_30_30;
#line 1107 "modes.m"
                MR_Integer check_hlds__modes__V_33_33 = (MR_Integer) check_hlds__modes__V_18_18;

#line 1107 "modes.m"
                {
#line 1107 "modes.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__modes__V_21_21, check_hlds__modes__V_32_32, check_hlds__modes__V_33_33);
                }
#line 1854 "check_hlds.modes.c"
                check_hlds__modes__succeeded = (check_hlds__modes__V_21_21 == (MR_Integer) 0);
#line 1107 "modes.m"
                check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1107 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1107 "modes.m"
                  *check_hlds__modes__HeadVar__1_1 = check_hlds__modes__V_21_21;
#line 1107 "modes.m"
                else
#line 1107 "modes.m"
                  {
#line 1107 "modes.m"
                    {
#line 1107 "modes.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[2], check_hlds__modes__HeadVar__1_1, ((MR_Box) (check_hlds__modes__V_29_29)), ((MR_Box) (check_hlds__modes__V_19_19)));
#line 1107 "modes.m"
                      return;
                    }
#line 1107 "modes.m"
                  }
#line 1107 "modes.m"
              }
#line 1107 "modes.m"
          }
#line 1107 "modes.m"
      }
#line 1107 "modes.m"
  }
#line 1107 "modes.m"
}

#line 1107 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0(
#line 1107 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1107 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2)
#line 1107 "modes.m"
{
#line 1107 "modes.m"
  {
#line 1107 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1107 "modes.m"
    MR_Integer check_hlds__modes__CastX_11 = (MR_Integer) check_hlds__modes__HeadVar__1_1;
#line 1107 "modes.m"
    MR_Integer check_hlds__modes__CastY_12 = (MR_Integer) check_hlds__modes__HeadVar__2_2;

#line 1107 "modes.m"
    check_hlds__modes__succeeded = (check_hlds__modes__CastX_11 == check_hlds__modes__CastY_12);
#line 1107 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1107 "modes.m"
      check_hlds__modes__succeeded = MR_TRUE;
#line 1107 "modes.m"
    else
#line 1107 "modes.m"
    if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1107 "modes.m"
      {
#line 1107 "modes.m"
        MR_Word check_hlds__modes__TypeInfo_13_13;
#line 1107 "modes.m"
        MR_Word check_hlds__modes__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1107 "modes.m"
        MR_Word check_hlds__modes__V_4_4;

#line 1107 "modes.m"
        check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1107 "modes.m"
        if (check_hlds__modes__succeeded)
#line 1107 "modes.m"
          {
#line 1107 "modes.m"
            check_hlds__modes__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1931 "check_hlds.modes.c"
            check_hlds__modes__TypeInfo_13_13 = (MR_Word) &check_hlds__modes_scalar_common_1[3];
#line 1933 "check_hlds.modes.c"
            {
#line 1935 "check_hlds.modes.c"
              return check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modes__TypeInfo_13_13, ((MR_Box) (check_hlds__modes__V_3_3)), ((MR_Box) (check_hlds__modes__V_4_4)));
            }
#line 1107 "modes.m"
          }
#line 1107 "modes.m"
      }
#line 1107 "modes.m"
    else
#line 1107 "modes.m"
      {
#line 1107 "modes.m"
        MR_Word check_hlds__modes__TypeInfo_14_14;
#line 1107 "modes.m"
        MR_Word check_hlds__modes__TypeInfo_15_15;
#line 1107 "modes.m"
        MR_Word check_hlds__modes__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1107 "modes.m"
        MR_Word check_hlds__modes__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1107 "modes.m"
        MR_Word check_hlds__modes__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 2)));
#line 1107 "modes.m"
        MR_Word check_hlds__modes__V_8_8;
#line 1107 "modes.m"
        MR_Word check_hlds__modes__V_9_9;
#line 1107 "modes.m"
        MR_Word check_hlds__modes__V_10_10;

#line 1107 "modes.m"
        check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1107 "modes.m"
        if (check_hlds__modes__succeeded)
#line 1107 "modes.m"
          {
#line 1107 "modes.m"
            check_hlds__modes__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1107 "modes.m"
            check_hlds__modes__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1107 "modes.m"
            check_hlds__modes__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 2)));
#line 1975 "check_hlds.modes.c"
            check_hlds__modes__TypeInfo_14_14 = (MR_Word) &check_hlds__modes_scalar_common_1[1];
#line 1977 "check_hlds.modes.c"
            {
#line 1979 "check_hlds.modes.c"
              check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modes__TypeInfo_14_14, ((MR_Box) (check_hlds__modes__V_5_5)), ((MR_Box) (check_hlds__modes__V_8_8)));
            }
#line 1107 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1107 "modes.m"
              {
#line 1986 "check_hlds.modes.c"
                check_hlds__modes__succeeded = (check_hlds__modes__V_6_6 == check_hlds__modes__V_9_9);
#line 1107 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1107 "modes.m"
                  {
#line 1992 "check_hlds.modes.c"
                    check_hlds__modes__TypeInfo_15_15 = (MR_Word) &check_hlds__modes_scalar_common_1[2];
#line 1994 "check_hlds.modes.c"
                    {
#line 1996 "check_hlds.modes.c"
                      return check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modes__TypeInfo_15_15, ((MR_Box) (check_hlds__modes__V_7_7)), ((MR_Box) (check_hlds__modes__V_10_10)));
                    }
#line 1107 "modes.m"
                  }
#line 1107 "modes.m"
              }
#line 1107 "modes.m"
          }
#line 1107 "modes.m"
      }
#line 1107 "modes.m"
    return check_hlds__modes__succeeded;
#line 1107 "modes.m"
  }
#line 1107 "modes.m"
}

#line 1465 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_nonunique_modes_2_p_0(
#line 1465 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1465 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2)
#line 1465 "modes.m"
{
#line 1467 "modes.m"
  while (MR_TRUE)
#line 1467 "modes.m"
    {
#line 1467 "modes.m"
      /* tailcall optimized into a loop */
#line 1467 "modes.m"
      {
#line 1467 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 1467 "modes.m"
        if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1467 "modes.m"
          check_hlds__modes__succeeded = MR_TRUE;
#line 1467 "modes.m"
        else
#line 1468 "modes.m"
          {
#line 1468 "modes.m"
            MR_Word check_hlds__modes__Mode_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1468 "modes.m"
            MR_Word check_hlds__modes__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1468 "modes.m"
            MR_Word check_hlds__modes__InitialInst_7;
#line 1468 "modes.m"
            MR_Word check_hlds__modes__FinalInst_8;

#line 1469 "modes.m"
            {
#line 1469 "modes.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__Mode_4, &check_hlds__modes__InitialInst_7, &check_hlds__modes__FinalInst_8);
            }
#line 1470 "modes.m"
            {
#line 1470 "modes.m"
              check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__InitialInst_7);
            }
#line 1468 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1468 "modes.m"
              {
#line 1471 "modes.m"
                {
#line 1471 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__FinalInst_8);
                }
#line 1468 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1472 "modes.m"
                  {
#line 1472 "modes.m"
                    /* direct tailcall eliminated */
#line 1472 "modes.m"
                    {
#line 1472 "modes.m"
                      MR_Word check_hlds__modes__HeadVar__1__tmp_copy_1 = check_hlds__modes__Rest_5;

#line 1472 "modes.m"
                      check_hlds__modes__HeadVar__1_1 = check_hlds__modes__HeadVar__1__tmp_copy_1;
#line 1472 "modes.m"
                    }
#line 1472 "modes.m"
                    continue;
#line 1472 "modes.m"
                  }
#line 1468 "modes.m"
              }
#line 1468 "modes.m"
          }
#line 1467 "modes.m"
        return check_hlds__modes__succeeded;
#line 1467 "modes.m"
      }
#line 1467 "modes.m"
      break;
#line 1467 "modes.m"
    }
#line 1465 "modes.m"
}

#line 1447 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_fully_in_out_modes_2_p_0(
#line 1447 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1447 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2)
#line 1447 "modes.m"
{
#line 1450 "modes.m"
  while (MR_TRUE)
#line 1450 "modes.m"
    {
#line 1450 "modes.m"
      /* tailcall optimized into a loop */
#line 1450 "modes.m"
      {
#line 1450 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 1450 "modes.m"
        if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1450 "modes.m"
          check_hlds__modes__succeeded = MR_TRUE;
#line 1450 "modes.m"
        else
#line 1451 "modes.m"
          {
#line 1451 "modes.m"
            MR_Word check_hlds__modes__Mode_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1451 "modes.m"
            MR_Word check_hlds__modes__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1451 "modes.m"
            MR_Word check_hlds__modes__InitialInst_7;
#line 1451 "modes.m"
            MR_Word check_hlds__modes__FinalInst_8;

#line 1452 "modes.m"
            {
#line 1452 "modes.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__Mode_4, &check_hlds__modes__InitialInst_7, &check_hlds__modes__FinalInst_8);
            }
#line 1454 "modes.m"
            {
#line 1454 "modes.m"
              check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__InitialInst_7);
            }
#line 1455 "modes.m"
            if (!(check_hlds__modes__succeeded))
#line 1456 "modes.m"
              {
#line 1456 "modes.m"
                {
#line 1456 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__InitialInst_7);
                }
#line 1456 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1456 "modes.m"
                  {
#line 1458 "modes.m"
                    {
#line 1458 "modes.m"
                      check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__FinalInst_8);
                    }
#line 1459 "modes.m"
                    if (!(check_hlds__modes__succeeded))
#line 1460 "modes.m"
                      {
#line 1460 "modes.m"
                        check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__FinalInst_8);
                      }
#line 1456 "modes.m"
                  }
#line 1456 "modes.m"
              }
#line 1451 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1463 "modes.m"
              {
#line 1463 "modes.m"
                /* direct tailcall eliminated */
#line 1463 "modes.m"
                {
#line 1463 "modes.m"
                  MR_Word check_hlds__modes__HeadVar__1__tmp_copy_1 = check_hlds__modes__Rest_5;

#line 1463 "modes.m"
                  check_hlds__modes__HeadVar__1_1 = check_hlds__modes__HeadVar__1__tmp_copy_1;
#line 1463 "modes.m"
                }
#line 1463 "modes.m"
                continue;
#line 1463 "modes.m"
              }
#line 1451 "modes.m"
          }
#line 1450 "modes.m"
        return check_hlds__modes__succeeded;
#line 1450 "modes.m"
      }
#line 1450 "modes.m"
      break;
#line 1450 "modes.m"
    }
#line 1447 "modes.m"
}

#line 1408 "modes.m"
static void MR_CALL 
check_hlds__modes__proc_check_eval_methods_5_p_0(
#line 1408 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1408 "modes.m"
  MR_Word check_hlds__modes__PredId_2,
#line 1408 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3,
#line 1408 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_4,
#line 1408 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_5)
#line 1408 "modes.m"
{
#line 1411 "modes.m"
  while (MR_TRUE)
#line 1411 "modes.m"
    {
#line 1411 "modes.m"
      /* tailcall optimized into a loop */
#line 1411 "modes.m"
      {
#line 1411 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 1411 "modes.m"
        if ((check_hlds__modes__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1411 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Specs_5 = check_hlds__modes__STATE_VARIABLE_Specs_0_4;
#line 1411 "modes.m"
        else
#line 1412 "modes.m"
          {
#line 1412 "modes.m"
            MR_Integer check_hlds__modes__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 0)));
#line 1412 "modes.m"
            MR_Word check_hlds__modes__ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 1)));
#line 1412 "modes.m"
            MR_Word check_hlds__modes__PredInfo_16;
#line 1412 "modes.m"
            MR_Word check_hlds__modes__ProcInfo_17;
#line 1412 "modes.m"
            MR_Word check_hlds__modes__EvalMethod_18;
#line 1412 "modes.m"
            MR_Word check_hlds__modes__Modes_19;
#line 1412 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_26_26;
#line 1412 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_28_28;
#line 1412 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_31_31;
#line 1417 "modes.m"
            MR_Word check_hlds__modes__V_25_25;
#line 1426 "modes.m"
            MR_Word check_hlds__modes__V_27_27;
#line 1435 "modes.m"
            MR_String check_hlds__modes__V_29_29;
#line 1435 "modes.m"
            MR_Integer check_hlds__modes__V_30_30;
#line 1476 "modes.m"
            MR_Word check_hlds__modes__Di_123;
#line 1476 "modes.m"
            MR_Word check_hlds__modes__Uo_124;
#line 1476 "modes.m"
            MR_Word check_hlds__modes__DiInitialInst_125;
#line 1476 "modes.m"
            MR_Word check_hlds__modes__DiFinalInst_126;
#line 1476 "modes.m"
            MR_Word check_hlds__modes__UoInitialInst_127;
#line 1476 "modes.m"
            MR_Word check_hlds__modes__UoFinalInst_128;
#line 1476 "modes.m"
            MR_Word check_hlds__modes__Free_129;
#line 1476 "modes.m"
            MR_Word check_hlds__modes__V_131_131;
#line 1476 "modes.m"
            MR_Word check_hlds__modes__V_132_132;
#line 1476 "modes.m"
            MR_Word check_hlds__modes__V_133_133;
#line 1476 "modes.m"
            MR_Word check_hlds__modes__V_134_134;
#line 1476 "modes.m"
            MR_Word check_hlds__modes__V_135_135;
#line 1476 "modes.m"
            MR_Word check_hlds__modes__V_136_136;
#line 1476 "modes.m"
            MR_Word check_hlds__modes__V_137_137;
#line 1476 "modes.m"
            MR_Word check_hlds__modes__V_138_138;
#line 1476 "modes.m"
            MR_Word check_hlds__modes__V_142_142;
#line 1476 "modes.m"
            MR_Word check_hlds__modes__V_143_143;
#line 1476 "modes.m"
            MR_Word check_hlds__modes__V_144_144;

#line 1413 "modes.m"
            {
#line 1413 "modes.m"
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__PredId_2, check_hlds__modes__ProcId_13, &check_hlds__modes__PredInfo_16, &check_hlds__modes__ProcInfo_17);
            }
#line 1414 "modes.m"
            {
#line 1414 "modes.m"
              hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__EvalMethod_18);
            }
#line 1415 "modes.m"
            {
#line 1415 "modes.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Modes_19);
            }
#line 1417 "modes.m"
            {
#line 1417 "modes.m"
              check_hlds__modes__V_25_25 = hlds__hlds_pred__eval_method_requires_ground_args_1_f_0(check_hlds__modes__EvalMethod_18);
            }
#line 1417 "modes.m"
            check_hlds__modes__succeeded = (check_hlds__modes__V_25_25 == (MR_Integer) 1);
#line 1417 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1417 "modes.m"
              {
#line 1418 "modes.m"
                {
#line 1418 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__modes__only_fully_in_out_modes_2_p_0(check_hlds__modes__Modes_19, check_hlds__modes__ModuleInfo_1);
                }
#line 1418 "modes.m"
                check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1417 "modes.m"
              }
#line 1422 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1420 "modes.m"
              {
#line 1420 "modes.m"
                MR_Word check_hlds__modes__GroundArgsSpec_20;
#line 1420 "modes.m"
                MR_Word check_hlds__modes__EvalMethod_35;
#line 1420 "modes.m"
                MR_Word check_hlds__modes__Context_36;
#line 1420 "modes.m"
                MR_String check_hlds__modes__EvalMethodS_37;
#line 1420 "modes.m"
                MR_Word check_hlds__modes__MainPieces_38;
#line 1420 "modes.m"
                MR_Word check_hlds__modes__Msg_40;
#line 1420 "modes.m"
                MR_Word check_hlds__modes__V_43_43;
#line 1420 "modes.m"
                MR_Word check_hlds__modes__V_44_44;
#line 1420 "modes.m"
                MR_Word check_hlds__modes__V_65_65;
#line 1420 "modes.m"
                MR_Word check_hlds__modes__V_66_66;
#line 1420 "modes.m"
                MR_Word check_hlds__modes__V_74_74;

#line 1496 "modes.m"
                {
#line 1496 "modes.m"
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__EvalMethod_35);
                }
#line 1497 "modes.m"
                {
#line 1497 "modes.m"
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Context_36);
                }
#line 1498 "modes.m"
                {
#line 1498 "modes.m"
                  check_hlds__modes__EvalMethodS_37 = parse_tree__prog_out__eval_method_to_string_1_f_0(check_hlds__modes__EvalMethod_35);
                }
#line 1500 "modes.m"
                {
#line 1500 "modes.m"
                  check_hlds__modes__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1500 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 1500 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_44_44, 1) = ((MR_Box) (check_hlds__modes__EvalMethodS_37));
#line 1500 "modes.m"
                }
#line 1500 "modes.m"
                {
#line 1500 "modes.m"
                  check_hlds__modes__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1500 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_43_43, 0) = ((MR_Box) (check_hlds__modes__V_44_44));
#line 1500 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[10])));
#line 1500 "modes.m"
                }
#line 1499 "modes.m"
                {
#line 1499 "modes.m"
                  check_hlds__modes__MainPieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1499 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[45])));
#line 1499 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_38, 1) = ((MR_Box) (check_hlds__modes__V_43_43));
#line 1499 "modes.m"
                }
#line 1507 "modes.m"
                {
#line 1507 "modes.m"
                  check_hlds__modes__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1507 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_66_66, 0) = ((MR_Box) (check_hlds__modes__MainPieces_38));
#line 1507 "modes.m"
                }
#line 1507 "modes.m"
                {
#line 1507 "modes.m"
                  check_hlds__modes__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1507 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_65_65, 0) = ((MR_Box) (check_hlds__modes__V_66_66));
#line 1507 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[47])));
#line 1507 "modes.m"
                }
#line 1506 "modes.m"
                {
#line 1506 "modes.m"
                  check_hlds__modes__Msg_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1506 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_40, 0) = ((MR_Box) (check_hlds__modes__Context_36));
#line 1506 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_40, 1) = ((MR_Box) (check_hlds__modes__V_65_65));
#line 1506 "modes.m"
                }
#line 1509 "modes.m"
                {
#line 1509 "modes.m"
                  check_hlds__modes__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1509 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_74_74, 0) = ((MR_Box) (check_hlds__modes__Msg_40));
#line 1509 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1509 "modes.m"
                }
#line 1508 "modes.m"
                {
#line 1508 "modes.m"
                  check_hlds__modes__GroundArgsSpec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1508 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__GroundArgsSpec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1508 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__GroundArgsSpec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[1])));
#line 1508 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__GroundArgsSpec_20, 2) = ((MR_Box) (check_hlds__modes__V_74_74));
#line 1508 "modes.m"
                }
#line 1421 "modes.m"
                {
#line 1421 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Specs_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1421 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_26_26, 0) = ((MR_Box) (check_hlds__modes__GroundArgsSpec_20));
#line 1421 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_26_26, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_0_4));
#line 1421 "modes.m"
                }
#line 1420 "modes.m"
              }
#line 1422 "modes.m"
            else
#line 1422 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_26_26 = check_hlds__modes__STATE_VARIABLE_Specs_0_4;
#line 1426 "modes.m"
            {
#line 1426 "modes.m"
              check_hlds__modes__V_27_27 = hlds__hlds_pred__eval_method_destroys_uniqueness_1_f_0(check_hlds__modes__EvalMethod_18);
            }
#line 1426 "modes.m"
            check_hlds__modes__succeeded = (check_hlds__modes__V_27_27 == (MR_Integer) 1);
#line 1426 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1426 "modes.m"
              {
#line 1427 "modes.m"
                {
#line 1427 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__modes__only_nonunique_modes_2_p_0(check_hlds__modes__Modes_19, check_hlds__modes__ModuleInfo_1);
                }
#line 1427 "modes.m"
                check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1426 "modes.m"
              }
#line 1431 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1429 "modes.m"
              {
#line 1429 "modes.m"
                MR_Word check_hlds__modes__UniquenessSpec_21;
#line 1429 "modes.m"
                MR_Word check_hlds__modes__EvalMethod_78;
#line 1429 "modes.m"
                MR_Word check_hlds__modes__Context_79;
#line 1429 "modes.m"
                MR_String check_hlds__modes__EvalMethodS_80;
#line 1429 "modes.m"
                MR_Word check_hlds__modes__MainPieces_81;
#line 1429 "modes.m"
                MR_Word check_hlds__modes__Msg_83;
#line 1429 "modes.m"
                MR_Word check_hlds__modes__V_86_86;
#line 1429 "modes.m"
                MR_Word check_hlds__modes__V_87_87;
#line 1429 "modes.m"
                MR_Word check_hlds__modes__V_111_111;
#line 1429 "modes.m"
                MR_Word check_hlds__modes__V_112_112;
#line 1429 "modes.m"
                MR_Word check_hlds__modes__V_120_120;

#line 1514 "modes.m"
                {
#line 1514 "modes.m"
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__EvalMethod_78);
                }
#line 1515 "modes.m"
                {
#line 1515 "modes.m"
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Context_79);
                }
#line 1516 "modes.m"
                {
#line 1516 "modes.m"
                  check_hlds__modes__EvalMethodS_80 = parse_tree__prog_out__eval_method_to_string_1_f_0(check_hlds__modes__EvalMethod_78);
                }
#line 1518 "modes.m"
                {
#line 1518 "modes.m"
                  check_hlds__modes__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1518 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 1518 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_87_87, 1) = ((MR_Box) (check_hlds__modes__EvalMethodS_80));
#line 1518 "modes.m"
                }
#line 1518 "modes.m"
                {
#line 1518 "modes.m"
                  check_hlds__modes__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1518 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_86_86, 0) = ((MR_Box) (check_hlds__modes__V_87_87));
#line 1518 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[19])));
#line 1518 "modes.m"
                }
#line 1517 "modes.m"
                {
#line 1517 "modes.m"
                  check_hlds__modes__MainPieces_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1517 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[48])));
#line 1517 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_81, 1) = ((MR_Box) (check_hlds__modes__V_86_86));
#line 1517 "modes.m"
                }
#line 1527 "modes.m"
                {
#line 1527 "modes.m"
                  check_hlds__modes__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1527 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_112_112, 0) = ((MR_Box) (check_hlds__modes__MainPieces_81));
#line 1527 "modes.m"
                }
#line 1527 "modes.m"
                {
#line 1527 "modes.m"
                  check_hlds__modes__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1527 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_111_111, 0) = ((MR_Box) (check_hlds__modes__V_112_112));
#line 1527 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[50])));
#line 1527 "modes.m"
                }
#line 1526 "modes.m"
                {
#line 1526 "modes.m"
                  check_hlds__modes__Msg_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1526 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_83, 0) = ((MR_Box) (check_hlds__modes__Context_79));
#line 1526 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_83, 1) = ((MR_Box) (check_hlds__modes__V_111_111));
#line 1526 "modes.m"
                }
#line 1529 "modes.m"
                {
#line 1529 "modes.m"
                  check_hlds__modes__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1529 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_120_120, 0) = ((MR_Box) (check_hlds__modes__Msg_83));
#line 1529 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1529 "modes.m"
                }
#line 1528 "modes.m"
                {
#line 1528 "modes.m"
                  check_hlds__modes__UniquenessSpec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1528 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__UniquenessSpec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1528 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__UniquenessSpec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[1])));
#line 1528 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__UniquenessSpec_21, 2) = ((MR_Box) (check_hlds__modes__V_120_120));
#line 1528 "modes.m"
                }
#line 1430 "modes.m"
                {
#line 1430 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Specs_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1430 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_28_28, 0) = ((MR_Box) (check_hlds__modes__UniquenessSpec_21));
#line 1430 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_28_28, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_26_26));
#line 1430 "modes.m"
                }
#line 1429 "modes.m"
              }
#line 1431 "modes.m"
            else
#line 1431 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_28_28 = check_hlds__modes__STATE_VARIABLE_Specs_26_26;
#line 1435 "modes.m"
            {
#line 1435 "modes.m"
              check_hlds__modes__V_29_29 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__modes__PredInfo_16);
            }
#line 1435 "modes.m"
            check_hlds__modes__succeeded = (strcmp(check_hlds__modes__V_29_29, (MR_String) "main") == 0);
#line 1435 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1435 "modes.m"
              {
#line 1436 "modes.m"
                {
#line 1436 "modes.m"
                  check_hlds__modes__V_30_30 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__modes__PredInfo_16);
                }
#line 1436 "modes.m"
                check_hlds__modes__succeeded = (check_hlds__modes__V_30_30 == (MR_Integer) 2);
#line 1435 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1435 "modes.m"
                  {
#line 1437 "modes.m"
                    {
#line 1437 "modes.m"
                      check_hlds__modes__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(check_hlds__modes__PredInfo_16);
                    }
#line 1435 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1435 "modes.m"
                      {
#line 1476 "modes.m"
                        check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Modes_19)) == (MR_mktag((MR_Integer) 1)));
#line 1476 "modes.m"
                        if (check_hlds__modes__succeeded)
#line 1476 "modes.m"
                          {
#line 1476 "modes.m"
                            check_hlds__modes__Di_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Modes_19, (MR_Integer) 0)));
#line 1476 "modes.m"
                            check_hlds__modes__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Modes_19, (MR_Integer) 1)));
#line 1476 "modes.m"
                            check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__V_131_131)) == (MR_mktag((MR_Integer) 1)));
#line 1476 "modes.m"
                            if (check_hlds__modes__succeeded)
#line 1476 "modes.m"
                              {
#line 1476 "modes.m"
                                check_hlds__modes__Uo_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__V_131_131, (MR_Integer) 0)));
#line 1476 "modes.m"
                                check_hlds__modes__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__V_131_131, (MR_Integer) 1)));
#line 1476 "modes.m"
                                check_hlds__modes__succeeded = (check_hlds__modes__V_132_132 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1476 "modes.m"
                                if (check_hlds__modes__succeeded)
#line 1476 "modes.m"
                                  {
#line 1477 "modes.m"
                                    {
#line 1477 "modes.m"
                                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__Di_123, &check_hlds__modes__DiInitialInst_125, &check_hlds__modes__DiFinalInst_126);
                                    }
#line 1478 "modes.m"
                                    {
#line 1478 "modes.m"
                                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__Uo_124, &check_hlds__modes__UoInitialInst_127, &check_hlds__modes__UoFinalInst_128);
                                    }
#line 1487 "modes.m"
                                    check_hlds__modes__V_134_134 = (MR_Integer) 1;
#line 1487 "modes.m"
                                    check_hlds__modes__V_135_135 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1487 "modes.m"
                                    check_hlds__modes__V_133_133 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[3]);
#line 1487 "modes.m"
                                    {
#line 1487 "modes.m"
                                      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__DiInitialInst_125, &check_hlds__modes__V_142_142);
                                    }
#line 1487 "modes.m"
                                    {
#line 1487 "modes.m"
                                      check_hlds__modes__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modes__V_133_133, check_hlds__modes__V_142_142);
                                    }
#line 1476 "modes.m"
                                    if (check_hlds__modes__succeeded)
#line 1476 "modes.m"
                                      {
#line 1488 "modes.m"
                                        check_hlds__modes__V_137_137 = (MR_Integer) 3;
#line 1488 "modes.m"
                                        check_hlds__modes__V_138_138 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1488 "modes.m"
                                        check_hlds__modes__V_136_136 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[2]);
#line 1488 "modes.m"
                                        {
#line 1488 "modes.m"
                                          check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__DiFinalInst_126, &check_hlds__modes__V_143_143);
                                        }
#line 1488 "modes.m"
                                        {
#line 1488 "modes.m"
                                          check_hlds__modes__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modes__V_136_136, check_hlds__modes__V_143_143);
                                        }
#line 1476 "modes.m"
                                        if (check_hlds__modes__succeeded)
#line 1476 "modes.m"
                                          {
#line 1489 "modes.m"
                                            {
#line 1489 "modes.m"
                                              check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__UoInitialInst_127, &check_hlds__modes__Free_129);
                                            }
#line 1490 "modes.m"
                                            if ((check_hlds__modes__Free_129 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1490 "modes.m"
                                              check_hlds__modes__succeeded = MR_TRUE;
#line 1490 "modes.m"
                                            else
#line 1490 "modes.m"
                                            if (((MR_tag((MR_Word) check_hlds__modes__Free_129)) == (MR_mktag((MR_Integer) 1))))
#line 1490 "modes.m"
                                              check_hlds__modes__succeeded = MR_TRUE;
#line 1490 "modes.m"
                                            else
#line 1490 "modes.m"
                                              check_hlds__modes__succeeded = MR_FALSE;
#line 1476 "modes.m"
                                            if (check_hlds__modes__succeeded)
#line 1476 "modes.m"
                                              {
#line 1491 "modes.m"
                                                {
#line 1491 "modes.m"
                                                  check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__UoFinalInst_128, &check_hlds__modes__V_144_144);
                                                }
#line 1491 "modes.m"
                                                {
#line 1491 "modes.m"
                                                  check_hlds__modes__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modes__V_133_133, check_hlds__modes__V_144_144);
                                                }
#line 1476 "modes.m"
                                              }
#line 1476 "modes.m"
                                          }
#line 1476 "modes.m"
                                      }
#line 1476 "modes.m"
                                  }
#line 1476 "modes.m"
                              }
#line 1476 "modes.m"
                          }
#line 1438 "modes.m"
                        check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1435 "modes.m"
                      }
#line 1435 "modes.m"
                  }
#line 1435 "modes.m"
              }
#line 1442 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1440 "modes.m"
              {
#line 1440 "modes.m"
                MR_Word check_hlds__modes__MainSpec_22;
#line 1440 "modes.m"
                MR_Word check_hlds__modes__Context_150;
#line 1440 "modes.m"
                MR_Word check_hlds__modes__Msg_152;
#line 1440 "modes.m"
                MR_Word check_hlds__modes__V_179_179;

#line 1534 "modes.m"
                {
#line 1534 "modes.m"
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Context_150);
                }
#line 1537 "modes.m"
                {
#line 1537 "modes.m"
                  check_hlds__modes__Msg_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1537 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_152, 0) = ((MR_Box) (check_hlds__modes__Context_150));
#line 1537 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[51])));
#line 1537 "modes.m"
                }
#line 1539 "modes.m"
                {
#line 1539 "modes.m"
                  check_hlds__modes__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1539 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_179_179, 0) = ((MR_Box) (check_hlds__modes__Msg_152));
#line 1539 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_179_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1539 "modes.m"
                }
#line 1538 "modes.m"
                {
#line 1538 "modes.m"
                  check_hlds__modes__MainSpec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1538 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__MainSpec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1538 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__MainSpec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[1])));
#line 1538 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__MainSpec_22, 2) = ((MR_Box) (check_hlds__modes__V_179_179));
#line 1538 "modes.m"
                }
#line 1441 "modes.m"
                {
#line 1441 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Specs_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1441 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_31_31, 0) = ((MR_Box) (check_hlds__modes__MainSpec_22));
#line 1441 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_31_31, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_28_28));
#line 1441 "modes.m"
                }
#line 1440 "modes.m"
              }
#line 1442 "modes.m"
            else
#line 1442 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_31_31 = check_hlds__modes__STATE_VARIABLE_Specs_28_28;
#line 1445 "modes.m"
            /* direct tailcall eliminated */
#line 1445 "modes.m"
            {
#line 1445 "modes.m"
              MR_Word check_hlds__modes__HeadVar__3__tmp_copy_3 = check_hlds__modes__ProcIds_14;
#line 1445 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_4 = check_hlds__modes__STATE_VARIABLE_Specs_31_31;

#line 1445 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_0_4 = check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 1445 "modes.m"
              check_hlds__modes__HeadVar__3_3 = check_hlds__modes__HeadVar__3__tmp_copy_3;
#line 1445 "modes.m"
            }
#line 1445 "modes.m"
            continue;
#line 1412 "modes.m"
          }
#line 1411 "modes.m"
      }
#line 1411 "modes.m"
      break;
#line 1411 "modes.m"
    }
#line 1408 "modes.m"
}

#line 1397 "modes.m"
static void MR_CALL 
check_hlds__modes__pred_check_eval_methods_4_p_0(
#line 1397 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1397 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1397 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_3,
#line 1397 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_4)
#line 1397 "modes.m"
{
#line 1400 "modes.m"
  while (MR_TRUE)
#line 1400 "modes.m"
    {
#line 1400 "modes.m"
      /* tailcall optimized into a loop */
#line 1400 "modes.m"
      {
#line 1400 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 1400 "modes.m"
        if ((check_hlds__modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1400 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Specs_4 = check_hlds__modes__STATE_VARIABLE_Specs_0_3;
#line 1400 "modes.m"
        else
#line 1401 "modes.m"
          {
#line 1401 "modes.m"
            MR_Word check_hlds__modes__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1401 "modes.m"
            MR_Word check_hlds__modes__PredIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1401 "modes.m"
            MR_Word check_hlds__modes__Preds_13;
#line 1401 "modes.m"
            MR_Word check_hlds__modes__PredInfo_14;
#line 1401 "modes.m"
            MR_Word check_hlds__modes__ProcIds_15;
#line 1401 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_18_18;
#line 1403 "modes.m"
            MR_Box check_hlds__modes__conv0_PredInfo_14;

#line 1402 "modes.m"
            {
#line 1402 "modes.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__ModuleInfo_1, &check_hlds__modes__Preds_13);
            }
#line 1403 "modes.m"
            {
#line 1403 "modes.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__modes__Preds_13, ((MR_Box) (check_hlds__modes__PredId_10)), &check_hlds__modes__conv0_PredInfo_14);
            }
#line 1403 "modes.m"
            check_hlds__modes__PredInfo_14 = ((MR_Word) check_hlds__modes__conv0_PredInfo_14);
#line 1404 "modes.m"
            {
#line 1404 "modes.m"
              check_hlds__modes__ProcIds_15 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__modes__PredInfo_14);
            }
#line 1405 "modes.m"
            {
#line 1405 "modes.m"
              check_hlds__modes__proc_check_eval_methods_5_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__PredId_10, check_hlds__modes__ProcIds_15, check_hlds__modes__STATE_VARIABLE_Specs_0_3, &check_hlds__modes__STATE_VARIABLE_Specs_18_18);
            }
#line 1406 "modes.m"
            /* direct tailcall eliminated */
#line 1406 "modes.m"
            {
#line 1406 "modes.m"
              MR_Word check_hlds__modes__HeadVar__2__tmp_copy_2 = check_hlds__modes__PredIds_11;
#line 1406 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_3 = check_hlds__modes__STATE_VARIABLE_Specs_18_18;

#line 1406 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_0_3 = check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_3;
#line 1406 "modes.m"
              check_hlds__modes__HeadVar__2_2 = check_hlds__modes__HeadVar__2__tmp_copy_2;
#line 1406 "modes.m"
            }
#line 1406 "modes.m"
            continue;
#line 1401 "modes.m"
          }
#line 1400 "modes.m"
      }
#line 1400 "modes.m"
      break;
#line 1400 "modes.m"
    }
#line 1397 "modes.m"
}

#line 1306 "modes.m"
static void MR_CALL 
check_hlds__modes__check_final_insts_13_p_0(
#line 1306 "modes.m"
  MR_Word check_hlds__modes__Vars_14,
#line 1306 "modes.m"
  MR_Word check_hlds__modes__Insts_15,
#line 1306 "modes.m"
  MR_Word check_hlds__modes__VarInsts_16,
#line 1306 "modes.m"
  MR_Word check_hlds__modes__InferModes_17,
#line 1306 "modes.m"
  MR_Word check_hlds__modes__GroundMatchesBound_18,
#line 1306 "modes.m"
  MR_Integer check_hlds__modes__ArgNum_19,
#line 1306 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_20,
#line 1306 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Goal_0_35,
#line 1306 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Goal_36,
#line 1306 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_37,
#line 1306 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_38,
#line 1306 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39,
#line 1306 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_40)
#line 1306 "modes.m"
{
#line 1319 "modes.m"
  while (MR_TRUE)
#line 1319 "modes.m"
    {
#line 1319 "modes.m"
      /* tailcall optimized into a loop */
#line 1319 "modes.m"
      {
#line 1319 "modes.m"
        MR_bool check_hlds__modes__succeeded = (check_hlds__modes__Vars_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 1314 "modes.m"
        if (check_hlds__modes__succeeded)
#line 1314 "modes.m"
          {
#line 1315 "modes.m"
            check_hlds__modes__succeeded = (check_hlds__modes__Insts_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1314 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1316 "modes.m"
              check_hlds__modes__succeeded = (check_hlds__modes__VarInsts_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1314 "modes.m"
          }
#line 1319 "modes.m"
        if (check_hlds__modes__succeeded)
#line 1318 "modes.m"
          {
#line 1318 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_ModeInfo_40 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39;
#line 1318 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Changed_38 = check_hlds__modes__STATE_VARIABLE_Changed_0_37;
#line 1318 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Goal_36 = check_hlds__modes__STATE_VARIABLE_Goal_0_35;
#line 1318 "modes.m"
          }
#line 1319 "modes.m"
        else
#line 1380 "modes.m"
          {
#line 1380 "modes.m"
            MR_Word check_hlds__modes__Var_24;
#line 1380 "modes.m"
            MR_Word check_hlds__modes__VarsTail_25;
#line 1380 "modes.m"
            MR_Word check_hlds__modes__Inst_26;
#line 1380 "modes.m"
            MR_Word check_hlds__modes__InstsTail_27;
#line 1380 "modes.m"
            MR_Word check_hlds__modes__VarInst_28;
#line 1380 "modes.m"
            MR_Word check_hlds__modes__VarInstsTail_29;

#line 1320 "modes.m"
            check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Vars_14)) == (MR_mktag((MR_Integer) 1)));
#line 1320 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1320 "modes.m"
              {
#line 1320 "modes.m"
                check_hlds__modes__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Vars_14, (MR_Integer) 0)));
#line 1320 "modes.m"
                check_hlds__modes__VarsTail_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Vars_14, (MR_Integer) 1)));
#line 1321 "modes.m"
                check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Insts_15)) == (MR_mktag((MR_Integer) 1)));
#line 1321 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1321 "modes.m"
                  {
#line 1321 "modes.m"
                    check_hlds__modes__Inst_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Insts_15, (MR_Integer) 0)));
#line 1321 "modes.m"
                    check_hlds__modes__InstsTail_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Insts_15, (MR_Integer) 1)));
#line 1322 "modes.m"
                    check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__VarInsts_16)) == (MR_mktag((MR_Integer) 1)));
#line 1322 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1322 "modes.m"
                      {
#line 1322 "modes.m"
                        check_hlds__modes__VarInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__VarInsts_16, (MR_Integer) 0)));
#line 1322 "modes.m"
                        check_hlds__modes__VarInstsTail_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__VarInsts_16, (MR_Integer) 1)));
#line 1322 "modes.m"
                      }
#line 1321 "modes.m"
                  }
#line 1320 "modes.m"
              }
#line 1380 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1324 "modes.m"
              {
#line 1324 "modes.m"
                MR_Word check_hlds__modes__VarTypes_30;
#line 1324 "modes.m"
                MR_Word check_hlds__modes__Type_31;
#line 1324 "modes.m"
                MR_Word check_hlds__modes__STATE_VARIABLE_Changed_41_41;
#line 1324 "modes.m"
                MR_Word check_hlds__modes__STATE_VARIABLE_Goal_42_42;
#line 1324 "modes.m"
                MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43;
#line 1324 "modes.m"
                MR_Integer check_hlds__modes__V_45_45;

#line 1324 "modes.m"
                {
#line 1324 "modes.m"
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modes__VarTypes_30);
                }
#line 1325 "modes.m"
                {
#line 1325 "modes.m"
                  hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modes__VarTypes_30, check_hlds__modes__Var_24, &check_hlds__modes__Type_31);
                }
#line 1327 "modes.m"
                {
#line 1327 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__inst_match__inst_matches_final_gmb_5_p_0(check_hlds__modes__VarInst_28, check_hlds__modes__Inst_26, check_hlds__modes__Type_31, check_hlds__modes__ModuleInfo_20, check_hlds__modes__GroundMatchesBound_18);
                }
#line 1331 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1330 "modes.m"
                  {
#line 1330 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39;
#line 1330 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_Changed_41_41 = check_hlds__modes__STATE_VARIABLE_Changed_0_37;
#line 1330 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_Goal_42_42 = check_hlds__modes__STATE_VARIABLE_Goal_0_35;
#line 1330 "modes.m"
                  }
#line 1331 "modes.m"
                else
#line 1332 "modes.m"
                  {
#line 1332 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_Changed_41_41 = (MR_Integer) 1;
#line 1345 "modes.m"
                    {
#line 1345 "modes.m"
                      check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modes__ModuleInfo_20, check_hlds__modes__VarInst_28);
                    }
#line 1345 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1345 "modes.m"
                      {
#line 1346 "modes.m"
                        {
#line 1346 "modes.m"
                          check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_any_2_p_0(check_hlds__modes__ModuleInfo_20, check_hlds__modes__Inst_26);
                        }
#line 1345 "modes.m"
                        if (check_hlds__modes__succeeded)
#line 1345 "modes.m"
                          {
#line 1347 "modes.m"
                            {
#line 1347 "modes.m"
                              check_hlds__modes__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(check_hlds__modes__ModuleInfo_20, check_hlds__modes__Type_31);
                            }
#line 1345 "modes.m"
                            if (check_hlds__modes__succeeded)
#line 1348 "modes.m"
                              {
#line 1348 "modes.m"
                                check_hlds__modes__succeeded = check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39);
                              }
#line 1345 "modes.m"
                          }
#line 1345 "modes.m"
                      }
#line 1352 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1350 "modes.m"
                      {
#line 1350 "modes.m"
                        check_hlds__modecheck_util__prepend_initialisation_call_7_p_0(check_hlds__modes__Var_24, check_hlds__modes__Type_31, check_hlds__modes__VarInst_28, check_hlds__modes__STATE_VARIABLE_Goal_0_35, &check_hlds__modes__STATE_VARIABLE_Goal_42_42, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43);
                      }
#line 1352 "modes.m"
                    else
#line 1358 "modes.m"
                      {
#line 1358 "modes.m"
#line 1358 "modes.m"
                        switch (check_hlds__modes__InferModes_17) {
#line 1358 "modes.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 1358 "modes.m"
                          case (MR_Integer) 0:
#line 1359 "modes.m"
                            {
#line 1359 "modes.m"
                              MR_Word check_hlds__modes__Reason_32;
#line 1359 "modes.m"
                              MR_Word check_hlds__modes__WaitingVars_33;
#line 1359 "modes.m"
                              MR_Word check_hlds__modes__ModeError_34;

#line 1362 "modes.m"
                              {
#line 1362 "modes.m"
                                check_hlds__modes__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modes__VarInst_28, check_hlds__modes__Inst_26, check_hlds__modes__Type_31, check_hlds__modes__ModuleInfo_20);
                              }
#line 1364 "modes.m"
                              if (check_hlds__modes__succeeded)
#line 1363 "modes.m"
                                check_hlds__modes__Reason_32 = (MR_Integer) 0;
#line 1364 "modes.m"
                              else
#line 1366 "modes.m"
                                {
#line 1364 "modes.m"
                                  {
#line 1364 "modes.m"
                                    check_hlds__modes__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modes__Inst_26, check_hlds__modes__VarInst_28, check_hlds__modes__Type_31, check_hlds__modes__ModuleInfo_20);
                                  }
#line 1366 "modes.m"
                                  if (check_hlds__modes__succeeded)
#line 1365 "modes.m"
                                    check_hlds__modes__Reason_32 = (MR_Integer) 1;
#line 1366 "modes.m"
                                  else
#line 1368 "modes.m"
                                    check_hlds__modes__Reason_32 = (MR_Integer) 2;
#line 1366 "modes.m"
                                }
#line 1370 "modes.m"
                              {
#line 1370 "modes.m"
                                parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modes__WaitingVars_33);
                              }
#line 1371 "modes.m"
                              {
#line 1371 "modes.m"
                                check_hlds__modes__ModeError_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1371 "modes.m"
                                MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 1371 "modes.m"
                                MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 1) = ((MR_Box) (check_hlds__modes__ArgNum_19));
#line 1371 "modes.m"
                                MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 2) = ((MR_Box) (check_hlds__modes__Var_24));
#line 1371 "modes.m"
                                MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 3) = ((MR_Box) (check_hlds__modes__VarInst_28));
#line 1371 "modes.m"
                                MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 4) = ((MR_Box) (check_hlds__modes__Inst_26));
#line 1371 "modes.m"
                                MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 5) = ((MR_Box) (check_hlds__modes__Reason_32));
#line 1371 "modes.m"
                              }
#line 1373 "modes.m"
                              {
#line 1373 "modes.m"
                                check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modes__WaitingVars_33, check_hlds__modes__ModeError_34, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43);
                              }
#line 1359 "modes.m"
                            }
#line 1358 "modes.m"
                            break;
#line 1358 "modes.m"
                          case (MR_Integer) 1:
#line 1357 "modes.m"
                            check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39;
#line 1358 "modes.m"
                            break;
#line 1358 "modes.m"
                        }
#line 1358 "modes.m"
                        check_hlds__modes__STATE_VARIABLE_Goal_42_42 = check_hlds__modes__STATE_VARIABLE_Goal_0_35;
#line 1358 "modes.m"
                      }
#line 1332 "modes.m"
                  }
#line 1378 "modes.m"
                check_hlds__modes__V_45_45 = (check_hlds__modes__ArgNum_19 + (MR_Integer) 1);
#line 1377 "modes.m"
                /* direct tailcall eliminated */
#line 1377 "modes.m"
                {
#line 1377 "modes.m"
                  MR_Word check_hlds__modes__Vars__tmp_copy_14 = check_hlds__modes__VarsTail_25;
#line 1377 "modes.m"
                  MR_Word check_hlds__modes__Insts__tmp_copy_15 = check_hlds__modes__InstsTail_27;
#line 1377 "modes.m"
                  MR_Word check_hlds__modes__VarInsts__tmp_copy_16 = check_hlds__modes__VarInstsTail_29;
#line 1377 "modes.m"
                  MR_Integer check_hlds__modes__ArgNum__tmp_copy_19 = check_hlds__modes__V_45_45;
#line 1377 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_Goal_0__tmp_copy_35 = check_hlds__modes__STATE_VARIABLE_Goal_42_42;
#line 1377 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_37 = check_hlds__modes__STATE_VARIABLE_Changed_41_41;
#line 1377 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0__tmp_copy_39 = check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43;

#line 1377 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0__tmp_copy_39;
#line 1377 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Changed_0_37 = check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_37;
#line 1377 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Goal_0_35 = check_hlds__modes__STATE_VARIABLE_Goal_0__tmp_copy_35;
#line 1377 "modes.m"
                  check_hlds__modes__ArgNum_19 = check_hlds__modes__ArgNum__tmp_copy_19;
#line 1377 "modes.m"
                  check_hlds__modes__VarInsts_16 = check_hlds__modes__VarInsts__tmp_copy_16;
#line 1377 "modes.m"
                  check_hlds__modes__Insts_15 = check_hlds__modes__Insts__tmp_copy_15;
#line 1377 "modes.m"
                  check_hlds__modes__Vars_14 = check_hlds__modes__Vars__tmp_copy_14;
#line 1377 "modes.m"
                }
#line 1377 "modes.m"
                continue;
#line 1324 "modes.m"
              }
#line 1380 "modes.m"
            else
#line 1381 "modes.m"
              {
#line 1381 "modes.m"
                {
#line 1381 "modes.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.check_final_insts\'/13", (MR_String) "length mismatch");
#line 1381 "modes.m"
                  return;
                }
#line 1381 "modes.m"
              }
#line 1380 "modes.m"
          }
#line 1319 "modes.m"
      }
#line 1319 "modes.m"
      break;
#line 1319 "modes.m"
    }
#line 1306 "modes.m"
}

#line 1288 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_clobber_insts_3_p_0(
#line 1288 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1288 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1288 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__3_3)
#line 1288 "modes.m"
{
#line 1291 "modes.m"
  {
#line 1291 "modes.m"
    MR_bool check_hlds__modes__succeeded;

#line 1291 "modes.m"
    if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1291 "modes.m"
      if ((check_hlds__modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1295 "modes.m"
        *check_hlds__modes__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1291 "modes.m"
      else
#line 1291 "modes.m"
        {
#line 1292 "modes.m"
          {
#line 1292 "modes.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.maybe_clobber_insts\'/3", (MR_String) "length mismatch");
#line 1292 "modes.m"
            return;
          }
#line 1291 "modes.m"
        }
#line 1291 "modes.m"
    else
#line 1291 "modes.m"
      {
#line 1291 "modes.m"
        MR_Word check_hlds__modes__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1291 "modes.m"
        MR_Word check_hlds__modes__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));

#line 1291 "modes.m"
        if ((check_hlds__modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1293 "modes.m"
          {
#line 1294 "modes.m"
            {
#line 1294 "modes.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.maybe_clobber_insts\'/3", (MR_String) "length mismatch");
#line 1294 "modes.m"
              return;
            }
#line 1293 "modes.m"
          }
#line 1291 "modes.m"
        else
#line 1296 "modes.m"
          {
#line 1296 "modes.m"
            MR_Word check_hlds__modes__IsLive_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1296 "modes.m"
            MR_Word check_hlds__modes__IsLives_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1296 "modes.m"
            MR_Word check_hlds__modes__Inst_20;
#line 1296 "modes.m"
            MR_Word check_hlds__modes__Insts_21;

#line 1300 "modes.m"
#line 1300 "modes.m"
            switch (check_hlds__modes__IsLive_18) {
#line 1300 "modes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1300 "modes.m"
              case (MR_Integer) 1:
#line 1298 "modes.m"
                {
#line 1299 "modes.m"
                  check_hlds__modes__Inst_20 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[2]);
#line 1298 "modes.m"
                }
#line 1300 "modes.m"
                break;
#line 1300 "modes.m"
              case (MR_Integer) 0:
#line 1301 "modes.m"
                check_hlds__modes__Inst_20 = check_hlds__modes__V_25_25;
#line 1300 "modes.m"
                break;
#line 1300 "modes.m"
            }
#line 1304 "modes.m"
            {
#line 1304 "modes.m"
              check_hlds__modes__maybe_clobber_insts_3_p_0(check_hlds__modes__V_24_24, check_hlds__modes__IsLives_19, &check_hlds__modes__Insts_21);
            }
#line 1296 "modes.m"
            {
#line 1296 "modes.m"
              MR_Word base;
#line 1296 "modes.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1296 "modes.m"
              *check_hlds__modes__HeadVar__3_3 = base;
#line 1296 "modes.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modes__Inst_20));
#line 1296 "modes.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modes__Insts_21));
#line 1296 "modes.m"
            }
#line 1296 "modes.m"
          }
#line 1291 "modes.m"
      }
#line 1291 "modes.m"
  }
#line 1288 "modes.m"
}

#line 1225 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_final_insts_8_p_0(
#line 1225 "modes.m"
  MR_Word check_hlds__modes__HeadVars_9,
#line 1225 "modes.m"
  MR_Word check_hlds__modes__InferModes_10,
#line 1225 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14,
#line 1225 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_FinalInsts_15,
#line 1225 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Body_0_16,
#line 1225 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Body_17,
#line 1225 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
#line 1225 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19)
#line 1225 "modes.m"
{
#line 1229 "modes.m"
  {
#line 1229 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1229 "modes.m"
    MR_Word check_hlds__modes__ModuleInfo_34;
#line 1229 "modes.m"
    MR_Word check_hlds__modes__Errors_35;
#line 1229 "modes.m"
    MR_Word check_hlds__modes__Changed0_38;
#line 1229 "modes.m"
    MR_Word check_hlds__modes__InstMap_39;
#line 1229 "modes.m"
    MR_Word check_hlds__modes__VarTypes_40;
#line 1229 "modes.m"
    MR_Word check_hlds__modes__VarFinalInsts1_41;
#line 1229 "modes.m"
    MR_Word check_hlds__modes__ArgTypes_42;

#line 1239 "modes.m"
    {
#line 1239 "modes.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__ModuleInfo_34);
    }
#line 1240 "modes.m"
    {
#line 1240 "modes.m"
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__Errors_35);
    }
#line 1254 "modes.m"
    if ((check_hlds__modes__Errors_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1255 "modes.m"
      {
#line 1256 "modes.m"
        check_hlds__modes__Changed0_38 = (MR_Integer) 0;
#line 1257 "modes.m"
        {
#line 1257 "modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__InstMap_39);
        }
#line 1255 "modes.m"
      }
#line 1254 "modes.m"
    else
#line 1248 "modes.m"
      {
#line 1252 "modes.m"
        check_hlds__modes__Changed0_38 = (MR_Integer) 1;
#line 1253 "modes.m"
        {
#line 1253 "modes.m"
          hlds__instmap__init_unreachable_1_p_0(&check_hlds__modes__InstMap_39);
        }
#line 1248 "modes.m"
      }
#line 1259 "modes.m"
    {
#line 1259 "modes.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__VarTypes_40);
    }
#line 1260 "modes.m"
    {
#line 1260 "modes.m"
      hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modes__InstMap_39, check_hlds__modes__HeadVars_9, &check_hlds__modes__VarFinalInsts1_41);
    }
#line 1261 "modes.m"
    {
#line 1261 "modes.m"
      hlds__vartypes__lookup_var_types_3_p_0(check_hlds__modes__VarTypes_40, check_hlds__modes__HeadVars_9, &check_hlds__modes__ArgTypes_42);
    }
#line 1280 "modes.m"
#line 1280 "modes.m"
    switch (check_hlds__modes__InferModes_10) {
#line 1280 "modes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1280 "modes.m"
      case (MR_Integer) 0:
#line 1281 "modes.m"
        {
#line 1282 "modes.m"
          MR_Word check_hlds__modes___Changed1_51;

#line 1282 "modes.m"
          {
#line 1282 "modes.m"
            check_hlds__modes__check_final_insts_13_p_0(check_hlds__modes__HeadVars_9, check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14, check_hlds__modes__VarFinalInsts1_41, check_hlds__modes__InferModes_10, (MR_Integer) 0, (MR_Integer) 1, check_hlds__modes__ModuleInfo_34, check_hlds__modes__STATE_VARIABLE_Body_0_16, check_hlds__modes__STATE_VARIABLE_Body_17, (MR_Integer) 0, &check_hlds__modes___Changed1_51, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, check_hlds__modes__STATE_VARIABLE_ModeInfo_19);
          }
#line 1285 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_FinalInsts_15 = check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14;
#line 1281 "modes.m"
        }
#line 1280 "modes.m"
        break;
#line 1280 "modes.m"
      case (MR_Integer) 1:
#line 1263 "modes.m"
        {
#line 1263 "modes.m"
          MR_Word check_hlds__modes__VarFinalInsts2_43;
#line 1263 "modes.m"
          MR_Word check_hlds__modes__PredId_44;
#line 1263 "modes.m"
          MR_Integer check_hlds__modes__ProcId_45;
#line 1263 "modes.m"
          MR_Word check_hlds__modes__ProcInfo_46;
#line 1263 "modes.m"
          MR_Word check_hlds__modes__ArgLives_47;
#line 1263 "modes.m"
          MR_Word check_hlds__modes__Changed1_48;
#line 1263 "modes.m"
          MR_Word check_hlds__modes__Changed2_49;
#line 1263 "modes.m"
          MR_Word check_hlds__modes__Changed_50;
#line 1263 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_43_57;
#line 1263 "modes.m"
          MR_Word check_hlds__modes__V_58_58;
#line 1263 "modes.m"
          MR_Word check_hlds__modes__V_59_59;
#line 1263 "modes.m"
          MR_Word check_hlds__modes__V_60_60;

#line 1264 "modes.m"
          {
#line 1264 "modes.m"
            check_hlds__mode_util__normalise_insts_4_p_0(check_hlds__modes__ModuleInfo_34, check_hlds__modes__ArgTypes_42, check_hlds__modes__VarFinalInsts1_41, &check_hlds__modes__VarFinalInsts2_43);
          }
#line 1269 "modes.m"
          {
#line 1269 "modes.m"
            check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__PredId_44);
          }
#line 1270 "modes.m"
          {
#line 1270 "modes.m"
            check_hlds__mode_info__mode_info_get_proc_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__ProcId_45);
          }
#line 1271 "modes.m"
          {
#line 1271 "modes.m"
            hlds__hlds_module__module_info_proc_info_4_p_0(check_hlds__modes__ModuleInfo_34, check_hlds__modes__PredId_44, check_hlds__modes__ProcId_45, &check_hlds__modes__ProcInfo_46);
          }
#line 1272 "modes.m"
          {
#line 1272 "modes.m"
            hlds__hlds_pred__proc_info_arglives_3_p_0(check_hlds__modes__ProcInfo_46, check_hlds__modes__ModuleInfo_34, &check_hlds__modes__ArgLives_47);
          }
#line 1273 "modes.m"
          {
#line 1273 "modes.m"
            check_hlds__modes__maybe_clobber_insts_3_p_0(check_hlds__modes__VarFinalInsts2_43, check_hlds__modes__ArgLives_47, check_hlds__modes__STATE_VARIABLE_FinalInsts_15);
          }
#line 1274 "modes.m"
          {
#line 1274 "modes.m"
            check_hlds__modes__check_final_insts_13_p_0(check_hlds__modes__HeadVars_9, check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14, *check_hlds__modes__STATE_VARIABLE_FinalInsts_15, check_hlds__modes__InferModes_10, (MR_Integer) 0, (MR_Integer) 1, check_hlds__modes__ModuleInfo_34, check_hlds__modes__STATE_VARIABLE_Body_0_16, check_hlds__modes__STATE_VARIABLE_Body_17, (MR_Integer) 0, &check_hlds__modes__Changed1_48, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__STATE_VARIABLE_ModeInfo_43_57);
          }
#line 1277 "modes.m"
          {
#line 1277 "modes.m"
            check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_43_57, &check_hlds__modes__Changed2_49);
          }
#line 1278 "modes.m"
          {
#line 1278 "modes.m"
            check_hlds__modes__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "modes.m"
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_60_60, 0) = ((MR_Box) (check_hlds__modes__Changed2_49));
#line 1278 "modes.m"
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1278 "modes.m"
          }
#line 1278 "modes.m"
          {
#line 1278 "modes.m"
            check_hlds__modes__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "modes.m"
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_59_59, 0) = ((MR_Box) (check_hlds__modes__Changed1_48));
#line 1278 "modes.m"
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_59_59, 1) = ((MR_Box) (check_hlds__modes__V_60_60));
#line 1278 "modes.m"
          }
#line 1278 "modes.m"
          {
#line 1278 "modes.m"
            check_hlds__modes__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "modes.m"
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_58_58, 0) = ((MR_Box) (check_hlds__modes__Changed0_38));
#line 1278 "modes.m"
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_58_58, 1) = ((MR_Box) (check_hlds__modes__V_59_59));
#line 1278 "modes.m"
          }
#line 1278 "modes.m"
          {
#line 1278 "modes.m"
            mercury__bool__or_list_2_p_0(check_hlds__modes__V_58_58, &check_hlds__modes__Changed_50);
          }
#line 1279 "modes.m"
          {
#line 1279 "modes.m"
            check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(check_hlds__modes__Changed_50, check_hlds__modes__STATE_VARIABLE_ModeInfo_43_57, check_hlds__modes__STATE_VARIABLE_ModeInfo_19);
#line 1279 "modes.m"
            return;
          }
#line 1263 "modes.m"
        }
#line 1280 "modes.m"
        break;
#line 1280 "modes.m"
    }
#line 1229 "modes.m"
  }
#line 1225 "modes.m"
}

#line 1180 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_switch_9_p_0(
#line 1180 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1180 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1180 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1180 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1180 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1180 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1180 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1180 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1180 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28)
#line 1180 "modes.m"
{
#line 1185 "modes.m"
  {
#line 1185 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1185 "modes.m"
    MR_Word check_hlds__modes__MainConsId_18;
#line 1185 "modes.m"
    MR_Word check_hlds__modes__OtherConsIds_19;
#line 1185 "modes.m"
    MR_Word check_hlds__modes__Goal0_20;
#line 1185 "modes.m"
    MR_Word check_hlds__modes__InstMap1_21;
#line 1185 "modes.m"
    MR_Word check_hlds__modes__Goal1_22;
#line 1185 "modes.m"
    MR_Word check_hlds__modes__InstMap_23;
#line 1185 "modes.m"
    MR_Word check_hlds__modes__Goal2_24;
#line 1185 "modes.m"
    MR_Word check_hlds__modes__Goal_26;
#line 1185 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30;
#line 1185 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31;
#line 1185 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1185 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33;
#line 1185 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35;
#line 1208 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_25;

#line 1186 "modes.m"
    {
#line 1186 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27, &check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30);
    }
#line 1187 "modes.m"
    check_hlds__modes__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 0)));
#line 1187 "modes.m"
    check_hlds__modes__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 1)));
#line 1187 "modes.m"
    check_hlds__modes__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 2)));
#line 1188 "modes.m"
    {
#line 1188 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31);
    }
#line 1190 "modes.m"
    {
#line 1190 "modes.m"
      check_hlds__modecheck_util__modecheck_functors_test_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__MainConsId_18, check_hlds__modes__OtherConsIds_19, check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32);
    }
#line 1192 "modes.m"
    {
#line 1192 "modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__InstMap1_21);
    }
#line 1193 "modes.m"
    {
#line 1193 "modes.m"
      check_hlds__modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modes__InstMap1_21);
    }
#line 1195 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1194 "modes.m"
      {
#line 1194 "modes.m"
        check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modes__Goal0_20, &check_hlds__modes__Goal1_22, check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33);
      }
#line 1195 "modes.m"
    else
#line 1199 "modes.m"
      {
#line 1199 "modes.m"
        {
#line 1199 "modes.m"
          check_hlds__modes__Goal1_22 = hlds__make_goal__true_goal_0_f_0();
        }
#line 1199 "modes.m"
        check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33 = check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1199 "modes.m"
      }
#line 1203 "modes.m"
    {
#line 1203 "modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__InstMap_23);
    }
#line 1204 "modes.m"
    {
#line 1204 "modes.m"
      check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__InstMap0_12, check_hlds__modes__InstMap_23, check_hlds__modes__Goal1_22, &check_hlds__modes__Goal2_24);
    }
#line 1205 "modes.m"
    {
#line 1205 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35);
    }
#line 1208 "modes.m"
    {
#line 1208 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_11, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_13, &check_hlds__modes___ArgFinalInsts_25, check_hlds__modes__Goal2_24, &check_hlds__modes__Goal_26, check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35, check_hlds__modes__STATE_VARIABLE_ModeInfo_28);
    }
#line 1210 "modes.m"
    {
#line 1210 "modes.m"
      MR_Word base;
#line 1210 "modes.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1210 "modes.m"
      *check_hlds__modes__Case_16 = base;
#line 1210 "modes.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__MainConsId_18));
#line 1210 "modes.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__OtherConsIds_19));
#line 1210 "modes.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modes__Goal_26));
#line 1210 "modes.m"
    }
#line 1185 "modes.m"
  }
#line 1180 "modes.m"
}

#line 1160 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_disj_11_p_0(
#line 1160 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_12,
#line 1160 "modes.m"
  MR_Word check_hlds__modes__HeadVars_13,
#line 1160 "modes.m"
  MR_Word check_hlds__modes__InstMap0_14,
#line 1160 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_15,
#line 1160 "modes.m"
  MR_Word check_hlds__modes__DisjDetism_16,
#line 1160 "modes.m"
  MR_Word check_hlds__modes__DisjNonLocals_17,
#line 1160 "modes.m"
  MR_Word check_hlds__modes__NondetLiveVars0_18,
#line 1160 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_19,
#line 1160 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_20,
#line 1160 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_24,
#line 1160 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_25)
#line 1160 "modes.m"
{
#line 1167 "modes.m"
  {
#line 1167 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1167 "modes.m"
    MR_Word check_hlds__modes__Disjunct1_22;
#line 1167 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_27_27;
#line 1167 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_28_28;
#line 1167 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_29_29;
#line 1167 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30;
#line 1167 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31;
#line 1167 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33;
#line 1177 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_23;

#line 1168 "modes.m"
    {
#line 1168 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_24, &check_hlds__modes__STATE_VARIABLE_ModeInfo_27_27);
    }
#line 1169 "modes.m"
    {
#line 1169 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_14, check_hlds__modes__STATE_VARIABLE_ModeInfo_27_27, &check_hlds__modes__STATE_VARIABLE_ModeInfo_28_28);
    }
#line 1170 "modes.m"
    {
#line 1170 "modes.m"
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__modes__NondetLiveVars0_18, check_hlds__modes__STATE_VARIABLE_ModeInfo_28_28, &check_hlds__modes__STATE_VARIABLE_ModeInfo_29_29);
    }
#line 1171 "modes.m"
    {
#line 1171 "modes.m"
      check_hlds__unique_modes__prepare_for_disjunct_5_p_0(check_hlds__modes__Disjunct0_19, check_hlds__modes__DisjDetism_16, check_hlds__modes__DisjNonLocals_17, check_hlds__modes__STATE_VARIABLE_ModeInfo_29_29, &check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30);
    }
#line 1173 "modes.m"
    {
#line 1173 "modes.m"
      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modes__Disjunct0_19, &check_hlds__modes__Disjunct1_22, check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31);
    }
#line 1174 "modes.m"
    {
#line 1174 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33);
    }
#line 1177 "modes.m"
    {
#line 1177 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_13, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_15, &check_hlds__modes___ArgFinalInsts_23, check_hlds__modes__Disjunct1_22, check_hlds__modes__Disjunct_20, check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, check_hlds__modes__STATE_VARIABLE_ModeInfo_25);
    }
#line 1167 "modes.m"
  }
#line 1160 "modes.m"
}

#line 1126 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_switch_9_p_0(
#line 1126 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1126 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1126 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1126 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1126 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1126 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1126 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1126 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1126 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28)
#line 1126 "modes.m"
{
#line 1131 "modes.m"
  {
#line 1131 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1131 "modes.m"
    MR_Word check_hlds__modes__MainConsId_18;
#line 1131 "modes.m"
    MR_Word check_hlds__modes__OtherConsIds_19;
#line 1131 "modes.m"
    MR_Word check_hlds__modes__Goal0_20;
#line 1131 "modes.m"
    MR_Word check_hlds__modes__InstMap1_21;
#line 1131 "modes.m"
    MR_Word check_hlds__modes__Goal1_22;
#line 1131 "modes.m"
    MR_Word check_hlds__modes__InstMap_23;
#line 1131 "modes.m"
    MR_Word check_hlds__modes__Goal2_24;
#line 1131 "modes.m"
    MR_Word check_hlds__modes__Goal_26;
#line 1131 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30;
#line 1131 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31;
#line 1131 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1131 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33;
#line 1131 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35;
#line 1156 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_25;

#line 1132 "modes.m"
    {
#line 1132 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27, &check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30);
    }
#line 1133 "modes.m"
    check_hlds__modes__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 0)));
#line 1133 "modes.m"
    check_hlds__modes__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 1)));
#line 1133 "modes.m"
    check_hlds__modes__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 2)));
#line 1134 "modes.m"
    {
#line 1134 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31);
    }
#line 1136 "modes.m"
    {
#line 1136 "modes.m"
      check_hlds__modecheck_util__modecheck_functors_test_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__MainConsId_18, check_hlds__modes__OtherConsIds_19, check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32);
    }
#line 1139 "modes.m"
    {
#line 1139 "modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__InstMap1_21);
    }
#line 1140 "modes.m"
    {
#line 1140 "modes.m"
      check_hlds__modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modes__InstMap1_21);
    }
#line 1143 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1141 "modes.m"
      {
#line 1141 "modes.m"
        {
#line 1141 "modes.m"
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modes__Goal0_20, &check_hlds__modes__Goal1_22, check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33);
        }
#line 1142 "modes.m"
        {
#line 1142 "modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__InstMap_23);
        }
#line 1141 "modes.m"
      }
#line 1143 "modes.m"
    else
#line 1147 "modes.m"
      {
#line 1147 "modes.m"
        {
#line 1147 "modes.m"
          check_hlds__modes__Goal1_22 = hlds__make_goal__true_goal_0_f_0();
        }
#line 1148 "modes.m"
        check_hlds__modes__InstMap_23 = check_hlds__modes__InstMap1_21;
#line 1147 "modes.m"
        check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33 = check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1147 "modes.m"
      }
#line 1152 "modes.m"
    {
#line 1152 "modes.m"
      check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__InstMap0_12, check_hlds__modes__InstMap_23, check_hlds__modes__Goal1_22, &check_hlds__modes__Goal2_24);
    }
#line 1153 "modes.m"
    {
#line 1153 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35);
    }
#line 1156 "modes.m"
    {
#line 1156 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_11, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_13, &check_hlds__modes___ArgFinalInsts_25, check_hlds__modes__Goal2_24, &check_hlds__modes__Goal_26, check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35, check_hlds__modes__STATE_VARIABLE_ModeInfo_28);
    }
#line 1158 "modes.m"
    {
#line 1158 "modes.m"
      MR_Word base;
#line 1158 "modes.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1158 "modes.m"
      *check_hlds__modes__Case_16 = base;
#line 1158 "modes.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__MainConsId_18));
#line 1158 "modes.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__OtherConsIds_19));
#line 1158 "modes.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modes__Goal_26));
#line 1158 "modes.m"
    }
#line 1131 "modes.m"
  }
#line 1126 "modes.m"
}

#line 1111 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_disj_8_p_0(
#line 1111 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_9,
#line 1111 "modes.m"
  MR_Word check_hlds__modes__HeadVars_10,
#line 1111 "modes.m"
  MR_Word check_hlds__modes__InstMap0_11,
#line 1111 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_12,
#line 1111 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_13,
#line 1111 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_14,
#line 1111 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
#line 1111 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19)
#line 1111 "modes.m"
{
#line 1116 "modes.m"
  {
#line 1116 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1116 "modes.m"
    MR_Word check_hlds__modes__Disjunct1_16;
#line 1116 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_21_21;
#line 1116 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_22_22;
#line 1116 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_23_23;
#line 1116 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_25_25;
#line 1123 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_17;

#line 1117 "modes.m"
    {
#line 1117 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_9, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__STATE_VARIABLE_ModeInfo_21_21);
    }
#line 1118 "modes.m"
    {
#line 1118 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_11, check_hlds__modes__STATE_VARIABLE_ModeInfo_21_21, &check_hlds__modes__STATE_VARIABLE_ModeInfo_22_22);
    }
#line 1119 "modes.m"
    {
#line 1119 "modes.m"
      check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modes__Disjunct0_13, &check_hlds__modes__Disjunct1_16, check_hlds__modes__STATE_VARIABLE_ModeInfo_22_22, &check_hlds__modes__STATE_VARIABLE_ModeInfo_23_23);
    }
#line 1120 "modes.m"
    {
#line 1120 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_9, check_hlds__modes__STATE_VARIABLE_ModeInfo_23_23, &check_hlds__modes__STATE_VARIABLE_ModeInfo_25_25);
    }
#line 1123 "modes.m"
    {
#line 1123 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_10, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_12, &check_hlds__modes___ArgFinalInsts_17, check_hlds__modes__Disjunct1_16, check_hlds__modes__Disjunct_14, check_hlds__modes__STATE_VARIABLE_ModeInfo_25_25, check_hlds__modes__STATE_VARIABLE_ModeInfo_19);
    }
#line 1116 "modes.m"
  }
#line 1111 "modes.m"
}

#line 1077 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0_1(
#line 1077 "modes.m"
  MR_Box check_hlds__modes__closure_arg)
#line 1077 "modes.m"
{
#line 1077 "modes.m"
  {
#line 1077 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1077 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;

#line 1077 "modes.m"
    {
#line 1077 "modes.m"
      return check_hlds__modes__succeeded = check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1077__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))));
    }
#line 1077 "modes.m"
    return check_hlds__modes__succeeded;
#line 1077 "modes.m"
  }
#line 1077 "modes.m"
}

#line 960 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0(
#line 960 "modes.m"
  MR_Word check_hlds__modes__HowToCheckGoal_8,
#line 960 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26,
#line 960 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_OldPredTable_27,
#line 960 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28,
#line 960 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_29,
#line 960 "modes.m"
  MR_Word * check_hlds__modes__Changed_11,
#line 960 "modes.m"
  MR_Word * check_hlds__modes__Specs_12)
#line 960 "modes.m"
{
#line 965 "modes.m"
  {
#line 965 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 965 "modes.m"
    MR_Word check_hlds__modes__Requests0_13;
#line 965 "modes.m"
    MR_Word check_hlds__modes__RequestQueue0_14;
#line 995 "modes.m"
    MR_Word check_hlds__modes__PredProcId_15;
#line 995 "modes.m"
    MR_Word check_hlds__modes__RequestQueue1_16;
#line 968 "modes.m"
    MR_Box check_hlds__modes__conv0_PredProcId_15;

#line 966 "modes.m"
    {
#line 966 "modes.m"
      hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28, &check_hlds__modes__Requests0_13);
    }
#line 967 "modes.m"
    {
#line 967 "modes.m"
      check_hlds__unify_proc__get_req_queue_2_p_0(check_hlds__modes__Requests0_13, &check_hlds__modes__RequestQueue0_14);
    }
#line 968 "modes.m"
    {
#line 968 "modes.m"
      check_hlds__modes__succeeded = mercury__queue__get_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, &check_hlds__modes__conv0_PredProcId_15, check_hlds__modes__RequestQueue0_14, &check_hlds__modes__RequestQueue1_16);
    }
#line 968 "modes.m"
    if (check_hlds__modes__succeeded)
#line 968 "modes.m"
      {
#line 968 "modes.m"
        check_hlds__modes__PredProcId_15 = ((MR_Word) check_hlds__modes__conv0_PredProcId_15);
#line 968 "modes.m"
        check_hlds__modes__succeeded = MR_TRUE;
#line 968 "modes.m"
      }
#line 995 "modes.m"
    if (check_hlds__modes__succeeded)
#line 969 "modes.m"
      {
#line 969 "modes.m"
        MR_Word check_hlds__modes__Requests1_17;
#line 969 "modes.m"
        MR_Word check_hlds__modes__PredId_18;
#line 969 "modes.m"
        MR_Word check_hlds__modes__ValidPredIds_20;
#line 969 "modes.m"
        MR_Word check_hlds__modes__HeadChanged_22;
#line 969 "modes.m"
        MR_Word check_hlds__modes__HeadSpecs_23;
#line 969 "modes.m"
        MR_Word check_hlds__modes__TailChanged_24;
#line 969 "modes.m"
        MR_Word check_hlds__modes__TailSpecs_25;
#line 969 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30;
#line 969 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33;
#line 969 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34;
#line 978 "modes.m"
        MR_Integer check_hlds__modes___ProcId_19;

#line 969 "modes.m"
        {
#line 969 "modes.m"
          check_hlds__unify_proc__set_req_queue_3_p_0(check_hlds__modes__RequestQueue1_16, check_hlds__modes__Requests0_13, &check_hlds__modes__Requests1_17);
        }
#line 970 "modes.m"
        {
#line 970 "modes.m"
          hlds__hlds_module__module_info_set_proc_requests_3_p_0(check_hlds__modes__Requests1_17, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30);
        }
#line 978 "modes.m"
        check_hlds__modes__PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 0)));
#line 978 "modes.m"
        check_hlds__modes___ProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 1)));
#line 979 "modes.m"
        {
#line 979 "modes.m"
          hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__modes__ValidPredIds_20);
        }
#line 980 "modes.m"
        {
#line 980 "modes.m"
          check_hlds__modes__succeeded = mercury__set_tree234__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (check_hlds__modes__PredId_18)), check_hlds__modes__ValidPredIds_20);
        }
#line 987 "modes.m"
        if (check_hlds__modes__succeeded)
#line 984 "modes.m"
          {
#line 984 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_61_110;
#line 984 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_62_111;
#line 984 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_64_113;
#line 984 "modes.m"
            MR_Word check_hlds__modes__PredId_69;
#line 984 "modes.m"
            MR_Integer check_hlds__modes__ProcId_70;
#line 984 "modes.m"
            MR_Word check_hlds__modes__Preds0_71;
#line 984 "modes.m"
            MR_Word check_hlds__modes__PredInfo0_72;
#line 984 "modes.m"
            MR_Word check_hlds__modes__Procs0_73;
#line 984 "modes.m"
            MR_Word check_hlds__modes__ProcInfo0_74;
#line 984 "modes.m"
            MR_Word check_hlds__modes__ProcInfo1_75;
#line 984 "modes.m"
            MR_Word check_hlds__modes__Procs1_76;
#line 984 "modes.m"
            MR_Word check_hlds__modes__PredInfo1_77;
#line 984 "modes.m"
            MR_Word check_hlds__modes__Preds1_78;
#line 984 "modes.m"
            MR_Word check_hlds__modes__ModeSpecs_79;
#line 984 "modes.m"
            MR_Word check_hlds__modes__Globals_80;
#line 984 "modes.m"
            MR_Word check_hlds__modes__ModeErrors_81;
#line 984 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_46_95;
#line 984 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96;
#line 984 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Changed_48_97;
#line 981 "modes.m"
            MR_Word check_hlds__modes__Globals_46;
#line 981 "modes.m"
            MR_Word check_hlds__modes__VeryVerbose_47;
#line 1037 "modes.m"
            MR_Box check_hlds__modes__conv1_PredInfo0_72;
#line 1039 "modes.m"
            MR_Box check_hlds__modes__conv2_ProcInfo0_74;

#line 1004 "modes.m"
            {
#line 1004 "modes.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__modes__Globals_46);
            }
#line 1005 "modes.m"
            {
#line 1005 "modes.m"
              libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_46, (MR_Integer) 46, &check_hlds__modes__VeryVerbose_47);
            }
#line 1023 "modes.m"
#line 1023 "modes.m"
            switch (check_hlds__modes__VeryVerbose_47) {
#line 1023 "modes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1023 "modes.m"
              case (MR_Integer) 0:
#line 1024 "modes.m"
                {
#line 1024 "modes.m"
                }
#line 1023 "modes.m"
                break;
#line 1023 "modes.m"
              case (MR_Integer) 1:
#line 1007 "modes.m"
                {
#line 1011 "modes.m"
#line 1011 "modes.m"
                  switch (check_hlds__modes__HowToCheckGoal_8) {
#line 1011 "modes.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1011 "modes.m"
                    case (MR_Integer) 0:
#line 1009 "modes.m"
                      {
#line 1010 "modes.m"
                        {
#line 1010 "modes.m"
                          mercury__io__write_string_3_p_0((MR_String) "% Mode-analyzing ");
                        }
#line 1009 "modes.m"
                      }
#line 1011 "modes.m"
                      break;
#line 1011 "modes.m"
                    case (MR_Integer) 1:
#line 1012 "modes.m"
                      {
#line 1013 "modes.m"
                        {
#line 1013 "modes.m"
                          mercury__io__write_string_3_p_0((MR_String) "% Analyzing modes, determinism, and unique-modes for\n% ");
                        }
#line 1012 "modes.m"
                      }
#line 1011 "modes.m"
                      break;
#line 1011 "modes.m"
                  }
#line 1016 "modes.m"
                  {
#line 1016 "modes.m"
                    hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30, check_hlds__modes__PredProcId_15);
                  }
#line 1017 "modes.m"
                  {
#line 1017 "modes.m"
                    mercury__io__write_string_3_p_0((MR_String) "\n");
                  }
#line 1007 "modes.m"
                }
#line 1023 "modes.m"
                break;
#line 1023 "modes.m"
            }
#line 1034 "modes.m"
            check_hlds__modes__PredId_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 0)));
#line 1034 "modes.m"
            check_hlds__modes__ProcId_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 1)));
#line 1036 "modes.m"
            {
#line 1036 "modes.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__modes__Preds0_71);
            }
#line 4447 "check_hlds.modes.c"
            check_hlds__modes__TypeCtorInfo_61_110 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 4449 "check_hlds.modes.c"
            check_hlds__modes__TypeCtorInfo_62_111 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 1037 "modes.m"
            {
#line 1037 "modes.m"
              mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_61_110, check_hlds__modes__TypeCtorInfo_62_111, check_hlds__modes__Preds0_71, ((MR_Box) (check_hlds__modes__PredId_69)), &check_hlds__modes__conv1_PredInfo0_72);
            }
#line 1037 "modes.m"
            check_hlds__modes__PredInfo0_72 = ((MR_Word) check_hlds__modes__conv1_PredInfo0_72);
#line 1038 "modes.m"
            {
#line 1038 "modes.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__PredInfo0_72, &check_hlds__modes__Procs0_73);
            }
#line 4463 "check_hlds.modes.c"
            check_hlds__modes__TypeCtorInfo_64_113 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 1039 "modes.m"
            {
#line 1039 "modes.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__modes__TypeCtorInfo_64_113, check_hlds__modes__Procs0_73, check_hlds__modes__ProcId_70, &check_hlds__modes__conv2_ProcInfo0_74);
            }
#line 1039 "modes.m"
            check_hlds__modes__ProcInfo0_74 = ((MR_Word) check_hlds__modes__conv2_ProcInfo0_74);
#line 1041 "modes.m"
            {
#line 1041 "modes.m"
              hlds__hlds_pred__proc_info_set_can_process_3_p_0((MR_Integer) 1, check_hlds__modes__ProcInfo0_74, &check_hlds__modes__ProcInfo1_75);
            }
#line 1043 "modes.m"
            {
#line 1043 "modes.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__modes__TypeCtorInfo_64_113, check_hlds__modes__ProcId_70, ((MR_Box) (check_hlds__modes__ProcInfo1_75)), check_hlds__modes__Procs0_73, &check_hlds__modes__Procs1_76);
            }
#line 1044 "modes.m"
            {
#line 1044 "modes.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__modes__Procs1_76, check_hlds__modes__PredInfo0_72, &check_hlds__modes__PredInfo1_77);
            }
#line 1045 "modes.m"
            {
#line 1045 "modes.m"
              mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_61_110, check_hlds__modes__TypeCtorInfo_62_111, ((MR_Box) (check_hlds__modes__PredId_69)), ((MR_Box) (check_hlds__modes__PredInfo1_77)), check_hlds__modes__Preds0_71, &check_hlds__modes__Preds1_78);
            }
#line 1046 "modes.m"
            {
#line 1046 "modes.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__Preds1_78, check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_46_95);
            }
#line 622 "modes.m"
            {
#line 622 "modes.m"
              check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_70, check_hlds__modes__PredId_69, (MR_Integer) 0, (MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ModuleInfo_46_95, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96, (MR_Integer) 0, &check_hlds__modes__STATE_VARIABLE_Changed_48_97, &check_hlds__modes__ModeSpecs_79);
            }
#line 1051 "modes.m"
            {
#line 1051 "modes.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96, &check_hlds__modes__Globals_80);
            }
#line 1052 "modes.m"
            {
#line 1052 "modes.m"
              check_hlds__modes__ModeErrors_81 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__modes__Globals_80, check_hlds__modes__ModeSpecs_79);
            }
#line 1057 "modes.m"
#line 1057 "modes.m"
            switch (check_hlds__modes__ModeErrors_81) {
#line 1057 "modes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1057 "modes.m"
              case (MR_Integer) 0:
#line 1084 "modes.m"
#line 1084 "modes.m"
                switch (check_hlds__modes__HowToCheckGoal_8) {
#line 1084 "modes.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1084 "modes.m"
                  case (MR_Integer) 0:
#line 1085 "modes.m"
                    {
#line 1086 "modes.m"
                      check_hlds__modes__HeadSpecs_23 = check_hlds__modes__ModeSpecs_79;
#line 1085 "modes.m"
                      check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 1085 "modes.m"
                      check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96;
#line 1085 "modes.m"
                      check_hlds__modes__HeadChanged_22 = check_hlds__modes__STATE_VARIABLE_Changed_48_97;
#line 1085 "modes.m"
                    }
#line 1084 "modes.m"
                    break;
#line 1084 "modes.m"
                  case (MR_Integer) 1:
#line 1060 "modes.m"
                    {
#line 1060 "modes.m"
                      MR_Word check_hlds__modes__TypeCtorInfo_19_150;
#line 1060 "modes.m"
                      MR_Word check_hlds__modes__TypeCtorInfo_20_151;
#line 1060 "modes.m"
                      MR_Word check_hlds__modes__Preds2_82;
#line 1060 "modes.m"
                      MR_Word check_hlds__modes__PredInfo2_83;
#line 1060 "modes.m"
                      MR_Word check_hlds__modes__Procs2_84;
#line 1060 "modes.m"
                      MR_Word check_hlds__modes__ProcInfo2_85;
#line 1060 "modes.m"
                      MR_Word check_hlds__modes__SwitchDetectInfo_86;
#line 1060 "modes.m"
                      MR_Word check_hlds__modes__ProcInfo3_87;
#line 1060 "modes.m"
                      MR_Word check_hlds__modes__Procs3_88;
#line 1060 "modes.m"
                      MR_Word check_hlds__modes__PredInfo3_89;
#line 1060 "modes.m"
                      MR_Word check_hlds__modes__Preds3_90;
#line 1060 "modes.m"
                      MR_Word check_hlds__modes__DetismSpecs_91;
#line 1060 "modes.m"
                      MR_Word check_hlds__modes__NewChanged_92;
#line 1060 "modes.m"
                      MR_Word check_hlds__modes__UniqueSpecs_93;
#line 1060 "modes.m"
                      MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_49_98;
#line 1060 "modes.m"
                      MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_50_99;
#line 1060 "modes.m"
                      MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_100;
#line 1060 "modes.m"
                      MR_Word check_hlds__modes__V_101_101;
#line 1060 "modes.m"
                      MR_Word check_hlds__modes__ProcInfo_144;
#line 1060 "modes.m"
                      MR_Word check_hlds__modes__OldPredInfo0_145;
#line 1060 "modes.m"
                      MR_Word check_hlds__modes__OldProcTable0_146;
#line 1060 "modes.m"
                      MR_Word check_hlds__modes__OldProcTable_147;
#line 1060 "modes.m"
                      MR_Word check_hlds__modes__OldPredInfo_148;
#line 1063 "modes.m"
                      MR_Box check_hlds__modes__conv3_PredInfo2_83;
#line 1065 "modes.m"
                      MR_Box check_hlds__modes__conv4_ProcInfo2_85;
#line 1097 "modes.m"
                      MR_Word check_hlds__modes___PredInfo_143;
#line 1099 "modes.m"
                      MR_Box check_hlds__modes__conv5_OldPredInfo0_145;

#line 1062 "modes.m"
                      {
#line 1062 "modes.m"
                        hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96, &check_hlds__modes__Preds2_82);
                      }
#line 1063 "modes.m"
                      {
#line 1063 "modes.m"
                        mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_61_110, check_hlds__modes__TypeCtorInfo_62_111, check_hlds__modes__Preds2_82, ((MR_Box) (check_hlds__modes__PredId_69)), &check_hlds__modes__conv3_PredInfo2_83);
                      }
#line 1063 "modes.m"
                      check_hlds__modes__PredInfo2_83 = ((MR_Word) check_hlds__modes__conv3_PredInfo2_83);
#line 1064 "modes.m"
                      {
#line 1064 "modes.m"
                        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__PredInfo2_83, &check_hlds__modes__Procs2_84);
                      }
#line 1065 "modes.m"
                      {
#line 1065 "modes.m"
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__modes__TypeCtorInfo_64_113, check_hlds__modes__Procs2_84, check_hlds__modes__ProcId_70, &check_hlds__modes__conv4_ProcInfo2_85);
                      }
#line 1065 "modes.m"
                      check_hlds__modes__ProcInfo2_85 = ((MR_Word) check_hlds__modes__conv4_ProcInfo2_85);
#line 1067 "modes.m"
                      {
#line 1067 "modes.m"
                        check_hlds__modes__SwitchDetectInfo_86 = check_hlds__switch_detection__init_switch_detect_info_1_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96);
                      }
#line 1068 "modes.m"
                      {
#line 1068 "modes.m"
                        check_hlds__switch_detection__detect_switches_in_proc_3_p_0(check_hlds__modes__SwitchDetectInfo_86, check_hlds__modes__ProcInfo2_85, &check_hlds__modes__ProcInfo3_87);
                      }
#line 1070 "modes.m"
                      {
#line 1070 "modes.m"
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__modes__TypeCtorInfo_64_113, check_hlds__modes__ProcId_70, ((MR_Box) (check_hlds__modes__ProcInfo3_87)), check_hlds__modes__Procs2_84, &check_hlds__modes__Procs3_88);
                      }
#line 1071 "modes.m"
                      {
#line 1071 "modes.m"
                        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__modes__Procs3_88, check_hlds__modes__PredInfo2_83, &check_hlds__modes__PredInfo3_89);
                      }
#line 1072 "modes.m"
                      {
#line 1072 "modes.m"
                        mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_61_110, check_hlds__modes__TypeCtorInfo_62_111, ((MR_Box) (check_hlds__modes__PredId_69)), ((MR_Box) (check_hlds__modes__PredInfo3_89)), check_hlds__modes__Preds2_82, &check_hlds__modes__Preds3_90);
                      }
#line 1073 "modes.m"
                      {
#line 1073 "modes.m"
                        hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__Preds3_90, check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_49_98);
                      }
#line 1075 "modes.m"
                      {
#line 1075 "modes.m"
                        check_hlds__cse_detection__detect_cse_in_proc_4_p_0(check_hlds__modes__PredId_69, check_hlds__modes__ProcId_70, check_hlds__modes__STATE_VARIABLE_ModuleInfo_49_98, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_50_99);
                      }
#line 1076 "modes.m"
                      {
#line 1076 "modes.m"
                        check_hlds__det_analysis__determinism_check_proc_5_p_0(check_hlds__modes__ProcId_70, check_hlds__modes__PredId_69, check_hlds__modes__STATE_VARIABLE_ModuleInfo_50_99, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_100, &check_hlds__modes__DetismSpecs_91);
                      }
#line 1077 "modes.m"
                      {
#line 1077 "modes.m"
                        check_hlds__modes__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1077 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_101_101, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_9[0]));
#line 1077 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_101_101, 1) = ((MR_Box) (check_hlds__modes__modecheck_queued_procs_7_p_0_1));
#line 1077 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_101_101, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1077 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_101_101, 3) = ((MR_Box) (check_hlds__modes__DetismSpecs_91));
#line 1077 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_101_101, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1077 "modes.m"
                      }
#line 1077 "modes.m"
                      {
#line 1077 "modes.m"
                        mercury__require__expect_4_p_0(check_hlds__modes__V_101_101, (MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.modecheck_queued_proc\'/8", (MR_String) "found detism error");
                      }
#line 1097 "modes.m"
                      {
#line 1097 "modes.m"
                        hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_100, check_hlds__modes__PredId_69, check_hlds__modes__ProcId_70, &check_hlds__modes___PredInfo_143, &check_hlds__modes__ProcInfo_144);
                      }
#line 4689 "check_hlds.modes.c"
                      check_hlds__modes__TypeCtorInfo_19_150 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 4691 "check_hlds.modes.c"
                      check_hlds__modes__TypeCtorInfo_20_151 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 1099 "modes.m"
                      {
#line 1099 "modes.m"
                        mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_19_150, check_hlds__modes__TypeCtorInfo_20_151, check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26, ((MR_Box) (check_hlds__modes__PredId_69)), &check_hlds__modes__conv5_OldPredInfo0_145);
                      }
#line 1099 "modes.m"
                      check_hlds__modes__OldPredInfo0_145 = ((MR_Word) check_hlds__modes__conv5_OldPredInfo0_145);
#line 1100 "modes.m"
                      {
#line 1100 "modes.m"
                        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__OldPredInfo0_145, &check_hlds__modes__OldProcTable0_146);
                      }
#line 1101 "modes.m"
                      {
#line 1101 "modes.m"
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__modes__ProcId_70, ((MR_Box) (check_hlds__modes__ProcInfo_144)), check_hlds__modes__OldProcTable0_146, &check_hlds__modes__OldProcTable_147);
                      }
#line 1102 "modes.m"
                      {
#line 1102 "modes.m"
                        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__modes__OldProcTable_147, check_hlds__modes__OldPredInfo0_145, &check_hlds__modes__OldPredInfo_148);
                      }
#line 1103 "modes.m"
                      {
#line 1103 "modes.m"
                        mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_19_150, check_hlds__modes__TypeCtorInfo_20_151, ((MR_Box) (check_hlds__modes__PredId_69)), ((MR_Box) (check_hlds__modes__OldPredInfo_148)), check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26, &check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33);
                      }
#line 1080 "modes.m"
                      {
#line 1080 "modes.m"
                        check_hlds__unique_modes__unique_modes_check_proc_6_p_0(check_hlds__modes__ProcId_70, check_hlds__modes__PredId_69, check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_100, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34, &check_hlds__modes__NewChanged_92, &check_hlds__modes__UniqueSpecs_93);
                      }
#line 1082 "modes.m"
                      {
#line 1082 "modes.m"
                        mercury__bool__or_3_p_0(check_hlds__modes__NewChanged_92, check_hlds__modes__STATE_VARIABLE_Changed_48_97, &check_hlds__modes__HeadChanged_22);
                      }
#line 1083 "modes.m"
                      {
#line 1083 "modes.m"
                        check_hlds__modes__HeadSpecs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__ModeSpecs_79, check_hlds__modes__UniqueSpecs_93);
                      }
#line 1060 "modes.m"
                    }
#line 1084 "modes.m"
                    break;
#line 1084 "modes.m"
                }
#line 1057 "modes.m"
                break;
#line 1057 "modes.m"
              case (MR_Integer) 1:
#line 1054 "modes.m"
                {
#line 1055 "modes.m"
                  {
#line 1055 "modes.m"
                    hlds__hlds_module__module_info_make_pred_id_invalid_3_p_0(check_hlds__modes__PredId_69, check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34);
                  }
#line 1056 "modes.m"
                  check_hlds__modes__HeadSpecs_23 = check_hlds__modes__ModeSpecs_79;
#line 1054 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 1054 "modes.m"
                  check_hlds__modes__HeadChanged_22 = check_hlds__modes__STATE_VARIABLE_Changed_48_97;
#line 1054 "modes.m"
                }
#line 1057 "modes.m"
                break;
#line 1057 "modes.m"
            }
#line 984 "modes.m"
          }
#line 987 "modes.m"
        else
#line 988 "modes.m"
          {
#line 988 "modes.m"
            check_hlds__modes__HeadSpecs_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 989 "modes.m"
            check_hlds__modes__HeadChanged_22 = (MR_Integer) 0;
#line 988 "modes.m"
            check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30;
#line 988 "modes.m"
            check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 988 "modes.m"
          }
#line 991 "modes.m"
        {
#line 991 "modes.m"
          check_hlds__modes__modecheck_queued_procs_7_p_0(check_hlds__modes__HowToCheckGoal_8, check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33, check_hlds__modes__STATE_VARIABLE_OldPredTable_27, check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34, check_hlds__modes__STATE_VARIABLE_ModuleInfo_29, &check_hlds__modes__TailChanged_24, &check_hlds__modes__TailSpecs_25);
        }
#line 993 "modes.m"
        {
#line 993 "modes.m"
          mercury__bool__or_3_p_0(check_hlds__modes__HeadChanged_22, check_hlds__modes__TailChanged_24, check_hlds__modes__Changed_11);
        }
#line 994 "modes.m"
        {
#line 994 "modes.m"
          *check_hlds__modes__Specs_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__HeadSpecs_23, check_hlds__modes__TailSpecs_25);
        }
#line 969 "modes.m"
      }
#line 995 "modes.m"
    else
#line 996 "modes.m"
      {
#line 996 "modes.m"
        *check_hlds__modes__Changed_11 = (MR_Integer) 0;
#line 997 "modes.m"
        *check_hlds__modes__Specs_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 996 "modes.m"
        *check_hlds__modes__STATE_VARIABLE_ModuleInfo_29 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28;
#line 996 "modes.m"
        *check_hlds__modes__STATE_VARIABLE_OldPredTable_27 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 996 "modes.m"
      }
#line 965 "modes.m"
  }
#line 960 "modes.m"
}

#line 911 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_5(
#line 911 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 911 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 911 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 911 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 911 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4)
#line 911 "modes.m"
{
#line 911 "modes.m"
  {
#line 911 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 911 "modes.m"
    MR_Word check_hlds__modes__conv10_Case_16;
#line 911 "modes.m"
    MR_Word check_hlds__modes__conv9_STATE_VARIABLE_ModeInfo_28;

#line 911 "modes.m"
    {
#line 911 "modes.m"
      check_hlds__modes__unique_modecheck_clause_switch_9_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 7))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv10_Case_16, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv9_STATE_VARIABLE_ModeInfo_28);
    }
#line 911 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv10_Case_16));
#line 911 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv9_STATE_VARIABLE_ModeInfo_28));
#line 911 "modes.m"
  }
#line 911 "modes.m"
}

#line 903 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_4(
#line 903 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 903 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 903 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 903 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 903 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4)
#line 903 "modes.m"
{
#line 903 "modes.m"
  {
#line 903 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 903 "modes.m"
    MR_Word check_hlds__modes__conv7_Disjunct_20;
#line 903 "modes.m"
    MR_Word check_hlds__modes__conv6_STATE_VARIABLE_ModeInfo_25;

#line 903 "modes.m"
    {
#line 903 "modes.m"
      check_hlds__modes__unique_modecheck_clause_disj_11_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 9))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv7_Disjunct_20, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv6_STATE_VARIABLE_ModeInfo_25);
    }
#line 903 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv7_Disjunct_20));
#line 903 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv6_STATE_VARIABLE_ModeInfo_25));
#line 903 "modes.m"
  }
#line 903 "modes.m"
}

#line 877 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_3(
#line 877 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 877 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 877 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 877 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 877 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4)
#line 877 "modes.m"
{
#line 877 "modes.m"
  {
#line 877 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 877 "modes.m"
    MR_Word check_hlds__modes__conv4_Case_16;
#line 877 "modes.m"
    MR_Word check_hlds__modes__conv3_STATE_VARIABLE_ModeInfo_28;

#line 877 "modes.m"
    {
#line 877 "modes.m"
      check_hlds__modes__modecheck_clause_switch_9_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 7))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv4_Case_16, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv3_STATE_VARIABLE_ModeInfo_28);
    }
#line 877 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv4_Case_16));
#line 877 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv3_STATE_VARIABLE_ModeInfo_28));
#line 877 "modes.m"
  }
#line 877 "modes.m"
}

#line 870 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_2(
#line 870 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 870 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 870 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 870 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 870 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4)
#line 870 "modes.m"
{
#line 870 "modes.m"
  {
#line 870 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 870 "modes.m"
    MR_Word check_hlds__modes__conv1_Disjunct_14;
#line 870 "modes.m"
    MR_Word check_hlds__modes__conv0_STATE_VARIABLE_ModeInfo_19;

#line 870 "modes.m"
    {
#line 870 "modes.m"
      check_hlds__modes__modecheck_clause_disj_8_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv1_Disjunct_14, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv0_STATE_VARIABLE_ModeInfo_19);
    }
#line 870 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv1_Disjunct_14));
#line 870 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv0_STATE_VARIABLE_ModeInfo_19));
#line 870 "modes.m"
  }
#line 870 "modes.m"
}

#line 851 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_1(
#line 851 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 851 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1)
#line 851 "modes.m"
{
#line 851 "modes.m"
  {
#line 851 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 851 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;

#line 851 "modes.m"
    {
#line 851 "modes.m"
      return check_hlds__modes__succeeded = check_hlds__type_util__var_is_or_may_contain_solver_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modes__wrapper_arg_1));
    }
#line 851 "modes.m"
    return check_hlds__modes__succeeded;
#line 851 "modes.m"
  }
#line 851 "modes.m"
}

#line 823 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0(
#line 823 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_16,
#line 823 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_17,
#line 823 "modes.m"
  MR_Word check_hlds__modes__InferModes_18,
#line 823 "modes.m"
  MR_Word check_hlds__modes__Markers_19,
#line 823 "modes.m"
  MR_Word check_hlds__modes__IsUnifyPred_20,
#line 823 "modes.m"
  MR_Word check_hlds__modes__PredId_21,
#line 823 "modes.m"
  MR_Integer check_hlds__modes__ProcId_22,
#line 823 "modes.m"
  MR_Word check_hlds__modes__Body0_23,
#line 823 "modes.m"
  MR_Word * check_hlds__modes__Body_24,
#line 823 "modes.m"
  MR_Word check_hlds__modes__HeadVars_25,
#line 823 "modes.m"
  MR_Word check_hlds__modes__InstMap0_26,
#line 823 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_27,
#line 823 "modes.m"
  MR_Word * check_hlds__modes__ArgFinalInsts_28,
#line 823 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66,
#line 823 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_67)
#line 823 "modes.m"
{
#line 831 "modes.m"
  {
#line 831 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 831 "modes.m"
    MR_String check_hlds__modes__CheckpointMsg_30;
#line 831 "modes.m"
    MR_Integer check_hlds__modes__V_71_71;
#line 831 "modes.m"
    MR_Integer check_hlds__modes__V_74_74;
#line 831 "modes.m"
    MR_String check_hlds__modes__V_155_155;
#line 831 "modes.m"
    MR_Word check_hlds__modes__V_161_161;
#line 831 "modes.m"
    MR_String check_hlds__modes__V_163_163;
#line 831 "modes.m"
    MR_String check_hlds__modes__V_164_164;
#line 831 "modes.m"
    MR_String check_hlds__modes__V_171_171;
#line 927 "modes.m"
    MR_Word check_hlds__modes__BodyGoalInfo0_32;
#line 927 "modes.m"
    MR_Word check_hlds__modes__ClausesForm0_36;
#line 927 "modes.m"
    MR_Word check_hlds__modes__BodyNonLocals_42;
#line 836 "modes.m"
    MR_Word check_hlds__modes__TypeInfo_123_123;
#line 836 "modes.m"
    MR_Word check_hlds__modes__TypeCtorInfo_125_125;
#line 836 "modes.m"
    MR_Word check_hlds__modes__BodyGoalExpr0_31;
#line 836 "modes.m"
    MR_Word check_hlds__modes__VarTypes0_43;
#line 836 "modes.m"
    MR_Word check_hlds__modes__SolverNonLocals_44;
#line 836 "modes.m"
    MR_Word check_hlds__modes__V_76_76;
#line 836 "modes.m"
    MR_Word check_hlds__modes__V_77_77;
#line 836 "modes.m"
    MR_Word check_hlds__modes__V_78_78;

#line 833 "modes.m"
    {
#line 833 "modes.m"
      check_hlds__modes__V_71_71 = hlds__hlds_pred__pred_id_to_int_1_f_0(check_hlds__modes__PredId_21);
    }
#line 833 "modes.m"
    {
#line 833 "modes.m"
      check_hlds__modes__V_74_74 = hlds__hlds_pred__proc_id_to_int_1_f_0(check_hlds__modes__ProcId_22);
    }
#line 5084 "check_hlds.modes.c"
    check_hlds__modes__V_161_161 = (MR_Word) &check_hlds__modes_scalar_common_3[2];
#line 833 "modes.m"
    {
#line 833 "modes.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__modes__V_161_161, check_hlds__modes__V_74_74, &check_hlds__modes__V_155_155);
    }
#line 832 "modes.m"
    {
#line 832 "modes.m"
      check_hlds__modes__V_163_163 = mercury__string__f_43_43_2_f_0((MR_String) "_", check_hlds__modes__V_155_155);
    }
#line 833 "modes.m"
    {
#line 833 "modes.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__modes__V_161_161, check_hlds__modes__V_71_71, &check_hlds__modes__V_164_164);
    }
#line 832 "modes.m"
    {
#line 832 "modes.m"
      check_hlds__modes__V_171_171 = mercury__string__f_43_43_2_f_0(check_hlds__modes__V_164_164, check_hlds__modes__V_163_163);
    }
#line 832 "modes.m"
    {
#line 832 "modes.m"
      check_hlds__modes__CheckpointMsg_30 = mercury__string__f_43_43_2_f_0((MR_String) "procedure_", check_hlds__modes__V_171_171);
    }
#line 836 "modes.m"
    check_hlds__modes__succeeded = (check_hlds__modes__InferModes_18 == (MR_Integer) 0);
#line 836 "modes.m"
    if (check_hlds__modes__succeeded)
#line 836 "modes.m"
      {
#line 837 "modes.m"
        check_hlds__modes__V_76_76 = (MR_Integer) 21;
#line 837 "modes.m"
        {
#line 837 "modes.m"
          check_hlds__modes__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_19, check_hlds__modes__V_76_76);
        }
#line 836 "modes.m"
        if (check_hlds__modes__succeeded)
#line 836 "modes.m"
          {
#line 838 "modes.m"
            check_hlds__modes__BodyGoalExpr0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Body0_23, (MR_Integer) 0)));
#line 838 "modes.m"
            check_hlds__modes__BodyGoalInfo0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Body0_23, (MR_Integer) 1)));
#line 843 "modes.m"
            if (((((MR_tag((MR_Word) check_hlds__modes__BodyGoalExpr0_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 840 "modes.m"
              {
#line 840 "modes.m"
                MR_Word check_hlds__modes__Disjuncts0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 1)));
#line 841 "modes.m"
                MR_Word check_hlds__modes__V_34_34;
#line 841 "modes.m"
                MR_Word check_hlds__modes__V_35_35;

#line 841 "modes.m"
                check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Disjuncts0_33)) == (MR_mktag((MR_Integer) 1)));
#line 841 "modes.m"
                if (check_hlds__modes__succeeded)
#line 841 "modes.m"
                  {
#line 841 "modes.m"
                    check_hlds__modes__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Disjuncts0_33, (MR_Integer) 0)));
#line 841 "modes.m"
                    check_hlds__modes__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Disjuncts0_33, (MR_Integer) 1)));
#line 842 "modes.m"
                    {
#line 842 "modes.m"
                      check_hlds__modes__ClausesForm0_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 842 "modes.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modes__ClausesForm0_36, 0) = ((MR_Box) (check_hlds__modes__Disjuncts0_33));
#line 842 "modes.m"
                    }
#line 842 "modes.m"
                    check_hlds__modes__succeeded = MR_TRUE;
#line 841 "modes.m"
                  }
#line 840 "modes.m"
              }
#line 843 "modes.m"
            else
#line 843 "modes.m"
            if (((((MR_tag((MR_Word) check_hlds__modes__BodyGoalExpr0_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 844 "modes.m"
              {
#line 844 "modes.m"
                MR_Word check_hlds__modes__SwitchVar0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 1)));
#line 844 "modes.m"
                MR_Word check_hlds__modes__CanFail0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 2)));
#line 844 "modes.m"
                MR_Word check_hlds__modes__Cases0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 3)));
#line 845 "modes.m"
                MR_Word check_hlds__modes__V_40_40;
#line 845 "modes.m"
                MR_Word check_hlds__modes__V_41_41;

#line 845 "modes.m"
                check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Cases0_39)) == (MR_mktag((MR_Integer) 1)));
#line 845 "modes.m"
                if (check_hlds__modes__succeeded)
#line 845 "modes.m"
                  {
#line 845 "modes.m"
                    check_hlds__modes__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Cases0_39, (MR_Integer) 0)));
#line 845 "modes.m"
                    check_hlds__modes__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Cases0_39, (MR_Integer) 1)));
#line 846 "modes.m"
                    {
#line 846 "modes.m"
                      check_hlds__modes__ClausesForm0_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 846 "modes.m"
                      MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, 0) = ((MR_Box) (check_hlds__modes__SwitchVar0_37));
#line 846 "modes.m"
                      MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, 1) = ((MR_Box) (check_hlds__modes__CanFail0_38));
#line 846 "modes.m"
                      MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, 2) = ((MR_Box) (check_hlds__modes__Cases0_39));
#line 846 "modes.m"
                    }
#line 846 "modes.m"
                    check_hlds__modes__succeeded = MR_TRUE;
#line 845 "modes.m"
                  }
#line 844 "modes.m"
              }
#line 843 "modes.m"
            else
#line 843 "modes.m"
              check_hlds__modes__succeeded = MR_FALSE;
#line 836 "modes.m"
            if (check_hlds__modes__succeeded)
#line 836 "modes.m"
              {
#line 848 "modes.m"
                {
#line 848 "modes.m"
                  check_hlds__modes__BodyNonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modes__BodyGoalInfo0_32);
                }
#line 849 "modes.m"
                {
#line 849 "modes.m"
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66, &check_hlds__modes__VarTypes0_43);
                }
#line 5230 "check_hlds.modes.c"
                check_hlds__modes__TypeInfo_123_123 = (MR_Word) &check_hlds__modes_scalar_common_1[1];
#line 5232 "check_hlds.modes.c"
                check_hlds__modes__TypeCtorInfo_125_125 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 851 "modes.m"
                {
#line 851 "modes.m"
                  check_hlds__modes__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 851 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[2]));
#line 851 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_1));
#line 851 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 851 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 3) = ((MR_Box) (check_hlds__modes__ModuleInfo_16));
#line 851 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 4) = ((MR_Box) (check_hlds__modes__VarTypes0_43));
#line 851 "modes.m"
                }
#line 852 "modes.m"
                {
#line 852 "modes.m"
                  check_hlds__modes__V_78_78 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__modes__TypeCtorInfo_125_125, check_hlds__modes__BodyNonLocals_42);
                }
#line 850 "modes.m"
                {
#line 850 "modes.m"
                  check_hlds__modes__SolverNonLocals_44 = mercury__list__filter_2_f_0(check_hlds__modes__TypeInfo_123_123, check_hlds__modes__V_77_77, check_hlds__modes__V_78_78);
                }
#line 853 "modes.m"
                check_hlds__modes__succeeded = (check_hlds__modes__SolverNonLocals_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 836 "modes.m"
              }
#line 836 "modes.m"
          }
#line 836 "modes.m"
      }
#line 927 "modes.m"
    if (check_hlds__modes__succeeded)
#line 855 "modes.m"
      {
#line 855 "modes.m"
        MR_Word check_hlds__modes__BodyContext_45;
#line 855 "modes.m"
        MR_Word check_hlds__modes__EmptyContext_46;
#line 855 "modes.m"
        MR_Word check_hlds__modes__NewGoalExpr_50;
#line 855 "modes.m"
        MR_Word check_hlds__modes__HeadVarFinalInsts_60;
#line 855 "modes.m"
        MR_Word check_hlds__modes__FinalInstMap_61;
#line 855 "modes.m"
        MR_Word check_hlds__modes__DeltaInstMap_62;
#line 855 "modes.m"
        MR_Word check_hlds__modes__BodyGoalInfo_63;
#line 855 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79;

#line 855 "modes.m"
        {
#line 855 "modes.m"
          check_hlds__modes__BodyContext_45 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__modes__BodyGoalInfo0_32);
        }
#line 856 "modes.m"
        {
#line 856 "modes.m"
          mercury__term__context_init_1_p_0(&check_hlds__modes__EmptyContext_46);
        }
#line 857 "modes.m"
        {
#line 857 "modes.m"
          check_hlds__modes__succeeded = mercury__term____Unify____context_0_0(check_hlds__modes__BodyContext_45, check_hlds__modes__EmptyContext_46);
        }
#line 859 "modes.m"
        if (check_hlds__modes__succeeded)
#line 859 "modes.m"
          check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66;
#line 859 "modes.m"
        else
#line 860 "modes.m"
          {
#line 860 "modes.m"
            check_hlds__mode_info__mode_info_set_context_3_p_0(check_hlds__modes__BodyContext_45, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66, &check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79);
          }
#line 882 "modes.m"
#line 882 "modes.m"
        switch (check_hlds__modes__WhatToCheck_17) {
#line 882 "modes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 882 "modes.m"
          case (MR_Integer) 0:
#line 874 "modes.m"
            if (((MR_tag((MR_Word) check_hlds__modes__ClausesForm0_36)) == (MR_mktag((MR_Integer) 0))))
#line 867 "modes.m"
              {
#line 867 "modes.m"
                MR_Word check_hlds__modes__TypeCtorInfo_130_130;
#line 867 "modes.m"
                MR_Word check_hlds__modes__Disjuncts1_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__ClausesForm0_36, (MR_Integer) 0)));
#line 867 "modes.m"
                MR_Word check_hlds__modes__Disjuncts2_48;
#line 867 "modes.m"
                MR_Word check_hlds__modes__Disjuncts_49;
#line 867 "modes.m"
                MR_Word check_hlds__modes__V_93_93;
#line 869 "modes.m"
                MR_Box check_hlds__modes__conv2_STATE_VARIABLE_ModeInfo_67;

#line 868 "modes.m"
                {
#line 868 "modes.m"
                  check_hlds__modes__Disjuncts2_48 = hlds__goal_util__flatten_disjs_1_f_0(check_hlds__modes__Disjuncts1_47);
                }
#line 870 "modes.m"
                {
#line 870 "modes.m"
                  check_hlds__modes__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 870 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_7[0]));
#line 870 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_2));
#line 870 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 870 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_30));
#line 870 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 4) = ((MR_Box) (check_hlds__modes__HeadVars_25));
#line 870 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 5) = ((MR_Box) (check_hlds__modes__InstMap0_26));
#line 870 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_27));
#line 870 "modes.m"
                }
#line 5364 "check_hlds.modes.c"
                check_hlds__modes__TypeCtorInfo_130_130 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 869 "modes.m"
                {
#line 869 "modes.m"
                  mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_130_130, check_hlds__modes__TypeCtorInfo_130_130, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_93_93, check_hlds__modes__Disjuncts2_48, &check_hlds__modes__Disjuncts_49, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79)), &check_hlds__modes__conv2_STATE_VARIABLE_ModeInfo_67);
                }
#line 869 "modes.m"
                *check_hlds__modes__STATE_VARIABLE_ModeInfo_67 = ((MR_Word) check_hlds__modes__conv2_STATE_VARIABLE_ModeInfo_67);
#line 873 "modes.m"
                {
#line 873 "modes.m"
                  check_hlds__modes__NewGoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 873 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 873 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 1) = ((MR_Box) (check_hlds__modes__Disjuncts_49));
#line 873 "modes.m"
                }
#line 867 "modes.m"
              }
#line 874 "modes.m"
            else
#line 875 "modes.m"
              {
#line 875 "modes.m"
                MR_Word check_hlds__modes__TypeCtorInfo_136_136;
#line 875 "modes.m"
                MR_Word check_hlds__modes__SwitchVar_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 0)));
#line 875 "modes.m"
                MR_Word check_hlds__modes__CanFail_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 1)));
#line 875 "modes.m"
                MR_Word check_hlds__modes__Cases1_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 2)));
#line 875 "modes.m"
                MR_Word check_hlds__modes__Cases_54;
#line 875 "modes.m"
                MR_Word check_hlds__modes__V_91_91;
#line 876 "modes.m"
                MR_Box check_hlds__modes__conv5_STATE_VARIABLE_ModeInfo_67;

#line 877 "modes.m"
                {
#line 877 "modes.m"
                  check_hlds__modes__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 877 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_4[1]));
#line 877 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_3));
#line 877 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 877 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_30));
#line 877 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 4) = ((MR_Box) (check_hlds__modes__HeadVars_25));
#line 877 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 5) = ((MR_Box) (check_hlds__modes__InstMap0_26));
#line 877 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_27));
#line 877 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 7) = ((MR_Box) (check_hlds__modes__SwitchVar_51));
#line 877 "modes.m"
                }
#line 5426 "check_hlds.modes.c"
                check_hlds__modes__TypeCtorInfo_136_136 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 876 "modes.m"
                {
#line 876 "modes.m"
                  mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_136_136, check_hlds__modes__TypeCtorInfo_136_136, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_91_91, check_hlds__modes__Cases1_53, &check_hlds__modes__Cases_54, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79)), &check_hlds__modes__conv5_STATE_VARIABLE_ModeInfo_67);
                }
#line 876 "modes.m"
                *check_hlds__modes__STATE_VARIABLE_ModeInfo_67 = ((MR_Word) check_hlds__modes__conv5_STATE_VARIABLE_ModeInfo_67);
#line 880 "modes.m"
                {
#line 880 "modes.m"
                  check_hlds__modes__NewGoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 880 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 880 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 1) = ((MR_Box) (check_hlds__modes__SwitchVar_51));
#line 880 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 2) = ((MR_Box) (check_hlds__modes__CanFail_52));
#line 880 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 3) = ((MR_Box) (check_hlds__modes__Cases_54));
#line 880 "modes.m"
                }
#line 875 "modes.m"
              }
#line 882 "modes.m"
            break;
#line 882 "modes.m"
          case (MR_Integer) 1:
#line 883 "modes.m"
            {
#line 883 "modes.m"
              MR_Word check_hlds__modes__NondetLiveVars0_55;
#line 883 "modes.m"
              MR_Word check_hlds__modes__Detism_56;
#line 883 "modes.m"
              MR_Word check_hlds__modes__NonLocals_57;
#line 883 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_82_82;
#line 887 "modes.m"
              MR_Word check_hlds__modes__V_153_153;
#line 887 "modes.m"
              MR_Word check_hlds__modes__V_58_58;

#line 884 "modes.m"
              {
#line 884 "modes.m"
                check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79, &check_hlds__modes__NondetLiveVars0_55);
              }
#line 885 "modes.m"
              {
#line 885 "modes.m"
                check_hlds__modes__Detism_56 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__modes__BodyGoalInfo0_32);
              }
#line 886 "modes.m"
              {
#line 886 "modes.m"
                check_hlds__modes__NonLocals_57 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modes__BodyGoalInfo0_32);
              }
#line 887 "modes.m"
              {
#line 887 "modes.m"
                parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modes__Detism_56, &check_hlds__modes__V_58_58, &check_hlds__modes__V_153_153);
              }
#line 887 "modes.m"
              check_hlds__modes__succeeded = ((MR_Integer) 3 == check_hlds__modes__V_153_153);
#line 889 "modes.m"
              if (check_hlds__modes__succeeded)
#line 889 "modes.m"
                check_hlds__modes__STATE_VARIABLE_ModeInfo_82_82 = check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79;
#line 889 "modes.m"
              else
#line 890 "modes.m"
                {
#line 890 "modes.m"
                  MR_Word check_hlds__modes__V_81_81;

#line 890 "modes.m"
                  {
#line 890 "modes.m"
                    check_hlds__modes__V_81_81 = mercury__bag__init_0_f_0((MR_Word) &check_hlds__modes_scalar_common_1[1]);
                  }
#line 890 "modes.m"
                  {
#line 890 "modes.m"
                    check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__modes__V_81_81, check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79, &check_hlds__modes__STATE_VARIABLE_ModeInfo_82_82);
                  }
#line 890 "modes.m"
                }
#line 908 "modes.m"
              if (((MR_tag((MR_Word) check_hlds__modes__ClausesForm0_36)) == (MR_mktag((MR_Integer) 0))))
#line 893 "modes.m"
                {
#line 893 "modes.m"
                  MR_Word check_hlds__modes__TypeCtorInfo_143_143;
#line 893 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_88_88;
#line 893 "modes.m"
                  MR_Word check_hlds__modes__V_89_89;
#line 893 "modes.m"
                  MR_Word check_hlds__modes__Disjuncts1_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__ClausesForm0_36, (MR_Integer) 0)));
#line 893 "modes.m"
                  MR_Word check_hlds__modes__Disjuncts2_103;
#line 893 "modes.m"
                  MR_Word check_hlds__modes__Disjuncts_104;
#line 895 "modes.m"
                  MR_Word check_hlds__modes__V_154_154;
#line 895 "modes.m"
                  MR_Word check_hlds__modes__V_59_59;
#line 902 "modes.m"
                  MR_Box check_hlds__modes__conv8_STATE_VARIABLE_ModeInfo_67;

#line 894 "modes.m"
                  {
#line 894 "modes.m"
                    check_hlds__modes__Disjuncts2_103 = hlds__goal_util__flatten_disjs_1_f_0(check_hlds__modes__Disjuncts1_102);
                  }
#line 895 "modes.m"
                  {
#line 895 "modes.m"
                    parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modes__Detism_56, &check_hlds__modes__V_59_59, &check_hlds__modes__V_154_154);
                  }
#line 895 "modes.m"
                  check_hlds__modes__succeeded = ((MR_Integer) 3 == check_hlds__modes__V_154_154);
#line 899 "modes.m"
                  if (check_hlds__modes__succeeded)
#line 896 "modes.m"
                    {
#line 896 "modes.m"
                      MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86;
#line 896 "modes.m"
                      MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_87_87;

#line 896 "modes.m"
                      {
#line 896 "modes.m"
                        check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__modes__NonLocals_57, check_hlds__modes__STATE_VARIABLE_ModeInfo_82_82, &check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86);
                      }
#line 897 "modes.m"
                      {
#line 897 "modes.m"
                        check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86, &check_hlds__modes__STATE_VARIABLE_ModeInfo_87_87);
                      }
#line 898 "modes.m"
                      {
#line 898 "modes.m"
                        check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modes__NonLocals_57, check_hlds__modes__STATE_VARIABLE_ModeInfo_87_87, &check_hlds__modes__STATE_VARIABLE_ModeInfo_88_88);
                      }
#line 896 "modes.m"
                    }
#line 899 "modes.m"
                  else
#line 899 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_ModeInfo_88_88 = check_hlds__modes__STATE_VARIABLE_ModeInfo_82_82;
#line 903 "modes.m"
                  {
#line 903 "modes.m"
                    check_hlds__modes__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 903 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_8[0]));
#line 903 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_4));
#line 903 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 903 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_30));
#line 903 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 4) = ((MR_Box) (check_hlds__modes__HeadVars_25));
#line 903 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 5) = ((MR_Box) (check_hlds__modes__InstMap0_26));
#line 903 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_27));
#line 903 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 7) = ((MR_Box) (check_hlds__modes__Detism_56));
#line 903 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 8) = ((MR_Box) (check_hlds__modes__NonLocals_57));
#line 903 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 9) = ((MR_Box) (check_hlds__modes__NondetLiveVars0_55));
#line 903 "modes.m"
                  }
#line 5606 "check_hlds.modes.c"
                  check_hlds__modes__TypeCtorInfo_143_143 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 902 "modes.m"
                  {
#line 902 "modes.m"
                    mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_143_143, check_hlds__modes__TypeCtorInfo_143_143, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_89_89, check_hlds__modes__Disjuncts2_103, &check_hlds__modes__Disjuncts_104, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_88_88)), &check_hlds__modes__conv8_STATE_VARIABLE_ModeInfo_67);
                  }
#line 902 "modes.m"
                  *check_hlds__modes__STATE_VARIABLE_ModeInfo_67 = ((MR_Word) check_hlds__modes__conv8_STATE_VARIABLE_ModeInfo_67);
#line 907 "modes.m"
                  {
#line 907 "modes.m"
                    check_hlds__modes__NewGoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 907 "modes.m"
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 907 "modes.m"
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 1) = ((MR_Box) (check_hlds__modes__Disjuncts_104));
#line 907 "modes.m"
                  }
#line 893 "modes.m"
                }
#line 908 "modes.m"
              else
#line 909 "modes.m"
                {
#line 909 "modes.m"
                  MR_Word check_hlds__modes__TypeCtorInfo_149_149;
#line 909 "modes.m"
                  MR_Word check_hlds__modes__V_83_83;
#line 909 "modes.m"
                  MR_Word check_hlds__modes__SwitchVar_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 0)));
#line 909 "modes.m"
                  MR_Word check_hlds__modes__CanFail_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 1)));
#line 909 "modes.m"
                  MR_Word check_hlds__modes__Cases1_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 2)));
#line 909 "modes.m"
                  MR_Word check_hlds__modes__Cases_108;
#line 910 "modes.m"
                  MR_Box check_hlds__modes__conv11_STATE_VARIABLE_ModeInfo_67;

#line 911 "modes.m"
                  {
#line 911 "modes.m"
                    check_hlds__modes__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 911 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_83_83, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_4[1]));
#line 911 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_83_83, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_5));
#line 911 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 911 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_83_83, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_30));
#line 911 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_83_83, 4) = ((MR_Box) (check_hlds__modes__HeadVars_25));
#line 911 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_83_83, 5) = ((MR_Box) (check_hlds__modes__InstMap0_26));
#line 911 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_83_83, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_27));
#line 911 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_83_83, 7) = ((MR_Box) (check_hlds__modes__SwitchVar_105));
#line 911 "modes.m"
                  }
#line 5668 "check_hlds.modes.c"
                  check_hlds__modes__TypeCtorInfo_149_149 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 910 "modes.m"
                  {
#line 910 "modes.m"
                    mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_149_149, check_hlds__modes__TypeCtorInfo_149_149, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_83_83, check_hlds__modes__Cases1_107, &check_hlds__modes__Cases_108, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_82_82)), &check_hlds__modes__conv11_STATE_VARIABLE_ModeInfo_67);
                  }
#line 910 "modes.m"
                  *check_hlds__modes__STATE_VARIABLE_ModeInfo_67 = ((MR_Word) check_hlds__modes__conv11_STATE_VARIABLE_ModeInfo_67);
#line 914 "modes.m"
                  {
#line 914 "modes.m"
                    check_hlds__modes__NewGoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 914 "modes.m"
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 914 "modes.m"
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 1) = ((MR_Box) (check_hlds__modes__SwitchVar_105));
#line 914 "modes.m"
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 2) = ((MR_Box) (check_hlds__modes__CanFail_106));
#line 914 "modes.m"
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 3) = ((MR_Box) (check_hlds__modes__Cases_108));
#line 914 "modes.m"
                  }
#line 909 "modes.m"
                }
#line 883 "modes.m"
            }
#line 882 "modes.m"
            break;
#line 882 "modes.m"
        }
#line 919 "modes.m"
        {
#line 919 "modes.m"
          mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modes__HeadVars_25, check_hlds__modes__ArgFinalInsts0_27, &check_hlds__modes__HeadVarFinalInsts_60);
        }
#line 921 "modes.m"
        {
#line 921 "modes.m"
          check_hlds__modes__FinalInstMap_61 = hlds__instmap__instmap_from_assoc_list_1_f_0(check_hlds__modes__HeadVarFinalInsts_60);
        }
#line 922 "modes.m"
        {
#line 922 "modes.m"
          hlds__instmap__compute_instmap_delta_4_p_0(check_hlds__modes__InstMap0_26, check_hlds__modes__FinalInstMap_61, check_hlds__modes__BodyNonLocals_42, &check_hlds__modes__DeltaInstMap_62);
        }
#line 924 "modes.m"
        {
#line 924 "modes.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modes__DeltaInstMap_62, check_hlds__modes__BodyGoalInfo0_32, &check_hlds__modes__BodyGoalInfo_63);
        }
#line 925 "modes.m"
        {
#line 925 "modes.m"
          MR_Word base;
#line 925 "modes.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 925 "modes.m"
          *check_hlds__modes__Body_24 = base;
#line 925 "modes.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__NewGoalExpr_50));
#line 925 "modes.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__BodyGoalInfo_63));
#line 925 "modes.m"
        }
#line 926 "modes.m"
        *check_hlds__modes__ArgFinalInsts_28 = check_hlds__modes__ArgFinalInsts0_27;
#line 855 "modes.m"
      }
#line 927 "modes.m"
    else
#line 929 "modes.m"
      {
#line 929 "modes.m"
        MR_Word check_hlds__modes__Body1_64;
#line 929 "modes.m"
        MR_Word check_hlds__modes__GroundMatchesBound_65;
#line 929 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_96_96;
#line 929 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98;
#line 929 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_100_100;
#line 929 "modes.m"
        MR_Word check_hlds__modes__ModuleInfo_184;
#line 929 "modes.m"
        MR_Word check_hlds__modes__Errors_185;
#line 929 "modes.m"
        MR_Word check_hlds__modes__Changed0_188;
#line 929 "modes.m"
        MR_Word check_hlds__modes__InstMap_189;
#line 929 "modes.m"
        MR_Word check_hlds__modes__VarTypes_190;
#line 929 "modes.m"
        MR_Word check_hlds__modes__VarFinalInsts1_191;
#line 929 "modes.m"
        MR_Word check_hlds__modes__ArgTypes_192;

#line 929 "modes.m"
        {
#line 929 "modes.m"
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_30, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66, &check_hlds__modes__STATE_VARIABLE_ModeInfo_96_96);
        }
#line 933 "modes.m"
#line 933 "modes.m"
        switch (check_hlds__modes__WhatToCheck_17) {
#line 933 "modes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 933 "modes.m"
          case (MR_Integer) 0:
#line 932 "modes.m"
            {
#line 932 "modes.m"
              check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modes__Body0_23, &check_hlds__modes__Body1_64, check_hlds__modes__STATE_VARIABLE_ModeInfo_96_96, &check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98);
            }
#line 933 "modes.m"
            break;
#line 933 "modes.m"
          case (MR_Integer) 1:
#line 935 "modes.m"
            {
#line 935 "modes.m"
              check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modes__Body0_23, &check_hlds__modes__Body1_64, check_hlds__modes__STATE_VARIABLE_ModeInfo_96_96, &check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98);
            }
#line 933 "modes.m"
            break;
#line 933 "modes.m"
        }
#line 937 "modes.m"
        {
#line 937 "modes.m"
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_30, check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modes__STATE_VARIABLE_ModeInfo_100_100);
        }
#line 943 "modes.m"
#line 943 "modes.m"
        switch (check_hlds__modes__IsUnifyPred_20) {
#line 943 "modes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 943 "modes.m"
          case (MR_Integer) 0:
#line 942 "modes.m"
            check_hlds__modes__GroundMatchesBound_65 = (MR_Integer) 0;
#line 943 "modes.m"
            break;
#line 943 "modes.m"
          case (MR_Integer) 1:
#line 945 "modes.m"
            check_hlds__modes__GroundMatchesBound_65 = (MR_Integer) 1;
#line 943 "modes.m"
            break;
#line 943 "modes.m"
        }
#line 1239 "modes.m"
        {
#line 1239 "modes.m"
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_100_100, &check_hlds__modes__ModuleInfo_184);
        }
#line 1240 "modes.m"
        {
#line 1240 "modes.m"
          check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_100_100, &check_hlds__modes__Errors_185);
        }
#line 1254 "modes.m"
        if ((check_hlds__modes__Errors_185 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1255 "modes.m"
          {
#line 1256 "modes.m"
            check_hlds__modes__Changed0_188 = (MR_Integer) 0;
#line 1257 "modes.m"
            {
#line 1257 "modes.m"
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_100_100, &check_hlds__modes__InstMap_189);
            }
#line 1255 "modes.m"
          }
#line 1254 "modes.m"
        else
#line 1248 "modes.m"
          {
#line 1252 "modes.m"
            check_hlds__modes__Changed0_188 = (MR_Integer) 1;
#line 1253 "modes.m"
            {
#line 1253 "modes.m"
              hlds__instmap__init_unreachable_1_p_0(&check_hlds__modes__InstMap_189);
            }
#line 1248 "modes.m"
          }
#line 1259 "modes.m"
        {
#line 1259 "modes.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_100_100, &check_hlds__modes__VarTypes_190);
        }
#line 1260 "modes.m"
        {
#line 1260 "modes.m"
          hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modes__InstMap_189, check_hlds__modes__HeadVars_25, &check_hlds__modes__VarFinalInsts1_191);
        }
#line 1261 "modes.m"
        {
#line 1261 "modes.m"
          hlds__vartypes__lookup_var_types_3_p_0(check_hlds__modes__VarTypes_190, check_hlds__modes__HeadVars_25, &check_hlds__modes__ArgTypes_192);
        }
#line 1280 "modes.m"
#line 1280 "modes.m"
        switch (check_hlds__modes__InferModes_18) {
#line 1280 "modes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1280 "modes.m"
          case (MR_Integer) 0:
#line 1281 "modes.m"
            {
#line 1282 "modes.m"
              MR_Word check_hlds__modes___Changed1_201;

#line 1282 "modes.m"
              {
#line 1282 "modes.m"
                check_hlds__modes__check_final_insts_13_p_0(check_hlds__modes__HeadVars_25, check_hlds__modes__ArgFinalInsts0_27, check_hlds__modes__VarFinalInsts1_191, check_hlds__modes__InferModes_18, check_hlds__modes__GroundMatchesBound_65, (MR_Integer) 1, check_hlds__modes__ModuleInfo_184, check_hlds__modes__Body1_64, check_hlds__modes__Body_24, (MR_Integer) 0, &check_hlds__modes___Changed1_201, check_hlds__modes__STATE_VARIABLE_ModeInfo_100_100, check_hlds__modes__STATE_VARIABLE_ModeInfo_67);
              }
#line 1285 "modes.m"
              *check_hlds__modes__ArgFinalInsts_28 = check_hlds__modes__ArgFinalInsts0_27;
#line 1281 "modes.m"
            }
#line 1280 "modes.m"
            break;
#line 1280 "modes.m"
          case (MR_Integer) 1:
#line 1263 "modes.m"
            {
#line 1263 "modes.m"
              MR_Word check_hlds__modes__VarFinalInsts2_193;
#line 1263 "modes.m"
              MR_Word check_hlds__modes__PredId_194;
#line 1263 "modes.m"
              MR_Integer check_hlds__modes__ProcId_195;
#line 1263 "modes.m"
              MR_Word check_hlds__modes__ProcInfo_196;
#line 1263 "modes.m"
              MR_Word check_hlds__modes__ArgLives_197;
#line 1263 "modes.m"
              MR_Word check_hlds__modes__Changed1_198;
#line 1263 "modes.m"
              MR_Word check_hlds__modes__Changed2_199;
#line 1263 "modes.m"
              MR_Word check_hlds__modes__Changed_200;
#line 1263 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_43_207;
#line 1263 "modes.m"
              MR_Word check_hlds__modes__V_208_208;
#line 1263 "modes.m"
              MR_Word check_hlds__modes__V_209_209;
#line 1263 "modes.m"
              MR_Word check_hlds__modes__V_210_210;

#line 1264 "modes.m"
              {
#line 1264 "modes.m"
                check_hlds__mode_util__normalise_insts_4_p_0(check_hlds__modes__ModuleInfo_184, check_hlds__modes__ArgTypes_192, check_hlds__modes__VarFinalInsts1_191, &check_hlds__modes__VarFinalInsts2_193);
              }
#line 1269 "modes.m"
              {
#line 1269 "modes.m"
                check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_100_100, &check_hlds__modes__PredId_194);
              }
#line 1270 "modes.m"
              {
#line 1270 "modes.m"
                check_hlds__mode_info__mode_info_get_proc_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_100_100, &check_hlds__modes__ProcId_195);
              }
#line 1271 "modes.m"
              {
#line 1271 "modes.m"
                hlds__hlds_module__module_info_proc_info_4_p_0(check_hlds__modes__ModuleInfo_184, check_hlds__modes__PredId_194, check_hlds__modes__ProcId_195, &check_hlds__modes__ProcInfo_196);
              }
#line 1272 "modes.m"
              {
#line 1272 "modes.m"
                hlds__hlds_pred__proc_info_arglives_3_p_0(check_hlds__modes__ProcInfo_196, check_hlds__modes__ModuleInfo_184, &check_hlds__modes__ArgLives_197);
              }
#line 1273 "modes.m"
              {
#line 1273 "modes.m"
                check_hlds__modes__maybe_clobber_insts_3_p_0(check_hlds__modes__VarFinalInsts2_193, check_hlds__modes__ArgLives_197, check_hlds__modes__ArgFinalInsts_28);
              }
#line 1274 "modes.m"
              {
#line 1274 "modes.m"
                check_hlds__modes__check_final_insts_13_p_0(check_hlds__modes__HeadVars_25, check_hlds__modes__ArgFinalInsts0_27, *check_hlds__modes__ArgFinalInsts_28, check_hlds__modes__InferModes_18, check_hlds__modes__GroundMatchesBound_65, (MR_Integer) 1, check_hlds__modes__ModuleInfo_184, check_hlds__modes__Body1_64, check_hlds__modes__Body_24, (MR_Integer) 0, &check_hlds__modes__Changed1_198, check_hlds__modes__STATE_VARIABLE_ModeInfo_100_100, &check_hlds__modes__STATE_VARIABLE_ModeInfo_43_207);
              }
#line 1277 "modes.m"
              {
#line 1277 "modes.m"
                check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_43_207, &check_hlds__modes__Changed2_199);
              }
#line 1278 "modes.m"
              {
#line 1278 "modes.m"
                check_hlds__modes__V_210_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "modes.m"
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_210_210, 0) = ((MR_Box) (check_hlds__modes__Changed2_199));
#line 1278 "modes.m"
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_210_210, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1278 "modes.m"
              }
#line 1278 "modes.m"
              {
#line 1278 "modes.m"
                check_hlds__modes__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "modes.m"
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_209_209, 0) = ((MR_Box) (check_hlds__modes__Changed1_198));
#line 1278 "modes.m"
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_209_209, 1) = ((MR_Box) (check_hlds__modes__V_210_210));
#line 1278 "modes.m"
              }
#line 1278 "modes.m"
              {
#line 1278 "modes.m"
                check_hlds__modes__V_208_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "modes.m"
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_208_208, 0) = ((MR_Box) (check_hlds__modes__Changed0_188));
#line 1278 "modes.m"
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_208_208, 1) = ((MR_Box) (check_hlds__modes__V_209_209));
#line 1278 "modes.m"
              }
#line 1278 "modes.m"
              {
#line 1278 "modes.m"
                mercury__bool__or_list_2_p_0(check_hlds__modes__V_208_208, &check_hlds__modes__Changed_200);
              }
#line 1279 "modes.m"
              {
#line 1279 "modes.m"
                check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(check_hlds__modes__Changed_200, check_hlds__modes__STATE_VARIABLE_ModeInfo_43_207, check_hlds__modes__STATE_VARIABLE_ModeInfo_67);
#line 1279 "modes.m"
                return;
              }
#line 1263 "modes.m"
            }
#line 1280 "modes.m"
            break;
#line 1280 "modes.m"
        }
#line 929 "modes.m"
      }
#line 831 "modes.m"
  }
#line 823 "modes.m"
}

#line 747 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_2(
#line 747 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 747 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1)
#line 747 "modes.m"
{
#line 747 "modes.m"
  {
#line 747 "modes.m"
    MR_Box check_hlds__modes__wrapper_arg_2;
#line 747 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 747 "modes.m"
    MR_Word check_hlds__modes__conv1_HeadVar__3_3;

#line 747 "modes.m"
    {
#line 747 "modes.m"
      check_hlds__modes__conv1_HeadVar__3_3 = check_hlds__mode_errors__mode_warning_info_to_spec_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modes__wrapper_arg_1));
    }
#line 747 "modes.m"
    check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv1_HeadVar__3_3));
#line 747 "modes.m"
    return check_hlds__modes__wrapper_arg_2;
#line 747 "modes.m"
  }
#line 747 "modes.m"
}

#line 727 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_1(
#line 727 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 727 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1)
#line 727 "modes.m"
{
#line 727 "modes.m"
  {
#line 727 "modes.m"
    MR_Box check_hlds__modes__wrapper_arg_2;
#line 727 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 727 "modes.m"
    MR_Word check_hlds__modes__conv0_HeadVar__3_3;

#line 727 "modes.m"
    {
#line 727 "modes.m"
      check_hlds__modes__conv0_HeadVar__3_3 = check_hlds__mode_errors__mode_error_info_to_spec_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modes__wrapper_arg_1));
    }
#line 727 "modes.m"
    check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv0_HeadVar__3_3));
#line 727 "modes.m"
    return check_hlds__modes__wrapper_arg_2;
#line 727 "modes.m"
  }
#line 727 "modes.m"
}

#line 625 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0(
#line 625 "modes.m"
  MR_Integer check_hlds__modes__ProcId_10,
#line 625 "modes.m"
  MR_Word check_hlds__modes__PredId_11,
#line 625 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_12,
#line 625 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_13,
#line 625 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27,
#line 625 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_28,
#line 625 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_29,
#line 625 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_30,
#line 625 "modes.m"
  MR_Word * check_hlds__modes__Specs_16)
#line 625 "modes.m"
{
#line 630 "modes.m"
  {
#line 630 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 630 "modes.m"
    MR_Word check_hlds__modes__ProcInfo0_18;
#line 630 "modes.m"
    MR_Word check_hlds__modes__CanProcess_19;
#line 631 "modes.m"
    MR_Word check_hlds__modes___PredInfo0_17;

#line 631 "modes.m"
    {
#line 631 "modes.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, &check_hlds__modes___PredInfo0_17, &check_hlds__modes__ProcInfo0_18);
    }
#line 633 "modes.m"
    {
#line 633 "modes.m"
      hlds__hlds_pred__proc_info_get_can_process_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__CanProcess_19);
    }
#line 637 "modes.m"
#line 637 "modes.m"
    switch (check_hlds__modes__CanProcess_19) {
#line 637 "modes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 637 "modes.m"
      case (MR_Integer) 0:
#line 635 "modes.m"
        {
#line 636 "modes.m"
          *check_hlds__modes__Specs_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 635 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_28 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27;
#line 635 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Changed_30 = check_hlds__modes__STATE_VARIABLE_Changed_0_29;
#line 635 "modes.m"
        }
#line 637 "modes.m"
        break;
#line 637 "modes.m"
      case (MR_Integer) 1:
#line 638 "modes.m"
        {
#line 638 "modes.m"
          MR_Word check_hlds__modes__TypeCtorInfo_34_34;
#line 638 "modes.m"
          MR_Word check_hlds__modes__TypeCtorInfo_35_35;
#line 638 "modes.m"
          MR_Word check_hlds__modes__ProcInfo_20;
#line 638 "modes.m"
          MR_Word check_hlds__modes__Preds1_21;
#line 638 "modes.m"
          MR_Word check_hlds__modes__PredInfo1_22;
#line 638 "modes.m"
          MR_Word check_hlds__modes__Procs1_23;
#line 638 "modes.m"
          MR_Word check_hlds__modes__Procs_24;
#line 638 "modes.m"
          MR_Word check_hlds__modes__PredInfo_25;
#line 638 "modes.m"
          MR_Word check_hlds__modes__Preds_26;
#line 638 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31;
#line 638 "modes.m"
          MR_Word check_hlds__modes__HeadVars_52;
#line 638 "modes.m"
          MR_Word check_hlds__modes__ArgModes0_53;
#line 638 "modes.m"
          MR_Word check_hlds__modes__ArgLives0_54;
#line 638 "modes.m"
          MR_Word check_hlds__modes__Body0_55;
#line 638 "modes.m"
          MR_Word check_hlds__modes__PredInfo_56;
#line 638 "modes.m"
          MR_Word check_hlds__modes__ClausesInfo_57;
#line 638 "modes.m"
          MR_Word check_hlds__modes__ClausesRep_58;
#line 638 "modes.m"
          MR_Word check_hlds__modes__Clauses_60;
#line 638 "modes.m"
          MR_Word check_hlds__modes__Context_63;
#line 638 "modes.m"
          MR_Word check_hlds__modes__ArgInitialInsts_65;
#line 638 "modes.m"
          MR_Word check_hlds__modes__InstAL_66;
#line 638 "modes.m"
          MR_Word check_hlds__modes__InstMap0_67;
#line 638 "modes.m"
          MR_Word check_hlds__modes__LiveVarsList_68;
#line 638 "modes.m"
          MR_Word check_hlds__modes__LiveVars_69;
#line 638 "modes.m"
          MR_Word check_hlds__modes__HeadInstVars_70;
#line 638 "modes.m"
          MR_Word check_hlds__modes__Markers_71;
#line 638 "modes.m"
          MR_Word check_hlds__modes__InferModes_72;
#line 638 "modes.m"
          MR_Word check_hlds__modes__IsUnifyPred_73;
#line 638 "modes.m"
          MR_Word check_hlds__modes__ArgFinalInsts0_74;
#line 638 "modes.m"
          MR_Word check_hlds__modes__Body_75;
#line 638 "modes.m"
          MR_Word check_hlds__modes__ArgFinalInsts_76;
#line 638 "modes.m"
          MR_Word check_hlds__modes__ModeErrors_77;
#line 638 "modes.m"
          MR_Word check_hlds__modes__ArgModes_85;
#line 638 "modes.m"
          MR_Word check_hlds__modes__VarSet_86;
#line 638 "modes.m"
          MR_Word check_hlds__modes__VarTypes_87;
#line 638 "modes.m"
          MR_Word check_hlds__modes__NeedToRequantify_88;
#line 638 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_63_89;
#line 638 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90;
#line 638 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92;
#line 638 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_71_97;
#line 638 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_74_100;
#line 638 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_75_101;
#line 638 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_76_102;
#line 638 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_77_103;
#line 638 "modes.m"
          MR_Word check_hlds__modes__Body1_135;
#line 638 "modes.m"
          MR_Word check_hlds__modes__ArgFinalInsts1_136;
#line 638 "modes.m"
          MR_Word check_hlds__modes__ModeInfo1_137;
#line 638 "modes.m"
          MR_Word check_hlds__modes__ModeErrors1_138;
#line 667 "modes.m"
          MR_Word check_hlds__modes___ItemNumbers_59;
#line 642 "modes.m"
          MR_Box check_hlds__modes__conv2_PredInfo1_22;

#line 658 "modes.m"
          {
#line 658 "modes.m"
            hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__HeadVars_52);
          }
#line 659 "modes.m"
          {
#line 659 "modes.m"
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__ArgModes0_53);
          }
#line 660 "modes.m"
          {
#line 660 "modes.m"
            hlds__hlds_pred__proc_info_arglives_3_p_0(check_hlds__modes__ProcInfo0_18, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, &check_hlds__modes__ArgLives0_54);
          }
#line 661 "modes.m"
          {
#line 661 "modes.m"
            hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__Body0_55);
          }
#line 665 "modes.m"
          {
#line 665 "modes.m"
            hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__PredId_11, &check_hlds__modes__PredInfo_56);
          }
#line 666 "modes.m"
          {
#line 666 "modes.m"
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__modes__PredInfo_56, &check_hlds__modes__ClausesInfo_57);
          }
#line 667 "modes.m"
          {
#line 667 "modes.m"
            hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__modes__ClausesInfo_57, &check_hlds__modes__ClausesRep_58, &check_hlds__modes___ItemNumbers_59);
          }
#line 668 "modes.m"
          {
#line 668 "modes.m"
            hlds__hlds_clauses__get_clause_list_2_p_0(check_hlds__modes__ClausesRep_58, &check_hlds__modes__Clauses_60);
          }
#line 672 "modes.m"
          if ((check_hlds__modes__Clauses_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 674 "modes.m"
            {
#line 674 "modes.m"
              hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__Context_63);
            }
#line 672 "modes.m"
          else
#line 670 "modes.m"
            {
#line 670 "modes.m"
              MR_Word check_hlds__modes__FirstClause_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Clauses_60, (MR_Integer) 0)));
#line 670 "modes.m"
              MR_Word check_hlds__modes__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Clauses_60, (MR_Integer) 1)));
#line 671 "modes.m"
              MR_Word check_hlds__modes__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_61, (MR_Integer) 0)));
#line 671 "modes.m"
              MR_Word check_hlds__modes__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_61, (MR_Integer) 1)));
#line 671 "modes.m"
              MR_Word check_hlds__modes__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_61, (MR_Integer) 2)));
#line 671 "modes.m"
              MR_Word check_hlds__modes__V_109_109;

#line 671 "modes.m"
              check_hlds__modes__Context_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_61, (MR_Integer) 3)));
#line 671 "modes.m"
              check_hlds__modes__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_61, (MR_Integer) 4)));
#line 670 "modes.m"
            }
#line 683 "modes.m"
          {
#line 683 "modes.m"
            check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__ArgModes0_53, &check_hlds__modes__ArgInitialInsts_65);
          }
#line 684 "modes.m"
          {
#line 684 "modes.m"
            mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modes__HeadVars_52, check_hlds__modes__ArgInitialInsts_65, &check_hlds__modes__InstAL_66);
          }
#line 685 "modes.m"
          {
#line 685 "modes.m"
            check_hlds__modes__InstMap0_67 = hlds__instmap__instmap_from_assoc_list_1_f_0(check_hlds__modes__InstAL_66);
          }
#line 689 "modes.m"
          {
#line 689 "modes.m"
            check_hlds__modecheck_util__get_live_vars_3_p_0(check_hlds__modes__HeadVars_52, check_hlds__modes__ArgLives0_54, &check_hlds__modes__LiveVarsList_68);
          }
#line 690 "modes.m"
          {
#line 690 "modes.m"
            parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modes__LiveVarsList_68, &check_hlds__modes__LiveVars_69);
          }
#line 692 "modes.m"
          {
#line 692 "modes.m"
            check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__ArgModes0_53, &check_hlds__modes__HeadInstVars_70);
          }
#line 695 "modes.m"
          {
#line 695 "modes.m"
            check_hlds__mode_info__mode_info_init_10_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, check_hlds__modes__Context_63, check_hlds__modes__LiveVars_69, check_hlds__modes__HeadInstVars_70, check_hlds__modes__InstMap0_67, check_hlds__modes__WhatToCheck_12, check_hlds__modes__MayChangeCalledProc_13, &check_hlds__modes__STATE_VARIABLE_ModeInfo_63_89);
          }
#line 698 "modes.m"
          {
#line 698 "modes.m"
            check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(check_hlds__modes__STATE_VARIABLE_Changed_0_29, check_hlds__modes__STATE_VARIABLE_ModeInfo_63_89, &check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90);
          }
#line 700 "modes.m"
          {
#line 700 "modes.m"
            hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modes__PredInfo_56, &check_hlds__modes__Markers_71);
          }
#line 701 "modes.m"
          {
#line 701 "modes.m"
            check_hlds__modes__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_71, (MR_Integer) 3);
          }
#line 703 "modes.m"
          if (check_hlds__modes__succeeded)
#line 702 "modes.m"
            check_hlds__modes__InferModes_72 = (MR_Integer) 1;
#line 703 "modes.m"
          else
#line 704 "modes.m"
            check_hlds__modes__InferModes_72 = (MR_Integer) 0;
#line 706 "modes.m"
          {
#line 706 "modes.m"
            check_hlds__modes__succeeded = hlds__hlds_pred__is_unify_pred_1_p_0(check_hlds__modes__PredInfo_56);
          }
#line 708 "modes.m"
          if (check_hlds__modes__succeeded)
#line 707 "modes.m"
            check_hlds__modes__IsUnifyPred_73 = (MR_Integer) 1;
#line 708 "modes.m"
          else
#line 709 "modes.m"
            check_hlds__modes__IsUnifyPred_73 = (MR_Integer) 0;
#line 711 "modes.m"
          {
#line 711 "modes.m"
            check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__ArgModes0_53, &check_hlds__modes__ArgFinalInsts0_74);
          }
#line 783 "modes.m"
          {
#line 783 "modes.m"
            check_hlds__modes__do_modecheck_proc_body_15_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__WhatToCheck_12, check_hlds__modes__InferModes_72, check_hlds__modes__Markers_71, check_hlds__modes__IsUnifyPred_73, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, check_hlds__modes__Body0_55, &check_hlds__modes__Body1_135, check_hlds__modes__HeadVars_52, check_hlds__modes__InstMap0_67, check_hlds__modes__ArgFinalInsts0_74, &check_hlds__modes__ArgFinalInsts1_136, check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90, &check_hlds__modes__ModeInfo1_137);
          }
#line 786 "modes.m"
          {
#line 786 "modes.m"
            check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__ModeInfo1_137, &check_hlds__modes__ModeErrors1_138);
          }
#line 792 "modes.m"
          if ((check_hlds__modes__ModeErrors1_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 788 "modes.m"
            {
#line 789 "modes.m"
              check_hlds__modes__Body_75 = check_hlds__modes__Body1_135;
#line 790 "modes.m"
              check_hlds__modes__ArgFinalInsts_76 = check_hlds__modes__ArgFinalInsts1_136;
#line 791 "modes.m"
              check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92 = check_hlds__modes__ModeInfo1_137;
#line 788 "modes.m"
            }
#line 792 "modes.m"
          else
#line 793 "modes.m"
            {
#line 793 "modes.m"
              MR_Word check_hlds__modes__HadFromGroundTerm_141;

#line 794 "modes.m"
              {
#line 794 "modes.m"
                check_hlds__mode_info__mode_info_get_had_from_ground_term_2_p_0(check_hlds__modes__ModeInfo1_137, &check_hlds__modes__HadFromGroundTerm_141);
              }
#line 813 "modes.m"
#line 813 "modes.m"
              switch (check_hlds__modes__HadFromGroundTerm_141) {
#line 813 "modes.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 813 "modes.m"
                case (MR_Integer) 1:
#line 814 "modes.m"
                  {
#line 817 "modes.m"
                    check_hlds__modes__Body_75 = check_hlds__modes__Body1_135;
#line 818 "modes.m"
                    check_hlds__modes__ArgFinalInsts_76 = check_hlds__modes__ArgFinalInsts1_136;
#line 819 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92 = check_hlds__modes__ModeInfo1_137;
#line 814 "modes.m"
                  }
#line 813 "modes.m"
                  break;
#line 813 "modes.m"
                case (MR_Integer) 0:
#line 796 "modes.m"
                  {
#line 796 "modes.m"
                    MR_Word check_hlds__modes__ModeInfo2_142;

#line 808 "modes.m"
                    {
#line 808 "modes.m"
                      check_hlds__mode_info__mode_info_set_make_ground_terms_unique_3_p_0((MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90, &check_hlds__modes__ModeInfo2_142);
                    }
#line 810 "modes.m"
                    {
#line 810 "modes.m"
                      check_hlds__modes__do_modecheck_proc_body_15_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__WhatToCheck_12, check_hlds__modes__InferModes_72, check_hlds__modes__Markers_71, check_hlds__modes__IsUnifyPred_73, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, check_hlds__modes__Body0_55, &check_hlds__modes__Body_75, check_hlds__modes__HeadVars_52, check_hlds__modes__InstMap0_67, check_hlds__modes__ArgFinalInsts0_74, &check_hlds__modes__ArgFinalInsts_76, check_hlds__modes__ModeInfo2_142, &check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92);
                    }
#line 796 "modes.m"
                  }
#line 813 "modes.m"
                  break;
#line 813 "modes.m"
              }
#line 793 "modes.m"
            }
#line 717 "modes.m"
          {
#line 717 "modes.m"
            check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92, &check_hlds__modes__ModeErrors_77);
          }
#line 725 "modes.m"
#line 725 "modes.m"
          switch (check_hlds__modes__InferModes_72) {
#line 725 "modes.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 725 "modes.m"
            case (MR_Integer) 0:
#line 726 "modes.m"
              {
#line 726 "modes.m"
                MR_Word check_hlds__modes__TypeCtorInfo_88_114 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 726 "modes.m"
                MR_Word check_hlds__modes__AllErrorSpecs_78;
#line 726 "modes.m"
                MR_Word check_hlds__modes__ErrorSpecs_81;
#line 726 "modes.m"
                MR_Word check_hlds__modes__StateVarWarningSpecs_82;
#line 726 "modes.m"
                MR_Word check_hlds__modes__ModeWarnings_83;
#line 726 "modes.m"
                MR_Word check_hlds__modes__WarningSpecs_84;
#line 726 "modes.m"
                MR_Word check_hlds__modes__V_93_93;
#line 726 "modes.m"
                MR_Word check_hlds__modes__V_95_95;
#line 726 "modes.m"
                MR_Word check_hlds__modes__V_96_96;

#line 727 "modes.m"
                {
#line 727 "modes.m"
                  check_hlds__modes__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 727 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[0]));
#line 727 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 1) = ((MR_Box) (check_hlds__modes__maybe_modecheck_proc_9_p_0_1));
#line 727 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 727 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 3) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92));
#line 727 "modes.m"
                }
#line 727 "modes.m"
                {
#line 727 "modes.m"
                  check_hlds__modes__AllErrorSpecs_78 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__modes__TypeCtorInfo_88_114, check_hlds__modes__V_93_93, check_hlds__modes__ModeErrors_77);
                }
#line 739 "modes.m"
                if ((check_hlds__modes__AllErrorSpecs_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 740 "modes.m"
                  {
#line 741 "modes.m"
                    check_hlds__modes__ErrorSpecs_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 744 "modes.m"
                    check_hlds__modes__StateVarWarningSpecs_82 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 740 "modes.m"
                  }
#line 739 "modes.m"
                else
#line 735 "modes.m"
                  {
#line 735 "modes.m"
                    MR_Word check_hlds__modes__ErrorSpec_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__AllErrorSpecs_78, (MR_Integer) 0)));
#line 735 "modes.m"
                    MR_Word check_hlds__modes__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__AllErrorSpecs_78, (MR_Integer) 1)));

#line 736 "modes.m"
                    {
#line 736 "modes.m"
                      check_hlds__modes__ErrorSpecs_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "modes.m"
                      MR_hl_field(MR_mktag(1), check_hlds__modes__ErrorSpecs_81, 0) = ((MR_Box) (check_hlds__modes__ErrorSpec_79));
#line 736 "modes.m"
                      MR_hl_field(MR_mktag(1), check_hlds__modes__ErrorSpecs_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 736 "modes.m"
                    }
#line 737 "modes.m"
                    {
#line 737 "modes.m"
                      hlds__hlds_pred__proc_info_get_statevar_warnings_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__StateVarWarningSpecs_82);
                    }
#line 735 "modes.m"
                  }
#line 746 "modes.m"
                {
#line 746 "modes.m"
                  check_hlds__mode_info__mode_info_get_warnings_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92, &check_hlds__modes__ModeWarnings_83);
                }
#line 747 "modes.m"
                {
#line 747 "modes.m"
                  check_hlds__modes__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 747 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_95_95, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[1]));
#line 747 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_95_95, 1) = ((MR_Box) (check_hlds__modes__maybe_modecheck_proc_9_p_0_2));
#line 747 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_95_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 747 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_95_95, 3) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92));
#line 747 "modes.m"
                }
#line 747 "modes.m"
                {
#line 747 "modes.m"
                  check_hlds__modes__WarningSpecs_84 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0, check_hlds__modes__TypeCtorInfo_88_114, check_hlds__modes__V_95_95, check_hlds__modes__ModeWarnings_83);
                }
#line 749 "modes.m"
                {
#line 749 "modes.m"
                  check_hlds__modes__V_96_96 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_88_114, check_hlds__modes__WarningSpecs_84, check_hlds__modes__StateVarWarningSpecs_82);
                }
#line 749 "modes.m"
                {
#line 749 "modes.m"
                  *check_hlds__modes__Specs_16 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_88_114, check_hlds__modes__ErrorSpecs_81, check_hlds__modes__V_96_96);
                }
#line 726 "modes.m"
                check_hlds__modes__STATE_VARIABLE_ProcInfo_71_97 = check_hlds__modes__ProcInfo0_18;
#line 726 "modes.m"
              }
#line 725 "modes.m"
              break;
#line 725 "modes.m"
            case (MR_Integer) 1:
#line 719 "modes.m"
              {
#line 723 "modes.m"
                {
#line 723 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_ProcInfo_71_97 = hlds__hlds_pred__f_109_111_100_101_95_101_114_114_111_114_115_32_58_61_2_f_0(check_hlds__modes__ProcInfo0_18, check_hlds__modes__ModeErrors_77);
                }
#line 724 "modes.m"
                *check_hlds__modes__Specs_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 719 "modes.m"
              }
#line 725 "modes.m"
              break;
#line 725 "modes.m"
          }
#line 754 "modes.m"
          {
#line 754 "modes.m"
            parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(check_hlds__modes__ArgInitialInsts_65, check_hlds__modes__ArgFinalInsts_76, &check_hlds__modes__ArgModes_85);
          }
#line 755 "modes.m"
          {
#line 755 "modes.m"
            check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92, check_hlds__modes__STATE_VARIABLE_Changed_30);
          }
#line 756 "modes.m"
          {
#line 756 "modes.m"
            check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31);
          }
#line 757 "modes.m"
          {
#line 757 "modes.m"
            check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92, &check_hlds__modes__VarSet_86);
          }
#line 760 "modes.m"
          {
#line 760 "modes.m"
            check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92, &check_hlds__modes__VarTypes_87);
          }
#line 761 "modes.m"
          {
#line 761 "modes.m"
            check_hlds__mode_info__mode_info_get_need_to_requantify_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92, &check_hlds__modes__NeedToRequantify_88);
          }
#line 762 "modes.m"
          {
#line 762 "modes.m"
            hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__modes__Body_75, check_hlds__modes__STATE_VARIABLE_ProcInfo_71_97, &check_hlds__modes__STATE_VARIABLE_ProcInfo_74_100);
          }
#line 763 "modes.m"
          {
#line 763 "modes.m"
            hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__modes__VarSet_86, check_hlds__modes__STATE_VARIABLE_ProcInfo_74_100, &check_hlds__modes__STATE_VARIABLE_ProcInfo_75_101);
          }
#line 764 "modes.m"
          {
#line 764 "modes.m"
            hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__modes__VarTypes_87, check_hlds__modes__STATE_VARIABLE_ProcInfo_75_101, &check_hlds__modes__STATE_VARIABLE_ProcInfo_76_102);
          }
#line 765 "modes.m"
          {
#line 765 "modes.m"
            hlds__hlds_pred__proc_info_set_argmodes_3_p_0(check_hlds__modes__ArgModes_85, check_hlds__modes__STATE_VARIABLE_ProcInfo_76_102, &check_hlds__modes__STATE_VARIABLE_ProcInfo_77_103);
          }
#line 768 "modes.m"
#line 768 "modes.m"
          switch (check_hlds__modes__NeedToRequantify_88) {
#line 768 "modes.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 768 "modes.m"
            case (MR_Integer) 1:
#line 767 "modes.m"
              check_hlds__modes__ProcInfo_20 = check_hlds__modes__STATE_VARIABLE_ProcInfo_77_103;
#line 768 "modes.m"
              break;
#line 768 "modes.m"
            case (MR_Integer) 0:
#line 769 "modes.m"
              {
#line 770 "modes.m"
                {
#line 770 "modes.m"
                  hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ProcInfo_77_103, &check_hlds__modes__ProcInfo_20);
                }
#line 769 "modes.m"
              }
#line 768 "modes.m"
              break;
#line 768 "modes.m"
          }
#line 641 "modes.m"
          {
#line 641 "modes.m"
            hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31, &check_hlds__modes__Preds1_21);
          }
#line 6700 "check_hlds.modes.c"
          check_hlds__modes__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 6702 "check_hlds.modes.c"
          check_hlds__modes__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 642 "modes.m"
          {
#line 642 "modes.m"
            mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_34_34, check_hlds__modes__TypeCtorInfo_35_35, check_hlds__modes__Preds1_21, ((MR_Box) (check_hlds__modes__PredId_11)), &check_hlds__modes__conv2_PredInfo1_22);
          }
#line 642 "modes.m"
          check_hlds__modes__PredInfo1_22 = ((MR_Word) check_hlds__modes__conv2_PredInfo1_22);
#line 643 "modes.m"
          {
#line 643 "modes.m"
            hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__PredInfo1_22, &check_hlds__modes__Procs1_23);
          }
#line 644 "modes.m"
          {
#line 644 "modes.m"
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__modes__ProcId_10, ((MR_Box) (check_hlds__modes__ProcInfo_20)), check_hlds__modes__Procs1_23, &check_hlds__modes__Procs_24);
          }
#line 645 "modes.m"
          {
#line 645 "modes.m"
            hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__modes__Procs_24, check_hlds__modes__PredInfo1_22, &check_hlds__modes__PredInfo_25);
          }
#line 646 "modes.m"
          {
#line 646 "modes.m"
            mercury__map__set_4_p_0(check_hlds__modes__TypeCtorInfo_34_34, check_hlds__modes__TypeCtorInfo_35_35, ((MR_Box) (check_hlds__modes__PredId_11)), ((MR_Box) (check_hlds__modes__PredInfo_25)), check_hlds__modes__Preds1_21, &check_hlds__modes__Preds_26);
          }
#line 647 "modes.m"
          {
#line 647 "modes.m"
            hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__Preds_26, check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31, check_hlds__modes__STATE_VARIABLE_ModuleInfo_28);
#line 647 "modes.m"
            return;
          }
#line 638 "modes.m"
        }
#line 637 "modes.m"
        break;
#line 637 "modes.m"
    }
#line 630 "modes.m"
  }
#line 625 "modes.m"
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
#line 571 "modes.m"
      return;
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
#line 572 "modes.m"
            return;
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
#line 7075 "check_hlds.modes.c"
      if ((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
#line 7077 "check_hlds.modes.c"
        {
#line 504 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_26 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25;
#line 504 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Changed_28 = check_hlds__modes__STATE_VARIABLE_Changed_0_27;
#line 504 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Specs_30 = check_hlds__modes__STATE_VARIABLE_Specs_0_29;
#line 7085 "check_hlds.modes.c"
        }
#line 7087 "check_hlds.modes.c"
      else
#line 7089 "check_hlds.modes.c"
        {
#line 7091 "check_hlds.modes.c"
          MR_Word check_hlds__modes__TypeCtorInfo_43_43;
#line 7093 "check_hlds.modes.c"
          MR_Word check_hlds__modes__ThisPredDeclSpecs_20;
#line 7095 "check_hlds.modes.c"
          MR_Word check_hlds__modes__ThisPredProcSpecs_21;
#line 7097 "check_hlds.modes.c"
          MR_Word check_hlds__modes__Globals_22;
#line 7099 "check_hlds.modes.c"
          MR_Word check_hlds__modes__ContainsError_23;
#line 7101 "check_hlds.modes.c"
          MR_Word check_hlds__modes__Statistics_24;
#line 7103 "check_hlds.modes.c"
          MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33;
#line 7105 "check_hlds.modes.c"
          MR_Word check_hlds__modes__V_36_36;
#line 7107 "check_hlds.modes.c"
          MR_Word check_hlds__modes__ProcIds_75;
#line 7109 "check_hlds.modes.c"
          MR_Word check_hlds__modes__SpecsAcc_76;
#line 7111 "check_hlds.modes.c"
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
#line 546 "modes.m"
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
#line 546 "modes.m"
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
#line 577 "modes.m"
                if ((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
#line 576 "modes.m"
                  check_hlds__modes__ThisPredDeclSpecs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 577 "modes.m"
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
#line 7237 "check_hlds.modes.c"
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
            libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_22, (MR_Integer) 56, &check_hlds__modes__Statistics_24);
          }
#line 529 "modes.m"
          {
#line 529 "modes.m"
            libs__file_util__maybe_report_stats_3_p_0(check_hlds__modes__Statistics_24);
#line 529 "modes.m"
            return;
          }
#line 7293 "check_hlds.modes.c"
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
#line 471 "modes.m"
      return;
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
#line 448 "modes.m"
    if (check_hlds__modes__succeeded)
#line 447 "modes.m"
      *check_hlds__modes__PredTable_8 = check_hlds__modes__PredTable0_7;
#line 448 "modes.m"
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
#line 7493 "check_hlds.modes.c"
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
#line 456 "modes.m"
          return;
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

#line 312 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0(
#line 312 "modes.m"
  MR_Word check_hlds__modes__PredIds_9,
#line 312 "modes.m"
  MR_Integer check_hlds__modes__MaxIterations_10,
#line 312 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_11,
#line 312 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_12,
#line 312 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31,
#line 312 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_32,
#line 312 "modes.m"
  MR_Word * check_hlds__modes__SafeToContinue_14,
#line 312 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_33)
#line 312 "modes.m"
{
#line 318 "modes.m"
  while (MR_TRUE)
#line 318 "modes.m"
    {
#line 318 "modes.m"
      /* tailcall optimized into a loop */
#line 318 "modes.m"
      {
#line 318 "modes.m"
        MR_bool check_hlds__modes__succeeded;
#line 318 "modes.m"
        MR_Word check_hlds__modes__OldPredTable0_16;
#line 318 "modes.m"
        MR_Word check_hlds__modes__Changed1_17;
#line 318 "modes.m"
        MR_Word check_hlds__modes__OldPredTable_18;
#line 318 "modes.m"
        MR_Word check_hlds__modes__Changed2_19;
#line 318 "modes.m"
        MR_Word check_hlds__modes__QueuedSpecs_20;
#line 318 "modes.m"
        MR_Word check_hlds__modes__Changed_21;
#line 318 "modes.m"
        MR_Word check_hlds__modes__Globals_22;
#line 318 "modes.m"
        MR_Word check_hlds__modes__ErrorsSoFar_23;
#line 318 "modes.m"
        MR_Word check_hlds__modes__V_34_34;
#line 318 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35;
#line 318 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_Specs_38_38;
#line 318 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39;
#line 318 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_Specs_40_40;
#line 324 "modes.m"
        MR_Box check_hlds__modes__conv5_STATE_VARIABLE_ModuleInfo_35_35;
#line 324 "modes.m"
        MR_Box check_hlds__modes__conv4_Changed1_17;
#line 324 "modes.m"
        MR_Box check_hlds__modes__conv3_STATE_VARIABLE_Specs_38_38;

#line 321 "modes.m"
        {
#line 321 "modes.m"
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
#line 353 "modes.m"
                {
#line 348 "modes.m"
                  check_hlds__modes__succeeded = (check_hlds__modes__MaxIterations_10 <= (MR_Integer) 1);
#line 353 "modes.m"
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
                        libs__globals__lookup_int_option_3_p_0(check_hlds__modes__Globals_73, (MR_Integer) 174, &check_hlds__modes__MaxIterations_74);
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
#line 353 "modes.m"
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
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_22, (MR_Integer) 60, &check_hlds__modes__DebugModes_25);
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
#line 353 "modes.m"
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
#line 318 "modes.m"
      }
#line 318 "modes.m"
      break;
#line 318 "modes.m"
    }
#line 312 "modes.m"
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
#line 1216 "modes.m"
  {
#line 1216 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1220 "modes.m"
    MR_Word check_hlds__modes___NewFinalInsts_12;

#line 1220 "modes.m"
    {
#line 1220 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_7, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts_8, &check_hlds__modes___NewFinalInsts_12, check_hlds__modes__STATE_VARIABLE_Goal_0_13, check_hlds__modes__STATE_VARIABLE_Goal_14, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_15, check_hlds__modes__STATE_VARIABLE_ModeInfo_16);
    }
#line 1216 "modes.m"
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
#line 621 "modes.m"
  {
#line 621 "modes.m"
    MR_bool check_hlds__modes__succeeded;

#line 622 "modes.m"
    {
#line 622 "modes.m"
      check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_9, check_hlds__modes__PredId_10, check_hlds__modes__WhatToCheck_11, check_hlds__modes__MayChangeCalledProc_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_16, check_hlds__modes__STATE_VARIABLE_ModuleInfo_17, (MR_Integer) 0, check_hlds__modes__Changed_15, check_hlds__modes__Specs_14);
#line 622 "modes.m"
      return;
    }
#line 621 "modes.m"
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
#line 616 "modes.m"
  {
#line 616 "modes.m"
    MR_bool check_hlds__modes__succeeded;

#line 622 "modes.m"
    {
#line 622 "modes.m"
      check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_7, check_hlds__modes__PredId_8, (MR_Integer) 0, (MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_13, (MR_Integer) 0, check_hlds__modes__Changed_11, check_hlds__modes__Specs_10);
#line 622 "modes.m"
      return;
    }
#line 616 "modes.m"
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
#line 197 "modes.m"
  {
#line 197 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 197 "modes.m"
    MR_Word check_hlds__modes__PredIds_12;
#line 197 "modes.m"
    MR_Word check_hlds__modes__Globals_13;
#line 197 "modes.m"
    MR_Integer check_hlds__modes__MaxIterations_14;
#line 197 "modes.m"
    MR_Word check_hlds__modes__SafeToContinue0_15;
#line 197 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36;
#line 197 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_Specs_37_37;

#line 198 "modes.m"
    {
#line 198 "modes.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__modes__PredIds_12);
    }
#line 199 "modes.m"
    {
#line 199 "modes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__modes__Globals_13);
    }
#line 200 "modes.m"
    {
#line 200 "modes.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__modes__Globals_13, (MR_Integer) 174, &check_hlds__modes__MaxIterations_14);
    }
#line 202 "modes.m"
    {
#line 202 "modes.m"
      check_hlds__modes__modecheck_to_fixpoint_8_p_0(check_hlds__modes__PredIds_12, check_hlds__modes__MaxIterations_14, check_hlds__modes__WhatToCheck_7, check_hlds__modes__MayChangeCalledProc_8, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36, &check_hlds__modes__SafeToContinue0_15, &check_hlds__modes__STATE_VARIABLE_Specs_37_37);
    }
#line 211 "modes.m"
#line 211 "modes.m"
    switch (check_hlds__modes__WhatToCheck_7) {
#line 211 "modes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 211 "modes.m"
      case (MR_Integer) 0:
#line 212 "modes.m"
#line 212 "modes.m"
        switch (check_hlds__modes__SafeToContinue0_15) {
#line 212 "modes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 212 "modes.m"
          case (MR_Integer) 0:
#line 220 "modes.m"
            {
#line 220 "modes.m"
              MR_Word check_hlds__modes__DelayPartialInstantiations_17;

#line 221 "modes.m"
              {
#line 221 "modes.m"
                libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_13, (MR_Integer) 277, &check_hlds__modes__DelayPartialInstantiations_17);
              }
#line 303 "modes.m"
#line 303 "modes.m"
              switch (check_hlds__modes__DelayPartialInstantiations_17) {
#line 303 "modes.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 303 "modes.m"
                case (MR_Integer) 0:
#line 304 "modes.m"
                  {
#line 305 "modes.m"
                    *check_hlds__modes__SafeToContinue_10 = (MR_Integer) 0;
#line 304 "modes.m"
                    *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36;
#line 304 "modes.m"
                    *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__STATE_VARIABLE_Specs_37_37;
#line 304 "modes.m"
                  }
#line 303 "modes.m"
                  break;
#line 303 "modes.m"
                case (MR_Integer) 1:
#line 224 "modes.m"
                  {
#line 224 "modes.m"
                    MR_Word check_hlds__modes__ChangedPreds_21;
#line 224 "modes.m"
                    MR_Word check_hlds__modes__AfterDPIModuleInfo_22;
#line 224 "modes.m"
                    MR_Word check_hlds__modes__AfterDPISafeToContinue_23;
#line 224 "modes.m"
                    MR_Word check_hlds__modes__AfterDPISpecs_24;
#line 224 "modes.m"
                    MR_Word check_hlds__modes__MaybeBeforeDPISeverity_25;
#line 224 "modes.m"
                    MR_Word check_hlds__modes__MaybeAfterDPISeverity_26;
#line 224 "modes.m"
                    MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39;

#line 228 "modes.m"
                    {
#line 228 "modes.m"
                      check_hlds__delay_partial_inst__delay_partial_inst_preds_4_p_0(check_hlds__modes__PredIds_12, &check_hlds__modes__ChangedPreds_21, check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39);
                    }
#line 231 "modes.m"
                    {
#line 231 "modes.m"
                      check_hlds__modes__modecheck_to_fixpoint_8_p_0(check_hlds__modes__ChangedPreds_21, check_hlds__modes__MaxIterations_14, check_hlds__modes__WhatToCheck_7, check_hlds__modes__MayChangeCalledProc_8, check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__AfterDPIModuleInfo_22, &check_hlds__modes__AfterDPISafeToContinue_23, &check_hlds__modes__AfterDPISpecs_24);
                    }
#line 234 "modes.m"
                    {
#line 234 "modes.m"
                      check_hlds__modes__MaybeBeforeDPISeverity_25 = parse_tree__error_util__worst_severity_in_specs_2_f_0(check_hlds__modes__Globals_13, check_hlds__modes__STATE_VARIABLE_Specs_37_37);
                    }
#line 236 "modes.m"
                    {
#line 236 "modes.m"
                      check_hlds__modes__MaybeAfterDPISeverity_26 = parse_tree__error_util__worst_severity_in_specs_2_f_0(check_hlds__modes__Globals_13, check_hlds__modes__AfterDPISpecs_24);
                    }
#line 260 "modes.m"
                    if ((check_hlds__modes__MaybeBeforeDPISeverity_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 260 "modes.m"
                      if ((check_hlds__modes__MaybeAfterDPISeverity_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 253 "modes.m"
                        {
#line 257 "modes.m"
                          *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__AfterDPISpecs_24;
#line 258 "modes.m"
                          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__AfterDPIModuleInfo_22;
#line 259 "modes.m"
                          *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__AfterDPISafeToContinue_23;
#line 253 "modes.m"
                        }
#line 260 "modes.m"
                      else
#line 261 "modes.m"
                        {
#line 264 "modes.m"
                          *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__STATE_VARIABLE_Specs_37_37;
#line 265 "modes.m"
                          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36;
#line 266 "modes.m"
                          *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__SafeToContinue0_15;
#line 261 "modes.m"
                        }
#line 260 "modes.m"
                    else
#line 260 "modes.m"
                      {
#line 260 "modes.m"
                        MR_Word check_hlds__modes__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__MaybeBeforeDPISeverity_25, (MR_Integer) 0)));

#line 260 "modes.m"
                        if ((check_hlds__modes__MaybeAfterDPISeverity_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 268 "modes.m"
                          {
#line 271 "modes.m"
                            *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__AfterDPISpecs_24;
#line 272 "modes.m"
                            *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__AfterDPIModuleInfo_22;
#line 273 "modes.m"
                            *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__AfterDPISafeToContinue_23;
#line 268 "modes.m"
                          }
#line 260 "modes.m"
                        else
#line 275 "modes.m"
                          {
#line 275 "modes.m"
                            MR_Word check_hlds__modes__AfterDPISeverity_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__MaybeAfterDPISeverity_26, (MR_Integer) 0)));
#line 275 "modes.m"
                            MR_Word check_hlds__modes__WorstSeverity_31;

#line 277 "modes.m"
                            {
#line 277 "modes.m"
                              check_hlds__modes__WorstSeverity_31 = parse_tree__error_util__worst_severity_2_f_0(check_hlds__modes__V_60_60, check_hlds__modes__AfterDPISeverity_30);
                            }
#line 293 "modes.m"
                            check_hlds__modes__succeeded = (check_hlds__modes__AfterDPISeverity_30 == check_hlds__modes__WorstSeverity_31);
#line 297 "modes.m"
                            if (check_hlds__modes__succeeded)
#line 294 "modes.m"
                              {
#line 294 "modes.m"
                                *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__STATE_VARIABLE_Specs_37_37;
#line 295 "modes.m"
                                *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36;
#line 296 "modes.m"
                                *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__SafeToContinue0_15;
#line 294 "modes.m"
                              }
#line 297 "modes.m"
                            else
#line 298 "modes.m"
                              {
#line 298 "modes.m"
                                *check_hlds__modes__STATE_VARIABLE_Specs_34 = check_hlds__modes__AfterDPISpecs_24;
#line 299 "modes.m"
                                *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__AfterDPIModuleInfo_22;
#line 300 "modes.m"
                                *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__AfterDPISafeToContinue_23;
#line 298 "modes.m"
                              }
#line 275 "modes.m"
                          }
#line 260 "modes.m"
                      }
#line 224 "modes.m"
                  }
#line 303 "modes.m"
                  break;
#line 303 "modes.m"
              }
#line 220 "modes.m"
            }
#line 212 "modes.m"
            break;
#line 212 "modes.m"
          case (MR_Integer) 1:
#line 214 "modes.m"
            {
#line 214 "modes.m"
              MR_Word check_hlds__modes__InferenceSpecs_55;

#line 215 "modes.m"
              {
#line 215 "modes.m"
                check_hlds__modes__InferenceSpecs_55 = check_hlds__mode_errors__report_mode_inference_messages_3_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36, (MR_Integer) 1, check_hlds__modes__PredIds_12);
              }
#line 217 "modes.m"
              {
#line 217 "modes.m"
                *check_hlds__modes__STATE_VARIABLE_Specs_34 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__InferenceSpecs_55, check_hlds__modes__STATE_VARIABLE_Specs_37_37);
              }
#line 218 "modes.m"
              *check_hlds__modes__SafeToContinue_10 = (MR_Integer) 1;
#line 214 "modes.m"
              *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36;
#line 214 "modes.m"
            }
#line 212 "modes.m"
            break;
#line 212 "modes.m"
        }
#line 211 "modes.m"
        break;
#line 211 "modes.m"
      case (MR_Integer) 1:
#line 205 "modes.m"
        {
#line 205 "modes.m"
          MR_Word check_hlds__modes__InferenceSpecs_16;
#line 205 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_Specs_53_53;
#line 205 "modes.m"
          MR_Word check_hlds__modes__PredIds_65;

#line 206 "modes.m"
          {
#line 206 "modes.m"
            check_hlds__modes__InferenceSpecs_16 = check_hlds__mode_errors__report_mode_inference_messages_3_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36, (MR_Integer) 0, check_hlds__modes__PredIds_12);
          }
#line 208 "modes.m"
          {
#line 208 "modes.m"
            check_hlds__modes__STATE_VARIABLE_Specs_53_53 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__InferenceSpecs_16, check_hlds__modes__STATE_VARIABLE_Specs_37_37);
          }
#line 1394 "modes.m"
          {
#line 1394 "modes.m"
            hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36, &check_hlds__modes__PredIds_65);
          }
#line 1395 "modes.m"
          {
#line 1395 "modes.m"
            check_hlds__modes__pred_check_eval_methods_4_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36, check_hlds__modes__PredIds_65, check_hlds__modes__STATE_VARIABLE_Specs_53_53, check_hlds__modes__STATE_VARIABLE_Specs_34);
          }
#line 210 "modes.m"
          *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__SafeToContinue0_15;
#line 205 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_33 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36;
#line 205 "modes.m"
        }
#line 211 "modes.m"
        break;
#line 211 "modes.m"
    }
#line 197 "modes.m"
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
#line 181 "modes.m"
  {
#line 181 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 181 "modes.m"
    MR_Word check_hlds__modes__ModuleInfo_4;
#line 181 "modes.m"
    MR_Word check_hlds__modes__SafeToContinue_5;
#line 181 "modes.m"
    MR_Word check_hlds__modes__Specs_6;
#line 181 "modes.m"
    MR_Word check_hlds__modes__Globals_7;
#line 183 "modes.m"
    MR_Word check_hlds__modes__Verbose_9;
#line 189 "modes.m"
    MR_Word check_hlds__modes__Statistics_10;

#line 182 "modes.m"
    {
#line 182 "modes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__ModuleInfo0_3, &check_hlds__modes__Globals_7);
    }
#line 184 "modes.m"
    {
#line 184 "modes.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_7, (MR_Integer) 45, &check_hlds__modes__Verbose_9);
    }
#line 185 "modes.m"
    {
#line 185 "modes.m"
      libs__file_util__maybe_write_string_4_p_0(check_hlds__modes__Verbose_9, (MR_String) "% Mode-checking clauses...\n");
    }
#line 187 "modes.m"
    {
#line 187 "modes.m"
      check_hlds__modes__check_pred_modes_6_p_0((MR_Integer) 0, (MR_Integer) 0, check_hlds__modes__ModuleInfo0_3, &check_hlds__modes__ModuleInfo_4, &check_hlds__modes__SafeToContinue_5, &check_hlds__modes__Specs_6);
    }
#line 181 "modes.m"
    {
#line 181 "modes.m"
      MR_Tuple base;
#line 181 "modes.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 181 "modes.m"
      *check_hlds__modes__HeadVar__2_2 = base;
#line 181 "modes.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__ModuleInfo_4));
#line 181 "modes.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__SafeToContinue_5));
#line 181 "modes.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modes__Specs_6));
#line 181 "modes.m"
    }
#line 190 "modes.m"
    {
#line 190 "modes.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_7, (MR_Integer) 55, &check_hlds__modes__Statistics_10);
    }
#line 191 "modes.m"
    {
#line 191 "modes.m"
      libs__file_util__maybe_report_stats_3_p_0(check_hlds__modes__Statistics_10);
#line 191 "modes.m"
      return;
    }
#line 181 "modes.m"
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
