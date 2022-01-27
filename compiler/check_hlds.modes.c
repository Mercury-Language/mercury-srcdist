/*
** Automatically generated from `modes.m'
** by the Mercury compiler,
** version rotd-2014-11-20
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
#include "mdbcomp.sym_name.mih"
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


#line 178 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 181 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 184 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 187 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 190 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 193 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 196 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 199 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 202 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 205 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 208 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 211 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_0[1];

#line 214 "check_hlds.modes.c"
static const MR_DuFunctorDesc check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0;

#line 217 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0;

#line 220 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_1[3];

#line 223 "check_hlds.modes.c"
static const MR_DuFunctorDesc check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1;

#line 226 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_0[1];

#line 229 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_1[1];

#line 232 "check_hlds.modes.c"
static const MR_DuPtagLayout check_hlds__modes__check_hlds__modes__du_ptag_ordered_clause_form_0[2];

#line 235 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_name_ordered_clause_form_0[2];

#line 238 "check_hlds.modes.c"
static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_clause_form_0[2];

#line 241 "check_hlds.modes.c"
static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_0;

#line 244 "check_hlds.modes.c"
static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_1;

#line 247 "check_hlds.modes.c"
static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_value_ordered_modes_safe_to_continue_0[2];

#line 250 "check_hlds.modes.c"
static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_name_ordered_modes_safe_to_continue_0[2];

#line 253 "check_hlds.modes.c"
static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_modes_safe_to_continue_0[2];

#line 256 "check_hlds.modes.c"
static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0_10001(
#line 259 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 261 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2);

#line 264 "check_hlds.modes.c"
static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0_10001(
#line 267 "check_hlds.modes.c"
  MR_Box * check_hlds__modes__wrapper_arg_1,
#line 269 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 271 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_3);

#line 274 "check_hlds.modes.c"
static MR_bool MR_CALL 
check_hlds__modes____Unify____modes_safe_to_continue_0_0_10001(
#line 277 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 279 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2);

#line 282 "check_hlds.modes.c"
static void MR_CALL 
check_hlds__modes____Compare____modes_safe_to_continue_0_0_10001(
#line 285 "check_hlds.modes.c"
  MR_Box * check_hlds__modes__wrapper_arg_1,
#line 287 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 289 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_3);

#line 1075 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1075__1_2_p_0(
#line 1075 "modes.m"
  MR_Word check_hlds__modes__DetismSpecs_37,
#line 1075 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_56);

#line 1105 "modes.m"
static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0(
#line 1105 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__1_1,
#line 1105 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1105 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3);

#line 1105 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0(
#line 1105 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1105 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2);

#line 1463 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_nonunique_modes_2_p_0(
#line 1463 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1463 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2);

#line 1445 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_fully_in_out_modes_2_p_0(
#line 1445 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1445 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2);

#line 1406 "modes.m"
static void MR_CALL 
check_hlds__modes__proc_check_eval_methods_5_p_0(
#line 1406 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1406 "modes.m"
  MR_Word check_hlds__modes__PredId_2,
#line 1406 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3,
#line 1406 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_4,
#line 1406 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_5);

#line 1395 "modes.m"
static void MR_CALL 
check_hlds__modes__pred_check_eval_methods_4_p_0(
#line 1395 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1395 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1395 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_3,
#line 1395 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_4);

#line 1304 "modes.m"
static void MR_CALL 
check_hlds__modes__check_final_insts_13_p_0(
#line 1304 "modes.m"
  MR_Word check_hlds__modes__Vars_14,
#line 1304 "modes.m"
  MR_Word check_hlds__modes__Insts_15,
#line 1304 "modes.m"
  MR_Word check_hlds__modes__VarInsts_16,
#line 1304 "modes.m"
  MR_Word check_hlds__modes__InferModes_17,
#line 1304 "modes.m"
  MR_Word check_hlds__modes__GroundMatchesBound_18,
#line 1304 "modes.m"
  MR_Integer check_hlds__modes__ArgNum_19,
#line 1304 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_20,
#line 1304 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Goal_0_35,
#line 1304 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Goal_36,
#line 1304 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_37,
#line 1304 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_38,
#line 1304 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39,
#line 1304 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_40);

#line 1286 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_clobber_insts_3_p_0(
#line 1286 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1286 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1286 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__3_3);

#line 1223 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_final_insts_8_p_0(
#line 1223 "modes.m"
  MR_Word check_hlds__modes__HeadVars_9,
#line 1223 "modes.m"
  MR_Word check_hlds__modes__InferModes_10,
#line 1223 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14,
#line 1223 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_FinalInsts_15,
#line 1223 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Body_0_16,
#line 1223 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Body_17,
#line 1223 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
#line 1223 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19);

#line 1178 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_switch_9_p_0(
#line 1178 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1178 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1178 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1178 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1178 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1178 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1178 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1178 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1178 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28);

#line 1158 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_disj_11_p_0(
#line 1158 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_12,
#line 1158 "modes.m"
  MR_Word check_hlds__modes__HeadVars_13,
#line 1158 "modes.m"
  MR_Word check_hlds__modes__InstMap0_14,
#line 1158 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_15,
#line 1158 "modes.m"
  MR_Word check_hlds__modes__DisjDetism_16,
#line 1158 "modes.m"
  MR_Word check_hlds__modes__DisjNonLocals_17,
#line 1158 "modes.m"
  MR_Word check_hlds__modes__NondetLiveVars0_18,
#line 1158 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_19,
#line 1158 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_20,
#line 1158 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_24,
#line 1158 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_25);

#line 1124 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_switch_9_p_0(
#line 1124 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1124 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1124 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1124 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1124 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1124 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1124 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1124 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1124 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28);

#line 1109 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_disj_8_p_0(
#line 1109 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_9,
#line 1109 "modes.m"
  MR_Word check_hlds__modes__HeadVars_10,
#line 1109 "modes.m"
  MR_Word check_hlds__modes__InstMap0_11,
#line 1109 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_12,
#line 1109 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_13,
#line 1109 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_14,
#line 1109 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
#line 1109 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19);

#line 1075 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0_1(
#line 1075 "modes.m"
  MR_Box check_hlds__modes__closure_arg);

#line 958 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0(
#line 958 "modes.m"
  MR_Word check_hlds__modes__HowToCheckGoal_8,
#line 958 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26,
#line 958 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_OldPredTable_27,
#line 958 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28,
#line 958 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_29,
#line 958 "modes.m"
  MR_Word * check_hlds__modes__Changed_11,
#line 958 "modes.m"
  MR_Word * check_hlds__modes__Specs_12);

#line 909 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_5(
#line 909 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 909 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 909 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 909 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 909 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4);

#line 901 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_4(
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

#line 875 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_3(
#line 875 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 875 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 875 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 875 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 875 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4);

#line 868 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_2(
#line 868 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 868 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 868 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 868 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 868 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4);

#line 849 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_1(
#line 849 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 849 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1);

#line 821 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0(
#line 821 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_16,
#line 821 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_17,
#line 821 "modes.m"
  MR_Word check_hlds__modes__InferModes_18,
#line 821 "modes.m"
  MR_Word check_hlds__modes__Markers_19,
#line 821 "modes.m"
  MR_Word check_hlds__modes__IsUnifyPred_20,
#line 821 "modes.m"
  MR_Word check_hlds__modes__PredId_21,
#line 821 "modes.m"
  MR_Integer check_hlds__modes__ProcId_22,
#line 821 "modes.m"
  MR_Word check_hlds__modes__Body0_23,
#line 821 "modes.m"
  MR_Word * check_hlds__modes__Body_24,
#line 821 "modes.m"
  MR_Word check_hlds__modes__HeadVars_25,
#line 821 "modes.m"
  MR_Word check_hlds__modes__InstMap0_26,
#line 821 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_27,
#line 821 "modes.m"
  MR_Word * check_hlds__modes__ArgFinalInsts_28,
#line 821 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66,
#line 821 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_67);

#line 745 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_2(
#line 745 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 745 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1);

#line 725 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_1(
#line 725 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 725 "modes.m"
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
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "bitmap.mh"



#line 1302 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1310 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1319 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 1328 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1336 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1345 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1353 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1361 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1369 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1377 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1385 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1393 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1398 "check_hlds.modes.c"
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

#line 1413 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0
  }
};

#line 1421 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_1[3] = {
  (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_can_fail_0,
  (MR_PseudoTypeInfo) &check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0
};

#line 1428 "check_hlds.modes.c"
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

#line 1443 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_0[1] = {
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0
};

#line 1448 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_1[1] = {
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1
};

#line 1453 "check_hlds.modes.c"
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

#line 1467 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_name_ordered_clause_form_0[2] = {
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0,
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1
};

#line 1473 "check_hlds.modes.c"
static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_clause_form_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1479 "check_hlds.modes.c"
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

#line 1500 "check_hlds.modes.c"
static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_0 = {
  (MR_String) "modes_safe_to_continue",
  (MR_Integer) 0
};

#line 1506 "check_hlds.modes.c"
static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_1 = {
  (MR_String) "modes_unsafe_to_continue",
  (MR_Integer) 1
};

#line 1512 "check_hlds.modes.c"
static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_value_ordered_modes_safe_to_continue_0[2] = {
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_0,
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_1
};

#line 1518 "check_hlds.modes.c"
static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_name_ordered_modes_safe_to_continue_0[2] = {
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_0,
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_1
};

#line 1524 "check_hlds.modes.c"
static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_modes_safe_to_continue_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1530 "check_hlds.modes.c"
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

#line 1551 "check_hlds.modes.c"
static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0_10001(
#line 1554 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 1556 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2)
#line 1558 "check_hlds.modes.c"
{
#line 1560 "check_hlds.modes.c"
  {
#line 1562 "check_hlds.modes.c"
    MR_bool check_hlds__modes__succeeded;

#line 1565 "check_hlds.modes.c"
    {
#line 1567 "check_hlds.modes.c"
      check_hlds__modes__succeeded = check_hlds__modes____Unify____clause_form_0_0(((MR_Word) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2));
    }
#line 1570 "check_hlds.modes.c"
    return check_hlds__modes__succeeded;
#line 1572 "check_hlds.modes.c"
  }
#line 1574 "check_hlds.modes.c"
}

#line 1577 "check_hlds.modes.c"
static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0_10001(
#line 1580 "check_hlds.modes.c"
  MR_Box * check_hlds__modes__wrapper_arg_1,
#line 1582 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 1584 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_3)
#line 1586 "check_hlds.modes.c"
{
#line 1588 "check_hlds.modes.c"
  {
#line 1590 "check_hlds.modes.c"
    MR_Word check_hlds__modes__conv0_HeadVar__1_1;

#line 1593 "check_hlds.modes.c"
    {
#line 1595 "check_hlds.modes.c"
      check_hlds__modes____Compare____clause_form_0_0(&check_hlds__modes__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modes__wrapper_arg_2), ((MR_Word) check_hlds__modes__wrapper_arg_3));
    }
#line 1598 "check_hlds.modes.c"
    *check_hlds__modes__wrapper_arg_1 = ((MR_Box) (check_hlds__modes__conv0_HeadVar__1_1));
#line 1600 "check_hlds.modes.c"
  }
#line 1602 "check_hlds.modes.c"
}

#line 1605 "check_hlds.modes.c"
static MR_bool MR_CALL 
check_hlds__modes____Unify____modes_safe_to_continue_0_0_10001(
#line 1608 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 1610 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2)
#line 1612 "check_hlds.modes.c"
{
#line 1614 "check_hlds.modes.c"
  {
#line 1616 "check_hlds.modes.c"
    MR_bool check_hlds__modes__succeeded;

#line 1619 "check_hlds.modes.c"
    {
#line 1621 "check_hlds.modes.c"
      check_hlds__modes__succeeded = check_hlds__modes____Unify____modes_safe_to_continue_0_0(((MR_Word) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2));
    }
#line 1624 "check_hlds.modes.c"
    return check_hlds__modes__succeeded;
#line 1626 "check_hlds.modes.c"
  }
#line 1628 "check_hlds.modes.c"
}

#line 1631 "check_hlds.modes.c"
static void MR_CALL 
check_hlds__modes____Compare____modes_safe_to_continue_0_0_10001(
#line 1634 "check_hlds.modes.c"
  MR_Box * check_hlds__modes__wrapper_arg_1,
#line 1636 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 1638 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_3)
#line 1640 "check_hlds.modes.c"
{
#line 1642 "check_hlds.modes.c"
  {
#line 1644 "check_hlds.modes.c"
    MR_Word check_hlds__modes__conv0_HeadVar__1_1;

#line 1647 "check_hlds.modes.c"
    {
#line 1649 "check_hlds.modes.c"
      check_hlds__modes____Compare____modes_safe_to_continue_0_0(&check_hlds__modes__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modes__wrapper_arg_2), ((MR_Word) check_hlds__modes__wrapper_arg_3));
    }
#line 1652 "check_hlds.modes.c"
    *check_hlds__modes__wrapper_arg_1 = ((MR_Box) (check_hlds__modes__conv0_HeadVar__1_1));
#line 1654 "check_hlds.modes.c"
  }
#line 1656 "check_hlds.modes.c"
}

#line 1075 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1075__1_2_p_0(
#line 1075 "modes.m"
  MR_Word check_hlds__modes__DetismSpecs_37,
#line 1075 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_56)
#line 1075 "modes.m"
{
#line 1075 "modes.m"
  {
#line 1075 "modes.m"
    MR_bool check_hlds__modes__succeeded;

#line 1075 "modes.m"
    {
#line 1075 "modes.m"
      return check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modes_scalar_common_1[0], ((MR_Box) (check_hlds__modes__DetismSpecs_37)), ((MR_Box) (check_hlds__modes__HeadVar__2_56)));
    }
#line 1075 "modes.m"
    return check_hlds__modes__succeeded;
#line 1075 "modes.m"
  }
#line 1075 "modes.m"
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
#line 1726 "check_hlds.modes.c"
  {
#line 1728 "check_hlds.modes.c"
    MR_bool check_hlds__modes__succeeded = (check_hlds__modes__HeadVar__2_1 == check_hlds__modes__HeadVar__2_2);

#line 1731 "check_hlds.modes.c"
    return check_hlds__modes__succeeded;
#line 1733 "check_hlds.modes.c"
  }
#line 79 "modes.m"
}

#line 1105 "modes.m"
static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0(
#line 1105 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__1_1,
#line 1105 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1105 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3)
#line 1105 "modes.m"
{
#line 1105 "modes.m"
  {
#line 1105 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1105 "modes.m"
    MR_Integer check_hlds__modes__CastX_22 = (MR_Integer) check_hlds__modes__HeadVar__2_2;
#line 1105 "modes.m"
    MR_Integer check_hlds__modes__CastY_23 = (MR_Integer) check_hlds__modes__HeadVar__3_3;

#line 1105 "modes.m"
    check_hlds__modes__succeeded = (check_hlds__modes__CastX_22 == check_hlds__modes__CastY_23);
#line 1105 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1762 "check_hlds.modes.c"
      *check_hlds__modes__HeadVar__1_1 = (MR_Integer) 0;
#line 1105 "modes.m"
    else
#line 1105 "modes.m"
      if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1105 "modes.m"
        {
#line 1105 "modes.m"
          MR_Word check_hlds__modes__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));

#line 1105 "modes.m"
          if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1105 "modes.m"
            {
#line 1105 "modes.m"
              MR_Word check_hlds__modes__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__3_3, (MR_Integer) 0)));

#line 1105 "modes.m"
              {
#line 1105 "modes.m"
                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[3], check_hlds__modes__HeadVar__1_1, ((MR_Box) (check_hlds__modes__V_28_28)), ((MR_Box) (check_hlds__modes__V_5_5)));
#line 1105 "modes.m"
                return;
              }
#line 1105 "modes.m"
            }
#line 1105 "modes.m"
          else
#line 1791 "check_hlds.modes.c"
            *check_hlds__modes__HeadVar__1_1 = (MR_Integer) 1;
#line 1105 "modes.m"
        }
#line 1105 "modes.m"
      else
#line 1105 "modes.m"
        {
#line 1105 "modes.m"
          MR_Word check_hlds__modes__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 2)));
#line 1105 "modes.m"
          MR_Word check_hlds__modes__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1105 "modes.m"
          MR_Word check_hlds__modes__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));

#line 1105 "modes.m"
          if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1808 "check_hlds.modes.c"
            *check_hlds__modes__HeadVar__1_1 = (MR_Integer) 2;
#line 1105 "modes.m"
          else
#line 1105 "modes.m"
            {
#line 1105 "modes.m"
              MR_Word check_hlds__modes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 0)));
#line 1105 "modes.m"
              MR_Word check_hlds__modes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 1)));
#line 1105 "modes.m"
              MR_Word check_hlds__modes__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 2)));
#line 1105 "modes.m"
              MR_Word check_hlds__modes__V_20_20;

#line 1105 "modes.m"
              {
#line 1105 "modes.m"
                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[1], &check_hlds__modes__V_20_20, ((MR_Box) (check_hlds__modes__V_31_31)), ((MR_Box) (check_hlds__modes__V_17_17)));
              }
#line 1828 "check_hlds.modes.c"
              check_hlds__modes__succeeded = (check_hlds__modes__V_20_20 == (MR_Integer) 0);
#line 1105 "modes.m"
              check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1105 "modes.m"
              if (check_hlds__modes__succeeded)
#line 1105 "modes.m"
                *check_hlds__modes__HeadVar__1_1 = check_hlds__modes__V_20_20;
#line 1105 "modes.m"
              else
#line 1105 "modes.m"
                {
#line 1105 "modes.m"
                  MR_Word check_hlds__modes__V_21_21;
#line 1105 "modes.m"
                  MR_Integer check_hlds__modes__V_32_32 = (MR_Integer) check_hlds__modes__V_30_30;
#line 1105 "modes.m"
                  MR_Integer check_hlds__modes__V_33_33 = (MR_Integer) check_hlds__modes__V_18_18;

#line 1105 "modes.m"
                  {
#line 1105 "modes.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__modes__V_21_21, check_hlds__modes__V_32_32, check_hlds__modes__V_33_33);
                  }
#line 1852 "check_hlds.modes.c"
                  check_hlds__modes__succeeded = (check_hlds__modes__V_21_21 == (MR_Integer) 0);
#line 1105 "modes.m"
                  check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1105 "modes.m"
                  if (check_hlds__modes__succeeded)
#line 1105 "modes.m"
                    *check_hlds__modes__HeadVar__1_1 = check_hlds__modes__V_21_21;
#line 1105 "modes.m"
                  else
#line 1105 "modes.m"
                    {
#line 1105 "modes.m"
                      {
#line 1105 "modes.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[2], check_hlds__modes__HeadVar__1_1, ((MR_Box) (check_hlds__modes__V_29_29)), ((MR_Box) (check_hlds__modes__V_19_19)));
#line 1105 "modes.m"
                        return;
                      }
#line 1105 "modes.m"
                    }
#line 1105 "modes.m"
                }
#line 1105 "modes.m"
            }
#line 1105 "modes.m"
        }
#line 1105 "modes.m"
  }
#line 1105 "modes.m"
}

#line 1105 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0(
#line 1105 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1105 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2)
#line 1105 "modes.m"
{
#line 1105 "modes.m"
  {
#line 1105 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1105 "modes.m"
    MR_Integer check_hlds__modes__CastX_11 = (MR_Integer) check_hlds__modes__HeadVar__1_1;
#line 1105 "modes.m"
    MR_Integer check_hlds__modes__CastY_12 = (MR_Integer) check_hlds__modes__HeadVar__2_2;

#line 1105 "modes.m"
    check_hlds__modes__succeeded = (check_hlds__modes__CastX_11 == check_hlds__modes__CastY_12);
#line 1105 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1105 "modes.m"
      check_hlds__modes__succeeded = MR_TRUE;
#line 1105 "modes.m"
    else
#line 1105 "modes.m"
      if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1105 "modes.m"
        {
#line 1105 "modes.m"
          MR_Word check_hlds__modes__TypeInfo_13_13;
#line 1105 "modes.m"
          MR_Word check_hlds__modes__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1105 "modes.m"
          MR_Word check_hlds__modes__V_4_4;

#line 1105 "modes.m"
          check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1105 "modes.m"
          if (check_hlds__modes__succeeded)
#line 1105 "modes.m"
            {
#line 1105 "modes.m"
              check_hlds__modes__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1929 "check_hlds.modes.c"
              check_hlds__modes__TypeInfo_13_13 = (MR_Word) &check_hlds__modes_scalar_common_1[3];
#line 1931 "check_hlds.modes.c"
              {
#line 1933 "check_hlds.modes.c"
                return check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modes__TypeInfo_13_13, ((MR_Box) (check_hlds__modes__V_3_3)), ((MR_Box) (check_hlds__modes__V_4_4)));
              }
#line 1105 "modes.m"
            }
#line 1105 "modes.m"
        }
#line 1105 "modes.m"
      else
#line 1105 "modes.m"
        {
#line 1105 "modes.m"
          MR_Word check_hlds__modes__TypeInfo_14_14;
#line 1105 "modes.m"
          MR_Word check_hlds__modes__TypeInfo_15_15;
#line 1105 "modes.m"
          MR_Word check_hlds__modes__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1105 "modes.m"
          MR_Word check_hlds__modes__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1105 "modes.m"
          MR_Word check_hlds__modes__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 2)));
#line 1105 "modes.m"
          MR_Word check_hlds__modes__V_8_8;
#line 1105 "modes.m"
          MR_Word check_hlds__modes__V_9_9;
#line 1105 "modes.m"
          MR_Word check_hlds__modes__V_10_10;

#line 1105 "modes.m"
          check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1105 "modes.m"
          if (check_hlds__modes__succeeded)
#line 1105 "modes.m"
            {
#line 1105 "modes.m"
              check_hlds__modes__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1105 "modes.m"
              check_hlds__modes__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1105 "modes.m"
              check_hlds__modes__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 2)));
#line 1973 "check_hlds.modes.c"
              check_hlds__modes__TypeInfo_14_14 = (MR_Word) &check_hlds__modes_scalar_common_1[1];
#line 1975 "check_hlds.modes.c"
              {
#line 1977 "check_hlds.modes.c"
                check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modes__TypeInfo_14_14, ((MR_Box) (check_hlds__modes__V_5_5)), ((MR_Box) (check_hlds__modes__V_8_8)));
              }
#line 1105 "modes.m"
              if (check_hlds__modes__succeeded)
#line 1105 "modes.m"
                {
#line 1984 "check_hlds.modes.c"
                  check_hlds__modes__succeeded = (check_hlds__modes__V_6_6 == check_hlds__modes__V_9_9);
#line 1105 "modes.m"
                  if (check_hlds__modes__succeeded)
#line 1105 "modes.m"
                    {
#line 1990 "check_hlds.modes.c"
                      check_hlds__modes__TypeInfo_15_15 = (MR_Word) &check_hlds__modes_scalar_common_1[2];
#line 1992 "check_hlds.modes.c"
                      {
#line 1994 "check_hlds.modes.c"
                        return check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modes__TypeInfo_15_15, ((MR_Box) (check_hlds__modes__V_7_7)), ((MR_Box) (check_hlds__modes__V_10_10)));
                      }
#line 1105 "modes.m"
                    }
#line 1105 "modes.m"
                }
#line 1105 "modes.m"
            }
#line 1105 "modes.m"
        }
#line 1105 "modes.m"
    return check_hlds__modes__succeeded;
#line 1105 "modes.m"
  }
#line 1105 "modes.m"
}

#line 1463 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_nonunique_modes_2_p_0(
#line 1463 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1463 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2)
#line 1463 "modes.m"
{
#line 1465 "modes.m"
  while (MR_TRUE)
#line 1465 "modes.m"
    {
#line 1465 "modes.m"
      /* tailcall optimized into a loop */
