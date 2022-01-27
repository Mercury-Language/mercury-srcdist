/*
** Automatically generated from `modes.m'
** by the Mercury compiler,
** version 14.01-beta-2014-02-06, configured for x86_64-apple-darwin13.0.0.
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



#line 429 "modes.m"
struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s {
#line 434 "modes.m"
  MR_bool check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded;
#line 502 "modes.m"
  MR_Word check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcTable_71;
#line 506 "modes.m"
  jmp_buf check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__commit_0;
#line 506 "modes.m"
  MR_Word check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcInfo_81;
#line 506 "modes.m"
  MR_Word check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__V_84_84;
#line 506 "modes.m"
  MR_Integer check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0___ProcId_73;
#line 506 "modes.m"
  MR_Box check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv2__ProcId_73;
#line 506 "modes.m"
  MR_Box check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv1_ProcInfo_81;
#line 429 "modes.m"
};


#line 175 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 178 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 181 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 184 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 187 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 190 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 193 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 196 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 199 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 202 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 205 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 208 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_0[1];

#line 211 "check_hlds.modes.c"
static const MR_DuFunctorDesc check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0;

#line 214 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0;

#line 217 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_1[3];

#line 220 "check_hlds.modes.c"
static const MR_DuFunctorDesc check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1;

#line 223 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_0[1];

#line 226 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_1[1];

#line 229 "check_hlds.modes.c"
static const MR_DuPtagLayout check_hlds__modes__check_hlds__modes__du_ptag_ordered_clause_form_0[2];

#line 232 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_name_ordered_clause_form_0[2];

#line 235 "check_hlds.modes.c"
static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_clause_form_0[2];

#line 238 "check_hlds.modes.c"
static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_0;

#line 241 "check_hlds.modes.c"
static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_1;

#line 244 "check_hlds.modes.c"
static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_value_ordered_modes_safe_to_continue_0[2];

#line 247 "check_hlds.modes.c"
static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_name_ordered_modes_safe_to_continue_0[2];

#line 250 "check_hlds.modes.c"
static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_modes_safe_to_continue_0[2];

#line 253 "check_hlds.modes.c"
static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0_10001(
#line 256 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 258 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2);

#line 261 "check_hlds.modes.c"
static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0_10001(
#line 264 "check_hlds.modes.c"
  MR_Box * check_hlds__modes__wrapper_arg_1,
#line 266 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 268 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_3);

#line 271 "check_hlds.modes.c"
static MR_bool MR_CALL 
check_hlds__modes____Unify____modes_safe_to_continue_0_0_10001(
#line 274 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 276 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2);

#line 279 "check_hlds.modes.c"
static void MR_CALL 
check_hlds__modes____Compare____modes_safe_to_continue_0_0_10001(
#line 282 "check_hlds.modes.c"
  MR_Box * check_hlds__modes__wrapper_arg_1,
#line 284 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 286 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_3);

#line 997 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__997__1_2_p_0(
#line 997 "modes.m"
  MR_Word check_hlds__modes__DetismSpecs_37,
#line 997 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_56);

#line 1027 "modes.m"
static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0(
#line 1027 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__1_1,
#line 1027 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1027 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3);

#line 1027 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0(
#line 1027 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1027 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2);

#line 1371 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_nonunique_modes_2_p_0(
#line 1371 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1371 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2);

#line 1353 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_fully_in_out_modes_2_p_0(
#line 1353 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1353 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2);

#line 1314 "modes.m"
static void MR_CALL 
check_hlds__modes__proc_check_eval_methods_5_p_0(
#line 1314 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1314 "modes.m"
  MR_Word check_hlds__modes__PredId_2,
#line 1314 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3,
#line 1314 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_4,
#line 1314 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_5);

#line 1303 "modes.m"
static void MR_CALL 
check_hlds__modes__pred_check_eval_methods_4_p_0(
#line 1303 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1303 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1303 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_3,
#line 1303 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_4);

#line 1216 "modes.m"
static void MR_CALL 
check_hlds__modes__check_final_insts_12_p_0(
#line 1216 "modes.m"
  MR_Word check_hlds__modes__Vars_13,
#line 1216 "modes.m"
  MR_Word check_hlds__modes__Insts_14,
#line 1216 "modes.m"
  MR_Word check_hlds__modes__VarInsts_15,
#line 1216 "modes.m"
  MR_Word check_hlds__modes__InferModes_16,
#line 1216 "modes.m"
  MR_Integer check_hlds__modes__ArgNum_17,
#line 1216 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_18,
#line 1216 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Goal_0_33,
#line 1216 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Goal_34,
#line 1216 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_35,
#line 1216 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_36,
#line 1216 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_37,
#line 1216 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_38);

#line 1198 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_clobber_insts_3_p_0(
#line 1198 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1198 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1198 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__3_3);

#line 1145 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_final_insts_8_p_0(
#line 1145 "modes.m"
  MR_Word check_hlds__modes__HeadVars_9,
#line 1145 "modes.m"
  MR_Word check_hlds__modes__InferModes_10,
#line 1145 "modes.m"
  MR_Word check_hlds__modes__FinalInsts0_11,
#line 1145 "modes.m"
  MR_Word * check_hlds__modes__FinalInsts_12,
#line 1145 "modes.m"
  MR_Word check_hlds__modes__Body0_13,
#line 1145 "modes.m"
  MR_Word * check_hlds__modes__Body_14,
#line 1145 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_34,
#line 1145 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_35);

#line 1100 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_switch_9_p_0(
#line 1100 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1100 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1100 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1100 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1100 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1100 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1100 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1100 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1100 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28);

#line 1080 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_disj_11_p_0(
#line 1080 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_12,
#line 1080 "modes.m"
  MR_Word check_hlds__modes__HeadVars_13,
#line 1080 "modes.m"
  MR_Word check_hlds__modes__InstMap0_14,
#line 1080 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_15,
#line 1080 "modes.m"
  MR_Word check_hlds__modes__DisjDetism_16,
#line 1080 "modes.m"
  MR_Word check_hlds__modes__DisjNonLocals_17,
#line 1080 "modes.m"
  MR_Word check_hlds__modes__NondetLiveVars0_18,
#line 1080 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_19,
#line 1080 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_20,
#line 1080 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_24,
#line 1080 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_25);

#line 1046 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_switch_9_p_0(
#line 1046 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1046 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1046 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1046 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1046 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1046 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1046 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1046 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1046 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28);

#line 1031 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_disj_8_p_0(
#line 1031 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_9,
#line 1031 "modes.m"
  MR_Word check_hlds__modes__HeadVars_10,
#line 1031 "modes.m"
  MR_Word check_hlds__modes__InstMap0_11,
#line 1031 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_12,
#line 1031 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_13,
#line 1031 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_14,
#line 1031 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
#line 1031 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19);

#line 997 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0_1(
#line 997 "modes.m"
  MR_Box check_hlds__modes__closure_arg);

#line 880 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0(
#line 880 "modes.m"
  MR_Word check_hlds__modes__HowToCheckGoal_8,
#line 880 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26,
#line 880 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_OldPredTable_27,
#line 880 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28,
#line 880 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_29,
#line 880 "modes.m"
  MR_Word * check_hlds__modes__Changed_11,
#line 880 "modes.m"
  MR_Word * check_hlds__modes__Specs_12);

#line 837 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0_5(
#line 837 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 837 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 837 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 837 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 837 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4);

#line 829 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0_4(
#line 829 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 829 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 829 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 829 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 829 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4);

#line 803 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0_3(
#line 803 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 803 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 803 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 803 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 803 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4);

#line 796 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0_2(
#line 796 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 796 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 796 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 796 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 796 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4);

#line 777 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0_1(
#line 777 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 777 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1);

#line 750 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0(
#line 750 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_15,
#line 750 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_16,
#line 750 "modes.m"
  MR_Word check_hlds__modes__InferModes_17,
#line 750 "modes.m"
  MR_Word check_hlds__modes__Markers_18,
#line 750 "modes.m"
  MR_Word check_hlds__modes__PredId_19,
#line 750 "modes.m"
  MR_Integer check_hlds__modes__ProcId_20,
#line 750 "modes.m"
  MR_Word check_hlds__modes__Body0_21,
#line 750 "modes.m"
  MR_Word * check_hlds__modes__Body_22,
#line 750 "modes.m"
  MR_Word check_hlds__modes__HeadVars_23,
#line 750 "modes.m"
  MR_Word check_hlds__modes__InstMap0_24,
#line 750 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_25,
#line 750 "modes.m"
  MR_Word * check_hlds__modes__ArgFinalInsts_26,
#line 750 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_63,
#line 750 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_64);

#line 674 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_2(
#line 674 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 674 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1);

#line 654 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_1(
#line 654 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 654 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1);

#line 560 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0(
#line 560 "modes.m"
  MR_Integer check_hlds__modes__ProcId_10,
#line 560 "modes.m"
  MR_Word check_hlds__modes__PredId_11,
#line 560 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_12,
#line 560 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_13,
#line 560 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27,
#line 560 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_28,
#line 560 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_29,
#line 560 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_30,
#line 560 "modes.m"
  MR_Word * check_hlds__modes__Specs_16);

#line 531 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_procs_10_p_0(
#line 531 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 531 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 531 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_3,
#line 531 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_4,
#line 531 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5,
#line 531 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_6,
#line 531 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_7,
#line 531 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_8,
#line 531 "modes.m"
  MR_Word check_hlds__modes__HeadVar__9_9,
#line 531 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__10_10);

#line 506 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_1(
#line 506 "modes.m"
  void * check_hlds__modes__env_ptr_arg);

#line 506 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_3(
#line 506 "modes.m"
  void * check_hlds__modes__env_ptr_arg);

#line 506 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_2(
#line 506 "modes.m"
  void * check_hlds__modes__env_ptr_arg);

#line 506 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_4(
#line 506 "modes.m"
  void * check_hlds__modes__env_ptr_arg);

#line 429 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0(
#line 429 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_10,
#line 429 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_11,
#line 429 "modes.m"
  MR_Word check_hlds__modes__PredId_12,
#line 429 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25,
#line 429 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_26,
#line 429 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_27,
#line 429 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_28,
#line 429 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_29,
#line 429 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_30);

#line 398 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_proc_body_4_p_0(
#line 398 "modes.m"
  MR_Word check_hlds__modes__OldProcTable_5,
#line 398 "modes.m"
  MR_Integer check_hlds__modes__ProcId_6,
#line 398 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ProcTable_0_12,
#line 398 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ProcTable_13);

#line 388 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0_1(
#line 388 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 388 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 388 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 388 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3);

#line 370 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0(
#line 370 "modes.m"
  MR_Word check_hlds__modes__OldPredTable_5,
#line 370 "modes.m"
  MR_Word check_hlds__modes__PredId_6,
#line 370 "modes.m"
  MR_Word check_hlds__modes__PredTable0_7,
#line 370 "modes.m"
  MR_Word * check_hlds__modes__PredTable_8);

#line 362 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_2(
#line 362 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 362 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 362 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 362 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3);

#line 259 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_1(
#line 259 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 259 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 259 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 259 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3,
#line 259 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_4,
#line 259 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_5,
#line 259 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_6,
#line 259 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_7);

#line 247 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0(
#line 247 "modes.m"
  MR_Word check_hlds__modes__PredIds_9,
#line 247 "modes.m"
  MR_Integer check_hlds__modes__MaxIterations_10,
#line 247 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_11,
#line 247 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_12,
#line 247 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31,
#line 247 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_32,
#line 247 "modes.m"
  MR_Word * check_hlds__modes__SafeToContinue_14,
#line 247 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_33);


static /* final */ const MR_Box check_hlds__modes_scalar_common_1[40][2];

static /* final */ const MR_Box check_hlds__modes_scalar_common_2[4][3];

static /* final */ const MR_Box check_hlds__modes_scalar_common_3[2][12];

static /* final */ const MR_Box check_hlds__modes_scalar_common_4[4][1];

static /* final */ const MR_Box check_hlds__modes_scalar_common_5[2][7];

static /* final */ const MR_Box check_hlds__modes_scalar_common_6[3][6];

static /* final */ const MR_Box check_hlds__modes_scalar_common_7[1][11];

static /* final */ const MR_Box check_hlds__modes_scalar_common_8[1][14];

static /* final */ const MR_Box check_hlds__modes_scalar_common_9[1][5];




static /* final */ const MR_Box check_hlds__modes_scalar_common_1[40][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: main/2 must have mode \140(di, uo)\'."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[4])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Mode analysis iteration limit exceeded."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "You may need to declare the modes explicitly"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "or use the \140--mode-inference-iteration-limit\' option"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "to increase the limit."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "(The current limit is"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Sorry, not implemented:"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__modes_scalar_common_4[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__modes_scalar_common_4[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 39 */
  {
    ((MR_Box) (&check_hlds__modes_scalar_common_4[3])),
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

static /* final */ const MR_Box check_hlds__modes_scalar_common_3[2][12] = {
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

static /* final */ const MR_Box check_hlds__modes_scalar_common_4[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[16])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[27])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[29])))
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



#line 1243 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1251 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1260 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 1269 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1277 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1286 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1294 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1302 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1310 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1318 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1326 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1334 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1339 "check_hlds.modes.c"
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

#line 1354 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0
  }
};

#line 1362 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_1[3] = {
  (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_can_fail_0,
  (MR_PseudoTypeInfo) &check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0
};

#line 1369 "check_hlds.modes.c"
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

#line 1384 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_0[1] = {
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0
};

#line 1389 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_1[1] = {
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1
};

#line 1394 "check_hlds.modes.c"
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

#line 1408 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_name_ordered_clause_form_0[2] = {
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0,
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1
};

#line 1414 "check_hlds.modes.c"
static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_clause_form_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1420 "check_hlds.modes.c"
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

#line 1441 "check_hlds.modes.c"
static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_0 = {
  (MR_String) "modes_safe_to_continue",
  (MR_Integer) 0
};

#line 1447 "check_hlds.modes.c"
static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_1 = {
  (MR_String) "modes_unsafe_to_continue",
  (MR_Integer) 1
};

#line 1453 "check_hlds.modes.c"
static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_value_ordered_modes_safe_to_continue_0[2] = {
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_0,
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_1
};

#line 1459 "check_hlds.modes.c"
static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_name_ordered_modes_safe_to_continue_0[2] = {
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_0,
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_1
};

#line 1465 "check_hlds.modes.c"
static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_modes_safe_to_continue_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1471 "check_hlds.modes.c"
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

#line 1492 "check_hlds.modes.c"
static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0_10001(
#line 1495 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 1497 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2)
#line 1499 "check_hlds.modes.c"
{
#line 1501 "check_hlds.modes.c"
  {
#line 1503 "check_hlds.modes.c"
    MR_bool check_hlds__modes__succeeded;

#line 1506 "check_hlds.modes.c"
    {
#line 1508 "check_hlds.modes.c"
      check_hlds__modes__succeeded = check_hlds__modes____Unify____clause_form_0_0(((MR_Word) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2));
    }
#line 1511 "check_hlds.modes.c"
    return check_hlds__modes__succeeded;
#line 1513 "check_hlds.modes.c"
  }
#line 1515 "check_hlds.modes.c"
}

#line 1518 "check_hlds.modes.c"
static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0_10001(
#line 1521 "check_hlds.modes.c"
  MR_Box * check_hlds__modes__wrapper_arg_1,
#line 1523 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 1525 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_3)
#line 1527 "check_hlds.modes.c"
{
#line 1529 "check_hlds.modes.c"
  {
#line 1531 "check_hlds.modes.c"
    MR_Word check_hlds__modes__conv0_HeadVar__1_1;

#line 1534 "check_hlds.modes.c"
    {
#line 1536 "check_hlds.modes.c"
      check_hlds__modes____Compare____clause_form_0_0(&check_hlds__modes__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modes__wrapper_arg_2), ((MR_Word) check_hlds__modes__wrapper_arg_3));
    }
#line 1539 "check_hlds.modes.c"
    *check_hlds__modes__wrapper_arg_1 = ((MR_Box) (check_hlds__modes__conv0_HeadVar__1_1));
#line 1541 "check_hlds.modes.c"
  }
#line 1543 "check_hlds.modes.c"
}

#line 1546 "check_hlds.modes.c"
static MR_bool MR_CALL 
check_hlds__modes____Unify____modes_safe_to_continue_0_0_10001(
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
      check_hlds__modes__succeeded = check_hlds__modes____Unify____modes_safe_to_continue_0_0(((MR_Word) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2));
    }
#line 1565 "check_hlds.modes.c"
    return check_hlds__modes__succeeded;
#line 1567 "check_hlds.modes.c"
  }
#line 1569 "check_hlds.modes.c"
}

#line 1572 "check_hlds.modes.c"
static void MR_CALL 
check_hlds__modes____Compare____modes_safe_to_continue_0_0_10001(
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
      check_hlds__modes____Compare____modes_safe_to_continue_0_0(&check_hlds__modes__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modes__wrapper_arg_2), ((MR_Word) check_hlds__modes__wrapper_arg_3));
    }
#line 1593 "check_hlds.modes.c"
    *check_hlds__modes__wrapper_arg_1 = ((MR_Box) (check_hlds__modes__conv0_HeadVar__1_1));
#line 1595 "check_hlds.modes.c"
  }
#line 1597 "check_hlds.modes.c"
}

#line 997 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__997__1_2_p_0(
#line 997 "modes.m"
  MR_Word check_hlds__modes__DetismSpecs_37,
#line 997 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_56)
#line 997 "modes.m"
{
#line 997 "modes.m"
  {
#line 997 "modes.m"
    MR_bool check_hlds__modes__succeeded;

#line 997 "modes.m"
    {
#line 997 "modes.m"
      return check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modes_scalar_common_1[0], ((MR_Box) (check_hlds__modes__DetismSpecs_37)), ((MR_Box) (check_hlds__modes__HeadVar__2_56)));
    }
#line 997 "modes.m"
    return check_hlds__modes__succeeded;
#line 997 "modes.m"
  }
#line 997 "modes.m"
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
#line 1667 "check_hlds.modes.c"
  {
#line 1669 "check_hlds.modes.c"
    MR_bool check_hlds__modes__succeeded = (check_hlds__modes__HeadVar__2_1 == check_hlds__modes__HeadVar__2_2);

#line 1672 "check_hlds.modes.c"
    return check_hlds__modes__succeeded;
#line 1674 "check_hlds.modes.c"
  }
#line 79 "modes.m"
}

#line 1027 "modes.m"
static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0(
#line 1027 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__1_1,
#line 1027 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1027 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3)
#line 1027 "modes.m"
{
#line 1027 "modes.m"
  {
#line 1027 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1027 "modes.m"
    MR_Integer check_hlds__modes__CastX_22 = (MR_Integer) check_hlds__modes__HeadVar__2_2;
#line 1027 "modes.m"
    MR_Integer check_hlds__modes__CastY_23 = (MR_Integer) check_hlds__modes__HeadVar__3_3;

#line 1027 "modes.m"
    check_hlds__modes__succeeded = (check_hlds__modes__CastX_22 == check_hlds__modes__CastY_23);
#line 1027 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1703 "check_hlds.modes.c"
      *check_hlds__modes__HeadVar__1_1 = (MR_Integer) 0;
#line 1027 "modes.m"
    else
#line 1027 "modes.m"
      if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1027 "modes.m"
        {
#line 1027 "modes.m"
          MR_Word check_hlds__modes__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));

#line 1027 "modes.m"
          if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1027 "modes.m"
            {
#line 1027 "modes.m"
              MR_Word check_hlds__modes__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__3_3, (MR_Integer) 0)));

#line 1027 "modes.m"
              {
#line 1027 "modes.m"
                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[3], check_hlds__modes__HeadVar__1_1, ((MR_Box) (check_hlds__modes__V_28_28)), ((MR_Box) (check_hlds__modes__V_5_5)));
#line 1027 "modes.m"
                return;
              }
#line 1027 "modes.m"
            }
#line 1027 "modes.m"
          else
#line 1732 "check_hlds.modes.c"
            *check_hlds__modes__HeadVar__1_1 = (MR_Integer) 1;
#line 1027 "modes.m"
        }
#line 1027 "modes.m"
      else
#line 1027 "modes.m"
        {
#line 1027 "modes.m"
          MR_Word check_hlds__modes__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 2)));
#line 1027 "modes.m"
          MR_Word check_hlds__modes__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1027 "modes.m"
          MR_Word check_hlds__modes__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));

#line 1027 "modes.m"
          if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1749 "check_hlds.modes.c"
            *check_hlds__modes__HeadVar__1_1 = (MR_Integer) 2;
#line 1027 "modes.m"
          else
#line 1027 "modes.m"
            {
#line 1027 "modes.m"
              MR_Word check_hlds__modes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 0)));
#line 1027 "modes.m"
              MR_Word check_hlds__modes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 1)));
#line 1027 "modes.m"
              MR_Word check_hlds__modes__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 2)));
#line 1027 "modes.m"
              MR_Word check_hlds__modes__V_20_20;

#line 1027 "modes.m"
              {
#line 1027 "modes.m"
                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[1], &check_hlds__modes__V_20_20, ((MR_Box) (check_hlds__modes__V_31_31)), ((MR_Box) (check_hlds__modes__V_17_17)));
              }
#line 1769 "check_hlds.modes.c"
              check_hlds__modes__succeeded = (check_hlds__modes__V_20_20 == (MR_Integer) 0);
#line 1027 "modes.m"
              check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1027 "modes.m"
              if (check_hlds__modes__succeeded)
#line 1027 "modes.m"
                *check_hlds__modes__HeadVar__1_1 = check_hlds__modes__V_20_20;
#line 1027 "modes.m"
              else
#line 1027 "modes.m"
                {
#line 1027 "modes.m"
                  MR_Word check_hlds__modes__V_21_21;
#line 1027 "modes.m"
                  MR_Integer check_hlds__modes__V_32_32 = (MR_Integer) check_hlds__modes__V_30_30;
#line 1027 "modes.m"
                  MR_Integer check_hlds__modes__V_33_33 = (MR_Integer) check_hlds__modes__V_18_18;

#line 1027 "modes.m"
                  {
#line 1027 "modes.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__modes__V_21_21, check_hlds__modes__V_32_32, check_hlds__modes__V_33_33);
                  }
#line 1793 "check_hlds.modes.c"
                  check_hlds__modes__succeeded = (check_hlds__modes__V_21_21 == (MR_Integer) 0);
#line 1027 "modes.m"
                  check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1027 "modes.m"
                  if (check_hlds__modes__succeeded)
#line 1027 "modes.m"
                    *check_hlds__modes__HeadVar__1_1 = check_hlds__modes__V_21_21;
#line 1027 "modes.m"
                  else
#line 1027 "modes.m"
                    {
#line 1027 "modes.m"
                      {
#line 1027 "modes.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[2], check_hlds__modes__HeadVar__1_1, ((MR_Box) (check_hlds__modes__V_29_29)), ((MR_Box) (check_hlds__modes__V_19_19)));
#line 1027 "modes.m"
                        return;
                      }
#line 1027 "modes.m"
                    }
#line 1027 "modes.m"
                }
#line 1027 "modes.m"
            }
#line 1027 "modes.m"
        }
#line 1027 "modes.m"
  }
#line 1027 "modes.m"
}

#line 1027 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0(
#line 1027 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1027 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2)
#line 1027 "modes.m"
{
#line 1027 "modes.m"
  {
#line 1027 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1027 "modes.m"
    MR_Integer check_hlds__modes__CastX_11 = (MR_Integer) check_hlds__modes__HeadVar__1_1;
#line 1027 "modes.m"
    MR_Integer check_hlds__modes__CastY_12 = (MR_Integer) check_hlds__modes__HeadVar__2_2;

#line 1027 "modes.m"
    check_hlds__modes__succeeded = (check_hlds__modes__CastX_11 == check_hlds__modes__CastY_12);
#line 1027 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1027 "modes.m"
      check_hlds__modes__succeeded = MR_TRUE;
#line 1027 "modes.m"
    else
#line 1027 "modes.m"
      if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1027 "modes.m"
        {
#line 1027 "modes.m"
          MR_Word check_hlds__modes__TypeInfo_13_13;
#line 1027 "modes.m"
          MR_Word check_hlds__modes__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1027 "modes.m"
          MR_Word check_hlds__modes__V_4_4;

#line 1027 "modes.m"
          check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1027 "modes.m"
          if (check_hlds__modes__succeeded)
#line 1027 "modes.m"
            {
#line 1027 "modes.m"
              check_hlds__modes__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1870 "check_hlds.modes.c"
              check_hlds__modes__TypeInfo_13_13 = (MR_Word) &check_hlds__modes_scalar_common_1[3];
#line 1872 "check_hlds.modes.c"
              {
#line 1874 "check_hlds.modes.c"
                return check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modes__TypeInfo_13_13, ((MR_Box) (check_hlds__modes__V_3_3)), ((MR_Box) (check_hlds__modes__V_4_4)));
              }
#line 1027 "modes.m"
            }
#line 1027 "modes.m"
        }
#line 1027 "modes.m"
      else
#line 1027 "modes.m"
        {
#line 1027 "modes.m"
          MR_Word check_hlds__modes__TypeInfo_14_14;
#line 1027 "modes.m"
          MR_Word check_hlds__modes__TypeInfo_15_15;
#line 1027 "modes.m"
          MR_Word check_hlds__modes__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1027 "modes.m"
          MR_Word check_hlds__modes__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1027 "modes.m"
          MR_Word check_hlds__modes__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 2)));
#line 1027 "modes.m"
          MR_Word check_hlds__modes__V_8_8;
#line 1027 "modes.m"
          MR_Word check_hlds__modes__V_9_9;
#line 1027 "modes.m"
          MR_Word check_hlds__modes__V_10_10;

#line 1027 "modes.m"
          check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1027 "modes.m"
          if (check_hlds__modes__succeeded)
#line 1027 "modes.m"
            {
#line 1027 "modes.m"
              check_hlds__modes__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1027 "modes.m"
              check_hlds__modes__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1027 "modes.m"
              check_hlds__modes__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 2)));
#line 1914 "check_hlds.modes.c"
              check_hlds__modes__TypeInfo_14_14 = (MR_Word) &check_hlds__modes_scalar_common_1[1];
#line 1916 "check_hlds.modes.c"
              {
#line 1918 "check_hlds.modes.c"
                check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modes__TypeInfo_14_14, ((MR_Box) (check_hlds__modes__V_5_5)), ((MR_Box) (check_hlds__modes__V_8_8)));
              }
#line 1027 "modes.m"
              if (check_hlds__modes__succeeded)
#line 1027 "modes.m"
                {
#line 1925 "check_hlds.modes.c"
                  check_hlds__modes__succeeded = (check_hlds__modes__V_6_6 == check_hlds__modes__V_9_9);
#line 1027 "modes.m"
                  if (check_hlds__modes__succeeded)
#line 1027 "modes.m"
                    {
#line 1931 "check_hlds.modes.c"
                      check_hlds__modes__TypeInfo_15_15 = (MR_Word) &check_hlds__modes_scalar_common_1[2];
#line 1933 "check_hlds.modes.c"
                      {
#line 1935 "check_hlds.modes.c"
                        return check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modes__TypeInfo_15_15, ((MR_Box) (check_hlds__modes__V_7_7)), ((MR_Box) (check_hlds__modes__V_10_10)));
                      }
#line 1027 "modes.m"
                    }
#line 1027 "modes.m"
                }
#line 1027 "modes.m"
            }
#line 1027 "modes.m"
        }
#line 1027 "modes.m"
    return check_hlds__modes__succeeded;
#line 1027 "modes.m"
  }
#line 1027 "modes.m"
}

#line 1371 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_nonunique_modes_2_p_0(
#line 1371 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1371 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2)
#line 1371 "modes.m"
{
#line 1373 "modes.m"
  while (MR_TRUE)
#line 1373 "modes.m"
    {
#line 1373 "modes.m"
      /* tailcall optimized into a loop */
#line 1373 "modes.m"
      {
#line 1373 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 1373 "modes.m"
        if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1373 "modes.m"
          check_hlds__modes__succeeded = MR_TRUE;
#line 1373 "modes.m"
        else
#line 1374 "modes.m"
          {
#line 1374 "modes.m"
            MR_Word check_hlds__modes__Mode_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1374 "modes.m"
            MR_Word check_hlds__modes__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1374 "modes.m"
            MR_Word check_hlds__modes__InitialInst_7;
#line 1374 "modes.m"
            MR_Word check_hlds__modes__FinalInst_8;

#line 1375 "modes.m"
            {
#line 1375 "modes.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__Mode_4, &check_hlds__modes__InitialInst_7, &check_hlds__modes__FinalInst_8);
            }
#line 1376 "modes.m"
            {
#line 1376 "modes.m"
              check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__InitialInst_7);
            }
#line 1374 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1374 "modes.m"
              {
#line 1377 "modes.m"
                {
#line 1377 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__FinalInst_8);
                }
#line 1374 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1378 "modes.m"
                  {
#line 1378 "modes.m"
                    /* direct tailcall eliminated */
#line 1378 "modes.m"
                    {
#line 1378 "modes.m"
                      MR_Word check_hlds__modes__HeadVar__1__tmp_copy_1 = check_hlds__modes__Rest_5;

#line 1378 "modes.m"
                      check_hlds__modes__HeadVar__1_1 = check_hlds__modes__HeadVar__1__tmp_copy_1;
#line 1378 "modes.m"
                    }
#line 1378 "modes.m"
                    continue;
#line 1378 "modes.m"
                  }
#line 1374 "modes.m"
              }
#line 1374 "modes.m"
          }
#line 1373 "modes.m"
        return check_hlds__modes__succeeded;
#line 1373 "modes.m"
      }
#line 1373 "modes.m"
      break;
#line 1373 "modes.m"
    }
#line 1371 "modes.m"
}

#line 1353 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_fully_in_out_modes_2_p_0(
#line 1353 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1353 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2)
#line 1353 "modes.m"
{
#line 1356 "modes.m"
  while (MR_TRUE)
#line 1356 "modes.m"
    {
#line 1356 "modes.m"
      /* tailcall optimized into a loop */
#line 1356 "modes.m"
      {
#line 1356 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 1356 "modes.m"
        if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1356 "modes.m"
          check_hlds__modes__succeeded = MR_TRUE;
#line 1356 "modes.m"
        else
#line 1357 "modes.m"
          {
#line 1357 "modes.m"
            MR_Word check_hlds__modes__Mode_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1357 "modes.m"
            MR_Word check_hlds__modes__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1357 "modes.m"
            MR_Word check_hlds__modes__InitialInst_7;
#line 1357 "modes.m"
            MR_Word check_hlds__modes__FinalInst_8;

#line 1358 "modes.m"
            {
#line 1358 "modes.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__Mode_4, &check_hlds__modes__InitialInst_7, &check_hlds__modes__FinalInst_8);
            }
#line 1360 "modes.m"
            {
#line 1360 "modes.m"
              check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__InitialInst_7);
            }
#line 1361 "modes.m"
            if (!(check_hlds__modes__succeeded))
#line 1362 "modes.m"
              {
#line 1362 "modes.m"
                {
#line 1362 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__InitialInst_7);
                }
#line 1362 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1362 "modes.m"
                  {
#line 1364 "modes.m"
                    {
#line 1364 "modes.m"
                      check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__FinalInst_8);
                    }
#line 1365 "modes.m"
                    if (!(check_hlds__modes__succeeded))
#line 1366 "modes.m"
                      {
#line 1366 "modes.m"
                        check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__FinalInst_8);
                      }
#line 1362 "modes.m"
                  }
#line 1362 "modes.m"
              }
#line 1357 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1369 "modes.m"
              {
#line 1369 "modes.m"
                /* direct tailcall eliminated */
#line 1369 "modes.m"
                {
#line 1369 "modes.m"
                  MR_Word check_hlds__modes__HeadVar__1__tmp_copy_1 = check_hlds__modes__Rest_5;

#line 1369 "modes.m"
                  check_hlds__modes__HeadVar__1_1 = check_hlds__modes__HeadVar__1__tmp_copy_1;
#line 1369 "modes.m"
                }
#line 1369 "modes.m"
                continue;
#line 1369 "modes.m"
              }
#line 1357 "modes.m"
          }
#line 1356 "modes.m"
        return check_hlds__modes__succeeded;
#line 1356 "modes.m"
      }
#line 1356 "modes.m"
      break;
#line 1356 "modes.m"
    }
#line 1353 "modes.m"
}

#line 1314 "modes.m"
static void MR_CALL 
check_hlds__modes__proc_check_eval_methods_5_p_0(
#line 1314 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1314 "modes.m"
  MR_Word check_hlds__modes__PredId_2,
#line 1314 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3,
#line 1314 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_4,
#line 1314 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_5)
#line 1314 "modes.m"
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
        MR_bool check_hlds__modes__succeeded;

#line 1317 "modes.m"
        if ((check_hlds__modes__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1317 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Specs_5 = check_hlds__modes__STATE_VARIABLE_Specs_0_4;
#line 1317 "modes.m"
        else
#line 1318 "modes.m"
          {
#line 1318 "modes.m"
            MR_Integer check_hlds__modes__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 0)));
#line 1318 "modes.m"
            MR_Word check_hlds__modes__ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 1)));
#line 1318 "modes.m"
            MR_Word check_hlds__modes__PredInfo_16;
#line 1318 "modes.m"
            MR_Word check_hlds__modes__ProcInfo_17;
#line 1318 "modes.m"
            MR_Word check_hlds__modes__EvalMethod_18;
#line 1318 "modes.m"
            MR_Word check_hlds__modes__Modes_19;
#line 1318 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_26_26;
#line 1318 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_28_28;
#line 1318 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_31_31;
#line 1323 "modes.m"
            MR_Word check_hlds__modes__V_25_25;
#line 1332 "modes.m"
            MR_Word check_hlds__modes__V_27_27;
#line 1341 "modes.m"
            MR_String check_hlds__modes__V_29_29;
#line 1341 "modes.m"
            MR_Integer check_hlds__modes__V_30_30;
#line 1382 "modes.m"
            MR_Word check_hlds__modes__Di_129;
#line 1382 "modes.m"
            MR_Word check_hlds__modes__Uo_130;
#line 1382 "modes.m"
            MR_Word check_hlds__modes__DiInitialInst_131;
#line 1382 "modes.m"
            MR_Word check_hlds__modes__DiFinalInst_132;
#line 1382 "modes.m"
            MR_Word check_hlds__modes__UoInitialInst_133;
#line 1382 "modes.m"
            MR_Word check_hlds__modes__UoFinalInst_134;
#line 1382 "modes.m"
            MR_Word check_hlds__modes__Free_135;
#line 1382 "modes.m"
            MR_Word check_hlds__modes__V_137_137;
#line 1382 "modes.m"
            MR_Word check_hlds__modes__V_138_138;
#line 1382 "modes.m"
            MR_Word check_hlds__modes__V_139_139;
#line 1382 "modes.m"
            MR_Word check_hlds__modes__V_140_140;
#line 1382 "modes.m"
            MR_Word check_hlds__modes__V_141_141;
#line 1382 "modes.m"
            MR_Word check_hlds__modes__V_142_142;
#line 1382 "modes.m"
            MR_Word check_hlds__modes__V_143_143;
#line 1382 "modes.m"
            MR_Word check_hlds__modes__V_144_144;
#line 1382 "modes.m"
            MR_Word check_hlds__modes__V_148_148;
#line 1382 "modes.m"
            MR_Word check_hlds__modes__V_149_149;
#line 1382 "modes.m"
            MR_Word check_hlds__modes__V_150_150;

#line 1319 "modes.m"
            {
#line 1319 "modes.m"
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__PredId_2, check_hlds__modes__ProcId_13, &check_hlds__modes__PredInfo_16, &check_hlds__modes__ProcInfo_17);
            }
#line 1320 "modes.m"
            {
#line 1320 "modes.m"
              hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__EvalMethod_18);
            }
#line 1321 "modes.m"
            {
#line 1321 "modes.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Modes_19);
            }
#line 1323 "modes.m"
            {
#line 1323 "modes.m"
              check_hlds__modes__V_25_25 = hlds__hlds_pred__eval_method_requires_ground_args_1_f_0(check_hlds__modes__EvalMethod_18);
            }
#line 1323 "modes.m"
            check_hlds__modes__succeeded = (check_hlds__modes__V_25_25 == (MR_Integer) 1);
#line 1323 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1323 "modes.m"
              {
#line 1324 "modes.m"
                {
#line 1324 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__modes__only_fully_in_out_modes_2_p_0(check_hlds__modes__Modes_19, check_hlds__modes__ModuleInfo_1);
                }
#line 1324 "modes.m"
                check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1323 "modes.m"
              }
#line 1328 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1326 "modes.m"
              {
#line 1326 "modes.m"
                MR_Word check_hlds__modes__GroundArgsSpec_20;
#line 1326 "modes.m"
                MR_Word check_hlds__modes__EvalMethod_35;
#line 1326 "modes.m"
                MR_Word check_hlds__modes__Context_36;
#line 1326 "modes.m"
                MR_String check_hlds__modes__EvalMethodS_37;
#line 1326 "modes.m"
                MR_Word check_hlds__modes__MainPieces_38;
#line 1326 "modes.m"
                MR_Word check_hlds__modes__Msg_40;
#line 1326 "modes.m"
                MR_Word check_hlds__modes__V_43_43;
#line 1326 "modes.m"
                MR_Word check_hlds__modes__V_44_44;
#line 1326 "modes.m"
                MR_String check_hlds__modes__V_45_45;
#line 1326 "modes.m"
                MR_String check_hlds__modes__V_47_47;
#line 1326 "modes.m"
                MR_Word check_hlds__modes__V_69_69;
#line 1326 "modes.m"
                MR_Word check_hlds__modes__V_70_70;
#line 1326 "modes.m"
                MR_Word check_hlds__modes__V_77_77;

#line 1402 "modes.m"
                {
#line 1402 "modes.m"
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__EvalMethod_35);
                }
#line 1403 "modes.m"
                {
#line 1403 "modes.m"
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Context_36);
                }
#line 1404 "modes.m"
                {
#line 1404 "modes.m"
                  check_hlds__modes__EvalMethodS_37 = parse_tree__prog_out__eval_method_to_string_1_f_0(check_hlds__modes__EvalMethod_35);
                }
#line 1406 "modes.m"
                {
#line 1406 "modes.m"
                  check_hlds__modes__V_47_47 = mercury__string__f_43_43_2_f_0(check_hlds__modes__EvalMethodS_37, (MR_String) "\'");
                }
#line 1406 "modes.m"
                {
#line 1406 "modes.m"
                  check_hlds__modes__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) "\140pragma ", check_hlds__modes__V_47_47);
                }
#line 1406 "modes.m"
                {
#line 1406 "modes.m"
                  check_hlds__modes__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1406 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_44_44, 0) = ((MR_Box) (check_hlds__modes__V_45_45));
#line 1406 "modes.m"
                }
#line 1405 "modes.m"
                {
#line 1405 "modes.m"
                  check_hlds__modes__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1405 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_43_43, 0) = ((MR_Box) (check_hlds__modes__V_44_44));
#line 1405 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[10])));
#line 1405 "modes.m"
                }
#line 1405 "modes.m"
                {
#line 1405 "modes.m"
                  check_hlds__modes__MainPieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1405 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[35])));
#line 1405 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_38, 1) = ((MR_Box) (check_hlds__modes__V_43_43));
#line 1405 "modes.m"
                }
#line 1413 "modes.m"
                {
#line 1413 "modes.m"
                  check_hlds__modes__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1413 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_70_70, 0) = ((MR_Box) (check_hlds__modes__MainPieces_38));
#line 1413 "modes.m"
                }
#line 1412 "modes.m"
                {
#line 1412 "modes.m"
                  check_hlds__modes__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1412 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_69_69, 0) = ((MR_Box) (check_hlds__modes__V_70_70));
#line 1412 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[36])));
#line 1412 "modes.m"
                }
#line 1412 "modes.m"
                {
#line 1412 "modes.m"
                  check_hlds__modes__Msg_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1412 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_40, 0) = ((MR_Box) (check_hlds__modes__Context_36));
#line 1412 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_40, 1) = ((MR_Box) (check_hlds__modes__V_69_69));
#line 1412 "modes.m"
                }
#line 1414 "modes.m"
                {
#line 1414 "modes.m"
                  check_hlds__modes__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1414 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_77_77, 0) = ((MR_Box) (check_hlds__modes__Msg_40));
#line 1414 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1414 "modes.m"
                }
#line 1414 "modes.m"
                {
#line 1414 "modes.m"
                  check_hlds__modes__GroundArgsSpec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1414 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__GroundArgsSpec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1414 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__GroundArgsSpec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_4[0])));
#line 1414 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__GroundArgsSpec_20, 2) = ((MR_Box) (check_hlds__modes__V_77_77));
#line 1414 "modes.m"
                }
#line 1327 "modes.m"
                {
#line 1327 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Specs_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1327 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_26_26, 0) = ((MR_Box) (check_hlds__modes__GroundArgsSpec_20));
#line 1327 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_26_26, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_0_4));
#line 1327 "modes.m"
                }
#line 1326 "modes.m"
              }
#line 1328 "modes.m"
            else
#line 1327 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_26_26 = check_hlds__modes__STATE_VARIABLE_Specs_0_4;
#line 1332 "modes.m"
            {
#line 1332 "modes.m"
              check_hlds__modes__V_27_27 = hlds__hlds_pred__eval_method_destroys_uniqueness_1_f_0(check_hlds__modes__EvalMethod_18);
            }
#line 1332 "modes.m"
            check_hlds__modes__succeeded = (check_hlds__modes__V_27_27 == (MR_Integer) 1);
#line 1332 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1332 "modes.m"
              {
#line 1333 "modes.m"
                {
#line 1333 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__modes__only_nonunique_modes_2_p_0(check_hlds__modes__Modes_19, check_hlds__modes__ModuleInfo_1);
                }
#line 1333 "modes.m"
                check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1332 "modes.m"
              }
#line 1337 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1335 "modes.m"
              {
#line 1335 "modes.m"
                MR_Word check_hlds__modes__UniquenessSpec_21;
#line 1335 "modes.m"
                MR_Word check_hlds__modes__EvalMethod_81;
#line 1335 "modes.m"
                MR_Word check_hlds__modes__Context_82;
#line 1335 "modes.m"
                MR_String check_hlds__modes__EvalMethodS_83;
#line 1335 "modes.m"
                MR_Word check_hlds__modes__MainPieces_84;
#line 1335 "modes.m"
                MR_Word check_hlds__modes__Msg_86;
#line 1335 "modes.m"
                MR_Word check_hlds__modes__V_89_89;
#line 1335 "modes.m"
                MR_Word check_hlds__modes__V_90_90;
#line 1335 "modes.m"
                MR_String check_hlds__modes__V_91_91;
#line 1335 "modes.m"
                MR_String check_hlds__modes__V_93_93;
#line 1335 "modes.m"
                MR_Word check_hlds__modes__V_118_118;
#line 1335 "modes.m"
                MR_Word check_hlds__modes__V_119_119;
#line 1335 "modes.m"
                MR_Word check_hlds__modes__V_126_126;

#line 1420 "modes.m"
                {
#line 1420 "modes.m"
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__EvalMethod_81);
                }
#line 1421 "modes.m"
                {
#line 1421 "modes.m"
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Context_82);
                }
#line 1422 "modes.m"
                {
#line 1422 "modes.m"
                  check_hlds__modes__EvalMethodS_83 = parse_tree__prog_out__eval_method_to_string_1_f_0(check_hlds__modes__EvalMethod_81);
                }
#line 1424 "modes.m"
                {
#line 1424 "modes.m"
                  check_hlds__modes__V_93_93 = mercury__string__f_43_43_2_f_0(check_hlds__modes__EvalMethodS_83, (MR_String) "\'");
                }
#line 1424 "modes.m"
                {
#line 1424 "modes.m"
                  check_hlds__modes__V_91_91 = mercury__string__f_43_43_2_f_0((MR_String) "\140pragma ", check_hlds__modes__V_93_93);
                }
#line 1424 "modes.m"
                {
#line 1424 "modes.m"
                  check_hlds__modes__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1424 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_90_90, 0) = ((MR_Box) (check_hlds__modes__V_91_91));
#line 1424 "modes.m"
                }
#line 1423 "modes.m"
                {
#line 1423 "modes.m"
                  check_hlds__modes__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1423 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_89_89, 0) = ((MR_Box) (check_hlds__modes__V_90_90));
#line 1423 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[19])));
#line 1423 "modes.m"
                }
#line 1423 "modes.m"
                {
#line 1423 "modes.m"
                  check_hlds__modes__MainPieces_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1423 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[37])));
#line 1423 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_84, 1) = ((MR_Box) (check_hlds__modes__V_89_89));
#line 1423 "modes.m"
                }
#line 1433 "modes.m"
                {
#line 1433 "modes.m"
                  check_hlds__modes__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1433 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_119_119, 0) = ((MR_Box) (check_hlds__modes__MainPieces_84));
#line 1433 "modes.m"
                }
#line 1432 "modes.m"
                {
#line 1432 "modes.m"
                  check_hlds__modes__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1432 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_118_118, 0) = ((MR_Box) (check_hlds__modes__V_119_119));
#line 1432 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[38])));
#line 1432 "modes.m"
                }
#line 1432 "modes.m"
                {
#line 1432 "modes.m"
                  check_hlds__modes__Msg_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1432 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_86, 0) = ((MR_Box) (check_hlds__modes__Context_82));
#line 1432 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_86, 1) = ((MR_Box) (check_hlds__modes__V_118_118));
#line 1432 "modes.m"
                }
#line 1434 "modes.m"
                {
#line 1434 "modes.m"
                  check_hlds__modes__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1434 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_126_126, 0) = ((MR_Box) (check_hlds__modes__Msg_86));
#line 1434 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1434 "modes.m"
                }
#line 1434 "modes.m"
                {
#line 1434 "modes.m"
                  check_hlds__modes__UniquenessSpec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1434 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__UniquenessSpec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1434 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__UniquenessSpec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_4[0])));
#line 1434 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__UniquenessSpec_21, 2) = ((MR_Box) (check_hlds__modes__V_126_126));
#line 1434 "modes.m"
                }
#line 1336 "modes.m"
                {
#line 1336 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Specs_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1336 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_28_28, 0) = ((MR_Box) (check_hlds__modes__UniquenessSpec_21));
#line 1336 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_28_28, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_26_26));
#line 1336 "modes.m"
                }
#line 1335 "modes.m"
              }
#line 1337 "modes.m"
            else
#line 1336 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_28_28 = check_hlds__modes__STATE_VARIABLE_Specs_26_26;
#line 1341 "modes.m"
            {
#line 1341 "modes.m"
              check_hlds__modes__V_29_29 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__modes__PredInfo_16);
            }
#line 1341 "modes.m"
            check_hlds__modes__succeeded = (strcmp(check_hlds__modes__V_29_29, (MR_String) "main") == 0);
#line 1341 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1341 "modes.m"
              {
#line 1342 "modes.m"
                {
#line 1342 "modes.m"
                  check_hlds__modes__V_30_30 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__modes__PredInfo_16);
                }
#line 1342 "modes.m"
                check_hlds__modes__succeeded = (check_hlds__modes__V_30_30 == (MR_Integer) 2);
#line 1341 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1341 "modes.m"
                  {
#line 1343 "modes.m"
                    {
#line 1343 "modes.m"
                      check_hlds__modes__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(check_hlds__modes__PredInfo_16);
                    }
#line 1341 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1341 "modes.m"
                      {
#line 1382 "modes.m"
                        check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Modes_19)) == (MR_mktag((MR_Integer) 1)));
#line 1382 "modes.m"
                        if (check_hlds__modes__succeeded)
#line 1382 "modes.m"
                          {
#line 1382 "modes.m"
                            check_hlds__modes__Di_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Modes_19, (MR_Integer) 0)));
#line 1382 "modes.m"
                            check_hlds__modes__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Modes_19, (MR_Integer) 1)));
#line 1382 "modes.m"
                            check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__V_137_137)) == (MR_mktag((MR_Integer) 1)));
#line 1382 "modes.m"
                            if (check_hlds__modes__succeeded)
#line 1382 "modes.m"
                              {
#line 1382 "modes.m"
                                check_hlds__modes__Uo_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__V_137_137, (MR_Integer) 0)));
#line 1382 "modes.m"
                                check_hlds__modes__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__V_137_137, (MR_Integer) 1)));
#line 1382 "modes.m"
                                check_hlds__modes__succeeded = (check_hlds__modes__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1382 "modes.m"
                                if (check_hlds__modes__succeeded)
#line 1382 "modes.m"
                                  {
#line 1383 "modes.m"
                                    {
#line 1383 "modes.m"
                                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__Di_129, &check_hlds__modes__DiInitialInst_131, &check_hlds__modes__DiFinalInst_132);
                                    }
#line 1384 "modes.m"
                                    {
#line 1384 "modes.m"
                                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__Uo_130, &check_hlds__modes__UoInitialInst_133, &check_hlds__modes__UoFinalInst_134);
                                    }
#line 1393 "modes.m"
                                    check_hlds__modes__V_140_140 = (MR_Integer) 1;
#line 1393 "modes.m"
                                    check_hlds__modes__V_141_141 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1393 "modes.m"
                                    check_hlds__modes__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[3]);
#line 1393 "modes.m"
                                    {
#line 1393 "modes.m"
                                      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__DiInitialInst_131, &check_hlds__modes__V_148_148);
                                    }
#line 1393 "modes.m"
                                    {
#line 1393 "modes.m"
                                      check_hlds__modes__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modes__V_139_139, check_hlds__modes__V_148_148);
                                    }
#line 1382 "modes.m"
                                    if (check_hlds__modes__succeeded)
#line 1382 "modes.m"
                                      {
#line 1394 "modes.m"
                                        check_hlds__modes__V_143_143 = (MR_Integer) 3;
#line 1394 "modes.m"
                                        check_hlds__modes__V_144_144 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1394 "modes.m"
                                        check_hlds__modes__V_142_142 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[2]);
#line 1394 "modes.m"
                                        {
#line 1394 "modes.m"
                                          check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__DiFinalInst_132, &check_hlds__modes__V_149_149);
                                        }
#line 1394 "modes.m"
                                        {
#line 1394 "modes.m"
                                          check_hlds__modes__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modes__V_142_142, check_hlds__modes__V_149_149);
                                        }
#line 1382 "modes.m"
                                        if (check_hlds__modes__succeeded)
#line 1382 "modes.m"
                                          {
#line 1395 "modes.m"
                                            {
#line 1395 "modes.m"
                                              check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__UoInitialInst_133, &check_hlds__modes__Free_135);
                                            }
#line 1396 "modes.m"
                                            if ((check_hlds__modes__Free_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1396 "modes.m"
                                              check_hlds__modes__succeeded = MR_TRUE;
#line 1396 "modes.m"
                                            else
#line 1396 "modes.m"
                                              if (((MR_tag((MR_Word) check_hlds__modes__Free_135)) == (MR_mktag((MR_Integer) 1))))
#line 1396 "modes.m"
                                                check_hlds__modes__succeeded = MR_TRUE;
#line 1396 "modes.m"
                                              else
#line 1396 "modes.m"
                                                check_hlds__modes__succeeded = MR_FALSE;
#line 1382 "modes.m"
                                            if (check_hlds__modes__succeeded)
#line 1382 "modes.m"
                                              {
#line 1397 "modes.m"
                                                {
#line 1397 "modes.m"
                                                  check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__UoFinalInst_134, &check_hlds__modes__V_150_150);
                                                }
#line 1397 "modes.m"
                                                {
#line 1397 "modes.m"
                                                  check_hlds__modes__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modes__V_139_139, check_hlds__modes__V_150_150);
                                                }
#line 1382 "modes.m"
                                              }
#line 1382 "modes.m"
                                          }
#line 1382 "modes.m"
                                      }
#line 1382 "modes.m"
                                  }
#line 1382 "modes.m"
                              }
#line 1382 "modes.m"
                          }
#line 1344 "modes.m"
                        check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1341 "modes.m"
                      }
#line 1341 "modes.m"
                  }
#line 1341 "modes.m"
              }
#line 1348 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1346 "modes.m"
              {
#line 1346 "modes.m"
                MR_Word check_hlds__modes__MainSpec_22;
#line 1346 "modes.m"
                MR_Word check_hlds__modes__Context_156;
#line 1346 "modes.m"
                MR_Word check_hlds__modes__Msg_158;
#line 1346 "modes.m"
                MR_Word check_hlds__modes__V_170_170;

#line 1440 "modes.m"
                {
#line 1440 "modes.m"
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Context_156);
                }
#line 1442 "modes.m"
                {
#line 1442 "modes.m"
                  check_hlds__modes__Msg_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1442 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_158, 0) = ((MR_Box) (check_hlds__modes__Context_156));
#line 1442 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[39])));
#line 1442 "modes.m"
                }
#line 1443 "modes.m"
                {
#line 1443 "modes.m"
                  check_hlds__modes__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1443 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_170_170, 0) = ((MR_Box) (check_hlds__modes__Msg_158));
#line 1443 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_170_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1443 "modes.m"
                }
#line 1443 "modes.m"
                {
#line 1443 "modes.m"
                  check_hlds__modes__MainSpec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1443 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__MainSpec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1443 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__MainSpec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_4[0])));
#line 1443 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__MainSpec_22, 2) = ((MR_Box) (check_hlds__modes__V_170_170));
#line 1443 "modes.m"
                }
#line 1347 "modes.m"
                {
#line 1347 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Specs_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1347 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_31_31, 0) = ((MR_Box) (check_hlds__modes__MainSpec_22));
#line 1347 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_31_31, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_28_28));
#line 1347 "modes.m"
                }
#line 1346 "modes.m"
              }
#line 1348 "modes.m"
            else
#line 1347 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_31_31 = check_hlds__modes__STATE_VARIABLE_Specs_28_28;
#line 1351 "modes.m"
            /* direct tailcall eliminated */
#line 1351 "modes.m"
            {
#line 1351 "modes.m"
              MR_Word check_hlds__modes__HeadVar__3__tmp_copy_3 = check_hlds__modes__ProcIds_14;
#line 1351 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_4 = check_hlds__modes__STATE_VARIABLE_Specs_31_31;

#line 1351 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_0_4 = check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 1351 "modes.m"
              check_hlds__modes__HeadVar__3_3 = check_hlds__modes__HeadVar__3__tmp_copy_3;
#line 1351 "modes.m"
            }
#line 1351 "modes.m"
            continue;
#line 1318 "modes.m"
          }
#line 1317 "modes.m"
      }
#line 1317 "modes.m"
      break;
#line 1317 "modes.m"
    }
#line 1314 "modes.m"
}

#line 1303 "modes.m"
static void MR_CALL 
check_hlds__modes__pred_check_eval_methods_4_p_0(
#line 1303 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1303 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1303 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_3,
#line 1303 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_4)
#line 1303 "modes.m"
{
#line 1306 "modes.m"
  while (MR_TRUE)
#line 1306 "modes.m"
    {
#line 1306 "modes.m"
      /* tailcall optimized into a loop */
#line 1306 "modes.m"
      {
#line 1306 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 1306 "modes.m"
        if ((check_hlds__modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1306 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Specs_4 = check_hlds__modes__STATE_VARIABLE_Specs_0_3;
#line 1306 "modes.m"
        else
#line 1307 "modes.m"
          {
#line 1307 "modes.m"
            MR_Word check_hlds__modes__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1307 "modes.m"
            MR_Word check_hlds__modes__PredIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1307 "modes.m"
            MR_Word check_hlds__modes__Preds_13;
#line 1307 "modes.m"
            MR_Word check_hlds__modes__PredInfo_14;
#line 1307 "modes.m"
            MR_Word check_hlds__modes__ProcIds_15;
#line 1307 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_18_18;
#line 1309 "modes.m"
            MR_Box check_hlds__modes__conv0_PredInfo_14;

#line 1308 "modes.m"
            {
#line 1308 "modes.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__ModuleInfo_1, &check_hlds__modes__Preds_13);
            }
#line 1309 "modes.m"
            {
#line 1309 "modes.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__modes__Preds_13, ((MR_Box) (check_hlds__modes__PredId_10)), &check_hlds__modes__conv0_PredInfo_14);
            }
#line 1309 "modes.m"
            check_hlds__modes__PredInfo_14 = ((MR_Word) check_hlds__modes__conv0_PredInfo_14);
#line 1310 "modes.m"
            {
#line 1310 "modes.m"
              check_hlds__modes__ProcIds_15 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__modes__PredInfo_14);
            }
#line 1311 "modes.m"
            {
#line 1311 "modes.m"
              check_hlds__modes__proc_check_eval_methods_5_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__PredId_10, check_hlds__modes__ProcIds_15, check_hlds__modes__STATE_VARIABLE_Specs_0_3, &check_hlds__modes__STATE_VARIABLE_Specs_18_18);
            }
#line 1312 "modes.m"
            /* direct tailcall eliminated */
#line 1312 "modes.m"
            {
#line 1312 "modes.m"
              MR_Word check_hlds__modes__HeadVar__2__tmp_copy_2 = check_hlds__modes__PredIds_11;
#line 1312 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_3 = check_hlds__modes__STATE_VARIABLE_Specs_18_18;

#line 1312 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_0_3 = check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_3;
#line 1312 "modes.m"
              check_hlds__modes__HeadVar__2_2 = check_hlds__modes__HeadVar__2__tmp_copy_2;
#line 1312 "modes.m"
            }
#line 1312 "modes.m"
            continue;
#line 1307 "modes.m"
          }
#line 1306 "modes.m"
      }
#line 1306 "modes.m"
      break;
#line 1306 "modes.m"
    }
#line 1303 "modes.m"
}

#line 1216 "modes.m"
static void MR_CALL 
check_hlds__modes__check_final_insts_12_p_0(
#line 1216 "modes.m"
  MR_Word check_hlds__modes__Vars_13,
#line 1216 "modes.m"
  MR_Word check_hlds__modes__Insts_14,
#line 1216 "modes.m"
  MR_Word check_hlds__modes__VarInsts_15,
#line 1216 "modes.m"
  MR_Word check_hlds__modes__InferModes_16,
#line 1216 "modes.m"
  MR_Integer check_hlds__modes__ArgNum_17,
#line 1216 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_18,
#line 1216 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Goal_0_33,
#line 1216 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Goal_34,
#line 1216 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_35,
#line 1216 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_36,
#line 1216 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_37,
#line 1216 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_38)
#line 1216 "modes.m"
{
#line 1229 "modes.m"
  while (MR_TRUE)
#line 1229 "modes.m"
    {
#line 1229 "modes.m"
      /* tailcall optimized into a loop */
#line 1229 "modes.m"
      {
#line 1229 "modes.m"
        MR_bool check_hlds__modes__succeeded = (check_hlds__modes__Vars_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 1224 "modes.m"
        if (check_hlds__modes__succeeded)
#line 1224 "modes.m"
          {
#line 1225 "modes.m"
            check_hlds__modes__succeeded = (check_hlds__modes__Insts_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1224 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1226 "modes.m"
              check_hlds__modes__succeeded = (check_hlds__modes__VarInsts_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1224 "modes.m"
          }
#line 1229 "modes.m"
        if (check_hlds__modes__succeeded)
#line 1228 "modes.m"
          {
#line 1228 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_ModeInfo_38 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_37;
#line 1228 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Changed_36 = check_hlds__modes__STATE_VARIABLE_Changed_0_35;
#line 1228 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Goal_34 = check_hlds__modes__STATE_VARIABLE_Goal_0_33;
#line 1228 "modes.m"
          }
#line 1229 "modes.m"
        else
#line 1286 "modes.m"
          {
#line 1286 "modes.m"
            MR_Word check_hlds__modes__Var_22;
#line 1286 "modes.m"
            MR_Word check_hlds__modes__VarsTail_23;
#line 1286 "modes.m"
            MR_Word check_hlds__modes__Inst_24;
#line 1286 "modes.m"
            MR_Word check_hlds__modes__InstsTail_25;
#line 1286 "modes.m"
            MR_Word check_hlds__modes__VarInst_26;
#line 1286 "modes.m"
            MR_Word check_hlds__modes__VarInstsTail_27;

#line 1230 "modes.m"
            check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Vars_13)) == (MR_mktag((MR_Integer) 1)));
#line 1230 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1230 "modes.m"
              {
#line 1230 "modes.m"
                check_hlds__modes__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Vars_13, (MR_Integer) 0)));
#line 1230 "modes.m"
                check_hlds__modes__VarsTail_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Vars_13, (MR_Integer) 1)));
#line 1231 "modes.m"
                check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Insts_14)) == (MR_mktag((MR_Integer) 1)));