#line 1465 "modes.m"
      {
#line 1465 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 1465 "modes.m"
        if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1465 "modes.m"
          check_hlds__modes__succeeded = MR_TRUE;
#line 1465 "modes.m"
        else
#line 1466 "modes.m"
          {
#line 1466 "modes.m"
            MR_Word check_hlds__modes__Mode_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1466 "modes.m"
            MR_Word check_hlds__modes__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1466 "modes.m"
            MR_Word check_hlds__modes__InitialInst_7;
#line 1466 "modes.m"
            MR_Word check_hlds__modes__FinalInst_8;

#line 1467 "modes.m"
            {
#line 1467 "modes.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__Mode_4, &check_hlds__modes__InitialInst_7, &check_hlds__modes__FinalInst_8);
            }
#line 1468 "modes.m"
            {
#line 1468 "modes.m"
              check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__InitialInst_7);
            }
#line 1466 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1466 "modes.m"
              {
#line 1469 "modes.m"
                {
#line 1469 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__FinalInst_8);
                }
#line 1466 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1470 "modes.m"
                  {
#line 1470 "modes.m"
                    /* direct tailcall eliminated */
#line 1470 "modes.m"
                    {
#line 1470 "modes.m"
                      MR_Word check_hlds__modes__HeadVar__1__tmp_copy_1 = check_hlds__modes__Rest_5;

#line 1470 "modes.m"
                      check_hlds__modes__HeadVar__1_1 = check_hlds__modes__HeadVar__1__tmp_copy_1;
#line 1470 "modes.m"
                    }
#line 1470 "modes.m"
                    continue;
#line 1470 "modes.m"
                  }
#line 1466 "modes.m"
              }
#line 1466 "modes.m"
          }
#line 1465 "modes.m"
        return check_hlds__modes__succeeded;
#line 1465 "modes.m"
      }
#line 1465 "modes.m"
      break;
#line 1465 "modes.m"
    }
#line 1463 "modes.m"
}

#line 1445 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_fully_in_out_modes_2_p_0(
#line 1445 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1445 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2)
#line 1445 "modes.m"
{
#line 1448 "modes.m"
  while (MR_TRUE)
#line 1448 "modes.m"
    {
#line 1448 "modes.m"
      /* tailcall optimized into a loop */
#line 1448 "modes.m"
      {
#line 1448 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 1448 "modes.m"
        if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1448 "modes.m"
          check_hlds__modes__succeeded = MR_TRUE;
#line 1448 "modes.m"
        else
#line 1449 "modes.m"
          {
#line 1449 "modes.m"
            MR_Word check_hlds__modes__Mode_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1449 "modes.m"
            MR_Word check_hlds__modes__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1449 "modes.m"
            MR_Word check_hlds__modes__InitialInst_7;
#line 1449 "modes.m"
            MR_Word check_hlds__modes__FinalInst_8;

#line 1450 "modes.m"
            {
#line 1450 "modes.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__Mode_4, &check_hlds__modes__InitialInst_7, &check_hlds__modes__FinalInst_8);
            }
#line 1452 "modes.m"
            {
#line 1452 "modes.m"
              check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__InitialInst_7);
            }
#line 1453 "modes.m"
            if (!(check_hlds__modes__succeeded))
#line 1454 "modes.m"
              {
#line 1454 "modes.m"
                {
#line 1454 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__InitialInst_7);
                }
#line 1454 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1454 "modes.m"
                  {
#line 1456 "modes.m"
                    {
#line 1456 "modes.m"
                      check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__FinalInst_8);
                    }
#line 1457 "modes.m"
                    if (!(check_hlds__modes__succeeded))
#line 1458 "modes.m"
                      {
#line 1458 "modes.m"
                        check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__FinalInst_8);
                      }
#line 1454 "modes.m"
                  }
#line 1454 "modes.m"
              }
#line 1449 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1461 "modes.m"
              {
#line 1461 "modes.m"
                /* direct tailcall eliminated */
#line 1461 "modes.m"
                {
#line 1461 "modes.m"
                  MR_Word check_hlds__modes__HeadVar__1__tmp_copy_1 = check_hlds__modes__Rest_5;

#line 1461 "modes.m"
                  check_hlds__modes__HeadVar__1_1 = check_hlds__modes__HeadVar__1__tmp_copy_1;
#line 1461 "modes.m"
                }
#line 1461 "modes.m"
                continue;
#line 1461 "modes.m"
              }
#line 1449 "modes.m"
          }
#line 1448 "modes.m"
        return check_hlds__modes__succeeded;
#line 1448 "modes.m"
      }
#line 1448 "modes.m"
      break;
#line 1448 "modes.m"
    }
#line 1445 "modes.m"
}

#line 1406 "modes.m"
static void MR_CALL 
check_hlds__modes__proc_check_eval_methods_5_p_0(
#line 1406 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1406 "modes.m"
  MR_Word check_hlds__modes__PredId_2,
#line 1406 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3,
#line 1406 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_4,
#line 1406 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_5)
#line 1406 "modes.m"
{
#line 1409 "modes.m"
  while (MR_TRUE)
#line 1409 "modes.m"
    {
#line 1409 "modes.m"
      /* tailcall optimized into a loop */
#line 1409 "modes.m"
      {
#line 1409 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 1409 "modes.m"
        if ((check_hlds__modes__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1409 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Specs_5 = check_hlds__modes__STATE_VARIABLE_Specs_0_4;
#line 1409 "modes.m"
        else
#line 1410 "modes.m"
          {
#line 1410 "modes.m"
            MR_Integer check_hlds__modes__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 0)));
#line 1410 "modes.m"
            MR_Word check_hlds__modes__ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 1)));
#line 1410 "modes.m"
            MR_Word check_hlds__modes__PredInfo_16;
#line 1410 "modes.m"
            MR_Word check_hlds__modes__ProcInfo_17;
#line 1410 "modes.m"
            MR_Word check_hlds__modes__EvalMethod_18;
#line 1410 "modes.m"
            MR_Word check_hlds__modes__Modes_19;
#line 1410 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_26_26;
#line 1410 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_28_28;
#line 1410 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_31_31;
#line 1415 "modes.m"
            MR_Word check_hlds__modes__V_25_25;
#line 1424 "modes.m"
            MR_Word check_hlds__modes__V_27_27;
#line 1433 "modes.m"
            MR_String check_hlds__modes__V_29_29;
#line 1433 "modes.m"
            MR_Integer check_hlds__modes__V_30_30;
#line 1474 "modes.m"
            MR_Word check_hlds__modes__Di_121;
#line 1474 "modes.m"
            MR_Word check_hlds__modes__Uo_122;
#line 1474 "modes.m"
            MR_Word check_hlds__modes__DiInitialInst_123;
#line 1474 "modes.m"
            MR_Word check_hlds__modes__DiFinalInst_124;
#line 1474 "modes.m"
            MR_Word check_hlds__modes__UoInitialInst_125;
#line 1474 "modes.m"
            MR_Word check_hlds__modes__UoFinalInst_126;
#line 1474 "modes.m"
            MR_Word check_hlds__modes__Free_127;
#line 1474 "modes.m"
            MR_Word check_hlds__modes__V_129_129;
#line 1474 "modes.m"
            MR_Word check_hlds__modes__V_130_130;
#line 1474 "modes.m"
            MR_Word check_hlds__modes__V_131_131;
#line 1474 "modes.m"
            MR_Word check_hlds__modes__V_132_132;
#line 1474 "modes.m"
            MR_Word check_hlds__modes__V_133_133;
#line 1474 "modes.m"
            MR_Word check_hlds__modes__V_134_134;
#line 1474 "modes.m"
            MR_Word check_hlds__modes__V_135_135;
#line 1474 "modes.m"
            MR_Word check_hlds__modes__V_136_136;
#line 1474 "modes.m"
            MR_Word check_hlds__modes__V_140_140;
#line 1474 "modes.m"
            MR_Word check_hlds__modes__V_141_141;
#line 1474 "modes.m"
            MR_Word check_hlds__modes__V_142_142;

#line 1411 "modes.m"
            {
#line 1411 "modes.m"
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__PredId_2, check_hlds__modes__ProcId_13, &check_hlds__modes__PredInfo_16, &check_hlds__modes__ProcInfo_17);
            }
#line 1412 "modes.m"
            {
#line 1412 "modes.m"
              hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__EvalMethod_18);
            }
#line 1413 "modes.m"
            {
#line 1413 "modes.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Modes_19);
            }
#line 1415 "modes.m"
            {
#line 1415 "modes.m"
              check_hlds__modes__V_25_25 = hlds__hlds_pred__eval_method_requires_ground_args_1_f_0(check_hlds__modes__EvalMethod_18);
            }
#line 1415 "modes.m"
            check_hlds__modes__succeeded = (check_hlds__modes__V_25_25 == (MR_Integer) 1);
#line 1415 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1415 "modes.m"
              {
#line 1416 "modes.m"
                {
#line 1416 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__modes__only_fully_in_out_modes_2_p_0(check_hlds__modes__Modes_19, check_hlds__modes__ModuleInfo_1);
                }
#line 1416 "modes.m"
                check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1415 "modes.m"
              }
#line 1420 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1418 "modes.m"
              {
#line 1418 "modes.m"
                MR_Word check_hlds__modes__GroundArgsSpec_20;
#line 1418 "modes.m"
                MR_Word check_hlds__modes__EvalMethod_35;
#line 1418 "modes.m"
                MR_Word check_hlds__modes__Context_36;
#line 1418 "modes.m"
                MR_String check_hlds__modes__EvalMethodS_37;
#line 1418 "modes.m"
                MR_Word check_hlds__modes__MainPieces_38;
#line 1418 "modes.m"
                MR_Word check_hlds__modes__Msg_40;
#line 1418 "modes.m"
                MR_Word check_hlds__modes__V_43_43;
#line 1418 "modes.m"
                MR_Word check_hlds__modes__V_44_44;
#line 1418 "modes.m"
                MR_Word check_hlds__modes__V_65_65;
#line 1418 "modes.m"
                MR_Word check_hlds__modes__V_66_66;
#line 1418 "modes.m"
                MR_Word check_hlds__modes__V_73_73;

#line 1494 "modes.m"
                {
#line 1494 "modes.m"
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__EvalMethod_35);
                }
#line 1495 "modes.m"
                {
#line 1495 "modes.m"
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Context_36);
                }
#line 1496 "modes.m"
                {
#line 1496 "modes.m"
                  check_hlds__modes__EvalMethodS_37 = parse_tree__prog_out__eval_method_to_string_1_f_0(check_hlds__modes__EvalMethod_35);
                }
#line 1498 "modes.m"
                {
#line 1498 "modes.m"
                  check_hlds__modes__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1498 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 1498 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_44_44, 1) = ((MR_Box) (check_hlds__modes__EvalMethodS_37));
#line 1498 "modes.m"
                }
#line 1498 "modes.m"
                {
#line 1498 "modes.m"
                  check_hlds__modes__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1498 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_43_43, 0) = ((MR_Box) (check_hlds__modes__V_44_44));
#line 1498 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[10])));
#line 1498 "modes.m"
                }
#line 1497 "modes.m"
                {
#line 1497 "modes.m"
                  check_hlds__modes__MainPieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1497 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[43])));
#line 1497 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_38, 1) = ((MR_Box) (check_hlds__modes__V_43_43));
#line 1497 "modes.m"
                }
#line 1505 "modes.m"
                {
#line 1505 "modes.m"
                  check_hlds__modes__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1505 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_66_66, 0) = ((MR_Box) (check_hlds__modes__MainPieces_38));
#line 1505 "modes.m"
                }
#line 1505 "modes.m"
                {
#line 1505 "modes.m"
                  check_hlds__modes__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1505 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_65_65, 0) = ((MR_Box) (check_hlds__modes__V_66_66));
#line 1505 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[44])));
#line 1505 "modes.m"
                }
#line 1504 "modes.m"
                {
#line 1504 "modes.m"
                  check_hlds__modes__Msg_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1504 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_40, 0) = ((MR_Box) (check_hlds__modes__Context_36));
#line 1504 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_40, 1) = ((MR_Box) (check_hlds__modes__V_65_65));
#line 1504 "modes.m"
                }
#line 1507 "modes.m"
                {
#line 1507 "modes.m"
                  check_hlds__modes__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1507 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_73_73, 0) = ((MR_Box) (check_hlds__modes__Msg_40));
#line 1507 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1507 "modes.m"
                }
#line 1506 "modes.m"
                {
#line 1506 "modes.m"
                  check_hlds__modes__GroundArgsSpec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1506 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__GroundArgsSpec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1506 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__GroundArgsSpec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[3])));
#line 1506 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__GroundArgsSpec_20, 2) = ((MR_Box) (check_hlds__modes__V_73_73));
#line 1506 "modes.m"
                }
#line 1419 "modes.m"
                {
#line 1419 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Specs_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1419 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_26_26, 0) = ((MR_Box) (check_hlds__modes__GroundArgsSpec_20));
#line 1419 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_26_26, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_0_4));
#line 1419 "modes.m"
                }
#line 1418 "modes.m"
              }
#line 1420 "modes.m"
            else
#line 1419 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_26_26 = check_hlds__modes__STATE_VARIABLE_Specs_0_4;
#line 1424 "modes.m"
            {
#line 1424 "modes.m"
              check_hlds__modes__V_27_27 = hlds__hlds_pred__eval_method_destroys_uniqueness_1_f_0(check_hlds__modes__EvalMethod_18);
            }
#line 1424 "modes.m"
            check_hlds__modes__succeeded = (check_hlds__modes__V_27_27 == (MR_Integer) 1);
#line 1424 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1424 "modes.m"
              {
#line 1425 "modes.m"
                {
#line 1425 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__modes__only_nonunique_modes_2_p_0(check_hlds__modes__Modes_19, check_hlds__modes__ModuleInfo_1);
                }
#line 1425 "modes.m"
                check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1424 "modes.m"
              }
#line 1429 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1427 "modes.m"
              {
#line 1427 "modes.m"
                MR_Word check_hlds__modes__UniquenessSpec_21;
#line 1427 "modes.m"
                MR_Word check_hlds__modes__EvalMethod_77;
#line 1427 "modes.m"
                MR_Word check_hlds__modes__Context_78;
#line 1427 "modes.m"
                MR_String check_hlds__modes__EvalMethodS_79;
#line 1427 "modes.m"
                MR_Word check_hlds__modes__MainPieces_80;
#line 1427 "modes.m"
                MR_Word check_hlds__modes__Msg_82;
#line 1427 "modes.m"
                MR_Word check_hlds__modes__V_85_85;
#line 1427 "modes.m"
                MR_Word check_hlds__modes__V_86_86;
#line 1427 "modes.m"
                MR_Word check_hlds__modes__V_110_110;
#line 1427 "modes.m"
                MR_Word check_hlds__modes__V_111_111;
#line 1427 "modes.m"
                MR_Word check_hlds__modes__V_118_118;

#line 1512 "modes.m"
                {
#line 1512 "modes.m"
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__EvalMethod_77);
                }
#line 1513 "modes.m"
                {
#line 1513 "modes.m"
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Context_78);
                }
#line 1514 "modes.m"
                {
#line 1514 "modes.m"
                  check_hlds__modes__EvalMethodS_79 = parse_tree__prog_out__eval_method_to_string_1_f_0(check_hlds__modes__EvalMethod_77);
                }
#line 1516 "modes.m"
                {
#line 1516 "modes.m"
                  check_hlds__modes__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1516 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 1516 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_86_86, 1) = ((MR_Box) (check_hlds__modes__EvalMethodS_79));
#line 1516 "modes.m"
                }
#line 1516 "modes.m"
                {
#line 1516 "modes.m"
                  check_hlds__modes__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1516 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_85_85, 0) = ((MR_Box) (check_hlds__modes__V_86_86));
#line 1516 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[19])));
#line 1516 "modes.m"
                }
#line 1515 "modes.m"
                {
#line 1515 "modes.m"
                  check_hlds__modes__MainPieces_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1515 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[45])));
#line 1515 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_80, 1) = ((MR_Box) (check_hlds__modes__V_85_85));
#line 1515 "modes.m"
                }
#line 1525 "modes.m"
                {
#line 1525 "modes.m"
                  check_hlds__modes__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1525 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_111_111, 0) = ((MR_Box) (check_hlds__modes__MainPieces_80));
#line 1525 "modes.m"
                }
#line 1525 "modes.m"
                {
#line 1525 "modes.m"
                  check_hlds__modes__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_110_110, 0) = ((MR_Box) (check_hlds__modes__V_111_111));
#line 1525 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[46])));
#line 1525 "modes.m"
                }
#line 1524 "modes.m"
                {
#line 1524 "modes.m"
                  check_hlds__modes__Msg_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1524 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_82, 0) = ((MR_Box) (check_hlds__modes__Context_78));
#line 1524 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_82, 1) = ((MR_Box) (check_hlds__modes__V_110_110));
#line 1524 "modes.m"
                }
#line 1527 "modes.m"
                {
#line 1527 "modes.m"
                  check_hlds__modes__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1527 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_118_118, 0) = ((MR_Box) (check_hlds__modes__Msg_82));
#line 1527 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1527 "modes.m"
                }
#line 1526 "modes.m"
                {
#line 1526 "modes.m"
                  check_hlds__modes__UniquenessSpec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1526 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__UniquenessSpec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1526 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__UniquenessSpec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[3])));
#line 1526 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__UniquenessSpec_21, 2) = ((MR_Box) (check_hlds__modes__V_118_118));
#line 1526 "modes.m"
                }
#line 1428 "modes.m"
                {
#line 1428 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Specs_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1428 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_28_28, 0) = ((MR_Box) (check_hlds__modes__UniquenessSpec_21));
#line 1428 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_28_28, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_26_26));
#line 1428 "modes.m"
                }
#line 1427 "modes.m"
              }
#line 1429 "modes.m"
            else
#line 1428 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_28_28 = check_hlds__modes__STATE_VARIABLE_Specs_26_26;
#line 1433 "modes.m"
            {
#line 1433 "modes.m"
              check_hlds__modes__V_29_29 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__modes__PredInfo_16);
            }
#line 1433 "modes.m"
            check_hlds__modes__succeeded = (strcmp(check_hlds__modes__V_29_29, (MR_String) "main") == 0);
#line 1433 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1433 "modes.m"
              {
#line 1434 "modes.m"
                {
#line 1434 "modes.m"
                  check_hlds__modes__V_30_30 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__modes__PredInfo_16);
                }
#line 1434 "modes.m"
                check_hlds__modes__succeeded = (check_hlds__modes__V_30_30 == (MR_Integer) 2);
#line 1433 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1433 "modes.m"
                  {
#line 1435 "modes.m"
                    {
#line 1435 "modes.m"
                      check_hlds__modes__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(check_hlds__modes__PredInfo_16);
                    }
#line 1433 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1433 "modes.m"
                      {
#line 1474 "modes.m"
                        check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Modes_19)) == (MR_mktag((MR_Integer) 1)));
#line 1474 "modes.m"
                        if (check_hlds__modes__succeeded)
#line 1474 "modes.m"
                          {
#line 1474 "modes.m"
                            check_hlds__modes__Di_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Modes_19, (MR_Integer) 0)));
#line 1474 "modes.m"
                            check_hlds__modes__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Modes_19, (MR_Integer) 1)));
#line 1474 "modes.m"
                            check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__V_129_129)) == (MR_mktag((MR_Integer) 1)));
#line 1474 "modes.m"
                            if (check_hlds__modes__succeeded)
#line 1474 "modes.m"
                              {
#line 1474 "modes.m"
                                check_hlds__modes__Uo_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__V_129_129, (MR_Integer) 0)));
#line 1474 "modes.m"
                                check_hlds__modes__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__V_129_129, (MR_Integer) 1)));