#line 1231 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1231 "modes.m"
                  {
#line 1231 "modes.m"
                    check_hlds__modes__Inst_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Insts_14, (MR_Integer) 0)));
#line 1231 "modes.m"
                    check_hlds__modes__InstsTail_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Insts_14, (MR_Integer) 1)));
#line 1232 "modes.m"
                    check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__VarInsts_15)) == (MR_mktag((MR_Integer) 1)));
#line 1232 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1232 "modes.m"
                      {
#line 1232 "modes.m"
                        check_hlds__modes__VarInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__VarInsts_15, (MR_Integer) 0)));
#line 1232 "modes.m"
                        check_hlds__modes__VarInstsTail_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__VarInsts_15, (MR_Integer) 1)));
#line 1232 "modes.m"
                      }
#line 1231 "modes.m"
                  }
#line 1230 "modes.m"
              }
#line 1286 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1234 "modes.m"
              {
#line 1234 "modes.m"
                MR_Word check_hlds__modes__VarTypes_28;
#line 1234 "modes.m"
                MR_Word check_hlds__modes__Type_29;
#line 1234 "modes.m"
                MR_Word check_hlds__modes__STATE_VARIABLE_Changed_39_39;
#line 1234 "modes.m"
                MR_Word check_hlds__modes__STATE_VARIABLE_Goal_40_40;
#line 1234 "modes.m"
                MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_41_41;
#line 1234 "modes.m"
                MR_Integer check_hlds__modes__V_43_43;

#line 1234 "modes.m"
                {
#line 1234 "modes.m"
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__modes__VarTypes_28);
                }
#line 1235 "modes.m"
                {
#line 1235 "modes.m"
                  parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modes__VarTypes_28, check_hlds__modes__Var_22, &check_hlds__modes__Type_29);
                }
#line 1236 "modes.m"
                {
#line 1236 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__inst_match__inst_matches_final_typed_4_p_0(check_hlds__modes__VarInst_26, check_hlds__modes__Inst_24, check_hlds__modes__Type_29, check_hlds__modes__ModuleInfo_18);
                }
#line 1238 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1237 "modes.m"
                  {
#line 1237 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_ModeInfo_41_41 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_37;
#line 1237 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_Changed_39_39 = check_hlds__modes__STATE_VARIABLE_Changed_0_35;
#line 1237 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_Goal_40_40 = check_hlds__modes__STATE_VARIABLE_Goal_0_33;
#line 1237 "modes.m"
                  }
#line 1238 "modes.m"
                else
#line 1239 "modes.m"
                  {
#line 1239 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_Changed_39_39 = (MR_Integer) 1;
#line 1252 "modes.m"
                    {
#line 1252 "modes.m"
                      check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modes__ModuleInfo_18, check_hlds__modes__VarInst_26);
                    }
#line 1252 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1252 "modes.m"
                      {
#line 1253 "modes.m"
                        {
#line 1253 "modes.m"
                          check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_any_2_p_0(check_hlds__modes__ModuleInfo_18, check_hlds__modes__Inst_24);
                        }
#line 1252 "modes.m"
                        if (check_hlds__modes__succeeded)
#line 1252 "modes.m"
                          {
#line 1254 "modes.m"
                            {
#line 1254 "modes.m"
                              check_hlds__modes__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(check_hlds__modes__ModuleInfo_18, check_hlds__modes__Type_29);
                            }
#line 1252 "modes.m"
                            if (check_hlds__modes__succeeded)
#line 1255 "modes.m"
                              {
#line 1255 "modes.m"
                                check_hlds__modes__succeeded = check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_37);
                              }
#line 1252 "modes.m"
                          }
#line 1252 "modes.m"
                      }
#line 1259 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1257 "modes.m"
                      {
#line 1257 "modes.m"
                        check_hlds__modecheck_util__prepend_initialisation_call_7_p_0(check_hlds__modes__Var_22, check_hlds__modes__Type_29, check_hlds__modes__VarInst_26, check_hlds__modes__STATE_VARIABLE_Goal_0_33, &check_hlds__modes__STATE_VARIABLE_Goal_40_40, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__modes__STATE_VARIABLE_ModeInfo_41_41);
                      }
#line 1259 "modes.m"
                    else
#line 1265 "modes.m"
                      {
#line 1265 "modes.m"
                        if ((check_hlds__modes__InferModes_16 == (MR_Integer) 0))
#line 1266 "modes.m"
                          {
#line 1266 "modes.m"
                            MR_Word check_hlds__modes__Reason_30;
#line 1266 "modes.m"
                            MR_Word check_hlds__modes__WaitingVars_31;
#line 1266 "modes.m"
                            MR_Word check_hlds__modes__ModeError_32;

#line 1269 "modes.m"
                            {
#line 1269 "modes.m"
                              check_hlds__modes__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modes__VarInst_26, check_hlds__modes__Inst_24, check_hlds__modes__Type_29, check_hlds__modes__ModuleInfo_18);
                            }
#line 1271 "modes.m"
                            if (check_hlds__modes__succeeded)
#line 1270 "modes.m"
                              check_hlds__modes__Reason_30 = (MR_Integer) 0;
#line 1271 "modes.m"
                            else
#line 1273 "modes.m"
                              {
#line 1271 "modes.m"
                                {
#line 1271 "modes.m"
                                  check_hlds__modes__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modes__Inst_24, check_hlds__modes__VarInst_26, check_hlds__modes__Type_29, check_hlds__modes__ModuleInfo_18);
                                }
#line 1273 "modes.m"
                                if (check_hlds__modes__succeeded)
#line 1272 "modes.m"
                                  check_hlds__modes__Reason_30 = (MR_Integer) 1;
#line 1273 "modes.m"
                                else
#line 1275 "modes.m"
                                  check_hlds__modes__Reason_30 = (MR_Integer) 2;
#line 1273 "modes.m"
                              }
#line 1277 "modes.m"
                            {
#line 1277 "modes.m"
                              parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modes__WaitingVars_31);
                            }
#line 1278 "modes.m"
                            {
#line 1278 "modes.m"
                              check_hlds__modes__ModeError_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "modes.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 1278 "modes.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_32, 1) = ((MR_Box) (check_hlds__modes__ArgNum_17));
#line 1278 "modes.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_32, 2) = ((MR_Box) (check_hlds__modes__Var_22));
#line 1278 "modes.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_32, 3) = ((MR_Box) (check_hlds__modes__VarInst_26));
#line 1278 "modes.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_32, 4) = ((MR_Box) (check_hlds__modes__Inst_24));
#line 1278 "modes.m"
                              MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_32, 5) = ((MR_Box) (check_hlds__modes__Reason_30));
#line 1278 "modes.m"
                            }
#line 1280 "modes.m"
                            {
#line 1280 "modes.m"
                              check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modes__WaitingVars_31, check_hlds__modes__ModeError_32, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__modes__STATE_VARIABLE_ModeInfo_41_41);
                            }
#line 1266 "modes.m"
                          }
#line 1265 "modes.m"
                        else
#line 1264 "modes.m"
                          check_hlds__modes__STATE_VARIABLE_ModeInfo_41_41 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_37;
#line 1280 "modes.m"
                        check_hlds__modes__STATE_VARIABLE_Goal_40_40 = check_hlds__modes__STATE_VARIABLE_Goal_0_33;
#line 1265 "modes.m"
                      }
#line 1239 "modes.m"
                  }
#line 1284 "modes.m"
                check_hlds__modes__V_43_43 = (check_hlds__modes__ArgNum_17 + (MR_Integer) 1);
#line 1284 "modes.m"
                /* direct tailcall eliminated */
#line 1284 "modes.m"
                {
#line 1284 "modes.m"
                  MR_Word check_hlds__modes__Vars__tmp_copy_13 = check_hlds__modes__VarsTail_23;
#line 1284 "modes.m"
                  MR_Word check_hlds__modes__Insts__tmp_copy_14 = check_hlds__modes__InstsTail_25;
#line 1284 "modes.m"
                  MR_Word check_hlds__modes__VarInsts__tmp_copy_15 = check_hlds__modes__VarInstsTail_27;
#line 1284 "modes.m"
                  MR_Integer check_hlds__modes__ArgNum__tmp_copy_17 = check_hlds__modes__V_43_43;
#line 1284 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_Goal_0__tmp_copy_33 = check_hlds__modes__STATE_VARIABLE_Goal_40_40;
#line 1284 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_35 = check_hlds__modes__STATE_VARIABLE_Changed_39_39;
#line 1284 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0__tmp_copy_37 = check_hlds__modes__STATE_VARIABLE_ModeInfo_41_41;

#line 1284 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_ModeInfo_0_37 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0__tmp_copy_37;
#line 1284 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Changed_0_35 = check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_35;
#line 1284 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Goal_0_33 = check_hlds__modes__STATE_VARIABLE_Goal_0__tmp_copy_33;
#line 1284 "modes.m"
                  check_hlds__modes__ArgNum_17 = check_hlds__modes__ArgNum__tmp_copy_17;
#line 1284 "modes.m"
                  check_hlds__modes__VarInsts_15 = check_hlds__modes__VarInsts__tmp_copy_15;
#line 1284 "modes.m"
                  check_hlds__modes__Insts_14 = check_hlds__modes__Insts__tmp_copy_14;
#line 1284 "modes.m"
                  check_hlds__modes__Vars_13 = check_hlds__modes__Vars__tmp_copy_13;
#line 1284 "modes.m"
                }
#line 1284 "modes.m"
                continue;
#line 1234 "modes.m"
              }
#line 1286 "modes.m"
            else
#line 1287 "modes.m"
              {
#line 1287 "modes.m"
                {
#line 1287 "modes.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.check_final_insts\'/12", (MR_String) "length mismatch");
#line 1287 "modes.m"
                  return;
                }
#line 1287 "modes.m"
              }
#line 1286 "modes.m"
          }
#line 1229 "modes.m"
      }
#line 1229 "modes.m"
      break;
#line 1229 "modes.m"
    }
#line 1216 "modes.m"
}

#line 1198 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_clobber_insts_3_p_0(
#line 1198 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1198 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1198 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__3_3)
#line 1198 "modes.m"
{
#line 1201 "modes.m"
  {
#line 1201 "modes.m"
    MR_bool check_hlds__modes__succeeded;

#line 1201 "modes.m"
    if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1201 "modes.m"
      if ((check_hlds__modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1205 "modes.m"
        *check_hlds__modes__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1201 "modes.m"
      else
#line 1201 "modes.m"
        {
#line 1202 "modes.m"
          {
#line 1202 "modes.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.maybe_clobber_insts\'/3", (MR_String) "length mismatch");
#line 1202 "modes.m"
            return;
          }
#line 1201 "modes.m"
        }
#line 1201 "modes.m"
    else
#line 1201 "modes.m"
      {
#line 1201 "modes.m"
        MR_Word check_hlds__modes__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1201 "modes.m"
        MR_Word check_hlds__modes__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));

#line 1201 "modes.m"
        if ((check_hlds__modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1203 "modes.m"
          {
#line 1204 "modes.m"
            {
#line 1204 "modes.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.maybe_clobber_insts\'/3", (MR_String) "length mismatch");
#line 1204 "modes.m"
              return;
            }
#line 1203 "modes.m"
          }
#line 1201 "modes.m"
        else
#line 1206 "modes.m"
          {
#line 1206 "modes.m"
            MR_Word check_hlds__modes__IsLive_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1206 "modes.m"
            MR_Word check_hlds__modes__IsLives_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1206 "modes.m"
            MR_Word check_hlds__modes__Inst_20;
#line 1206 "modes.m"
            MR_Word check_hlds__modes__Insts_21;

#line 1210 "modes.m"
            if ((check_hlds__modes__IsLive_18 == (MR_Integer) 1))
#line 1208 "modes.m"
              {
#line 1209 "modes.m"
                check_hlds__modes__Inst_20 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[2]);
#line 1208 "modes.m"
              }
#line 1210 "modes.m"
            else
#line 1211 "modes.m"
              check_hlds__modes__Inst_20 = check_hlds__modes__V_25_25;
#line 1214 "modes.m"
            {
#line 1214 "modes.m"
              check_hlds__modes__maybe_clobber_insts_3_p_0(check_hlds__modes__V_24_24, check_hlds__modes__IsLives_19, &check_hlds__modes__Insts_21);
            }
#line 1206 "modes.m"
            {
#line 1206 "modes.m"
              MR_Word base;
#line 1206 "modes.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "modes.m"
              *check_hlds__modes__HeadVar__3_3 = base;
#line 1206 "modes.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modes__Inst_20));
#line 1206 "modes.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modes__Insts_21));
#line 1206 "modes.m"
            }
#line 1206 "modes.m"
          }
#line 1201 "modes.m"
      }
#line 1201 "modes.m"
  }
#line 1198 "modes.m"
}

#line 1145 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_final_insts_8_p_0(
#line 1145 "modes.m"
  MR_Word check_hlds__modes__HeadVars_9,
#line 1145 "modes.m"
  MR_Word check_hlds__modes__InferModes_10,
#line 1145 "modes.m"
  MR_Word check_hlds__modes__FinalInsts0_11,
#line 1145 "modes.m"
  MR_Word * check_hlds__modes__FinalInsts_12,
#line 1145 "modes.m"
  MR_Word check_hlds__modes__Body0_13,
#line 1145 "modes.m"
  MR_Word * check_hlds__modes__Body_14,
#line 1145 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_34,
#line 1145 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_35)
#line 1145 "modes.m"
{
#line 1150 "modes.m"
  {
#line 1150 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1150 "modes.m"
    MR_Word check_hlds__modes__ModuleInfo_16;
#line 1150 "modes.m"
    MR_Word check_hlds__modes__Errors_17;
#line 1150 "modes.m"
    MR_Word check_hlds__modes__Changed0_20;
#line 1150 "modes.m"
    MR_Word check_hlds__modes__InstMap_21;
#line 1150 "modes.m"
    MR_Word check_hlds__modes__VarTypes_22;
#line 1150 "modes.m"
    MR_Word check_hlds__modes__VarFinalInsts1_23;
#line 1150 "modes.m"
    MR_Word check_hlds__modes__ArgTypes_24;

#line 1151 "modes.m"
    {
#line 1151 "modes.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__modes__ModuleInfo_16);
    }
#line 1152 "modes.m"
    {
#line 1152 "modes.m"
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__modes__Errors_17);
    }
#line 1166 "modes.m"
    if ((check_hlds__modes__Errors_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1167 "modes.m"
      {
#line 1168 "modes.m"
        check_hlds__modes__Changed0_20 = (MR_Integer) 0;
#line 1169 "modes.m"
        {
#line 1169 "modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__modes__InstMap_21);
        }
#line 1167 "modes.m"
      }
#line 1166 "modes.m"
    else
#line 1160 "modes.m"
      {
#line 1164 "modes.m"
        check_hlds__modes__Changed0_20 = (MR_Integer) 1;
#line 1165 "modes.m"
        {
#line 1165 "modes.m"
          hlds__instmap__init_unreachable_1_p_0(&check_hlds__modes__InstMap_21);
        }
#line 1160 "modes.m"
      }
#line 1171 "modes.m"
    {
#line 1171 "modes.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__modes__VarTypes_22);
    }
#line 1172 "modes.m"
    {
#line 1172 "modes.m"
      hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modes__InstMap_21, check_hlds__modes__HeadVars_9, &check_hlds__modes__VarFinalInsts1_23);
    }
#line 1173 "modes.m"
    {
#line 1173 "modes.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__modes__VarTypes_22, check_hlds__modes__HeadVars_9, &check_hlds__modes__ArgTypes_24);
    }
#line 1191 "modes.m"
    if ((check_hlds__modes__InferModes_10 == (MR_Integer) 0))
#line 1192 "modes.m"
      {
#line 1193 "modes.m"
        MR_Word check_hlds__modes___Changed1_33;

#line 1193 "modes.m"
        {
#line 1193 "modes.m"
          check_hlds__modes__check_final_insts_12_p_0(check_hlds__modes__HeadVars_9, check_hlds__modes__FinalInsts0_11, check_hlds__modes__VarFinalInsts1_23, check_hlds__modes__InferModes_10, (MR_Integer) 1, check_hlds__modes__ModuleInfo_16, check_hlds__modes__Body0_13, check_hlds__modes__Body_14, (MR_Integer) 0, &check_hlds__modes___Changed1_33, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_34, check_hlds__modes__STATE_VARIABLE_ModeInfo_35);
        }
#line 1195 "modes.m"
        *check_hlds__modes__FinalInsts_12 = check_hlds__modes__FinalInsts0_11;
#line 1192 "modes.m"
      }
#line 1191 "modes.m"
    else
#line 1175 "modes.m"
      {
#line 1175 "modes.m"
        MR_Word check_hlds__modes__VarFinalInsts2_25;
#line 1175 "modes.m"
        MR_Word check_hlds__modes__PredId_26;
#line 1175 "modes.m"
        MR_Integer check_hlds__modes__ProcId_27;
#line 1175 "modes.m"
        MR_Word check_hlds__modes__ProcInfo_28;
#line 1175 "modes.m"
        MR_Word check_hlds__modes__ArgLives_29;
#line 1175 "modes.m"
        MR_Word check_hlds__modes__Changed1_30;
#line 1175 "modes.m"
        MR_Word check_hlds__modes__Changed2_31;
#line 1175 "modes.m"
        MR_Word check_hlds__modes__Changed_32;
#line 1175 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_41_41;
#line 1175 "modes.m"
        MR_Word check_hlds__modes__V_42_42;
#line 1175 "modes.m"
        MR_Word check_hlds__modes__V_43_43;
#line 1175 "modes.m"
        MR_Word check_hlds__modes__V_44_44;

#line 1176 "modes.m"
        {
#line 1176 "modes.m"
          check_hlds__mode_util__normalise_insts_4_p_0(check_hlds__modes__ModuleInfo_16, check_hlds__modes__ArgTypes_24, check_hlds__modes__VarFinalInsts1_23, &check_hlds__modes__VarFinalInsts2_25);
        }
#line 1181 "modes.m"
        {
#line 1181 "modes.m"
          check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__modes__PredId_26);
        }
#line 1182 "modes.m"
        {
#line 1182 "modes.m"
          check_hlds__mode_info__mode_info_get_proc_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__modes__ProcId_27);
        }
#line 1183 "modes.m"
        {
#line 1183 "modes.m"
          hlds__hlds_module__module_info_proc_info_4_p_0(check_hlds__modes__ModuleInfo_16, check_hlds__modes__PredId_26, check_hlds__modes__ProcId_27, &check_hlds__modes__ProcInfo_28);
        }
#line 1184 "modes.m"
        {
#line 1184 "modes.m"
          hlds__hlds_pred__proc_info_arglives_3_p_0(check_hlds__modes__ProcInfo_28, check_hlds__modes__ModuleInfo_16, &check_hlds__modes__ArgLives_29);
        }
#line 1185 "modes.m"
        {
#line 1185 "modes.m"
          check_hlds__modes__maybe_clobber_insts_3_p_0(check_hlds__modes__VarFinalInsts2_25, check_hlds__modes__ArgLives_29, check_hlds__modes__FinalInsts_12);
        }
#line 1186 "modes.m"
        {
#line 1186 "modes.m"
          check_hlds__modes__check_final_insts_12_p_0(check_hlds__modes__HeadVars_9, check_hlds__modes__FinalInsts0_11, *check_hlds__modes__FinalInsts_12, check_hlds__modes__InferModes_10, (MR_Integer) 1, check_hlds__modes__ModuleInfo_16, check_hlds__modes__Body0_13, check_hlds__modes__Body_14, (MR_Integer) 0, &check_hlds__modes__Changed1_30, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__modes__STATE_VARIABLE_ModeInfo_41_41);
        }
#line 1188 "modes.m"
        {
#line 1188 "modes.m"
          check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__modes__Changed2_31);
        }
#line 1189 "modes.m"
        {
#line 1189 "modes.m"
          check_hlds__modes__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__modes__V_44_44, 0) = ((MR_Box) (check_hlds__modes__Changed2_31));
#line 1189 "modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__modes__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1189 "modes.m"
        }
#line 1189 "modes.m"
        {
#line 1189 "modes.m"
          check_hlds__modes__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__modes__V_43_43, 0) = ((MR_Box) (check_hlds__modes__Changed1_30));
#line 1189 "modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__modes__V_43_43, 1) = ((MR_Box) (check_hlds__modes__V_44_44));
#line 1189 "modes.m"
        }
#line 1189 "modes.m"
        {
#line 1189 "modes.m"
          check_hlds__modes__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__modes__V_42_42, 0) = ((MR_Box) (check_hlds__modes__Changed0_20));
#line 1189 "modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__modes__V_42_42, 1) = ((MR_Box) (check_hlds__modes__V_43_43));
#line 1189 "modes.m"
        }
#line 1189 "modes.m"
        {
#line 1189 "modes.m"
          mercury__bool__or_list_2_p_0(check_hlds__modes__V_42_42, &check_hlds__modes__Changed_32);
        }
#line 1190 "modes.m"
        {
#line 1190 "modes.m"
          check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(check_hlds__modes__Changed_32, check_hlds__modes__STATE_VARIABLE_ModeInfo_41_41, check_hlds__modes__STATE_VARIABLE_ModeInfo_35);
#line 1190 "modes.m"
          return;
        }
#line 1175 "modes.m"
      }
#line 1150 "modes.m"
  }
#line 1145 "modes.m"
}

#line 1100 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_switch_9_p_0(
#line 1100 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1100 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1100 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1100 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1100 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1100 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1100 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1100 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1100 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28)
#line 1100 "modes.m"
{
#line 1105 "modes.m"
  {
#line 1105 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1105 "modes.m"
    MR_Word check_hlds__modes__MainConsId_18;
#line 1105 "modes.m"
    MR_Word check_hlds__modes__OtherConsIds_19;
#line 1105 "modes.m"
    MR_Word check_hlds__modes__Goal0_20;
#line 1105 "modes.m"
    MR_Word check_hlds__modes__InstMap1_21;
#line 1105 "modes.m"
    MR_Word check_hlds__modes__Goal1_22;
#line 1105 "modes.m"
    MR_Word check_hlds__modes__InstMap_23;
#line 1105 "modes.m"
    MR_Word check_hlds__modes__Goal2_24;
#line 1105 "modes.m"
    MR_Word check_hlds__modes__Goal_26;
#line 1105 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30;
#line 1105 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31;
#line 1105 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1105 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33;
#line 1105 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35;
#line 1128 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_25;

#line 1106 "modes.m"
    {
#line 1106 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27, &check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30);
    }
#line 1107 "modes.m"
    check_hlds__modes__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 0)));
#line 1107 "modes.m"
    check_hlds__modes__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 1)));
#line 1107 "modes.m"
    check_hlds__modes__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 2)));
#line 1108 "modes.m"
    {
#line 1108 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31);
    }
#line 1110 "modes.m"
    {
#line 1110 "modes.m"
      check_hlds__modecheck_util__modecheck_functors_test_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__MainConsId_18, check_hlds__modes__OtherConsIds_19, check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32);
    }
#line 1112 "modes.m"
    {
#line 1112 "modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__InstMap1_21);
    }
#line 1113 "modes.m"
    {
#line 1113 "modes.m"
      check_hlds__modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modes__InstMap1_21);
    }
#line 1115 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1114 "modes.m"
      {
#line 1114 "modes.m"
        check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modes__Goal0_20, &check_hlds__modes__Goal1_22, check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33);
      }
#line 1115 "modes.m"
    else
#line 1119 "modes.m"
      {
#line 1119 "modes.m"
        {
#line 1119 "modes.m"
          check_hlds__modes__Goal1_22 = hlds__hlds_goal__true_goal_0_f_0();
        }
#line 1119 "modes.m"
        check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33 = check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1119 "modes.m"
      }
#line 1123 "modes.m"
    {
#line 1123 "modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__InstMap_23);
    }
#line 1124 "modes.m"
    {
#line 1124 "modes.m"
      check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__InstMap0_12, check_hlds__modes__InstMap_23, check_hlds__modes__Goal1_22, &check_hlds__modes__Goal2_24);
    }
#line 1125 "modes.m"
    {
#line 1125 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35);
    }
#line 1128 "modes.m"
    {
#line 1128 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_11, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_13, &check_hlds__modes___ArgFinalInsts_25, check_hlds__modes__Goal2_24, &check_hlds__modes__Goal_26, check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35, check_hlds__modes__STATE_VARIABLE_ModeInfo_28);
    }
#line 1130 "modes.m"
    {
#line 1130 "modes.m"
      MR_Word base;
#line 1130 "modes.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1130 "modes.m"
      *check_hlds__modes__Case_16 = base;
#line 1130 "modes.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__MainConsId_18));
#line 1130 "modes.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__OtherConsIds_19));
#line 1130 "modes.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modes__Goal_26));
#line 1130 "modes.m"
    }
#line 1105 "modes.m"
  }
#line 1100 "modes.m"
}

#line 1080 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_disj_11_p_0(
#line 1080 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_12,
#line 1080 "modes.m"
  MR_Word check_hlds__modes__HeadVars_13,
#line 1080 "modes.m"
  MR_Word check_hlds__modes__InstMap0_14,
#line 1080 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_15,
#line 1080 "modes.m"
  MR_Word check_hlds__modes__DisjDetism_16,
#line 1080 "modes.m"
  MR_Word check_hlds__modes__DisjNonLocals_17,
#line 1080 "modes.m"
  MR_Word check_hlds__modes__NondetLiveVars0_18,
#line 1080 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_19,
#line 1080 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_20,
#line 1080 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_24,
#line 1080 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_25)
#line 1080 "modes.m"
{
#line 1087 "modes.m"
  {
#line 1087 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1087 "modes.m"
    MR_Word check_hlds__modes__Disjunct1_22;
#line 1087 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_27_27;
#line 1087 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_28_28;
#line 1087 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_29_29;
#line 1087 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30;
#line 1087 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31;
#line 1087 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33;
#line 1097 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_23;

#line 1088 "modes.m"
    {
#line 1088 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_24, &check_hlds__modes__STATE_VARIABLE_ModeInfo_27_27);
    }
#line 1089 "modes.m"
    {
#line 1089 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_14, check_hlds__modes__STATE_VARIABLE_ModeInfo_27_27, &check_hlds__modes__STATE_VARIABLE_ModeInfo_28_28);
    }
#line 1090 "modes.m"
    {
#line 1090 "modes.m"
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__modes__NondetLiveVars0_18, check_hlds__modes__STATE_VARIABLE_ModeInfo_28_28, &check_hlds__modes__STATE_VARIABLE_ModeInfo_29_29);
    }
#line 1091 "modes.m"
    {
#line 1091 "modes.m"
      check_hlds__unique_modes__prepare_for_disjunct_5_p_0(check_hlds__modes__Disjunct0_19, check_hlds__modes__DisjDetism_16, check_hlds__modes__DisjNonLocals_17, check_hlds__modes__STATE_VARIABLE_ModeInfo_29_29, &check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30);
    }
#line 1093 "modes.m"
    {
#line 1093 "modes.m"
      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modes__Disjunct0_19, &check_hlds__modes__Disjunct1_22, check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31);
    }