#line 1474 "modes.m"
                                check_hlds__modes__succeeded = (check_hlds__modes__V_130_130 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1474 "modes.m"
                                if (check_hlds__modes__succeeded)
#line 1474 "modes.m"
                                  {
#line 1475 "modes.m"
                                    {
#line 1475 "modes.m"
                                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__Di_121, &check_hlds__modes__DiInitialInst_123, &check_hlds__modes__DiFinalInst_124);
                                    }
#line 1476 "modes.m"
                                    {
#line 1476 "modes.m"
                                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__Uo_122, &check_hlds__modes__UoInitialInst_125, &check_hlds__modes__UoFinalInst_126);
                                    }
#line 1485 "modes.m"
                                    check_hlds__modes__V_132_132 = (MR_Integer) 1;
#line 1485 "modes.m"
                                    check_hlds__modes__V_133_133 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1485 "modes.m"
                                    check_hlds__modes__V_131_131 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[3]);
#line 1485 "modes.m"
                                    {
#line 1485 "modes.m"
                                      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__DiInitialInst_123, &check_hlds__modes__V_140_140);
                                    }
#line 1485 "modes.m"
                                    {
#line 1485 "modes.m"
                                      check_hlds__modes__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modes__V_131_131, check_hlds__modes__V_140_140);
                                    }
#line 1474 "modes.m"
                                    if (check_hlds__modes__succeeded)
#line 1474 "modes.m"
                                      {
#line 1486 "modes.m"
                                        check_hlds__modes__V_135_135 = (MR_Integer) 3;
#line 1486 "modes.m"
                                        check_hlds__modes__V_136_136 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1486 "modes.m"
                                        check_hlds__modes__V_134_134 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[2]);
#line 1486 "modes.m"
                                        {
#line 1486 "modes.m"
                                          check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__DiFinalInst_124, &check_hlds__modes__V_141_141);
                                        }
#line 1486 "modes.m"
                                        {
#line 1486 "modes.m"
                                          check_hlds__modes__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modes__V_134_134, check_hlds__modes__V_141_141);
                                        }
#line 1474 "modes.m"
                                        if (check_hlds__modes__succeeded)
#line 1474 "modes.m"
                                          {
#line 1487 "modes.m"
                                            {
#line 1487 "modes.m"
                                              check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__UoInitialInst_125, &check_hlds__modes__Free_127);
                                            }
#line 1488 "modes.m"
                                            if ((check_hlds__modes__Free_127 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1488 "modes.m"
                                              check_hlds__modes__succeeded = MR_TRUE;
#line 1488 "modes.m"
                                            else
#line 1488 "modes.m"
                                              if (((MR_tag((MR_Word) check_hlds__modes__Free_127)) == (MR_mktag((MR_Integer) 1))))
#line 1488 "modes.m"
                                                check_hlds__modes__succeeded = MR_TRUE;
#line 1488 "modes.m"
                                              else
#line 1488 "modes.m"
                                                check_hlds__modes__succeeded = MR_FALSE;
#line 1474 "modes.m"
                                            if (check_hlds__modes__succeeded)
#line 1474 "modes.m"
                                              {
#line 1489 "modes.m"
                                                {
#line 1489 "modes.m"
                                                  check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__UoFinalInst_126, &check_hlds__modes__V_142_142);
                                                }
#line 1489 "modes.m"
                                                {
#line 1489 "modes.m"
                                                  check_hlds__modes__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modes__V_131_131, check_hlds__modes__V_142_142);
                                                }
#line 1474 "modes.m"
                                              }
#line 1474 "modes.m"
                                          }
#line 1474 "modes.m"
                                      }
#line 1474 "modes.m"
                                  }
#line 1474 "modes.m"
                              }
#line 1474 "modes.m"
                          }
#line 1436 "modes.m"
                        check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1433 "modes.m"
                      }
#line 1433 "modes.m"
                  }
#line 1433 "modes.m"
              }
#line 1440 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1438 "modes.m"
              {
#line 1438 "modes.m"
                MR_Word check_hlds__modes__MainSpec_22;
#line 1438 "modes.m"
                MR_Word check_hlds__modes__Context_148;
#line 1438 "modes.m"
                MR_Word check_hlds__modes__Msg_150;
#line 1438 "modes.m"
                MR_Word check_hlds__modes__V_177_177;

#line 1532 "modes.m"
                {
#line 1532 "modes.m"
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Context_148);
                }
#line 1535 "modes.m"
                {
#line 1535 "modes.m"
                  check_hlds__modes__Msg_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1535 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_150, 0) = ((MR_Box) (check_hlds__modes__Context_148));
#line 1535 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[47])));
#line 1535 "modes.m"
                }
#line 1537 "modes.m"
                {
#line 1537 "modes.m"
                  check_hlds__modes__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_177_177, 0) = ((MR_Box) (check_hlds__modes__Msg_150));
#line 1537 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_177_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1537 "modes.m"
                }
#line 1536 "modes.m"
                {
#line 1536 "modes.m"
                  check_hlds__modes__MainSpec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1536 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__MainSpec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1536 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__MainSpec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[3])));
#line 1536 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__MainSpec_22, 2) = ((MR_Box) (check_hlds__modes__V_177_177));
#line 1536 "modes.m"
                }
#line 1439 "modes.m"
                {
#line 1439 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Specs_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1439 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_31_31, 0) = ((MR_Box) (check_hlds__modes__MainSpec_22));
#line 1439 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_31_31, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_28_28));
#line 1439 "modes.m"
                }
#line 1438 "modes.m"
              }
#line 1440 "modes.m"
            else
#line 1439 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_31_31 = check_hlds__modes__STATE_VARIABLE_Specs_28_28;
#line 1443 "modes.m"
            /* direct tailcall eliminated */
#line 1443 "modes.m"
            {
#line 1443 "modes.m"
              MR_Word check_hlds__modes__HeadVar__3__tmp_copy_3 = check_hlds__modes__ProcIds_14;
#line 1443 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_4 = check_hlds__modes__STATE_VARIABLE_Specs_31_31;

#line 1443 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_0_4 = check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 1443 "modes.m"
              check_hlds__modes__HeadVar__3_3 = check_hlds__modes__HeadVar__3__tmp_copy_3;
#line 1443 "modes.m"
            }
#line 1443 "modes.m"
            continue;
#line 1410 "modes.m"
          }
#line 1409 "modes.m"
      }
#line 1409 "modes.m"
      break;
#line 1409 "modes.m"
    }
#line 1406 "modes.m"
}

#line 1395 "modes.m"
static void MR_CALL 
check_hlds__modes__pred_check_eval_methods_4_p_0(
#line 1395 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1395 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1395 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_3,
#line 1395 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_4)
#line 1395 "modes.m"
{
#line 1398 "modes.m"
  while (MR_TRUE)
#line 1398 "modes.m"
    {
#line 1398 "modes.m"
      /* tailcall optimized into a loop */
#line 1398 "modes.m"
      {
#line 1398 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 1398 "modes.m"
        if ((check_hlds__modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1398 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Specs_4 = check_hlds__modes__STATE_VARIABLE_Specs_0_3;
#line 1398 "modes.m"
        else
#line 1399 "modes.m"
          {
#line 1399 "modes.m"
            MR_Word check_hlds__modes__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1399 "modes.m"
            MR_Word check_hlds__modes__PredIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1399 "modes.m"
            MR_Word check_hlds__modes__Preds_13;
#line 1399 "modes.m"
            MR_Word check_hlds__modes__PredInfo_14;
#line 1399 "modes.m"
            MR_Word check_hlds__modes__ProcIds_15;
#line 1399 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_18_18;
#line 1401 "modes.m"
            MR_Box check_hlds__modes__conv0_PredInfo_14;

#line 1400 "modes.m"
            {
#line 1400 "modes.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__ModuleInfo_1, &check_hlds__modes__Preds_13);
            }
#line 1401 "modes.m"
            {
#line 1401 "modes.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__modes__Preds_13, ((MR_Box) (check_hlds__modes__PredId_10)), &check_hlds__modes__conv0_PredInfo_14);
            }
#line 1401 "modes.m"
            check_hlds__modes__PredInfo_14 = ((MR_Word) check_hlds__modes__conv0_PredInfo_14);
#line 1402 "modes.m"
            {
#line 1402 "modes.m"
              check_hlds__modes__ProcIds_15 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__modes__PredInfo_14);
            }
#line 1403 "modes.m"
            {
#line 1403 "modes.m"
              check_hlds__modes__proc_check_eval_methods_5_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__PredId_10, check_hlds__modes__ProcIds_15, check_hlds__modes__STATE_VARIABLE_Specs_0_3, &check_hlds__modes__STATE_VARIABLE_Specs_18_18);
            }
#line 1404 "modes.m"
            /* direct tailcall eliminated */
#line 1404 "modes.m"
            {
#line 1404 "modes.m"
              MR_Word check_hlds__modes__HeadVar__2__tmp_copy_2 = check_hlds__modes__PredIds_11;
#line 1404 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_3 = check_hlds__modes__STATE_VARIABLE_Specs_18_18;

#line 1404 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_0_3 = check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_3;
#line 1404 "modes.m"
              check_hlds__modes__HeadVar__2_2 = check_hlds__modes__HeadVar__2__tmp_copy_2;
#line 1404 "modes.m"
            }
#line 1404 "modes.m"
            continue;
#line 1399 "modes.m"
          }
#line 1398 "modes.m"
      }
#line 1398 "modes.m"
      break;
#line 1398 "modes.m"
    }
#line 1395 "modes.m"
}

#line 1304 "modes.m"
static void MR_CALL 
check_hlds__modes__check_final_insts_13_p_0(
#line 1304 "modes.m"
  MR_Word check_hlds__modes__Vars_14,
#line 1304 "modes.m"
  MR_Word check_hlds__modes__Insts_15,
#line 1304 "modes.m"
  MR_Word check_hlds__modes__VarInsts_16,
#line 1304 "modes.m"
  MR_Word check_hlds__modes__InferModes_17,
#line 1304 "modes.m"
  MR_Word check_hlds__modes__GroundMatchesBound_18,
#line 1304 "modes.m"
  MR_Integer check_hlds__modes__ArgNum_19,
#line 1304 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_20,
#line 1304 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Goal_0_35,
#line 1304 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Goal_36,
#line 1304 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_37,
#line 1304 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_38,
#line 1304 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39,
#line 1304 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_40)
#line 1304 "modes.m"
{
#line 1317 "modes.m"
  while (MR_TRUE)
#line 1317 "modes.m"
    {
#line 1317 "modes.m"
      /* tailcall optimized into a loop */
#line 1317 "modes.m"
      {
#line 1317 "modes.m"
        MR_bool check_hlds__modes__succeeded = (check_hlds__modes__Vars_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 1312 "modes.m"
        if (check_hlds__modes__succeeded)
#line 1312 "modes.m"
          {
#line 1313 "modes.m"
            check_hlds__modes__succeeded = (check_hlds__modes__Insts_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1312 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1314 "modes.m"
              check_hlds__modes__succeeded = (check_hlds__modes__VarInsts_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1312 "modes.m"
          }
#line 1317 "modes.m"
        if (check_hlds__modes__succeeded)
#line 1316 "modes.m"
          {
#line 1316 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_ModeInfo_40 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39;
#line 1316 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Changed_38 = check_hlds__modes__STATE_VARIABLE_Changed_0_37;
#line 1316 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Goal_36 = check_hlds__modes__STATE_VARIABLE_Goal_0_35;
#line 1316 "modes.m"
          }
#line 1317 "modes.m"
        else
#line 1378 "modes.m"
          {
#line 1378 "modes.m"
            MR_Word check_hlds__modes__Var_24;
#line 1378 "modes.m"
            MR_Word check_hlds__modes__VarsTail_25;
#line 1378 "modes.m"
            MR_Word check_hlds__modes__Inst_26;
#line 1378 "modes.m"
            MR_Word check_hlds__modes__InstsTail_27;
#line 1378 "modes.m"
            MR_Word check_hlds__modes__VarInst_28;
#line 1378 "modes.m"
            MR_Word check_hlds__modes__VarInstsTail_29;

#line 1318 "modes.m"
            check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Vars_14)) == (MR_mktag((MR_Integer) 1)));
#line 1318 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1318 "modes.m"
              {
#line 1318 "modes.m"
                check_hlds__modes__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Vars_14, (MR_Integer) 0)));
#line 1318 "modes.m"
                check_hlds__modes__VarsTail_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Vars_14, (MR_Integer) 1)));
#line 1319 "modes.m"
                check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Insts_15)) == (MR_mktag((MR_Integer) 1)));
#line 1319 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1319 "modes.m"
                  {
#line 1319 "modes.m"
                    check_hlds__modes__Inst_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Insts_15, (MR_Integer) 0)));
#line 1319 "modes.m"
                    check_hlds__modes__InstsTail_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Insts_15, (MR_Integer) 1)));
#line 1320 "modes.m"
                    check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__VarInsts_16)) == (MR_mktag((MR_Integer) 1)));
#line 1320 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1320 "modes.m"
                      {
#line 1320 "modes.m"
                        check_hlds__modes__VarInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__VarInsts_16, (MR_Integer) 0)));
#line 1320 "modes.m"
                        check_hlds__modes__VarInstsTail_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__VarInsts_16, (MR_Integer) 1)));
#line 1320 "modes.m"
                      }
#line 1319 "modes.m"
                  }
#line 1318 "modes.m"
              }
#line 1378 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1322 "modes.m"
              {
#line 1322 "modes.m"
                MR_Word check_hlds__modes__VarTypes_30;
#line 1322 "modes.m"
                MR_Word check_hlds__modes__Type_31;
#line 1322 "modes.m"
                MR_Word check_hlds__modes__STATE_VARIABLE_Changed_41_41;
#line 1322 "modes.m"
                MR_Word check_hlds__modes__STATE_VARIABLE_Goal_42_42;
#line 1322 "modes.m"
                MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43;
#line 1322 "modes.m"
                MR_Integer check_hlds__modes__V_45_45;

#line 1322 "modes.m"
                {
#line 1322 "modes.m"
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modes__VarTypes_30);
                }
#line 1323 "modes.m"
                {
#line 1323 "modes.m"
                  parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modes__VarTypes_30, check_hlds__modes__Var_24, &check_hlds__modes__Type_31);
                }
#line 1325 "modes.m"
                {
#line 1325 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__inst_match__inst_matches_final_gmb_5_p_0(check_hlds__modes__VarInst_28, check_hlds__modes__Inst_26, check_hlds__modes__Type_31, check_hlds__modes__ModuleInfo_20, check_hlds__modes__GroundMatchesBound_18);
                }
#line 1329 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1328 "modes.m"
                  {
#line 1328 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39;
#line 1328 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_Changed_41_41 = check_hlds__modes__STATE_VARIABLE_Changed_0_37;
#line 1328 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_Goal_42_42 = check_hlds__modes__STATE_VARIABLE_Goal_0_35;
#line 1328 "modes.m"
                  }
#line 1329 "modes.m"
                else
#line 1330 "modes.m"
                  {
#line 1330 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_Changed_41_41 = (MR_Integer) 1;
#line 1343 "modes.m"
                    {
#line 1343 "modes.m"
                      check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modes__ModuleInfo_20, check_hlds__modes__VarInst_28);
                    }
#line 1343 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1343 "modes.m"
                      {
#line 1344 "modes.m"
                        {
#line 1344 "modes.m"
                          check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_any_2_p_0(check_hlds__modes__ModuleInfo_20, check_hlds__modes__Inst_26);
                        }
#line 1343 "modes.m"
                        if (check_hlds__modes__succeeded)
#line 1343 "modes.m"
                          {
#line 1345 "modes.m"
                            {
#line 1345 "modes.m"
                              check_hlds__modes__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(check_hlds__modes__ModuleInfo_20, check_hlds__modes__Type_31);
                            }
#line 1343 "modes.m"
                            if (check_hlds__modes__succeeded)
#line 1346 "modes.m"
                              {
#line 1346 "modes.m"
                                check_hlds__modes__succeeded = check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39);
                              }
#line 1343 "modes.m"
                          }
#line 1343 "modes.m"
                      }
#line 1350 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1348 "modes.m"
                      {
#line 1348 "modes.m"
                        check_hlds__modecheck_util__prepend_initialisation_call_7_p_0(check_hlds__modes__Var_24, check_hlds__modes__Type_31, check_hlds__modes__VarInst_28, check_hlds__modes__STATE_VARIABLE_Goal_0_35, &check_hlds__modes__STATE_VARIABLE_Goal_42_42, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43);
                      }
#line 1350 "modes.m"
                    else
#line 1356 "modes.m"
                      {
#line 1356 "modes.m"
                        if ((check_hlds__modes__InferModes_17 == (MR_Integer) 0))
#line 1357 "modes.m"
                          {
#line 1357 "modes.m"
                            MR_Word check_hlds__modes__Reason_32;
#line 1357 "modes.m"
                            MR_Word check_hlds__modes__WaitingVars_33;
#line 1357 "modes.m"
                            MR_Word check_hlds__modes__ModeError_34;

#line 1360 "modes.m"
                            {
#line 1360 "modes.m"
                              check_hlds__modes__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modes__VarInst_28, check_hlds__modes__Inst_26, check_hlds__modes__Type_31, check_hlds__modes__ModuleInfo_20);
                            }
#line 1362 "modes.m"
                            if (check_hlds__modes__succeeded)
#line 1361 "modes.m"
                              check_hlds__modes__Reason_32 = (MR_Integer) 0;
#line 1362 "modes.m"
                            else
#line 1364 "modes.m"
                              {
#line 1362 "modes.m"
                                {
#line 1362 "modes.m"
                                  check_hlds__modes__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modes__Inst_26, check_hlds__modes__VarInst_28, check_hlds__modes__Type_31, check_hlds__modes__ModuleInfo_20);
                                }
#line 1364 "modes.m"
                                if (check_hlds__modes__succeeded)
#line 1363 "modes.m"
                                  check_hlds__modes__Reason_32 = (MR_Integer) 1;
#line 1364 "modes.m"
                                else
#line 1366 "modes.m"
                                  check_hlds__modes__Reason_32 = (MR_Integer) 2;
#line 1364 "modes.m"
                              }
#line 1368 "modes.m"
                            {
#line 1368 "modes.m"
                              parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modes__WaitingVars_33);
                            }
#line 1369 "modes.m"
                            {
#line 1369 "modes.m"
                              check_hlds__modes__ModeError_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1369 "modes.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 1369 "modes.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 1) = ((MR_Box) (check_hlds__modes__ArgNum_19));
#line 1369 "modes.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 2) = ((MR_Box) (check_hlds__modes__Var_24));
#line 1369 "modes.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 3) = ((MR_Box) (check_hlds__modes__VarInst_28));
#line 1369 "modes.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 4) = ((MR_Box) (check_hlds__modes__Inst_26));
#line 1369 "modes.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 5) = ((MR_Box) (check_hlds__modes__Reason_32));
#line 1369 "modes.m"
                            }
#line 1371 "modes.m"
                            {
#line 1371 "modes.m"
                              check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modes__WaitingVars_33, check_hlds__modes__ModeError_34, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43);
                            }
#line 1357 "modes.m"
                          }
#line 1356 "modes.m"
                        else
#line 1355 "modes.m"
                          check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39;
#line 1371 "modes.m"
                        check_hlds__modes__STATE_VARIABLE_Goal_42_42 = check_hlds__modes__STATE_VARIABLE_Goal_0_35;
#line 1356 "modes.m"
                      }
#line 1330 "modes.m"
                  }
#line 1376 "modes.m"
                check_hlds__modes__V_45_45 = (check_hlds__modes__ArgNum_19 + (MR_Integer) 1);
#line 1375 "modes.m"
                /* direct tailcall eliminated */
#line 1375 "modes.m"
                {
#line 1375 "modes.m"
                  MR_Word check_hlds__modes__Vars__tmp_copy_14 = check_hlds__modes__VarsTail_25;
#line 1375 "modes.m"
                  MR_Word check_hlds__modes__Insts__tmp_copy_15 = check_hlds__modes__InstsTail_27;
#line 1375 "modes.m"
                  MR_Word check_hlds__modes__VarInsts__tmp_copy_16 = check_hlds__modes__VarInstsTail_29;
#line 1375 "modes.m"
                  MR_Integer check_hlds__modes__ArgNum__tmp_copy_19 = check_hlds__modes__V_45_45;
#line 1375 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_Goal_0__tmp_copy_35 = check_hlds__modes__STATE_VARIABLE_Goal_42_42;
#line 1375 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_37 = check_hlds__modes__STATE_VARIABLE_Changed_41_41;
#line 1375 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0__tmp_copy_39 = check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43;

#line 1375 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0__tmp_copy_39;
#line 1375 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Changed_0_37 = check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_37;
#line 1375 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Goal_0_35 = check_hlds__modes__STATE_VARIABLE_Goal_0__tmp_copy_35;
#line 1375 "modes.m"
                  check_hlds__modes__ArgNum_19 = check_hlds__modes__ArgNum__tmp_copy_19;
#line 1375 "modes.m"
                  check_hlds__modes__VarInsts_16 = check_hlds__modes__VarInsts__tmp_copy_16;
#line 1375 "modes.m"
                  check_hlds__modes__Insts_15 = check_hlds__modes__Insts__tmp_copy_15;
#line 1375 "modes.m"
                  check_hlds__modes__Vars_14 = check_hlds__modes__Vars__tmp_copy_14;
#line 1375 "modes.m"
                }
#line 1375 "modes.m"
                continue;
#line 1322 "modes.m"
              }
#line 1378 "modes.m"
            else
#line 1379 "modes.m"
              {
#line 1379 "modes.m"
                {
#line 1379 "modes.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.check_final_insts\'/13", (MR_String) "length mismatch");
#line 1379 "modes.m"
                  return;
                }
#line 1379 "modes.m"
              }
#line 1378 "modes.m"
          }
#line 1317 "modes.m"
      }
#line 1317 "modes.m"
      break;
#line 1317 "modes.m"
    }
#line 1304 "modes.m"
}

#line 1286 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_clobber_insts_3_p_0(
#line 1286 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1286 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1286 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__3_3)
#line 1286 "modes.m"
{
#line 1289 "modes.m"
  {
#line 1289 "modes.m"
    MR_bool check_hlds__modes__succeeded;

#line 1289 "modes.m"
    if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1289 "modes.m"
      if ((check_hlds__modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1293 "modes.m"
        *check_hlds__modes__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1289 "modes.m"
      else
#line 1289 "modes.m"
        {
#line 1290 "modes.m"
          {
#line 1290 "modes.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.maybe_clobber_insts\'/3", (MR_String) "length mismatch");
#line 1290 "modes.m"
            return;
          }
#line 1289 "modes.m"
        }
#line 1289 "modes.m"
    else
#line 1289 "modes.m"
      {
#line 1289 "modes.m"
        MR_Word check_hlds__modes__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1289 "modes.m"
        MR_Word check_hlds__modes__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));

#line 1289 "modes.m"
        if ((check_hlds__modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
#line 1289 "modes.m"
        else
#line 1294 "modes.m"
          {
#line 1294 "modes.m"
            MR_Word check_hlds__modes__IsLive_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1294 "modes.m"
            MR_Word check_hlds__modes__IsLives_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1294 "modes.m"
            MR_Word check_hlds__modes__Inst_20;
#line 1294 "modes.m"
            MR_Word check_hlds__modes__Insts_21;

#line 1298 "modes.m"
            if ((check_hlds__modes__IsLive_18 == (MR_Integer) 1))
#line 1296 "modes.m"
              {
#line 1297 "modes.m"
                check_hlds__modes__Inst_20 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[2]);
#line 1296 "modes.m"
              }
#line 1298 "modes.m"
            else
#line 1299 "modes.m"
              check_hlds__modes__Inst_20 = check_hlds__modes__V_25_25;
#line 1302 "modes.m"
            {
#line 1302 "modes.m"
              check_hlds__modes__maybe_clobber_insts_3_p_0(check_hlds__modes__V_24_24, check_hlds__modes__IsLives_19, &check_hlds__modes__Insts_21);
            }
#line 1294 "modes.m"
            {
#line 1294 "modes.m"
              MR_Word base;
#line 1294 "modes.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "modes.m"
              *check_hlds__modes__HeadVar__3_3 = base;
#line 1294 "modes.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modes__Inst_20));
#line 1294 "modes.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modes__Insts_21));
#line 1294 "modes.m"
            }
#line 1294 "modes.m"
          }
#line 1289 "modes.m"
      }
#line 1289 "modes.m"
  }
#line 1286 "modes.m"
}

#line 1223 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_final_insts_8_p_0(
#line 1223 "modes.m"
  MR_Word check_hlds__modes__HeadVars_9,
#line 1223 "modes.m"
  MR_Word check_hlds__modes__InferModes_10,
#line 1223 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14,
#line 1223 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_FinalInsts_15,
#line 1223 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Body_0_16,
#line 1223 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Body_17,
#line 1223 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
#line 1223 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19)
#line 1223 "modes.m"
{
#line 1227 "modes.m"
  {
#line 1227 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1227 "modes.m"
    MR_Word check_hlds__modes__ModuleInfo_34;
#line 1227 "modes.m"
    MR_Word check_hlds__modes__Errors_35;
#line 1227 "modes.m"
    MR_Word check_hlds__modes__Changed0_38;
#line 1227 "modes.m"
    MR_Word check_hlds__modes__InstMap_39;
#line 1227 "modes.m"
    MR_Word check_hlds__modes__VarTypes_40;
#line 1227 "modes.m"
    MR_Word check_hlds__modes__VarFinalInsts1_41;
#line 1227 "modes.m"
    MR_Word check_hlds__modes__ArgTypes_42;

#line 1237 "modes.m"
    {
#line 1237 "modes.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__ModuleInfo_34);
    }
#line 1238 "modes.m"
    {
#line 1238 "modes.m"
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__Errors_35);
    }
#line 1252 "modes.m"
    if ((check_hlds__modes__Errors_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1253 "modes.m"
      {
#line 1254 "modes.m"
        check_hlds__modes__Changed0_38 = (MR_Integer) 0;
#line 1255 "modes.m"
        {
#line 1255 "modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__InstMap_39);
        }
#line 1253 "modes.m"
      }
#line 1252 "modes.m"
    else
#line 1246 "modes.m"
      {
#line 1250 "modes.m"
        check_hlds__modes__Changed0_38 = (MR_Integer) 1;
#line 1251 "modes.m"
        {
#line 1251 "modes.m"
          hlds__instmap__init_unreachable_1_p_0(&check_hlds__modes__InstMap_39);
        }
#line 1246 "modes.m"
      }
#line 1257 "modes.m"
    {
#line 1257 "modes.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__VarTypes_40);
    }
#line 1258 "modes.m"
    {
#line 1258 "modes.m"
      hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modes__InstMap_39, check_hlds__modes__HeadVars_9, &check_hlds__modes__VarFinalInsts1_41);
    }
#line 1259 "modes.m"
    {
#line 1259 "modes.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__modes__VarTypes_40, check_hlds__modes__HeadVars_9, &check_hlds__modes__ArgTypes_42);
    }
#line 1278 "modes.m"
    if ((check_hlds__modes__InferModes_10 == (MR_Integer) 0))
#line 1279 "modes.m"
      {
#line 1280 "modes.m"
        MR_Word check_hlds__modes___Changed1_51;

#line 1280 "modes.m"
        {
#line 1280 "modes.m"
          check_hlds__modes__check_final_insts_13_p_0(check_hlds__modes__HeadVars_9, check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14, check_hlds__modes__VarFinalInsts1_41, check_hlds__modes__InferModes_10, (MR_Integer) 0, (MR_Integer) 1, check_hlds__modes__ModuleInfo_34, check_hlds__modes__STATE_VARIABLE_Body_0_16, check_hlds__modes__STATE_VARIABLE_Body_17, (MR_Integer) 0, &check_hlds__modes___Changed1_51, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, check_hlds__modes__STATE_VARIABLE_ModeInfo_19);
        }
#line 1283 "modes.m"
        *check_hlds__modes__STATE_VARIABLE_FinalInsts_15 = check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14;
#line 1279 "modes.m"
      }
#line 1278 "modes.m"
    else
#line 1261 "modes.m"
      {
#line 1261 "modes.m"
        MR_Word check_hlds__modes__VarFinalInsts2_43;
#line 1261 "modes.m"
        MR_Word check_hlds__modes__PredId_44;
#line 1261 "modes.m"
        MR_Integer check_hlds__modes__ProcId_45;
#line 1261 "modes.m"
        MR_Word check_hlds__modes__ProcInfo_46;
#line 1261 "modes.m"
        MR_Word check_hlds__modes__ArgLives_47;
#line 1261 "modes.m"
        MR_Word check_hlds__modes__Changed1_48;
#line 1261 "modes.m"
        MR_Word check_hlds__modes__Changed2_49;
#line 1261 "modes.m"
        MR_Word check_hlds__modes__Changed_50;
#line 1261 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_43_57;
#line 1261 "modes.m"
        MR_Word check_hlds__modes__V_58_58;
#line 1261 "modes.m"
        MR_Word check_hlds__modes__V_59_59;
#line 1261 "modes.m"
        MR_Word check_hlds__modes__V_60_60;

#line 1262 "modes.m"
        {
#line 1262 "modes.m"
          check_hlds__mode_util__normalise_insts_4_p_0(check_hlds__modes__ModuleInfo_34, check_hlds__modes__ArgTypes_42, check_hlds__modes__VarFinalInsts1_41, &check_hlds__modes__VarFinalInsts2_43);
        }
#line 1267 "modes.m"
        {
#line 1267 "modes.m"
          check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__PredId_44);
        }
#line 1268 "modes.m"
        {
#line 1268 "modes.m"
          check_hlds__mode_info__mode_info_get_proc_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__ProcId_45);
        }
#line 1269 "modes.m"
        {
#line 1269 "modes.m"
          hlds__hlds_module__module_info_proc_info_4_p_0(check_hlds__modes__ModuleInfo_34, check_hlds__modes__PredId_44, check_hlds__modes__ProcId_45, &check_hlds__modes__ProcInfo_46);
        }
#line 1270 "modes.m"
        {
#line 1270 "modes.m"
          hlds__hlds_pred__proc_info_arglives_3_p_0(check_hlds__modes__ProcInfo_46, check_hlds__modes__ModuleInfo_34, &check_hlds__modes__ArgLives_47);
        }
#line 1271 "modes.m"
        {
#line 1271 "modes.m"
          check_hlds__modes__maybe_clobber_insts_3_p_0(check_hlds__modes__VarFinalInsts2_43, check_hlds__modes__ArgLives_47, check_hlds__modes__STATE_VARIABLE_FinalInsts_15);
        }
#line 1272 "modes.m"
        {
#line 1272 "modes.m"
          check_hlds__modes__check_final_insts_13_p_0(check_hlds__modes__HeadVars_9, check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14, *check_hlds__modes__STATE_VARIABLE_FinalInsts_15, check_hlds__modes__InferModes_10, (MR_Integer) 0, (MR_Integer) 1, check_hlds__modes__ModuleInfo_34, check_hlds__modes__STATE_VARIABLE_Body_0_16, check_hlds__modes__STATE_VARIABLE_Body_17, (MR_Integer) 0, &check_hlds__modes__Changed1_48, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__STATE_VARIABLE_ModeInfo_43_57);
        }
#line 1275 "modes.m"
        {
#line 1275 "modes.m"
          check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_43_57, &check_hlds__modes__Changed2_49);
        }
#line 1276 "modes.m"
        {
#line 1276 "modes.m"
          check_hlds__modes__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1276 "modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__modes__V_60_60, 0) = ((MR_Box) (check_hlds__modes__Changed2_49));
#line 1276 "modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__modes__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1276 "modes.m"
        }
#line 1276 "modes.m"
        {
#line 1276 "modes.m"
          check_hlds__modes__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1276 "modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__modes__V_59_59, 0) = ((MR_Box) (check_hlds__modes__Changed1_48));
#line 1276 "modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__modes__V_59_59, 1) = ((MR_Box) (check_hlds__modes__V_60_60));
#line 1276 "modes.m"
        }
#line 1276 "modes.m"
        {
#line 1276 "modes.m"
          check_hlds__modes__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1276 "modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__modes__V_58_58, 0) = ((MR_Box) (check_hlds__modes__Changed0_38));
#line 1276 "modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__modes__V_58_58, 1) = ((MR_Box) (check_hlds__modes__V_59_59));
#line 1276 "modes.m"
        }
#line 1276 "modes.m"
        {
#line 1276 "modes.m"
          mercury__bool__or_list_2_p_0(check_hlds__modes__V_58_58, &check_hlds__modes__Changed_50);
        }
#line 1277 "modes.m"
        {
#line 1277 "modes.m"
          check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(check_hlds__modes__Changed_50, check_hlds__modes__STATE_VARIABLE_ModeInfo_43_57, check_hlds__modes__STATE_VARIABLE_ModeInfo_19);
#line 1277 "modes.m"
          return;
        }
#line 1261 "modes.m"
      }
#line 1227 "modes.m"
  }
#line 1223 "modes.m"
}

#line 1178 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_switch_9_p_0(
#line 1178 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1178 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1178 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1178 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1178 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1178 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1178 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1178 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1178 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28)
#line 1178 "modes.m"
{
#line 1183 "modes.m"
  {
#line 1183 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1183 "modes.m"
    MR_Word check_hlds__modes__MainConsId_18;
#line 1183 "modes.m"
    MR_Word check_hlds__modes__OtherConsIds_19;
#line 1183 "modes.m"
    MR_Word check_hlds__modes__Goal0_20;
#line 1183 "modes.m"
    MR_Word check_hlds__modes__InstMap1_21;
#line 1183 "modes.m"
    MR_Word check_hlds__modes__Goal1_22;
#line 1183 "modes.m"
    MR_Word check_hlds__modes__InstMap_23;
#line 1183 "modes.m"
    MR_Word check_hlds__modes__Goal2_24;
#line 1183 "modes.m"
    MR_Word check_hlds__modes__Goal_26;
#line 1183 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30;
#line 1183 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31;
#line 1183 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1183 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33;
#line 1183 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35;
#line 1206 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_25;

#line 1184 "modes.m"
    {
#line 1184 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27, &check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30);
    }
#line 1185 "modes.m"
    check_hlds__modes__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 0)));
#line 1185 "modes.m"
    check_hlds__modes__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 1)));
#line 1185 "modes.m"
    check_hlds__modes__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 2)));
#line 1186 "modes.m"
    {
#line 1186 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31);
    }
#line 1188 "modes.m"
    {
#line 1188 "modes.m"
      check_hlds__modecheck_util__modecheck_functors_test_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__MainConsId_18, check_hlds__modes__OtherConsIds_19, check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32);
    }
#line 1190 "modes.m"
    {
#line 1190 "modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__InstMap1_21);
    }
#line 1191 "modes.m"
    {
#line 1191 "modes.m"
      check_hlds__modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modes__InstMap1_21);
    }
#line 1193 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1192 "modes.m"
      {
#line 1192 "modes.m"
        check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modes__Goal0_20, &check_hlds__modes__Goal1_22, check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33);
      }
#line 1193 "modes.m"
    else
#line 1197 "modes.m"
      {
#line 1197 "modes.m"
        {
#line 1197 "modes.m"
          check_hlds__modes__Goal1_22 = hlds__make_goal__true_goal_0_f_0();
        }
#line 1197 "modes.m"
        check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33 = check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1197 "modes.m"
      }
#line 1201 "modes.m"
    {
#line 1201 "modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__InstMap_23);
    }
#line 1202 "modes.m"
    {
#line 1202 "modes.m"
      check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__InstMap0_12, check_hlds__modes__InstMap_23, check_hlds__modes__Goal1_22, &check_hlds__modes__Goal2_24);
    }
#line 1203 "modes.m"
    {
#line 1203 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35);
    }
#line 1206 "modes.m"
    {
#line 1206 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_11, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_13, &check_hlds__modes___ArgFinalInsts_25, check_hlds__modes__Goal2_24, &check_hlds__modes__Goal_26, check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35, check_hlds__modes__STATE_VARIABLE_ModeInfo_28);
    }
#line 1208 "modes.m"
    {
#line 1208 "modes.m"
      MR_Word base;
#line 1208 "modes.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1208 "modes.m"
      *check_hlds__modes__Case_16 = base;
#line 1208 "modes.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__MainConsId_18));
#line 1208 "modes.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__OtherConsIds_19));
#line 1208 "modes.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modes__Goal_26));
#line 1208 "modes.m"
    }
#line 1183 "modes.m"
  }
#line 1178 "modes.m"
}

#line 1158 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_disj_11_p_0(
#line 1158 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_12,
#line 1158 "modes.m"
  MR_Word check_hlds__modes__HeadVars_13,
#line 1158 "modes.m"
  MR_Word check_hlds__modes__InstMap0_14,
#line 1158 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_15,
#line 1158 "modes.m"
  MR_Word check_hlds__modes__DisjDetism_16,
#line 1158 "modes.m"
  MR_Word check_hlds__modes__DisjNonLocals_17,
#line 1158 "modes.m"
  MR_Word check_hlds__modes__NondetLiveVars0_18,
#line 1158 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_19,
#line 1158 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_20,
#line 1158 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_24,
#line 1158 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_25)
#line 1158 "modes.m"
{
#line 1165 "modes.m"
  {
#line 1165 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1165 "modes.m"
    MR_Word check_hlds__modes__Disjunct1_22;
#line 1165 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_27_27;
#line 1165 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_28_28;
#line 1165 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_29_29;
#line 1165 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30;
#line 1165 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31;
#line 1165 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33;
#line 1175 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_23;

#line 1166 "modes.m"
    {
#line 1166 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_24, &check_hlds__modes__STATE_VARIABLE_ModeInfo_27_27);
    }
#line 1167 "modes.m"
    {
#line 1167 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_14, check_hlds__modes__STATE_VARIABLE_ModeInfo_27_27, &check_hlds__modes__STATE_VARIABLE_ModeInfo_28_28);
    }
#line 1168 "modes.m"
    {
#line 1168 "modes.m"
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__modes__NondetLiveVars0_18, check_hlds__modes__STATE_VARIABLE_ModeInfo_28_28, &check_hlds__modes__STATE_VARIABLE_ModeInfo_29_29);
    }
#line 1169 "modes.m"
    {
#line 1169 "modes.m"
      check_hlds__unique_modes__prepare_for_disjunct_5_p_0(check_hlds__modes__Disjunct0_19, check_hlds__modes__DisjDetism_16, check_hlds__modes__DisjNonLocals_17, check_hlds__modes__STATE_VARIABLE_ModeInfo_29_29, &check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30);
    }
#line 1171 "modes.m"
    {
#line 1171 "modes.m"
      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modes__Disjunct0_19, &check_hlds__modes__Disjunct1_22, check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31);
    }
#line 1172 "modes.m"
    {
#line 1172 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33);
    }
#line 1175 "modes.m"
    {
#line 1175 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_13, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_15, &check_hlds__modes___ArgFinalInsts_23, check_hlds__modes__Disjunct1_22, check_hlds__modes__Disjunct_20, check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, check_hlds__modes__STATE_VARIABLE_ModeInfo_25);
    }
#line 1165 "modes.m"
  }
#line 1158 "modes.m"
}

#line 1124 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_switch_9_p_0(
#line 1124 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1124 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1124 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1124 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1124 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1124 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1124 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1124 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1124 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28)
#line 1124 "modes.m"
{
#line 1129 "modes.m"
  {
#line 1129 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1129 "modes.m"
    MR_Word check_hlds__modes__MainConsId_18;
#line 1129 "modes.m"
    MR_Word check_hlds__modes__OtherConsIds_19;
#line 1129 "modes.m"
    MR_Word check_hlds__modes__Goal0_20;
#line 1129 "modes.m"
    MR_Word check_hlds__modes__InstMap1_21;
#line 1129 "modes.m"
    MR_Word check_hlds__modes__Goal1_22;
#line 1129 "modes.m"
    MR_Word check_hlds__modes__InstMap_23;
#line 1129 "modes.m"
    MR_Word check_hlds__modes__Goal2_24;
#line 1129 "modes.m"
    MR_Word check_hlds__modes__Goal_26;
#line 1129 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30;
#line 1129 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31;
#line 1129 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1129 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33;
#line 1129 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35;
#line 1154 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_25;

#line 1130 "modes.m"
    {
#line 1130 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27, &check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30);
    }
#line 1131 "modes.m"
    check_hlds__modes__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 0)));
#line 1131 "modes.m"
    check_hlds__modes__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 1)));
#line 1131 "modes.m"
    check_hlds__modes__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 2)));
#line 1132 "modes.m"
    {
#line 1132 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31);
    }
#line 1134 "modes.m"
    {
#line 1134 "modes.m"
      check_hlds__modecheck_util__modecheck_functors_test_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__MainConsId_18, check_hlds__modes__OtherConsIds_19, check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32);
    }
#line 1137 "modes.m"
    {
#line 1137 "modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__InstMap1_21);
    }
#line 1138 "modes.m"
    {
#line 1138 "modes.m"
      check_hlds__modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modes__InstMap1_21);
    }
#line 1141 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1139 "modes.m"
      {
#line 1139 "modes.m"
        {
#line 1139 "modes.m"
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modes__Goal0_20, &check_hlds__modes__Goal1_22, check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33);
        }
#line 1140 "modes.m"
        {
#line 1140 "modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__InstMap_23);
        }
#line 1139 "modes.m"
      }
#line 1141 "modes.m"
    else
#line 1145 "modes.m"
      {
#line 1145 "modes.m"
        {
#line 1145 "modes.m"
          check_hlds__modes__Goal1_22 = hlds__make_goal__true_goal_0_f_0();
        }
#line 1146 "modes.m"
        check_hlds__modes__InstMap_23 = check_hlds__modes__InstMap1_21;
#line 1146 "modes.m"
        check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33 = check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1145 "modes.m"
      }
#line 1150 "modes.m"
    {
#line 1150 "modes.m"
      check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__InstMap0_12, check_hlds__modes__InstMap_23, check_hlds__modes__Goal1_22, &check_hlds__modes__Goal2_24);
    }
#line 1151 "modes.m"
    {
#line 1151 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35);
    }
#line 1154 "modes.m"
    {
#line 1154 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_11, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_13, &check_hlds__modes___ArgFinalInsts_25, check_hlds__modes__Goal2_24, &check_hlds__modes__Goal_26, check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35, check_hlds__modes__STATE_VARIABLE_ModeInfo_28);
    }
#line 1156 "modes.m"
    {
#line 1156 "modes.m"
      MR_Word base;
#line 1156 "modes.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1156 "modes.m"
      *check_hlds__modes__Case_16 = base;
#line 1156 "modes.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__MainConsId_18));
#line 1156 "modes.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__OtherConsIds_19));
#line 1156 "modes.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modes__Goal_26));
#line 1156 "modes.m"
    }
#line 1129 "modes.m"
  }
#line 1124 "modes.m"
}

#line 1109 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_disj_8_p_0(
#line 1109 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_9,
#line 1109 "modes.m"
  MR_Word check_hlds__modes__HeadVars_10,
#line 1109 "modes.m"
  MR_Word check_hlds__modes__InstMap0_11,