#line 1094 "modes.m"
    {
#line 1094 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33);
    }
#line 1097 "modes.m"
    {
#line 1097 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_13, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_15, &check_hlds__modes___ArgFinalInsts_23, check_hlds__modes__Disjunct1_22, check_hlds__modes__Disjunct_20, check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, check_hlds__modes__STATE_VARIABLE_ModeInfo_25);
    }
#line 1087 "modes.m"
  }
#line 1080 "modes.m"
}

#line 1046 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_switch_9_p_0(
#line 1046 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1046 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1046 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1046 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1046 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1046 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1046 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1046 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1046 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28)
#line 1046 "modes.m"
{
#line 1051 "modes.m"
  {
#line 1051 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1051 "modes.m"
    MR_Word check_hlds__modes__MainConsId_18;
#line 1051 "modes.m"
    MR_Word check_hlds__modes__OtherConsIds_19;
#line 1051 "modes.m"
    MR_Word check_hlds__modes__Goal0_20;
#line 1051 "modes.m"
    MR_Word check_hlds__modes__InstMap1_21;
#line 1051 "modes.m"
    MR_Word check_hlds__modes__Goal1_22;
#line 1051 "modes.m"
    MR_Word check_hlds__modes__InstMap_23;
#line 1051 "modes.m"
    MR_Word check_hlds__modes__Goal2_24;
#line 1051 "modes.m"
    MR_Word check_hlds__modes__Goal_26;
#line 1051 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30;
#line 1051 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31;
#line 1051 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1051 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33;
#line 1051 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35;
#line 1076 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_25;

#line 1052 "modes.m"
    {
#line 1052 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27, &check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30);
    }
#line 1053 "modes.m"
    check_hlds__modes__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 0)));
#line 1053 "modes.m"
    check_hlds__modes__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 1)));
#line 1053 "modes.m"
    check_hlds__modes__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 2)));
#line 1054 "modes.m"
    {
#line 1054 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31);
    }
#line 1056 "modes.m"
    {
#line 1056 "modes.m"
      check_hlds__modecheck_util__modecheck_functors_test_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__MainConsId_18, check_hlds__modes__OtherConsIds_19, check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32);
    }
#line 1059 "modes.m"
    {
#line 1059 "modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__InstMap1_21);
    }
#line 1060 "modes.m"
    {
#line 1060 "modes.m"
      check_hlds__modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modes__InstMap1_21);
    }
#line 1063 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1061 "modes.m"
      {
#line 1061 "modes.m"
        {
#line 1061 "modes.m"
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modes__Goal0_20, &check_hlds__modes__Goal1_22, check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33);
        }
#line 1062 "modes.m"
        {
#line 1062 "modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__InstMap_23);
        }
#line 1061 "modes.m"
      }
#line 1063 "modes.m"
    else
#line 1067 "modes.m"
      {
#line 1067 "modes.m"
        {
#line 1067 "modes.m"
          check_hlds__modes__Goal1_22 = hlds__hlds_goal__true_goal_0_f_0();
        }
#line 1068 "modes.m"
        check_hlds__modes__InstMap_23 = check_hlds__modes__InstMap1_21;
#line 1068 "modes.m"
        check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33 = check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1067 "modes.m"
      }
#line 1072 "modes.m"
    {
#line 1072 "modes.m"
      check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__InstMap0_12, check_hlds__modes__InstMap_23, check_hlds__modes__Goal1_22, &check_hlds__modes__Goal2_24);
    }
#line 1073 "modes.m"
    {
#line 1073 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35);
    }
#line 1076 "modes.m"
    {
#line 1076 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_11, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_13, &check_hlds__modes___ArgFinalInsts_25, check_hlds__modes__Goal2_24, &check_hlds__modes__Goal_26, check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35, check_hlds__modes__STATE_VARIABLE_ModeInfo_28);
    }
#line 1078 "modes.m"
    {
#line 1078 "modes.m"
      MR_Word base;
#line 1078 "modes.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1078 "modes.m"
      *check_hlds__modes__Case_16 = base;
#line 1078 "modes.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__MainConsId_18));
#line 1078 "modes.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__OtherConsIds_19));
#line 1078 "modes.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modes__Goal_26));
#line 1078 "modes.m"
    }
#line 1051 "modes.m"
  }
#line 1046 "modes.m"
}

#line 1031 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_disj_8_p_0(
#line 1031 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_9,
#line 1031 "modes.m"
  MR_Word check_hlds__modes__HeadVars_10,
#line 1031 "modes.m"
  MR_Word check_hlds__modes__InstMap0_11,
#line 1031 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_12,
#line 1031 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_13,
#line 1031 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_14,
#line 1031 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
#line 1031 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19)
#line 1031 "modes.m"
{
#line 1036 "modes.m"
  {
#line 1036 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1036 "modes.m"
    MR_Word check_hlds__modes__Disjunct1_16;
#line 1036 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_21_21;
#line 1036 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_22_22;
#line 1036 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_23_23;
#line 1036 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_25_25;
#line 1043 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_17;

#line 1037 "modes.m"
    {
#line 1037 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_9, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__STATE_VARIABLE_ModeInfo_21_21);
    }
#line 1038 "modes.m"
    {
#line 1038 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_11, check_hlds__modes__STATE_VARIABLE_ModeInfo_21_21, &check_hlds__modes__STATE_VARIABLE_ModeInfo_22_22);
    }
#line 1039 "modes.m"
    {
#line 1039 "modes.m"
      check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modes__Disjunct0_13, &check_hlds__modes__Disjunct1_16, check_hlds__modes__STATE_VARIABLE_ModeInfo_22_22, &check_hlds__modes__STATE_VARIABLE_ModeInfo_23_23);
    }
#line 1040 "modes.m"
    {
#line 1040 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_9, check_hlds__modes__STATE_VARIABLE_ModeInfo_23_23, &check_hlds__modes__STATE_VARIABLE_ModeInfo_25_25);
    }
#line 1043 "modes.m"
    {
#line 1043 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_10, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_12, &check_hlds__modes___ArgFinalInsts_17, check_hlds__modes__Disjunct1_16, check_hlds__modes__Disjunct_14, check_hlds__modes__STATE_VARIABLE_ModeInfo_25_25, check_hlds__modes__STATE_VARIABLE_ModeInfo_19);
    }
#line 1036 "modes.m"
  }
#line 1031 "modes.m"
}

#line 997 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0_1(
#line 997 "modes.m"
  MR_Box check_hlds__modes__closure_arg)
#line 997 "modes.m"
{
#line 997 "modes.m"
  {
#line 997 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 997 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;

#line 997 "modes.m"
    {
#line 997 "modes.m"
      return check_hlds__modes__succeeded = check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__997__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))));
    }
#line 997 "modes.m"
    return check_hlds__modes__succeeded;
#line 997 "modes.m"
  }
#line 997 "modes.m"
}

#line 880 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0(
#line 880 "modes.m"
  MR_Word check_hlds__modes__HowToCheckGoal_8,
#line 880 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26,
#line 880 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_OldPredTable_27,
#line 880 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28,
#line 880 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_29,
#line 880 "modes.m"
  MR_Word * check_hlds__modes__Changed_11,
#line 880 "modes.m"
  MR_Word * check_hlds__modes__Specs_12)
#line 880 "modes.m"
{
#line 885 "modes.m"
  {
#line 885 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 885 "modes.m"
    MR_Word check_hlds__modes__Requests0_13;
#line 885 "modes.m"
    MR_Word check_hlds__modes__RequestQueue0_14;
#line 915 "modes.m"
    MR_Word check_hlds__modes__PredProcId_15;
#line 915 "modes.m"
    MR_Word check_hlds__modes__RequestQueue1_16;
#line 888 "modes.m"
    MR_Box check_hlds__modes__conv0_PredProcId_15;

#line 886 "modes.m"
    {
#line 886 "modes.m"
      hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28, &check_hlds__modes__Requests0_13);
    }
#line 887 "modes.m"
    {
#line 887 "modes.m"
      check_hlds__unify_proc__get_req_queue_2_p_0(check_hlds__modes__Requests0_13, &check_hlds__modes__RequestQueue0_14);
    }
#line 888 "modes.m"
    {
#line 888 "modes.m"
      check_hlds__modes__succeeded = mercury__queue__get_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, &check_hlds__modes__conv0_PredProcId_15, check_hlds__modes__RequestQueue0_14, &check_hlds__modes__RequestQueue1_16);
    }
#line 888 "modes.m"
    if (check_hlds__modes__succeeded)
#line 888 "modes.m"
      {
#line 888 "modes.m"
        check_hlds__modes__PredProcId_15 = ((MR_Word) check_hlds__modes__conv0_PredProcId_15);
#line 888 "modes.m"
        check_hlds__modes__succeeded = MR_TRUE;
#line 888 "modes.m"
      }
#line 915 "modes.m"
    if (check_hlds__modes__succeeded)
#line 889 "modes.m"
      {
#line 889 "modes.m"
        MR_Word check_hlds__modes__Requests1_17;
#line 889 "modes.m"
        MR_Word check_hlds__modes__PredId_18;
#line 889 "modes.m"
        MR_Word check_hlds__modes__ValidPredIds_20;
#line 889 "modes.m"
        MR_Word check_hlds__modes__HeadChanged_22;
#line 889 "modes.m"
        MR_Word check_hlds__modes__HeadSpecs_23;
#line 889 "modes.m"
        MR_Word check_hlds__modes__TailChanged_24;
#line 889 "modes.m"
        MR_Word check_hlds__modes__TailSpecs_25;
#line 889 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30;
#line 889 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31;
#line 889 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_OldPredTable_34_34;
#line 889 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35;
#line 898 "modes.m"
        MR_Integer check_hlds__modes___ProcId_19;

#line 889 "modes.m"
        {
#line 889 "modes.m"
          check_hlds__unify_proc__set_req_queue_3_p_0(check_hlds__modes__RequestQueue1_16, check_hlds__modes__Requests0_13, &check_hlds__modes__Requests1_17);
        }
#line 890 "modes.m"
        {
#line 890 "modes.m"
          hlds__hlds_module__module_info_set_proc_requests_3_p_0(check_hlds__modes__Requests1_17, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30);
        }
#line 898 "modes.m"
        check_hlds__modes__PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 0)));
#line 898 "modes.m"
        check_hlds__modes___ProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 1)));
#line 899 "modes.m"
        {
#line 899 "modes.m"
          hlds__hlds_module__module_info_get_valid_predids_3_p_0(&check_hlds__modes__ValidPredIds_20, check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31);
        }
#line 900 "modes.m"
        {
#line 900 "modes.m"
          check_hlds__modes__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (check_hlds__modes__PredId_18)), check_hlds__modes__ValidPredIds_20);
        }
#line 907 "modes.m"
        if (check_hlds__modes__succeeded)
#line 904 "modes.m"
          {
#line 904 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_61_111;
#line 904 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_62_112;
#line 904 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_63_113;
#line 904 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_64_114;
#line 904 "modes.m"
            MR_Word check_hlds__modes__PredId_70;
#line 904 "modes.m"
            MR_Integer check_hlds__modes__ProcId_71;
#line 904 "modes.m"
            MR_Word check_hlds__modes__Preds0_72;
#line 904 "modes.m"
            MR_Word check_hlds__modes__PredInfo0_73;
#line 904 "modes.m"
            MR_Word check_hlds__modes__Procs0_74;
#line 904 "modes.m"
            MR_Word check_hlds__modes__ProcInfo0_75;
#line 904 "modes.m"
            MR_Word check_hlds__modes__ProcInfo1_76;
#line 904 "modes.m"
            MR_Word check_hlds__modes__Procs1_77;
#line 904 "modes.m"
            MR_Word check_hlds__modes__PredInfo1_78;
#line 904 "modes.m"
            MR_Word check_hlds__modes__Preds1_79;
#line 904 "modes.m"
            MR_Word check_hlds__modes__ModeSpecs_80;
#line 904 "modes.m"
            MR_Word check_hlds__modes__Globals_81;
#line 904 "modes.m"
            MR_Word check_hlds__modes__ModeErrors_82;
#line 904 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_46_96;
#line 904 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97;
#line 904 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Changed_48_98;
#line 901 "modes.m"
            MR_Word check_hlds__modes__Globals_47;
#line 901 "modes.m"
            MR_Word check_hlds__modes__VeryVerbose_48;
#line 957 "modes.m"
            MR_Box check_hlds__modes__conv1_PredInfo0_73;
#line 959 "modes.m"
            MR_Box check_hlds__modes__conv2_ProcInfo0_75;

#line 924 "modes.m"
            {
#line 924 "modes.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31, &check_hlds__modes__Globals_47);
            }
#line 925 "modes.m"
            {
#line 925 "modes.m"
              libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_47, (MR_Integer) 45, &check_hlds__modes__VeryVerbose_48);
            }
#line 943 "modes.m"
            if ((check_hlds__modes__VeryVerbose_48 == (MR_Integer) 0))
#line 944 "modes.m"
              {
#line 944 "modes.m"
              }
#line 943 "modes.m"
            else
#line 927 "modes.m"
              {
#line 931 "modes.m"
                if ((check_hlds__modes__HowToCheckGoal_8 == (MR_Integer) 0))
#line 929 "modes.m"
                  {
#line 930 "modes.m"
                    {
#line 930 "modes.m"
                      mercury__io__write_string_3_p_0((MR_String) "% Mode-analyzing ");
                    }
#line 929 "modes.m"
                  }
#line 931 "modes.m"
                else
#line 932 "modes.m"
                  {
#line 933 "modes.m"
                    {
#line 933 "modes.m"
                      mercury__io__write_string_3_p_0((MR_String) "% Analyzing modes, determinism, and unique-modes for\n% ");
                    }
#line 932 "modes.m"
                  }
#line 936 "modes.m"
                {
#line 936 "modes.m"
                  hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31, check_hlds__modes__PredProcId_15);
                }
#line 937 "modes.m"
                {
#line 937 "modes.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 927 "modes.m"
              }
#line 954 "modes.m"
            check_hlds__modes__PredId_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 0)));
#line 954 "modes.m"
            check_hlds__modes__ProcId_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 1)));
#line 956 "modes.m"
            {
#line 956 "modes.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31, &check_hlds__modes__Preds0_72);
            }
#line 4357 "check_hlds.modes.c"
            check_hlds__modes__TypeCtorInfo_61_111 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 4359 "check_hlds.modes.c"
            check_hlds__modes__TypeCtorInfo_62_112 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 957 "modes.m"
            {
#line 957 "modes.m"
              mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_61_111, check_hlds__modes__TypeCtorInfo_62_112, check_hlds__modes__Preds0_72, ((MR_Box) (check_hlds__modes__PredId_70)), &check_hlds__modes__conv1_PredInfo0_73);
            }
#line 957 "modes.m"
            check_hlds__modes__PredInfo0_73 = ((MR_Word) check_hlds__modes__conv1_PredInfo0_73);
#line 958 "modes.m"
            {
#line 958 "modes.m"
              hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__modes__PredInfo0_73, &check_hlds__modes__Procs0_74);
            }
#line 4373 "check_hlds.modes.c"
            check_hlds__modes__TypeCtorInfo_63_113 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 4375 "check_hlds.modes.c"
            check_hlds__modes__TypeCtorInfo_64_114 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 959 "modes.m"
            {
#line 959 "modes.m"
              mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_63_113, check_hlds__modes__TypeCtorInfo_64_114, check_hlds__modes__Procs0_74, ((MR_Box) (check_hlds__modes__ProcId_71)), &check_hlds__modes__conv2_ProcInfo0_75);
            }
#line 959 "modes.m"
            check_hlds__modes__ProcInfo0_75 = ((MR_Word) check_hlds__modes__conv2_ProcInfo0_75);
#line 961 "modes.m"
            {
#line 961 "modes.m"
              hlds__hlds_pred__proc_info_set_can_process_3_p_0((MR_Integer) 1, check_hlds__modes__ProcInfo0_75, &check_hlds__modes__ProcInfo1_76);
            }
#line 963 "modes.m"
            {
#line 963 "modes.m"
              mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_63_113, check_hlds__modes__TypeCtorInfo_64_114, ((MR_Box) (check_hlds__modes__ProcId_71)), ((MR_Box) (check_hlds__modes__ProcInfo1_76)), check_hlds__modes__Procs0_74, &check_hlds__modes__Procs1_77);
            }
#line 964 "modes.m"
            {
#line 964 "modes.m"
              hlds__hlds_pred__pred_info_set_procedures_3_p_0(check_hlds__modes__Procs1_77, check_hlds__modes__PredInfo0_73, &check_hlds__modes__PredInfo1_78);
            }
#line 965 "modes.m"
            {
#line 965 "modes.m"
              mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_61_111, check_hlds__modes__TypeCtorInfo_62_112, ((MR_Box) (check_hlds__modes__PredId_70)), ((MR_Box) (check_hlds__modes__PredInfo1_78)), check_hlds__modes__Preds0_72, &check_hlds__modes__Preds1_79);
            }
#line 966 "modes.m"
            {
#line 966 "modes.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__Preds1_79, check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_46_96);
            }
#line 557 "modes.m"
            {
#line 557 "modes.m"
              check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_71, check_hlds__modes__PredId_70, (MR_Integer) 0, (MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ModuleInfo_46_96, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97, (MR_Integer) 0, &check_hlds__modes__STATE_VARIABLE_Changed_48_98, &check_hlds__modes__ModeSpecs_80);
            }
#line 971 "modes.m"
            {
#line 971 "modes.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97, &check_hlds__modes__Globals_81);
            }
#line 972 "modes.m"
            {
#line 972 "modes.m"
              check_hlds__modes__ModeErrors_82 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__modes__Globals_81, check_hlds__modes__ModeSpecs_80);
            }
#line 977 "modes.m"
            if ((check_hlds__modes__ModeErrors_82 == (MR_Integer) 0))
#line 1004 "modes.m"
              if ((check_hlds__modes__HowToCheckGoal_8 == (MR_Integer) 0))
#line 1005 "modes.m"
                {
#line 1006 "modes.m"
                  check_hlds__modes__HeadSpecs_23 = check_hlds__modes__ModeSpecs_80;
#line 1006 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_OldPredTable_34_34 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 1006 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97;
#line 1006 "modes.m"
                  check_hlds__modes__HeadChanged_22 = check_hlds__modes__STATE_VARIABLE_Changed_48_98;
#line 1005 "modes.m"
                }
#line 1004 "modes.m"
              else
#line 980 "modes.m"
                {
#line 980 "modes.m"
                  MR_Word check_hlds__modes__TypeCtorInfo_19_151;
#line 980 "modes.m"
                  MR_Word check_hlds__modes__TypeCtorInfo_20_152;
#line 980 "modes.m"
                  MR_Word check_hlds__modes__Preds2_83;
#line 980 "modes.m"
                  MR_Word check_hlds__modes__PredInfo2_84;
#line 980 "modes.m"
                  MR_Word check_hlds__modes__Procs2_85;
#line 980 "modes.m"
                  MR_Word check_hlds__modes__ProcInfo2_86;
#line 980 "modes.m"
                  MR_Word check_hlds__modes__SwitchDetectInfo_87;
#line 980 "modes.m"
                  MR_Word check_hlds__modes__ProcInfo3_88;
#line 980 "modes.m"
                  MR_Word check_hlds__modes__Procs3_89;
#line 980 "modes.m"
                  MR_Word check_hlds__modes__PredInfo3_90;
#line 980 "modes.m"
                  MR_Word check_hlds__modes__Preds3_91;
#line 980 "modes.m"
                  MR_Word check_hlds__modes__DetismSpecs_92;
#line 980 "modes.m"
                  MR_Word check_hlds__modes__NewChanged_93;
#line 980 "modes.m"
                  MR_Word check_hlds__modes__UniqueSpecs_94;
#line 980 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_49_99;
#line 980 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_50_100;
#line 980 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_101;
#line 980 "modes.m"
                  MR_Word check_hlds__modes__V_102_102;
#line 980 "modes.m"
                  MR_Word check_hlds__modes__ProcInfo_145;
#line 980 "modes.m"
                  MR_Word check_hlds__modes__OldPredInfo0_146;
#line 980 "modes.m"
                  MR_Word check_hlds__modes__OldProcTable0_147;
#line 980 "modes.m"
                  MR_Word check_hlds__modes__OldProcTable_148;
#line 980 "modes.m"
                  MR_Word check_hlds__modes__OldPredInfo_149;
#line 983 "modes.m"
                  MR_Box check_hlds__modes__conv3_PredInfo2_84;
#line 985 "modes.m"
                  MR_Box check_hlds__modes__conv4_ProcInfo2_86;
#line 1017 "modes.m"
                  MR_Word check_hlds__modes___PredInfo_144;
#line 1019 "modes.m"
                  MR_Box check_hlds__modes__conv5_OldPredInfo0_146;

#line 982 "modes.m"
                  {
#line 982 "modes.m"
                    hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97, &check_hlds__modes__Preds2_83);
                  }
#line 983 "modes.m"
                  {
#line 983 "modes.m"
                    mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_61_111, check_hlds__modes__TypeCtorInfo_62_112, check_hlds__modes__Preds2_83, ((MR_Box) (check_hlds__modes__PredId_70)), &check_hlds__modes__conv3_PredInfo2_84);
                  }
#line 983 "modes.m"
                  check_hlds__modes__PredInfo2_84 = ((MR_Word) check_hlds__modes__conv3_PredInfo2_84);
#line 984 "modes.m"
                  {
#line 984 "modes.m"
                    hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__modes__PredInfo2_84, &check_hlds__modes__Procs2_85);
                  }
#line 985 "modes.m"
                  {
#line 985 "modes.m"
                    mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_63_113, check_hlds__modes__TypeCtorInfo_64_114, check_hlds__modes__Procs2_85, ((MR_Box) (check_hlds__modes__ProcId_71)), &check_hlds__modes__conv4_ProcInfo2_86);
                  }
#line 985 "modes.m"
                  check_hlds__modes__ProcInfo2_86 = ((MR_Word) check_hlds__modes__conv4_ProcInfo2_86);
#line 987 "modes.m"
                  {
#line 987 "modes.m"
                    check_hlds__modes__SwitchDetectInfo_87 = check_hlds__switch_detection__init_switch_detect_info_1_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97);
                  }
#line 988 "modes.m"
                  {
#line 988 "modes.m"
                    check_hlds__switch_detection__detect_switches_in_proc_3_p_0(check_hlds__modes__SwitchDetectInfo_87, check_hlds__modes__ProcInfo2_86, &check_hlds__modes__ProcInfo3_88);
                  }
#line 990 "modes.m"
                  {
#line 990 "modes.m"
                    mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_63_113, check_hlds__modes__TypeCtorInfo_64_114, ((MR_Box) (check_hlds__modes__ProcId_71)), ((MR_Box) (check_hlds__modes__ProcInfo3_88)), check_hlds__modes__Procs2_85, &check_hlds__modes__Procs3_89);
                  }
#line 991 "modes.m"
                  {
#line 991 "modes.m"
                    hlds__hlds_pred__pred_info_set_procedures_3_p_0(check_hlds__modes__Procs3_89, check_hlds__modes__PredInfo2_84, &check_hlds__modes__PredInfo3_90);
                  }
#line 992 "modes.m"
                  {
#line 992 "modes.m"
                    mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_61_111, check_hlds__modes__TypeCtorInfo_62_112, ((MR_Box) (check_hlds__modes__PredId_70)), ((MR_Box) (check_hlds__modes__PredInfo3_90)), check_hlds__modes__Preds2_83, &check_hlds__modes__Preds3_91);
                  }
#line 993 "modes.m"
                  {
#line 993 "modes.m"
                    hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__Preds3_91, check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_49_99);
                  }
#line 995 "modes.m"
                  {
#line 995 "modes.m"
                    check_hlds__cse_detection__detect_cse_in_proc_4_p_0(check_hlds__modes__PredId_70, check_hlds__modes__ProcId_71, check_hlds__modes__STATE_VARIABLE_ModuleInfo_49_99, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_50_100);
                  }
#line 996 "modes.m"
                  {
#line 996 "modes.m"
                    check_hlds__det_analysis__determinism_check_proc_5_p_0(check_hlds__modes__ProcId_71, check_hlds__modes__PredId_70, check_hlds__modes__STATE_VARIABLE_ModuleInfo_50_100, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_101, &check_hlds__modes__DetismSpecs_92);
                  }
#line 997 "modes.m"
                  {
#line 997 "modes.m"
                    check_hlds__modes__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 997 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_102_102, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_9[0]));
#line 997 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_102_102, 1) = ((MR_Box) (check_hlds__modes__modecheck_queued_procs_7_p_0_1));
#line 997 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_102_102, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 997 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_102_102, 3) = ((MR_Box) (check_hlds__modes__DetismSpecs_92));
#line 997 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_102_102, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 997 "modes.m"
                  }
#line 997 "modes.m"
                  {
#line 997 "modes.m"
                    mercury__require__expect_4_p_0(check_hlds__modes__V_102_102, (MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.modecheck_queued_proc\'/8", (MR_String) "found detism error");
                  }
#line 1017 "modes.m"
                  {
#line 1017 "modes.m"
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_101, check_hlds__modes__PredId_70, check_hlds__modes__ProcId_71, &check_hlds__modes___PredInfo_144, &check_hlds__modes__ProcInfo_145);
                  }
#line 4589 "check_hlds.modes.c"
                  check_hlds__modes__TypeCtorInfo_19_151 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 4591 "check_hlds.modes.c"
                  check_hlds__modes__TypeCtorInfo_20_152 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 1019 "modes.m"
                  {
#line 1019 "modes.m"
                    mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_19_151, check_hlds__modes__TypeCtorInfo_20_152, check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26, ((MR_Box) (check_hlds__modes__PredId_70)), &check_hlds__modes__conv5_OldPredInfo0_146);
                  }
#line 1019 "modes.m"
                  check_hlds__modes__OldPredInfo0_146 = ((MR_Word) check_hlds__modes__conv5_OldPredInfo0_146);
#line 1020 "modes.m"
                  {
#line 1020 "modes.m"
                    hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__modes__OldPredInfo0_146, &check_hlds__modes__OldProcTable0_147);
                  }
#line 1021 "modes.m"
                  {
#line 1021 "modes.m"
                    mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (check_hlds__modes__ProcId_71)), ((MR_Box) (check_hlds__modes__ProcInfo_145)), check_hlds__modes__OldProcTable0_147, &check_hlds__modes__OldProcTable_148);
                  }
#line 1022 "modes.m"
                  {
#line 1022 "modes.m"
                    hlds__hlds_pred__pred_info_set_procedures_3_p_0(check_hlds__modes__OldProcTable_148, check_hlds__modes__OldPredInfo0_146, &check_hlds__modes__OldPredInfo_149);
                  }
#line 1023 "modes.m"
                  {
#line 1023 "modes.m"
                    mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_19_151, check_hlds__modes__TypeCtorInfo_20_152, ((MR_Box) (check_hlds__modes__PredId_70)), ((MR_Box) (check_hlds__modes__OldPredInfo_149)), check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26, &check_hlds__modes__STATE_VARIABLE_OldPredTable_34_34);
                  }
#line 1000 "modes.m"
                  {
#line 1000 "modes.m"
                    check_hlds__unique_modes__unique_modes_check_proc_6_p_0(check_hlds__modes__ProcId_71, check_hlds__modes__PredId_70, check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_101, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35, &check_hlds__modes__NewChanged_93, &check_hlds__modes__UniqueSpecs_94);
                  }
#line 1002 "modes.m"
                  {
#line 1002 "modes.m"
                    mercury__bool__or_3_p_0(check_hlds__modes__NewChanged_93, check_hlds__modes__STATE_VARIABLE_Changed_48_98, &check_hlds__modes__HeadChanged_22);
                  }
#line 1003 "modes.m"
                  {
#line 1003 "modes.m"
                    check_hlds__modes__HeadSpecs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__ModeSpecs_80, check_hlds__modes__UniqueSpecs_94);
                  }
#line 980 "modes.m"
                }
#line 977 "modes.m"
            else
#line 974 "modes.m"
              {
#line 975 "modes.m"
                {
#line 975 "modes.m"
                  hlds__hlds_module__module_info_remove_predid_3_p_0(check_hlds__modes__PredId_70, check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_97, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35);
                }
#line 976 "modes.m"
                check_hlds__modes__HeadSpecs_23 = check_hlds__modes__ModeSpecs_80;
#line 976 "modes.m"
                check_hlds__modes__STATE_VARIABLE_OldPredTable_34_34 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 976 "modes.m"
                check_hlds__modes__HeadChanged_22 = check_hlds__modes__STATE_VARIABLE_Changed_48_98;
#line 974 "modes.m"
              }