#line 1109 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_12,
#line 1109 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_13,
#line 1109 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_14,
#line 1109 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
#line 1109 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19)
#line 1109 "modes.m"
{
#line 1114 "modes.m"
  {
#line 1114 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1114 "modes.m"
    MR_Word check_hlds__modes__Disjunct1_16;
#line 1114 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_21_21;
#line 1114 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_22_22;
#line 1114 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_23_23;
#line 1114 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_25_25;
#line 1121 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_17;

#line 1115 "modes.m"
    {
#line 1115 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_9, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__STATE_VARIABLE_ModeInfo_21_21);
    }
#line 1116 "modes.m"
    {
#line 1116 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_11, check_hlds__modes__STATE_VARIABLE_ModeInfo_21_21, &check_hlds__modes__STATE_VARIABLE_ModeInfo_22_22);
    }
#line 1117 "modes.m"
    {
#line 1117 "modes.m"
      check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modes__Disjunct0_13, &check_hlds__modes__Disjunct1_16, check_hlds__modes__STATE_VARIABLE_ModeInfo_22_22, &check_hlds__modes__STATE_VARIABLE_ModeInfo_23_23);
    }
#line 1118 "modes.m"
    {
#line 1118 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_9, check_hlds__modes__STATE_VARIABLE_ModeInfo_23_23, &check_hlds__modes__STATE_VARIABLE_ModeInfo_25_25);
    }
#line 1121 "modes.m"
    {
#line 1121 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_10, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_12, &check_hlds__modes___ArgFinalInsts_17, check_hlds__modes__Disjunct1_16, check_hlds__modes__Disjunct_14, check_hlds__modes__STATE_VARIABLE_ModeInfo_25_25, check_hlds__modes__STATE_VARIABLE_ModeInfo_19);
    }
#line 1114 "modes.m"
  }
#line 1109 "modes.m"
}

#line 1075 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0_1(
#line 1075 "modes.m"
  MR_Box check_hlds__modes__closure_arg)
#line 1075 "modes.m"
{
#line 1075 "modes.m"
  {
#line 1075 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1075 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;

#line 1075 "modes.m"
    {
#line 1075 "modes.m"
      return check_hlds__modes__succeeded = check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1075__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))));
    }
#line 1075 "modes.m"
    return check_hlds__modes__succeeded;
#line 1075 "modes.m"
  }
#line 1075 "modes.m"
}

#line 958 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0(
#line 958 "modes.m"
  MR_Word check_hlds__modes__HowToCheckGoal_8,
#line 958 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26,
#line 958 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_OldPredTable_27,
#line 958 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28,
#line 958 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_29,
#line 958 "modes.m"
  MR_Word * check_hlds__modes__Changed_11,
#line 958 "modes.m"
  MR_Word * check_hlds__modes__Specs_12)
#line 958 "modes.m"
{
#line 963 "modes.m"
  {
#line 963 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 963 "modes.m"
    MR_Word check_hlds__modes__Requests0_13;
#line 963 "modes.m"
    MR_Word check_hlds__modes__RequestQueue0_14;
#line 993 "modes.m"
    MR_Word check_hlds__modes__PredProcId_15;
#line 993 "modes.m"
    MR_Word check_hlds__modes__RequestQueue1_16;
#line 966 "modes.m"
    MR_Box check_hlds__modes__conv0_PredProcId_15;

#line 964 "modes.m"
    {
#line 964 "modes.m"
      hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28, &check_hlds__modes__Requests0_13);
    }
#line 965 "modes.m"
    {
#line 965 "modes.m"
      check_hlds__unify_proc__get_req_queue_2_p_0(check_hlds__modes__Requests0_13, &check_hlds__modes__RequestQueue0_14);
    }
#line 966 "modes.m"
    {
#line 966 "modes.m"
      check_hlds__modes__succeeded = mercury__queue__get_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, &check_hlds__modes__conv0_PredProcId_15, check_hlds__modes__RequestQueue0_14, &check_hlds__modes__RequestQueue1_16);
    }
#line 966 "modes.m"
    if (check_hlds__modes__succeeded)
#line 966 "modes.m"
      {
#line 966 "modes.m"
        check_hlds__modes__PredProcId_15 = ((MR_Word) check_hlds__modes__conv0_PredProcId_15);
#line 966 "modes.m"
        check_hlds__modes__succeeded = MR_TRUE;
#line 966 "modes.m"
      }
#line 993 "modes.m"
    if (check_hlds__modes__succeeded)
#line 967 "modes.m"
      {
#line 967 "modes.m"
        MR_Word check_hlds__modes__Requests1_17;
#line 967 "modes.m"
        MR_Word check_hlds__modes__PredId_18;
#line 967 "modes.m"
        MR_Word check_hlds__modes__ValidPredIds_20;
#line 967 "modes.m"
        MR_Word check_hlds__modes__HeadChanged_22;
#line 967 "modes.m"
        MR_Word check_hlds__modes__HeadSpecs_23;
#line 967 "modes.m"
        MR_Word check_hlds__modes__TailChanged_24;
#line 967 "modes.m"
        MR_Word check_hlds__modes__TailSpecs_25;
#line 967 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30;
#line 967 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31;
#line 967 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_OldPredTable_34_34;
#line 967 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35;
#line 976 "modes.m"
        MR_Integer check_hlds__modes___ProcId_19;

#line 967 "modes.m"
        {
#line 967 "modes.m"
          check_hlds__unify_proc__set_req_queue_3_p_0(check_hlds__modes__RequestQueue1_16, check_hlds__modes__Requests0_13, &check_hlds__modes__Requests1_17);
        }
#line 968 "modes.m"
        {
#line 968 "modes.m"
          hlds__hlds_module__module_info_set_proc_requests_3_p_0(check_hlds__modes__Requests1_17, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30);
        }
#line 976 "modes.m"
        check_hlds__modes__PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 0)));
#line 976 "modes.m"
        check_hlds__modes___ProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 1)));
#line 977 "modes.m"
        {
#line 977 "modes.m"
          hlds__hlds_module__module_info_get_valid_predids_3_p_0(&check_hlds__modes__ValidPredIds_20, check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31);
        }
#line 978 "modes.m"
        {
#line 978 "modes.m"
          check_hlds__modes__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (check_hlds__modes__PredId_18)), check_hlds__modes__ValidPredIds_20);
        }
#line 985 "modes.m"
        if (check_hlds__modes__succeeded)
#line 982 "modes.m"
          {
#line 982 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_61_111;
#line 982 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_62_112;
#line 982 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_63_113;
#line 982 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_64_114;
#line 982 "modes.m"
            MR_Word check_hlds__modes__PredId_70;
#line 982 "modes.m"
            MR_Integer check_hlds__modes__ProcId_71;
#line 982 "modes.m"
            MR_Word check_hlds__modes__Preds0_72;
#line 982 "modes.m"
            MR_Word check_hlds__modes__PredInfo0_73;
#line 982 "modes.m"
            MR_Word check_hlds__modes__Procs0_74;
#line 982 "modes.m"
            MR_Word check_hlds__modes__ProcInfo0_75;
#line 982 "modes.m"
            MR_Word check_hlds__modes__ProcInfo1_76;
#line 982 "modes.m"
            MR_Word check_hlds__modes__Procs1_77;
#line 982 "modes.m"
            MR_Word check_hlds__modes__PredInfo1_78;
#line 982 "modes.m"
            MR_Word check_hlds__modes__Preds1_79;
#line 982 "modes.m"
            MR_Word check_hlds__modes__ModeSpecs_80;
#line 982 "modes.m"
            MR_Word check_hlds__modes__Globals_81;
#line 982 "modes.m"
            MR_Word check_hlds__modes__ModeErrors_82;
#line 982 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_46_96;
#line 982 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97;
#line 982 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Changed_48_98;
#line 979 "modes.m"
            MR_Word check_hlds__modes__Globals_47;
#line 979 "modes.m"
            MR_Word check_hlds__modes__VeryVerbose_48;
#line 1035 "modes.m"
            MR_Box check_hlds__modes__conv1_PredInfo0_73;
#line 1037 "modes.m"
            MR_Box check_hlds__modes__conv2_ProcInfo0_75;

#line 1002 "modes.m"
            {
#line 1002 "modes.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31, &check_hlds__modes__Globals_47);
            }
#line 1003 "modes.m"
            {
#line 1003 "modes.m"
              libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_47, (MR_Integer) 45, &check_hlds__modes__VeryVerbose_48);
            }
#line 1021 "modes.m"
            if ((check_hlds__modes__VeryVerbose_48 == (MR_Integer) 0))
#line 1022 "modes.m"
              {
#line 1022 "modes.m"
              }
#line 1021 "modes.m"
            else
#line 1005 "modes.m"
              {
#line 1009 "modes.m"
                if ((check_hlds__modes__HowToCheckGoal_8 == (MR_Integer) 0))
#line 1007 "modes.m"
                  {
#line 1008 "modes.m"
                    {
#line 1008 "modes.m"
                      mercury__io__write_string_3_p_0((MR_String) "% Mode-analyzing ");
                    }
#line 1007 "modes.m"
                  }
#line 1009 "modes.m"
                else
#line 1010 "modes.m"
                  {
#line 1011 "modes.m"
                    {
#line 1011 "modes.m"
                      mercury__io__write_string_3_p_0((MR_String) "% Analyzing modes, determinism, and unique-modes for\n% ");
                    }
#line 1010 "modes.m"
                  }
#line 1014 "modes.m"
                {
#line 1014 "modes.m"
                  hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31, check_hlds__modes__PredProcId_15);
                }
#line 1015 "modes.m"
                {
#line 1015 "modes.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 1005 "modes.m"
              }
#line 1032 "modes.m"
            check_hlds__modes__PredId_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 0)));
#line 1032 "modes.m"
            check_hlds__modes__ProcId_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 1)));
#line 1034 "modes.m"
            {
#line 1034 "modes.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31, &check_hlds__modes__Preds0_72);
            }
#line 4394 "check_hlds.modes.c"
            check_hlds__modes__TypeCtorInfo_61_111 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 4396 "check_hlds.modes.c"
            check_hlds__modes__TypeCtorInfo_62_112 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 1035 "modes.m"
            {
#line 1035 "modes.m"
              mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_61_111, check_hlds__modes__TypeCtorInfo_62_112, check_hlds__modes__Preds0_72, ((MR_Box) (check_hlds__modes__PredId_70)), &check_hlds__modes__conv1_PredInfo0_73);
            }
#line 1035 "modes.m"
            check_hlds__modes__PredInfo0_73 = ((MR_Word) check_hlds__modes__conv1_PredInfo0_73);
#line 1036 "modes.m"
            {
#line 1036 "modes.m"
              hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__modes__PredInfo0_73, &check_hlds__modes__Procs0_74);
            }
#line 4410 "check_hlds.modes.c"
            check_hlds__modes__TypeCtorInfo_63_113 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 4412 "check_hlds.modes.c"
            check_hlds__modes__TypeCtorInfo_64_114 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 1037 "modes.m"
            {
#line 1037 "modes.m"
              mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_63_113, check_hlds__modes__TypeCtorInfo_64_114, check_hlds__modes__Procs0_74, ((MR_Box) (check_hlds__modes__ProcId_71)), &check_hlds__modes__conv2_ProcInfo0_75);
            }
#line 1037 "modes.m"
            check_hlds__modes__ProcInfo0_75 = ((MR_Word) check_hlds__modes__conv2_ProcInfo0_75);
#line 1039 "modes.m"
            {
#line 1039 "modes.m"
              hlds__hlds_pred__proc_info_set_can_process_3_p_0((MR_Integer) 1, check_hlds__modes__ProcInfo0_75, &check_hlds__modes__ProcInfo1_76);
            }
#line 1041 "modes.m"
            {
#line 1041 "modes.m"
              mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_63_113, check_hlds__modes__TypeCtorInfo_64_114, ((MR_Box) (check_hlds__modes__ProcId_71)), ((MR_Box) (check_hlds__modes__ProcInfo1_76)), check_hlds__modes__Procs0_74, &check_hlds__modes__Procs1_77);
            }
#line 1042 "modes.m"
            {
#line 1042 "modes.m"
              hlds__hlds_pred__pred_info_set_procedures_3_p_0(check_hlds__modes__Procs1_77, check_hlds__modes__PredInfo0_73, &check_hlds__modes__PredInfo1_78);
            }
#line 1043 "modes.m"
            {
#line 1043 "modes.m"
              mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_61_111, check_hlds__modes__TypeCtorInfo_62_112, ((MR_Box) (check_hlds__modes__PredId_70)), ((MR_Box) (check_hlds__modes__PredInfo1_78)), check_hlds__modes__Preds0_72, &check_hlds__modes__Preds1_79);
            }
#line 1044 "modes.m"
            {
#line 1044 "modes.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__Preds1_79, check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_46_96);
            }
#line 620 "modes.m"
            {
#line 620 "modes.m"
              check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_71, check_hlds__modes__PredId_70, (MR_Integer) 0, (MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ModuleInfo_46_96, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97, (MR_Integer) 0, &check_hlds__modes__STATE_VARIABLE_Changed_48_98, &check_hlds__modes__ModeSpecs_80);
            }
#line 1049 "modes.m"
            {
#line 1049 "modes.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97, &check_hlds__modes__Globals_81);
            }
#line 1050 "modes.m"
            {
#line 1050 "modes.m"
              check_hlds__modes__ModeErrors_82 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__modes__Globals_81, check_hlds__modes__ModeSpecs_80);
            }
#line 1055 "modes.m"
            if ((check_hlds__modes__ModeErrors_82 == (MR_Integer) 0))
#line 1082 "modes.m"
              if ((check_hlds__modes__HowToCheckGoal_8 == (MR_Integer) 0))
#line 1083 "modes.m"
                {
#line 1084 "modes.m"
                  check_hlds__modes__HeadSpecs_23 = check_hlds__modes__ModeSpecs_80;
#line 1084 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_OldPredTable_34_34 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 1084 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97;
#line 1084 "modes.m"
                  check_hlds__modes__HeadChanged_22 = check_hlds__modes__STATE_VARIABLE_Changed_48_98;
#line 1083 "modes.m"
                }
#line 1082 "modes.m"
              else
#line 1058 "modes.m"
                {
#line 1058 "modes.m"
                  MR_Word check_hlds__modes__TypeCtorInfo_19_151;
#line 1058 "modes.m"
                  MR_Word check_hlds__modes__TypeCtorInfo_20_152;
#line 1058 "modes.m"
                  MR_Word check_hlds__modes__Preds2_83;
#line 1058 "modes.m"
                  MR_Word check_hlds__modes__PredInfo2_84;
#line 1058 "modes.m"
                  MR_Word check_hlds__modes__Procs2_85;
#line 1058 "modes.m"
                  MR_Word check_hlds__modes__ProcInfo2_86;
#line 1058 "modes.m"
                  MR_Word check_hlds__modes__SwitchDetectInfo_87;
#line 1058 "modes.m"
                  MR_Word check_hlds__modes__ProcInfo3_88;
#line 1058 "modes.m"
                  MR_Word check_hlds__modes__Procs3_89;
#line 1058 "modes.m"
                  MR_Word check_hlds__modes__PredInfo3_90;
#line 1058 "modes.m"
                  MR_Word check_hlds__modes__Preds3_91;
#line 1058 "modes.m"
                  MR_Word check_hlds__modes__DetismSpecs_92;
#line 1058 "modes.m"
                  MR_Word check_hlds__modes__NewChanged_93;
#line 1058 "modes.m"
                  MR_Word check_hlds__modes__UniqueSpecs_94;
#line 1058 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_49_99;
#line 1058 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_50_100;
#line 1058 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_101;
#line 1058 "modes.m"
                  MR_Word check_hlds__modes__V_102_102;
#line 1058 "modes.m"
                  MR_Word check_hlds__modes__ProcInfo_145;
#line 1058 "modes.m"
                  MR_Word check_hlds__modes__OldPredInfo0_146;
#line 1058 "modes.m"
                  MR_Word check_hlds__modes__OldProcTable0_147;
#line 1058 "modes.m"
                  MR_Word check_hlds__modes__OldProcTable_148;
#line 1058 "modes.m"
                  MR_Word check_hlds__modes__OldPredInfo_149;
#line 1061 "modes.m"
                  MR_Box check_hlds__modes__conv3_PredInfo2_84;
#line 1063 "modes.m"
                  MR_Box check_hlds__modes__conv4_ProcInfo2_86;
#line 1095 "modes.m"
                  MR_Word check_hlds__modes___PredInfo_144;
#line 1097 "modes.m"
                  MR_Box check_hlds__modes__conv5_OldPredInfo0_146;

#line 1060 "modes.m"
                  {
#line 1060 "modes.m"
                    hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97, &check_hlds__modes__Preds2_83);
                  }
#line 1061 "modes.m"
                  {
#line 1061 "modes.m"
                    mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_61_111, check_hlds__modes__TypeCtorInfo_62_112, check_hlds__modes__Preds2_83, ((MR_Box) (check_hlds__modes__PredId_70)), &check_hlds__modes__conv3_PredInfo2_84);
                  }
#line 1061 "modes.m"
                  check_hlds__modes__PredInfo2_84 = ((MR_Word) check_hlds__modes__conv3_PredInfo2_84);
#line 1062 "modes.m"
                  {
#line 1062 "modes.m"
                    hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__modes__PredInfo2_84, &check_hlds__modes__Procs2_85);
                  }
#line 1063 "modes.m"
                  {
#line 1063 "modes.m"
                    mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_63_113, check_hlds__modes__TypeCtorInfo_64_114, check_hlds__modes__Procs2_85, ((MR_Box) (check_hlds__modes__ProcId_71)), &check_hlds__modes__conv4_ProcInfo2_86);
                  }
#line 1063 "modes.m"
                  check_hlds__modes__ProcInfo2_86 = ((MR_Word) check_hlds__modes__conv4_ProcInfo2_86);
#line 1065 "modes.m"
                  {
#line 1065 "modes.m"
                    check_hlds__modes__SwitchDetectInfo_87 = check_hlds__switch_detection__init_switch_detect_info_1_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97);
                  }
#line 1066 "modes.m"
                  {
#line 1066 "modes.m"
                    check_hlds__switch_detection__detect_switches_in_proc_3_p_0(check_hlds__modes__SwitchDetectInfo_87, check_hlds__modes__ProcInfo2_86, &check_hlds__modes__ProcInfo3_88);
                  }
#line 1068 "modes.m"
                  {
#line 1068 "modes.m"
                    mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_63_113, check_hlds__modes__TypeCtorInfo_64_114, ((MR_Box) (check_hlds__modes__ProcId_71)), ((MR_Box) (check_hlds__modes__ProcInfo3_88)), check_hlds__modes__Procs2_85, &check_hlds__modes__Procs3_89);
                  }
#line 1069 "modes.m"
                  {
#line 1069 "modes.m"
                    hlds__hlds_pred__pred_info_set_procedures_3_p_0(check_hlds__modes__Procs3_89, check_hlds__modes__PredInfo2_84, &check_hlds__modes__PredInfo3_90);
                  }
#line 1070 "modes.m"
                  {
#line 1070 "modes.m"
                    mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_61_111, check_hlds__modes__TypeCtorInfo_62_112, ((MR_Box) (check_hlds__modes__PredId_70)), ((MR_Box) (check_hlds__modes__PredInfo3_90)), check_hlds__modes__Preds2_83, &check_hlds__modes__Preds3_91);
                  }
#line 1071 "modes.m"
                  {
#line 1071 "modes.m"
                    hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__Preds3_91, check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_49_99);
                  }
#line 1073 "modes.m"
                  {
#line 1073 "modes.m"
                    check_hlds__cse_detection__detect_cse_in_proc_4_p_0(check_hlds__modes__PredId_70, check_hlds__modes__ProcId_71, check_hlds__modes__STATE_VARIABLE_ModuleInfo_49_99, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_50_100);
                  }
#line 1074 "modes.m"
                  {
#line 1074 "modes.m"
                    check_hlds__det_analysis__determinism_check_proc_5_p_0(check_hlds__modes__ProcId_71, check_hlds__modes__PredId_70, check_hlds__modes__STATE_VARIABLE_ModuleInfo_50_100, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_101, &check_hlds__modes__DetismSpecs_92);
                  }
#line 1075 "modes.m"
                  {
#line 1075 "modes.m"
                    check_hlds__modes__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1075 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_102_102, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_9[0]));
#line 1075 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_102_102, 1) = ((MR_Box) (check_hlds__modes__modecheck_queued_procs_7_p_0_1));
#line 1075 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_102_102, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1075 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_102_102, 3) = ((MR_Box) (check_hlds__modes__DetismSpecs_92));
#line 1075 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_102_102, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1075 "modes.m"
                  }
#line 1075 "modes.m"
                  {
#line 1075 "modes.m"
                    mercury__require__expect_4_p_0(check_hlds__modes__V_102_102, (MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.modecheck_queued_proc\'/8", (MR_String) "found detism error");
                  }
#line 1095 "modes.m"
                  {
#line 1095 "modes.m"
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_101, check_hlds__modes__PredId_70, check_hlds__modes__ProcId_71, &check_hlds__modes___PredInfo_144, &check_hlds__modes__ProcInfo_145);
                  }
#line 4626 "check_hlds.modes.c"
                  check_hlds__modes__TypeCtorInfo_19_151 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 4628 "check_hlds.modes.c"
                  check_hlds__modes__TypeCtorInfo_20_152 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 1097 "modes.m"
                  {
#line 1097 "modes.m"
                    mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_19_151, check_hlds__modes__TypeCtorInfo_20_152, check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26, ((MR_Box) (check_hlds__modes__PredId_70)), &check_hlds__modes__conv5_OldPredInfo0_146);
                  }
#line 1097 "modes.m"
                  check_hlds__modes__OldPredInfo0_146 = ((MR_Word) check_hlds__modes__conv5_OldPredInfo0_146);
#line 1098 "modes.m"
                  {
#line 1098 "modes.m"
                    hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__modes__OldPredInfo0_146, &check_hlds__modes__OldProcTable0_147);
                  }
#line 1099 "modes.m"
                  {
#line 1099 "modes.m"
                    mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (check_hlds__modes__ProcId_71)), ((MR_Box) (check_hlds__modes__ProcInfo_145)), check_hlds__modes__OldProcTable0_147, &check_hlds__modes__OldProcTable_148);
                  }
#line 1100 "modes.m"
                  {
#line 1100 "modes.m"
                    hlds__hlds_pred__pred_info_set_procedures_3_p_0(check_hlds__modes__OldProcTable_148, check_hlds__modes__OldPredInfo0_146, &check_hlds__modes__OldPredInfo_149);
                  }
#line 1101 "modes.m"
                  {
#line 1101 "modes.m"
                    mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_19_151, check_hlds__modes__TypeCtorInfo_20_152, ((MR_Box) (check_hlds__modes__PredId_70)), ((MR_Box) (check_hlds__modes__OldPredInfo_149)), check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26, &check_hlds__modes__STATE_VARIABLE_OldPredTable_34_34);
                  }
#line 1078 "modes.m"
                  {
#line 1078 "modes.m"
                    check_hlds__unique_modes__unique_modes_check_proc_6_p_0(check_hlds__modes__ProcId_71, check_hlds__modes__PredId_70, check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_101, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35, &check_hlds__modes__NewChanged_93, &check_hlds__modes__UniqueSpecs_94);
                  }
#line 1080 "modes.m"
                  {
#line 1080 "modes.m"
                    mercury__bool__or_3_p_0(check_hlds__modes__NewChanged_93, check_hlds__modes__STATE_VARIABLE_Changed_48_98, &check_hlds__modes__HeadChanged_22);
                  }
#line 1081 "modes.m"
                  {
#line 1081 "modes.m"
                    check_hlds__modes__HeadSpecs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__ModeSpecs_80, check_hlds__modes__UniqueSpecs_94);
                  }
#line 1058 "modes.m"
                }
#line 1055 "modes.m"
            else
#line 1052 "modes.m"
              {
#line 1053 "modes.m"
                {
#line 1053 "modes.m"
                  hlds__hlds_module__module_info_remove_predid_3_p_0(check_hlds__modes__PredId_70, check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35);
                }
#line 1054 "modes.m"
                check_hlds__modes__HeadSpecs_23 = check_hlds__modes__ModeSpecs_80;
#line 1054 "modes.m"
                check_hlds__modes__STATE_VARIABLE_OldPredTable_34_34 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 1054 "modes.m"
                check_hlds__modes__HeadChanged_22 = check_hlds__modes__STATE_VARIABLE_Changed_48_98;
#line 1052 "modes.m"
              }
#line 982 "modes.m"
          }
#line 985 "modes.m"
        else
#line 986 "modes.m"
          {
#line 986 "modes.m"
            check_hlds__modes__HeadSpecs_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 987 "modes.m"
            check_hlds__modes__HeadChanged_22 = (MR_Integer) 0;
#line 987 "modes.m"
            check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31;
#line 987 "modes.m"
            check_hlds__modes__STATE_VARIABLE_OldPredTable_34_34 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 986 "modes.m"
          }
#line 989 "modes.m"
        {
#line 989 "modes.m"
          check_hlds__modes__modecheck_queued_procs_7_p_0(check_hlds__modes__HowToCheckGoal_8, check_hlds__modes__STATE_VARIABLE_OldPredTable_34_34, check_hlds__modes__STATE_VARIABLE_OldPredTable_27, check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35, check_hlds__modes__STATE_VARIABLE_ModuleInfo_29, &check_hlds__modes__TailChanged_24, &check_hlds__modes__TailSpecs_25);
        }
#line 991 "modes.m"
        {
#line 991 "modes.m"
          mercury__bool__or_3_p_0(check_hlds__modes__HeadChanged_22, check_hlds__modes__TailChanged_24, check_hlds__modes__Changed_11);
        }
#line 992 "modes.m"
        {
#line 992 "modes.m"
          *check_hlds__modes__Specs_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__HeadSpecs_23, check_hlds__modes__TailSpecs_25);
        }
#line 967 "modes.m"
      }
#line 993 "modes.m"
    else
#line 994 "modes.m"
      {
#line 994 "modes.m"
        *check_hlds__modes__Changed_11 = (MR_Integer) 0;
#line 995 "modes.m"
        *check_hlds__modes__Specs_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 995 "modes.m"
        *check_hlds__modes__STATE_VARIABLE_ModuleInfo_29 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28;
#line 995 "modes.m"
        *check_hlds__modes__STATE_VARIABLE_OldPredTable_27 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 994 "modes.m"
      }
#line 963 "modes.m"
  }
#line 958 "modes.m"
}

#line 909 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_5(
#line 909 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 909 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 909 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 909 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 909 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4)
#line 909 "modes.m"
{
#line 909 "modes.m"
  {
#line 909 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 909 "modes.m"
    MR_Word check_hlds__modes__conv10_Case_16;
#line 909 "modes.m"
    MR_Word check_hlds__modes__conv9_STATE_VARIABLE_ModeInfo_28;

#line 909 "modes.m"
    {
#line 909 "modes.m"
      check_hlds__modes__unique_modecheck_clause_switch_9_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 7))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv10_Case_16, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv9_STATE_VARIABLE_ModeInfo_28);
    }
#line 909 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv10_Case_16));
#line 909 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv9_STATE_VARIABLE_ModeInfo_28));
#line 909 "modes.m"
  }
#line 909 "modes.m"
}

#line 901 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_4(
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
    MR_Word check_hlds__modes__conv7_Disjunct_20;
#line 901 "modes.m"
    MR_Word check_hlds__modes__conv6_STATE_VARIABLE_ModeInfo_25;

#line 901 "modes.m"
    {
#line 901 "modes.m"
      check_hlds__modes__unique_modecheck_clause_disj_11_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 9))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv7_Disjunct_20, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv6_STATE_VARIABLE_ModeInfo_25);
    }
#line 901 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv7_Disjunct_20));
#line 901 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv6_STATE_VARIABLE_ModeInfo_25));
#line 901 "modes.m"
  }
#line 901 "modes.m"
}

#line 875 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_3(
#line 875 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 875 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 875 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 875 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 875 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4)
#line 875 "modes.m"
{
#line 875 "modes.m"
  {
#line 875 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 875 "modes.m"
    MR_Word check_hlds__modes__conv4_Case_16;
#line 875 "modes.m"
    MR_Word check_hlds__modes__conv3_STATE_VARIABLE_ModeInfo_28;

#line 875 "modes.m"
    {
#line 875 "modes.m"
      check_hlds__modes__modecheck_clause_switch_9_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 7))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv4_Case_16, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv3_STATE_VARIABLE_ModeInfo_28);
    }
#line 875 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv4_Case_16));
#line 875 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv3_STATE_VARIABLE_ModeInfo_28));
#line 875 "modes.m"
  }
#line 875 "modes.m"
}

#line 868 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_2(
#line 868 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 868 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 868 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 868 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 868 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4)
#line 868 "modes.m"
{
#line 868 "modes.m"
  {
#line 868 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 868 "modes.m"
    MR_Word check_hlds__modes__conv1_Disjunct_14;
#line 868 "modes.m"
    MR_Word check_hlds__modes__conv0_STATE_VARIABLE_ModeInfo_19;

#line 868 "modes.m"
    {
#line 868 "modes.m"
      check_hlds__modes__modecheck_clause_disj_8_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv1_Disjunct_14, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv0_STATE_VARIABLE_ModeInfo_19);
    }
#line 868 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv1_Disjunct_14));
#line 868 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv0_STATE_VARIABLE_ModeInfo_19));
#line 868 "modes.m"
  }
#line 868 "modes.m"
}

#line 849 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_1(
#line 849 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 849 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1)
#line 849 "modes.m"
{
#line 849 "modes.m"
  {
#line 849 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 849 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;

#line 849 "modes.m"
    {
#line 849 "modes.m"
      return check_hlds__modes__succeeded = check_hlds__type_util__var_is_or_may_contain_solver_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modes__wrapper_arg_1));
    }
#line 849 "modes.m"
    return check_hlds__modes__succeeded;
#line 849 "modes.m"
  }
#line 849 "modes.m"
}

#line 821 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0(
#line 821 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_16,
#line 821 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_17,
#line 821 "modes.m"
  MR_Word check_hlds__modes__InferModes_18,
#line 821 "modes.m"
  MR_Word check_hlds__modes__Markers_19,
#line 821 "modes.m"
  MR_Word check_hlds__modes__IsUnifyPred_20,
#line 821 "modes.m"
  MR_Word check_hlds__modes__PredId_21,
#line 821 "modes.m"
  MR_Integer check_hlds__modes__ProcId_22,
#line 821 "modes.m"
  MR_Word check_hlds__modes__Body0_23,
#line 821 "modes.m"
  MR_Word * check_hlds__modes__Body_24,
#line 821 "modes.m"
  MR_Word check_hlds__modes__HeadVars_25,
#line 821 "modes.m"
  MR_Word check_hlds__modes__InstMap0_26,
#line 821 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_27,
#line 821 "modes.m"
  MR_Word * check_hlds__modes__ArgFinalInsts_28,
#line 821 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66,
#line 821 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_67)
#line 821 "modes.m"
{
#line 829 "modes.m"
  {
#line 829 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 829 "modes.m"
    MR_String check_hlds__modes__CheckpointMsg_30;
#line 829 "modes.m"
    MR_Integer check_hlds__modes__V_71_71;
#line 829 "modes.m"
    MR_Integer check_hlds__modes__V_74_74;
#line 829 "modes.m"
    MR_String check_hlds__modes__V_155_155;
#line 829 "modes.m"
    MR_String check_hlds__modes__V_157_157;
#line 829 "modes.m"
    MR_String check_hlds__modes__V_158_158;
#line 829 "modes.m"
    MR_String check_hlds__modes__V_159_159;
#line 925 "modes.m"
    MR_Word check_hlds__modes__BodyGoalInfo0_32;
#line 925 "modes.m"
    MR_Word check_hlds__modes__ClausesForm0_36;
#line 925 "modes.m"
    MR_Word check_hlds__modes__BodyNonLocals_42;
#line 834 "modes.m"
    MR_Word check_hlds__modes__TypeInfo_123_123;
#line 834 "modes.m"
    MR_Word check_hlds__modes__TypeCtorInfo_125_125;
#line 834 "modes.m"
    MR_Word check_hlds__modes__BodyGoalExpr0_31;
#line 834 "modes.m"
    MR_Word check_hlds__modes__VarTypes0_43;
#line 834 "modes.m"
    MR_Word check_hlds__modes__SolverNonLocals_44;
#line 834 "modes.m"
    MR_Word check_hlds__modes__V_76_76;
#line 834 "modes.m"
    MR_Word check_hlds__modes__V_77_77;
#line 834 "modes.m"
    MR_Word check_hlds__modes__V_78_78;

#line 831 "modes.m"
    {
#line 831 "modes.m"
      check_hlds__modes__V_71_71 = hlds__hlds_pred__pred_id_to_int_1_f_0(check_hlds__modes__PredId_21);
    }
#line 831 "modes.m"
    {
#line 831 "modes.m"
      check_hlds__modes__V_74_74 = hlds__hlds_pred__proc_id_to_int_1_f_0(check_hlds__modes__ProcId_22);
    }
#line 5009 "check_hlds.modes.c"
    {
#line 5011 "check_hlds.modes.c"
      check_hlds__modes__V_155_155 = mercury__string__int_to_string_1_f_0(check_hlds__modes__V_74_74);
    }
#line 5014 "check_hlds.modes.c"
    {
#line 5016 "check_hlds.modes.c"
      check_hlds__modes__V_157_157 = mercury__string__f_43_43_2_f_0((MR_String) "_", check_hlds__modes__V_155_155);
    }
#line 5019 "check_hlds.modes.c"
    {
#line 5021 "check_hlds.modes.c"
      check_hlds__modes__V_158_158 = mercury__string__int_to_string_1_f_0(check_hlds__modes__V_71_71);
    }
#line 5024 "check_hlds.modes.c"
    {
#line 5026 "check_hlds.modes.c"
      check_hlds__modes__V_159_159 = mercury__string__f_43_43_2_f_0(check_hlds__modes__V_158_158, check_hlds__modes__V_157_157);
    }
#line 5029 "check_hlds.modes.c"
    {
#line 5031 "check_hlds.modes.c"
      check_hlds__modes__CheckpointMsg_30 = mercury__string__f_43_43_2_f_0((MR_String) "procedure_", check_hlds__modes__V_159_159);
    }
#line 834 "modes.m"
    check_hlds__modes__succeeded = (check_hlds__modes__InferModes_18 == (MR_Integer) 0);
#line 834 "modes.m"
    if (check_hlds__modes__succeeded)
#line 834 "modes.m"
      {
#line 835 "modes.m"
        check_hlds__modes__V_76_76 = (MR_Integer) 21;
#line 835 "modes.m"
        {
#line 835 "modes.m"
          check_hlds__modes__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_19, check_hlds__modes__V_76_76);
        }
#line 834 "modes.m"
        if (check_hlds__modes__succeeded)
#line 834 "modes.m"
          {
#line 836 "modes.m"
            check_hlds__modes__BodyGoalExpr0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Body0_23, (MR_Integer) 0)));
#line 836 "modes.m"
            check_hlds__modes__BodyGoalInfo0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Body0_23, (MR_Integer) 1)));
#line 841 "modes.m"
            if (((((MR_tag((MR_Word) check_hlds__modes__BodyGoalExpr0_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 838 "modes.m"
              {
#line 838 "modes.m"
                MR_Word check_hlds__modes__Disjuncts0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 1)));
#line 839 "modes.m"
                MR_Word check_hlds__modes__V_34_34;
#line 839 "modes.m"
                MR_Word check_hlds__modes__V_35_35;

#line 839 "modes.m"
                check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Disjuncts0_33)) == (MR_mktag((MR_Integer) 1)));
#line 839 "modes.m"
                if (check_hlds__modes__succeeded)
#line 839 "modes.m"
                  {
#line 839 "modes.m"
                    check_hlds__modes__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Disjuncts0_33, (MR_Integer) 0)));
#line 839 "modes.m"
                    check_hlds__modes__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Disjuncts0_33, (MR_Integer) 1)));
#line 840 "modes.m"
                    {
#line 840 "modes.m"
                      check_hlds__modes__ClausesForm0_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 840 "modes.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modes__ClausesForm0_36, 0) = ((MR_Box) (check_hlds__modes__Disjuncts0_33));
#line 840 "modes.m"
                    }
#line 840 "modes.m"
                    check_hlds__modes__succeeded = MR_TRUE;
#line 839 "modes.m"
                  }
#line 838 "modes.m"
              }
#line 841 "modes.m"
            else
#line 841 "modes.m"
              if (((((MR_tag((MR_Word) check_hlds__modes__BodyGoalExpr0_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 842 "modes.m"
                {
#line 842 "modes.m"
                  MR_Word check_hlds__modes__SwitchVar0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 1)));
#line 842 "modes.m"
                  MR_Word check_hlds__modes__CanFail0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 2)));
#line 842 "modes.m"
                  MR_Word check_hlds__modes__Cases0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 3)));
#line 843 "modes.m"
                  MR_Word check_hlds__modes__V_40_40;
#line 843 "modes.m"
                  MR_Word check_hlds__modes__V_41_41;

#line 843 "modes.m"
                  check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Cases0_39)) == (MR_mktag((MR_Integer) 1)));
#line 843 "modes.m"
                  if (check_hlds__modes__succeeded)
#line 843 "modes.m"
                    {
#line 843 "modes.m"
                      check_hlds__modes__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Cases0_39, (MR_Integer) 0)));
#line 843 "modes.m"
                      check_hlds__modes__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Cases0_39, (MR_Integer) 1)));
#line 844 "modes.m"
                      {
#line 844 "modes.m"
                        check_hlds__modes__ClausesForm0_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 844 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, 0) = ((MR_Box) (check_hlds__modes__SwitchVar0_37));
#line 844 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, 1) = ((MR_Box) (check_hlds__modes__CanFail0_38));
#line 844 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, 2) = ((MR_Box) (check_hlds__modes__Cases0_39));
#line 844 "modes.m"
                      }
#line 844 "modes.m"
                      check_hlds__modes__succeeded = MR_TRUE;
#line 843 "modes.m"
                    }
#line 842 "modes.m"
                }
#line 841 "modes.m"
              else
#line 841 "modes.m"
                check_hlds__modes__succeeded = MR_FALSE;
#line 834 "modes.m"
            if (check_hlds__modes__succeeded)
#line 834 "modes.m"
              {
#line 846 "modes.m"
                {
#line 846 "modes.m"
                  check_hlds__modes__BodyNonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modes__BodyGoalInfo0_32);
                }
#line 847 "modes.m"
                {
#line 847 "modes.m"
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66, &check_hlds__modes__VarTypes0_43);
                }
#line 5153 "check_hlds.modes.c"
                check_hlds__modes__TypeInfo_123_123 = (MR_Word) &check_hlds__modes_scalar_common_1[1];
#line 5155 "check_hlds.modes.c"
                check_hlds__modes__TypeCtorInfo_125_125 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 849 "modes.m"
                {
#line 849 "modes.m"
                  check_hlds__modes__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 849 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[2]));
#line 849 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_1));
#line 849 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 849 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 3) = ((MR_Box) (check_hlds__modes__ModuleInfo_16));
#line 849 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 4) = ((MR_Box) (check_hlds__modes__VarTypes0_43));
#line 849 "modes.m"
                }
#line 850 "modes.m"
                {
#line 850 "modes.m"
                  check_hlds__modes__V_78_78 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__modes__TypeCtorInfo_125_125, check_hlds__modes__BodyNonLocals_42);
                }
#line 848 "modes.m"
                {
#line 848 "modes.m"
                  check_hlds__modes__SolverNonLocals_44 = mercury__list__filter_2_f_0(check_hlds__modes__TypeInfo_123_123, check_hlds__modes__V_77_77, check_hlds__modes__V_78_78);
                }
#line 851 "modes.m"
                check_hlds__modes__succeeded = (check_hlds__modes__SolverNonLocals_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 834 "modes.m"
              }
#line 834 "modes.m"
          }
#line 834 "modes.m"
      }
#line 925 "modes.m"
    if (check_hlds__modes__succeeded)
#line 853 "modes.m"
      {
#line 853 "modes.m"
        MR_Word check_hlds__modes__BodyContext_45;
#line 853 "modes.m"
        MR_Word check_hlds__modes__EmptyContext_46;
#line 853 "modes.m"
        MR_Word check_hlds__modes__NewGoalExpr_50;
#line 853 "modes.m"
        MR_Word check_hlds__modes__HeadVarFinalInsts_60;
#line 853 "modes.m"
        MR_Word check_hlds__modes__FinalInstMap_61;
#line 853 "modes.m"
        MR_Word check_hlds__modes__DeltaInstMap_62;
#line 853 "modes.m"
        MR_Word check_hlds__modes__BodyGoalInfo_63;
#line 853 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79;

#line 853 "modes.m"
        {
#line 853 "modes.m"
          check_hlds__modes__BodyContext_45 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__modes__BodyGoalInfo0_32);
        }
#line 854 "modes.m"
        {
#line 854 "modes.m"
          mercury__term__context_init_1_p_0(&check_hlds__modes__EmptyContext_46);
        }
#line 855 "modes.m"
        {
#line 855 "modes.m"
          check_hlds__modes__succeeded = mercury__term____Unify____context_0_0(check_hlds__modes__BodyContext_45, check_hlds__modes__EmptyContext_46);
        }
#line 857 "modes.m"
        if (check_hlds__modes__succeeded)
#line 855 "modes.m"
          check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66;
#line 857 "modes.m"
        else
#line 858 "modes.m"
          {
#line 858 "modes.m"
            check_hlds__mode_info__mode_info_set_context_3_p_0(check_hlds__modes__BodyContext_45, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66, &check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79);
          }
#line 880 "modes.m"
        if ((check_hlds__modes__WhatToCheck_17 == (MR_Integer) 0))
#line 872 "modes.m"
          if (((MR_tag((MR_Word) check_hlds__modes__ClausesForm0_36)) == (MR_mktag((MR_Integer) 0))))
#line 865 "modes.m"
            {
#line 865 "modes.m"
              MR_Word check_hlds__modes__TypeCtorInfo_130_130;
#line 865 "modes.m"
              MR_Word check_hlds__modes__Disjuncts1_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__ClausesForm0_36, (MR_Integer) 0)));
#line 865 "modes.m"
              MR_Word check_hlds__modes__Disjuncts2_48;
#line 865 "modes.m"
              MR_Word check_hlds__modes__Disjuncts_49;
#line 865 "modes.m"
              MR_Word check_hlds__modes__V_93_93;
#line 867 "modes.m"
              MR_Box check_hlds__modes__conv2_STATE_VARIABLE_ModeInfo_67;

#line 866 "modes.m"
              {
#line 866 "modes.m"
                check_hlds__modes__Disjuncts2_48 = hlds__goal_util__flatten_disjs_1_f_0(check_hlds__modes__Disjuncts1_47);
              }
#line 868 "modes.m"
              {
#line 868 "modes.m"
                check_hlds__modes__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 868 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_7[0]));
#line 868 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_2));
#line 868 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 868 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_30));
#line 868 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 4) = ((MR_Box) (check_hlds__modes__HeadVars_25));
#line 868 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 5) = ((MR_Box) (check_hlds__modes__InstMap0_26));
#line 868 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_27));
#line 868 "modes.m"
              }
#line 5282 "check_hlds.modes.c"
              check_hlds__modes__TypeCtorInfo_130_130 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 867 "modes.m"
              {
#line 867 "modes.m"
                mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_130_130, check_hlds__modes__TypeCtorInfo_130_130, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_93_93, check_hlds__modes__Disjuncts2_48, &check_hlds__modes__Disjuncts_49, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79)), &check_hlds__modes__conv2_STATE_VARIABLE_ModeInfo_67);
              }
#line 867 "modes.m"
              *check_hlds__modes__STATE_VARIABLE_ModeInfo_67 = ((MR_Word) check_hlds__modes__conv2_STATE_VARIABLE_ModeInfo_67);