#line 904 "modes.m"
          }
#line 907 "modes.m"
        else
#line 908 "modes.m"
          {
#line 908 "modes.m"
            check_hlds__modes__HeadSpecs_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 909 "modes.m"
            check_hlds__modes__HeadChanged_22 = (MR_Integer) 0;
#line 909 "modes.m"
            check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31;
#line 909 "modes.m"
            check_hlds__modes__STATE_VARIABLE_OldPredTable_34_34 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 908 "modes.m"
          }
#line 911 "modes.m"
        {
#line 911 "modes.m"
          check_hlds__modes__modecheck_queued_procs_7_p_0(check_hlds__modes__HowToCheckGoal_8, check_hlds__modes__STATE_VARIABLE_OldPredTable_34_34, check_hlds__modes__STATE_VARIABLE_OldPredTable_27, check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35, check_hlds__modes__STATE_VARIABLE_ModuleInfo_29, &check_hlds__modes__TailChanged_24, &check_hlds__modes__TailSpecs_25);
        }
#line 913 "modes.m"
        {
#line 913 "modes.m"
          mercury__bool__or_3_p_0(check_hlds__modes__HeadChanged_22, check_hlds__modes__TailChanged_24, check_hlds__modes__Changed_11);
        }
#line 914 "modes.m"
        {
#line 914 "modes.m"
          *check_hlds__modes__Specs_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__HeadSpecs_23, check_hlds__modes__TailSpecs_25);
        }
#line 889 "modes.m"
      }
#line 915 "modes.m"
    else
#line 916 "modes.m"
      {
#line 916 "modes.m"
        *check_hlds__modes__Changed_11 = (MR_Integer) 0;
#line 917 "modes.m"
        *check_hlds__modes__Specs_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 917 "modes.m"
        *check_hlds__modes__STATE_VARIABLE_ModuleInfo_29 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28;
#line 917 "modes.m"
        *check_hlds__modes__STATE_VARIABLE_OldPredTable_27 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 916 "modes.m"
      }
#line 885 "modes.m"
  }
#line 880 "modes.m"
}

#line 837 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0_5(
#line 837 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 837 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 837 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 837 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 837 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4)
#line 837 "modes.m"
{
#line 837 "modes.m"
  {
#line 837 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 837 "modes.m"
    MR_Word check_hlds__modes__conv10_Case_16;
#line 837 "modes.m"
    MR_Word check_hlds__modes__conv9_STATE_VARIABLE_ModeInfo_28;

#line 837 "modes.m"
    {
#line 837 "modes.m"
      check_hlds__modes__unique_modecheck_clause_switch_9_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 7))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv10_Case_16, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv9_STATE_VARIABLE_ModeInfo_28);
    }
#line 837 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv10_Case_16));
#line 837 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv9_STATE_VARIABLE_ModeInfo_28));
#line 837 "modes.m"
  }
#line 837 "modes.m"
}

#line 829 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0_4(
#line 829 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 829 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 829 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 829 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 829 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4)
#line 829 "modes.m"
{
#line 829 "modes.m"
  {
#line 829 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 829 "modes.m"
    MR_Word check_hlds__modes__conv7_Disjunct_20;
#line 829 "modes.m"
    MR_Word check_hlds__modes__conv6_STATE_VARIABLE_ModeInfo_25;

#line 829 "modes.m"
    {
#line 829 "modes.m"
      check_hlds__modes__unique_modecheck_clause_disj_11_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 9))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv7_Disjunct_20, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv6_STATE_VARIABLE_ModeInfo_25);
    }
#line 829 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv7_Disjunct_20));
#line 829 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv6_STATE_VARIABLE_ModeInfo_25));
#line 829 "modes.m"
  }
#line 829 "modes.m"
}

#line 803 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0_3(
#line 803 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 803 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 803 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 803 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 803 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4)
#line 803 "modes.m"
{
#line 803 "modes.m"
  {
#line 803 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 803 "modes.m"
    MR_Word check_hlds__modes__conv4_Case_16;
#line 803 "modes.m"
    MR_Word check_hlds__modes__conv3_STATE_VARIABLE_ModeInfo_28;

#line 803 "modes.m"
    {
#line 803 "modes.m"
      check_hlds__modes__modecheck_clause_switch_9_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 7))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv4_Case_16, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv3_STATE_VARIABLE_ModeInfo_28);
    }
#line 803 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv4_Case_16));
#line 803 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv3_STATE_VARIABLE_ModeInfo_28));
#line 803 "modes.m"
  }
#line 803 "modes.m"
}

#line 796 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0_2(
#line 796 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 796 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 796 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 796 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 796 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4)
#line 796 "modes.m"
{
#line 796 "modes.m"
  {
#line 796 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 796 "modes.m"
    MR_Word check_hlds__modes__conv1_Disjunct_14;
#line 796 "modes.m"
    MR_Word check_hlds__modes__conv0_STATE_VARIABLE_ModeInfo_19;

#line 796 "modes.m"
    {
#line 796 "modes.m"
      check_hlds__modes__modecheck_clause_disj_8_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv1_Disjunct_14, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv0_STATE_VARIABLE_ModeInfo_19);
    }
#line 796 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv1_Disjunct_14));
#line 796 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv0_STATE_VARIABLE_ModeInfo_19));
#line 796 "modes.m"
  }
#line 796 "modes.m"
}

#line 777 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0_1(
#line 777 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 777 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1)
#line 777 "modes.m"
{
#line 777 "modes.m"
  {
#line 777 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 777 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;

#line 777 "modes.m"
    {
#line 777 "modes.m"
      return check_hlds__modes__succeeded = check_hlds__type_util__var_is_or_may_contain_solver_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modes__wrapper_arg_1));
    }
#line 777 "modes.m"
    return check_hlds__modes__succeeded;
#line 777 "modes.m"
  }
#line 777 "modes.m"
}

#line 750 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_14_p_0(
#line 750 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_15,
#line 750 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_16,
#line 750 "modes.m"
  MR_Word check_hlds__modes__InferModes_17,
#line 750 "modes.m"
  MR_Word check_hlds__modes__Markers_18,
#line 750 "modes.m"
  MR_Word check_hlds__modes__PredId_19,
#line 750 "modes.m"
  MR_Integer check_hlds__modes__ProcId_20,
#line 750 "modes.m"
  MR_Word check_hlds__modes__Body0_21,
#line 750 "modes.m"
  MR_Word * check_hlds__modes__Body_22,
#line 750 "modes.m"
  MR_Word check_hlds__modes__HeadVars_23,
#line 750 "modes.m"
  MR_Word check_hlds__modes__InstMap0_24,
#line 750 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_25,
#line 750 "modes.m"
  MR_Word * check_hlds__modes__ArgFinalInsts_26,
#line 750 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_63,
#line 750 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_64)
#line 750 "modes.m"
{
#line 758 "modes.m"
  {
#line 758 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 758 "modes.m"
    MR_String check_hlds__modes__CheckpointMsg_28;
#line 758 "modes.m"
    MR_Integer check_hlds__modes__V_68_68;
#line 758 "modes.m"
    MR_Integer check_hlds__modes__V_71_71;
#line 758 "modes.m"
    MR_String check_hlds__modes__V_152_152;
#line 758 "modes.m"
    MR_String check_hlds__modes__V_154_154;
#line 758 "modes.m"
    MR_String check_hlds__modes__V_155_155;
#line 758 "modes.m"
    MR_String check_hlds__modes__V_156_156;
#line 854 "modes.m"
    MR_Word check_hlds__modes__BodyGoalInfo0_30;
#line 854 "modes.m"
    MR_Word check_hlds__modes__ClausesForm0_34;
#line 854 "modes.m"
    MR_Word check_hlds__modes__BodyNonLocals_40;
#line 763 "modes.m"
    MR_Word check_hlds__modes__TypeInfo_120_120;
#line 763 "modes.m"
    MR_Word check_hlds__modes__TypeCtorInfo_122_122;
#line 763 "modes.m"
    MR_Word check_hlds__modes__BodyGoalExpr0_29;
#line 763 "modes.m"
    MR_Word check_hlds__modes__VarTypes0_41;
#line 763 "modes.m"
    MR_Word check_hlds__modes__SolverNonLocals_42;
#line 763 "modes.m"
    MR_Word check_hlds__modes__V_73_73;
#line 763 "modes.m"
    MR_Word check_hlds__modes__V_74_74;
#line 763 "modes.m"
    MR_Word check_hlds__modes__V_75_75;

#line 760 "modes.m"
    {
#line 760 "modes.m"
      check_hlds__modes__V_68_68 = hlds__hlds_pred__pred_id_to_int_1_f_0(check_hlds__modes__PredId_19);
    }
#line 760 "modes.m"
    {
#line 760 "modes.m"
      check_hlds__modes__V_71_71 = hlds__hlds_pred__proc_id_to_int_1_f_0(check_hlds__modes__ProcId_20);
    }
#line 4970 "check_hlds.modes.c"
    {
#line 4972 "check_hlds.modes.c"
      check_hlds__modes__V_152_152 = mercury__string__int_to_string_1_f_0(check_hlds__modes__V_71_71);
    }
#line 4975 "check_hlds.modes.c"
    {
#line 4977 "check_hlds.modes.c"
      check_hlds__modes__V_154_154 = mercury__string__f_43_43_2_f_0((MR_String) "_", check_hlds__modes__V_152_152);
    }
#line 4980 "check_hlds.modes.c"
    {
#line 4982 "check_hlds.modes.c"
      check_hlds__modes__V_155_155 = mercury__string__int_to_string_1_f_0(check_hlds__modes__V_68_68);
    }
#line 4985 "check_hlds.modes.c"
    {
#line 4987 "check_hlds.modes.c"
      check_hlds__modes__V_156_156 = mercury__string__f_43_43_2_f_0(check_hlds__modes__V_155_155, check_hlds__modes__V_154_154);
    }
#line 4990 "check_hlds.modes.c"
    {
#line 4992 "check_hlds.modes.c"
      check_hlds__modes__CheckpointMsg_28 = mercury__string__f_43_43_2_f_0((MR_String) "procedure_", check_hlds__modes__V_156_156);
    }
#line 763 "modes.m"
    check_hlds__modes__succeeded = (check_hlds__modes__InferModes_17 == (MR_Integer) 0);
#line 763 "modes.m"
    if (check_hlds__modes__succeeded)
#line 763 "modes.m"
      {
#line 764 "modes.m"
        check_hlds__modes__V_73_73 = (MR_Integer) 21;
#line 764 "modes.m"
        {
#line 764 "modes.m"
          check_hlds__modes__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_18, check_hlds__modes__V_73_73);
        }
#line 763 "modes.m"
        if (check_hlds__modes__succeeded)
#line 763 "modes.m"
          {
#line 765 "modes.m"
            check_hlds__modes__BodyGoalExpr0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Body0_21, (MR_Integer) 0)));
#line 765 "modes.m"
            check_hlds__modes__BodyGoalInfo0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Body0_21, (MR_Integer) 1)));
#line 770 "modes.m"
            if (((((MR_tag((MR_Word) check_hlds__modes__BodyGoalExpr0_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_29, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 767 "modes.m"
              {
#line 767 "modes.m"
                MR_Word check_hlds__modes__Disjuncts0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_29, (MR_Integer) 1)));
#line 768 "modes.m"
                MR_Word check_hlds__modes__V_32_32;
#line 768 "modes.m"
                MR_Word check_hlds__modes__V_33_33;

#line 768 "modes.m"
                check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Disjuncts0_31)) == (MR_mktag((MR_Integer) 1)));
#line 768 "modes.m"
                if (check_hlds__modes__succeeded)
#line 768 "modes.m"
                  {
#line 768 "modes.m"
                    check_hlds__modes__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Disjuncts0_31, (MR_Integer) 0)));
#line 768 "modes.m"
                    check_hlds__modes__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Disjuncts0_31, (MR_Integer) 1)));
#line 769 "modes.m"
                    {
#line 769 "modes.m"
                      check_hlds__modes__ClausesForm0_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 769 "modes.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modes__ClausesForm0_34, 0) = ((MR_Box) (check_hlds__modes__Disjuncts0_31));
#line 769 "modes.m"
                    }
#line 769 "modes.m"
                    check_hlds__modes__succeeded = MR_TRUE;
#line 768 "modes.m"
                  }
#line 767 "modes.m"
              }
#line 770 "modes.m"
            else
#line 770 "modes.m"
              if (((((MR_tag((MR_Word) check_hlds__modes__BodyGoalExpr0_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_29, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 771 "modes.m"
                {
#line 771 "modes.m"
                  MR_Word check_hlds__modes__SwitchVar0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_29, (MR_Integer) 1)));
#line 771 "modes.m"
                  MR_Word check_hlds__modes__CanFail0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_29, (MR_Integer) 2)));
#line 771 "modes.m"
                  MR_Word check_hlds__modes__Cases0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_29, (MR_Integer) 3)));
#line 772 "modes.m"
                  MR_Word check_hlds__modes__V_38_38;
#line 772 "modes.m"
                  MR_Word check_hlds__modes__V_39_39;

#line 772 "modes.m"
                  check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Cases0_37)) == (MR_mktag((MR_Integer) 1)));
#line 772 "modes.m"
                  if (check_hlds__modes__succeeded)
#line 772 "modes.m"
                    {
#line 772 "modes.m"
                      check_hlds__modes__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Cases0_37, (MR_Integer) 0)));
#line 772 "modes.m"
                      check_hlds__modes__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Cases0_37, (MR_Integer) 1)));
#line 773 "modes.m"
                      {
#line 773 "modes.m"
                        check_hlds__modes__ClausesForm0_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 773 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_34, 0) = ((MR_Box) (check_hlds__modes__SwitchVar0_35));
#line 773 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_34, 1) = ((MR_Box) (check_hlds__modes__CanFail0_36));
#line 773 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_34, 2) = ((MR_Box) (check_hlds__modes__Cases0_37));
#line 773 "modes.m"
                      }
#line 773 "modes.m"
                      check_hlds__modes__succeeded = MR_TRUE;
#line 772 "modes.m"
                    }
#line 771 "modes.m"
                }
#line 770 "modes.m"
              else
#line 770 "modes.m"
                check_hlds__modes__succeeded = MR_FALSE;
#line 763 "modes.m"
            if (check_hlds__modes__succeeded)
#line 763 "modes.m"
              {
#line 775 "modes.m"
                {
#line 775 "modes.m"
                  check_hlds__modes__BodyNonLocals_40 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modes__BodyGoalInfo0_30);
                }
#line 776 "modes.m"
                {
#line 776 "modes.m"
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_63, &check_hlds__modes__VarTypes0_41);
                }
#line 5114 "check_hlds.modes.c"
                check_hlds__modes__TypeInfo_120_120 = (MR_Word) &check_hlds__modes_scalar_common_1[1];
#line 5116 "check_hlds.modes.c"
                check_hlds__modes__TypeCtorInfo_122_122 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 777 "modes.m"
                {
#line 777 "modes.m"
                  check_hlds__modes__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 777 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_74_74, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[2]));
#line 777 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_74_74, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_14_p_0_1));
#line 777 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 777 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_74_74, 3) = ((MR_Box) (check_hlds__modes__ModuleInfo_15));
#line 777 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_74_74, 4) = ((MR_Box) (check_hlds__modes__VarTypes0_41));
#line 777 "modes.m"
                }
#line 777 "modes.m"
                {
#line 777 "modes.m"
                  check_hlds__modes__V_75_75 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__modes__TypeCtorInfo_122_122, check_hlds__modes__BodyNonLocals_40);
                }
#line 777 "modes.m"
                {
#line 777 "modes.m"
                  check_hlds__modes__SolverNonLocals_42 = mercury__list__filter_2_f_0(check_hlds__modes__TypeInfo_120_120, check_hlds__modes__V_74_74, check_hlds__modes__V_75_75);
                }
#line 780 "modes.m"
                check_hlds__modes__succeeded = (check_hlds__modes__SolverNonLocals_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 763 "modes.m"
              }
#line 763 "modes.m"
          }
#line 763 "modes.m"
      }
#line 854 "modes.m"
    if (check_hlds__modes__succeeded)
#line 782 "modes.m"
      {
#line 782 "modes.m"
        MR_Word check_hlds__modes__BodyContext_43;
#line 782 "modes.m"
        MR_Word check_hlds__modes__EmptyContext_44;
#line 782 "modes.m"
        MR_Word check_hlds__modes__NewGoalExpr_48;
#line 782 "modes.m"
        MR_Word check_hlds__modes__HeadVarFinalInsts_58;
#line 782 "modes.m"
        MR_Word check_hlds__modes__FinalInstMap_59;
#line 782 "modes.m"
        MR_Word check_hlds__modes__DeltaInstMap_60;
#line 782 "modes.m"
        MR_Word check_hlds__modes__BodyGoalInfo_61;
#line 782 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_76_76;

#line 782 "modes.m"
        {
#line 782 "modes.m"
          check_hlds__modes__BodyContext_43 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__modes__BodyGoalInfo0_30);
        }
#line 783 "modes.m"
        {
#line 783 "modes.m"
          mercury__term__context_init_1_p_0(&check_hlds__modes__EmptyContext_44);
        }
#line 784 "modes.m"
        {
#line 784 "modes.m"
          check_hlds__modes__succeeded = mercury__term____Unify____context_0_0(check_hlds__modes__BodyContext_43, check_hlds__modes__EmptyContext_44);
        }
#line 786 "modes.m"
        if (check_hlds__modes__succeeded)
#line 784 "modes.m"
          check_hlds__modes__STATE_VARIABLE_ModeInfo_76_76 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_63;
#line 786 "modes.m"
        else
#line 787 "modes.m"
          {
#line 787 "modes.m"
            check_hlds__mode_info__mode_info_set_context_3_p_0(check_hlds__modes__BodyContext_43, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_63, &check_hlds__modes__STATE_VARIABLE_ModeInfo_76_76);
          }
#line 809 "modes.m"
        if ((check_hlds__modes__WhatToCheck_16 == (MR_Integer) 0))
#line 801 "modes.m"
          if (((MR_tag((MR_Word) check_hlds__modes__ClausesForm0_34)) == (MR_mktag((MR_Integer) 0))))
#line 794 "modes.m"
            {
#line 794 "modes.m"
              MR_Word check_hlds__modes__TypeCtorInfo_127_127;
#line 794 "modes.m"
              MR_Word check_hlds__modes__Disjuncts1_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__ClausesForm0_34, (MR_Integer) 0)));
#line 794 "modes.m"
              MR_Word check_hlds__modes__Disjuncts2_46;
#line 794 "modes.m"
              MR_Word check_hlds__modes__Disjuncts_47;
#line 794 "modes.m"
              MR_Word check_hlds__modes__V_90_90;
#line 796 "modes.m"
              MR_Box check_hlds__modes__conv2_STATE_VARIABLE_ModeInfo_64;

#line 795 "modes.m"
              {
#line 795 "modes.m"
                check_hlds__modes__Disjuncts2_46 = hlds__goal_util__flatten_disjs_1_f_0(check_hlds__modes__Disjuncts1_45);
              }
#line 796 "modes.m"
              {
#line 796 "modes.m"
                check_hlds__modes__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 796 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_90_90, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_7[0]));
#line 796 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_90_90, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_14_p_0_2));
#line 796 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 796 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_90_90, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_28));
#line 796 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_90_90, 4) = ((MR_Box) (check_hlds__modes__HeadVars_23));
#line 796 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_90_90, 5) = ((MR_Box) (check_hlds__modes__InstMap0_24));
#line 796 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_90_90, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_25));
#line 796 "modes.m"
              }
#line 5243 "check_hlds.modes.c"
              check_hlds__modes__TypeCtorInfo_127_127 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 796 "modes.m"
              {
#line 796 "modes.m"
                mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_127_127, check_hlds__modes__TypeCtorInfo_127_127, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_90_90, check_hlds__modes__Disjuncts2_46, &check_hlds__modes__Disjuncts_47, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_76_76)), &check_hlds__modes__conv2_STATE_VARIABLE_ModeInfo_64);
              }
#line 796 "modes.m"
              *check_hlds__modes__STATE_VARIABLE_ModeInfo_64 = ((MR_Word) check_hlds__modes__conv2_STATE_VARIABLE_ModeInfo_64);
#line 800 "modes.m"
              {
#line 800 "modes.m"
                check_hlds__modes__NewGoalExpr_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "modes.m"
                MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 800 "modes.m"
                MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 1) = ((MR_Box) (check_hlds__modes__Disjuncts_47));
#line 800 "modes.m"
              }
#line 794 "modes.m"
            }
#line 801 "modes.m"
          else
#line 802 "modes.m"
            {
#line 802 "modes.m"
              MR_Word check_hlds__modes__TypeCtorInfo_133_133;
#line 802 "modes.m"
              MR_Word check_hlds__modes__SwitchVar_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_34, (MR_Integer) 0)));
#line 802 "modes.m"
              MR_Word check_hlds__modes__CanFail_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_34, (MR_Integer) 1)));
#line 802 "modes.m"
              MR_Word check_hlds__modes__Cases1_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_34, (MR_Integer) 2)));
#line 802 "modes.m"
              MR_Word check_hlds__modes__Cases_52;
#line 802 "modes.m"
              MR_Word check_hlds__modes__V_88_88;
#line 803 "modes.m"
              MR_Box check_hlds__modes__conv5_STATE_VARIABLE_ModeInfo_64;

#line 803 "modes.m"
              {
#line 803 "modes.m"
                check_hlds__modes__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 803 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_88_88, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_3[1]));
#line 803 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_88_88, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_14_p_0_3));
#line 803 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_88_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 803 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_88_88, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_28));
#line 803 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_88_88, 4) = ((MR_Box) (check_hlds__modes__HeadVars_23));
#line 803 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_88_88, 5) = ((MR_Box) (check_hlds__modes__InstMap0_24));
#line 803 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_88_88, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_25));
#line 803 "modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__modes__V_88_88, 7) = ((MR_Box) (check_hlds__modes__SwitchVar_49));
#line 803 "modes.m"
              }
#line 5305 "check_hlds.modes.c"
              check_hlds__modes__TypeCtorInfo_133_133 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 803 "modes.m"
              {
#line 803 "modes.m"
                mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_133_133, check_hlds__modes__TypeCtorInfo_133_133, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_88_88, check_hlds__modes__Cases1_51, &check_hlds__modes__Cases_52, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_76_76)), &check_hlds__modes__conv5_STATE_VARIABLE_ModeInfo_64);
              }
#line 803 "modes.m"
              *check_hlds__modes__STATE_VARIABLE_ModeInfo_64 = ((MR_Word) check_hlds__modes__conv5_STATE_VARIABLE_ModeInfo_64);
#line 807 "modes.m"
              {
#line 807 "modes.m"
                check_hlds__modes__NewGoalExpr_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 807 "modes.m"
                MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 807 "modes.m"
                MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 1) = ((MR_Box) (check_hlds__modes__SwitchVar_49));
#line 807 "modes.m"
                MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 2) = ((MR_Box) (check_hlds__modes__CanFail_50));
#line 807 "modes.m"
                MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 3) = ((MR_Box) (check_hlds__modes__Cases_52));
#line 807 "modes.m"
              }
#line 802 "modes.m"
            }
#line 809 "modes.m"
        else
#line 810 "modes.m"
          {
#line 810 "modes.m"
            MR_Word check_hlds__modes__NondetLiveVars0_53;
#line 810 "modes.m"
            MR_Word check_hlds__modes__Detism_54;
#line 810 "modes.m"
            MR_Word check_hlds__modes__NonLocals_55;
#line 810 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79;
#line 814 "modes.m"
            MR_Word check_hlds__modes__V_150_150;
#line 814 "modes.m"
            MR_Word check_hlds__modes__V_56_56;

#line 811 "modes.m"
            {
#line 811 "modes.m"
              check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_76_76, &check_hlds__modes__NondetLiveVars0_53);
            }
#line 812 "modes.m"
            {
#line 812 "modes.m"
              check_hlds__modes__Detism_54 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__modes__BodyGoalInfo0_30);
            }
#line 813 "modes.m"
            {
#line 813 "modes.m"
              check_hlds__modes__NonLocals_55 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modes__BodyGoalInfo0_30);
            }
#line 814 "modes.m"
            {
#line 814 "modes.m"
              parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modes__Detism_54, &check_hlds__modes__V_56_56, &check_hlds__modes__V_150_150);
            }
#line 814 "modes.m"
            check_hlds__modes__succeeded = ((MR_Integer) 3 == check_hlds__modes__V_150_150);
#line 816 "modes.m"
            if (check_hlds__modes__succeeded)
#line 814 "modes.m"
              check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79 = check_hlds__modes__STATE_VARIABLE_ModeInfo_76_76;
#line 816 "modes.m"
            else
#line 817 "modes.m"
              {
#line 817 "modes.m"
                MR_Word check_hlds__modes__V_78_78;

#line 817 "modes.m"
                {
#line 817 "modes.m"
                  check_hlds__modes__V_78_78 = mercury__bag__init_0_f_0((MR_Word) &check_hlds__modes_scalar_common_1[1]);
                }
#line 817 "modes.m"
                {
#line 817 "modes.m"
                  check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__modes__V_78_78, check_hlds__modes__STATE_VARIABLE_ModeInfo_76_76, &check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79);
                }
#line 817 "modes.m"
              }
#line 835 "modes.m"
            if (((MR_tag((MR_Word) check_hlds__modes__ClausesForm0_34)) == (MR_mktag((MR_Integer) 0))))
#line 820 "modes.m"
              {
#line 820 "modes.m"
                MR_Word check_hlds__modes__TypeCtorInfo_140_140;
#line 820 "modes.m"
                MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_85_85;
#line 820 "modes.m"
                MR_Word check_hlds__modes__V_86_86;
#line 820 "modes.m"
                MR_Word check_hlds__modes__Disjuncts1_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__ClausesForm0_34, (MR_Integer) 0)));
#line 820 "modes.m"
                MR_Word check_hlds__modes__Disjuncts2_100;
#line 820 "modes.m"
                MR_Word check_hlds__modes__Disjuncts_101;
#line 822 "modes.m"
                MR_Word check_hlds__modes__V_151_151;
#line 822 "modes.m"
                MR_Word check_hlds__modes__V_57_57;
#line 829 "modes.m"
                MR_Box check_hlds__modes__conv8_STATE_VARIABLE_ModeInfo_64;

#line 821 "modes.m"
                {
#line 821 "modes.m"
                  check_hlds__modes__Disjuncts2_100 = hlds__goal_util__flatten_disjs_1_f_0(check_hlds__modes__Disjuncts1_99);
                }
#line 822 "modes.m"
                {
#line 822 "modes.m"
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modes__Detism_54, &check_hlds__modes__V_57_57, &check_hlds__modes__V_151_151);
                }
#line 822 "modes.m"
                check_hlds__modes__succeeded = ((MR_Integer) 3 == check_hlds__modes__V_151_151);
#line 826 "modes.m"
                if (check_hlds__modes__succeeded)
#line 823 "modes.m"
                  {
#line 823 "modes.m"
                    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_83_83;
#line 823 "modes.m"
                    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_84_84;

#line 823 "modes.m"
                    {
#line 823 "modes.m"
                      check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__modes__NonLocals_55, check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79, &check_hlds__modes__STATE_VARIABLE_ModeInfo_83_83);
                    }
#line 824 "modes.m"
                    {
#line 824 "modes.m"
                      check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_83_83, &check_hlds__modes__STATE_VARIABLE_ModeInfo_84_84);
                    }
#line 825 "modes.m"
                    {
#line 825 "modes.m"
                      check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modes__NonLocals_55, check_hlds__modes__STATE_VARIABLE_ModeInfo_84_84, &check_hlds__modes__STATE_VARIABLE_ModeInfo_85_85);
                    }
#line 823 "modes.m"
                  }
#line 826 "modes.m"
                else
#line 825 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_ModeInfo_85_85 = check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79;
#line 829 "modes.m"
                {
#line 829 "modes.m"
                  check_hlds__modes__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 829 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_86_86, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_8[0]));
#line 829 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_86_86, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_14_p_0_4));
#line 829 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_86_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 829 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_86_86, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_28));
#line 829 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_86_86, 4) = ((MR_Box) (check_hlds__modes__HeadVars_23));
#line 829 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_86_86, 5) = ((MR_Box) (check_hlds__modes__InstMap0_24));
#line 829 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_86_86, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_25));
#line 829 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_86_86, 7) = ((MR_Box) (check_hlds__modes__Detism_54));
#line 829 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_86_86, 8) = ((MR_Box) (check_hlds__modes__NonLocals_55));
#line 829 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_86_86, 9) = ((MR_Box) (check_hlds__modes__NondetLiveVars0_53));
#line 829 "modes.m"
                }
#line 5483 "check_hlds.modes.c"
                check_hlds__modes__TypeCtorInfo_140_140 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 829 "modes.m"
                {
#line 829 "modes.m"
                  mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_140_140, check_hlds__modes__TypeCtorInfo_140_140, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_86_86, check_hlds__modes__Disjuncts2_100, &check_hlds__modes__Disjuncts_101, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_85_85)), &check_hlds__modes__conv8_STATE_VARIABLE_ModeInfo_64);
                }
#line 829 "modes.m"
                *check_hlds__modes__STATE_VARIABLE_ModeInfo_64 = ((MR_Word) check_hlds__modes__conv8_STATE_VARIABLE_ModeInfo_64);
#line 834 "modes.m"
                {
#line 834 "modes.m"
                  check_hlds__modes__NewGoalExpr_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 834 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 834 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 1) = ((MR_Box) (check_hlds__modes__Disjuncts_101));
#line 834 "modes.m"
                }
#line 820 "modes.m"
              }
#line 835 "modes.m"
            else
#line 836 "modes.m"
              {
#line 836 "modes.m"
                MR_Word check_hlds__modes__TypeCtorInfo_146_146;
#line 836 "modes.m"
                MR_Word check_hlds__modes__V_80_80;
#line 836 "modes.m"
                MR_Word check_hlds__modes__SwitchVar_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_34, (MR_Integer) 0)));
#line 836 "modes.m"
                MR_Word check_hlds__modes__CanFail_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_34, (MR_Integer) 1)));
#line 836 "modes.m"
                MR_Word check_hlds__modes__Cases1_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_34, (MR_Integer) 2)));
#line 836 "modes.m"
                MR_Word check_hlds__modes__Cases_105;
#line 837 "modes.m"
                MR_Box check_hlds__modes__conv11_STATE_VARIABLE_ModeInfo_64;

#line 837 "modes.m"
                {
#line 837 "modes.m"
                  check_hlds__modes__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 837 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_80_80, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_3[1]));
#line 837 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_80_80, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_14_p_0_5));
#line 837 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_80_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 837 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_80_80, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_28));
#line 837 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_80_80, 4) = ((MR_Box) (check_hlds__modes__HeadVars_23));
#line 837 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_80_80, 5) = ((MR_Box) (check_hlds__modes__InstMap0_24));
#line 837 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_80_80, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_25));
#line 837 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_80_80, 7) = ((MR_Box) (check_hlds__modes__SwitchVar_102));
#line 837 "modes.m"
                }
#line 5545 "check_hlds.modes.c"
                check_hlds__modes__TypeCtorInfo_146_146 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 837 "modes.m"
                {
#line 837 "modes.m"
                  mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_146_146, check_hlds__modes__TypeCtorInfo_146_146, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_80_80, check_hlds__modes__Cases1_104, &check_hlds__modes__Cases_105, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79)), &check_hlds__modes__conv11_STATE_VARIABLE_ModeInfo_64);
                }
#line 837 "modes.m"
                *check_hlds__modes__STATE_VARIABLE_ModeInfo_64 = ((MR_Word) check_hlds__modes__conv11_STATE_VARIABLE_ModeInfo_64);
#line 841 "modes.m"
                {
#line 841 "modes.m"
                  check_hlds__modes__NewGoalExpr_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 841 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 841 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 1) = ((MR_Box) (check_hlds__modes__SwitchVar_102));
#line 841 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 2) = ((MR_Box) (check_hlds__modes__CanFail_103));
#line 841 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_48, 3) = ((MR_Box) (check_hlds__modes__Cases_105));
#line 841 "modes.m"
                }
#line 836 "modes.m"
              }
#line 810 "modes.m"
          }
#line 846 "modes.m"
        {
#line 846 "modes.m"
          mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modes__HeadVars_23, check_hlds__modes__ArgFinalInsts0_25, &check_hlds__modes__HeadVarFinalInsts_58);
        }
#line 848 "modes.m"
        {
#line 848 "modes.m"
          check_hlds__modes__FinalInstMap_59 = hlds__instmap__instmap_from_assoc_list_1_f_0(check_hlds__modes__HeadVarFinalInsts_58);
        }
#line 849 "modes.m"
        {
#line 849 "modes.m"
          hlds__instmap__compute_instmap_delta_4_p_0(check_hlds__modes__InstMap0_24, check_hlds__modes__FinalInstMap_59, check_hlds__modes__BodyNonLocals_40, &check_hlds__modes__DeltaInstMap_60);
        }
#line 851 "modes.m"
        {
#line 851 "modes.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modes__DeltaInstMap_60, check_hlds__modes__BodyGoalInfo0_30, &check_hlds__modes__BodyGoalInfo_61);
        }
#line 852 "modes.m"
        {
#line 852 "modes.m"
          MR_Word base;
#line 852 "modes.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 852 "modes.m"
          *check_hlds__modes__Body_22 = base;
#line 852 "modes.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__NewGoalExpr_48));
#line 852 "modes.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__BodyGoalInfo_61));
#line 852 "modes.m"
        }
#line 853 "modes.m"
        *check_hlds__modes__ArgFinalInsts_26 = check_hlds__modes__ArgFinalInsts0_25;
#line 782 "modes.m"
      }
#line 854 "modes.m"
    else
#line 856 "modes.m"
      {
#line 856 "modes.m"
        MR_Word check_hlds__modes__Body1_62;
#line 856 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_93_93;
#line 856 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_95_95;
#line 856 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_97_97;

#line 856 "modes.m"
        {
#line 856 "modes.m"
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_28, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_63, &check_hlds__modes__STATE_VARIABLE_ModeInfo_93_93);
        }
#line 860 "modes.m"
        if ((check_hlds__modes__WhatToCheck_16 == (MR_Integer) 0))
#line 859 "modes.m"
          {
#line 859 "modes.m"
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modes__Body0_21, &check_hlds__modes__Body1_62, check_hlds__modes__STATE_VARIABLE_ModeInfo_93_93, &check_hlds__modes__STATE_VARIABLE_ModeInfo_95_95);
          }
#line 860 "modes.m"
        else
#line 862 "modes.m"
          {
#line 862 "modes.m"
            check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modes__Body0_21, &check_hlds__modes__Body1_62, check_hlds__modes__STATE_VARIABLE_ModeInfo_93_93, &check_hlds__modes__STATE_VARIABLE_ModeInfo_95_95);
          }
#line 864 "modes.m"
        {
#line 864 "modes.m"
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_28, check_hlds__modes__STATE_VARIABLE_ModeInfo_95_95, &check_hlds__modes__STATE_VARIABLE_ModeInfo_97_97);
        }
#line 867 "modes.m"
        {
#line 867 "modes.m"
          check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_23, check_hlds__modes__InferModes_17, check_hlds__modes__ArgFinalInsts0_25, check_hlds__modes__ArgFinalInsts_26, check_hlds__modes__Body1_62, check_hlds__modes__Body_22, check_hlds__modes__STATE_VARIABLE_ModeInfo_97_97, check_hlds__modes__STATE_VARIABLE_ModeInfo_64);
#line 867 "modes.m"
          return;
        }
#line 856 "modes.m"
      }
#line 758 "modes.m"
  }
#line 750 "modes.m"
}

#line 674 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_2(
#line 674 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 674 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1)
#line 674 "modes.m"
{
#line 674 "modes.m"
  {
#line 674 "modes.m"
    MR_Box check_hlds__modes__wrapper_arg_2;
#line 674 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 674 "modes.m"
    MR_Word check_hlds__modes__conv1_HeadVar__3_3;

#line 674 "modes.m"
    {
#line 674 "modes.m"
      check_hlds__modes__conv1_HeadVar__3_3 = check_hlds__mode_errors__mode_warning_info_to_spec_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modes__wrapper_arg_1));
    }
#line 674 "modes.m"
    check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv1_HeadVar__3_3));
#line 674 "modes.m"
    return check_hlds__modes__wrapper_arg_2;
#line 674 "modes.m"
  }
#line 674 "modes.m"
}

#line 654 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_1(
#line 654 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 654 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1)
#line 654 "modes.m"
{
#line 654 "modes.m"
  {
#line 654 "modes.m"
    MR_Box check_hlds__modes__wrapper_arg_2;
#line 654 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 654 "modes.m"
    MR_Word check_hlds__modes__conv0_HeadVar__3_3;

#line 654 "modes.m"
    {
#line 654 "modes.m"
      check_hlds__modes__conv0_HeadVar__3_3 = check_hlds__mode_errors__mode_error_info_to_spec_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modes__wrapper_arg_1));
    }
#line 654 "modes.m"
    check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv0_HeadVar__3_3));
#line 654 "modes.m"
    return check_hlds__modes__wrapper_arg_2;
#line 654 "modes.m"
  }
#line 654 "modes.m"
}

#line 560 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0(
#line 560 "modes.m"
  MR_Integer check_hlds__modes__ProcId_10,
#line 560 "modes.m"
  MR_Word check_hlds__modes__PredId_11,
#line 560 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_12,
#line 560 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_13,
#line 560 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27,
#line 560 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_28,
#line 560 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_29,
#line 560 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_30,
#line 560 "modes.m"
  MR_Word * check_hlds__modes__Specs_16)
#line 560 "modes.m"
{
#line 565 "modes.m"
  {
#line 565 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 565 "modes.m"
    MR_Word check_hlds__modes__ProcInfo0_18;
#line 565 "modes.m"
    MR_Word check_hlds__modes__CanProcess_19;
#line 566 "modes.m"
    MR_Word check_hlds__modes___PredInfo0_17;

#line 566 "modes.m"
    {
#line 566 "modes.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, &check_hlds__modes___PredInfo0_17, &check_hlds__modes__ProcInfo0_18);
    }
#line 568 "modes.m"
    {
#line 568 "modes.m"
      hlds__hlds_pred__proc_info_get_can_process_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__CanProcess_19);
    }
#line 572 "modes.m"
    if ((check_hlds__modes__CanProcess_19 == (MR_Integer) 0))
#line 570 "modes.m"
      {
#line 571 "modes.m"
        *check_hlds__modes__Specs_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 571 "modes.m"
        *check_hlds__modes__STATE_VARIABLE_ModuleInfo_28 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27;
#line 571 "modes.m"
        *check_hlds__modes__STATE_VARIABLE_Changed_30 = check_hlds__modes__STATE_VARIABLE_Changed_0_29;
#line 570 "modes.m"
      }
#line 572 "modes.m"
    else
#line 573 "modes.m"
      {
#line 573 "modes.m"
        MR_Word check_hlds__modes__TypeCtorInfo_34_34;
#line 573 "modes.m"
        MR_Word check_hlds__modes__TypeCtorInfo_35_35;
#line 573 "modes.m"
        MR_Word check_hlds__modes__ProcInfo_20;
#line 573 "modes.m"
        MR_Word check_hlds__modes__Preds1_21;
#line 573 "modes.m"
        MR_Word check_hlds__modes__PredInfo1_22;
#line 573 "modes.m"
        MR_Word check_hlds__modes__Procs1_23;
#line 573 "modes.m"
        MR_Word check_hlds__modes__Procs_24;
#line 573 "modes.m"
        MR_Word check_hlds__modes__PredInfo_25;
#line 573 "modes.m"
        MR_Word check_hlds__modes__Preds_26;
#line 573 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31;
#line 573 "modes.m"
        MR_Word check_hlds__modes__HeadVars_52;
#line 573 "modes.m"
        MR_Word check_hlds__modes__ArgModes0_53;
#line 573 "modes.m"
        MR_Word check_hlds__modes__ArgLives0_54;
#line 573 "modes.m"
        MR_Word check_hlds__modes__Body0_55;
#line 573 "modes.m"
        MR_Word check_hlds__modes__PredInfo_56;
#line 573 "modes.m"
        MR_Word check_hlds__modes__ClausesInfo_57;
#line 573 "modes.m"
        MR_Word check_hlds__modes__ClausesRep_58;
#line 573 "modes.m"
        MR_Word check_hlds__modes__Clauses_60;
#line 573 "modes.m"
        MR_Word check_hlds__modes__Context_63;
#line 573 "modes.m"
        MR_Word check_hlds__modes__ArgInitialInsts_65;
#line 573 "modes.m"
        MR_Word check_hlds__modes__InstAL_66;
#line 573 "modes.m"
        MR_Word check_hlds__modes__InstMap0_67;
#line 573 "modes.m"
        MR_Word check_hlds__modes__LiveVarsList_68;
#line 573 "modes.m"
        MR_Word check_hlds__modes__LiveVars_69;
#line 573 "modes.m"
        MR_Word check_hlds__modes__Markers_70;
#line 573 "modes.m"
        MR_Word check_hlds__modes__InferModes_71;
#line 573 "modes.m"
        MR_Word check_hlds__modes__ArgFinalInsts0_72;
#line 573 "modes.m"
        MR_Word check_hlds__modes__Body_73;
#line 573 "modes.m"
        MR_Word check_hlds__modes__ArgFinalInsts_74;
#line 573 "modes.m"
        MR_Word check_hlds__modes__ModeErrors_75;
#line 573 "modes.m"
        MR_Word check_hlds__modes__ArgModes_83;
#line 573 "modes.m"
        MR_Word check_hlds__modes__VarSet_84;
#line 573 "modes.m"
        MR_Word check_hlds__modes__VarTypes_85;
#line 573 "modes.m"
        MR_Word check_hlds__modes__NeedToRequantify_86;
#line 573 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_61_87;
#line 573 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_62_88;
#line 573 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90;
#line 573 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_69_95;
#line 573 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_72_98;
#line 573 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_73_99;
#line 573 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_74_100;
#line 573 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_75_101;
#line 573 "modes.m"
        MR_Word check_hlds__modes__Body1_132;
#line 573 "modes.m"
        MR_Word check_hlds__modes__ArgFinalInsts1_133;
#line 573 "modes.m"
        MR_Word check_hlds__modes__ModeInfo1_134;
#line 573 "modes.m"
        MR_Word check_hlds__modes__ModeErrors1_135;
#line 602 "modes.m"
        MR_Word check_hlds__modes___ItemNumbers_59;
#line 577 "modes.m"
        MR_Box check_hlds__modes__conv2_PredInfo1_22;

#line 593 "modes.m"
        {
#line 593 "modes.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__HeadVars_52);
        }
#line 594 "modes.m"
        {
#line 594 "modes.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__ArgModes0_53);
        }
#line 595 "modes.m"
        {
#line 595 "modes.m"
          hlds__hlds_pred__proc_info_arglives_3_p_0(check_hlds__modes__ProcInfo0_18, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, &check_hlds__modes__ArgLives0_54);
        }
#line 596 "modes.m"
        {
#line 596 "modes.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__Body0_55);
        }
#line 600 "modes.m"
        {
#line 600 "modes.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__PredId_11, &check_hlds__modes__PredInfo_56);
        }
#line 601 "modes.m"
        {
#line 601 "modes.m"
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__modes__PredInfo_56, &check_hlds__modes__ClausesInfo_57);
        }
#line 602 "modes.m"
        {
#line 602 "modes.m"
          hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__modes__ClausesInfo_57, &check_hlds__modes__ClausesRep_58, &check_hlds__modes___ItemNumbers_59);
        }
#line 603 "modes.m"
        {
#line 603 "modes.m"
          hlds__hlds_clauses__get_clause_list_2_p_0(check_hlds__modes__ClausesRep_58, &check_hlds__modes__Clauses_60);
        }
#line 607 "modes.m"
        if ((check_hlds__modes__Clauses_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 609 "modes.m"
          {
#line 609 "modes.m"
            hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__Context_63);
          }
#line 607 "modes.m"
        else
#line 605 "modes.m"
          {
#line 605 "modes.m"
            MR_Word check_hlds__modes__FirstClause_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Clauses_60, (MR_Integer) 0)));
#line 605 "modes.m"
            MR_Word check_hlds__modes__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Clauses_60, (MR_Integer) 1)));
#line 606 "modes.m"
            MR_Word check_hlds__modes__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_61, (MR_Integer) 0)));
#line 606 "modes.m"
            MR_Word check_hlds__modes__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_61, (MR_Integer) 1)));
#line 606 "modes.m"
            MR_Word check_hlds__modes__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_61, (MR_Integer) 2)));
#line 606 "modes.m"
            MR_Word check_hlds__modes__V_107_107;

#line 606 "modes.m"
            check_hlds__modes__Context_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_61, (MR_Integer) 3)));
#line 606 "modes.m"
            check_hlds__modes__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_61, (MR_Integer) 4)));
#line 605 "modes.m"
          }
#line 618 "modes.m"
        {
#line 618 "modes.m"
          check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__ArgModes0_53, &check_hlds__modes__ArgInitialInsts_65);
        }
#line 619 "modes.m"
        {
#line 619 "modes.m"
          mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modes__HeadVars_52, check_hlds__modes__ArgInitialInsts_65, &check_hlds__modes__InstAL_66);
        }
#line 620 "modes.m"
        {
#line 620 "modes.m"
          check_hlds__modes__InstMap0_67 = hlds__instmap__instmap_from_assoc_list_1_f_0(check_hlds__modes__InstAL_66);
        }
#line 624 "modes.m"
        {
#line 624 "modes.m"
          check_hlds__modecheck_util__get_live_vars_3_p_0(check_hlds__modes__HeadVars_52, check_hlds__modes__ArgLives0_54, &check_hlds__modes__LiveVarsList_68);
        }
#line 625 "modes.m"
        {
#line 625 "modes.m"
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modes__LiveVarsList_68, &check_hlds__modes__LiveVars_69);
        }
#line 628 "modes.m"
        {
#line 628 "modes.m"
          check_hlds__mode_info__mode_info_init_9_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, check_hlds__modes__Context_63, check_hlds__modes__LiveVars_69, check_hlds__modes__InstMap0_67, check_hlds__modes__WhatToCheck_12, check_hlds__modes__MayChangeCalledProc_13, &check_hlds__modes__STATE_VARIABLE_ModeInfo_61_87);
        }
#line 630 "modes.m"
        {
#line 630 "modes.m"
          check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(check_hlds__modes__STATE_VARIABLE_Changed_0_29, check_hlds__modes__STATE_VARIABLE_ModeInfo_61_87, &check_hlds__modes__STATE_VARIABLE_ModeInfo_62_88);
        }
#line 632 "modes.m"
        {
#line 632 "modes.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modes__PredInfo_56, &check_hlds__modes__Markers_70);
        }
#line 633 "modes.m"
        {
#line 633 "modes.m"
          check_hlds__modes__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_70, (MR_Integer) 3);
        }
#line 635 "modes.m"
        if (check_hlds__modes__succeeded)
#line 634 "modes.m"
          check_hlds__modes__InferModes_71 = (MR_Integer) 1;
#line 635 "modes.m"
        else
#line 636 "modes.m"
          check_hlds__modes__InferModes_71 = (MR_Integer) 0;
#line 638 "modes.m"
        {
#line 638 "modes.m"
          check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__ArgModes0_53, &check_hlds__modes__ArgFinalInsts0_72);
        }
#line 710 "modes.m"
        {
#line 710 "modes.m"
          check_hlds__modes__do_modecheck_proc_body_14_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__WhatToCheck_12, check_hlds__modes__InferModes_71, check_hlds__modes__Markers_70, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, check_hlds__modes__Body0_55, &check_hlds__modes__Body1_132, check_hlds__modes__HeadVars_52, check_hlds__modes__InstMap0_67, check_hlds__modes__ArgFinalInsts0_72, &check_hlds__modes__ArgFinalInsts1_133, check_hlds__modes__STATE_VARIABLE_ModeInfo_62_88, &check_hlds__modes__ModeInfo1_134);
        }
#line 713 "modes.m"
        {
#line 713 "modes.m"
          check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__ModeInfo1_134, &check_hlds__modes__ModeErrors1_135);
        }
#line 719 "modes.m"
        if ((check_hlds__modes__ModeErrors1_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 715 "modes.m"
          {
#line 716 "modes.m"
            check_hlds__modes__Body_73 = check_hlds__modes__Body1_132;
#line 717 "modes.m"
            check_hlds__modes__ArgFinalInsts_74 = check_hlds__modes__ArgFinalInsts1_133;
#line 718 "modes.m"
            check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90 = check_hlds__modes__ModeInfo1_134;
#line 715 "modes.m"
          }
#line 719 "modes.m"
        else
#line 720 "modes.m"
          {
#line 720 "modes.m"
            MR_Word check_hlds__modes__HadFromGroundTerm_138;

#line 721 "modes.m"
            {
#line 721 "modes.m"
              check_hlds__mode_info__mode_info_get_had_from_ground_term_2_p_0(check_hlds__modes__ModeInfo1_134, &check_hlds__modes__HadFromGroundTerm_138);
            }
#line 740 "modes.m"
            if ((check_hlds__modes__HadFromGroundTerm_138 == (MR_Integer) 1))
#line 741 "modes.m"
              {
#line 744 "modes.m"
                check_hlds__modes__Body_73 = check_hlds__modes__Body1_132;
#line 745 "modes.m"
                check_hlds__modes__ArgFinalInsts_74 = check_hlds__modes__ArgFinalInsts1_133;
#line 746 "modes.m"
                check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90 = check_hlds__modes__ModeInfo1_134;
#line 741 "modes.m"
              }
#line 740 "modes.m"
            else
#line 723 "modes.m"
              {
#line 723 "modes.m"
                MR_Word check_hlds__modes__ModeInfo2_139;

#line 735 "modes.m"
                {
#line 735 "modes.m"
                  check_hlds__mode_info__mode_info_set_make_ground_terms_unique_3_p_0((MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ModeInfo_62_88, &check_hlds__modes__ModeInfo2_139);
                }
#line 737 "modes.m"
                {
#line 737 "modes.m"
                  check_hlds__modes__do_modecheck_proc_body_14_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__modes__WhatToCheck_12, check_hlds__modes__InferModes_71, check_hlds__modes__Markers_70, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, check_hlds__modes__Body0_55, &check_hlds__modes__Body_73, check_hlds__modes__HeadVars_52, check_hlds__modes__InstMap0_67, check_hlds__modes__ArgFinalInsts0_72, &check_hlds__modes__ArgFinalInsts_74, check_hlds__modes__ModeInfo2_139, &check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90);
                }
#line 723 "modes.m"
              }
#line 720 "modes.m"
          }
#line 644 "modes.m"
        {
#line 644 "modes.m"
          check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90, &check_hlds__modes__ModeErrors_75);
        }
#line 652 "modes.m"
        if ((check_hlds__modes__InferModes_71 == (MR_Integer) 0))
#line 653 "modes.m"
          {
#line 653 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_86_112 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 653 "modes.m"
            MR_Word check_hlds__modes__AllErrorSpecs_76;
#line 653 "modes.m"
            MR_Word check_hlds__modes__ErrorSpecs_79;
#line 653 "modes.m"
            MR_Word check_hlds__modes__StateVarWarningSpecs_80;
#line 653 "modes.m"
            MR_Word check_hlds__modes__ModeWarnings_81;
#line 653 "modes.m"
            MR_Word check_hlds__modes__WarningSpecs_82;
#line 653 "modes.m"
            MR_Word check_hlds__modes__V_91_91;
#line 653 "modes.m"
            MR_Word check_hlds__modes__V_93_93;
#line 653 "modes.m"
            MR_Word check_hlds__modes__V_94_94;

#line 654 "modes.m"
            {
#line 654 "modes.m"
              check_hlds__modes__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 654 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[0]));
#line 654 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 1) = ((MR_Box) (check_hlds__modes__maybe_modecheck_proc_9_p_0_1));
#line 654 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 654 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 3) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90));
#line 654 "modes.m"
            }
#line 654 "modes.m"
            {
#line 654 "modes.m"
              check_hlds__modes__AllErrorSpecs_76 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__modes__TypeCtorInfo_86_112, check_hlds__modes__V_91_91, check_hlds__modes__ModeErrors_75);
            }
#line 666 "modes.m"
            if ((check_hlds__modes__AllErrorSpecs_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 667 "modes.m"
              {
#line 668 "modes.m"
                check_hlds__modes__ErrorSpecs_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 671 "modes.m"
                check_hlds__modes__StateVarWarningSpecs_80 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 667 "modes.m"
              }
#line 666 "modes.m"
            else
#line 662 "modes.m"
              {
#line 662 "modes.m"
                MR_Word check_hlds__modes__ErrorSpec_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__AllErrorSpecs_76, (MR_Integer) 0)));
#line 662 "modes.m"
                MR_Word check_hlds__modes__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__AllErrorSpecs_76, (MR_Integer) 1)));

#line 663 "modes.m"
                {
#line 663 "modes.m"
                  check_hlds__modes__ErrorSpecs_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__ErrorSpecs_79, 0) = ((MR_Box) (check_hlds__modes__ErrorSpec_77));
#line 663 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__ErrorSpecs_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 663 "modes.m"
                }
#line 664 "modes.m"
                {
#line 664 "modes.m"
                  hlds__hlds_pred__proc_info_get_statevar_warnings_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__StateVarWarningSpecs_80);
                }
#line 662 "modes.m"
              }
#line 673 "modes.m"
            {
#line 673 "modes.m"
              check_hlds__mode_info__mode_info_get_warnings_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90, &check_hlds__modes__ModeWarnings_81);
            }
#line 674 "modes.m"
            {
#line 674 "modes.m"
              check_hlds__modes__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 674 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[1]));
#line 674 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 1) = ((MR_Box) (check_hlds__modes__maybe_modecheck_proc_9_p_0_2));
#line 674 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 674 "modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 3) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90));
#line 674 "modes.m"
            }
#line 674 "modes.m"
            {
#line 674 "modes.m"
              check_hlds__modes__WarningSpecs_82 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0, check_hlds__modes__TypeCtorInfo_86_112, check_hlds__modes__V_93_93, check_hlds__modes__ModeWarnings_81);
            }
#line 676 "modes.m"
            {
#line 676 "modes.m"
              check_hlds__modes__V_94_94 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_86_112, check_hlds__modes__WarningSpecs_82, check_hlds__modes__StateVarWarningSpecs_80);
            }
#line 676 "modes.m"
            {
#line 676 "modes.m"
              *check_hlds__modes__Specs_16 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_86_112, check_hlds__modes__ErrorSpecs_79, check_hlds__modes__V_94_94);
            }
#line 676 "modes.m"
            check_hlds__modes__STATE_VARIABLE_ProcInfo_69_95 = check_hlds__modes__ProcInfo0_18;
#line 653 "modes.m"
          }
#line 652 "modes.m"
        else
#line 646 "modes.m"
          {
#line 650 "modes.m"
            {
#line 650 "modes.m"
              check_hlds__modes__STATE_VARIABLE_ProcInfo_69_95 = hlds__hlds_pred__f_109_111_100_101_95_101_114_114_111_114_115_32_58_61_2_f_0(check_hlds__modes__ProcInfo0_18, check_hlds__modes__ModeErrors_75);
            }
#line 651 "modes.m"
            *check_hlds__modes__Specs_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 646 "modes.m"
          }
#line 681 "modes.m"
        {
#line 681 "modes.m"
          parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(check_hlds__modes__ArgInitialInsts_65, check_hlds__modes__ArgFinalInsts_74, &check_hlds__modes__ArgModes_83);
        }
#line 682 "modes.m"
        {
#line 682 "modes.m"
          check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90, check_hlds__modes__STATE_VARIABLE_Changed_30);
        }
#line 683 "modes.m"
        {
#line 683 "modes.m"
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31);
        }
#line 684 "modes.m"
        {
#line 684 "modes.m"
          check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90, &check_hlds__modes__VarSet_84);
        }
#line 687 "modes.m"
        {
#line 687 "modes.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90, &check_hlds__modes__VarTypes_85);
        }
#line 688 "modes.m"
        {
#line 688 "modes.m"
          check_hlds__mode_info__mode_info_get_need_to_requantify_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_64_90, &check_hlds__modes__NeedToRequantify_86);
        }
#line 689 "modes.m"
        {
#line 689 "modes.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__modes__Body_73, check_hlds__modes__STATE_VARIABLE_ProcInfo_69_95, &check_hlds__modes__STATE_VARIABLE_ProcInfo_72_98);
        }
#line 690 "modes.m"
        {
#line 690 "modes.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__modes__VarSet_84, check_hlds__modes__STATE_VARIABLE_ProcInfo_72_98, &check_hlds__modes__STATE_VARIABLE_ProcInfo_73_99);
        }
#line 691 "modes.m"
        {
#line 691 "modes.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__modes__VarTypes_85, check_hlds__modes__STATE_VARIABLE_ProcInfo_73_99, &check_hlds__modes__STATE_VARIABLE_ProcInfo_74_100);
        }
#line 692 "modes.m"
        {
#line 692 "modes.m"
          hlds__hlds_pred__proc_info_set_argmodes_3_p_0(check_hlds__modes__ArgModes_83, check_hlds__modes__STATE_VARIABLE_ProcInfo_74_100, &check_hlds__modes__STATE_VARIABLE_ProcInfo_75_101);
        }
#line 695 "modes.m"
        if ((check_hlds__modes__NeedToRequantify_86 == (MR_Integer) 1))
#line 694 "modes.m"
          check_hlds__modes__ProcInfo_20 = check_hlds__modes__STATE_VARIABLE_ProcInfo_75_101;