#line 871 "modes.m"
              {
#line 871 "modes.m"
                check_hlds__modes__NewGoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 871 "modes.m"
                MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 871 "modes.m"
                MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 1) = ((MR_Box) (check_hlds__modes__Disjuncts_49));
#line 871 "modes.m"
              }
#line 865 "modes.m"
            }
#line 872 "modes.m"
          else
#line 873 "modes.m"
            {
#line 873 "modes.m"
              MR_Word check_hlds__modes__TypeCtorInfo_136_136;
#line 873 "modes.m"
              MR_Word check_hlds__modes__SwitchVar_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 0)));
#line 873 "modes.m"
              MR_Word check_hlds__modes__CanFail_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 1)));
#line 873 "modes.m"
              MR_Word check_hlds__modes__Cases1_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 2)));
#line 873 "modes.m"
              MR_Word check_hlds__modes__Cases_54;
#line 873 "modes.m"
              MR_Word check_hlds__modes__V_91_91;
#line 874 "modes.m"
              MR_Box check_hlds__modes__conv5_STATE_VARIABLE_ModeInfo_67;

#line 875 "modes.m"
              {
#line 875 "modes.m"
                check_hlds__modes__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 875 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_4[1]));
#line 875 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_3));
#line 875 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 875 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_30));
#line 875 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 4) = ((MR_Box) (check_hlds__modes__HeadVars_25));
#line 875 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 5) = ((MR_Box) (check_hlds__modes__InstMap0_26));
#line 875 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_27));
#line 875 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 7) = ((MR_Box) (check_hlds__modes__SwitchVar_51));
#line 875 "modes.m"
              }
#line 5344 "check_hlds.modes.c"
              check_hlds__modes__TypeCtorInfo_136_136 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 874 "modes.m"
              {
#line 874 "modes.m"
                mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_136_136, check_hlds__modes__TypeCtorInfo_136_136, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_91_91, check_hlds__modes__Cases1_53, &check_hlds__modes__Cases_54, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79)), &check_hlds__modes__conv5_STATE_VARIABLE_ModeInfo_67);
              }
#line 874 "modes.m"
              *check_hlds__modes__STATE_VARIABLE_ModeInfo_67 = ((MR_Word) check_hlds__modes__conv5_STATE_VARIABLE_ModeInfo_67);
#line 878 "modes.m"
              {
#line 878 "modes.m"
                check_hlds__modes__NewGoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 878 "modes.m"
                MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 878 "modes.m"
                MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 1) = ((MR_Box) (check_hlds__modes__SwitchVar_51));
#line 878 "modes.m"
                MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 2) = ((MR_Box) (check_hlds__modes__CanFail_52));
#line 878 "modes.m"
                MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 3) = ((MR_Box) (check_hlds__modes__Cases_54));
#line 878 "modes.m"
              }
#line 873 "modes.m"
            }
#line 880 "modes.m"
        else
#line 881 "modes.m"
          {
#line 881 "modes.m"
            MR_Word check_hlds__modes__NondetLiveVars0_55;
#line 881 "modes.m"
            MR_Word check_hlds__modes__Detism_56;
#line 881 "modes.m"
            MR_Word check_hlds__modes__NonLocals_57;
#line 881 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_82_82;
#line 885 "modes.m"
            MR_Word check_hlds__modes__V_153_153;
#line 885 "modes.m"
            MR_Word check_hlds__modes__V_58_58;

#line 882 "modes.m"
            {
#line 882 "modes.m"
              check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79, &check_hlds__modes__NondetLiveVars0_55);
            }
#line 883 "modes.m"
            {
#line 883 "modes.m"
              check_hlds__modes__Detism_56 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__modes__BodyGoalInfo0_32);
            }
#line 884 "modes.m"
            {
#line 884 "modes.m"
              check_hlds__modes__NonLocals_57 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modes__BodyGoalInfo0_32);
            }
#line 885 "modes.m"
            {
#line 885 "modes.m"
              parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modes__Detism_56, &check_hlds__modes__V_58_58, &check_hlds__modes__V_153_153);
            }
#line 885 "modes.m"
            check_hlds__modes__succeeded = ((MR_Integer) 3 == check_hlds__modes__V_153_153);
#line 887 "modes.m"
            if (check_hlds__modes__succeeded)
#line 885 "modes.m"
              check_hlds__modes__STATE_VARIABLE_ModeInfo_82_82 = check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79;
#line 887 "modes.m"
            else
#line 888 "modes.m"
              {
#line 888 "modes.m"
                MR_Word check_hlds__modes__V_81_81;

#line 888 "modes.m"
                {
#line 888 "modes.m"
                  check_hlds__modes__V_81_81 = mercury__bag__init_0_f_0((MR_Word) &check_hlds__modes_scalar_common_1[1]);
                }
#line 888 "modes.m"
                {
#line 888 "modes.m"
                  check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__modes__V_81_81, check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79, &check_hlds__modes__STATE_VARIABLE_ModeInfo_82_82);
                }
#line 888 "modes.m"
              }
#line 906 "modes.m"
            if (((MR_tag((MR_Word) check_hlds__modes__ClausesForm0_36)) == (MR_mktag((MR_Integer) 0))))
#line 891 "modes.m"
              {
#line 891 "modes.m"
                MR_Word check_hlds__modes__TypeCtorInfo_143_143;
#line 891 "modes.m"
                MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_88_88;
#line 891 "modes.m"
                MR_Word check_hlds__modes__V_89_89;
#line 891 "modes.m"
                MR_Word check_hlds__modes__Disjuncts1_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__ClausesForm0_36, (MR_Integer) 0)));
#line 891 "modes.m"
                MR_Word check_hlds__modes__Disjuncts2_103;
#line 891 "modes.m"
                MR_Word check_hlds__modes__Disjuncts_104;
#line 893 "modes.m"
                MR_Word check_hlds__modes__V_154_154;
#line 893 "modes.m"
                MR_Word check_hlds__modes__V_59_59;
#line 900 "modes.m"
                MR_Box check_hlds__modes__conv8_STATE_VARIABLE_ModeInfo_67;

#line 892 "modes.m"
                {
#line 892 "modes.m"
                  check_hlds__modes__Disjuncts2_103 = hlds__goal_util__flatten_disjs_1_f_0(check_hlds__modes__Disjuncts1_102);
                }
#line 893 "modes.m"
                {
#line 893 "modes.m"
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modes__Detism_56, &check_hlds__modes__V_59_59, &check_hlds__modes__V_154_154);
                }
#line 893 "modes.m"
                check_hlds__modes__succeeded = ((MR_Integer) 3 == check_hlds__modes__V_154_154);
#line 897 "modes.m"
                if (check_hlds__modes__succeeded)
#line 894 "modes.m"
                  {
#line 894 "modes.m"
                    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86;
#line 894 "modes.m"
                    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_87_87;

#line 894 "modes.m"
                    {
#line 894 "modes.m"
                      check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__modes__NonLocals_57, check_hlds__modes__STATE_VARIABLE_ModeInfo_82_82, &check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86);
                    }
#line 895 "modes.m"
                    {
#line 895 "modes.m"
                      check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86, &check_hlds__modes__STATE_VARIABLE_ModeInfo_87_87);
                    }
#line 896 "modes.m"
                    {
#line 896 "modes.m"
                      check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modes__NonLocals_57, check_hlds__modes__STATE_VARIABLE_ModeInfo_87_87, &check_hlds__modes__STATE_VARIABLE_ModeInfo_88_88);
                    }
#line 894 "modes.m"
                  }
#line 897 "modes.m"
                else
#line 896 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_ModeInfo_88_88 = check_hlds__modes__STATE_VARIABLE_ModeInfo_82_82;
#line 901 "modes.m"
                {
#line 901 "modes.m"
                  check_hlds__modes__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 901 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_8[0]));
#line 901 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_4));
#line 901 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 901 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_30));
#line 901 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 4) = ((MR_Box) (check_hlds__modes__HeadVars_25));
#line 901 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 5) = ((MR_Box) (check_hlds__modes__InstMap0_26));
#line 901 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_27));
#line 901 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 7) = ((MR_Box) (check_hlds__modes__Detism_56));
#line 901 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 8) = ((MR_Box) (check_hlds__modes__NonLocals_57));
#line 901 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 9) = ((MR_Box) (check_hlds__modes__NondetLiveVars0_55));
#line 901 "modes.m"
                }
#line 5522 "check_hlds.modes.c"
                check_hlds__modes__TypeCtorInfo_143_143 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 900 "modes.m"
                {
#line 900 "modes.m"
                  mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_143_143, check_hlds__modes__TypeCtorInfo_143_143, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_89_89, check_hlds__modes__Disjuncts2_103, &check_hlds__modes__Disjuncts_104, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_88_88)), &check_hlds__modes__conv8_STATE_VARIABLE_ModeInfo_67);
                }
#line 900 "modes.m"
                *check_hlds__modes__STATE_VARIABLE_ModeInfo_67 = ((MR_Word) check_hlds__modes__conv8_STATE_VARIABLE_ModeInfo_67);
#line 905 "modes.m"
                {
#line 905 "modes.m"
                  check_hlds__modes__NewGoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 905 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 1) = ((MR_Box) (check_hlds__modes__Disjuncts_104));
#line 905 "modes.m"
                }
#line 891 "modes.m"
              }
#line 906 "modes.m"
            else
#line 907 "modes.m"
              {
#line 907 "modes.m"
                MR_Word check_hlds__modes__TypeCtorInfo_149_149;
#line 907 "modes.m"
                MR_Word check_hlds__modes__V_83_83;
#line 907 "modes.m"
                MR_Word check_hlds__modes__SwitchVar_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 0)));
#line 907 "modes.m"
                MR_Word check_hlds__modes__CanFail_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 1)));
#line 907 "modes.m"
                MR_Word check_hlds__modes__Cases1_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 2)));
#line 907 "modes.m"
                MR_Word check_hlds__modes__Cases_108;
#line 908 "modes.m"
                MR_Box check_hlds__modes__conv11_STATE_VARIABLE_ModeInfo_67;

#line 909 "modes.m"
                {
#line 909 "modes.m"
                  check_hlds__modes__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 909 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_83_83, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_4[1]));
#line 909 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_83_83, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_5));
#line 909 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 909 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_83_83, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_30));
#line 909 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_83_83, 4) = ((MR_Box) (check_hlds__modes__HeadVars_25));
#line 909 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_83_83, 5) = ((MR_Box) (check_hlds__modes__InstMap0_26));
#line 909 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_83_83, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_27));
#line 909 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_83_83, 7) = ((MR_Box) (check_hlds__modes__SwitchVar_105));
#line 909 "modes.m"
                }
#line 5584 "check_hlds.modes.c"
                check_hlds__modes__TypeCtorInfo_149_149 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 908 "modes.m"
                {
#line 908 "modes.m"
                  mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_149_149, check_hlds__modes__TypeCtorInfo_149_149, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_83_83, check_hlds__modes__Cases1_107, &check_hlds__modes__Cases_108, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_82_82)), &check_hlds__modes__conv11_STATE_VARIABLE_ModeInfo_67);
                }
#line 908 "modes.m"
                *check_hlds__modes__STATE_VARIABLE_ModeInfo_67 = ((MR_Word) check_hlds__modes__conv11_STATE_VARIABLE_ModeInfo_67);
#line 912 "modes.m"
                {
#line 912 "modes.m"
                  check_hlds__modes__NewGoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 912 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 912 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 1) = ((MR_Box) (check_hlds__modes__SwitchVar_105));
#line 912 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 2) = ((MR_Box) (check_hlds__modes__CanFail_106));
#line 912 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 3) = ((MR_Box) (check_hlds__modes__Cases_108));
#line 912 "modes.m"
                }
#line 907 "modes.m"
              }
#line 881 "modes.m"
          }
#line 917 "modes.m"
        {
#line 917 "modes.m"
          mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modes__HeadVars_25, check_hlds__modes__ArgFinalInsts0_27, &check_hlds__modes__HeadVarFinalInsts_60);
        }
#line 919 "modes.m"
        {
#line 919 "modes.m"
          check_hlds__modes__FinalInstMap_61 = hlds__instmap__instmap_from_assoc_list_1_f_0(check_hlds__modes__HeadVarFinalInsts_60);
        }
#line 920 "modes.m"
        {
#line 920 "modes.m"
          hlds__instmap__compute_instmap_delta_4_p_0(check_hlds__modes__InstMap0_26, check_hlds__modes__FinalInstMap_61, check_hlds__modes__BodyNonLocals_42, &check_hlds__modes__DeltaInstMap_62);
        }
#line 922 "modes.m"
        {
#line 922 "modes.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modes__DeltaInstMap_62, check_hlds__modes__BodyGoalInfo0_32, &check_hlds__modes__BodyGoalInfo_63);
        }
#line 923 "modes.m"
        {
#line 923 "modes.m"
          MR_Word base;
#line 923 "modes.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 923 "modes.m"
          *check_hlds__modes__Body_24 = base;
#line 923 "modes.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__NewGoalExpr_50));
#line 923 "modes.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__BodyGoalInfo_63));
#line 923 "modes.m"
        }
#line 924 "modes.m"
        *check_hlds__modes__ArgFinalInsts_28 = check_hlds__modes__ArgFinalInsts0_27;
#line 853 "modes.m"
      }
#line 925 "modes.m"
    else
#line 927 "modes.m"
      {
#line 927 "modes.m"
        MR_Word check_hlds__modes__Body1_64;
#line 927 "modes.m"
        MR_Word check_hlds__modes__GroundMatchesBound_65;
#line 927 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_96_96;
#line 927 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98;
#line 927 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_100_100;
#line 927 "modes.m"
        MR_Word check_hlds__modes__ModuleInfo_172;
#line 927 "modes.m"
        MR_Word check_hlds__modes__Errors_173;
#line 927 "modes.m"
        MR_Word check_hlds__modes__Changed0_176;
#line 927 "modes.m"
        MR_Word check_hlds__modes__InstMap_177;
#line 927 "modes.m"
        MR_Word check_hlds__modes__VarTypes_178;
#line 927 "modes.m"
        MR_Word check_hlds__modes__VarFinalInsts1_179;
#line 927 "modes.m"
        MR_Word check_hlds__modes__ArgTypes_180;

#line 927 "modes.m"
        {
#line 927 "modes.m"
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_30, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66, &check_hlds__modes__STATE_VARIABLE_ModeInfo_96_96);
        }
#line 931 "modes.m"
        if ((check_hlds__modes__WhatToCheck_17 == (MR_Integer) 0))
#line 930 "modes.m"
          {
#line 930 "modes.m"
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modes__Body0_23, &check_hlds__modes__Body1_64, check_hlds__modes__STATE_VARIABLE_ModeInfo_96_96, &check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98);
          }
#line 931 "modes.m"
        else
#line 933 "modes.m"
          {
#line 933 "modes.m"
            check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modes__Body0_23, &check_hlds__modes__Body1_64, check_hlds__modes__STATE_VARIABLE_ModeInfo_96_96, &check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98);
          }
#line 935 "modes.m"
        {
#line 935 "modes.m"
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_30, check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modes__STATE_VARIABLE_ModeInfo_100_100);
        }
#line 941 "modes.m"
        if ((check_hlds__modes__IsUnifyPred_20 == (MR_Integer) 0))
#line 940 "modes.m"
          check_hlds__modes__GroundMatchesBound_65 = (MR_Integer) 0;
#line 941 "modes.m"
        else
#line 943 "modes.m"
          check_hlds__modes__GroundMatchesBound_65 = (MR_Integer) 1;
#line 1237 "modes.m"
        {
#line 1237 "modes.m"
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_100_100, &check_hlds__modes__ModuleInfo_172);
        }
#line 1238 "modes.m"
        {
#line 1238 "modes.m"
          check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_100_100, &check_hlds__modes__Errors_173);
        }
#line 1252 "modes.m"
        if ((check_hlds__modes__Errors_173 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1253 "modes.m"
          {
#line 1254 "modes.m"
            check_hlds__modes__Changed0_176 = (MR_Integer) 0;
#line 1255 "modes.m"
            {
#line 1255 "modes.m"
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_100_100, &check_hlds__modes__InstMap_177);
            }
#line 1253 "modes.m"
          }
#line 1252 "modes.m"
        else
#line 1246 "modes.m"
          {
#line 1250 "modes.m"
            check_hlds__modes__Changed0_176 = (MR_Integer) 1;
#line 1251 "modes.m"
            {
#line 1251 "modes.m"
              hlds__instmap__init_unreachable_1_p_0(&check_hlds__modes__InstMap_177);
            }
#line 1246 "modes.m"
          }
#line 1257 "modes.m"
        {
#line 1257 "modes.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_100_100, &check_hlds__modes__VarTypes_178);
        }
#line 1258 "modes.m"
        {
#line 1258 "modes.m"
          hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modes__InstMap_177, check_hlds__modes__HeadVars_25, &check_hlds__modes__VarFinalInsts1_179);
        }
#line 1259 "modes.m"
        {
#line 1259 "modes.m"
          parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__modes__VarTypes_178, check_hlds__modes__HeadVars_25, &check_hlds__modes__ArgTypes_180);
        }
#line 1278 "modes.m"
        if ((check_hlds__modes__InferModes_18 == (MR_Integer) 0))
#line 1279 "modes.m"
          {
#line 1280 "modes.m"
            MR_Word check_hlds__modes___Changed1_189;

#line 1280 "modes.m"
            {
#line 1280 "modes.m"
              check_hlds__modes__check_final_insts_13_p_0(check_hlds__modes__HeadVars_25, check_hlds__modes__ArgFinalInsts0_27, check_hlds__modes__VarFinalInsts1_179, check_hlds__modes__InferModes_18, check_hlds__modes__GroundMatchesBound_65, (MR_Integer) 1, check_hlds__modes__ModuleInfo_172, check_hlds__modes__Body1_64, check_hlds__modes__Body_24, (MR_Integer) 0, &check_hlds__modes___Changed1_189, check_hlds__modes__STATE_VARIABLE_ModeInfo_100_100, check_hlds__modes__STATE_VARIABLE_ModeInfo_67);
            }
#line 1283 "modes.m"
            *check_hlds__modes__ArgFinalInsts_28 = check_hlds__modes__ArgFinalInsts0_27;
#line 1279 "modes.m"
          }
#line 1278 "modes.m"
        else
#line 1261 "modes.m"
          {
#line 1261 "modes.m"
            MR_Word check_hlds__modes__VarFinalInsts2_181;
#line 1261 "modes.m"
            MR_Word check_hlds__modes__PredId_182;
#line 1261 "modes.m"
            MR_Integer check_hlds__modes__ProcId_183;
#line 1261 "modes.m"
            MR_Word check_hlds__modes__ProcInfo_184;
#line 1261 "modes.m"
            MR_Word check_hlds__modes__ArgLives_185;
#line 1261 "modes.m"
            MR_Word check_hlds__modes__Changed1_186;
#line 1261 "modes.m"
            MR_Word check_hlds__modes__Changed2_187;
#line 1261 "modes.m"
            MR_Word check_hlds__modes__Changed_188;
#line 1261 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_43_195;
#line 1261 "modes.m"
            MR_Word check_hlds__modes__V_196_196;
#line 1261 "modes.m"
            MR_Word check_hlds__modes__V_197_197;
#line 1261 "modes.m"
            MR_Word check_hlds__modes__V_198_198;

#line 1262 "modes.m"
            {
#line 1262 "modes.m"
              check_hlds__mode_util__normalise_insts_4_p_0(check_hlds__modes__ModuleInfo_172, check_hlds__modes__ArgTypes_180, check_hlds__modes__VarFinalInsts1_179, &check_hlds__modes__VarFinalInsts2_181);
            }
#line 1267 "modes.m"
            {
#line 1267 "modes.m"
              check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_100_100, &check_hlds__modes__PredId_182);
            }
#line 1268 "modes.m"
            {
#line 1268 "modes.m"
              check_hlds__mode_info__mode_info_get_proc_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_100_100, &check_hlds__modes__ProcId_183);
            }
#line 1269 "modes.m"
            {
#line 1269 "modes.m"
              hlds__hlds_module__module_info_proc_info_4_p_0(check_hlds__modes__ModuleInfo_172, check_hlds__modes__PredId_182, check_hlds__modes__ProcId_183, &check_hlds__modes__ProcInfo_184);
            }
#line 1270 "modes.m"
            {
#line 1270 "modes.m"
              hlds__hlds_pred__proc_info_arglives_3_p_0(check_hlds__modes__ProcInfo_184, check_hlds__modes__ModuleInfo_172, &check_hlds__modes__ArgLives_185);
            }
#line 1271 "modes.m"
            {
#line 1271 "modes.m"
              check_hlds__modes__maybe_clobber_insts_3_p_0(check_hlds__modes__VarFinalInsts2_181, check_hlds__modes__ArgLives_185, check_hlds__modes__ArgFinalInsts_28);
            }
#line 1272 "modes.m"
            {
#line 1272 "modes.m"
              check_hlds__modes__check_final_insts_13_p_0(check_hlds__modes__HeadVars_25, check_hlds__modes__ArgFinalInsts0_27, *check_hlds__modes__ArgFinalInsts_28, check_hlds__modes__InferModes_18, check_hlds__modes__GroundMatchesBound_65, (MR_Integer) 1, check_hlds__modes__ModuleInfo_172, check_hlds__modes__Body1_64, check_hlds__modes__Body_24, (MR_Integer) 0, &check_hlds__modes__Changed1_186, check_hlds__modes__STATE_VARIABLE_ModeInfo_100_100, &check_hlds__modes__STATE_VARIABLE_ModeInfo_43_195);
            }
#line 1275 "modes.m"
            {
#line 1275 "modes.m"
              check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_43_195, &check_hlds__modes__Changed2_187);
            }