#line 695 "modes.m"
        else
#line 696 "modes.m"
          {
#line 697 "modes.m"
            {
#line 697 "modes.m"
              hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ProcInfo_75_101, &check_hlds__modes__ProcInfo_20);
            }
#line 696 "modes.m"
          }
#line 576 "modes.m"
        {
#line 576 "modes.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31, &check_hlds__modes__Preds1_21);
        }
#line 6281 "check_hlds.modes.c"
        check_hlds__modes__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 6283 "check_hlds.modes.c"
        check_hlds__modes__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 577 "modes.m"
        {
#line 577 "modes.m"
          mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_34_34, check_hlds__modes__TypeCtorInfo_35_35, check_hlds__modes__Preds1_21, ((MR_Box) (check_hlds__modes__PredId_11)), &check_hlds__modes__conv2_PredInfo1_22);
        }
#line 577 "modes.m"
        check_hlds__modes__PredInfo1_22 = ((MR_Word) check_hlds__modes__conv2_PredInfo1_22);
#line 578 "modes.m"
        {
#line 578 "modes.m"
          hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__modes__PredInfo1_22, &check_hlds__modes__Procs1_23);
        }
#line 579 "modes.m"
        {
#line 579 "modes.m"
          mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (check_hlds__modes__ProcId_10)), ((MR_Box) (check_hlds__modes__ProcInfo_20)), check_hlds__modes__Procs1_23, &check_hlds__modes__Procs_24);
        }
#line 580 "modes.m"
        {
#line 580 "modes.m"
          hlds__hlds_pred__pred_info_set_procedures_3_p_0(check_hlds__modes__Procs_24, check_hlds__modes__PredInfo1_22, &check_hlds__modes__PredInfo_25);
        }
#line 581 "modes.m"
        {
#line 581 "modes.m"
          mercury__map__set_4_p_0(check_hlds__modes__TypeCtorInfo_34_34, check_hlds__modes__TypeCtorInfo_35_35, ((MR_Box) (check_hlds__modes__PredId_11)), ((MR_Box) (check_hlds__modes__PredInfo_25)), check_hlds__modes__Preds1_21, &check_hlds__modes__Preds_26);
        }
#line 582 "modes.m"
        {
#line 582 "modes.m"
          hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__Preds_26, check_hlds__modes__STATE_VARIABLE_ModuleInfo_31_31, check_hlds__modes__STATE_VARIABLE_ModuleInfo_28);
#line 582 "modes.m"
          return;
        }
#line 573 "modes.m"
      }
#line 565 "modes.m"
  }
#line 560 "modes.m"
}

#line 531 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_procs_10_p_0(
#line 531 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 531 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 531 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_3,
#line 531 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_4,
#line 531 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5,
#line 531 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_6,
#line 531 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_7,
#line 531 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_8,
#line 531 "modes.m"
  MR_Word check_hlds__modes__HeadVar__9_9,
#line 531 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__10_10)
#line 531 "modes.m"
{
#line 536 "modes.m"
  while (MR_TRUE)
#line 536 "modes.m"
    {
#line 536 "modes.m"
      /* tailcall optimized into a loop */
#line 536 "modes.m"
      {
#line 536 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 536 "modes.m"
        if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 536 "modes.m"
          {
#line 536 "modes.m"
            *check_hlds__modes__HeadVar__10_10 = check_hlds__modes__HeadVar__9_9;
#line 536 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Changed_8 = check_hlds__modes__STATE_VARIABLE_Changed_0_7;
#line 536 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_ModuleInfo_6 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5;
#line 536 "modes.m"
          }
#line 536 "modes.m"
        else
#line 538 "modes.m"
          {
#line 538 "modes.m"
            MR_Integer check_hlds__modes__ProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 538 "modes.m"
            MR_Word check_hlds__modes__ProcIds_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 538 "modes.m"
            MR_Word check_hlds__modes__ProcSpecs_31;
#line 538 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_38_38;
#line 538 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Changed_39_39;
#line 538 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_SpecsAcc_40_40;

#line 540 "modes.m"
            {
#line 540 "modes.m"
              check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_23, check_hlds__modes__HeadVar__2_2, check_hlds__modes__WhatToCheck_3, check_hlds__modes__MayChangeCalledProc_4, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_38_38, check_hlds__modes__STATE_VARIABLE_Changed_0_7, &check_hlds__modes__STATE_VARIABLE_Changed_39_39, &check_hlds__modes__ProcSpecs_31);
            }
#line 542 "modes.m"
            {
#line 542 "modes.m"
              parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0(check_hlds__modes__ProcSpecs_31, check_hlds__modes__HeadVar__9_9, &check_hlds__modes__STATE_VARIABLE_SpecsAcc_40_40);
            }
#line 544 "modes.m"
            /* direct tailcall eliminated */
#line 544 "modes.m"
            {
#line 544 "modes.m"
              MR_Word check_hlds__modes__HeadVar__1__tmp_copy_1 = check_hlds__modes__ProcIds_24;
#line 544 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_38_38;
#line 544 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_7 = check_hlds__modes__STATE_VARIABLE_Changed_39_39;
#line 544 "modes.m"
              MR_Word check_hlds__modes__HeadVar__9__tmp_copy_9 = check_hlds__modes__STATE_VARIABLE_SpecsAcc_40_40;

#line 544 "modes.m"
              check_hlds__modes__HeadVar__9_9 = check_hlds__modes__HeadVar__9__tmp_copy_9;
#line 544 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Changed_0_7 = check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_7;
#line 544 "modes.m"
              check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5;
#line 544 "modes.m"
              check_hlds__modes__HeadVar__1_1 = check_hlds__modes__HeadVar__1__tmp_copy_1;
#line 544 "modes.m"
            }
#line 544 "modes.m"
            continue;
#line 538 "modes.m"
          }
#line 536 "modes.m"
      }
#line 536 "modes.m"
      break;
#line 536 "modes.m"
    }
#line 531 "modes.m"
}

#line 506 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_1(
#line 506 "modes.m"
  void * check_hlds__modes__env_ptr_arg)
#line 506 "modes.m"
{
#line 506 "modes.m"
  {
#line 506 "modes.m"
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * check_hlds__modes__env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) check_hlds__modes__env_ptr_arg;

#line 506 "modes.m"
    MR_builtin_longjmp((check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__commit_0, 1);
#line 506 "modes.m"
  }
#line 506 "modes.m"
}

#line 506 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_3(
#line 506 "modes.m"
  void * check_hlds__modes__env_ptr_arg)
#line 506 "modes.m"
{
#line 506 "modes.m"
  {
#line 506 "modes.m"
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * check_hlds__modes__env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) check_hlds__modes__env_ptr_arg;

#line 506 "modes.m"
    (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0___ProcId_73 = ((MR_Integer) (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv2__ProcId_73);
#line 506 "modes.m"
    (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcInfo_81 = ((MR_Word) (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv1_ProcInfo_81);
#line 506 "modes.m"
    {
#line 506 "modes.m"
      check_hlds__modes__maybe_modecheck_pred_9_p_0_2(check_hlds__modes__env_ptr);
#line 506 "modes.m"
      return;
    }
#line 506 "modes.m"
  }
#line 506 "modes.m"
}

#line 506 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_2(
#line 506 "modes.m"
  void * check_hlds__modes__env_ptr_arg)
#line 506 "modes.m"
{
#line 506 "modes.m"
  {
#line 506 "modes.m"
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * check_hlds__modes__env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) check_hlds__modes__env_ptr_arg;

#line 506 "modes.m"
    {
#line 507 "modes.m"
      MR_Word check_hlds__modes__V_89_89;

#line 507 "modes.m"
      {
#line 507 "modes.m"
        hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcInfo_81, &(check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__V_84_84);
      }
#line 507 "modes.m"
      (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__V_84_84)) == (MR_mktag((MR_Integer) 1)));
#line 507 "modes.m"
      if ((check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
#line 507 "modes.m"
        {
#line 507 "modes.m"
          check_hlds__modes__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__V_84_84, (MR_Integer) 0)));
#line 507 "modes.m"
          {
#line 507 "modes.m"
            check_hlds__modes__maybe_modecheck_pred_9_p_0_1(check_hlds__modes__env_ptr);
#line 507 "modes.m"
            return;
          }
#line 507 "modes.m"
        }
#line 506 "modes.m"
    }
#line 506 "modes.m"
  }
#line 506 "modes.m"
}

#line 506 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_4(
#line 506 "modes.m"
  void * check_hlds__modes__env_ptr_arg)
#line 506 "modes.m"
{
#line 506 "modes.m"
  {
#line 506 "modes.m"
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * check_hlds__modes__env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) check_hlds__modes__env_ptr_arg;

#line 506 "modes.m"
    if (MR_builtin_setjmp((check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__commit_0) == 0)
#line 506 "modes.m"
      {
#line 506 "modes.m"
        {
#line 506 "modes.m"
          {
#line 506 "modes.m"
            mercury__map__member_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcTable_71, &(check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv2__ProcId_73, &(check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv1_ProcInfo_81, check_hlds__modes__maybe_modecheck_pred_9_p_0_3, check_hlds__modes__env_ptr);
          }
#line 506 "modes.m"
        }
#line 506 "modes.m"
        (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = MR_FALSE;
#line 506 "modes.m"
      }
#line 506 "modes.m"
    else
#line 506 "modes.m"
      (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = MR_TRUE;
#line 506 "modes.m"
  }
#line 506 "modes.m"
}

#line 429 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0(
#line 429 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_10,
#line 429 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_11,
#line 429 "modes.m"
  MR_Word check_hlds__modes__PredId_12,
#line 429 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25,
#line 429 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_26,
#line 429 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_27,
#line 429 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_28,
#line 429 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_29,
#line 429 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_30)
#line 429 "modes.m"
{
#line 429 "modes.m"
  {
#line 429 "modes.m"
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s check_hlds__modes__env;

#line 434 "modes.m"
    {
#line 434 "modes.m"
      MR_Word check_hlds__modes__Preds0_16;
#line 434 "modes.m"
      MR_Word check_hlds__modes__PredInfo0_17;
#line 436 "modes.m"
      MR_Box check_hlds__modes__conv0_PredInfo0_17;

#line 435 "modes.m"
      {
#line 435 "modes.m"
        hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25, &check_hlds__modes__Preds0_16);
      }
#line 436 "modes.m"
      {
#line 436 "modes.m"
        mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__modes__Preds0_16, ((MR_Box) (check_hlds__modes__PredId_12)), &check_hlds__modes__conv0_PredInfo0_17);
      }
#line 436 "modes.m"
      check_hlds__modes__PredInfo0_17 = ((MR_Word) check_hlds__modes__conv0_PredInfo0_17);
#line 414 "modes.m"
      {
#line 414 "modes.m"
        (check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__modes__PredInfo0_17);
      }
#line 417 "modes.m"
      if (!((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded))
#line 417 "modes.m"
        {
#line 415 "modes.m"
          {
#line 415 "modes.m"
            (check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(check_hlds__modes__PredInfo0_17);
          }
#line 417 "modes.m"
          if (!((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded))
#line 420 "modes.m"
            {
#line 420 "modes.m"
              MR_Word check_hlds__modes__PredMarkers_46;

#line 420 "modes.m"
              {
#line 420 "modes.m"
                hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modes__PredInfo0_17, &check_hlds__modes__PredMarkers_46);
              }
#line 421 "modes.m"
              {
#line 421 "modes.m"
                (check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__PredMarkers_46, (MR_Integer) 9);
              }
#line 420 "modes.m"
            }
#line 417 "modes.m"
        }
#line 6652 "check_hlds.modes.c"
      if ((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
#line 6654 "check_hlds.modes.c"
        {
#line 439 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_26 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25;
#line 439 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Changed_28 = check_hlds__modes__STATE_VARIABLE_Changed_0_27;
#line 439 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Specs_30 = check_hlds__modes__STATE_VARIABLE_Specs_0_29;
#line 6662 "check_hlds.modes.c"
        }
#line 6664 "check_hlds.modes.c"
      else
#line 6666 "check_hlds.modes.c"
        {
#line 6668 "check_hlds.modes.c"
          MR_Word check_hlds__modes__TypeCtorInfo_43_43;
#line 6670 "check_hlds.modes.c"
          MR_Word check_hlds__modes__ThisPredDeclSpecs_20;
#line 6672 "check_hlds.modes.c"
          MR_Word check_hlds__modes__ThisPredProcSpecs_21;
#line 6674 "check_hlds.modes.c"
          MR_Word check_hlds__modes__Globals_22;
#line 6676 "check_hlds.modes.c"
          MR_Word check_hlds__modes__ContainsError_23;
#line 6678 "check_hlds.modes.c"
          MR_Word check_hlds__modes__Statistics_24;
#line 6680 "check_hlds.modes.c"
          MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33;
#line 6682 "check_hlds.modes.c"
          MR_Word check_hlds__modes__V_36_36;
#line 6684 "check_hlds.modes.c"
          MR_Word check_hlds__modes__ProcIds_75;
#line 6686 "check_hlds.modes.c"
          MR_Word check_hlds__modes__SpecsAcc_76;
#line 6688 "check_hlds.modes.c"
          MR_Word check_hlds__modes__V_80_80;
#line 442 "modes.m"
          MR_Word check_hlds__modes__Markers_55;
#line 442 "modes.m"
          MR_String check_hlds__modes__Msg_56;

#line 472 "modes.m"
          {
#line 472 "modes.m"
            hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modes__PredInfo0_17, &check_hlds__modes__Markers_55);
          }
#line 473 "modes.m"
          {
#line 473 "modes.m"
            (check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_55, (MR_Integer) 3);
          }
#line 481 "modes.m"
          if ((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
#line 477 "modes.m"
            if ((check_hlds__modes__WhatToCheck_10 == (MR_Integer) 0))
#line 476 "modes.m"
              check_hlds__modes__Msg_56 = (MR_String) "% Mode-analysing ";
#line 477 "modes.m"
            else
#line 479 "modes.m"
              check_hlds__modes__Msg_56 = (MR_String) "% Unique-mode-analysing ";
#line 481 "modes.m"
          else
#line 485 "modes.m"
            if ((check_hlds__modes__WhatToCheck_10 == (MR_Integer) 0))
#line 484 "modes.m"
              check_hlds__modes__Msg_56 = (MR_String) "% Mode-checking ";
#line 485 "modes.m"
            else
#line 487 "modes.m"
              check_hlds__modes__Msg_56 = (MR_String) "% Unique-mode-checking ";
#line 490 "modes.m"
          {
#line 490 "modes.m"
            hlds__passes_aux__write_pred_progress_message_5_p_0(check_hlds__modes__Msg_56, check_hlds__modes__PredId_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25);
          }
#line 517 "modes.m"
          if ((check_hlds__modes__WhatToCheck_10 == (MR_Integer) 0))
#line 502 "modes.m"
            {
#line 503 "modes.m"
              {
#line 503 "modes.m"
                hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__modes__PredInfo0_17, &(check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcTable_71);
              }
#line 506 "modes.m"
              {
#line 506 "modes.m"
                check_hlds__modes__maybe_modecheck_pred_9_p_0_4(&check_hlds__modes__env);
              }
#line 512 "modes.m"
              if ((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
#line 511 "modes.m"
                check_hlds__modes__ThisPredDeclSpecs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 512 "modes.m"
              else
#line 514 "modes.m"
                {
#line 514 "modes.m"
                  check_hlds__modes__ThisPredDeclSpecs_20 = check_hlds__mode_errors__maybe_report_error_no_modes_3_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__modes__PredId_12, check_hlds__modes__PredInfo0_17);
                }
#line 502 "modes.m"
            }
#line 517 "modes.m"
          else
#line 519 "modes.m"
            check_hlds__modes__ThisPredDeclSpecs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 524 "modes.m"
          {
#line 524 "modes.m"
            check_hlds__modes__ProcIds_75 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__modes__PredInfo0_17);
          }
#line 525 "modes.m"
          {
#line 525 "modes.m"
            check_hlds__modes__V_80_80 = parse_tree__error_util__init_error_spec_accumulator_0_f_0();
          }
#line 525 "modes.m"
          {
#line 525 "modes.m"
            check_hlds__modes__modecheck_procs_10_p_0(check_hlds__modes__ProcIds_75, check_hlds__modes__PredId_12, check_hlds__modes__WhatToCheck_10, check_hlds__modes__MayChangeCalledProc_11, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__modes__STATE_VARIABLE_Changed_0_27, check_hlds__modes__STATE_VARIABLE_Changed_28, check_hlds__modes__V_80_80, &check_hlds__modes__SpecsAcc_76);
          }
#line 527 "modes.m"
          {
#line 527 "modes.m"
            check_hlds__modes__ThisPredProcSpecs_21 = parse_tree__error_util__error_spec_accumulator_to_list_1_f_0(check_hlds__modes__SpecsAcc_76);
          }
#line 6781 "check_hlds.modes.c"
          check_hlds__modes__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 449 "modes.m"
          {
#line 449 "modes.m"
            check_hlds__modes__V_36_36 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_43_43, check_hlds__modes__ThisPredProcSpecs_21, check_hlds__modes__STATE_VARIABLE_Specs_0_29);
          }
#line 449 "modes.m"
          {
#line 449 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Specs_30 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_43_43, check_hlds__modes__ThisPredDeclSpecs_20, check_hlds__modes__V_36_36);
          }
#line 453 "modes.m"
          {
#line 453 "modes.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33, &check_hlds__modes__Globals_22);
          }
#line 454 "modes.m"
          {
#line 454 "modes.m"
            check_hlds__modes__ContainsError_23 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__modes__Globals_22, check_hlds__modes__ThisPredProcSpecs_21);
          }
#line 458 "modes.m"
          if ((check_hlds__modes__ContainsError_23 == (MR_Integer) 0))
#line 459 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_ModuleInfo_26 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33;
#line 458 "modes.m"
          else
#line 457 "modes.m"
            {
#line 457 "modes.m"
              hlds__hlds_module__module_info_remove_predid_3_p_0(check_hlds__modes__PredId_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__modes__STATE_VARIABLE_ModuleInfo_26);
            }
#line 462 "modes.m"
          {
#line 462 "modes.m"
            libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_22, (MR_Integer) 55, &check_hlds__modes__Statistics_24);
          }
#line 464 "modes.m"
          {
#line 464 "modes.m"
            libs__file_util__maybe_report_stats_3_p_0(check_hlds__modes__Statistics_24);
#line 464 "modes.m"
            return;
          }
#line 6826 "check_hlds.modes.c"
        }
#line 434 "modes.m"
    }
#line 429 "modes.m"
  }
#line 429 "modes.m"
}

#line 398 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_proc_body_4_p_0(
#line 398 "modes.m"
  MR_Word check_hlds__modes__OldProcTable_5,
#line 398 "modes.m"
  MR_Integer check_hlds__modes__ProcId_6,
#line 398 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ProcTable_0_12,
#line 398 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ProcTable_13)
#line 398 "modes.m"
{
#line 401 "modes.m"
  {
#line 401 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 401 "modes.m"
    MR_Word check_hlds__modes__TypeCtorInfo_15_15 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 401 "modes.m"
    MR_Word check_hlds__modes__TypeCtorInfo_16_16 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 401 "modes.m"
    MR_Word check_hlds__modes__OldProcInfo_8;
#line 401 "modes.m"
    MR_Word check_hlds__modes__OldProcBody_9;
#line 401 "modes.m"
    MR_Word check_hlds__modes__ProcInfo0_10;
#line 401 "modes.m"
    MR_Word check_hlds__modes__ProcInfo_11;
#line 402 "modes.m"
    MR_Box check_hlds__modes__conv0_OldProcInfo_8;
#line 404 "modes.m"
    MR_Box check_hlds__modes__conv1_ProcInfo0_10;

#line 402 "modes.m"
    {
#line 402 "modes.m"
      mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_15_15, check_hlds__modes__TypeCtorInfo_16_16, check_hlds__modes__OldProcTable_5, ((MR_Box) (check_hlds__modes__ProcId_6)), &check_hlds__modes__conv0_OldProcInfo_8);
    }
#line 402 "modes.m"
    check_hlds__modes__OldProcInfo_8 = ((MR_Word) check_hlds__modes__conv0_OldProcInfo_8);
#line 403 "modes.m"
    {
#line 403 "modes.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__modes__OldProcInfo_8, &check_hlds__modes__OldProcBody_9);
    }
#line 404 "modes.m"
    {
#line 404 "modes.m"
      mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_15_15, check_hlds__modes__TypeCtorInfo_16_16, check_hlds__modes__STATE_VARIABLE_ProcTable_0_12, ((MR_Box) (check_hlds__modes__ProcId_6)), &check_hlds__modes__conv1_ProcInfo0_10);
    }
#line 404 "modes.m"
    check_hlds__modes__ProcInfo0_10 = ((MR_Word) check_hlds__modes__conv1_ProcInfo0_10);
#line 405 "modes.m"
    {
#line 405 "modes.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__modes__OldProcBody_9, check_hlds__modes__ProcInfo0_10, &check_hlds__modes__ProcInfo_11);
    }
#line 406 "modes.m"
    {
#line 406 "modes.m"
      mercury__map__set_4_p_0(check_hlds__modes__TypeCtorInfo_15_15, check_hlds__modes__TypeCtorInfo_16_16, ((MR_Box) (check_hlds__modes__ProcId_6)), ((MR_Box) (check_hlds__modes__ProcInfo_11)), check_hlds__modes__STATE_VARIABLE_ProcTable_0_12, check_hlds__modes__STATE_VARIABLE_ProcTable_13);
#line 406 "modes.m"
      return;
    }
#line 401 "modes.m"
  }
#line 398 "modes.m"
}

#line 388 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0_1(
#line 388 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 388 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 388 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 388 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3)
#line 388 "modes.m"
{
#line 388 "modes.m"
  {
#line 388 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 388 "modes.m"
    MR_Word check_hlds__modes__conv2_STATE_VARIABLE_ProcTable_13;

#line 388 "modes.m"
    {
#line 388 "modes.m"
      check_hlds__modes__copy_proc_body_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Integer) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2), &check_hlds__modes__conv2_STATE_VARIABLE_ProcTable_13);
    }
#line 388 "modes.m"
    *check_hlds__modes__wrapper_arg_3 = ((MR_Box) (check_hlds__modes__conv2_STATE_VARIABLE_ProcTable_13));
#line 388 "modes.m"
  }
#line 388 "modes.m"
}

#line 370 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0(
#line 370 "modes.m"
  MR_Word check_hlds__modes__OldPredTable_5,
#line 370 "modes.m"
  MR_Word check_hlds__modes__PredId_6,
#line 370 "modes.m"
  MR_Word check_hlds__modes__PredTable0_7,
#line 370 "modes.m"
  MR_Word * check_hlds__modes__PredTable_8)
#line 370 "modes.m"
{
#line 373 "modes.m"
  {
#line 373 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 373 "modes.m"
    MR_Word check_hlds__modes__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 373 "modes.m"
    MR_Word check_hlds__modes__TypeCtorInfo_20_20 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 373 "modes.m"
    MR_Word check_hlds__modes__PredInfo0_9;
#line 374 "modes.m"
    MR_Box check_hlds__modes__conv0_PredInfo0_9;
#line 379 "modes.m"
    MR_Word check_hlds__modes__Markers_10;

#line 374 "modes.m"
    {
#line 374 "modes.m"
      mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_19_19, check_hlds__modes__TypeCtorInfo_20_20, check_hlds__modes__PredTable0_7, ((MR_Box) (check_hlds__modes__PredId_6)), &check_hlds__modes__conv0_PredInfo0_9);
    }
#line 374 "modes.m"
    check_hlds__modes__PredInfo0_9 = ((MR_Word) check_hlds__modes__conv0_PredInfo0_9);
#line 379 "modes.m"
    {
#line 379 "modes.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modes__PredInfo0_9, &check_hlds__modes__Markers_10);
    }
#line 380 "modes.m"
    {
#line 380 "modes.m"
      check_hlds__modes__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_10, (MR_Integer) 9);
    }
#line 383 "modes.m"
    if (check_hlds__modes__succeeded)
#line 382 "modes.m"
      *check_hlds__modes__PredTable_8 = check_hlds__modes__PredTable0_7;
#line 383 "modes.m"
    else
#line 384 "modes.m"
      {
#line 384 "modes.m"
        MR_Word check_hlds__modes__TypeCtorInfo_21_21;
#line 384 "modes.m"
        MR_Word check_hlds__modes__ProcTable0_11;
#line 384 "modes.m"
        MR_Word check_hlds__modes__OldPredInfo_12;
#line 384 "modes.m"
        MR_Word check_hlds__modes__OldProcTable_13;
#line 384 "modes.m"
        MR_Word check_hlds__modes__OldProcIds_14;
#line 384 "modes.m"
        MR_Word check_hlds__modes__ProcTable_15;
#line 384 "modes.m"
        MR_Word check_hlds__modes__PredInfo_16;
#line 384 "modes.m"
        MR_Word check_hlds__modes__V_18_18;
#line 385 "modes.m"
        MR_Box check_hlds__modes__conv1_OldPredInfo_12;
#line 388 "modes.m"
        MR_Box check_hlds__modes__conv3_ProcTable_15;

#line 384 "modes.m"
        {
#line 384 "modes.m"
          hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__modes__PredInfo0_9, &check_hlds__modes__ProcTable0_11);
        }
#line 385 "modes.m"
        {
#line 385 "modes.m"
          mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_19_19, check_hlds__modes__TypeCtorInfo_20_20, check_hlds__modes__OldPredTable_5, ((MR_Box) (check_hlds__modes__PredId_6)), &check_hlds__modes__conv1_OldPredInfo_12);
        }
#line 385 "modes.m"
        check_hlds__modes__OldPredInfo_12 = ((MR_Word) check_hlds__modes__conv1_OldPredInfo_12);
#line 386 "modes.m"
        {
#line 386 "modes.m"
          hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__modes__OldPredInfo_12, &check_hlds__modes__OldProcTable_13);
        }
#line 7028 "check_hlds.modes.c"
        check_hlds__modes__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 387 "modes.m"
        {
#line 387 "modes.m"
          mercury__map__keys_2_p_0(check_hlds__modes__TypeCtorInfo_21_21, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__modes__OldProcTable_13, &check_hlds__modes__OldProcIds_14);
        }
#line 388 "modes.m"
        {
#line 388 "modes.m"
          check_hlds__modes__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 388 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_18_18, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_5[1]));
#line 388 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_18_18, 1) = ((MR_Box) (check_hlds__modes__copy_pred_body_4_p_0_1));
#line 388 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 388 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_18_18, 3) = ((MR_Box) (check_hlds__modes__OldProcTable_13));
#line 388 "modes.m"
        }
#line 388 "modes.m"
        {
#line 388 "modes.m"
          mercury__list__foldl_4_p_0(check_hlds__modes__TypeCtorInfo_21_21, (MR_Word) &check_hlds__modes_scalar_common_2[1], check_hlds__modes__V_18_18, check_hlds__modes__OldProcIds_14, ((MR_Box) (check_hlds__modes__ProcTable0_11)), &check_hlds__modes__conv3_ProcTable_15);
        }
#line 388 "modes.m"
        check_hlds__modes__ProcTable_15 = ((MR_Word) check_hlds__modes__conv3_ProcTable_15);
#line 390 "modes.m"
        {
#line 390 "modes.m"
          hlds__hlds_pred__pred_info_set_procedures_3_p_0(check_hlds__modes__ProcTable_15, check_hlds__modes__PredInfo0_9, &check_hlds__modes__PredInfo_16);
        }
#line 391 "modes.m"
        {
#line 391 "modes.m"
          mercury__map__set_4_p_0(check_hlds__modes__TypeCtorInfo_19_19, check_hlds__modes__TypeCtorInfo_20_20, ((MR_Box) (check_hlds__modes__PredId_6)), ((MR_Box) (check_hlds__modes__PredInfo_16)), check_hlds__modes__PredTable0_7, check_hlds__modes__PredTable_8);
#line 391 "modes.m"
          return;
        }
#line 384 "modes.m"
      }
#line 373 "modes.m"
  }
#line 370 "modes.m"
}

#line 362 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_2(
#line 362 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 362 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 362 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 362 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3)
#line 362 "modes.m"
{
#line 362 "modes.m"
  {
#line 362 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 362 "modes.m"
    MR_Word check_hlds__modes__conv6_PredTable_8;

#line 362 "modes.m"
    {
#line 362 "modes.m"
      check_hlds__modes__copy_pred_body_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2), &check_hlds__modes__conv6_PredTable_8);
    }
#line 362 "modes.m"
    *check_hlds__modes__wrapper_arg_3 = ((MR_Box) (check_hlds__modes__conv6_PredTable_8));
#line 362 "modes.m"
  }
#line 362 "modes.m"
}