#line 1276 "modes.m"
            {
#line 1276 "modes.m"
              check_hlds__modes__V_198_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1276 "modes.m"
              MR_hl_field(MR_mktag(1), check_hlds__modes__V_198_198, 0) = ((MR_Box) (check_hlds__modes__Changed2_187));
#line 1276 "modes.m"
              MR_hl_field(MR_mktag(1), check_hlds__modes__V_198_198, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1276 "modes.m"
            }
#line 1276 "modes.m"
            {
#line 1276 "modes.m"
              check_hlds__modes__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1276 "modes.m"
              MR_hl_field(MR_mktag(1), check_hlds__modes__V_197_197, 0) = ((MR_Box) (check_hlds__modes__Changed1_186));
#line 1276 "modes.m"
              MR_hl_field(MR_mktag(1), check_hlds__modes__V_197_197, 1) = ((MR_Box) (check_hlds__modes__V_198_198));
#line 1276 "modes.m"
            }
#line 1276 "modes.m"
            {
#line 1276 "modes.m"
              check_hlds__modes__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1276 "modes.m"
              MR_hl_field(MR_mktag(1), check_hlds__modes__V_196_196, 0) = ((MR_Box) (check_hlds__modes__Changed0_176));
#line 1276 "modes.m"
              MR_hl_field(MR_mktag(1), check_hlds__modes__V_196_196, 1) = ((MR_Box) (check_hlds__modes__V_197_197));
#line 1276 "modes.m"
            }
#line 1276 "modes.m"
            {
#line 1276 "modes.m"
              mercury__bool__or_list_2_p_0(check_hlds__modes__V_196_196, &check_hlds__modes__Changed_188);
            }
#line 1277 "modes.m"
            {
#line 1277 "modes.m"
              check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(check_hlds__modes__Changed_188, check_hlds__modes__STATE_VARIABLE_ModeInfo_43_195, check_hlds__modes__STATE_VARIABLE_ModeInfo_67);
#line 1277 "modes.m"
              return;
            }
#line 1261 "modes.m"
          }
#line 927 "modes.m"
      }
#line 829 "modes.m"
  }
#line 821 "modes.m"
}

#line 745 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_2(
#line 745 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 745 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1)
#line 745 "modes.m"
{
#line 745 "modes.m"
  {
#line 745 "modes.m"
    MR_Box check_hlds__modes__wrapper_arg_2;
#line 745 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 745 "modes.m"
    MR_Word check_hlds__modes__conv1_HeadVar__3_3;

#line 745 "modes.m"
    {
#line 745 "modes.m"
      check_hlds__modes__conv1_HeadVar__3_3 = check_hlds__mode_errors__mode_warning_info_to_spec_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modes__wrapper_arg_1));
    }
#line 745 "modes.m"
    check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv1_HeadVar__3_3));
#line 745 "modes.m"
    return check_hlds__modes__wrapper_arg_2;
#line 745 "modes.m"
  }
#line 745 "modes.m"
}

#line 725 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_1(
#line 725 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 725 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1)
#line 725 "modes.m"
{
#line 725 "modes.m"
  {
#line 725 "modes.m"
    MR_Box check_hlds__modes__wrapper_arg_2;
#line 725 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 725 "modes.m"
    MR_Word check_hlds__modes__conv0_HeadVar__3_3;

#line 725 "modes.m"
    {
#line 725 "modes.m"
      check_hlds__modes__conv0_HeadVar__3_3 = check_hlds__mode_errors__mode_error_info_to_spec_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modes__wrapper_arg_1));
    }
#line 725 "modes.m"
    check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv0_HeadVar__3_3));
#line 725 "modes.m"
    return check_hlds__modes__wrapper_arg_2;
#line 725 "modes.m"
  }
#line 725 "modes.m"
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
        MR_Word check_hlds__modes__HeadInstVars_70;
#line 636 "modes.m"
        MR_Word check_hlds__modes__Markers_71;
#line 636 "modes.m"
        MR_Word check_hlds__modes__InferModes_72;
#line 636 "modes.m"
        MR_Word check_hlds__modes__IsUnifyPred_73;
#line 636 "modes.m"
        MR_Word check_hlds__modes__ArgFinalInsts0_74;
#line 636 "modes.m"
        MR_Word check_hlds__modes__Body_75;
#line 636 "modes.m"
        MR_Word check_hlds__modes__ArgFinalInsts_76;
#line 636 "modes.m"
        MR_Word check_hlds__modes__ModeErrors_77;
#line 636 "modes.m"
        MR_Word check_hlds__modes__ArgModes_85;
#line 636 "modes.m"
        MR_Word check_hlds__modes__VarSet_86;
#line 636 "modes.m"
        MR_Word check_hlds__modes__VarTypes_87;
#line 636 "modes.m"
        MR_Word check_hlds__modes__NeedToRequantify_88;
#line 636 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_63_89;
#line 636 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90;
#line 636 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92;
#line 636 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_71_97;
#line 636 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_74_100;
#line 636 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_75_101;
#line 636 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_76_102;
#line 636 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_77_103;
#line 636 "modes.m"
        MR_Word check_hlds__modes__Body1_135;
#line 636 "modes.m"
        MR_Word check_hlds__modes__ArgFinalInsts1_136;
#line 636 "modes.m"
        MR_Word check_hlds__modes__ModeInfo1_137;
#line 636 "modes.m"
        MR_Word check_hlds__modes__ModeErrors1_138;
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
            MR_Word check_hlds__modes__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_61, (MR_Integer) 0)));
#line 669 "modes.m"
            MR_Word check_hlds__modes__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_61, (MR_Integer) 1)));
#line 669 "modes.m"
            MR_Word check_hlds__modes__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_61, (MR_Integer) 2)));
#line 669 "modes.m"
            MR_Word check_hlds__modes__V_109_109;

#line 669 "modes.m"
            check_hlds__modes__Context_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_61, (MR_Integer) 3)));
#line 669 "modes.m"
            check_hlds__modes__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_61, (MR_Integer) 4)));
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
#line 690 "modes.m"
        {
#line 690 "modes.m"
          check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__ArgModes0_53, &check_hlds__modes__HeadInstVars_70);
        }
#line 693 "modes.m"
        {
#line 693 "modes.m"
          check_hlds__mode_info__mode_info_init_10_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, check_hlds__modes__Context_63, check_hlds__modes__LiveVars_69, check_hlds__modes__HeadInstVars_70, check_hlds__modes__InstMap0_67, check_hlds__modes__WhatToCheck_12, check_hlds__modes__MayChangeCalledProc_13, &check_hlds__modes__STATE_VARIABLE_ModeInfo_63_89);
        }
#line 696 "modes.m"
        {
#line 696 "modes.m"
          check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(check_hlds__modes__STATE_VARIABLE_Changed_0_29, check_hlds__modes__STATE_VARIABLE_ModeInfo_63_89, &check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90);
        }
#line 698 "modes.m"
        {
#line 698 "modes.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modes__PredInfo_56, &check_hlds__modes__Markers_71);
        }
#line 699 "modes.m"
        {
#line 699 "modes.m"
          check_hlds__modes__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_71, (MR_Integer) 3);
        }
#line 701 "modes.m"
        if (check_hlds__modes__succeeded)
#line 700 "modes.m"
          check_hlds__modes__InferModes_72 = (MR_Integer) 1;
#line 701 "modes.m"
        else
#line 702 "modes.m"
          check_hlds__modes__InferModes_72 = (MR_Integer) 0;
#line 704 "modes.m"
        {
#line 704 "modes.m"
          check_hlds__modes__succeeded = hlds__hlds_pred__is_unify_pred_1_p_0(check_hlds__modes__PredInfo_56);
        }
#line 706 "modes.m"
        if (check_hlds__modes__succeeded)
#line 705 "modes.m"
          check_hlds__modes__IsUnifyPred_73 = (MR_Integer) 1;
#line 706 "modes.m"
        else
#line 707 "modes.m"
          check_hlds__modes__IsUnifyPred_73 = (MR_Integer) 0;
#line 709 "modes.m"
        {
#line 709 "modes.m"
          check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__ArgModes0_53, &check_hlds__modes__ArgFinalInsts0_74);
        }
#line 781 "modes.m"
        {
#line 781 "modes.m"
          check_hlds__modes__do_modecheck_proc_body_15_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__WhatToCheck_12, check_hlds__modes__InferModes_72, check_hlds__modes__Markers_71, check_hlds__modes__IsUnifyPred_73, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, check_hlds__modes__Body0_55, &check_hlds__modes__Body1_135, check_hlds__modes__HeadVars_52, check_hlds__modes__InstMap0_67, check_hlds__modes__ArgFinalInsts0_74, &check_hlds__modes__ArgFinalInsts1_136, check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90, &check_hlds__modes__ModeInfo1_137);
        }
#line 784 "modes.m"
        {
#line 784 "modes.m"
          check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__ModeInfo1_137, &check_hlds__modes__ModeErrors1_138);
        }
#line 790 "modes.m"
        if ((check_hlds__modes__ModeErrors1_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 786 "modes.m"
          {
#line 787 "modes.m"
            check_hlds__modes__Body_75 = check_hlds__modes__Body1_135;
#line 788 "modes.m"
            check_hlds__modes__ArgFinalInsts_76 = check_hlds__modes__ArgFinalInsts1_136;
#line 789 "modes.m"
            check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92 = check_hlds__modes__ModeInfo1_137;
#line 786 "modes.m"
          }
#line 790 "modes.m"
        else
#line 791 "modes.m"
          {
#line 791 "modes.m"
            MR_Word check_hlds__modes__HadFromGroundTerm_141;

#line 792 "modes.m"
            {
#line 792 "modes.m"
              check_hlds__mode_info__mode_info_get_had_from_ground_term_2_p_0(check_hlds__modes__ModeInfo1_137, &check_hlds__modes__HadFromGroundTerm_141);
            }
#line 811 "modes.m"
            if ((check_hlds__modes__HadFromGroundTerm_141 == (MR_Integer) 1))
#line 812 "modes.m"
              {
#line 815 "modes.m"
                check_hlds__modes__Body_75 = check_hlds__modes__Body1_135;
#line 816 "modes.m"
                check_hlds__modes__ArgFinalInsts_76 = check_hlds__modes__ArgFinalInsts1_136;
#line 817 "modes.m"
                check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92 = check_hlds__modes__ModeInfo1_137;
#line 812 "modes.m"
              }
#line 811 "modes.m"
            else
#line 794 "modes.m"
              {
#line 794 "modes.m"
                MR_Word check_hlds__modes__ModeInfo2_142;

#line 806 "modes.m"
                {
#line 806 "modes.m"
                  check_hlds__mode_info__mode_info_set_make_ground_terms_unique_3_p_0((MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90, &check_hlds__modes__ModeInfo2_142);
                }
#line 808 "modes.m"
                {
#line 808 "modes.m"
                  check_hlds__modes__do_modecheck_proc_body_15_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__WhatToCheck_12, check_hlds__modes__InferModes_72, check_hlds__modes__Markers_71, check_hlds__modes__IsUnifyPred_73, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, check_hlds__modes__Body0_55, &check_hlds__modes__Body_75, check_hlds__modes__HeadVars_52, check_hlds__modes__InstMap0_67, check_hlds__modes__ArgFinalInsts0_74, &check_hlds__modes__ArgFinalInsts_76, check_hlds__modes__ModeInfo2_142, &check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92);
                }
#line 794 "modes.m"
              }
#line 791 "modes.m"
          }
#line 715 "modes.m"
        {
#line 715 "modes.m"
          check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92, &check_hlds__modes__ModeErrors_77);
        }
#line 723 "modes.m"
        if ((check_hlds__modes__InferModes_72 == (MR_Integer) 0))
#line 724 "modes.m"
          {
#line 724 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_88_114 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 724 "modes.m"
            MR_Word check_hlds__modes__AllErrorSpecs_78;
#line 724 "modes.m"
            MR_Word check_hlds__modes__ErrorSpecs_81;
#line 724 "modes.m"
            MR_Word check_hlds__modes__StateVarWarningSpecs_82;
#line 724 "modes.m"
            MR_Word check_hlds__modes__ModeWarnings_83;
#line 724 "modes.m"
            MR_Word check_hlds__modes__WarningSpecs_84;
#line 724 "modes.m"
            MR_Word check_hlds__modes__V_93_93;
#line 724 "modes.m"
            MR_Word check_hlds__modes__V_95_95;
#line 724 "modes.m"
            MR_Word check_hlds__modes__V_96_96;

#line 725 "modes.m"
            {
#line 725 "modes.m"
              check_hlds__modes__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 725 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[0]));
#line 725 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 1) = ((MR_Box) (check_hlds__modes__maybe_modecheck_proc_9_p_0_1));
#line 725 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 725 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 3) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92));
#line 725 "modes.m"
            }
#line 725 "modes.m"
            {
#line 725 "modes.m"
              check_hlds__modes__AllErrorSpecs_78 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__modes__TypeCtorInfo_88_114, check_hlds__modes__V_93_93, check_hlds__modes__ModeErrors_77);
            }
#line 737 "modes.m"
            if ((check_hlds__modes__AllErrorSpecs_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 738 "modes.m"
              {
#line 739 "modes.m"
                check_hlds__modes__ErrorSpecs_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 742 "modes.m"
                check_hlds__modes__StateVarWarningSpecs_82 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 738 "modes.m"
              }
#line 737 "modes.m"
            else
#line 733 "modes.m"
              {
#line 733 "modes.m"
                MR_Word check_hlds__modes__ErrorSpec_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__AllErrorSpecs_78, (MR_Integer) 0)));
#line 733 "modes.m"
                MR_Word check_hlds__modes__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__AllErrorSpecs_78, (MR_Integer) 1)));

#line 734 "modes.m"
                {
#line 734 "modes.m"
                  check_hlds__modes__ErrorSpecs_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 734 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__ErrorSpecs_81, 0) = ((MR_Box) (check_hlds__modes__ErrorSpec_79));
#line 734 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__ErrorSpecs_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 734 "modes.m"
                }
#line 735 "modes.m"
                {
#line 735 "modes.m"
                  hlds__hlds_pred__proc_info_get_statevar_warnings_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__StateVarWarningSpecs_82);
                }
#line 733 "modes.m"
              }
#line 744 "modes.m"
            {
#line 744 "modes.m"
              check_hlds__mode_info__mode_info_get_warnings_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92, &check_hlds__modes__ModeWarnings_83);
            }
#line 745 "modes.m"
            {
#line 745 "modes.m"
              check_hlds__modes__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 745 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_95_95, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[1]));
#line 745 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_95_95, 1) = ((MR_Box) (check_hlds__modes__maybe_modecheck_proc_9_p_0_2));
#line 745 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_95_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 745 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_95_95, 3) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92));
#line 745 "modes.m"
            }
#line 745 "modes.m"
            {
#line 745 "modes.m"
              check_hlds__modes__WarningSpecs_84 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0, check_hlds__modes__TypeCtorInfo_88_114, check_hlds__modes__V_95_95, check_hlds__modes__ModeWarnings_83);
            }
#line 747 "modes.m"
            {
#line 747 "modes.m"
              check_hlds__modes__V_96_96 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_88_114, check_hlds__modes__WarningSpecs_84, check_hlds__modes__StateVarWarningSpecs_82);
            }
#line 747 "modes.m"
            {
#line 747 "modes.m"
              *check_hlds__modes__Specs_16 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_88_114, check_hlds__modes__ErrorSpecs_81, check_hlds__modes__V_96_96);
            }
#line 747 "modes.m"
            check_hlds__modes__STATE_VARIABLE_ProcInfo_71_97 = check_hlds__modes__ProcInfo0_18;
#line 724 "modes.m"
          }
#line 723 "modes.m"
        else
#line 717 "modes.m"
          {
#line 721 "modes.m"
            {
#line 721 "modes.m"
              check_hlds__modes__STATE_VARIABLE_ProcInfo_71_97 = hlds__hlds_pred__f_109_111_100_101_95_101_114_114_111_114_115_32_58_61_2_f_0(check_hlds__modes__ProcInfo0_18, check_hlds__modes__ModeErrors_77);
            }
#line 722 "modes.m"
            *check_hlds__modes__Specs_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 717 "modes.m"
          }
#line 752 "modes.m"
        {
#line 752 "modes.m"
          parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(check_hlds__modes__ArgInitialInsts_65, check_hlds__modes__ArgFinalInsts_76, &check_hlds__modes__ArgModes_85);
        }
#line 753 "modes.m"
        {
#line 753 "modes.m"
          check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92, check_hlds__modes__STATE_VARIABLE_Changed_30);
        }
#line 754 "modes.m"
        {
#line 754 "modes.m"
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31);
        }
#line 755 "modes.m"
        {
#line 755 "modes.m"
          check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92, &check_hlds__modes__VarSet_86);
        }
#line 758 "modes.m"
        {
#line 758 "modes.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92, &check_hlds__modes__VarTypes_87);
        }
#line 759 "modes.m"
        {
#line 759 "modes.m"
          check_hlds__mode_info__mode_info_get_need_to_requantify_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_66_92, &check_hlds__modes__NeedToRequantify_88);
        }
#line 760 "modes.m"
        {
#line 760 "modes.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__modes__Body_75, check_hlds__modes__STATE_VARIABLE_ProcInfo_71_97, &check_hlds__modes__STATE_VARIABLE_ProcInfo_74_100);
        }
#line 761 "modes.m"
        {
#line 761 "modes.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__modes__VarSet_86, check_hlds__modes__STATE_VARIABLE_ProcInfo_74_100, &check_hlds__modes__STATE_VARIABLE_ProcInfo_75_101);
        }
#line 762 "modes.m"
        {
#line 762 "modes.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__modes__VarTypes_87, check_hlds__modes__STATE_VARIABLE_ProcInfo_75_101, &check_hlds__modes__STATE_VARIABLE_ProcInfo_76_102);
        }
#line 763 "modes.m"
        {
#line 763 "modes.m"
          hlds__hlds_pred__proc_info_set_argmodes_3_p_0(check_hlds__modes__ArgModes_85, check_hlds__modes__STATE_VARIABLE_ProcInfo_76_102, &check_hlds__modes__STATE_VARIABLE_ProcInfo_77_103);
        }
#line 766 "modes.m"
        if ((check_hlds__modes__NeedToRequantify_88 == (MR_Integer) 1))
#line 765 "modes.m"
          check_hlds__modes__ProcInfo_20 = check_hlds__modes__STATE_VARIABLE_ProcInfo_77_103;
#line 766 "modes.m"
        else
#line 767 "modes.m"
          {
#line 768 "modes.m"
            {
#line 768 "modes.m"
              hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ProcInfo_77_103, &check_hlds__modes__ProcInfo_20);
            }
#line 767 "modes.m"
          }
#line 639 "modes.m"
        {
#line 639 "modes.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31, &check_hlds__modes__Preds1_21);
        }
#line 6539 "check_hlds.modes.c"
        check_hlds__modes__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 6541 "check_hlds.modes.c"
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
#line 6910 "check_hlds.modes.c"
      if ((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
#line 6912 "check_hlds.modes.c"
        {
#line 502 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_26 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25;
#line 502 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Changed_28 = check_hlds__modes__STATE_VARIABLE_Changed_0_27;
#line 502 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Specs_30 = check_hlds__modes__STATE_VARIABLE_Specs_0_29;
#line 6920 "check_hlds.modes.c"
        }
#line 6922 "check_hlds.modes.c"
      else
#line 6924 "check_hlds.modes.c"
        {
#line 6926 "check_hlds.modes.c"
          MR_Word check_hlds__modes__TypeCtorInfo_43_43;
#line 6928 "check_hlds.modes.c"
          MR_Word check_hlds__modes__ThisPredDeclSpecs_20;
#line 6930 "check_hlds.modes.c"
          MR_Word check_hlds__modes__ThisPredProcSpecs_21;
#line 6932 "check_hlds.modes.c"
          MR_Word check_hlds__modes__Globals_22;
#line 6934 "check_hlds.modes.c"
          MR_Word check_hlds__modes__ContainsError_23;
#line 6936 "check_hlds.modes.c"
          MR_Word check_hlds__modes__Statistics_24;
#line 6938 "check_hlds.modes.c"
          MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33;
#line 6940 "check_hlds.modes.c"
          MR_Word check_hlds__modes__V_36_36;
#line 6942 "check_hlds.modes.c"
          MR_Word check_hlds__modes__ProcIds_75;
#line 6944 "check_hlds.modes.c"
          MR_Word check_hlds__modes__SpecsAcc_76;
#line 6946 "check_hlds.modes.c"
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
#line 7039 "check_hlds.modes.c"
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
#line 7084 "check_hlds.modes.c"
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
#line 7286 "check_hlds.modes.c"
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
                    libs__globals__lookup_int_option_3_p_0(check_hlds__modes__Globals_73, (MR_Integer) 169, &check_hlds__modes__MaxIterations_74);
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
#line 1214 "modes.m"
  {
#line 1214 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1218 "modes.m"
    MR_Word check_hlds__modes___NewFinalInsts_12;

#line 1218 "modes.m"
    {
#line 1218 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_7, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts_8, &check_hlds__modes___NewFinalInsts_12, check_hlds__modes__STATE_VARIABLE_Goal_0_13, check_hlds__modes__STATE_VARIABLE_Goal_14, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_15, check_hlds__modes__STATE_VARIABLE_ModeInfo_16);
    }
#line 1214 "modes.m"
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
      libs__globals__lookup_int_option_3_p_0(check_hlds__modes__Globals_13, (MR_Integer) 169, &check_hlds__modes__MaxIterations_14);
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
            libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_13, (MR_Integer) 273, &check_hlds__modes__DelayPartialInstantiations_17);
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
#line 1392 "modes.m"
        {
#line 1392 "modes.m"
          hlds__hlds_module__module_info_get_valid_predids_3_p_0(&check_hlds__modes__PredIds_69, check_hlds__modes__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__modes__STATE_VARIABLE_ModuleInfo_33);
        }
#line 1393 "modes.m"
        {
#line 1393 "modes.m"
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