#line 259 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_1(
#line 259 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 259 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 259 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 259 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3,
#line 259 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_4,
#line 259 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_5,
#line 259 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_6,
#line 259 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_7)
#line 259 "modes.m"
{
#line 259 "modes.m"
  {
#line 259 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 259 "modes.m"
    MR_Word check_hlds__modes__conv2_STATE_VARIABLE_ModuleInfo_26;
#line 259 "modes.m"
    MR_Word check_hlds__modes__conv1_STATE_VARIABLE_Changed_28;
#line 259 "modes.m"
    MR_Word check_hlds__modes__conv0_STATE_VARIABLE_Specs_30;

#line 259 "modes.m"
    {
#line 259 "modes.m"
      check_hlds__modes__maybe_modecheck_pred_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2), &check_hlds__modes__conv2_STATE_VARIABLE_ModuleInfo_26, ((MR_Word) check_hlds__modes__wrapper_arg_4), &check_hlds__modes__conv1_STATE_VARIABLE_Changed_28, ((MR_Word) check_hlds__modes__wrapper_arg_6), &check_hlds__modes__conv0_STATE_VARIABLE_Specs_30);
    }
#line 259 "modes.m"
    *check_hlds__modes__wrapper_arg_3 = ((MR_Box) (check_hlds__modes__conv2_STATE_VARIABLE_ModuleInfo_26));
#line 259 "modes.m"
    *check_hlds__modes__wrapper_arg_5 = ((MR_Box) (check_hlds__modes__conv1_STATE_VARIABLE_Changed_28));
#line 259 "modes.m"
    *check_hlds__modes__wrapper_arg_7 = ((MR_Box) (check_hlds__modes__conv0_STATE_VARIABLE_Specs_30));
#line 259 "modes.m"
  }
#line 259 "modes.m"
}

#line 247 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0(
#line 247 "modes.m"
  MR_Word check_hlds__modes__PredIds_9,
#line 247 "modes.m"
  MR_Integer check_hlds__modes__MaxIterations_10,
#line 247 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_11,
#line 247 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_12,
#line 247 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31,
#line 247 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_32,
#line 247 "modes.m"
  MR_Word * check_hlds__modes__SafeToContinue_14,
#line 247 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_33)
#line 247 "modes.m"
{
#line 253 "modes.m"
  while (MR_TRUE)
#line 253 "modes.m"
    {
#line 253 "modes.m"
      /* tailcall optimized into a loop */
#line 253 "modes.m"
      {
#line 253 "modes.m"
        MR_bool check_hlds__modes__succeeded;
#line 253 "modes.m"
        MR_Word check_hlds__modes__OldPredTable0_16;
#line 253 "modes.m"
        MR_Word check_hlds__modes__Changed1_17;
#line 253 "modes.m"
        MR_Word check_hlds__modes__OldPredTable_18;
#line 253 "modes.m"
        MR_Word check_hlds__modes__Changed2_19;
#line 253 "modes.m"
        MR_Word check_hlds__modes__QueuedSpecs_20;
#line 253 "modes.m"
        MR_Word check_hlds__modes__Changed_21;
#line 253 "modes.m"
        MR_Word check_hlds__modes__Globals_22;
#line 253 "modes.m"
        MR_Word check_hlds__modes__ErrorsSoFar_23;
#line 253 "modes.m"
        MR_Word check_hlds__modes__V_34_34;
#line 253 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35;
#line 253 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_Specs_38_38;
#line 253 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39;
#line 253 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_Specs_40_40;
#line 259 "modes.m"
        MR_Box check_hlds__modes__conv5_STATE_VARIABLE_ModuleInfo_35_35;
#line 259 "modes.m"
        MR_Box check_hlds__modes__conv4_Changed1_17;
#line 259 "modes.m"
        MR_Box check_hlds__modes__conv3_STATE_VARIABLE_Specs_38_38;

#line 256 "modes.m"
        {
#line 256 "modes.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31, &check_hlds__modes__OldPredTable0_16);
        }
#line 259 "modes.m"
        {
#line 259 "modes.m"
          check_hlds__modes__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 259 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_3[0]));
#line 259 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 1) = ((MR_Box) (check_hlds__modes__modecheck_to_fixpoint_8_p_0_1));
#line 259 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 259 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 3) = ((MR_Box) (check_hlds__modes__WhatToCheck_11));
#line 259 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 4) = ((MR_Box) (check_hlds__modes__MayChangeCalledProc_12));
#line 259 "modes.m"
        }
#line 259 "modes.m"
        {
#line 259 "modes.m"
          mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &check_hlds__modes_scalar_common_1[0], check_hlds__modes__V_34_34, check_hlds__modes__PredIds_9, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31)), &check_hlds__modes__conv5_STATE_VARIABLE_ModuleInfo_35_35, ((MR_Box) ((MR_Integer) 0)), &check_hlds__modes__conv4_Changed1_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__modes__conv3_STATE_VARIABLE_Specs_38_38);
        }
#line 259 "modes.m"
        check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35 = ((MR_Word) check_hlds__modes__conv5_STATE_VARIABLE_ModuleInfo_35_35);
#line 259 "modes.m"
        check_hlds__modes__Changed1_17 = ((MR_Word) check_hlds__modes__conv4_Changed1_17);
#line 259 "modes.m"
        check_hlds__modes__STATE_VARIABLE_Specs_38_38 = ((MR_Word) check_hlds__modes__conv3_STATE_VARIABLE_Specs_38_38);
#line 264 "modes.m"
        {
#line 264 "modes.m"
          check_hlds__modes__modecheck_queued_procs_7_p_0(check_hlds__modes__WhatToCheck_11, check_hlds__modes__OldPredTable0_16, &check_hlds__modes__OldPredTable_18, check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__Changed2_19, &check_hlds__modes__QueuedSpecs_20);
        }
#line 266 "modes.m"
        {
#line 266 "modes.m"
          check_hlds__modes__STATE_VARIABLE_Specs_40_40 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__QueuedSpecs_20, check_hlds__modes__STATE_VARIABLE_Specs_38_38);
        }
#line 267 "modes.m"
        {
#line 267 "modes.m"
          mercury__bool__or_3_p_0(check_hlds__modes__Changed1_17, check_hlds__modes__Changed2_19, &check_hlds__modes__Changed_21);
        }
#line 269 "modes.m"
        {
#line 269 "modes.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__Globals_22);
        }
#line 270 "modes.m"
        {
#line 270 "modes.m"
          check_hlds__modes__ErrorsSoFar_23 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__modes__Globals_22, check_hlds__modes__STATE_VARIABLE_Specs_40_40);
        }
#line 275 "modes.m"
        if ((check_hlds__modes__Changed_21 == (MR_Integer) 0))
#line 272 "modes.m"
          {
#line 274 "modes.m"
            *check_hlds__modes__SafeToContinue_14 = (MR_Integer) 0;
#line 274 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_ModuleInfo_32 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39;
#line 274 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Specs_33 = check_hlds__modes__STATE_VARIABLE_Specs_40_40;
#line 272 "modes.m"
          }
#line 275 "modes.m"
        else
#line 281 "modes.m"
          if ((check_hlds__modes__ErrorsSoFar_23 == (MR_Integer) 0))
#line 288 "modes.m"
            {
#line 283 "modes.m"
              check_hlds__modes__succeeded = (check_hlds__modes__MaxIterations_10 <= (MR_Integer) 1);
#line 288 "modes.m"
              if (check_hlds__modes__succeeded)
#line 285 "modes.m"
                {
#line 285 "modes.m"
                  MR_Word check_hlds__modes__MaxIterSpec_24;
#line 285 "modes.m"
                  MR_Word check_hlds__modes__Globals_73;
#line 285 "modes.m"
                  MR_Integer check_hlds__modes__MaxIterations_74;
#line 285 "modes.m"
                  MR_Word check_hlds__modes__Pieces_75;
#line 285 "modes.m"
                  MR_Word check_hlds__modes__Msg_76;
#line 285 "modes.m"
                  MR_Word check_hlds__modes__V_80_80;
#line 285 "modes.m"
                  MR_Word check_hlds__modes__V_82_82;
#line 285 "modes.m"
                  MR_Word check_hlds__modes__V_85_85;
#line 285 "modes.m"
                  MR_Word check_hlds__modes__V_88_88;
#line 285 "modes.m"
                  MR_Word check_hlds__modes__V_91_91;
#line 285 "modes.m"
                  MR_Word check_hlds__modes__V_94_94;
#line 285 "modes.m"
                  MR_Word check_hlds__modes__V_95_95;
#line 285 "modes.m"
                  MR_Word check_hlds__modes__V_105_105;
#line 285 "modes.m"
                  MR_Word check_hlds__modes__V_106_106;
#line 285 "modes.m"
                  MR_Word check_hlds__modes__V_111_111;

#line 339 "modes.m"
                  {
#line 339 "modes.m"
                    hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__Globals_73);
                  }
#line 340 "modes.m"
                  {
#line 340 "modes.m"
                    libs__globals__lookup_int_option_3_p_0(check_hlds__modes__Globals_73, (MR_Integer) 167, &check_hlds__modes__MaxIterations_74);
                  }
#line 346 "modes.m"
                  {
#line 346 "modes.m"
                    check_hlds__modes__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "modes.m"
                    MR_hl_field(MR_mktag(3), check_hlds__modes__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 346 "modes.m"
                    MR_hl_field(MR_mktag(3), check_hlds__modes__V_95_95, 1) = ((MR_Box) (check_hlds__modes__MaxIterations_74));
#line 346 "modes.m"
                  }
#line 346 "modes.m"
                  {
#line 346 "modes.m"
                    check_hlds__modes__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_94_94, 0) = ((MR_Box) (check_hlds__modes__V_95_95));
#line 346 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[6])));
#line 346 "modes.m"
                  }
#line 345 "modes.m"
                  {
#line 345 "modes.m"
                    check_hlds__modes__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_91_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[34])));
#line 345 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_91_91, 1) = ((MR_Box) (check_hlds__modes__V_94_94));
#line 345 "modes.m"
                  }
#line 344 "modes.m"
                  {
#line 344 "modes.m"
                    check_hlds__modes__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_88_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[33])));
#line 344 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_88_88, 1) = ((MR_Box) (check_hlds__modes__V_91_91));
#line 344 "modes.m"
                  }
#line 343 "modes.m"
                  {
#line 343 "modes.m"
                    check_hlds__modes__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_85_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[32])));
#line 343 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_85_85, 1) = ((MR_Box) (check_hlds__modes__V_88_88));
#line 343 "modes.m"
                  }
#line 342 "modes.m"
                  {
#line 342 "modes.m"
                    check_hlds__modes__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_82_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[31])));
#line 342 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_82_82, 1) = ((MR_Box) (check_hlds__modes__V_85_85));
#line 342 "modes.m"
                  }
#line 342 "modes.m"
                  {
#line 342 "modes.m"
                    check_hlds__modes__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_80_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 342 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_80_80, 1) = ((MR_Box) (check_hlds__modes__V_82_82));
#line 342 "modes.m"
                  }
#line 342 "modes.m"
                  {
#line 342 "modes.m"
                    check_hlds__modes__Pieces_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__Pieces_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[30])));
#line 342 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__Pieces_75, 1) = ((MR_Box) (check_hlds__modes__V_80_80));
#line 342 "modes.m"
                  }
#line 348 "modes.m"
                  {
#line 348 "modes.m"
                    check_hlds__modes__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_106_106, 0) = ((MR_Box) (check_hlds__modes__Pieces_75));
#line 348 "modes.m"
                  }
#line 348 "modes.m"
                  {
#line 348 "modes.m"
                    check_hlds__modes__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_105_105, 0) = ((MR_Box) (check_hlds__modes__V_106_106));
#line 348 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 348 "modes.m"
                  }
#line 348 "modes.m"
                  {
#line 348 "modes.m"
                    check_hlds__modes__Msg_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 348 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__Msg_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 348 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__Msg_76, 1) = ((MR_Box) ((MR_Integer) 1));
#line 348 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__Msg_76, 2) = ((MR_Box) ((MR_Integer) 0));
#line 348 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__Msg_76, 3) = ((MR_Box) (check_hlds__modes__V_105_105));
#line 348 "modes.m"
                  }
#line 349 "modes.m"
                  {
#line 349 "modes.m"
                    check_hlds__modes__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_111_111, 0) = ((MR_Box) (check_hlds__modes__Msg_76));
#line 349 "modes.m"
                    MR_hl_field(MR_mktag(1), check_hlds__modes__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "modes.m"
                  }
#line 349 "modes.m"
                  {
#line 349 "modes.m"
                    check_hlds__modes__MaxIterSpec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 349 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__MaxIterSpec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__MaxIterSpec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_4[0])));
#line 349 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__MaxIterSpec_24, 2) = ((MR_Box) (check_hlds__modes__V_111_111));
#line 349 "modes.m"
                  }
#line 286 "modes.m"
                  {
#line 286 "modes.m"
                    MR_Word base;
#line 286 "modes.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "modes.m"
                    *check_hlds__modes__STATE_VARIABLE_Specs_33 = base;
#line 286 "modes.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modes__MaxIterSpec_24));
#line 286 "modes.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_40_40));
#line 286 "modes.m"
                  }
#line 287 "modes.m"
                  *check_hlds__modes__SafeToContinue_14 = (MR_Integer) 1;
#line 287 "modes.m"
                  *check_hlds__modes__STATE_VARIABLE_ModuleInfo_32 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39;
#line 285 "modes.m"
                }
#line 288 "modes.m"
              else
#line 290 "modes.m"
                {
#line 290 "modes.m"
                  MR_Word check_hlds__modes__DebugModes_25;
#line 290 "modes.m"
                  MR_Integer check_hlds__modes__MaxIterations1_30;
#line 290 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_55_55;

#line 290 "modes.m"
                  {
#line 290 "modes.m"
                    libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_22, (MR_Integer) 58, &check_hlds__modes__DebugModes_25);
                  }
#line 303 "modes.m"
                  if ((check_hlds__modes__DebugModes_25 == (MR_Integer) 0))
#line 304 "modes.m"
                    {
#line 304 "modes.m"
                    }
#line 303 "modes.m"
                  else
#line 292 "modes.m"
                    {
#line 292 "modes.m"
                      MR_Word check_hlds__modes__InferenceSpecs_26;
#line 299 "modes.m"
                      MR_Integer check_hlds__modes___NumWarnings_28;
#line 299 "modes.m"
                      MR_Integer check_hlds__modes___NumErrors_29;

#line 293 "modes.m"
                      {
#line 293 "modes.m"
                        check_hlds__modes__InferenceSpecs_26 = check_hlds__mode_errors__report_mode_inference_messages_3_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, (MR_Integer) 1, check_hlds__modes__PredIds_9);
                      }
#line 297 "modes.m"
                      {
#line 297 "modes.m"
                        mercury__io__write_string_3_p_0((MR_String) "Inferences by current iteration:\n");
                      }
#line 299 "modes.m"
                      {
#line 299 "modes.m"
                        parse_tree__error_util__write_error_specs_8_p_0(check_hlds__modes__InferenceSpecs_26, check_hlds__modes__Globals_22, (MR_Integer) 0, &check_hlds__modes___NumWarnings_28, (MR_Integer) 0, &check_hlds__modes___NumErrors_29);
                      }
#line 301 "modes.m"
                      {
#line 301 "modes.m"
                        mercury__io__write_string_3_p_0((MR_String) "End of inferences.\n");
                      }
#line 292 "modes.m"
                    }
#line 322 "modes.m"
                  if ((check_hlds__modes__WhatToCheck_11 == (MR_Integer) 0))
#line 316 "modes.m"
                    {
#line 316 "modes.m"
                      MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_54_54;

#line 320 "modes.m"
                      {
#line 320 "modes.m"
                        check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_p_0(check_hlds__modes__PredIds_9, check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_54_54);
                      }
#line 321 "modes.m"
                      {
#line 321 "modes.m"
                        check_hlds__clause_to_proc__introduce_exists_casts_3_p_0(check_hlds__modes__PredIds_9, check_hlds__modes__STATE_VARIABLE_ModuleInfo_54_54, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_55_55);
                      }
#line 316 "modes.m"
                    }
#line 322 "modes.m"
                  else
#line 360 "modes.m"
                    {
#line 360 "modes.m"
                      MR_Word check_hlds__modes__PredTable0_118;
#line 360 "modes.m"
                      MR_Word check_hlds__modes__PredTable_119;
#line 360 "modes.m"
                      MR_Word check_hlds__modes__V_120_120;
#line 362 "modes.m"
                      MR_Box check_hlds__modes__conv7_PredTable_119;

#line 361 "modes.m"
                      {
#line 361 "modes.m"
                        hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__PredTable0_118);
                      }
#line 362 "modes.m"
                      {
#line 362 "modes.m"
                        check_hlds__modes__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 362 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_120_120, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_5[0]));
#line 362 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_120_120, 1) = ((MR_Box) (check_hlds__modes__modecheck_to_fixpoint_8_p_0_2));
#line 362 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_120_120, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 362 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_120_120, 3) = ((MR_Box) (check_hlds__modes__OldPredTable_18));
#line 362 "modes.m"
                      }
#line 362 "modes.m"
                      {
#line 362 "modes.m"
                        mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__modes_scalar_common_2[0], check_hlds__modes__V_120_120, check_hlds__modes__PredIds_9, ((MR_Box) (check_hlds__modes__PredTable0_118)), &check_hlds__modes__conv7_PredTable_119);
                      }
#line 362 "modes.m"
                      check_hlds__modes__PredTable_119 = ((MR_Word) check_hlds__modes__conv7_PredTable_119);
#line 363 "modes.m"
                      {
#line 363 "modes.m"
                        hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__PredTable_119, check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_55_55);
                      }
#line 360 "modes.m"
                    }
#line 329 "modes.m"
                  check_hlds__modes__MaxIterations1_30 = (check_hlds__modes__MaxIterations_10 - (MR_Integer) 1);
#line 330 "modes.m"
                  /* direct tailcall eliminated */
#line 330 "modes.m"
                  {
#line 330 "modes.m"
                    MR_Integer check_hlds__modes__MaxIterations__tmp_copy_10 = check_hlds__modes__MaxIterations1_30;
#line 330 "modes.m"
                    MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_31 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_55_55;

#line 330 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_31;
#line 330 "modes.m"
                    check_hlds__modes__MaxIterations_10 = check_hlds__modes__MaxIterations__tmp_copy_10;
#line 330 "modes.m"
                  }
#line 330 "modes.m"
                  continue;
#line 290 "modes.m"
                }
#line 288 "modes.m"
            }
#line 281 "modes.m"
          else
#line 278 "modes.m"
            {
#line 280 "modes.m"
              *check_hlds__modes__SafeToContinue_14 = (MR_Integer) 1;
#line 280 "modes.m"
              *check_hlds__modes__STATE_VARIABLE_ModuleInfo_32 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39;
#line 280 "modes.m"
              *check_hlds__modes__STATE_VARIABLE_Specs_33 = check_hlds__modes__STATE_VARIABLE_Specs_40_40;
#line 278 "modes.m"
            }
#line 253 "modes.m"
      }
#line 253 "modes.m"
      break;
#line 253 "modes.m"
    }
#line 247 "modes.m"
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
#line 1136 "modes.m"
  {
#line 1136 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1140 "modes.m"
    MR_Word check_hlds__modes___NewFinalInsts_12;

#line 1140 "modes.m"
    {
#line 1140 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_7, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts_8, &check_hlds__modes___NewFinalInsts_12, check_hlds__modes__STATE_VARIABLE_Goal_0_13, check_hlds__modes__STATE_VARIABLE_Goal_14, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_15, check_hlds__modes__STATE_VARIABLE_ModeInfo_16);
    }
#line 1136 "modes.m"
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
#line 556 "modes.m"
  {
#line 556 "modes.m"
    MR_bool check_hlds__modes__succeeded;

#line 557 "modes.m"
    {
#line 557 "modes.m"
      check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_9, check_hlds__modes__PredId_10, check_hlds__modes__WhatToCheck_11, check_hlds__modes__MayChangeCalledProc_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_16, check_hlds__modes__STATE_VARIABLE_ModuleInfo_17, (MR_Integer) 0, check_hlds__modes__Changed_15, check_hlds__modes__Specs_14);
#line 557 "modes.m"
      return;
    }
#line 556 "modes.m"
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
#line 551 "modes.m"
  {
#line 551 "modes.m"
    MR_bool check_hlds__modes__succeeded;

#line 557 "modes.m"
    {
#line 557 "modes.m"
      check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_7, check_hlds__modes__PredId_8, (MR_Integer) 0, (MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_13, (MR_Integer) 0, check_hlds__modes__Changed_11, check_hlds__modes__Specs_10);
#line 557 "modes.m"
      return;
    }
#line 551 "modes.m"
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
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_20,
#line 101 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_21,
#line 101 "modes.m"
  MR_Word * check_hlds__modes__SafeToContinue_10,
#line 101 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_22)
#line 101 "modes.m"
{
#line 193 "modes.m"
  {
#line 193 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 193 "modes.m"
    MR_Word check_hlds__modes__PredIds_12;
#line 193 "modes.m"
    MR_Word check_hlds__modes__Globals_13;
#line 193 "modes.m"
    MR_Integer check_hlds__modes__MaxIterations_14;
#line 193 "modes.m"
    MR_Word check_hlds__modes__SafeToContinue0_15;
#line 193 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_23_23;
#line 193 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_25_25;
#line 193 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_Specs_26_26;

#line 194 "modes.m"
    {
#line 194 "modes.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&check_hlds__modes__PredIds_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_20, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_23_23);
    }
#line 195 "modes.m"
    {
#line 195 "modes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_23_23, &check_hlds__modes__Globals_13);
    }
#line 196 "modes.m"
    {
#line 196 "modes.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__modes__Globals_13, (MR_Integer) 167, &check_hlds__modes__MaxIterations_14);
    }
#line 198 "modes.m"
    {
#line 198 "modes.m"
      check_hlds__modes__modecheck_to_fixpoint_8_p_0(check_hlds__modes__PredIds_12, check_hlds__modes__MaxIterations_14, check_hlds__modes__WhatToCheck_7, check_hlds__modes__MayChangeCalledProc_8, check_hlds__modes__STATE_VARIABLE_ModuleInfo_23_23, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_25_25, &check_hlds__modes__SafeToContinue0_15, &check_hlds__modes__STATE_VARIABLE_Specs_26_26);
    }
#line 207 "modes.m"
    if ((check_hlds__modes__WhatToCheck_7 == (MR_Integer) 0))
#line 215 "modes.m"
      if ((check_hlds__modes__SafeToContinue0_15 == (MR_Integer) 0))
#line 216 "modes.m"
        {
#line 216 "modes.m"
          MR_Word check_hlds__modes__DelayPartialInstantiations_17;

#line 217 "modes.m"
          {
#line 217 "modes.m"
            libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_13, (MR_Integer) 273, &check_hlds__modes__DelayPartialInstantiations_17);
          }
#line 238 "modes.m"
          if ((check_hlds__modes__DelayPartialInstantiations_17 == (MR_Integer) 0))
#line 239 "modes.m"
            {
#line 240 "modes.m"
              *check_hlds__modes__SafeToContinue_10 = (MR_Integer) 0;
#line 240 "modes.m"
              *check_hlds__modes__STATE_VARIABLE_ModuleInfo_21 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_25_25;
#line 240 "modes.m"
              *check_hlds__modes__STATE_VARIABLE_Specs_22 = check_hlds__modes__STATE_VARIABLE_Specs_26_26;
#line 239 "modes.m"
            }
#line 238 "modes.m"
          else
#line 220 "modes.m"
            {
#line 220 "modes.m"
              MR_Word check_hlds__modes__ChangedPreds_18;
#line 220 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_28_28;

#line 221 "modes.m"
              {
#line 221 "modes.m"
                check_hlds__delay_partial_inst__delay_partial_inst_preds_4_p_0(check_hlds__modes__PredIds_12, &check_hlds__modes__ChangedPreds_18, check_hlds__modes__STATE_VARIABLE_ModuleInfo_25_25, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_28_28);
              }
#line 224 "modes.m"
              {
#line 224 "modes.m"
                check_hlds__modes__modecheck_to_fixpoint_8_p_0(check_hlds__modes__ChangedPreds_18, check_hlds__modes__MaxIterations_14, check_hlds__modes__WhatToCheck_7, check_hlds__modes__MayChangeCalledProc_8, check_hlds__modes__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__modes__STATE_VARIABLE_ModuleInfo_21, check_hlds__modes__SafeToContinue_10, check_hlds__modes__STATE_VARIABLE_Specs_22);
#line 224 "modes.m"
                return;
              }
#line 220 "modes.m"
            }
#line 216 "modes.m"
        }
#line 215 "modes.m"
      else
#line 210 "modes.m"
        {
#line 210 "modes.m"
          MR_Word check_hlds__modes__InferenceSpecs_37;

#line 211 "modes.m"
          {
#line 211 "modes.m"
            check_hlds__modes__InferenceSpecs_37 = check_hlds__mode_errors__report_mode_inference_messages_3_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_25_25, (MR_Integer) 1, check_hlds__modes__PredIds_12);
          }
#line 213 "modes.m"
          {
#line 213 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__InferenceSpecs_37, check_hlds__modes__STATE_VARIABLE_Specs_26_26);
          }
#line 214 "modes.m"
          *check_hlds__modes__SafeToContinue_10 = (MR_Integer) 1;
#line 214 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_21 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_25_25;
#line 210 "modes.m"
        }
#line 207 "modes.m"
    else
#line 201 "modes.m"
      {
#line 201 "modes.m"
        MR_Word check_hlds__modes__InferenceSpecs_16;
#line 201 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_Specs_34_34;
#line 201 "modes.m"
        MR_Word check_hlds__modes__PredIds_48;

#line 202 "modes.m"
        {
#line 202 "modes.m"
          check_hlds__modes__InferenceSpecs_16 = check_hlds__mode_errors__report_mode_inference_messages_3_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_25_25, (MR_Integer) 0, check_hlds__modes__PredIds_12);
        }
#line 204 "modes.m"
        {
#line 204 "modes.m"
          check_hlds__modes__STATE_VARIABLE_Specs_34_34 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__InferenceSpecs_16, check_hlds__modes__STATE_VARIABLE_Specs_26_26);
        }
#line 1300 "modes.m"
        {
#line 1300 "modes.m"
          hlds__hlds_module__module_info_get_valid_predids_3_p_0(&check_hlds__modes__PredIds_48, check_hlds__modes__STATE_VARIABLE_ModuleInfo_25_25, check_hlds__modes__STATE_VARIABLE_ModuleInfo_21);
        }
#line 1301 "modes.m"
        {
#line 1301 "modes.m"
          check_hlds__modes__pred_check_eval_methods_4_p_0(*check_hlds__modes__STATE_VARIABLE_ModuleInfo_21, check_hlds__modes__PredIds_48, check_hlds__modes__STATE_VARIABLE_Specs_34_34, check_hlds__modes__STATE_VARIABLE_Specs_22);
        }
#line 206 "modes.m"
        *check_hlds__modes__SafeToContinue_10 = check_hlds__modes__SafeToContinue0_15;
#line 201 "modes.m"
      }
#line 193 "modes.m"
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
#line 177 "modes.m"
  {
#line 177 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 177 "modes.m"
    MR_Word check_hlds__modes__ModuleInfo_4;
#line 177 "modes.m"
    MR_Word check_hlds__modes__SafeToContinue_5;
#line 177 "modes.m"
    MR_Word check_hlds__modes__Specs_6;
#line 177 "modes.m"
    MR_Word check_hlds__modes__Globals_7;
#line 179 "modes.m"
    MR_Word check_hlds__modes__Verbose_9;
#line 185 "modes.m"
    MR_Word check_hlds__modes__Statistics_10;

#line 178 "modes.m"
    {
#line 178 "modes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__ModuleInfo0_3, &check_hlds__modes__Globals_7);
    }
#line 180 "modes.m"
    {
#line 180 "modes.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_7, (MR_Integer) 44, &check_hlds__modes__Verbose_9);
    }
#line 181 "modes.m"
    {
#line 181 "modes.m"
      libs__file_util__maybe_write_string_4_p_0(check_hlds__modes__Verbose_9, (MR_String) "% Mode-checking clauses...\n");
    }
#line 183 "modes.m"
    {
#line 183 "modes.m"
      check_hlds__modes__check_pred_modes_6_p_0((MR_Integer) 0, (MR_Integer) 0, check_hlds__modes__ModuleInfo0_3, &check_hlds__modes__ModuleInfo_4, &check_hlds__modes__SafeToContinue_5, &check_hlds__modes__Specs_6);
    }
#line 177 "modes.m"
    {
#line 177 "modes.m"
      MR_Tuple base;
#line 177 "modes.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 177 "modes.m"
      *check_hlds__modes__HeadVar__2_2 = base;
#line 177 "modes.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__ModuleInfo_4));
#line 177 "modes.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__SafeToContinue_5));
#line 177 "modes.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modes__Specs_6));
#line 177 "modes.m"
    }
#line 186 "modes.m"
    {
#line 186 "modes.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_7, (MR_Integer) 54, &check_hlds__modes__Statistics_10);
    }
#line 187 "modes.m"
    {
#line 187 "modes.m"
      libs__file_util__maybe_report_stats_3_p_0(check_hlds__modes__Statistics_10);
#line 187 "modes.m"
      return;
    }
#line 177 "modes.m"
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
