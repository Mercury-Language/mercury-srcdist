/*
** Automatically generated from `modes.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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
#include "hlds.status.mih"
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



#line 493 "modes.m"
struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s {
#line 498 "modes.m"
  MR_bool check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded;
#line 566 "modes.m"
  MR_Word check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcTable_71;
#line 570 "modes.m"
  jmp_buf check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__commit_0;
#line 570 "modes.m"
  MR_Word check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcInfo_81;
#line 570 "modes.m"
  MR_Word check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__V_84_84;
#line 570 "modes.m"
  MR_Integer check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0___ProcId_73;
#line 570 "modes.m"
  MR_Box check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv2__ProcId_73;
#line 570 "modes.m"
  MR_Box check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv1_ProcInfo_81;
#line 493 "modes.m"
};


#line 187 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 190 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 193 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 196 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 199 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 202 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 205 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 208 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 211 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 214 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 217 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 220 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_0[1];

#line 223 "check_hlds.modes.c"
static const MR_DuFunctorDesc check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0;

#line 226 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0;

#line 229 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_1[3];

#line 232 "check_hlds.modes.c"
static const MR_DuFunctorDesc check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1;

#line 235 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_0[1];

#line 238 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_1[1];

#line 241 "check_hlds.modes.c"
static const MR_DuPtagLayout check_hlds__modes__check_hlds__modes__du_ptag_ordered_clause_form_0[2];

#line 244 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_name_ordered_clause_form_0[2];

#line 247 "check_hlds.modes.c"
static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_clause_form_0[2];

#line 250 "check_hlds.modes.c"
static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_0;

#line 253 "check_hlds.modes.c"
static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_1;

#line 256 "check_hlds.modes.c"
static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_value_ordered_modes_safe_to_continue_0[2];

#line 259 "check_hlds.modes.c"
static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_name_ordered_modes_safe_to_continue_0[2];

#line 262 "check_hlds.modes.c"
static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_modes_safe_to_continue_0[2];

#line 265 "check_hlds.modes.c"
static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0_10001(
#line 268 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 270 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2);

#line 273 "check_hlds.modes.c"
static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0_10001(
#line 276 "check_hlds.modes.c"
  MR_Box * check_hlds__modes__wrapper_arg_1,
#line 278 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 280 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_3);

#line 283 "check_hlds.modes.c"
static MR_bool MR_CALL 
check_hlds__modes____Unify____modes_safe_to_continue_0_0_10001(
#line 286 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 288 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2);

#line 291 "check_hlds.modes.c"
static void MR_CALL 
check_hlds__modes____Compare____modes_safe_to_continue_0_0_10001(
#line 294 "check_hlds.modes.c"
  MR_Box * check_hlds__modes__wrapper_arg_1,
#line 296 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 298 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_3);

#line 1080 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1080__1_2_p_0(
#line 1080 "modes.m"
  MR_Word check_hlds__modes__DetismSpecs_37,
#line 1080 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_56);

#line 1110 "modes.m"
static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0(
#line 1110 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__1_1,
#line 1110 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1110 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3);

#line 1110 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0(
#line 1110 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1110 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2);

#line 1472 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_nonunique_modes_2_p_0(
#line 1472 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1472 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2);

#line 1454 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_fully_in_out_modes_2_p_0(
#line 1454 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1454 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2);

#line 1415 "modes.m"
static void MR_CALL 
check_hlds__modes__proc_check_eval_methods_5_p_0(
#line 1415 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1415 "modes.m"
  MR_Word check_hlds__modes__PredId_2,
#line 1415 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3,
#line 1415 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_4,
#line 1415 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_5);

#line 1404 "modes.m"
static void MR_CALL 
check_hlds__modes__pred_check_eval_methods_4_p_0(
#line 1404 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1404 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1404 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_3,
#line 1404 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_4);

#line 1309 "modes.m"
static void MR_CALL 
check_hlds__modes__check_final_insts_13_p_0(
#line 1309 "modes.m"
  MR_Word check_hlds__modes__Vars_14,
#line 1309 "modes.m"
  MR_Word check_hlds__modes__Insts_15,
#line 1309 "modes.m"
  MR_Word check_hlds__modes__VarInsts_16,
#line 1309 "modes.m"
  MR_Word check_hlds__modes__InferModes_17,
#line 1309 "modes.m"
  MR_Word check_hlds__modes__GroundMatchesBound_18,
#line 1309 "modes.m"
  MR_Integer check_hlds__modes__ArgNum_19,
#line 1309 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_20,
#line 1309 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Goal_0_35,
#line 1309 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Goal_36,
#line 1309 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_37,
#line 1309 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_38,
#line 1309 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39,
#line 1309 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_40);

#line 1291 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_clobber_insts_3_p_0(
#line 1291 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1291 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1291 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__3_3);

#line 1228 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_final_insts_8_p_0(
#line 1228 "modes.m"
  MR_Word check_hlds__modes__HeadVars_9,
#line 1228 "modes.m"
  MR_Word check_hlds__modes__InferModes_10,
#line 1228 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14,
#line 1228 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_FinalInsts_15,
#line 1228 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Body_0_16,
#line 1228 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Body_17,
#line 1228 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
#line 1228 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19);

#line 1183 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_switch_9_p_0(
#line 1183 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1183 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1183 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1183 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1183 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1183 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1183 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1183 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1183 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28);

#line 1163 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_disj_11_p_0(
#line 1163 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_12,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__HeadVars_13,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__InstMap0_14,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_15,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__DisjDetism_16,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__DisjNonLocals_17,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__NondetLiveVars0_18,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_19,
#line 1163 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_20,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_24,
#line 1163 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_25);

#line 1129 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_switch_9_p_0(
#line 1129 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1129 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1129 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1129 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1129 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1129 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1129 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1129 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1129 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28);

#line 1114 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_disj_8_p_0(
#line 1114 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_9,
#line 1114 "modes.m"
  MR_Word check_hlds__modes__HeadVars_10,
#line 1114 "modes.m"
  MR_Word check_hlds__modes__InstMap0_11,
#line 1114 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_12,
#line 1114 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_13,
#line 1114 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_14,
#line 1114 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
#line 1114 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19);

#line 1080 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0_1(
#line 1080 "modes.m"
  MR_Box check_hlds__modes__closure_arg);

#line 968 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0(
#line 968 "modes.m"
  MR_Word check_hlds__modes__HowToCheckGoal_8,
#line 968 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26,
#line 968 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_OldPredTable_27,
#line 968 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28,
#line 968 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_29,
#line 968 "modes.m"
  MR_Word * check_hlds__modes__Changed_11,
#line 968 "modes.m"
  MR_Word * check_hlds__modes__Specs_12);

#line 919 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_5(
#line 919 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 919 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 919 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 919 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 919 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4);

#line 911 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_4(
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

#line 876 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_3(
#line 876 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 876 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 876 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 876 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 876 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4);

#line 869 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_2(
#line 869 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 869 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 869 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 869 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 869 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4);

#line 850 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_1(
#line 850 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 850 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1);

#line 822 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0(
#line 822 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_16,
#line 822 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_17,
#line 822 "modes.m"
  MR_Word check_hlds__modes__InferModes_18,
#line 822 "modes.m"
  MR_Word check_hlds__modes__Markers_19,
#line 822 "modes.m"
  MR_Word check_hlds__modes__IsUnifyPred_20,
#line 822 "modes.m"
  MR_Word check_hlds__modes__PredId_21,
#line 822 "modes.m"
  MR_Integer check_hlds__modes__ProcId_22,
#line 822 "modes.m"
  MR_Word check_hlds__modes__Body0_23,
#line 822 "modes.m"
  MR_Word * check_hlds__modes__Body_24,
#line 822 "modes.m"
  MR_Word check_hlds__modes__HeadVars_25,
#line 822 "modes.m"
  MR_Word check_hlds__modes__InstMap0_26,
#line 822 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_27,
#line 822 "modes.m"
  MR_Word * check_hlds__modes__ArgFinalInsts_28,
#line 822 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66,
#line 822 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_67);

#line 742 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_2(
#line 742 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 742 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1);

#line 722 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_1(
#line 722 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 722 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1);

#line 622 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0(
#line 622 "modes.m"
  MR_Integer check_hlds__modes__ProcId_10,
#line 622 "modes.m"
  MR_Word check_hlds__modes__PredId_11,
#line 622 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_12,
#line 622 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_13,
#line 622 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23,
#line 622 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_24,
#line 622 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_25,
#line 622 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_26,
#line 622 "modes.m"
  MR_Word * check_hlds__modes__Specs_16);

#line 595 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_procs_10_p_0(
#line 595 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 595 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 595 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_3,
#line 595 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_4,
#line 595 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5,
#line 595 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_6,
#line 595 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_7,
#line 595 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_8,
#line 595 "modes.m"
  MR_Word check_hlds__modes__HeadVar__9_9,
#line 595 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__10_10);

#line 570 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_1(
#line 570 "modes.m"
  void * check_hlds__modes__env_ptr_arg);

#line 570 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_3(
#line 570 "modes.m"
  void * check_hlds__modes__env_ptr_arg);

#line 570 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_2(
#line 570 "modes.m"
  void * check_hlds__modes__env_ptr_arg);

#line 570 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_4(
#line 570 "modes.m"
  void * check_hlds__modes__env_ptr_arg);

#line 493 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0(
#line 493 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_10,
#line 493 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_11,
#line 493 "modes.m"
  MR_Word check_hlds__modes__PredId_12,
#line 493 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25,
#line 493 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_26,
#line 493 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_27,
#line 493 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_28,
#line 493 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_29,
#line 493 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_30);

#line 462 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_proc_body_4_p_0(
#line 462 "modes.m"
  MR_Word check_hlds__modes__OldProcTable_5,
#line 462 "modes.m"
  MR_Integer check_hlds__modes__ProcId_6,
#line 462 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ProcTable_0_12,
#line 462 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ProcTable_13);

#line 452 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0_1(
#line 452 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 452 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 452 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 452 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3);

#line 434 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0(
#line 434 "modes.m"
  MR_Word check_hlds__modes__OldPredTable_5,
#line 434 "modes.m"
  MR_Word check_hlds__modes__PredId_6,
#line 434 "modes.m"
  MR_Word check_hlds__modes__PredTable0_7,
#line 434 "modes.m"
  MR_Word * check_hlds__modes__PredTable_8);

#line 426 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_2(
#line 426 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 426 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 426 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 426 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3);

#line 323 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_1(
#line 323 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 323 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 323 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 323 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3,
#line 323 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_4,
#line 323 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_5,
#line 323 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_6,
#line 323 "modes.m"
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



#line 1311 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1319 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1328 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 1337 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1345 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1354 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1362 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1370 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1378 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1386 "check_hlds.modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modes__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1394 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1402 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1407 "check_hlds.modes.c"
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

#line 1422 "check_hlds.modes.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0
  }
};

#line 1430 "check_hlds.modes.c"
static const MR_PseudoTypeInfo check_hlds__modes__check_hlds__modes__field_types_clause_form_0_1[3] = {
  (MR_PseudoTypeInfo) &check_hlds__modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_can_fail_0,
  (MR_PseudoTypeInfo) &check_hlds__modes__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0
};

#line 1437 "check_hlds.modes.c"
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

#line 1452 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_0[1] = {
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0
};

#line 1457 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_stag_ordered_clause_form_0_1[1] = {
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1
};

#line 1462 "check_hlds.modes.c"
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

#line 1476 "check_hlds.modes.c"
static const MR_DuFunctorDescPtr check_hlds__modes__check_hlds__modes__du_name_ordered_clause_form_0[2] = {
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_0,
  &check_hlds__modes__check_hlds__modes__du_functor_desc_clause_form_0_1
};

#line 1482 "check_hlds.modes.c"
static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_clause_form_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1488 "check_hlds.modes.c"
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

#line 1505 "check_hlds.modes.c"
static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_0 = {
  (MR_String) "modes_safe_to_continue",
  (MR_Integer) 0
};

#line 1511 "check_hlds.modes.c"
static const MR_EnumFunctorDesc check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_1 = {
  (MR_String) "modes_unsafe_to_continue",
  (MR_Integer) 1
};

#line 1517 "check_hlds.modes.c"
static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_value_ordered_modes_safe_to_continue_0[2] = {
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_0,
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_1
};

#line 1523 "check_hlds.modes.c"
static const MR_EnumFunctorDescPtr check_hlds__modes__check_hlds__modes__enum_name_ordered_modes_safe_to_continue_0[2] = {
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_0,
  &check_hlds__modes__check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_1
};

#line 1529 "check_hlds.modes.c"
static const MR_Integer check_hlds__modes__check_hlds__modes__functor_number_map_modes_safe_to_continue_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1535 "check_hlds.modes.c"
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

#line 1552 "check_hlds.modes.c"
static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0_10001(
#line 1555 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 1557 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2)
#line 1559 "check_hlds.modes.c"
{
#line 1561 "check_hlds.modes.c"
  {
#line 1563 "check_hlds.modes.c"
    MR_bool check_hlds__modes__succeeded;

#line 1566 "check_hlds.modes.c"
    {
#line 1568 "check_hlds.modes.c"
      check_hlds__modes__succeeded = check_hlds__modes____Unify____clause_form_0_0(((MR_Word) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2));
    }
#line 1571 "check_hlds.modes.c"
    return check_hlds__modes__succeeded;
#line 1573 "check_hlds.modes.c"
  }
#line 1575 "check_hlds.modes.c"
}

#line 1578 "check_hlds.modes.c"
static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0_10001(
#line 1581 "check_hlds.modes.c"
  MR_Box * check_hlds__modes__wrapper_arg_1,
#line 1583 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 1585 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_3)
#line 1587 "check_hlds.modes.c"
{
#line 1589 "check_hlds.modes.c"
  {
#line 1591 "check_hlds.modes.c"
    MR_Word check_hlds__modes__conv0_HeadVar__1_1;

#line 1594 "check_hlds.modes.c"
    {
#line 1596 "check_hlds.modes.c"
      check_hlds__modes____Compare____clause_form_0_0(&check_hlds__modes__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modes__wrapper_arg_2), ((MR_Word) check_hlds__modes__wrapper_arg_3));
    }
#line 1599 "check_hlds.modes.c"
    *check_hlds__modes__wrapper_arg_1 = ((MR_Box) (check_hlds__modes__conv0_HeadVar__1_1));
#line 1601 "check_hlds.modes.c"
  }
#line 1603 "check_hlds.modes.c"
}

#line 1606 "check_hlds.modes.c"
static MR_bool MR_CALL 
check_hlds__modes____Unify____modes_safe_to_continue_0_0_10001(
#line 1609 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 1611 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2)
#line 1613 "check_hlds.modes.c"
{
#line 1615 "check_hlds.modes.c"
  {
#line 1617 "check_hlds.modes.c"
    MR_bool check_hlds__modes__succeeded;

#line 1620 "check_hlds.modes.c"
    {
#line 1622 "check_hlds.modes.c"
      check_hlds__modes__succeeded = check_hlds__modes____Unify____modes_safe_to_continue_0_0(((MR_Word) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2));
    }
#line 1625 "check_hlds.modes.c"
    return check_hlds__modes__succeeded;
#line 1627 "check_hlds.modes.c"
  }
#line 1629 "check_hlds.modes.c"
}

#line 1632 "check_hlds.modes.c"
static void MR_CALL 
check_hlds__modes____Compare____modes_safe_to_continue_0_0_10001(
#line 1635 "check_hlds.modes.c"
  MR_Box * check_hlds__modes__wrapper_arg_1,
#line 1637 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 1639 "check_hlds.modes.c"
  MR_Box check_hlds__modes__wrapper_arg_3)
#line 1641 "check_hlds.modes.c"
{
#line 1643 "check_hlds.modes.c"
  {
#line 1645 "check_hlds.modes.c"
    MR_Word check_hlds__modes__conv0_HeadVar__1_1;

#line 1648 "check_hlds.modes.c"
    {
#line 1650 "check_hlds.modes.c"
      check_hlds__modes____Compare____modes_safe_to_continue_0_0(&check_hlds__modes__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modes__wrapper_arg_2), ((MR_Word) check_hlds__modes__wrapper_arg_3));
    }
#line 1653 "check_hlds.modes.c"
    *check_hlds__modes__wrapper_arg_1 = ((MR_Box) (check_hlds__modes__conv0_HeadVar__1_1));
#line 1655 "check_hlds.modes.c"
  }
#line 1657 "check_hlds.modes.c"
}

#line 1080 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1080__1_2_p_0(
#line 1080 "modes.m"
  MR_Word check_hlds__modes__DetismSpecs_37,
#line 1080 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_56)
#line 1080 "modes.m"
{
#line 1080 "modes.m"
  {
#line 1080 "modes.m"
    MR_bool check_hlds__modes__succeeded;

#line 1080 "modes.m"
    {
#line 1080 "modes.m"
      return check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modes_scalar_common_1[0], ((MR_Box) (check_hlds__modes__DetismSpecs_37)), ((MR_Box) (check_hlds__modes__HeadVar__2_56)));
    }
#line 1080 "modes.m"
    return check_hlds__modes__succeeded;
#line 1080 "modes.m"
  }
#line 1080 "modes.m"
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
#line 1727 "check_hlds.modes.c"
  {
#line 1729 "check_hlds.modes.c"
    MR_bool check_hlds__modes__succeeded = (check_hlds__modes__HeadVar__2_1 == check_hlds__modes__HeadVar__2_2);

#line 1732 "check_hlds.modes.c"
    return check_hlds__modes__succeeded;
#line 1734 "check_hlds.modes.c"
  }
#line 79 "modes.m"
}

#line 1110 "modes.m"
static void MR_CALL 
check_hlds__modes____Compare____clause_form_0_0(
#line 1110 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__1_1,
#line 1110 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1110 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3)
#line 1110 "modes.m"
{
#line 1110 "modes.m"
  {
#line 1110 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1110 "modes.m"
    MR_Integer check_hlds__modes__CastX_22 = (MR_Integer) check_hlds__modes__HeadVar__2_2;
#line 1110 "modes.m"
    MR_Integer check_hlds__modes__CastY_23 = (MR_Integer) check_hlds__modes__HeadVar__3_3;

#line 1110 "modes.m"
    check_hlds__modes__succeeded = (check_hlds__modes__CastX_22 == check_hlds__modes__CastY_23);
#line 1110 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1763 "check_hlds.modes.c"
      *check_hlds__modes__HeadVar__1_1 = (MR_Integer) 0;
#line 1110 "modes.m"
    else
#line 1110 "modes.m"
    if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1110 "modes.m"
      {
#line 1110 "modes.m"
        MR_Word check_hlds__modes__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));

#line 1110 "modes.m"
        if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1110 "modes.m"
          {
#line 1110 "modes.m"
            MR_Word check_hlds__modes__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__3_3, (MR_Integer) 0)));

#line 1110 "modes.m"
            {
#line 1110 "modes.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[3], check_hlds__modes__HeadVar__1_1, ((MR_Box) (check_hlds__modes__V_28_28)), ((MR_Box) (check_hlds__modes__V_5_5)));
#line 1110 "modes.m"
              return;
            }
#line 1110 "modes.m"
          }
#line 1110 "modes.m"
        else
#line 1792 "check_hlds.modes.c"
          *check_hlds__modes__HeadVar__1_1 = (MR_Integer) 1;
#line 1110 "modes.m"
      }
#line 1110 "modes.m"
    else
#line 1110 "modes.m"
      {
#line 1110 "modes.m"
        MR_Word check_hlds__modes__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 2)));
#line 1110 "modes.m"
        MR_Word check_hlds__modes__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1110 "modes.m"
        MR_Word check_hlds__modes__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));

#line 1110 "modes.m"
        if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1809 "check_hlds.modes.c"
          *check_hlds__modes__HeadVar__1_1 = (MR_Integer) 2;
#line 1110 "modes.m"
        else
#line 1110 "modes.m"
          {
#line 1110 "modes.m"
            MR_Word check_hlds__modes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 0)));
#line 1110 "modes.m"
            MR_Word check_hlds__modes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 1)));
#line 1110 "modes.m"
            MR_Word check_hlds__modes__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 2)));
#line 1110 "modes.m"
            MR_Word check_hlds__modes__V_20_20;

#line 1110 "modes.m"
            {
#line 1110 "modes.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[1], &check_hlds__modes__V_20_20, ((MR_Box) (check_hlds__modes__V_31_31)), ((MR_Box) (check_hlds__modes__V_17_17)));
            }
#line 1829 "check_hlds.modes.c"
            check_hlds__modes__succeeded = (check_hlds__modes__V_20_20 == (MR_Integer) 0);
#line 1110 "modes.m"
            check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1110 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1110 "modes.m"
              *check_hlds__modes__HeadVar__1_1 = check_hlds__modes__V_20_20;
#line 1110 "modes.m"
            else
#line 1110 "modes.m"
              {
#line 1110 "modes.m"
                MR_Word check_hlds__modes__V_21_21;
#line 1110 "modes.m"
                MR_Integer check_hlds__modes__V_32_32 = (MR_Integer) check_hlds__modes__V_30_30;
#line 1110 "modes.m"
                MR_Integer check_hlds__modes__V_33_33 = (MR_Integer) check_hlds__modes__V_18_18;

#line 1110 "modes.m"
                {
#line 1110 "modes.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__modes__V_21_21, check_hlds__modes__V_32_32, check_hlds__modes__V_33_33);
                }
#line 1853 "check_hlds.modes.c"
                check_hlds__modes__succeeded = (check_hlds__modes__V_21_21 == (MR_Integer) 0);
#line 1110 "modes.m"
                check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1110 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1110 "modes.m"
                  *check_hlds__modes__HeadVar__1_1 = check_hlds__modes__V_21_21;
#line 1110 "modes.m"
                else
#line 1110 "modes.m"
                  {
#line 1110 "modes.m"
                    {
#line 1110 "modes.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[2], check_hlds__modes__HeadVar__1_1, ((MR_Box) (check_hlds__modes__V_29_29)), ((MR_Box) (check_hlds__modes__V_19_19)));
#line 1110 "modes.m"
                      return;
                    }
#line 1110 "modes.m"
                  }
#line 1110 "modes.m"
              }
#line 1110 "modes.m"
          }
#line 1110 "modes.m"
      }
#line 1110 "modes.m"
  }
#line 1110 "modes.m"
}

#line 1110 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes____Unify____clause_form_0_0(
#line 1110 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1110 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2)
#line 1110 "modes.m"
{
#line 1110 "modes.m"
  {
#line 1110 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1110 "modes.m"
    MR_Integer check_hlds__modes__CastX_11 = (MR_Integer) check_hlds__modes__HeadVar__1_1;
#line 1110 "modes.m"
    MR_Integer check_hlds__modes__CastY_12 = (MR_Integer) check_hlds__modes__HeadVar__2_2;

#line 1110 "modes.m"
    check_hlds__modes__succeeded = (check_hlds__modes__CastX_11 == check_hlds__modes__CastY_12);
#line 1110 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1110 "modes.m"
      check_hlds__modes__succeeded = MR_TRUE;
#line 1110 "modes.m"
    else
#line 1110 "modes.m"
    if (((MR_tag((MR_Word) check_hlds__modes__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1110 "modes.m"
      {
#line 1110 "modes.m"
        MR_Word check_hlds__modes__TypeInfo_13_13;
#line 1110 "modes.m"
        MR_Word check_hlds__modes__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1110 "modes.m"
        MR_Word check_hlds__modes__V_4_4;

#line 1110 "modes.m"
        check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1110 "modes.m"
        if (check_hlds__modes__succeeded)
#line 1110 "modes.m"
          {
#line 1110 "modes.m"
            check_hlds__modes__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1930 "check_hlds.modes.c"
            check_hlds__modes__TypeInfo_13_13 = (MR_Word) &check_hlds__modes_scalar_common_1[3];
#line 1932 "check_hlds.modes.c"
            {
#line 1934 "check_hlds.modes.c"
              return check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modes__TypeInfo_13_13, ((MR_Box) (check_hlds__modes__V_3_3)), ((MR_Box) (check_hlds__modes__V_4_4)));
            }
#line 1110 "modes.m"
          }
#line 1110 "modes.m"
      }
#line 1110 "modes.m"
    else
#line 1110 "modes.m"
      {
#line 1110 "modes.m"
        MR_Word check_hlds__modes__TypeInfo_14_14;
#line 1110 "modes.m"
        MR_Word check_hlds__modes__TypeInfo_15_15;
#line 1110 "modes.m"
        MR_Word check_hlds__modes__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1110 "modes.m"
        MR_Word check_hlds__modes__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1110 "modes.m"
        MR_Word check_hlds__modes__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 2)));
#line 1110 "modes.m"
        MR_Word check_hlds__modes__V_8_8;
#line 1110 "modes.m"
        MR_Word check_hlds__modes__V_9_9;
#line 1110 "modes.m"
        MR_Word check_hlds__modes__V_10_10;

#line 1110 "modes.m"
        check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1110 "modes.m"
        if (check_hlds__modes__succeeded)
#line 1110 "modes.m"
          {
#line 1110 "modes.m"
            check_hlds__modes__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1110 "modes.m"
            check_hlds__modes__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1110 "modes.m"
            check_hlds__modes__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 2)));
#line 1974 "check_hlds.modes.c"
            check_hlds__modes__TypeInfo_14_14 = (MR_Word) &check_hlds__modes_scalar_common_1[1];
#line 1976 "check_hlds.modes.c"
            {
#line 1978 "check_hlds.modes.c"
              check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modes__TypeInfo_14_14, ((MR_Box) (check_hlds__modes__V_5_5)), ((MR_Box) (check_hlds__modes__V_8_8)));
            }
#line 1110 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1110 "modes.m"
              {
#line 1985 "check_hlds.modes.c"
                check_hlds__modes__succeeded = (check_hlds__modes__V_6_6 == check_hlds__modes__V_9_9);
#line 1110 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1110 "modes.m"
                  {
#line 1991 "check_hlds.modes.c"
                    check_hlds__modes__TypeInfo_15_15 = (MR_Word) &check_hlds__modes_scalar_common_1[2];
#line 1993 "check_hlds.modes.c"
                    {
#line 1995 "check_hlds.modes.c"
                      return check_hlds__modes__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modes__TypeInfo_15_15, ((MR_Box) (check_hlds__modes__V_7_7)), ((MR_Box) (check_hlds__modes__V_10_10)));
                    }
#line 1110 "modes.m"
                  }
#line 1110 "modes.m"
              }
#line 1110 "modes.m"
          }
#line 1110 "modes.m"
      }
#line 1110 "modes.m"
    return check_hlds__modes__succeeded;
#line 1110 "modes.m"
  }
#line 1110 "modes.m"
}

#line 1472 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_nonunique_modes_2_p_0(
#line 1472 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1472 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2)
#line 1472 "modes.m"
{
#line 1474 "modes.m"
  while (MR_TRUE)
#line 1474 "modes.m"
    {
#line 1474 "modes.m"
      /* tailcall optimized into a loop */
#line 1474 "modes.m"
      {
#line 1474 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 1474 "modes.m"
        if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1474 "modes.m"
          check_hlds__modes__succeeded = MR_TRUE;
#line 1474 "modes.m"
        else
#line 1475 "modes.m"
          {
#line 1475 "modes.m"
            MR_Word check_hlds__modes__Mode_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1475 "modes.m"
            MR_Word check_hlds__modes__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1475 "modes.m"
            MR_Word check_hlds__modes__InitialInst_7;
#line 1475 "modes.m"
            MR_Word check_hlds__modes__FinalInst_8;

#line 1476 "modes.m"
            {
#line 1476 "modes.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__Mode_4, &check_hlds__modes__InitialInst_7, &check_hlds__modes__FinalInst_8);
            }
#line 1477 "modes.m"
            {
#line 1477 "modes.m"
              check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__InitialInst_7);
            }
#line 1475 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1475 "modes.m"
              {
#line 1478 "modes.m"
                {
#line 1478 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__FinalInst_8);
                }
#line 1475 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1479 "modes.m"
                  {
#line 1479 "modes.m"
                    /* direct tailcall eliminated */
#line 1479 "modes.m"
                    {
#line 1479 "modes.m"
                      MR_Word check_hlds__modes__HeadVar__1__tmp_copy_1 = check_hlds__modes__Rest_5;

#line 1479 "modes.m"
                      check_hlds__modes__HeadVar__1_1 = check_hlds__modes__HeadVar__1__tmp_copy_1;
#line 1479 "modes.m"
                    }
#line 1479 "modes.m"
                    continue;
#line 1479 "modes.m"
                  }
#line 1475 "modes.m"
              }
#line 1475 "modes.m"
          }
#line 1474 "modes.m"
        return check_hlds__modes__succeeded;
#line 1474 "modes.m"
      }
#line 1474 "modes.m"
      break;
#line 1474 "modes.m"
    }
#line 1472 "modes.m"
}

#line 1454 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__only_fully_in_out_modes_2_p_0(
#line 1454 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1454 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_2)
#line 1454 "modes.m"
{
#line 1457 "modes.m"
  while (MR_TRUE)
#line 1457 "modes.m"
    {
#line 1457 "modes.m"
      /* tailcall optimized into a loop */
#line 1457 "modes.m"
      {
#line 1457 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 1457 "modes.m"
        if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1457 "modes.m"
          check_hlds__modes__succeeded = MR_TRUE;
#line 1457 "modes.m"
        else
#line 1458 "modes.m"
          {
#line 1458 "modes.m"
            MR_Word check_hlds__modes__Mode_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1458 "modes.m"
            MR_Word check_hlds__modes__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1458 "modes.m"
            MR_Word check_hlds__modes__InitialInst_7;
#line 1458 "modes.m"
            MR_Word check_hlds__modes__FinalInst_8;

#line 1459 "modes.m"
            {
#line 1459 "modes.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__Mode_4, &check_hlds__modes__InitialInst_7, &check_hlds__modes__FinalInst_8);
            }
#line 1461 "modes.m"
            {
#line 1461 "modes.m"
              check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__InitialInst_7);
            }
#line 1462 "modes.m"
            if (!(check_hlds__modes__succeeded))
#line 1463 "modes.m"
              {
#line 1463 "modes.m"
                {
#line 1463 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__InitialInst_7);
                }
#line 1463 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1463 "modes.m"
                  {
#line 1465 "modes.m"
                    {
#line 1465 "modes.m"
                      check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__FinalInst_8);
                    }
#line 1466 "modes.m"
                    if (!(check_hlds__modes__succeeded))
#line 1467 "modes.m"
                      {
#line 1467 "modes.m"
                        check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__modes__ModuleInfo_2, check_hlds__modes__FinalInst_8);
                      }
#line 1463 "modes.m"
                  }
#line 1463 "modes.m"
              }
#line 1458 "modes.m"
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
#line 1458 "modes.m"
          }
#line 1457 "modes.m"
        return check_hlds__modes__succeeded;
#line 1457 "modes.m"
      }
#line 1457 "modes.m"
      break;
#line 1457 "modes.m"
    }
#line 1454 "modes.m"
}

#line 1415 "modes.m"
static void MR_CALL 
check_hlds__modes__proc_check_eval_methods_5_p_0(
#line 1415 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1415 "modes.m"
  MR_Word check_hlds__modes__PredId_2,
#line 1415 "modes.m"
  MR_Word check_hlds__modes__HeadVar__3_3,
#line 1415 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_4,
#line 1415 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_5)
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
        if ((check_hlds__modes__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1418 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Specs_5 = check_hlds__modes__STATE_VARIABLE_Specs_0_4;
#line 1418 "modes.m"
        else
#line 1419 "modes.m"
          {
#line 1419 "modes.m"
            MR_Integer check_hlds__modes__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 0)));
#line 1419 "modes.m"
            MR_Word check_hlds__modes__ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__3_3, (MR_Integer) 1)));
#line 1419 "modes.m"
            MR_Word check_hlds__modes__PredInfo_16;
#line 1419 "modes.m"
            MR_Word check_hlds__modes__ProcInfo_17;
#line 1419 "modes.m"
            MR_Word check_hlds__modes__EvalMethod_18;
#line 1419 "modes.m"
            MR_Word check_hlds__modes__Modes_19;
#line 1419 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_26_26;
#line 1419 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_28_28;
#line 1419 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_31_31;
#line 1424 "modes.m"
            MR_Word check_hlds__modes__V_25_25;
#line 1433 "modes.m"
            MR_Word check_hlds__modes__V_27_27;
#line 1442 "modes.m"
            MR_String check_hlds__modes__V_29_29;
#line 1442 "modes.m"
            MR_Integer check_hlds__modes__V_30_30;
#line 1483 "modes.m"
            MR_Word check_hlds__modes__Di_123;
#line 1483 "modes.m"
            MR_Word check_hlds__modes__Uo_124;
#line 1483 "modes.m"
            MR_Word check_hlds__modes__DiInitialInst_125;
#line 1483 "modes.m"
            MR_Word check_hlds__modes__DiFinalInst_126;
#line 1483 "modes.m"
            MR_Word check_hlds__modes__UoInitialInst_127;
#line 1483 "modes.m"
            MR_Word check_hlds__modes__UoFinalInst_128;
#line 1483 "modes.m"
            MR_Word check_hlds__modes__Free_129;
#line 1483 "modes.m"
            MR_Word check_hlds__modes__V_131_131;
#line 1483 "modes.m"
            MR_Word check_hlds__modes__V_132_132;
#line 1483 "modes.m"
            MR_Word check_hlds__modes__V_133_133;
#line 1483 "modes.m"
            MR_Word check_hlds__modes__V_134_134;
#line 1483 "modes.m"
            MR_Word check_hlds__modes__V_135_135;
#line 1483 "modes.m"
            MR_Word check_hlds__modes__V_136_136;
#line 1483 "modes.m"
            MR_Word check_hlds__modes__V_137_137;
#line 1483 "modes.m"
            MR_Word check_hlds__modes__V_138_138;
#line 1483 "modes.m"
            MR_Word check_hlds__modes__V_142_142;
#line 1483 "modes.m"
            MR_Word check_hlds__modes__V_143_143;
#line 1483 "modes.m"
            MR_Word check_hlds__modes__V_144_144;

#line 1420 "modes.m"
            {
#line 1420 "modes.m"
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__PredId_2, check_hlds__modes__ProcId_13, &check_hlds__modes__PredInfo_16, &check_hlds__modes__ProcInfo_17);
            }
#line 1421 "modes.m"
            {
#line 1421 "modes.m"
              hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__EvalMethod_18);
            }
#line 1422 "modes.m"
            {
#line 1422 "modes.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Modes_19);
            }
#line 1424 "modes.m"
            {
#line 1424 "modes.m"
              check_hlds__modes__V_25_25 = hlds__hlds_pred__eval_method_requires_ground_args_1_f_0(check_hlds__modes__EvalMethod_18);
            }
#line 1424 "modes.m"
            check_hlds__modes__succeeded = (check_hlds__modes__V_25_25 == (MR_Integer) 1);
#line 1424 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1424 "modes.m"
              {
#line 1425 "modes.m"
                {
#line 1425 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__modes__only_fully_in_out_modes_2_p_0(check_hlds__modes__Modes_19, check_hlds__modes__ModuleInfo_1);
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
                MR_Word check_hlds__modes__GroundArgsSpec_20;
#line 1427 "modes.m"
                MR_Word check_hlds__modes__EvalMethod_35;
#line 1427 "modes.m"
                MR_Word check_hlds__modes__Context_36;
#line 1427 "modes.m"
                MR_String check_hlds__modes__EvalMethodS_37;
#line 1427 "modes.m"
                MR_Word check_hlds__modes__MainPieces_38;
#line 1427 "modes.m"
                MR_Word check_hlds__modes__Msg_40;
#line 1427 "modes.m"
                MR_Word check_hlds__modes__V_43_43;
#line 1427 "modes.m"
                MR_Word check_hlds__modes__V_44_44;
#line 1427 "modes.m"
                MR_Word check_hlds__modes__V_65_65;
#line 1427 "modes.m"
                MR_Word check_hlds__modes__V_66_66;
#line 1427 "modes.m"
                MR_Word check_hlds__modes__V_74_74;

#line 1503 "modes.m"
                {
#line 1503 "modes.m"
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__EvalMethod_35);
                }
#line 1504 "modes.m"
                {
#line 1504 "modes.m"
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Context_36);
                }
#line 1505 "modes.m"
                {
#line 1505 "modes.m"
                  check_hlds__modes__EvalMethodS_37 = parse_tree__prog_out__eval_method_to_string_1_f_0(check_hlds__modes__EvalMethod_35);
                }
#line 1507 "modes.m"
                {
#line 1507 "modes.m"
                  check_hlds__modes__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1507 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 1507 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_44_44, 1) = ((MR_Box) (check_hlds__modes__EvalMethodS_37));
#line 1507 "modes.m"
                }
#line 1507 "modes.m"
                {
#line 1507 "modes.m"
                  check_hlds__modes__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1507 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_43_43, 0) = ((MR_Box) (check_hlds__modes__V_44_44));
#line 1507 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[10])));
#line 1507 "modes.m"
                }
#line 1506 "modes.m"
                {
#line 1506 "modes.m"
                  check_hlds__modes__MainPieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[45])));
#line 1506 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_38, 1) = ((MR_Box) (check_hlds__modes__V_43_43));
#line 1506 "modes.m"
                }
#line 1514 "modes.m"
                {
#line 1514 "modes.m"
                  check_hlds__modes__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1514 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_66_66, 0) = ((MR_Box) (check_hlds__modes__MainPieces_38));
#line 1514 "modes.m"
                }
#line 1514 "modes.m"
                {
#line 1514 "modes.m"
                  check_hlds__modes__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1514 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_65_65, 0) = ((MR_Box) (check_hlds__modes__V_66_66));
#line 1514 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[47])));
#line 1514 "modes.m"
                }
#line 1513 "modes.m"
                {
#line 1513 "modes.m"
                  check_hlds__modes__Msg_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1513 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_40, 0) = ((MR_Box) (check_hlds__modes__Context_36));
#line 1513 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_40, 1) = ((MR_Box) (check_hlds__modes__V_65_65));
#line 1513 "modes.m"
                }
#line 1516 "modes.m"
                {
#line 1516 "modes.m"
                  check_hlds__modes__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1516 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_74_74, 0) = ((MR_Box) (check_hlds__modes__Msg_40));
#line 1516 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1516 "modes.m"
                }
#line 1515 "modes.m"
                {
#line 1515 "modes.m"
                  check_hlds__modes__GroundArgsSpec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1515 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__GroundArgsSpec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1515 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__GroundArgsSpec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[1])));
#line 1515 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__GroundArgsSpec_20, 2) = ((MR_Box) (check_hlds__modes__V_74_74));
#line 1515 "modes.m"
                }
#line 1428 "modes.m"
                {
#line 1428 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Specs_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1428 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_26_26, 0) = ((MR_Box) (check_hlds__modes__GroundArgsSpec_20));
#line 1428 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_26_26, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_0_4));
#line 1428 "modes.m"
                }
#line 1427 "modes.m"
              }
#line 1429 "modes.m"
            else
#line 1429 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_26_26 = check_hlds__modes__STATE_VARIABLE_Specs_0_4;
#line 1433 "modes.m"
            {
#line 1433 "modes.m"
              check_hlds__modes__V_27_27 = hlds__hlds_pred__eval_method_destroys_uniqueness_1_f_0(check_hlds__modes__EvalMethod_18);
            }
#line 1433 "modes.m"
            check_hlds__modes__succeeded = (check_hlds__modes__V_27_27 == (MR_Integer) 1);
#line 1433 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1433 "modes.m"
              {
#line 1434 "modes.m"
                {
#line 1434 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__modes__only_nonunique_modes_2_p_0(check_hlds__modes__Modes_19, check_hlds__modes__ModuleInfo_1);
                }
#line 1434 "modes.m"
                check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1433 "modes.m"
              }
#line 1438 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1436 "modes.m"
              {
#line 1436 "modes.m"
                MR_Word check_hlds__modes__UniquenessSpec_21;
#line 1436 "modes.m"
                MR_Word check_hlds__modes__EvalMethod_78;
#line 1436 "modes.m"
                MR_Word check_hlds__modes__Context_79;
#line 1436 "modes.m"
                MR_String check_hlds__modes__EvalMethodS_80;
#line 1436 "modes.m"
                MR_Word check_hlds__modes__MainPieces_81;
#line 1436 "modes.m"
                MR_Word check_hlds__modes__Msg_83;
#line 1436 "modes.m"
                MR_Word check_hlds__modes__V_86_86;
#line 1436 "modes.m"
                MR_Word check_hlds__modes__V_87_87;
#line 1436 "modes.m"
                MR_Word check_hlds__modes__V_111_111;
#line 1436 "modes.m"
                MR_Word check_hlds__modes__V_112_112;
#line 1436 "modes.m"
                MR_Word check_hlds__modes__V_120_120;

#line 1521 "modes.m"
                {
#line 1521 "modes.m"
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__EvalMethod_78);
                }
#line 1522 "modes.m"
                {
#line 1522 "modes.m"
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Context_79);
                }
#line 1523 "modes.m"
                {
#line 1523 "modes.m"
                  check_hlds__modes__EvalMethodS_80 = parse_tree__prog_out__eval_method_to_string_1_f_0(check_hlds__modes__EvalMethod_78);
                }
#line 1525 "modes.m"
                {
#line 1525 "modes.m"
                  check_hlds__modes__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 1525 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__V_87_87, 1) = ((MR_Box) (check_hlds__modes__EvalMethodS_80));
#line 1525 "modes.m"
                }
#line 1525 "modes.m"
                {
#line 1525 "modes.m"
                  check_hlds__modes__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_86_86, 0) = ((MR_Box) (check_hlds__modes__V_87_87));
#line 1525 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[19])));
#line 1525 "modes.m"
                }
#line 1524 "modes.m"
                {
#line 1524 "modes.m"
                  check_hlds__modes__MainPieces_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[48])));
#line 1524 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__MainPieces_81, 1) = ((MR_Box) (check_hlds__modes__V_86_86));
#line 1524 "modes.m"
                }
#line 1534 "modes.m"
                {
#line 1534 "modes.m"
                  check_hlds__modes__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1534 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_112_112, 0) = ((MR_Box) (check_hlds__modes__MainPieces_81));
#line 1534 "modes.m"
                }
#line 1534 "modes.m"
                {
#line 1534 "modes.m"
                  check_hlds__modes__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1534 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_111_111, 0) = ((MR_Box) (check_hlds__modes__V_112_112));
#line 1534 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[50])));
#line 1534 "modes.m"
                }
#line 1533 "modes.m"
                {
#line 1533 "modes.m"
                  check_hlds__modes__Msg_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1533 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_83, 0) = ((MR_Box) (check_hlds__modes__Context_79));
#line 1533 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_83, 1) = ((MR_Box) (check_hlds__modes__V_111_111));
#line 1533 "modes.m"
                }
#line 1536 "modes.m"
                {
#line 1536 "modes.m"
                  check_hlds__modes__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_120_120, 0) = ((MR_Box) (check_hlds__modes__Msg_83));
#line 1536 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1536 "modes.m"
                }
#line 1535 "modes.m"
                {
#line 1535 "modes.m"
                  check_hlds__modes__UniquenessSpec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1535 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__UniquenessSpec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1535 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__UniquenessSpec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[1])));
#line 1535 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__UniquenessSpec_21, 2) = ((MR_Box) (check_hlds__modes__V_120_120));
#line 1535 "modes.m"
                }
#line 1437 "modes.m"
                {
#line 1437 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Specs_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_28_28, 0) = ((MR_Box) (check_hlds__modes__UniquenessSpec_21));
#line 1437 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_28_28, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_26_26));
#line 1437 "modes.m"
                }
#line 1436 "modes.m"
              }
#line 1438 "modes.m"
            else
#line 1438 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_28_28 = check_hlds__modes__STATE_VARIABLE_Specs_26_26;
#line 1442 "modes.m"
            {
#line 1442 "modes.m"
              check_hlds__modes__V_29_29 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__modes__PredInfo_16);
            }
#line 1442 "modes.m"
            check_hlds__modes__succeeded = (strcmp(check_hlds__modes__V_29_29, (MR_String) "main") == 0);
#line 1442 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1442 "modes.m"
              {
#line 1443 "modes.m"
                {
#line 1443 "modes.m"
                  check_hlds__modes__V_30_30 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__modes__PredInfo_16);
                }
#line 1443 "modes.m"
                check_hlds__modes__succeeded = (check_hlds__modes__V_30_30 == (MR_Integer) 2);
#line 1442 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1442 "modes.m"
                  {
#line 1444 "modes.m"
                    {
#line 1444 "modes.m"
                      check_hlds__modes__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(check_hlds__modes__PredInfo_16);
                    }
#line 1442 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1442 "modes.m"
                      {
#line 1483 "modes.m"
                        check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Modes_19)) == (MR_mktag((MR_Integer) 1)));
#line 1483 "modes.m"
                        if (check_hlds__modes__succeeded)
#line 1483 "modes.m"
                          {
#line 1483 "modes.m"
                            check_hlds__modes__Di_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Modes_19, (MR_Integer) 0)));
#line 1483 "modes.m"
                            check_hlds__modes__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Modes_19, (MR_Integer) 1)));
#line 1483 "modes.m"
                            check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__V_131_131)) == (MR_mktag((MR_Integer) 1)));
#line 1483 "modes.m"
                            if (check_hlds__modes__succeeded)
#line 1483 "modes.m"
                              {
#line 1483 "modes.m"
                                check_hlds__modes__Uo_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__V_131_131, (MR_Integer) 0)));
#line 1483 "modes.m"
                                check_hlds__modes__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__V_131_131, (MR_Integer) 1)));
#line 1483 "modes.m"
                                check_hlds__modes__succeeded = (check_hlds__modes__V_132_132 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1483 "modes.m"
                                if (check_hlds__modes__succeeded)
#line 1483 "modes.m"
                                  {
#line 1484 "modes.m"
                                    {
#line 1484 "modes.m"
                                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__Di_123, &check_hlds__modes__DiInitialInst_125, &check_hlds__modes__DiFinalInst_126);
                                    }
#line 1485 "modes.m"
                                    {
#line 1485 "modes.m"
                                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__Uo_124, &check_hlds__modes__UoInitialInst_127, &check_hlds__modes__UoFinalInst_128);
                                    }
#line 1494 "modes.m"
                                    check_hlds__modes__V_134_134 = (MR_Integer) 1;
#line 1494 "modes.m"
                                    check_hlds__modes__V_135_135 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1494 "modes.m"
                                    check_hlds__modes__V_133_133 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[3]);
#line 1494 "modes.m"
                                    {
#line 1494 "modes.m"
                                      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__DiInitialInst_125, &check_hlds__modes__V_142_142);
                                    }
#line 1494 "modes.m"
                                    {
#line 1494 "modes.m"
                                      check_hlds__modes__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modes__V_133_133, check_hlds__modes__V_142_142);
                                    }
#line 1483 "modes.m"
                                    if (check_hlds__modes__succeeded)
#line 1483 "modes.m"
                                      {
#line 1495 "modes.m"
                                        check_hlds__modes__V_137_137 = (MR_Integer) 3;
#line 1495 "modes.m"
                                        check_hlds__modes__V_138_138 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1495 "modes.m"
                                        check_hlds__modes__V_136_136 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[2]);
#line 1495 "modes.m"
                                        {
#line 1495 "modes.m"
                                          check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__DiFinalInst_126, &check_hlds__modes__V_143_143);
                                        }
#line 1495 "modes.m"
                                        {
#line 1495 "modes.m"
                                          check_hlds__modes__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modes__V_136_136, check_hlds__modes__V_143_143);
                                        }
#line 1483 "modes.m"
                                        if (check_hlds__modes__succeeded)
#line 1483 "modes.m"
                                          {
#line 1496 "modes.m"
                                            {
#line 1496 "modes.m"
                                              check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__UoInitialInst_127, &check_hlds__modes__Free_129);
                                            }
#line 1497 "modes.m"
                                            if ((check_hlds__modes__Free_129 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1497 "modes.m"
                                              check_hlds__modes__succeeded = MR_TRUE;
#line 1497 "modes.m"
                                            else
#line 1497 "modes.m"
                                            if (((MR_tag((MR_Word) check_hlds__modes__Free_129)) == (MR_mktag((MR_Integer) 1))))
#line 1497 "modes.m"
                                              check_hlds__modes__succeeded = MR_TRUE;
#line 1497 "modes.m"
                                            else
#line 1497 "modes.m"
                                              check_hlds__modes__succeeded = MR_FALSE;
#line 1483 "modes.m"
                                            if (check_hlds__modes__succeeded)
#line 1483 "modes.m"
                                              {
#line 1498 "modes.m"
                                                {
#line 1498 "modes.m"
                                                  check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__UoFinalInst_128, &check_hlds__modes__V_144_144);
                                                }
#line 1498 "modes.m"
                                                {
#line 1498 "modes.m"
                                                  check_hlds__modes__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modes__V_133_133, check_hlds__modes__V_144_144);
                                                }
#line 1483 "modes.m"
                                              }
#line 1483 "modes.m"
                                          }
#line 1483 "modes.m"
                                      }
#line 1483 "modes.m"
                                  }
#line 1483 "modes.m"
                              }
#line 1483 "modes.m"
                          }
#line 1445 "modes.m"
                        check_hlds__modes__succeeded = !(check_hlds__modes__succeeded);
#line 1442 "modes.m"
                      }
#line 1442 "modes.m"
                  }
#line 1442 "modes.m"
              }
#line 1449 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1447 "modes.m"
              {
#line 1447 "modes.m"
                MR_Word check_hlds__modes__MainSpec_22;
#line 1447 "modes.m"
                MR_Word check_hlds__modes__Context_150;
#line 1447 "modes.m"
                MR_Word check_hlds__modes__Msg_152;
#line 1447 "modes.m"
                MR_Word check_hlds__modes__V_179_179;

#line 1541 "modes.m"
                {
#line 1541 "modes.m"
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo_17, &check_hlds__modes__Context_150);
                }
#line 1544 "modes.m"
                {
#line 1544 "modes.m"
                  check_hlds__modes__Msg_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1544 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_152, 0) = ((MR_Box) (check_hlds__modes__Context_150));
#line 1544 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__Msg_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[51])));
#line 1544 "modes.m"
                }
#line 1546 "modes.m"
                {
#line 1546 "modes.m"
                  check_hlds__modes__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1546 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_179_179, 0) = ((MR_Box) (check_hlds__modes__Msg_152));
#line 1546 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__V_179_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1546 "modes.m"
                }
#line 1545 "modes.m"
                {
#line 1545 "modes.m"
                  check_hlds__modes__MainSpec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1545 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__MainSpec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1545 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__MainSpec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[1])));
#line 1545 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__MainSpec_22, 2) = ((MR_Box) (check_hlds__modes__V_179_179));
#line 1545 "modes.m"
                }
#line 1448 "modes.m"
                {
#line 1448 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Specs_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1448 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_31_31, 0) = ((MR_Box) (check_hlds__modes__MainSpec_22));
#line 1448 "modes.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modes__STATE_VARIABLE_Specs_31_31, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_28_28));
#line 1448 "modes.m"
                }
#line 1447 "modes.m"
              }
#line 1449 "modes.m"
            else
#line 1449 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_31_31 = check_hlds__modes__STATE_VARIABLE_Specs_28_28;
#line 1452 "modes.m"
            /* direct tailcall eliminated */
#line 1452 "modes.m"
            {
#line 1452 "modes.m"
              MR_Word check_hlds__modes__HeadVar__3__tmp_copy_3 = check_hlds__modes__ProcIds_14;
#line 1452 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_4 = check_hlds__modes__STATE_VARIABLE_Specs_31_31;

#line 1452 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_0_4 = check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 1452 "modes.m"
              check_hlds__modes__HeadVar__3_3 = check_hlds__modes__HeadVar__3__tmp_copy_3;
#line 1452 "modes.m"
            }
#line 1452 "modes.m"
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

#line 1404 "modes.m"
static void MR_CALL 
check_hlds__modes__pred_check_eval_methods_4_p_0(
#line 1404 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_1,
#line 1404 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1404 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_3,
#line 1404 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_4)
#line 1404 "modes.m"
{
#line 1407 "modes.m"
  while (MR_TRUE)
#line 1407 "modes.m"
    {
#line 1407 "modes.m"
      /* tailcall optimized into a loop */
#line 1407 "modes.m"
      {
#line 1407 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 1407 "modes.m"
        if ((check_hlds__modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1407 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Specs_4 = check_hlds__modes__STATE_VARIABLE_Specs_0_3;
#line 1407 "modes.m"
        else
#line 1408 "modes.m"
          {
#line 1408 "modes.m"
            MR_Word check_hlds__modes__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1408 "modes.m"
            MR_Word check_hlds__modes__PredIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1408 "modes.m"
            MR_Word check_hlds__modes__Preds_13;
#line 1408 "modes.m"
            MR_Word check_hlds__modes__PredInfo_14;
#line 1408 "modes.m"
            MR_Word check_hlds__modes__ProcIds_15;
#line 1408 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Specs_18_18;
#line 1410 "modes.m"
            MR_Box check_hlds__modes__conv0_PredInfo_14;

#line 1409 "modes.m"
            {
#line 1409 "modes.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__ModuleInfo_1, &check_hlds__modes__Preds_13);
            }
#line 1410 "modes.m"
            {
#line 1410 "modes.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__modes__Preds_13, ((MR_Box) (check_hlds__modes__PredId_10)), &check_hlds__modes__conv0_PredInfo_14);
            }
#line 1410 "modes.m"
            check_hlds__modes__PredInfo_14 = ((MR_Word) check_hlds__modes__conv0_PredInfo_14);
#line 1411 "modes.m"
            {
#line 1411 "modes.m"
              check_hlds__modes__ProcIds_15 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__modes__PredInfo_14);
            }
#line 1412 "modes.m"
            {
#line 1412 "modes.m"
              check_hlds__modes__proc_check_eval_methods_5_p_0(check_hlds__modes__ModuleInfo_1, check_hlds__modes__PredId_10, check_hlds__modes__ProcIds_15, check_hlds__modes__STATE_VARIABLE_Specs_0_3, &check_hlds__modes__STATE_VARIABLE_Specs_18_18);
            }
#line 1413 "modes.m"
            /* direct tailcall eliminated */
#line 1413 "modes.m"
            {
#line 1413 "modes.m"
              MR_Word check_hlds__modes__HeadVar__2__tmp_copy_2 = check_hlds__modes__PredIds_11;
#line 1413 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_3 = check_hlds__modes__STATE_VARIABLE_Specs_18_18;

#line 1413 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Specs_0_3 = check_hlds__modes__STATE_VARIABLE_Specs_0__tmp_copy_3;
#line 1413 "modes.m"
              check_hlds__modes__HeadVar__2_2 = check_hlds__modes__HeadVar__2__tmp_copy_2;
#line 1413 "modes.m"
            }
#line 1413 "modes.m"
            continue;
#line 1408 "modes.m"
          }
#line 1407 "modes.m"
      }
#line 1407 "modes.m"
      break;
#line 1407 "modes.m"
    }
#line 1404 "modes.m"
}

#line 1309 "modes.m"
static void MR_CALL 
check_hlds__modes__check_final_insts_13_p_0(
#line 1309 "modes.m"
  MR_Word check_hlds__modes__Vars_14,
#line 1309 "modes.m"
  MR_Word check_hlds__modes__Insts_15,
#line 1309 "modes.m"
  MR_Word check_hlds__modes__VarInsts_16,
#line 1309 "modes.m"
  MR_Word check_hlds__modes__InferModes_17,
#line 1309 "modes.m"
  MR_Word check_hlds__modes__GroundMatchesBound_18,
#line 1309 "modes.m"
  MR_Integer check_hlds__modes__ArgNum_19,
#line 1309 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_20,
#line 1309 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Goal_0_35,
#line 1309 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Goal_36,
#line 1309 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_37,
#line 1309 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_38,
#line 1309 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39,
#line 1309 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_40)
#line 1309 "modes.m"
{
#line 1322 "modes.m"
  while (MR_TRUE)
#line 1322 "modes.m"
    {
#line 1322 "modes.m"
      /* tailcall optimized into a loop */
#line 1322 "modes.m"
      {
#line 1322 "modes.m"
        MR_bool check_hlds__modes__succeeded = (check_hlds__modes__Vars_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 1317 "modes.m"
        if (check_hlds__modes__succeeded)
#line 1317 "modes.m"
          {
#line 1318 "modes.m"
            check_hlds__modes__succeeded = (check_hlds__modes__Insts_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1317 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1319 "modes.m"
              check_hlds__modes__succeeded = (check_hlds__modes__VarInsts_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1317 "modes.m"
          }
#line 1322 "modes.m"
        if (check_hlds__modes__succeeded)
#line 1321 "modes.m"
          {
#line 1321 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_ModeInfo_40 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39;
#line 1321 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Changed_38 = check_hlds__modes__STATE_VARIABLE_Changed_0_37;
#line 1321 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Goal_36 = check_hlds__modes__STATE_VARIABLE_Goal_0_35;
#line 1321 "modes.m"
          }
#line 1322 "modes.m"
        else
#line 1387 "modes.m"
          {
#line 1387 "modes.m"
            MR_Word check_hlds__modes__Var_24;
#line 1387 "modes.m"
            MR_Word check_hlds__modes__VarsTail_25;
#line 1387 "modes.m"
            MR_Word check_hlds__modes__Inst_26;
#line 1387 "modes.m"
            MR_Word check_hlds__modes__InstsTail_27;
#line 1387 "modes.m"
            MR_Word check_hlds__modes__VarInst_28;
#line 1387 "modes.m"
            MR_Word check_hlds__modes__VarInstsTail_29;

#line 1323 "modes.m"
            check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Vars_14)) == (MR_mktag((MR_Integer) 1)));
#line 1323 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1323 "modes.m"
              {
#line 1323 "modes.m"
                check_hlds__modes__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Vars_14, (MR_Integer) 0)));
#line 1323 "modes.m"
                check_hlds__modes__VarsTail_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Vars_14, (MR_Integer) 1)));
#line 1324 "modes.m"
                check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Insts_15)) == (MR_mktag((MR_Integer) 1)));
#line 1324 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1324 "modes.m"
                  {
#line 1324 "modes.m"
                    check_hlds__modes__Inst_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Insts_15, (MR_Integer) 0)));
#line 1324 "modes.m"
                    check_hlds__modes__InstsTail_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Insts_15, (MR_Integer) 1)));
#line 1325 "modes.m"
                    check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__VarInsts_16)) == (MR_mktag((MR_Integer) 1)));
#line 1325 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1325 "modes.m"
                      {
#line 1325 "modes.m"
                        check_hlds__modes__VarInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__VarInsts_16, (MR_Integer) 0)));
#line 1325 "modes.m"
                        check_hlds__modes__VarInstsTail_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__VarInsts_16, (MR_Integer) 1)));
#line 1325 "modes.m"
                      }
#line 1324 "modes.m"
                  }
#line 1323 "modes.m"
              }
#line 1387 "modes.m"
            if (check_hlds__modes__succeeded)
#line 1327 "modes.m"
              {
#line 1327 "modes.m"
                MR_Word check_hlds__modes__VarTypes_30;
#line 1327 "modes.m"
                MR_Word check_hlds__modes__Type_31;
#line 1327 "modes.m"
                MR_Word check_hlds__modes__STATE_VARIABLE_Changed_41_41;
#line 1327 "modes.m"
                MR_Word check_hlds__modes__STATE_VARIABLE_Goal_42_42;
#line 1327 "modes.m"
                MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43;
#line 1327 "modes.m"
                MR_Integer check_hlds__modes__V_45_45;

#line 1327 "modes.m"
                {
#line 1327 "modes.m"
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modes__VarTypes_30);
                }
#line 1328 "modes.m"
                {
#line 1328 "modes.m"
                  hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modes__VarTypes_30, check_hlds__modes__Var_24, &check_hlds__modes__Type_31);
                }
#line 1330 "modes.m"
                {
#line 1330 "modes.m"
                  check_hlds__modes__succeeded = check_hlds__inst_match__inst_matches_final_gmb_5_p_0(check_hlds__modes__VarInst_28, check_hlds__modes__Inst_26, check_hlds__modes__Type_31, check_hlds__modes__ModuleInfo_20, check_hlds__modes__GroundMatchesBound_18);
                }
#line 1334 "modes.m"
                if (check_hlds__modes__succeeded)
#line 1333 "modes.m"
                  {
#line 1333 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39;
#line 1333 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_Changed_41_41 = check_hlds__modes__STATE_VARIABLE_Changed_0_37;
#line 1333 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_Goal_42_42 = check_hlds__modes__STATE_VARIABLE_Goal_0_35;
#line 1333 "modes.m"
                  }
#line 1334 "modes.m"
                else
#line 1335 "modes.m"
                  {
#line 1335 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_Changed_41_41 = (MR_Integer) 1;
#line 1348 "modes.m"
                    {
#line 1348 "modes.m"
                      check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modes__ModuleInfo_20, check_hlds__modes__VarInst_28);
                    }
#line 1348 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1348 "modes.m"
                      {
#line 1349 "modes.m"
                        {
#line 1349 "modes.m"
                          check_hlds__modes__succeeded = check_hlds__inst_match__inst_is_any_2_p_0(check_hlds__modes__ModuleInfo_20, check_hlds__modes__Inst_26);
                        }
#line 1348 "modes.m"
                        if (check_hlds__modes__succeeded)
#line 1348 "modes.m"
                          {
#line 1350 "modes.m"
                            {
#line 1350 "modes.m"
                              check_hlds__modes__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(check_hlds__modes__ModuleInfo_20, check_hlds__modes__Type_31);
                            }
#line 1348 "modes.m"
                            if (check_hlds__modes__succeeded)
#line 1351 "modes.m"
                              {
#line 1351 "modes.m"
                                check_hlds__modes__succeeded = check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39);
                              }
#line 1348 "modes.m"
                          }
#line 1348 "modes.m"
                      }
#line 1355 "modes.m"
                    if (check_hlds__modes__succeeded)
#line 1353 "modes.m"
                      {
#line 1353 "modes.m"
                        check_hlds__modecheck_util__prepend_initialisation_call_7_p_0(check_hlds__modes__Var_24, check_hlds__modes__Type_31, check_hlds__modes__VarInst_28, check_hlds__modes__STATE_VARIABLE_Goal_0_35, &check_hlds__modes__STATE_VARIABLE_Goal_42_42, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43);
                      }
#line 1355 "modes.m"
                    else
#line 1361 "modes.m"
                      {
#line 1361 "modes.m"
#line 1361 "modes.m"
                        switch (check_hlds__modes__InferModes_17) {
#line 1361 "modes.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 1361 "modes.m"
                          case (MR_Integer) 0:
#line 1362 "modes.m"
                            {
#line 1362 "modes.m"
                              MR_Word check_hlds__modes__Reason_32;
#line 1362 "modes.m"
                              MR_Word check_hlds__modes__WaitingVars_33;
#line 1362 "modes.m"
                              MR_Word check_hlds__modes__ModeError_34;

#line 1366 "modes.m"
                              {
#line 1366 "modes.m"
                                check_hlds__modes__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modes__VarInst_28, check_hlds__modes__Inst_26, check_hlds__modes__Type_31, check_hlds__modes__ModuleInfo_20);
                              }
#line 1369 "modes.m"
                              if (check_hlds__modes__succeeded)
#line 1368 "modes.m"
                                check_hlds__modes__Reason_32 = (MR_Integer) 0;
#line 1369 "modes.m"
                              else
#line 1373 "modes.m"
                                {
#line 1370 "modes.m"
                                  {
#line 1370 "modes.m"
                                    check_hlds__modes__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modes__Inst_26, check_hlds__modes__VarInst_28, check_hlds__modes__Type_31, check_hlds__modes__ModuleInfo_20);
                                  }
#line 1373 "modes.m"
                                  if (check_hlds__modes__succeeded)
#line 1372 "modes.m"
                                    check_hlds__modes__Reason_32 = (MR_Integer) 1;
#line 1373 "modes.m"
                                  else
#line 1375 "modes.m"
                                    check_hlds__modes__Reason_32 = (MR_Integer) 2;
#line 1373 "modes.m"
                                }
#line 1377 "modes.m"
                              {
#line 1377 "modes.m"
                                parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modes__WaitingVars_33);
                              }
#line 1378 "modes.m"
                              {
#line 1378 "modes.m"
                                check_hlds__modes__ModeError_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1378 "modes.m"
                                MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 1378 "modes.m"
                                MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 1) = ((MR_Box) (check_hlds__modes__ArgNum_19));
#line 1378 "modes.m"
                                MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 2) = ((MR_Box) (check_hlds__modes__Var_24));
#line 1378 "modes.m"
                                MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 3) = ((MR_Box) (check_hlds__modes__VarInst_28));
#line 1378 "modes.m"
                                MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 4) = ((MR_Box) (check_hlds__modes__Inst_26));
#line 1378 "modes.m"
                                MR_hl_field(MR_mktag(3), check_hlds__modes__ModeError_34, 5) = ((MR_Box) (check_hlds__modes__Reason_32));
#line 1378 "modes.m"
                              }
#line 1380 "modes.m"
                              {
#line 1380 "modes.m"
                                check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modes__WaitingVars_33, check_hlds__modes__ModeError_34, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43);
                              }
#line 1362 "modes.m"
                            }
#line 1361 "modes.m"
                            break;
#line 1361 "modes.m"
                          case (MR_Integer) 1:
#line 1360 "modes.m"
                            check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39;
#line 1361 "modes.m"
                            break;
#line 1361 "modes.m"
                        }
#line 1361 "modes.m"
                        check_hlds__modes__STATE_VARIABLE_Goal_42_42 = check_hlds__modes__STATE_VARIABLE_Goal_0_35;
#line 1361 "modes.m"
                      }
#line 1335 "modes.m"
                  }
#line 1385 "modes.m"
                check_hlds__modes__V_45_45 = (check_hlds__modes__ArgNum_19 + (MR_Integer) 1);
#line 1384 "modes.m"
                /* direct tailcall eliminated */
#line 1384 "modes.m"
                {
#line 1384 "modes.m"
                  MR_Word check_hlds__modes__Vars__tmp_copy_14 = check_hlds__modes__VarsTail_25;
#line 1384 "modes.m"
                  MR_Word check_hlds__modes__Insts__tmp_copy_15 = check_hlds__modes__InstsTail_27;
#line 1384 "modes.m"
                  MR_Word check_hlds__modes__VarInsts__tmp_copy_16 = check_hlds__modes__VarInstsTail_29;
#line 1384 "modes.m"
                  MR_Integer check_hlds__modes__ArgNum__tmp_copy_19 = check_hlds__modes__V_45_45;
#line 1384 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_Goal_0__tmp_copy_35 = check_hlds__modes__STATE_VARIABLE_Goal_42_42;
#line 1384 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_37 = check_hlds__modes__STATE_VARIABLE_Changed_41_41;
#line 1384 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0__tmp_copy_39 = check_hlds__modes__STATE_VARIABLE_ModeInfo_43_43;

#line 1384 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_ModeInfo_0_39 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0__tmp_copy_39;
#line 1384 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Changed_0_37 = check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_37;
#line 1384 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_Goal_0_35 = check_hlds__modes__STATE_VARIABLE_Goal_0__tmp_copy_35;
#line 1384 "modes.m"
                  check_hlds__modes__ArgNum_19 = check_hlds__modes__ArgNum__tmp_copy_19;
#line 1384 "modes.m"
                  check_hlds__modes__VarInsts_16 = check_hlds__modes__VarInsts__tmp_copy_16;
#line 1384 "modes.m"
                  check_hlds__modes__Insts_15 = check_hlds__modes__Insts__tmp_copy_15;
#line 1384 "modes.m"
                  check_hlds__modes__Vars_14 = check_hlds__modes__Vars__tmp_copy_14;
#line 1384 "modes.m"
                }
#line 1384 "modes.m"
                continue;
#line 1327 "modes.m"
              }
#line 1387 "modes.m"
            else
#line 1388 "modes.m"
              {
#line 1388 "modes.m"
                {
#line 1388 "modes.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.check_final_insts\'/13", (MR_String) "length mismatch");
#line 1388 "modes.m"
                  return;
                }
#line 1388 "modes.m"
              }
#line 1387 "modes.m"
          }
#line 1322 "modes.m"
      }
#line 1322 "modes.m"
      break;
#line 1322 "modes.m"
    }
#line 1309 "modes.m"
}

#line 1291 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_clobber_insts_3_p_0(
#line 1291 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 1291 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 1291 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__3_3)
#line 1291 "modes.m"
{
#line 1294 "modes.m"
  {
#line 1294 "modes.m"
    MR_bool check_hlds__modes__succeeded;

#line 1294 "modes.m"
    if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1294 "modes.m"
      if ((check_hlds__modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1298 "modes.m"
        *check_hlds__modes__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1294 "modes.m"
      else
#line 1294 "modes.m"
        {
#line 1295 "modes.m"
          {
#line 1295 "modes.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.maybe_clobber_insts\'/3", (MR_String) "length mismatch");
#line 1295 "modes.m"
            return;
          }
#line 1294 "modes.m"
        }
#line 1294 "modes.m"
    else
#line 1294 "modes.m"
      {
#line 1294 "modes.m"
        MR_Word check_hlds__modes__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1294 "modes.m"
        MR_Word check_hlds__modes__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));

#line 1294 "modes.m"
        if ((check_hlds__modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1296 "modes.m"
          {
#line 1297 "modes.m"
            {
#line 1297 "modes.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.maybe_clobber_insts\'/3", (MR_String) "length mismatch");
#line 1297 "modes.m"
              return;
            }
#line 1296 "modes.m"
          }
#line 1294 "modes.m"
        else
#line 1299 "modes.m"
          {
#line 1299 "modes.m"
            MR_Word check_hlds__modes__IsLive_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 0)));
#line 1299 "modes.m"
            MR_Word check_hlds__modes__IsLives_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__2_2, (MR_Integer) 1)));
#line 1299 "modes.m"
            MR_Word check_hlds__modes__Inst_20;
#line 1299 "modes.m"
            MR_Word check_hlds__modes__Insts_21;

#line 1303 "modes.m"
#line 1303 "modes.m"
            switch (check_hlds__modes__IsLive_18) {
#line 1303 "modes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1303 "modes.m"
              case (MR_Integer) 1:
#line 1301 "modes.m"
                {
#line 1302 "modes.m"
                  check_hlds__modes__Inst_20 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_2[2]);
#line 1301 "modes.m"
                }
#line 1303 "modes.m"
                break;
#line 1303 "modes.m"
              case (MR_Integer) 0:
#line 1304 "modes.m"
                check_hlds__modes__Inst_20 = check_hlds__modes__V_25_25;
#line 1303 "modes.m"
                break;
#line 1303 "modes.m"
            }
#line 1307 "modes.m"
            {
#line 1307 "modes.m"
              check_hlds__modes__maybe_clobber_insts_3_p_0(check_hlds__modes__V_24_24, check_hlds__modes__IsLives_19, &check_hlds__modes__Insts_21);
            }
#line 1299 "modes.m"
            {
#line 1299 "modes.m"
              MR_Word base;
#line 1299 "modes.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1299 "modes.m"
              *check_hlds__modes__HeadVar__3_3 = base;
#line 1299 "modes.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modes__Inst_20));
#line 1299 "modes.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modes__Insts_21));
#line 1299 "modes.m"
            }
#line 1299 "modes.m"
          }
#line 1294 "modes.m"
      }
#line 1294 "modes.m"
  }
#line 1291 "modes.m"
}

#line 1228 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_final_insts_8_p_0(
#line 1228 "modes.m"
  MR_Word check_hlds__modes__HeadVars_9,
#line 1228 "modes.m"
  MR_Word check_hlds__modes__InferModes_10,
#line 1228 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14,
#line 1228 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_FinalInsts_15,
#line 1228 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Body_0_16,
#line 1228 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Body_17,
#line 1228 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
#line 1228 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19)
#line 1228 "modes.m"
{
#line 1232 "modes.m"
  {
#line 1232 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1232 "modes.m"
    MR_Word check_hlds__modes__ModuleInfo_34;
#line 1232 "modes.m"
    MR_Word check_hlds__modes__Errors_35;
#line 1232 "modes.m"
    MR_Word check_hlds__modes__Changed0_38;
#line 1232 "modes.m"
    MR_Word check_hlds__modes__InstMap_39;
#line 1232 "modes.m"
    MR_Word check_hlds__modes__VarTypes_40;
#line 1232 "modes.m"
    MR_Word check_hlds__modes__VarFinalInsts1_41;
#line 1232 "modes.m"
    MR_Word check_hlds__modes__ArgTypes_42;

#line 1242 "modes.m"
    {
#line 1242 "modes.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__ModuleInfo_34);
    }
#line 1243 "modes.m"
    {
#line 1243 "modes.m"
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__Errors_35);
    }
#line 1257 "modes.m"
    if ((check_hlds__modes__Errors_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1258 "modes.m"
      {
#line 1259 "modes.m"
        check_hlds__modes__Changed0_38 = (MR_Integer) 0;
#line 1260 "modes.m"
        {
#line 1260 "modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__InstMap_39);
        }
#line 1258 "modes.m"
      }
#line 1257 "modes.m"
    else
#line 1251 "modes.m"
      {
#line 1255 "modes.m"
        check_hlds__modes__Changed0_38 = (MR_Integer) 1;
#line 1256 "modes.m"
        {
#line 1256 "modes.m"
          hlds__instmap__init_unreachable_1_p_0(&check_hlds__modes__InstMap_39);
        }
#line 1251 "modes.m"
      }
#line 1262 "modes.m"
    {
#line 1262 "modes.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__VarTypes_40);
    }
#line 1263 "modes.m"
    {
#line 1263 "modes.m"
      hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modes__InstMap_39, check_hlds__modes__HeadVars_9, &check_hlds__modes__VarFinalInsts1_41);
    }
#line 1264 "modes.m"
    {
#line 1264 "modes.m"
      hlds__vartypes__lookup_var_types_3_p_0(check_hlds__modes__VarTypes_40, check_hlds__modes__HeadVars_9, &check_hlds__modes__ArgTypes_42);
    }
#line 1283 "modes.m"
#line 1283 "modes.m"
    switch (check_hlds__modes__InferModes_10) {
#line 1283 "modes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1283 "modes.m"
      case (MR_Integer) 0:
#line 1284 "modes.m"
        {
#line 1285 "modes.m"
          MR_Word check_hlds__modes___Changed1_51;

#line 1285 "modes.m"
          {
#line 1285 "modes.m"
            check_hlds__modes__check_final_insts_13_p_0(check_hlds__modes__HeadVars_9, check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14, check_hlds__modes__VarFinalInsts1_41, check_hlds__modes__InferModes_10, (MR_Integer) 0, (MR_Integer) 1, check_hlds__modes__ModuleInfo_34, check_hlds__modes__STATE_VARIABLE_Body_0_16, check_hlds__modes__STATE_VARIABLE_Body_17, (MR_Integer) 0, &check_hlds__modes___Changed1_51, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, check_hlds__modes__STATE_VARIABLE_ModeInfo_19);
          }
#line 1288 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_FinalInsts_15 = check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14;
#line 1284 "modes.m"
        }
#line 1283 "modes.m"
        break;
#line 1283 "modes.m"
      case (MR_Integer) 1:
#line 1266 "modes.m"
        {
#line 1266 "modes.m"
          MR_Word check_hlds__modes__VarFinalInsts2_43;
#line 1266 "modes.m"
          MR_Word check_hlds__modes__PredId_44;
#line 1266 "modes.m"
          MR_Integer check_hlds__modes__ProcId_45;
#line 1266 "modes.m"
          MR_Word check_hlds__modes__ProcInfo_46;
#line 1266 "modes.m"
          MR_Word check_hlds__modes__ArgLives_47;
#line 1266 "modes.m"
          MR_Word check_hlds__modes__Changed1_48;
#line 1266 "modes.m"
          MR_Word check_hlds__modes__Changed2_49;
#line 1266 "modes.m"
          MR_Word check_hlds__modes__Changed_50;
#line 1266 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_43_57;
#line 1266 "modes.m"
          MR_Word check_hlds__modes__V_58_58;
#line 1266 "modes.m"
          MR_Word check_hlds__modes__V_59_59;
#line 1266 "modes.m"
          MR_Word check_hlds__modes__V_60_60;

#line 1267 "modes.m"
          {
#line 1267 "modes.m"
            check_hlds__mode_util__normalise_insts_4_p_0(check_hlds__modes__ModuleInfo_34, check_hlds__modes__ArgTypes_42, check_hlds__modes__VarFinalInsts1_41, &check_hlds__modes__VarFinalInsts2_43);
          }
#line 1272 "modes.m"
          {
#line 1272 "modes.m"
            check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__PredId_44);
          }
#line 1273 "modes.m"
          {
#line 1273 "modes.m"
            check_hlds__mode_info__mode_info_get_proc_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__ProcId_45);
          }
#line 1274 "modes.m"
          {
#line 1274 "modes.m"
            hlds__hlds_module__module_info_proc_info_4_p_0(check_hlds__modes__ModuleInfo_34, check_hlds__modes__PredId_44, check_hlds__modes__ProcId_45, &check_hlds__modes__ProcInfo_46);
          }
#line 1275 "modes.m"
          {
#line 1275 "modes.m"
            hlds__hlds_pred__proc_info_arglives_3_p_0(check_hlds__modes__ProcInfo_46, check_hlds__modes__ModuleInfo_34, &check_hlds__modes__ArgLives_47);
          }
#line 1276 "modes.m"
          {
#line 1276 "modes.m"
            check_hlds__modes__maybe_clobber_insts_3_p_0(check_hlds__modes__VarFinalInsts2_43, check_hlds__modes__ArgLives_47, check_hlds__modes__STATE_VARIABLE_FinalInsts_15);
          }
#line 1277 "modes.m"
          {
#line 1277 "modes.m"
            check_hlds__modes__check_final_insts_13_p_0(check_hlds__modes__HeadVars_9, check_hlds__modes__STATE_VARIABLE_FinalInsts_0_14, *check_hlds__modes__STATE_VARIABLE_FinalInsts_15, check_hlds__modes__InferModes_10, (MR_Integer) 0, (MR_Integer) 1, check_hlds__modes__ModuleInfo_34, check_hlds__modes__STATE_VARIABLE_Body_0_16, check_hlds__modes__STATE_VARIABLE_Body_17, (MR_Integer) 0, &check_hlds__modes__Changed1_48, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__STATE_VARIABLE_ModeInfo_43_57);
          }
#line 1280 "modes.m"
          {
#line 1280 "modes.m"
            check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_43_57, &check_hlds__modes__Changed2_49);
          }
#line 1281 "modes.m"
          {
#line 1281 "modes.m"
            check_hlds__modes__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1281 "modes.m"
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_60_60, 0) = ((MR_Box) (check_hlds__modes__Changed2_49));
#line 1281 "modes.m"
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1281 "modes.m"
          }
#line 1281 "modes.m"
          {
#line 1281 "modes.m"
            check_hlds__modes__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1281 "modes.m"
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_59_59, 0) = ((MR_Box) (check_hlds__modes__Changed1_48));
#line 1281 "modes.m"
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_59_59, 1) = ((MR_Box) (check_hlds__modes__V_60_60));
#line 1281 "modes.m"
          }
#line 1281 "modes.m"
          {
#line 1281 "modes.m"
            check_hlds__modes__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1281 "modes.m"
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_58_58, 0) = ((MR_Box) (check_hlds__modes__Changed0_38));
#line 1281 "modes.m"
            MR_hl_field(MR_mktag(1), check_hlds__modes__V_58_58, 1) = ((MR_Box) (check_hlds__modes__V_59_59));
#line 1281 "modes.m"
          }
#line 1281 "modes.m"
          {
#line 1281 "modes.m"
            mercury__bool__or_list_2_p_0(check_hlds__modes__V_58_58, &check_hlds__modes__Changed_50);
          }
#line 1282 "modes.m"
          {
#line 1282 "modes.m"
            check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(check_hlds__modes__Changed_50, check_hlds__modes__STATE_VARIABLE_ModeInfo_43_57, check_hlds__modes__STATE_VARIABLE_ModeInfo_19);
#line 1282 "modes.m"
            return;
          }
#line 1266 "modes.m"
        }
#line 1283 "modes.m"
        break;
#line 1283 "modes.m"
    }
#line 1232 "modes.m"
  }
#line 1228 "modes.m"
}

#line 1183 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_switch_9_p_0(
#line 1183 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1183 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1183 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1183 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1183 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1183 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1183 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1183 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1183 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28)
#line 1183 "modes.m"
{
#line 1188 "modes.m"
  {
#line 1188 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1188 "modes.m"
    MR_Word check_hlds__modes__MainConsId_18;
#line 1188 "modes.m"
    MR_Word check_hlds__modes__OtherConsIds_19;
#line 1188 "modes.m"
    MR_Word check_hlds__modes__Goal0_20;
#line 1188 "modes.m"
    MR_Word check_hlds__modes__InstMap1_21;
#line 1188 "modes.m"
    MR_Word check_hlds__modes__Goal1_22;
#line 1188 "modes.m"
    MR_Word check_hlds__modes__InstMap_23;
#line 1188 "modes.m"
    MR_Word check_hlds__modes__Goal2_24;
#line 1188 "modes.m"
    MR_Word check_hlds__modes__Goal_26;
#line 1188 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30;
#line 1188 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31;
#line 1188 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1188 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33;
#line 1188 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35;
#line 1211 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_25;

#line 1189 "modes.m"
    {
#line 1189 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27, &check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30);
    }
#line 1190 "modes.m"
    check_hlds__modes__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 0)));
#line 1190 "modes.m"
    check_hlds__modes__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 1)));
#line 1190 "modes.m"
    check_hlds__modes__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 2)));
#line 1191 "modes.m"
    {
#line 1191 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31);
    }
#line 1193 "modes.m"
    {
#line 1193 "modes.m"
      check_hlds__modecheck_util__modecheck_functors_test_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__MainConsId_18, check_hlds__modes__OtherConsIds_19, check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32);
    }
#line 1195 "modes.m"
    {
#line 1195 "modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__InstMap1_21);
    }
#line 1196 "modes.m"
    {
#line 1196 "modes.m"
      check_hlds__modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modes__InstMap1_21);
    }
#line 1198 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1197 "modes.m"
      {
#line 1197 "modes.m"
        check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modes__Goal0_20, &check_hlds__modes__Goal1_22, check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33);
      }
#line 1198 "modes.m"
    else
#line 1202 "modes.m"
      {
#line 1202 "modes.m"
        {
#line 1202 "modes.m"
          check_hlds__modes__Goal1_22 = hlds__make_goal__true_goal_0_f_0();
        }
#line 1202 "modes.m"
        check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33 = check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1202 "modes.m"
      }
#line 1206 "modes.m"
    {
#line 1206 "modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__InstMap_23);
    }
#line 1207 "modes.m"
    {
#line 1207 "modes.m"
      check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__InstMap0_12, check_hlds__modes__InstMap_23, check_hlds__modes__Goal1_22, &check_hlds__modes__Goal2_24);
    }
#line 1208 "modes.m"
    {
#line 1208 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35);
    }
#line 1211 "modes.m"
    {
#line 1211 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_11, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_13, &check_hlds__modes___ArgFinalInsts_25, check_hlds__modes__Goal2_24, &check_hlds__modes__Goal_26, check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35, check_hlds__modes__STATE_VARIABLE_ModeInfo_28);
    }
#line 1213 "modes.m"
    {
#line 1213 "modes.m"
      MR_Word base;
#line 1213 "modes.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1213 "modes.m"
      *check_hlds__modes__Case_16 = base;
#line 1213 "modes.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__MainConsId_18));
#line 1213 "modes.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__OtherConsIds_19));
#line 1213 "modes.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modes__Goal_26));
#line 1213 "modes.m"
    }
#line 1188 "modes.m"
  }
#line 1183 "modes.m"
}

#line 1163 "modes.m"
static void MR_CALL 
check_hlds__modes__unique_modecheck_clause_disj_11_p_0(
#line 1163 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_12,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__HeadVars_13,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__InstMap0_14,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_15,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__DisjDetism_16,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__DisjNonLocals_17,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__NondetLiveVars0_18,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_19,
#line 1163 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_20,
#line 1163 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_24,
#line 1163 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_25)
#line 1163 "modes.m"
{
#line 1170 "modes.m"
  {
#line 1170 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1170 "modes.m"
    MR_Word check_hlds__modes__Disjunct1_22;
#line 1170 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_27_27;
#line 1170 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_28_28;
#line 1170 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_29_29;
#line 1170 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30;
#line 1170 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31;
#line 1170 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33;
#line 1180 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_23;

#line 1171 "modes.m"
    {
#line 1171 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_24, &check_hlds__modes__STATE_VARIABLE_ModeInfo_27_27);
    }
#line 1172 "modes.m"
    {
#line 1172 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_14, check_hlds__modes__STATE_VARIABLE_ModeInfo_27_27, &check_hlds__modes__STATE_VARIABLE_ModeInfo_28_28);
    }
#line 1173 "modes.m"
    {
#line 1173 "modes.m"
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__modes__NondetLiveVars0_18, check_hlds__modes__STATE_VARIABLE_ModeInfo_28_28, &check_hlds__modes__STATE_VARIABLE_ModeInfo_29_29);
    }
#line 1174 "modes.m"
    {
#line 1174 "modes.m"
      check_hlds__unique_modes__prepare_for_disjunct_5_p_0(check_hlds__modes__Disjunct0_19, check_hlds__modes__DisjDetism_16, check_hlds__modes__DisjNonLocals_17, check_hlds__modes__STATE_VARIABLE_ModeInfo_29_29, &check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30);
    }
#line 1176 "modes.m"
    {
#line 1176 "modes.m"
      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modes__Disjunct0_19, &check_hlds__modes__Disjunct1_22, check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31);
    }
#line 1177 "modes.m"
    {
#line 1177 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33);
    }
#line 1180 "modes.m"
    {
#line 1180 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_13, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_15, &check_hlds__modes___ArgFinalInsts_23, check_hlds__modes__Disjunct1_22, check_hlds__modes__Disjunct_20, check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, check_hlds__modes__STATE_VARIABLE_ModeInfo_25);
    }
#line 1170 "modes.m"
  }
#line 1163 "modes.m"
}

#line 1129 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_switch_9_p_0(
#line 1129 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_10,
#line 1129 "modes.m"
  MR_Word check_hlds__modes__HeadVars_11,
#line 1129 "modes.m"
  MR_Word check_hlds__modes__InstMap0_12,
#line 1129 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_13,
#line 1129 "modes.m"
  MR_Word check_hlds__modes__Var_14,
#line 1129 "modes.m"
  MR_Word check_hlds__modes__Case0_15,
#line 1129 "modes.m"
  MR_Word * check_hlds__modes__Case_16,
#line 1129 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27,
#line 1129 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_28)
#line 1129 "modes.m"
{
#line 1134 "modes.m"
  {
#line 1134 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1134 "modes.m"
    MR_Word check_hlds__modes__MainConsId_18;
#line 1134 "modes.m"
    MR_Word check_hlds__modes__OtherConsIds_19;
#line 1134 "modes.m"
    MR_Word check_hlds__modes__Goal0_20;
#line 1134 "modes.m"
    MR_Word check_hlds__modes__InstMap1_21;
#line 1134 "modes.m"
    MR_Word check_hlds__modes__Goal1_22;
#line 1134 "modes.m"
    MR_Word check_hlds__modes__InstMap_23;
#line 1134 "modes.m"
    MR_Word check_hlds__modes__Goal2_24;
#line 1134 "modes.m"
    MR_Word check_hlds__modes__Goal_26;
#line 1134 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30;
#line 1134 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31;
#line 1134 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1134 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33;
#line 1134 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35;
#line 1159 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_25;

#line 1135 "modes.m"
    {
#line 1135 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_27, &check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30);
    }
#line 1136 "modes.m"
    check_hlds__modes__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 0)));
#line 1136 "modes.m"
    check_hlds__modes__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 1)));
#line 1136 "modes.m"
    check_hlds__modes__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Case0_15, (MR_Integer) 2)));
#line 1137 "modes.m"
    {
#line 1137 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_12, check_hlds__modes__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31);
    }
#line 1139 "modes.m"
    {
#line 1139 "modes.m"
      check_hlds__modecheck_util__modecheck_functors_test_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__MainConsId_18, check_hlds__modes__OtherConsIds_19, check_hlds__modes__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32);
    }
#line 1142 "modes.m"
    {
#line 1142 "modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__InstMap1_21);
    }
#line 1143 "modes.m"
    {
#line 1143 "modes.m"
      check_hlds__modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modes__InstMap1_21);
    }
#line 1146 "modes.m"
    if (check_hlds__modes__succeeded)
#line 1144 "modes.m"
      {
#line 1144 "modes.m"
        {
#line 1144 "modes.m"
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modes__Goal0_20, &check_hlds__modes__Goal1_22, check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33);
        }
#line 1145 "modes.m"
        {
#line 1145 "modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__InstMap_23);
        }
#line 1144 "modes.m"
      }
#line 1146 "modes.m"
    else
#line 1150 "modes.m"
      {
#line 1150 "modes.m"
        {
#line 1150 "modes.m"
          check_hlds__modes__Goal1_22 = hlds__make_goal__true_goal_0_f_0();
        }
#line 1151 "modes.m"
        check_hlds__modes__InstMap_23 = check_hlds__modes__InstMap1_21;
#line 1150 "modes.m"
        check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33 = check_hlds__modes__STATE_VARIABLE_ModeInfo_32_32;
#line 1150 "modes.m"
      }
#line 1155 "modes.m"
    {
#line 1155 "modes.m"
      check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(check_hlds__modes__Var_14, check_hlds__modes__InstMap0_12, check_hlds__modes__InstMap_23, check_hlds__modes__Goal1_22, &check_hlds__modes__Goal2_24);
    }
#line 1156 "modes.m"
    {
#line 1156 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_10, check_hlds__modes__STATE_VARIABLE_ModeInfo_33_33, &check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35);
    }
#line 1159 "modes.m"
    {
#line 1159 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_11, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_13, &check_hlds__modes___ArgFinalInsts_25, check_hlds__modes__Goal2_24, &check_hlds__modes__Goal_26, check_hlds__modes__STATE_VARIABLE_ModeInfo_35_35, check_hlds__modes__STATE_VARIABLE_ModeInfo_28);
    }
#line 1161 "modes.m"
    {
#line 1161 "modes.m"
      MR_Word base;
#line 1161 "modes.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1161 "modes.m"
      *check_hlds__modes__Case_16 = base;
#line 1161 "modes.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__MainConsId_18));
#line 1161 "modes.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__OtherConsIds_19));
#line 1161 "modes.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modes__Goal_26));
#line 1161 "modes.m"
    }
#line 1134 "modes.m"
  }
#line 1129 "modes.m"
}

#line 1114 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_clause_disj_8_p_0(
#line 1114 "modes.m"
  MR_String check_hlds__modes__CheckpointMsg_9,
#line 1114 "modes.m"
  MR_Word check_hlds__modes__HeadVars_10,
#line 1114 "modes.m"
  MR_Word check_hlds__modes__InstMap0_11,
#line 1114 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_12,
#line 1114 "modes.m"
  MR_Word check_hlds__modes__Disjunct0_13,
#line 1114 "modes.m"
  MR_Word * check_hlds__modes__Disjunct_14,
#line 1114 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18,
#line 1114 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_19)
#line 1114 "modes.m"
{
#line 1119 "modes.m"
  {
#line 1119 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1119 "modes.m"
    MR_Word check_hlds__modes__Disjunct1_16;
#line 1119 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_21_21;
#line 1119 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_22_22;
#line 1119 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_23_23;
#line 1119 "modes.m"
    MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_25_25;
#line 1126 "modes.m"
    MR_Word check_hlds__modes___ArgFinalInsts_17;

#line 1120 "modes.m"
    {
#line 1120 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_9, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modes__STATE_VARIABLE_ModeInfo_21_21);
    }
#line 1121 "modes.m"
    {
#line 1121 "modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modes__InstMap0_11, check_hlds__modes__STATE_VARIABLE_ModeInfo_21_21, &check_hlds__modes__STATE_VARIABLE_ModeInfo_22_22);
    }
#line 1122 "modes.m"
    {
#line 1122 "modes.m"
      check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modes__Disjunct0_13, &check_hlds__modes__Disjunct1_16, check_hlds__modes__STATE_VARIABLE_ModeInfo_22_22, &check_hlds__modes__STATE_VARIABLE_ModeInfo_23_23);
    }
#line 1123 "modes.m"
    {
#line 1123 "modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_9, check_hlds__modes__STATE_VARIABLE_ModeInfo_23_23, &check_hlds__modes__STATE_VARIABLE_ModeInfo_25_25);
    }
#line 1126 "modes.m"
    {
#line 1126 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_10, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts0_12, &check_hlds__modes___ArgFinalInsts_17, check_hlds__modes__Disjunct1_16, check_hlds__modes__Disjunct_14, check_hlds__modes__STATE_VARIABLE_ModeInfo_25_25, check_hlds__modes__STATE_VARIABLE_ModeInfo_19);
    }
#line 1119 "modes.m"
  }
#line 1114 "modes.m"
}

#line 1080 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0_1(
#line 1080 "modes.m"
  MR_Box check_hlds__modes__closure_arg)
#line 1080 "modes.m"
{
#line 1080 "modes.m"
  {
#line 1080 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1080 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;

#line 1080 "modes.m"
    {
#line 1080 "modes.m"
      return check_hlds__modes__succeeded = check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__1080__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))));
    }
#line 1080 "modes.m"
    return check_hlds__modes__succeeded;
#line 1080 "modes.m"
  }
#line 1080 "modes.m"
}

#line 968 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_queued_procs_7_p_0(
#line 968 "modes.m"
  MR_Word check_hlds__modes__HowToCheckGoal_8,
#line 968 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26,
#line 968 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_OldPredTable_27,
#line 968 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28,
#line 968 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_29,
#line 968 "modes.m"
  MR_Word * check_hlds__modes__Changed_11,
#line 968 "modes.m"
  MR_Word * check_hlds__modes__Specs_12)
#line 968 "modes.m"
{
#line 973 "modes.m"
  {
#line 973 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 973 "modes.m"
    MR_Word check_hlds__modes__Requests0_13;
#line 973 "modes.m"
    MR_Word check_hlds__modes__RequestQueue0_14;
#line 1003 "modes.m"
    MR_Word check_hlds__modes__PredProcId_15;
#line 1003 "modes.m"
    MR_Word check_hlds__modes__RequestQueue1_16;
#line 976 "modes.m"
    MR_Box check_hlds__modes__conv0_PredProcId_15;

#line 974 "modes.m"
    {
#line 974 "modes.m"
      hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28, &check_hlds__modes__Requests0_13);
    }
#line 975 "modes.m"
    {
#line 975 "modes.m"
      check_hlds__unify_proc__get_req_queue_2_p_0(check_hlds__modes__Requests0_13, &check_hlds__modes__RequestQueue0_14);
    }
#line 976 "modes.m"
    {
#line 976 "modes.m"
      check_hlds__modes__succeeded = mercury__queue__get_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, &check_hlds__modes__conv0_PredProcId_15, check_hlds__modes__RequestQueue0_14, &check_hlds__modes__RequestQueue1_16);
    }
#line 976 "modes.m"
    if (check_hlds__modes__succeeded)
#line 976 "modes.m"
      {
#line 976 "modes.m"
        check_hlds__modes__PredProcId_15 = ((MR_Word) check_hlds__modes__conv0_PredProcId_15);
#line 976 "modes.m"
        check_hlds__modes__succeeded = MR_TRUE;
#line 976 "modes.m"
      }
#line 1003 "modes.m"
    if (check_hlds__modes__succeeded)
#line 977 "modes.m"
      {
#line 977 "modes.m"
        MR_Word check_hlds__modes__Requests1_17;
#line 977 "modes.m"
        MR_Word check_hlds__modes__PredId_18;
#line 977 "modes.m"
        MR_Word check_hlds__modes__ValidPredIds_20;
#line 977 "modes.m"
        MR_Word check_hlds__modes__HeadChanged_22;
#line 977 "modes.m"
        MR_Word check_hlds__modes__HeadSpecs_23;
#line 977 "modes.m"
        MR_Word check_hlds__modes__TailChanged_24;
#line 977 "modes.m"
        MR_Word check_hlds__modes__TailSpecs_25;
#line 977 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30;
#line 977 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33;
#line 977 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34;
#line 986 "modes.m"
        MR_Integer check_hlds__modes___ProcId_19;

#line 977 "modes.m"
        {
#line 977 "modes.m"
          check_hlds__unify_proc__set_req_queue_3_p_0(check_hlds__modes__RequestQueue1_16, check_hlds__modes__Requests0_13, &check_hlds__modes__Requests1_17);
        }
#line 978 "modes.m"
        {
#line 978 "modes.m"
          hlds__hlds_module__module_info_set_proc_requests_3_p_0(check_hlds__modes__Requests1_17, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30);
        }
#line 986 "modes.m"
        check_hlds__modes__PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 0)));
#line 986 "modes.m"
        check_hlds__modes___ProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 1)));
#line 987 "modes.m"
        {
#line 987 "modes.m"
          hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__modes__ValidPredIds_20);
        }
#line 988 "modes.m"
        {
#line 988 "modes.m"
          check_hlds__modes__succeeded = mercury__set_tree234__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (check_hlds__modes__PredId_18)), check_hlds__modes__ValidPredIds_20);
        }
#line 995 "modes.m"
        if (check_hlds__modes__succeeded)
#line 992 "modes.m"
          {
#line 992 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_61_110;
#line 992 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_62_111;
#line 992 "modes.m"
            MR_Word check_hlds__modes__TypeCtorInfo_64_113;
#line 992 "modes.m"
            MR_Word check_hlds__modes__PredId_69;
#line 992 "modes.m"
            MR_Integer check_hlds__modes__ProcId_70;
#line 992 "modes.m"
            MR_Word check_hlds__modes__Preds0_71;
#line 992 "modes.m"
            MR_Word check_hlds__modes__PredInfo0_72;
#line 992 "modes.m"
            MR_Word check_hlds__modes__Procs0_73;
#line 992 "modes.m"
            MR_Word check_hlds__modes__ProcInfo0_74;
#line 992 "modes.m"
            MR_Word check_hlds__modes__ProcInfo1_75;
#line 992 "modes.m"
            MR_Word check_hlds__modes__Procs1_76;
#line 992 "modes.m"
            MR_Word check_hlds__modes__PredInfo1_77;
#line 992 "modes.m"
            MR_Word check_hlds__modes__Preds1_78;
#line 992 "modes.m"
            MR_Word check_hlds__modes__ModeSpecs_79;
#line 992 "modes.m"
            MR_Word check_hlds__modes__Globals_80;
#line 992 "modes.m"
            MR_Word check_hlds__modes__ModeErrors_81;
#line 992 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_46_95;
#line 992 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96;
#line 992 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Changed_48_97;
#line 989 "modes.m"
            MR_Word check_hlds__modes__Globals_46;
#line 989 "modes.m"
            MR_Word check_hlds__modes__VeryVerbose_47;
#line 1040 "modes.m"
            MR_Box check_hlds__modes__conv1_PredInfo0_72;
#line 1042 "modes.m"
            MR_Box check_hlds__modes__conv2_ProcInfo0_74;

#line 1012 "modes.m"
            {
#line 1012 "modes.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__modes__Globals_46);
            }
#line 1013 "modes.m"
            {
#line 1013 "modes.m"
              libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_46, (MR_Integer) 46, &check_hlds__modes__VeryVerbose_47);
            }
#line 1026 "modes.m"
#line 1026 "modes.m"
            switch (check_hlds__modes__VeryVerbose_47) {
#line 1026 "modes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1026 "modes.m"
              case (MR_Integer) 0:
#line 1027 "modes.m"
                {
#line 1027 "modes.m"
                }
#line 1026 "modes.m"
                break;
#line 1026 "modes.m"
              case (MR_Integer) 1:
#line 1015 "modes.m"
                {
#line 1019 "modes.m"
#line 1019 "modes.m"
                  switch (check_hlds__modes__HowToCheckGoal_8) {
#line 1019 "modes.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1019 "modes.m"
                    case (MR_Integer) 0:
#line 1017 "modes.m"
                      {
#line 1018 "modes.m"
                        {
#line 1018 "modes.m"
                          mercury__io__write_string_3_p_0((MR_String) "% Mode-analyzing ");
                        }
#line 1017 "modes.m"
                      }
#line 1019 "modes.m"
                      break;
#line 1019 "modes.m"
                    case (MR_Integer) 1:
#line 1020 "modes.m"
                      {
#line 1021 "modes.m"
                        {
#line 1021 "modes.m"
                          mercury__io__write_string_3_p_0((MR_String) "% Analyzing modes, determinism, and unique-modes for\n% ");
                        }
#line 1020 "modes.m"
                      }
#line 1019 "modes.m"
                      break;
#line 1019 "modes.m"
                  }
#line 1024 "modes.m"
                  {
#line 1024 "modes.m"
                    hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30, check_hlds__modes__PredProcId_15);
                  }
#line 1025 "modes.m"
                  {
#line 1025 "modes.m"
                    mercury__io__write_string_3_p_0((MR_String) "\n");
                  }
#line 1015 "modes.m"
                }
#line 1026 "modes.m"
                break;
#line 1026 "modes.m"
            }
#line 1037 "modes.m"
            check_hlds__modes__PredId_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 0)));
#line 1037 "modes.m"
            check_hlds__modes__ProcId_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modes__PredProcId_15, (MR_Integer) 1)));
#line 1039 "modes.m"
            {
#line 1039 "modes.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__modes__Preds0_71);
            }
#line 4446 "check_hlds.modes.c"
            check_hlds__modes__TypeCtorInfo_61_110 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 4448 "check_hlds.modes.c"
            check_hlds__modes__TypeCtorInfo_62_111 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 1040 "modes.m"
            {
#line 1040 "modes.m"
              mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_61_110, check_hlds__modes__TypeCtorInfo_62_111, check_hlds__modes__Preds0_71, ((MR_Box) (check_hlds__modes__PredId_69)), &check_hlds__modes__conv1_PredInfo0_72);
            }
#line 1040 "modes.m"
            check_hlds__modes__PredInfo0_72 = ((MR_Word) check_hlds__modes__conv1_PredInfo0_72);
#line 1041 "modes.m"
            {
#line 1041 "modes.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__PredInfo0_72, &check_hlds__modes__Procs0_73);
            }
#line 4462 "check_hlds.modes.c"
            check_hlds__modes__TypeCtorInfo_64_113 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 1042 "modes.m"
            {
#line 1042 "modes.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__modes__TypeCtorInfo_64_113, check_hlds__modes__Procs0_73, check_hlds__modes__ProcId_70, &check_hlds__modes__conv2_ProcInfo0_74);
            }
#line 1042 "modes.m"
            check_hlds__modes__ProcInfo0_74 = ((MR_Word) check_hlds__modes__conv2_ProcInfo0_74);
#line 1044 "modes.m"
            {
#line 1044 "modes.m"
              hlds__hlds_pred__proc_info_set_can_process_3_p_0((MR_Integer) 0, check_hlds__modes__ProcInfo0_74, &check_hlds__modes__ProcInfo1_75);
            }
#line 1046 "modes.m"
            {
#line 1046 "modes.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__modes__TypeCtorInfo_64_113, check_hlds__modes__ProcId_70, ((MR_Box) (check_hlds__modes__ProcInfo1_75)), check_hlds__modes__Procs0_73, &check_hlds__modes__Procs1_76);
            }
#line 1047 "modes.m"
            {
#line 1047 "modes.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__modes__Procs1_76, check_hlds__modes__PredInfo0_72, &check_hlds__modes__PredInfo1_77);
            }
#line 1048 "modes.m"
            {
#line 1048 "modes.m"
              mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_61_110, check_hlds__modes__TypeCtorInfo_62_111, ((MR_Box) (check_hlds__modes__PredId_69)), ((MR_Box) (check_hlds__modes__PredInfo1_77)), check_hlds__modes__Preds0_71, &check_hlds__modes__Preds1_78);
            }
#line 1049 "modes.m"
            {
#line 1049 "modes.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__Preds1_78, check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_46_95);
            }
#line 619 "modes.m"
            {
#line 619 "modes.m"
              check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_70, check_hlds__modes__PredId_69, (MR_Integer) 0, (MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ModuleInfo_46_95, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96, (MR_Integer) 0, &check_hlds__modes__STATE_VARIABLE_Changed_48_97, &check_hlds__modes__ModeSpecs_79);
            }
#line 1054 "modes.m"
            {
#line 1054 "modes.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96, &check_hlds__modes__Globals_80);
            }
#line 1055 "modes.m"
            {
#line 1055 "modes.m"
              check_hlds__modes__ModeErrors_81 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__modes__Globals_80, check_hlds__modes__ModeSpecs_79);
            }
#line 1060 "modes.m"
#line 1060 "modes.m"
            switch (check_hlds__modes__ModeErrors_81) {
#line 1060 "modes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1060 "modes.m"
              case (MR_Integer) 0:
#line 1087 "modes.m"
#line 1087 "modes.m"
                switch (check_hlds__modes__HowToCheckGoal_8) {
#line 1087 "modes.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1087 "modes.m"
                  case (MR_Integer) 0:
#line 1088 "modes.m"
                    {
#line 1089 "modes.m"
                      check_hlds__modes__HeadSpecs_23 = check_hlds__modes__ModeSpecs_79;
#line 1088 "modes.m"
                      check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 1088 "modes.m"
                      check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96;
#line 1088 "modes.m"
                      check_hlds__modes__HeadChanged_22 = check_hlds__modes__STATE_VARIABLE_Changed_48_97;
#line 1088 "modes.m"
                    }
#line 1087 "modes.m"
                    break;
#line 1087 "modes.m"
                  case (MR_Integer) 1:
#line 1063 "modes.m"
                    {
#line 1063 "modes.m"
                      MR_Word check_hlds__modes__TypeCtorInfo_19_150;
#line 1063 "modes.m"
                      MR_Word check_hlds__modes__TypeCtorInfo_20_151;
#line 1063 "modes.m"
                      MR_Word check_hlds__modes__Preds2_82;
#line 1063 "modes.m"
                      MR_Word check_hlds__modes__PredInfo2_83;
#line 1063 "modes.m"
                      MR_Word check_hlds__modes__Procs2_84;
#line 1063 "modes.m"
                      MR_Word check_hlds__modes__ProcInfo2_85;
#line 1063 "modes.m"
                      MR_Word check_hlds__modes__SwitchDetectInfo_86;
#line 1063 "modes.m"
                      MR_Word check_hlds__modes__ProcInfo3_87;
#line 1063 "modes.m"
                      MR_Word check_hlds__modes__Procs3_88;
#line 1063 "modes.m"
                      MR_Word check_hlds__modes__PredInfo3_89;
#line 1063 "modes.m"
                      MR_Word check_hlds__modes__Preds3_90;
#line 1063 "modes.m"
                      MR_Word check_hlds__modes__DetismSpecs_91;
#line 1063 "modes.m"
                      MR_Word check_hlds__modes__NewChanged_92;
#line 1063 "modes.m"
                      MR_Word check_hlds__modes__UniqueSpecs_93;
#line 1063 "modes.m"
                      MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_49_98;
#line 1063 "modes.m"
                      MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_50_99;
#line 1063 "modes.m"
                      MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_100;
#line 1063 "modes.m"
                      MR_Word check_hlds__modes__V_101_101;
#line 1063 "modes.m"
                      MR_Word check_hlds__modes__ProcInfo_144;
#line 1063 "modes.m"
                      MR_Word check_hlds__modes__OldPredInfo0_145;
#line 1063 "modes.m"
                      MR_Word check_hlds__modes__OldProcTable0_146;
#line 1063 "modes.m"
                      MR_Word check_hlds__modes__OldProcTable_147;
#line 1063 "modes.m"
                      MR_Word check_hlds__modes__OldPredInfo_148;
#line 1066 "modes.m"
                      MR_Box check_hlds__modes__conv3_PredInfo2_83;
#line 1068 "modes.m"
                      MR_Box check_hlds__modes__conv4_ProcInfo2_85;
#line 1100 "modes.m"
                      MR_Word check_hlds__modes___PredInfo_143;
#line 1102 "modes.m"
                      MR_Box check_hlds__modes__conv5_OldPredInfo0_145;

#line 1065 "modes.m"
                      {
#line 1065 "modes.m"
                        hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96, &check_hlds__modes__Preds2_82);
                      }
#line 1066 "modes.m"
                      {
#line 1066 "modes.m"
                        mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_61_110, check_hlds__modes__TypeCtorInfo_62_111, check_hlds__modes__Preds2_82, ((MR_Box) (check_hlds__modes__PredId_69)), &check_hlds__modes__conv3_PredInfo2_83);
                      }
#line 1066 "modes.m"
                      check_hlds__modes__PredInfo2_83 = ((MR_Word) check_hlds__modes__conv3_PredInfo2_83);
#line 1067 "modes.m"
                      {
#line 1067 "modes.m"
                        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__PredInfo2_83, &check_hlds__modes__Procs2_84);
                      }
#line 1068 "modes.m"
                      {
#line 1068 "modes.m"
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__modes__TypeCtorInfo_64_113, check_hlds__modes__Procs2_84, check_hlds__modes__ProcId_70, &check_hlds__modes__conv4_ProcInfo2_85);
                      }
#line 1068 "modes.m"
                      check_hlds__modes__ProcInfo2_85 = ((MR_Word) check_hlds__modes__conv4_ProcInfo2_85);
#line 1070 "modes.m"
                      {
#line 1070 "modes.m"
                        check_hlds__modes__SwitchDetectInfo_86 = check_hlds__switch_detection__init_switch_detect_info_1_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96);
                      }
#line 1071 "modes.m"
                      {
#line 1071 "modes.m"
                        check_hlds__switch_detection__detect_switches_in_proc_3_p_0(check_hlds__modes__SwitchDetectInfo_86, check_hlds__modes__ProcInfo2_85, &check_hlds__modes__ProcInfo3_87);
                      }
#line 1073 "modes.m"
                      {
#line 1073 "modes.m"
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__modes__TypeCtorInfo_64_113, check_hlds__modes__ProcId_70, ((MR_Box) (check_hlds__modes__ProcInfo3_87)), check_hlds__modes__Procs2_84, &check_hlds__modes__Procs3_88);
                      }
#line 1074 "modes.m"
                      {
#line 1074 "modes.m"
                        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__modes__Procs3_88, check_hlds__modes__PredInfo2_83, &check_hlds__modes__PredInfo3_89);
                      }
#line 1075 "modes.m"
                      {
#line 1075 "modes.m"
                        mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_61_110, check_hlds__modes__TypeCtorInfo_62_111, ((MR_Box) (check_hlds__modes__PredId_69)), ((MR_Box) (check_hlds__modes__PredInfo3_89)), check_hlds__modes__Preds2_82, &check_hlds__modes__Preds3_90);
                      }
#line 1076 "modes.m"
                      {
#line 1076 "modes.m"
                        hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__Preds3_90, check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_49_98);
                      }
#line 1078 "modes.m"
                      {
#line 1078 "modes.m"
                        check_hlds__cse_detection__detect_cse_in_proc_4_p_0(check_hlds__modes__PredId_69, check_hlds__modes__ProcId_70, check_hlds__modes__STATE_VARIABLE_ModuleInfo_49_98, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_50_99);
                      }
#line 1079 "modes.m"
                      {
#line 1079 "modes.m"
                        check_hlds__det_analysis__determinism_check_proc_5_p_0(check_hlds__modes__ProcId_70, check_hlds__modes__PredId_69, check_hlds__modes__STATE_VARIABLE_ModuleInfo_50_99, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_100, &check_hlds__modes__DetismSpecs_91);
                      }
#line 1080 "modes.m"
                      {
#line 1080 "modes.m"
                        check_hlds__modes__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1080 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_101_101, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_9[0]));
#line 1080 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_101_101, 1) = ((MR_Box) (check_hlds__modes__modecheck_queued_procs_7_p_0_1));
#line 1080 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_101_101, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1080 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_101_101, 3) = ((MR_Box) (check_hlds__modes__DetismSpecs_91));
#line 1080 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_101_101, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1080 "modes.m"
                      }
#line 1080 "modes.m"
                      {
#line 1080 "modes.m"
                        mercury__require__expect_4_p_0(check_hlds__modes__V_101_101, (MR_String) "check_hlds.modes", (MR_String) "predicate \140check_hlds.modes.modecheck_queued_proc\'/8", (MR_String) "found detism error");
                      }
#line 1100 "modes.m"
                      {
#line 1100 "modes.m"
                        hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_100, check_hlds__modes__PredId_69, check_hlds__modes__ProcId_70, &check_hlds__modes___PredInfo_143, &check_hlds__modes__ProcInfo_144);
                      }
#line 4688 "check_hlds.modes.c"
                      check_hlds__modes__TypeCtorInfo_19_150 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 4690 "check_hlds.modes.c"
                      check_hlds__modes__TypeCtorInfo_20_151 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 1102 "modes.m"
                      {
#line 1102 "modes.m"
                        mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_19_150, check_hlds__modes__TypeCtorInfo_20_151, check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26, ((MR_Box) (check_hlds__modes__PredId_69)), &check_hlds__modes__conv5_OldPredInfo0_145);
                      }
#line 1102 "modes.m"
                      check_hlds__modes__OldPredInfo0_145 = ((MR_Word) check_hlds__modes__conv5_OldPredInfo0_145);
#line 1103 "modes.m"
                      {
#line 1103 "modes.m"
                        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__OldPredInfo0_145, &check_hlds__modes__OldProcTable0_146);
                      }
#line 1104 "modes.m"
                      {
#line 1104 "modes.m"
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__modes__ProcId_70, ((MR_Box) (check_hlds__modes__ProcInfo_144)), check_hlds__modes__OldProcTable0_146, &check_hlds__modes__OldProcTable_147);
                      }
#line 1105 "modes.m"
                      {
#line 1105 "modes.m"
                        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__modes__OldProcTable_147, check_hlds__modes__OldPredInfo0_145, &check_hlds__modes__OldPredInfo_148);
                      }
#line 1106 "modes.m"
                      {
#line 1106 "modes.m"
                        mercury__map__det_update_4_p_0(check_hlds__modes__TypeCtorInfo_19_150, check_hlds__modes__TypeCtorInfo_20_151, ((MR_Box) (check_hlds__modes__PredId_69)), ((MR_Box) (check_hlds__modes__OldPredInfo_148)), check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26, &check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33);
                      }
#line 1083 "modes.m"
                      {
#line 1083 "modes.m"
                        check_hlds__unique_modes__unique_modes_check_proc_6_p_0(check_hlds__modes__ProcId_70, check_hlds__modes__PredId_69, check_hlds__modes__STATE_VARIABLE_ModuleInfo_51_100, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34, &check_hlds__modes__NewChanged_92, &check_hlds__modes__UniqueSpecs_93);
                      }
#line 1085 "modes.m"
                      {
#line 1085 "modes.m"
                        mercury__bool__or_3_p_0(check_hlds__modes__NewChanged_92, check_hlds__modes__STATE_VARIABLE_Changed_48_97, &check_hlds__modes__HeadChanged_22);
                      }
#line 1086 "modes.m"
                      {
#line 1086 "modes.m"
                        check_hlds__modes__HeadSpecs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__ModeSpecs_79, check_hlds__modes__UniqueSpecs_93);
                      }
#line 1063 "modes.m"
                    }
#line 1087 "modes.m"
                    break;
#line 1087 "modes.m"
                }
#line 1060 "modes.m"
                break;
#line 1060 "modes.m"
              case (MR_Integer) 1:
#line 1057 "modes.m"
                {
#line 1058 "modes.m"
                  {
#line 1058 "modes.m"
                    hlds__hlds_module__module_info_make_pred_id_invalid_3_p_0(check_hlds__modes__PredId_69, check_hlds__modes__STATE_VARIABLE_ModuleInfo_47_96, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34);
                  }
#line 1059 "modes.m"
                  check_hlds__modes__HeadSpecs_23 = check_hlds__modes__ModeSpecs_79;
#line 1057 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 1057 "modes.m"
                  check_hlds__modes__HeadChanged_22 = check_hlds__modes__STATE_VARIABLE_Changed_48_97;
#line 1057 "modes.m"
                }
#line 1060 "modes.m"
                break;
#line 1060 "modes.m"
            }
#line 992 "modes.m"
          }
#line 995 "modes.m"
        else
#line 996 "modes.m"
          {
#line 996 "modes.m"
            check_hlds__modes__HeadSpecs_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 997 "modes.m"
            check_hlds__modes__HeadChanged_22 = (MR_Integer) 0;
#line 996 "modes.m"
            check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_30_30;
#line 996 "modes.m"
            check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 996 "modes.m"
          }
#line 999 "modes.m"
        {
#line 999 "modes.m"
          check_hlds__modes__modecheck_queued_procs_7_p_0(check_hlds__modes__HowToCheckGoal_8, check_hlds__modes__STATE_VARIABLE_OldPredTable_33_33, check_hlds__modes__STATE_VARIABLE_OldPredTable_27, check_hlds__modes__STATE_VARIABLE_ModuleInfo_34_34, check_hlds__modes__STATE_VARIABLE_ModuleInfo_29, &check_hlds__modes__TailChanged_24, &check_hlds__modes__TailSpecs_25);
        }
#line 1001 "modes.m"
        {
#line 1001 "modes.m"
          mercury__bool__or_3_p_0(check_hlds__modes__HeadChanged_22, check_hlds__modes__TailChanged_24, check_hlds__modes__Changed_11);
        }
#line 1002 "modes.m"
        {
#line 1002 "modes.m"
          *check_hlds__modes__Specs_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__HeadSpecs_23, check_hlds__modes__TailSpecs_25);
        }
#line 977 "modes.m"
      }
#line 1003 "modes.m"
    else
#line 1004 "modes.m"
      {
#line 1004 "modes.m"
        *check_hlds__modes__Changed_11 = (MR_Integer) 0;
#line 1005 "modes.m"
        *check_hlds__modes__Specs_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1004 "modes.m"
        *check_hlds__modes__STATE_VARIABLE_ModuleInfo_29 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_28;
#line 1004 "modes.m"
        *check_hlds__modes__STATE_VARIABLE_OldPredTable_27 = check_hlds__modes__STATE_VARIABLE_OldPredTable_0_26;
#line 1004 "modes.m"
      }
#line 973 "modes.m"
  }
#line 968 "modes.m"
}

#line 919 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_5(
#line 919 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 919 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 919 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 919 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 919 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4)
#line 919 "modes.m"
{
#line 919 "modes.m"
  {
#line 919 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 919 "modes.m"
    MR_Word check_hlds__modes__conv10_Case_16;
#line 919 "modes.m"
    MR_Word check_hlds__modes__conv9_STATE_VARIABLE_ModeInfo_28;

#line 919 "modes.m"
    {
#line 919 "modes.m"
      check_hlds__modes__unique_modecheck_clause_switch_9_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 7))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv10_Case_16, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv9_STATE_VARIABLE_ModeInfo_28);
    }
#line 919 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv10_Case_16));
#line 919 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv9_STATE_VARIABLE_ModeInfo_28));
#line 919 "modes.m"
  }
#line 919 "modes.m"
}

#line 911 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_4(
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
    MR_Word check_hlds__modes__conv7_Disjunct_20;
#line 911 "modes.m"
    MR_Word check_hlds__modes__conv6_STATE_VARIABLE_ModeInfo_25;

#line 911 "modes.m"
    {
#line 911 "modes.m"
      check_hlds__modes__unique_modecheck_clause_disj_11_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 9))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv7_Disjunct_20, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv6_STATE_VARIABLE_ModeInfo_25);
    }
#line 911 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv7_Disjunct_20));
#line 911 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv6_STATE_VARIABLE_ModeInfo_25));
#line 911 "modes.m"
  }
#line 911 "modes.m"
}

#line 876 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_3(
#line 876 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 876 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 876 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 876 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 876 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4)
#line 876 "modes.m"
{
#line 876 "modes.m"
  {
#line 876 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 876 "modes.m"
    MR_Word check_hlds__modes__conv4_Case_16;
#line 876 "modes.m"
    MR_Word check_hlds__modes__conv3_STATE_VARIABLE_ModeInfo_28;

#line 876 "modes.m"
    {
#line 876 "modes.m"
      check_hlds__modes__modecheck_clause_switch_9_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 7))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv4_Case_16, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv3_STATE_VARIABLE_ModeInfo_28);
    }
#line 876 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv4_Case_16));
#line 876 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv3_STATE_VARIABLE_ModeInfo_28));
#line 876 "modes.m"
  }
#line 876 "modes.m"
}

#line 869 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_2(
#line 869 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 869 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 869 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_2,
#line 869 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_3,
#line 869 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_4)
#line 869 "modes.m"
{
#line 869 "modes.m"
  {
#line 869 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 869 "modes.m"
    MR_Word check_hlds__modes__conv1_Disjunct_14;
#line 869 "modes.m"
    MR_Word check_hlds__modes__conv0_STATE_VARIABLE_ModeInfo_19;

#line 869 "modes.m"
    {
#line 869 "modes.m"
      check_hlds__modes__modecheck_clause_disj_8_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__modes__wrapper_arg_1), &check_hlds__modes__conv1_Disjunct_14, ((MR_Word) check_hlds__modes__wrapper_arg_3), &check_hlds__modes__conv0_STATE_VARIABLE_ModeInfo_19);
    }
#line 869 "modes.m"
    *check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv1_Disjunct_14));
#line 869 "modes.m"
    *check_hlds__modes__wrapper_arg_4 = ((MR_Box) (check_hlds__modes__conv0_STATE_VARIABLE_ModeInfo_19));
#line 869 "modes.m"
  }
#line 869 "modes.m"
}

#line 850 "modes.m"
static MR_bool MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0_1(
#line 850 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 850 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1)
#line 850 "modes.m"
{
#line 850 "modes.m"
  {
#line 850 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 850 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;

#line 850 "modes.m"
    {
#line 850 "modes.m"
      return check_hlds__modes__succeeded = check_hlds__type_util__var_is_or_may_contain_solver_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modes__wrapper_arg_1));
    }
#line 850 "modes.m"
    return check_hlds__modes__succeeded;
#line 850 "modes.m"
  }
#line 850 "modes.m"
}

#line 822 "modes.m"
static void MR_CALL 
check_hlds__modes__do_modecheck_proc_body_15_p_0(
#line 822 "modes.m"
  MR_Word check_hlds__modes__ModuleInfo_16,
#line 822 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_17,
#line 822 "modes.m"
  MR_Word check_hlds__modes__InferModes_18,
#line 822 "modes.m"
  MR_Word check_hlds__modes__Markers_19,
#line 822 "modes.m"
  MR_Word check_hlds__modes__IsUnifyPred_20,
#line 822 "modes.m"
  MR_Word check_hlds__modes__PredId_21,
#line 822 "modes.m"
  MR_Integer check_hlds__modes__ProcId_22,
#line 822 "modes.m"
  MR_Word check_hlds__modes__Body0_23,
#line 822 "modes.m"
  MR_Word * check_hlds__modes__Body_24,
#line 822 "modes.m"
  MR_Word check_hlds__modes__HeadVars_25,
#line 822 "modes.m"
  MR_Word check_hlds__modes__InstMap0_26,
#line 822 "modes.m"
  MR_Word check_hlds__modes__ArgFinalInsts0_27,
#line 822 "modes.m"
  MR_Word * check_hlds__modes__ArgFinalInsts_28,
#line 822 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66,
#line 822 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModeInfo_67)
#line 822 "modes.m"
{
#line 830 "modes.m"
  {
#line 830 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 830 "modes.m"
    MR_String check_hlds__modes__CheckpointMsg_30;
#line 830 "modes.m"
    MR_Integer check_hlds__modes__V_71_71;
#line 830 "modes.m"
    MR_Integer check_hlds__modes__V_74_74;
#line 830 "modes.m"
    MR_String check_hlds__modes__V_151_151;
#line 830 "modes.m"
    MR_Word check_hlds__modes__V_157_157;
#line 830 "modes.m"
    MR_String check_hlds__modes__V_159_159;
#line 830 "modes.m"
    MR_String check_hlds__modes__V_160_160;
#line 830 "modes.m"
    MR_String check_hlds__modes__V_167_167;
#line 935 "modes.m"
    MR_Word check_hlds__modes__BodyGoalInfo0_32;
#line 935 "modes.m"
    MR_Word check_hlds__modes__ClausesForm0_36;
#line 935 "modes.m"
    MR_Word check_hlds__modes__BodyNonLocals_42;
#line 835 "modes.m"
    MR_Word check_hlds__modes__TypeInfo_121_121;
#line 835 "modes.m"
    MR_Word check_hlds__modes__TypeCtorInfo_123_123;
#line 835 "modes.m"
    MR_Word check_hlds__modes__BodyGoalExpr0_31;
#line 835 "modes.m"
    MR_Word check_hlds__modes__VarTypes0_43;
#line 835 "modes.m"
    MR_Word check_hlds__modes__SolverNonLocals_44;
#line 835 "modes.m"
    MR_Word check_hlds__modes__V_76_76;
#line 835 "modes.m"
    MR_Word check_hlds__modes__V_77_77;
#line 835 "modes.m"
    MR_Word check_hlds__modes__V_78_78;

#line 832 "modes.m"
    {
#line 832 "modes.m"
      check_hlds__modes__V_71_71 = hlds__hlds_pred__pred_id_to_int_1_f_0(check_hlds__modes__PredId_21);
    }
#line 832 "modes.m"
    {
#line 832 "modes.m"
      check_hlds__modes__V_74_74 = hlds__hlds_pred__proc_id_to_int_1_f_0(check_hlds__modes__ProcId_22);
    }
#line 5083 "check_hlds.modes.c"
    check_hlds__modes__V_157_157 = (MR_Word) &check_hlds__modes_scalar_common_3[2];
#line 832 "modes.m"
    {
#line 832 "modes.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__modes__V_157_157, check_hlds__modes__V_74_74, &check_hlds__modes__V_151_151);
    }
#line 831 "modes.m"
    {
#line 831 "modes.m"
      check_hlds__modes__V_159_159 = mercury__string__f_43_43_2_f_0((MR_String) "_", check_hlds__modes__V_151_151);
    }
#line 832 "modes.m"
    {
#line 832 "modes.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__modes__V_157_157, check_hlds__modes__V_71_71, &check_hlds__modes__V_160_160);
    }
#line 831 "modes.m"
    {
#line 831 "modes.m"
      check_hlds__modes__V_167_167 = mercury__string__f_43_43_2_f_0(check_hlds__modes__V_160_160, check_hlds__modes__V_159_159);
    }
#line 831 "modes.m"
    {
#line 831 "modes.m"
      check_hlds__modes__CheckpointMsg_30 = mercury__string__f_43_43_2_f_0((MR_String) "procedure_", check_hlds__modes__V_167_167);
    }
#line 835 "modes.m"
    check_hlds__modes__succeeded = (check_hlds__modes__InferModes_18 == (MR_Integer) 0);
#line 835 "modes.m"
    if (check_hlds__modes__succeeded)
#line 835 "modes.m"
      {
#line 836 "modes.m"
        check_hlds__modes__V_76_76 = (MR_Integer) 21;
#line 836 "modes.m"
        {
#line 836 "modes.m"
          check_hlds__modes__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_19, check_hlds__modes__V_76_76);
        }
#line 835 "modes.m"
        if (check_hlds__modes__succeeded)
#line 835 "modes.m"
          {
#line 837 "modes.m"
            check_hlds__modes__BodyGoalExpr0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Body0_23, (MR_Integer) 0)));
#line 837 "modes.m"
            check_hlds__modes__BodyGoalInfo0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__Body0_23, (MR_Integer) 1)));
#line 842 "modes.m"
            if (((((MR_tag((MR_Word) check_hlds__modes__BodyGoalExpr0_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 839 "modes.m"
              {
#line 839 "modes.m"
                MR_Word check_hlds__modes__Disjuncts0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 1)));
#line 840 "modes.m"
                MR_Word check_hlds__modes__V_34_34;
#line 840 "modes.m"
                MR_Word check_hlds__modes__V_35_35;

#line 840 "modes.m"
                check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Disjuncts0_33)) == (MR_mktag((MR_Integer) 1)));
#line 840 "modes.m"
                if (check_hlds__modes__succeeded)
#line 840 "modes.m"
                  {
#line 840 "modes.m"
                    check_hlds__modes__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Disjuncts0_33, (MR_Integer) 0)));
#line 840 "modes.m"
                    check_hlds__modes__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Disjuncts0_33, (MR_Integer) 1)));
#line 841 "modes.m"
                    {
#line 841 "modes.m"
                      check_hlds__modes__ClausesForm0_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 841 "modes.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modes__ClausesForm0_36, 0) = ((MR_Box) (check_hlds__modes__Disjuncts0_33));
#line 841 "modes.m"
                    }
#line 841 "modes.m"
                    check_hlds__modes__succeeded = MR_TRUE;
#line 840 "modes.m"
                  }
#line 839 "modes.m"
              }
#line 842 "modes.m"
            else
#line 842 "modes.m"
            if (((((MR_tag((MR_Word) check_hlds__modes__BodyGoalExpr0_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 843 "modes.m"
              {
#line 843 "modes.m"
                MR_Word check_hlds__modes__SwitchVar0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 1)));
#line 843 "modes.m"
                MR_Word check_hlds__modes__CanFail0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 2)));
#line 843 "modes.m"
                MR_Word check_hlds__modes__Cases0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modes__BodyGoalExpr0_31, (MR_Integer) 3)));
#line 844 "modes.m"
                MR_Word check_hlds__modes__V_40_40;
#line 844 "modes.m"
                MR_Word check_hlds__modes__V_41_41;

#line 844 "modes.m"
                check_hlds__modes__succeeded = ((MR_tag((MR_Word) check_hlds__modes__Cases0_39)) == (MR_mktag((MR_Integer) 1)));
#line 844 "modes.m"
                if (check_hlds__modes__succeeded)
#line 844 "modes.m"
                  {
#line 844 "modes.m"
                    check_hlds__modes__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Cases0_39, (MR_Integer) 0)));
#line 844 "modes.m"
                    check_hlds__modes__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Cases0_39, (MR_Integer) 1)));
#line 845 "modes.m"
                    {
#line 845 "modes.m"
                      check_hlds__modes__ClausesForm0_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 845 "modes.m"
                      MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, 0) = ((MR_Box) (check_hlds__modes__SwitchVar0_37));
#line 845 "modes.m"
                      MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, 1) = ((MR_Box) (check_hlds__modes__CanFail0_38));
#line 845 "modes.m"
                      MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, 2) = ((MR_Box) (check_hlds__modes__Cases0_39));
#line 845 "modes.m"
                    }
#line 845 "modes.m"
                    check_hlds__modes__succeeded = MR_TRUE;
#line 844 "modes.m"
                  }
#line 843 "modes.m"
              }
#line 842 "modes.m"
            else
#line 842 "modes.m"
              check_hlds__modes__succeeded = MR_FALSE;
#line 835 "modes.m"
            if (check_hlds__modes__succeeded)
#line 835 "modes.m"
              {
#line 847 "modes.m"
                {
#line 847 "modes.m"
                  check_hlds__modes__BodyNonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modes__BodyGoalInfo0_32);
                }
#line 848 "modes.m"
                {
#line 848 "modes.m"
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66, &check_hlds__modes__VarTypes0_43);
                }
#line 5229 "check_hlds.modes.c"
                check_hlds__modes__TypeInfo_121_121 = (MR_Word) &check_hlds__modes_scalar_common_1[1];
#line 5231 "check_hlds.modes.c"
                check_hlds__modes__TypeCtorInfo_123_123 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 850 "modes.m"
                {
#line 850 "modes.m"
                  check_hlds__modes__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 850 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[2]));
#line 850 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_1));
#line 850 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 850 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 3) = ((MR_Box) (check_hlds__modes__ModuleInfo_16));
#line 850 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_77_77, 4) = ((MR_Box) (check_hlds__modes__VarTypes0_43));
#line 850 "modes.m"
                }
#line 851 "modes.m"
                {
#line 851 "modes.m"
                  check_hlds__modes__V_78_78 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__modes__TypeCtorInfo_123_123, check_hlds__modes__BodyNonLocals_42);
                }
#line 849 "modes.m"
                {
#line 849 "modes.m"
                  check_hlds__modes__SolverNonLocals_44 = mercury__list__filter_2_f_0(check_hlds__modes__TypeInfo_121_121, check_hlds__modes__V_77_77, check_hlds__modes__V_78_78);
                }
#line 852 "modes.m"
                check_hlds__modes__succeeded = (check_hlds__modes__SolverNonLocals_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 835 "modes.m"
              }
#line 835 "modes.m"
          }
#line 835 "modes.m"
      }
#line 935 "modes.m"
    if (check_hlds__modes__succeeded)
#line 854 "modes.m"
      {
#line 854 "modes.m"
        MR_Word check_hlds__modes__BodyContext_45;
#line 854 "modes.m"
        MR_Word check_hlds__modes__EmptyContext_46;
#line 854 "modes.m"
        MR_Word check_hlds__modes__NewGoalExpr_50;
#line 854 "modes.m"
        MR_Word check_hlds__modes__HeadVarFinalInsts_60;
#line 854 "modes.m"
        MR_Word check_hlds__modes__FinalInstMap_61;
#line 854 "modes.m"
        MR_Word check_hlds__modes__DeltaInstMap_62;
#line 854 "modes.m"
        MR_Word check_hlds__modes__BodyGoalInfo_63;
#line 854 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79;

#line 854 "modes.m"
        {
#line 854 "modes.m"
          check_hlds__modes__BodyContext_45 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__modes__BodyGoalInfo0_32);
        }
#line 855 "modes.m"
        {
#line 855 "modes.m"
          mercury__term__context_init_1_p_0(&check_hlds__modes__EmptyContext_46);
        }
#line 856 "modes.m"
        {
#line 856 "modes.m"
          check_hlds__modes__succeeded = mercury__term____Unify____context_0_0(check_hlds__modes__BodyContext_45, check_hlds__modes__EmptyContext_46);
        }
#line 858 "modes.m"
        if (check_hlds__modes__succeeded)
#line 858 "modes.m"
          check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79 = check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66;
#line 858 "modes.m"
        else
#line 859 "modes.m"
          {
#line 859 "modes.m"
            check_hlds__mode_info__mode_info_set_context_3_p_0(check_hlds__modes__BodyContext_45, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66, &check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79);
          }
#line 881 "modes.m"
#line 881 "modes.m"
        switch (check_hlds__modes__WhatToCheck_17) {
#line 881 "modes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 881 "modes.m"
          case (MR_Integer) 0:
#line 873 "modes.m"
            if (((MR_tag((MR_Word) check_hlds__modes__ClausesForm0_36)) == (MR_mktag((MR_Integer) 0))))
#line 866 "modes.m"
              {
#line 866 "modes.m"
                MR_Word check_hlds__modes__TypeCtorInfo_128_128;
#line 866 "modes.m"
                MR_Word check_hlds__modes__Disjuncts1_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__ClausesForm0_36, (MR_Integer) 0)));
#line 866 "modes.m"
                MR_Word check_hlds__modes__Disjuncts2_48;
#line 866 "modes.m"
                MR_Word check_hlds__modes__Disjuncts_49;
#line 866 "modes.m"
                MR_Word check_hlds__modes__V_91_91;
#line 868 "modes.m"
                MR_Box check_hlds__modes__conv2_STATE_VARIABLE_ModeInfo_67;

#line 867 "modes.m"
                {
#line 867 "modes.m"
                  check_hlds__modes__Disjuncts2_48 = hlds__goal_util__flatten_disjs_1_f_0(check_hlds__modes__Disjuncts1_47);
                }
#line 869 "modes.m"
                {
#line 869 "modes.m"
                  check_hlds__modes__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 869 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_7[0]));
#line 869 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_2));
#line 869 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 869 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_30));
#line 869 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 4) = ((MR_Box) (check_hlds__modes__HeadVars_25));
#line 869 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 5) = ((MR_Box) (check_hlds__modes__InstMap0_26));
#line 869 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_27));
#line 869 "modes.m"
                }
#line 5363 "check_hlds.modes.c"
                check_hlds__modes__TypeCtorInfo_128_128 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 868 "modes.m"
                {
#line 868 "modes.m"
                  mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_128_128, check_hlds__modes__TypeCtorInfo_128_128, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_91_91, check_hlds__modes__Disjuncts2_48, &check_hlds__modes__Disjuncts_49, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79)), &check_hlds__modes__conv2_STATE_VARIABLE_ModeInfo_67);
                }
#line 868 "modes.m"
                *check_hlds__modes__STATE_VARIABLE_ModeInfo_67 = ((MR_Word) check_hlds__modes__conv2_STATE_VARIABLE_ModeInfo_67);
#line 872 "modes.m"
                {
#line 872 "modes.m"
                  check_hlds__modes__NewGoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 872 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 1) = ((MR_Box) (check_hlds__modes__Disjuncts_49));
#line 872 "modes.m"
                }
#line 866 "modes.m"
              }
#line 873 "modes.m"
            else
#line 874 "modes.m"
              {
#line 874 "modes.m"
                MR_Word check_hlds__modes__TypeCtorInfo_134_134;
#line 874 "modes.m"
                MR_Word check_hlds__modes__SwitchVar_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 0)));
#line 874 "modes.m"
                MR_Word check_hlds__modes__CanFail_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 1)));
#line 874 "modes.m"
                MR_Word check_hlds__modes__Cases1_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 2)));
#line 874 "modes.m"
                MR_Word check_hlds__modes__Cases_54;
#line 874 "modes.m"
                MR_Word check_hlds__modes__V_89_89;
#line 875 "modes.m"
                MR_Box check_hlds__modes__conv5_STATE_VARIABLE_ModeInfo_67;

#line 876 "modes.m"
                {
#line 876 "modes.m"
                  check_hlds__modes__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 876 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_4[1]));
#line 876 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_3));
#line 876 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 876 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_30));
#line 876 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 4) = ((MR_Box) (check_hlds__modes__HeadVars_25));
#line 876 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 5) = ((MR_Box) (check_hlds__modes__InstMap0_26));
#line 876 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_27));
#line 876 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_89_89, 7) = ((MR_Box) (check_hlds__modes__SwitchVar_51));
#line 876 "modes.m"
                }
#line 5425 "check_hlds.modes.c"
                check_hlds__modes__TypeCtorInfo_134_134 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 875 "modes.m"
                {
#line 875 "modes.m"
                  mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_134_134, check_hlds__modes__TypeCtorInfo_134_134, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_89_89, check_hlds__modes__Cases1_53, &check_hlds__modes__Cases_54, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79)), &check_hlds__modes__conv5_STATE_VARIABLE_ModeInfo_67);
                }
#line 875 "modes.m"
                *check_hlds__modes__STATE_VARIABLE_ModeInfo_67 = ((MR_Word) check_hlds__modes__conv5_STATE_VARIABLE_ModeInfo_67);
#line 879 "modes.m"
                {
#line 879 "modes.m"
                  check_hlds__modes__NewGoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 879 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 879 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 1) = ((MR_Box) (check_hlds__modes__SwitchVar_51));
#line 879 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 2) = ((MR_Box) (check_hlds__modes__CanFail_52));
#line 879 "modes.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 3) = ((MR_Box) (check_hlds__modes__Cases_54));
#line 879 "modes.m"
                }
#line 874 "modes.m"
              }
#line 881 "modes.m"
            break;
#line 881 "modes.m"
          case (MR_Integer) 1:
#line 882 "modes.m"
            {
#line 882 "modes.m"
              MR_Word check_hlds__modes__NondetLiveVars0_55;
#line 882 "modes.m"
              MR_Word check_hlds__modes__Detism_56;
#line 882 "modes.m"
              MR_Word check_hlds__modes__NonLocals_57;
#line 882 "modes.m"
              MR_Word check_hlds__modes__SolnCount_59;
#line 882 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81;
#line 886 "modes.m"
              MR_Word check_hlds__modes__V_58_58;

#line 883 "modes.m"
              {
#line 883 "modes.m"
                check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79, &check_hlds__modes__NondetLiveVars0_55);
              }
#line 884 "modes.m"
              {
#line 884 "modes.m"
                check_hlds__modes__Detism_56 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__modes__BodyGoalInfo0_32);
              }
#line 885 "modes.m"
              {
#line 885 "modes.m"
                check_hlds__modes__NonLocals_57 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modes__BodyGoalInfo0_32);
              }
#line 886 "modes.m"
              {
#line 886 "modes.m"
                parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modes__Detism_56, &check_hlds__modes__V_58_58, &check_hlds__modes__SolnCount_59);
              }
#line 889 "modes.m"
#line 889 "modes.m"
              switch (check_hlds__modes__SolnCount_59) {
#line 889 "modes.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 889 "modes.m"
                case (MR_Integer) 3:
#line 888 "modes.m"
                  check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81 = check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79;
#line 889 "modes.m"
                  break;
#line 889 "modes.m"
                case (MR_Integer) 2:
#line 889 "modes.m"
                case (MR_Integer) 1:
#line 889 "modes.m"
                case (MR_Integer) 0:
#line 893 "modes.m"
                  {
#line 893 "modes.m"
                    MR_Word check_hlds__modes__V_80_80;

#line 894 "modes.m"
                    {
#line 894 "modes.m"
                      check_hlds__modes__V_80_80 = mercury__bag__init_0_f_0((MR_Word) &check_hlds__modes_scalar_common_1[1]);
                    }
#line 894 "modes.m"
                    {
#line 894 "modes.m"
                      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__modes__V_80_80, check_hlds__modes__STATE_VARIABLE_ModeInfo_79_79, &check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81);
                    }
#line 893 "modes.m"
                  }
#line 889 "modes.m"
                  break;
#line 889 "modes.m"
              }
#line 916 "modes.m"
              if (((MR_tag((MR_Word) check_hlds__modes__ClausesForm0_36)) == (MR_mktag((MR_Integer) 0))))
#line 897 "modes.m"
                {
#line 897 "modes.m"
                  MR_Word check_hlds__modes__TypeCtorInfo_141_141;
#line 897 "modes.m"
                  MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86;
#line 897 "modes.m"
                  MR_Word check_hlds__modes__V_87_87;
#line 897 "modes.m"
                  MR_Word check_hlds__modes__Disjuncts1_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__ClausesForm0_36, (MR_Integer) 0)));
#line 897 "modes.m"
                  MR_Word check_hlds__modes__Disjuncts2_101;
#line 897 "modes.m"
                  MR_Word check_hlds__modes__Disjuncts_102;
#line 910 "modes.m"
                  MR_Box check_hlds__modes__conv8_STATE_VARIABLE_ModeInfo_67;

#line 898 "modes.m"
                  {
#line 898 "modes.m"
                    check_hlds__modes__Disjuncts2_101 = hlds__goal_util__flatten_disjs_1_f_0(check_hlds__modes__Disjuncts1_100);
                  }
#line 904 "modes.m"
#line 904 "modes.m"
                  switch (check_hlds__modes__SolnCount_59) {
#line 904 "modes.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 904 "modes.m"
                    case (MR_Integer) 3:
#line 900 "modes.m"
                      {
#line 900 "modes.m"
                        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_84_84;
#line 900 "modes.m"
                        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_85_85;

#line 901 "modes.m"
                        {
#line 901 "modes.m"
                          check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__modes__NonLocals_57, check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81, &check_hlds__modes__STATE_VARIABLE_ModeInfo_84_84);
                        }
#line 902 "modes.m"
                        {
#line 902 "modes.m"
                          check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_84_84, &check_hlds__modes__STATE_VARIABLE_ModeInfo_85_85);
                        }
#line 903 "modes.m"
                        {
#line 903 "modes.m"
                          check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modes__NonLocals_57, check_hlds__modes__STATE_VARIABLE_ModeInfo_85_85, &check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86);
                        }
#line 900 "modes.m"
                      }
#line 904 "modes.m"
                      break;
#line 904 "modes.m"
                    case (MR_Integer) 2:
#line 907 "modes.m"
                      check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86 = check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81;
#line 904 "modes.m"
                      break;
#line 904 "modes.m"
                    case (MR_Integer) 1:
#line 906 "modes.m"
                      check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86 = check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81;
#line 904 "modes.m"
                      break;
#line 904 "modes.m"
                    case (MR_Integer) 0:
#line 905 "modes.m"
                      check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86 = check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81;
#line 904 "modes.m"
                      break;
#line 904 "modes.m"
                  }
#line 911 "modes.m"
                  {
#line 911 "modes.m"
                    check_hlds__modes__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 911 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_8[0]));
#line 911 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_4));
#line 911 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 911 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_30));
#line 911 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 4) = ((MR_Box) (check_hlds__modes__HeadVars_25));
#line 911 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 5) = ((MR_Box) (check_hlds__modes__InstMap0_26));
#line 911 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_27));
#line 911 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 7) = ((MR_Box) (check_hlds__modes__Detism_56));
#line 911 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 8) = ((MR_Box) (check_hlds__modes__NonLocals_57));
#line 911 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_87_87, 9) = ((MR_Box) (check_hlds__modes__NondetLiveVars0_55));
#line 911 "modes.m"
                  }
#line 5630 "check_hlds.modes.c"
                  check_hlds__modes__TypeCtorInfo_141_141 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 910 "modes.m"
                  {
#line 910 "modes.m"
                    mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_141_141, check_hlds__modes__TypeCtorInfo_141_141, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_87_87, check_hlds__modes__Disjuncts2_101, &check_hlds__modes__Disjuncts_102, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_86_86)), &check_hlds__modes__conv8_STATE_VARIABLE_ModeInfo_67);
                  }
#line 910 "modes.m"
                  *check_hlds__modes__STATE_VARIABLE_ModeInfo_67 = ((MR_Word) check_hlds__modes__conv8_STATE_VARIABLE_ModeInfo_67);
#line 915 "modes.m"
                  {
#line 915 "modes.m"
                    check_hlds__modes__NewGoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 915 "modes.m"
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 915 "modes.m"
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 1) = ((MR_Box) (check_hlds__modes__Disjuncts_102));
#line 915 "modes.m"
                  }
#line 897 "modes.m"
                }
#line 916 "modes.m"
              else
#line 917 "modes.m"
                {
#line 917 "modes.m"
                  MR_Word check_hlds__modes__TypeCtorInfo_147_147;
#line 917 "modes.m"
                  MR_Word check_hlds__modes__V_82_82;
#line 917 "modes.m"
                  MR_Word check_hlds__modes__SwitchVar_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 0)));
#line 917 "modes.m"
                  MR_Word check_hlds__modes__CanFail_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 1)));
#line 917 "modes.m"
                  MR_Word check_hlds__modes__Cases1_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__ClausesForm0_36, (MR_Integer) 2)));
#line 917 "modes.m"
                  MR_Word check_hlds__modes__Cases_106;
#line 918 "modes.m"
                  MR_Box check_hlds__modes__conv11_STATE_VARIABLE_ModeInfo_67;

#line 919 "modes.m"
                  {
#line 919 "modes.m"
                    check_hlds__modes__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 919 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_4[1]));
#line 919 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 1) = ((MR_Box) (check_hlds__modes__do_modecheck_proc_body_15_p_0_5));
#line 919 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 919 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 3) = ((MR_Box) (check_hlds__modes__CheckpointMsg_30));
#line 919 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 4) = ((MR_Box) (check_hlds__modes__HeadVars_25));
#line 919 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 5) = ((MR_Box) (check_hlds__modes__InstMap0_26));
#line 919 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 6) = ((MR_Box) (check_hlds__modes__ArgFinalInsts0_27));
#line 919 "modes.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modes__V_82_82, 7) = ((MR_Box) (check_hlds__modes__SwitchVar_103));
#line 919 "modes.m"
                  }
#line 5692 "check_hlds.modes.c"
                  check_hlds__modes__TypeCtorInfo_147_147 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 918 "modes.m"
                  {
#line 918 "modes.m"
                    mercury__list__map_foldl_5_p_0(check_hlds__modes__TypeCtorInfo_147_147, check_hlds__modes__TypeCtorInfo_147_147, (MR_Word) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0, check_hlds__modes__V_82_82, check_hlds__modes__Cases1_105, &check_hlds__modes__Cases_106, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_81_81)), &check_hlds__modes__conv11_STATE_VARIABLE_ModeInfo_67);
                  }
#line 918 "modes.m"
                  *check_hlds__modes__STATE_VARIABLE_ModeInfo_67 = ((MR_Word) check_hlds__modes__conv11_STATE_VARIABLE_ModeInfo_67);
#line 922 "modes.m"
                  {
#line 922 "modes.m"
                    check_hlds__modes__NewGoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 922 "modes.m"
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 922 "modes.m"
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 1) = ((MR_Box) (check_hlds__modes__SwitchVar_103));
#line 922 "modes.m"
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 2) = ((MR_Box) (check_hlds__modes__CanFail_104));
#line 922 "modes.m"
                    MR_hl_field(MR_mktag(3), check_hlds__modes__NewGoalExpr_50, 3) = ((MR_Box) (check_hlds__modes__Cases_106));
#line 922 "modes.m"
                  }
#line 917 "modes.m"
                }
#line 882 "modes.m"
            }
#line 881 "modes.m"
            break;
#line 881 "modes.m"
        }
#line 927 "modes.m"
        {
#line 927 "modes.m"
          mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modes__HeadVars_25, check_hlds__modes__ArgFinalInsts0_27, &check_hlds__modes__HeadVarFinalInsts_60);
        }
#line 929 "modes.m"
        {
#line 929 "modes.m"
          check_hlds__modes__FinalInstMap_61 = hlds__instmap__instmap_from_assoc_list_1_f_0(check_hlds__modes__HeadVarFinalInsts_60);
        }
#line 930 "modes.m"
        {
#line 930 "modes.m"
          hlds__instmap__compute_instmap_delta_4_p_0(check_hlds__modes__InstMap0_26, check_hlds__modes__FinalInstMap_61, check_hlds__modes__BodyNonLocals_42, &check_hlds__modes__DeltaInstMap_62);
        }
#line 932 "modes.m"
        {
#line 932 "modes.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modes__DeltaInstMap_62, check_hlds__modes__BodyGoalInfo0_32, &check_hlds__modes__BodyGoalInfo_63);
        }
#line 933 "modes.m"
        {
#line 933 "modes.m"
          MR_Word base;
#line 933 "modes.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 933 "modes.m"
          *check_hlds__modes__Body_24 = base;
#line 933 "modes.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modes__NewGoalExpr_50));
#line 933 "modes.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modes__BodyGoalInfo_63));
#line 933 "modes.m"
        }
#line 934 "modes.m"
        *check_hlds__modes__ArgFinalInsts_28 = check_hlds__modes__ArgFinalInsts0_27;
#line 854 "modes.m"
      }
#line 935 "modes.m"
    else
#line 937 "modes.m"
      {
#line 937 "modes.m"
        MR_Word check_hlds__modes__Body1_64;
#line 937 "modes.m"
        MR_Word check_hlds__modes__GroundMatchesBound_65;
#line 937 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_94_94;
#line 937 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_96_96;
#line 937 "modes.m"
        MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98;
#line 937 "modes.m"
        MR_Word check_hlds__modes__ModuleInfo_180;
#line 937 "modes.m"
        MR_Word check_hlds__modes__Errors_181;
#line 937 "modes.m"
        MR_Word check_hlds__modes__Changed0_184;
#line 937 "modes.m"
        MR_Word check_hlds__modes__InstMap_185;
#line 937 "modes.m"
        MR_Word check_hlds__modes__VarTypes_186;
#line 937 "modes.m"
        MR_Word check_hlds__modes__VarFinalInsts1_187;
#line 937 "modes.m"
        MR_Word check_hlds__modes__ArgTypes_188;

#line 937 "modes.m"
        {
#line 937 "modes.m"
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modes__CheckpointMsg_30, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_66, &check_hlds__modes__STATE_VARIABLE_ModeInfo_94_94);
        }
#line 941 "modes.m"
#line 941 "modes.m"
        switch (check_hlds__modes__WhatToCheck_17) {
#line 941 "modes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 941 "modes.m"
          case (MR_Integer) 0:
#line 940 "modes.m"
            {
#line 940 "modes.m"
              check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modes__Body0_23, &check_hlds__modes__Body1_64, check_hlds__modes__STATE_VARIABLE_ModeInfo_94_94, &check_hlds__modes__STATE_VARIABLE_ModeInfo_96_96);
            }
#line 941 "modes.m"
            break;
#line 941 "modes.m"
          case (MR_Integer) 1:
#line 943 "modes.m"
            {
#line 943 "modes.m"
              check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modes__Body0_23, &check_hlds__modes__Body1_64, check_hlds__modes__STATE_VARIABLE_ModeInfo_94_94, &check_hlds__modes__STATE_VARIABLE_ModeInfo_96_96);
            }
#line 941 "modes.m"
            break;
#line 941 "modes.m"
        }
#line 945 "modes.m"
        {
#line 945 "modes.m"
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modes__CheckpointMsg_30, check_hlds__modes__STATE_VARIABLE_ModeInfo_96_96, &check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98);
        }
#line 951 "modes.m"
#line 951 "modes.m"
        switch (check_hlds__modes__IsUnifyPred_20) {
#line 951 "modes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 951 "modes.m"
          case (MR_Integer) 0:
#line 950 "modes.m"
            check_hlds__modes__GroundMatchesBound_65 = (MR_Integer) 0;
#line 951 "modes.m"
            break;
#line 951 "modes.m"
          case (MR_Integer) 1:
#line 953 "modes.m"
            check_hlds__modes__GroundMatchesBound_65 = (MR_Integer) 1;
#line 951 "modes.m"
            break;
#line 951 "modes.m"
        }
#line 1242 "modes.m"
        {
#line 1242 "modes.m"
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modes__ModuleInfo_180);
        }
#line 1243 "modes.m"
        {
#line 1243 "modes.m"
          check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modes__Errors_181);
        }
#line 1257 "modes.m"
        if ((check_hlds__modes__Errors_181 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1258 "modes.m"
          {
#line 1259 "modes.m"
            check_hlds__modes__Changed0_184 = (MR_Integer) 0;
#line 1260 "modes.m"
            {
#line 1260 "modes.m"
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modes__InstMap_185);
            }
#line 1258 "modes.m"
          }
#line 1257 "modes.m"
        else
#line 1251 "modes.m"
          {
#line 1255 "modes.m"
            check_hlds__modes__Changed0_184 = (MR_Integer) 1;
#line 1256 "modes.m"
            {
#line 1256 "modes.m"
              hlds__instmap__init_unreachable_1_p_0(&check_hlds__modes__InstMap_185);
            }
#line 1251 "modes.m"
          }
#line 1262 "modes.m"
        {
#line 1262 "modes.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modes__VarTypes_186);
        }
#line 1263 "modes.m"
        {
#line 1263 "modes.m"
          hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modes__InstMap_185, check_hlds__modes__HeadVars_25, &check_hlds__modes__VarFinalInsts1_187);
        }
#line 1264 "modes.m"
        {
#line 1264 "modes.m"
          hlds__vartypes__lookup_var_types_3_p_0(check_hlds__modes__VarTypes_186, check_hlds__modes__HeadVars_25, &check_hlds__modes__ArgTypes_188);
        }
#line 1283 "modes.m"
#line 1283 "modes.m"
        switch (check_hlds__modes__InferModes_18) {
#line 1283 "modes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1283 "modes.m"
          case (MR_Integer) 0:
#line 1284 "modes.m"
            {
#line 1285 "modes.m"
              MR_Word check_hlds__modes___Changed1_197;

#line 1285 "modes.m"
              {
#line 1285 "modes.m"
                check_hlds__modes__check_final_insts_13_p_0(check_hlds__modes__HeadVars_25, check_hlds__modes__ArgFinalInsts0_27, check_hlds__modes__VarFinalInsts1_187, check_hlds__modes__InferModes_18, check_hlds__modes__GroundMatchesBound_65, (MR_Integer) 1, check_hlds__modes__ModuleInfo_180, check_hlds__modes__Body1_64, check_hlds__modes__Body_24, (MR_Integer) 0, &check_hlds__modes___Changed1_197, check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, check_hlds__modes__STATE_VARIABLE_ModeInfo_67);
              }
#line 1288 "modes.m"
              *check_hlds__modes__ArgFinalInsts_28 = check_hlds__modes__ArgFinalInsts0_27;
#line 1284 "modes.m"
            }
#line 1283 "modes.m"
            break;
#line 1283 "modes.m"
          case (MR_Integer) 1:
#line 1266 "modes.m"
            {
#line 1266 "modes.m"
              MR_Word check_hlds__modes__VarFinalInsts2_189;
#line 1266 "modes.m"
              MR_Word check_hlds__modes__PredId_190;
#line 1266 "modes.m"
              MR_Integer check_hlds__modes__ProcId_191;
#line 1266 "modes.m"
              MR_Word check_hlds__modes__ProcInfo_192;
#line 1266 "modes.m"
              MR_Word check_hlds__modes__ArgLives_193;
#line 1266 "modes.m"
              MR_Word check_hlds__modes__Changed1_194;
#line 1266 "modes.m"
              MR_Word check_hlds__modes__Changed2_195;
#line 1266 "modes.m"
              MR_Word check_hlds__modes__Changed_196;
#line 1266 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_43_203;
#line 1266 "modes.m"
              MR_Word check_hlds__modes__V_204_204;
#line 1266 "modes.m"
              MR_Word check_hlds__modes__V_205_205;
#line 1266 "modes.m"
              MR_Word check_hlds__modes__V_206_206;

#line 1267 "modes.m"
              {
#line 1267 "modes.m"
                check_hlds__mode_util__normalise_insts_4_p_0(check_hlds__modes__ModuleInfo_180, check_hlds__modes__ArgTypes_188, check_hlds__modes__VarFinalInsts1_187, &check_hlds__modes__VarFinalInsts2_189);
              }
#line 1272 "modes.m"
              {
#line 1272 "modes.m"
                check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modes__PredId_190);
              }
#line 1273 "modes.m"
              {
#line 1273 "modes.m"
                check_hlds__mode_info__mode_info_get_proc_id_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modes__ProcId_191);
              }
#line 1274 "modes.m"
              {
#line 1274 "modes.m"
                hlds__hlds_module__module_info_proc_info_4_p_0(check_hlds__modes__ModuleInfo_180, check_hlds__modes__PredId_190, check_hlds__modes__ProcId_191, &check_hlds__modes__ProcInfo_192);
              }
#line 1275 "modes.m"
              {
#line 1275 "modes.m"
                hlds__hlds_pred__proc_info_arglives_3_p_0(check_hlds__modes__ProcInfo_192, check_hlds__modes__ModuleInfo_180, &check_hlds__modes__ArgLives_193);
              }
#line 1276 "modes.m"
              {
#line 1276 "modes.m"
                check_hlds__modes__maybe_clobber_insts_3_p_0(check_hlds__modes__VarFinalInsts2_189, check_hlds__modes__ArgLives_193, check_hlds__modes__ArgFinalInsts_28);
              }
#line 1277 "modes.m"
              {
#line 1277 "modes.m"
                check_hlds__modes__check_final_insts_13_p_0(check_hlds__modes__HeadVars_25, check_hlds__modes__ArgFinalInsts0_27, *check_hlds__modes__ArgFinalInsts_28, check_hlds__modes__InferModes_18, check_hlds__modes__GroundMatchesBound_65, (MR_Integer) 1, check_hlds__modes__ModuleInfo_180, check_hlds__modes__Body1_64, check_hlds__modes__Body_24, (MR_Integer) 0, &check_hlds__modes__Changed1_194, check_hlds__modes__STATE_VARIABLE_ModeInfo_98_98, &check_hlds__modes__STATE_VARIABLE_ModeInfo_43_203);
              }
#line 1280 "modes.m"
              {
#line 1280 "modes.m"
                check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_43_203, &check_hlds__modes__Changed2_195);
              }
#line 1281 "modes.m"
              {
#line 1281 "modes.m"
                check_hlds__modes__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1281 "modes.m"
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_206_206, 0) = ((MR_Box) (check_hlds__modes__Changed2_195));
#line 1281 "modes.m"
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_206_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1281 "modes.m"
              }
#line 1281 "modes.m"
              {
#line 1281 "modes.m"
                check_hlds__modes__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1281 "modes.m"
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_205_205, 0) = ((MR_Box) (check_hlds__modes__Changed1_194));
#line 1281 "modes.m"
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_205_205, 1) = ((MR_Box) (check_hlds__modes__V_206_206));
#line 1281 "modes.m"
              }
#line 1281 "modes.m"
              {
#line 1281 "modes.m"
                check_hlds__modes__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1281 "modes.m"
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_204_204, 0) = ((MR_Box) (check_hlds__modes__Changed0_184));
#line 1281 "modes.m"
                MR_hl_field(MR_mktag(1), check_hlds__modes__V_204_204, 1) = ((MR_Box) (check_hlds__modes__V_205_205));
#line 1281 "modes.m"
              }
#line 1281 "modes.m"
              {
#line 1281 "modes.m"
                mercury__bool__or_list_2_p_0(check_hlds__modes__V_204_204, &check_hlds__modes__Changed_196);
              }
#line 1282 "modes.m"
              {
#line 1282 "modes.m"
                check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(check_hlds__modes__Changed_196, check_hlds__modes__STATE_VARIABLE_ModeInfo_43_203, check_hlds__modes__STATE_VARIABLE_ModeInfo_67);
#line 1282 "modes.m"
                return;
              }
#line 1266 "modes.m"
            }
#line 1283 "modes.m"
            break;
#line 1283 "modes.m"
        }
#line 937 "modes.m"
      }
#line 830 "modes.m"
  }
#line 822 "modes.m"
}

#line 742 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_2(
#line 742 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 742 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1)
#line 742 "modes.m"
{
#line 742 "modes.m"
  {
#line 742 "modes.m"
    MR_Box check_hlds__modes__wrapper_arg_2;
#line 742 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 742 "modes.m"
    MR_Word check_hlds__modes__conv1_HeadVar__3_3;

#line 742 "modes.m"
    {
#line 742 "modes.m"
      check_hlds__modes__conv1_HeadVar__3_3 = check_hlds__mode_errors__mode_warning_info_to_spec_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modes__wrapper_arg_1));
    }
#line 742 "modes.m"
    check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv1_HeadVar__3_3));
#line 742 "modes.m"
    return check_hlds__modes__wrapper_arg_2;
#line 742 "modes.m"
  }
#line 742 "modes.m"
}

#line 722 "modes.m"
static MR_Box MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0_1(
#line 722 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 722 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1)
#line 722 "modes.m"
{
#line 722 "modes.m"
  {
#line 722 "modes.m"
    MR_Box check_hlds__modes__wrapper_arg_2;
#line 722 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 722 "modes.m"
    MR_Word check_hlds__modes__conv0_HeadVar__3_3;

#line 722 "modes.m"
    {
#line 722 "modes.m"
      check_hlds__modes__conv0_HeadVar__3_3 = check_hlds__mode_errors__mode_error_info_to_spec_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modes__wrapper_arg_1));
    }
#line 722 "modes.m"
    check_hlds__modes__wrapper_arg_2 = ((MR_Box) (check_hlds__modes__conv0_HeadVar__3_3));
#line 722 "modes.m"
    return check_hlds__modes__wrapper_arg_2;
#line 722 "modes.m"
  }
#line 722 "modes.m"
}

#line 622 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_proc_9_p_0(
#line 622 "modes.m"
  MR_Integer check_hlds__modes__ProcId_10,
#line 622 "modes.m"
  MR_Word check_hlds__modes__PredId_11,
#line 622 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_12,
#line 622 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_13,
#line 622 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23,
#line 622 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_24,
#line 622 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_25,
#line 622 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_26,
#line 622 "modes.m"
  MR_Word * check_hlds__modes__Specs_16)
#line 622 "modes.m"
{
#line 627 "modes.m"
  {
#line 627 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 627 "modes.m"
    MR_Word check_hlds__modes__PredInfo0_17;
#line 627 "modes.m"
    MR_Word check_hlds__modes__ProcInfo0_18;
#line 627 "modes.m"
    MR_Word check_hlds__modes__CanProcess_19;

#line 628 "modes.m"
    {
#line 628 "modes.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, &check_hlds__modes__PredInfo0_17, &check_hlds__modes__ProcInfo0_18);
    }
#line 630 "modes.m"
    {
#line 630 "modes.m"
      hlds__hlds_pred__proc_info_get_can_process_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__CanProcess_19);
    }
#line 634 "modes.m"
#line 634 "modes.m"
    switch (check_hlds__modes__CanProcess_19) {
#line 634 "modes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 634 "modes.m"
      case (MR_Integer) 0:
#line 635 "modes.m"
        {
#line 635 "modes.m"
          MR_Word check_hlds__modes__PredInfo_20;
#line 635 "modes.m"
          MR_Word check_hlds__modes__Preds1_21;
#line 635 "modes.m"
          MR_Word check_hlds__modes__Preds_22;
#line 635 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_27_27;
#line 635 "modes.m"
          MR_Word check_hlds__modes__HeadVars_48;
#line 635 "modes.m"
          MR_Word check_hlds__modes__ArgModes0_49;
#line 635 "modes.m"
          MR_Word check_hlds__modes__ArgLives0_50;
#line 635 "modes.m"
          MR_Word check_hlds__modes__Body0_51;
#line 635 "modes.m"
          MR_Word check_hlds__modes__ClausesInfo0_52;
#line 635 "modes.m"
          MR_Word check_hlds__modes__Clauses_53;
#line 635 "modes.m"
          MR_Word check_hlds__modes__ClausesInfo_55;
#line 635 "modes.m"
          MR_Word check_hlds__modes__Context_58;
#line 635 "modes.m"
          MR_Word check_hlds__modes__ArgInitialInsts_60;
#line 635 "modes.m"
          MR_Word check_hlds__modes__InstAL_61;
#line 635 "modes.m"
          MR_Word check_hlds__modes__InstMap0_62;
#line 635 "modes.m"
          MR_Word check_hlds__modes__LiveVarsList_63;
#line 635 "modes.m"
          MR_Word check_hlds__modes__LiveVars_64;
#line 635 "modes.m"
          MR_Word check_hlds__modes__HeadInstVars_65;
#line 635 "modes.m"
          MR_Word check_hlds__modes__Markers_66;
#line 635 "modes.m"
          MR_Word check_hlds__modes__InferModes_67;
#line 635 "modes.m"
          MR_Word check_hlds__modes__IsUnifyPred_68;
#line 635 "modes.m"
          MR_Word check_hlds__modes__ArgFinalInsts0_69;
#line 635 "modes.m"
          MR_Word check_hlds__modes__Body_70;
#line 635 "modes.m"
          MR_Word check_hlds__modes__ArgFinalInsts_71;
#line 635 "modes.m"
          MR_Word check_hlds__modes__ModeErrors_72;
#line 635 "modes.m"
          MR_Word check_hlds__modes__ArgModes_80;
#line 635 "modes.m"
          MR_Word check_hlds__modes__VarSet_81;
#line 635 "modes.m"
          MR_Word check_hlds__modes__VarTypes_82;
#line 635 "modes.m"
          MR_Word check_hlds__modes__NeedToRequantify_83;
#line 635 "modes.m"
          MR_Word check_hlds__modes__ProcMap1_84;
#line 635 "modes.m"
          MR_Word check_hlds__modes__ProcMap_85;
#line 635 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_PredInfo_67_86;
#line 635 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_68_87;
#line 635 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_69_88;
#line 635 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ModeInfo_71_90;
#line 635 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_76_95;
#line 635 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_79_98;
#line 635 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_80_99;
#line 635 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_81_100;
#line 635 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_82_101;
#line 635 "modes.m"
          MR_Word check_hlds__modes__STATE_VARIABLE_ProcInfo_84_103;
#line 635 "modes.m"
          MR_Word check_hlds__modes__Body1_136;
#line 635 "modes.m"
          MR_Word check_hlds__modes__ArgFinalInsts1_137;
#line 635 "modes.m"
          MR_Word check_hlds__modes__ModeInfo1_138;
#line 635 "modes.m"
          MR_Word check_hlds__modes__ModeErrors1_139;
#line 662 "modes.m"
          MR_Word check_hlds__modes___ItemNumbers_54;

#line 652 "modes.m"
          {
#line 652 "modes.m"
            hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__HeadVars_48);
          }
#line 653 "modes.m"
          {
#line 653 "modes.m"
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__ArgModes0_49);
          }
#line 654 "modes.m"
          {
#line 654 "modes.m"
            hlds__hlds_pred__proc_info_arglives_3_p_0(check_hlds__modes__ProcInfo0_18, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, &check_hlds__modes__ArgLives0_50);
          }
#line 655 "modes.m"
          {
#line 655 "modes.m"
            hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__Body0_51);
          }
#line 661 "modes.m"
          {
#line 661 "modes.m"
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__modes__PredInfo0_17, &check_hlds__modes__ClausesInfo0_52);
          }
#line 662 "modes.m"
          {
#line 662 "modes.m"
            hlds__hlds_clauses__clauses_info_clauses_4_p_0(&check_hlds__modes__Clauses_53, &check_hlds__modes___ItemNumbers_54, check_hlds__modes__ClausesInfo0_52, &check_hlds__modes__ClausesInfo_55);
          }
#line 663 "modes.m"
          {
#line 663 "modes.m"
            hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__modes__ClausesInfo_55, check_hlds__modes__PredInfo0_17, &check_hlds__modes__STATE_VARIABLE_PredInfo_67_86);
          }
#line 667 "modes.m"
          if ((check_hlds__modes__Clauses_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 669 "modes.m"
            {
#line 669 "modes.m"
              hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__Context_58);
            }
#line 667 "modes.m"
          else
#line 665 "modes.m"
            {
#line 665 "modes.m"
              MR_Word check_hlds__modes__FirstClause_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Clauses_53, (MR_Integer) 0)));
#line 665 "modes.m"
              MR_Word check_hlds__modes__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__Clauses_53, (MR_Integer) 1)));
#line 666 "modes.m"
              MR_Word check_hlds__modes__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_56, (MR_Integer) 0)));
#line 666 "modes.m"
              MR_Word check_hlds__modes__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_56, (MR_Integer) 1)));
#line 666 "modes.m"
              MR_Word check_hlds__modes__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_56, (MR_Integer) 2)));
#line 666 "modes.m"
              MR_Word check_hlds__modes__V_108_108;

#line 666 "modes.m"
              check_hlds__modes__Context_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_56, (MR_Integer) 3)));
#line 666 "modes.m"
              check_hlds__modes__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__FirstClause_56, (MR_Integer) 4)));
#line 665 "modes.m"
            }
#line 678 "modes.m"
          {
#line 678 "modes.m"
            check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__modes__ArgModes0_49, &check_hlds__modes__ArgInitialInsts_60);
          }
#line 679 "modes.m"
          {
#line 679 "modes.m"
            mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__modes_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modes__HeadVars_48, check_hlds__modes__ArgInitialInsts_60, &check_hlds__modes__InstAL_61);
          }
#line 680 "modes.m"
          {
#line 680 "modes.m"
            check_hlds__modes__InstMap0_62 = hlds__instmap__instmap_from_assoc_list_1_f_0(check_hlds__modes__InstAL_61);
          }
#line 684 "modes.m"
          {
#line 684 "modes.m"
            check_hlds__modecheck_util__get_live_vars_3_p_0(check_hlds__modes__HeadVars_48, check_hlds__modes__ArgLives0_50, &check_hlds__modes__LiveVarsList_63);
          }
#line 685 "modes.m"
          {
#line 685 "modes.m"
            parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modes__LiveVarsList_63, &check_hlds__modes__LiveVars_64);
          }
#line 687 "modes.m"
          {
#line 687 "modes.m"
            check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__modes__ArgModes0_49, &check_hlds__modes__HeadInstVars_65);
          }
#line 690 "modes.m"
          {
#line 690 "modes.m"
            check_hlds__mode_info__mode_info_init_10_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, check_hlds__modes__Context_58, check_hlds__modes__LiveVars_64, check_hlds__modes__HeadInstVars_65, check_hlds__modes__InstMap0_62, check_hlds__modes__WhatToCheck_12, check_hlds__modes__MayChangeCalledProc_13, &check_hlds__modes__STATE_VARIABLE_ModeInfo_68_87);
          }
#line 693 "modes.m"
          {
#line 693 "modes.m"
            check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(check_hlds__modes__STATE_VARIABLE_Changed_0_25, check_hlds__modes__STATE_VARIABLE_ModeInfo_68_87, &check_hlds__modes__STATE_VARIABLE_ModeInfo_69_88);
          }
#line 695 "modes.m"
          {
#line 695 "modes.m"
            hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modes__STATE_VARIABLE_PredInfo_67_86, &check_hlds__modes__Markers_66);
          }
#line 696 "modes.m"
          {
#line 696 "modes.m"
            check_hlds__modes__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_66, (MR_Integer) 3);
          }
#line 698 "modes.m"
          if (check_hlds__modes__succeeded)
#line 697 "modes.m"
            check_hlds__modes__InferModes_67 = (MR_Integer) 1;
#line 698 "modes.m"
          else
#line 699 "modes.m"
            check_hlds__modes__InferModes_67 = (MR_Integer) 0;
#line 701 "modes.m"
          {
#line 701 "modes.m"
            check_hlds__modes__succeeded = hlds__hlds_pred__is_unify_pred_1_p_0(check_hlds__modes__STATE_VARIABLE_PredInfo_67_86);
          }
#line 703 "modes.m"
          if (check_hlds__modes__succeeded)
#line 702 "modes.m"
            check_hlds__modes__IsUnifyPred_68 = (MR_Integer) 1;
#line 703 "modes.m"
          else
#line 704 "modes.m"
            check_hlds__modes__IsUnifyPred_68 = (MR_Integer) 0;
#line 706 "modes.m"
          {
#line 706 "modes.m"
            check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__modes__ArgModes0_49, &check_hlds__modes__ArgFinalInsts0_69);
          }
#line 782 "modes.m"
          {
#line 782 "modes.m"
            check_hlds__modes__do_modecheck_proc_body_15_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__modes__WhatToCheck_12, check_hlds__modes__InferModes_67, check_hlds__modes__Markers_66, check_hlds__modes__IsUnifyPred_68, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, check_hlds__modes__Body0_51, &check_hlds__modes__Body1_136, check_hlds__modes__HeadVars_48, check_hlds__modes__InstMap0_62, check_hlds__modes__ArgFinalInsts0_69, &check_hlds__modes__ArgFinalInsts1_137, check_hlds__modes__STATE_VARIABLE_ModeInfo_69_88, &check_hlds__modes__ModeInfo1_138);
          }
#line 785 "modes.m"
          {
#line 785 "modes.m"
            check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__ModeInfo1_138, &check_hlds__modes__ModeErrors1_139);
          }
#line 791 "modes.m"
          if ((check_hlds__modes__ModeErrors1_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 787 "modes.m"
            {
#line 788 "modes.m"
              check_hlds__modes__Body_70 = check_hlds__modes__Body1_136;
#line 789 "modes.m"
              check_hlds__modes__ArgFinalInsts_71 = check_hlds__modes__ArgFinalInsts1_137;
#line 790 "modes.m"
              check_hlds__modes__STATE_VARIABLE_ModeInfo_71_90 = check_hlds__modes__ModeInfo1_138;
#line 787 "modes.m"
            }
#line 791 "modes.m"
          else
#line 792 "modes.m"
            {
#line 792 "modes.m"
              MR_Word check_hlds__modes__HadFromGroundTerm_142;

#line 793 "modes.m"
              {
#line 793 "modes.m"
                check_hlds__mode_info__mode_info_get_had_from_ground_term_2_p_0(check_hlds__modes__ModeInfo1_138, &check_hlds__modes__HadFromGroundTerm_142);
              }
#line 812 "modes.m"
#line 812 "modes.m"
              switch (check_hlds__modes__HadFromGroundTerm_142) {
#line 812 "modes.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 812 "modes.m"
                case (MR_Integer) 1:
#line 813 "modes.m"
                  {
#line 816 "modes.m"
                    check_hlds__modes__Body_70 = check_hlds__modes__Body1_136;
#line 817 "modes.m"
                    check_hlds__modes__ArgFinalInsts_71 = check_hlds__modes__ArgFinalInsts1_137;
#line 818 "modes.m"
                    check_hlds__modes__STATE_VARIABLE_ModeInfo_71_90 = check_hlds__modes__ModeInfo1_138;
#line 813 "modes.m"
                  }
#line 812 "modes.m"
                  break;
#line 812 "modes.m"
                case (MR_Integer) 0:
#line 795 "modes.m"
                  {
#line 795 "modes.m"
                    MR_Word check_hlds__modes__ModeInfo2_143;

#line 807 "modes.m"
                    {
#line 807 "modes.m"
                      check_hlds__mode_info__mode_info_set_make_ground_terms_unique_3_p_0((MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ModeInfo_69_88, &check_hlds__modes__ModeInfo2_143);
                    }
#line 809 "modes.m"
                    {
#line 809 "modes.m"
                      check_hlds__modes__do_modecheck_proc_body_15_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__modes__WhatToCheck_12, check_hlds__modes__InferModes_67, check_hlds__modes__Markers_66, check_hlds__modes__IsUnifyPred_68, check_hlds__modes__PredId_11, check_hlds__modes__ProcId_10, check_hlds__modes__Body0_51, &check_hlds__modes__Body_70, check_hlds__modes__HeadVars_48, check_hlds__modes__InstMap0_62, check_hlds__modes__ArgFinalInsts0_69, &check_hlds__modes__ArgFinalInsts_71, check_hlds__modes__ModeInfo2_143, &check_hlds__modes__STATE_VARIABLE_ModeInfo_71_90);
                    }
#line 795 "modes.m"
                  }
#line 812 "modes.m"
                  break;
#line 812 "modes.m"
              }
#line 792 "modes.m"
            }
#line 712 "modes.m"
          {
#line 712 "modes.m"
            check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_71_90, &check_hlds__modes__ModeErrors_72);
          }
#line 720 "modes.m"
#line 720 "modes.m"
          switch (check_hlds__modes__InferModes_67) {
#line 720 "modes.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 720 "modes.m"
            case (MR_Integer) 0:
#line 721 "modes.m"
              {
#line 721 "modes.m"
                MR_Word check_hlds__modes__TypeCtorInfo_94_113 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 721 "modes.m"
                MR_Word check_hlds__modes__AllErrorSpecs_73;
#line 721 "modes.m"
                MR_Word check_hlds__modes__ErrorSpecs_76;
#line 721 "modes.m"
                MR_Word check_hlds__modes__StateVarWarningSpecs_77;
#line 721 "modes.m"
                MR_Word check_hlds__modes__ModeWarnings_78;
#line 721 "modes.m"
                MR_Word check_hlds__modes__WarningSpecs_79;
#line 721 "modes.m"
                MR_Word check_hlds__modes__V_91_91;
#line 721 "modes.m"
                MR_Word check_hlds__modes__V_93_93;
#line 721 "modes.m"
                MR_Word check_hlds__modes__V_94_94;

#line 722 "modes.m"
                {
#line 722 "modes.m"
                  check_hlds__modes__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 722 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[0]));
#line 722 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 1) = ((MR_Box) (check_hlds__modes__maybe_modecheck_proc_9_p_0_1));
#line 722 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 722 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_91_91, 3) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_71_90));
#line 722 "modes.m"
                }
#line 722 "modes.m"
                {
#line 722 "modes.m"
                  check_hlds__modes__AllErrorSpecs_73 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__modes__TypeCtorInfo_94_113, check_hlds__modes__V_91_91, check_hlds__modes__ModeErrors_72);
                }
#line 734 "modes.m"
                if ((check_hlds__modes__AllErrorSpecs_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 735 "modes.m"
                  {
#line 736 "modes.m"
                    check_hlds__modes__ErrorSpecs_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 739 "modes.m"
                    check_hlds__modes__StateVarWarningSpecs_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 735 "modes.m"
                  }
#line 734 "modes.m"
                else
#line 730 "modes.m"
                  {
#line 730 "modes.m"
                    MR_Word check_hlds__modes__ErrorSpec_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__AllErrorSpecs_73, (MR_Integer) 0)));
#line 730 "modes.m"
                    MR_Word check_hlds__modes__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__AllErrorSpecs_73, (MR_Integer) 1)));

#line 731 "modes.m"
                    {
#line 731 "modes.m"
                      check_hlds__modes__ErrorSpecs_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "modes.m"
                      MR_hl_field(MR_mktag(1), check_hlds__modes__ErrorSpecs_76, 0) = ((MR_Box) (check_hlds__modes__ErrorSpec_74));
#line 731 "modes.m"
                      MR_hl_field(MR_mktag(1), check_hlds__modes__ErrorSpecs_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 731 "modes.m"
                    }
#line 732 "modes.m"
                    {
#line 732 "modes.m"
                      hlds__hlds_pred__proc_info_get_statevar_warnings_2_p_0(check_hlds__modes__ProcInfo0_18, &check_hlds__modes__StateVarWarningSpecs_77);
                    }
#line 730 "modes.m"
                  }
#line 741 "modes.m"
                {
#line 741 "modes.m"
                  check_hlds__mode_info__mode_info_get_warnings_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_71_90, &check_hlds__modes__ModeWarnings_78);
                }
#line 742 "modes.m"
                {
#line 742 "modes.m"
                  check_hlds__modes__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 742 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_6[1]));
#line 742 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 1) = ((MR_Box) (check_hlds__modes__maybe_modecheck_proc_9_p_0_2));
#line 742 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 742 "modes.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modes__V_93_93, 3) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModeInfo_71_90));
#line 742 "modes.m"
                }
#line 742 "modes.m"
                {
#line 742 "modes.m"
                  check_hlds__modes__WarningSpecs_79 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0, check_hlds__modes__TypeCtorInfo_94_113, check_hlds__modes__V_93_93, check_hlds__modes__ModeWarnings_78);
                }
#line 744 "modes.m"
                {
#line 744 "modes.m"
                  check_hlds__modes__V_94_94 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_94_113, check_hlds__modes__WarningSpecs_79, check_hlds__modes__StateVarWarningSpecs_77);
                }
#line 744 "modes.m"
                {
#line 744 "modes.m"
                  *check_hlds__modes__Specs_16 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_94_113, check_hlds__modes__ErrorSpecs_76, check_hlds__modes__V_94_94);
                }
#line 721 "modes.m"
                check_hlds__modes__STATE_VARIABLE_ProcInfo_76_95 = check_hlds__modes__ProcInfo0_18;
#line 721 "modes.m"
              }
#line 720 "modes.m"
              break;
#line 720 "modes.m"
            case (MR_Integer) 1:
#line 714 "modes.m"
              {
#line 718 "modes.m"
                {
#line 718 "modes.m"
                  hlds__hlds_pred__proc_info_set_mode_errors_3_p_0(check_hlds__modes__ModeErrors_72, check_hlds__modes__ProcInfo0_18, &check_hlds__modes__STATE_VARIABLE_ProcInfo_76_95);
                }
#line 719 "modes.m"
                *check_hlds__modes__Specs_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 714 "modes.m"
              }
#line 720 "modes.m"
              break;
#line 720 "modes.m"
          }
#line 749 "modes.m"
          {
#line 749 "modes.m"
            parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(check_hlds__modes__ArgInitialInsts_60, check_hlds__modes__ArgFinalInsts_71, &check_hlds__modes__ArgModes_80);
          }
#line 750 "modes.m"
          {
#line 750 "modes.m"
            check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_71_90, check_hlds__modes__STATE_VARIABLE_Changed_26);
          }
#line 751 "modes.m"
          {
#line 751 "modes.m"
            check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_71_90, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_27_27);
          }
#line 752 "modes.m"
          {
#line 752 "modes.m"
            check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_71_90, &check_hlds__modes__VarSet_81);
          }
#line 755 "modes.m"
          {
#line 755 "modes.m"
            check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_71_90, &check_hlds__modes__VarTypes_82);
          }
#line 756 "modes.m"
          {
#line 756 "modes.m"
            check_hlds__mode_info__mode_info_get_need_to_requantify_2_p_0(check_hlds__modes__STATE_VARIABLE_ModeInfo_71_90, &check_hlds__modes__NeedToRequantify_83);
          }
#line 757 "modes.m"
          {
#line 757 "modes.m"
            hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__modes__Body_70, check_hlds__modes__STATE_VARIABLE_ProcInfo_76_95, &check_hlds__modes__STATE_VARIABLE_ProcInfo_79_98);
          }
#line 758 "modes.m"
          {
#line 758 "modes.m"
            hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__modes__VarSet_81, check_hlds__modes__STATE_VARIABLE_ProcInfo_79_98, &check_hlds__modes__STATE_VARIABLE_ProcInfo_80_99);
          }
#line 759 "modes.m"
          {
#line 759 "modes.m"
            hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__modes__VarTypes_82, check_hlds__modes__STATE_VARIABLE_ProcInfo_80_99, &check_hlds__modes__STATE_VARIABLE_ProcInfo_81_100);
          }
#line 760 "modes.m"
          {
#line 760 "modes.m"
            hlds__hlds_pred__proc_info_set_argmodes_3_p_0(check_hlds__modes__ArgModes_80, check_hlds__modes__STATE_VARIABLE_ProcInfo_81_100, &check_hlds__modes__STATE_VARIABLE_ProcInfo_82_101);
          }
#line 763 "modes.m"
#line 763 "modes.m"
          switch (check_hlds__modes__NeedToRequantify_83) {
#line 763 "modes.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 763 "modes.m"
            case (MR_Integer) 1:
#line 762 "modes.m"
              check_hlds__modes__STATE_VARIABLE_ProcInfo_84_103 = check_hlds__modes__STATE_VARIABLE_ProcInfo_82_101;
#line 763 "modes.m"
              break;
#line 763 "modes.m"
            case (MR_Integer) 0:
#line 764 "modes.m"
              {
#line 765 "modes.m"
                {
#line 765 "modes.m"
                  hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ProcInfo_82_101, &check_hlds__modes__STATE_VARIABLE_ProcInfo_84_103);
                }
#line 764 "modes.m"
              }
#line 763 "modes.m"
              break;
#line 763 "modes.m"
          }
#line 768 "modes.m"
          {
#line 768 "modes.m"
            hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__STATE_VARIABLE_PredInfo_67_86, &check_hlds__modes__ProcMap1_84);
          }
#line 769 "modes.m"
          {
#line 769 "modes.m"
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__modes__ProcId_10, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ProcInfo_84_103)), check_hlds__modes__ProcMap1_84, &check_hlds__modes__ProcMap_85);
          }
#line 770 "modes.m"
          {
#line 770 "modes.m"
            hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__modes__ProcMap_85, check_hlds__modes__STATE_VARIABLE_PredInfo_67_86, &check_hlds__modes__PredInfo_20);
          }
#line 639 "modes.m"
          {
#line 639 "modes.m"
            hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_27_27, &check_hlds__modes__Preds1_21);
          }
#line 640 "modes.m"
          {
#line 640 "modes.m"
            mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (check_hlds__modes__PredId_11)), ((MR_Box) (check_hlds__modes__PredInfo_20)), check_hlds__modes__Preds1_21, &check_hlds__modes__Preds_22);
          }
#line 641 "modes.m"
          {
#line 641 "modes.m"
            hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__Preds_22, check_hlds__modes__STATE_VARIABLE_ModuleInfo_27_27, check_hlds__modes__STATE_VARIABLE_ModuleInfo_24);
#line 641 "modes.m"
            return;
          }
#line 635 "modes.m"
        }
#line 634 "modes.m"
        break;
#line 634 "modes.m"
      case (MR_Integer) 1:
#line 632 "modes.m"
        {
#line 633 "modes.m"
          *check_hlds__modes__Specs_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 632 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_24 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_23;
#line 632 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Changed_26 = check_hlds__modes__STATE_VARIABLE_Changed_0_25;
#line 632 "modes.m"
        }
#line 634 "modes.m"
        break;
#line 634 "modes.m"
    }
#line 627 "modes.m"
  }
#line 622 "modes.m"
}

#line 595 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_procs_10_p_0(
#line 595 "modes.m"
  MR_Word check_hlds__modes__HeadVar__1_1,
#line 595 "modes.m"
  MR_Word check_hlds__modes__HeadVar__2_2,
#line 595 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_3,
#line 595 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_4,
#line 595 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5,
#line 595 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_6,
#line 595 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_7,
#line 595 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_8,
#line 595 "modes.m"
  MR_Word check_hlds__modes__HeadVar__9_9,
#line 595 "modes.m"
  MR_Word * check_hlds__modes__HeadVar__10_10)
#line 595 "modes.m"
{
#line 600 "modes.m"
  while (MR_TRUE)
#line 600 "modes.m"
    {
#line 600 "modes.m"
      /* tailcall optimized into a loop */
#line 600 "modes.m"
      {
#line 600 "modes.m"
        MR_bool check_hlds__modes__succeeded;

#line 600 "modes.m"
        if ((check_hlds__modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 600 "modes.m"
          {
#line 600 "modes.m"
            *check_hlds__modes__HeadVar__10_10 = check_hlds__modes__HeadVar__9_9;
#line 600 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Changed_8 = check_hlds__modes__STATE_VARIABLE_Changed_0_7;
#line 600 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_ModuleInfo_6 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5;
#line 600 "modes.m"
          }
#line 600 "modes.m"
        else
#line 602 "modes.m"
          {
#line 602 "modes.m"
            MR_Integer check_hlds__modes__ProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 0)));
#line 602 "modes.m"
            MR_Word check_hlds__modes__ProcIds_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modes__HeadVar__1_1, (MR_Integer) 1)));
#line 602 "modes.m"
            MR_Word check_hlds__modes__ProcSpecs_31;
#line 602 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_38_38;
#line 602 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_Changed_39_39;
#line 602 "modes.m"
            MR_Word check_hlds__modes__STATE_VARIABLE_SpecsAcc_40_40;

#line 604 "modes.m"
            {
#line 604 "modes.m"
              check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_23, check_hlds__modes__HeadVar__2_2, check_hlds__modes__WhatToCheck_3, check_hlds__modes__MayChangeCalledProc_4, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_38_38, check_hlds__modes__STATE_VARIABLE_Changed_0_7, &check_hlds__modes__STATE_VARIABLE_Changed_39_39, &check_hlds__modes__ProcSpecs_31);
            }
#line 606 "modes.m"
            {
#line 606 "modes.m"
              parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0(check_hlds__modes__ProcSpecs_31, check_hlds__modes__HeadVar__9_9, &check_hlds__modes__STATE_VARIABLE_SpecsAcc_40_40);
            }
#line 608 "modes.m"
            /* direct tailcall eliminated */
#line 608 "modes.m"
            {
#line 608 "modes.m"
              MR_Word check_hlds__modes__HeadVar__1__tmp_copy_1 = check_hlds__modes__ProcIds_24;
#line 608 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_38_38;
#line 608 "modes.m"
              MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_7 = check_hlds__modes__STATE_VARIABLE_Changed_39_39;
#line 608 "modes.m"
              MR_Word check_hlds__modes__HeadVar__9__tmp_copy_9 = check_hlds__modes__STATE_VARIABLE_SpecsAcc_40_40;

#line 608 "modes.m"
              check_hlds__modes__HeadVar__9_9 = check_hlds__modes__HeadVar__9__tmp_copy_9;
#line 608 "modes.m"
              check_hlds__modes__STATE_VARIABLE_Changed_0_7 = check_hlds__modes__STATE_VARIABLE_Changed_0__tmp_copy_7;
#line 608 "modes.m"
              check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_5 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5;
#line 608 "modes.m"
              check_hlds__modes__HeadVar__1_1 = check_hlds__modes__HeadVar__1__tmp_copy_1;
#line 608 "modes.m"
            }
#line 608 "modes.m"
            continue;
#line 602 "modes.m"
          }
#line 600 "modes.m"
      }
#line 600 "modes.m"
      break;
#line 600 "modes.m"
    }
#line 595 "modes.m"
}

#line 570 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_1(
#line 570 "modes.m"
  void * check_hlds__modes__env_ptr_arg)
#line 570 "modes.m"
{
#line 570 "modes.m"
  {
#line 570 "modes.m"
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * check_hlds__modes__env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) check_hlds__modes__env_ptr_arg;

#line 570 "modes.m"
    MR_builtin_longjmp((check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__commit_0, 1);
#line 570 "modes.m"
  }
#line 570 "modes.m"
}

#line 570 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_3(
#line 570 "modes.m"
  void * check_hlds__modes__env_ptr_arg)
#line 570 "modes.m"
{
#line 570 "modes.m"
  {
#line 570 "modes.m"
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * check_hlds__modes__env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) check_hlds__modes__env_ptr_arg;

#line 570 "modes.m"
    (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0___ProcId_73 = ((MR_Integer) (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv2__ProcId_73);
#line 570 "modes.m"
    (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcInfo_81 = ((MR_Word) (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv1_ProcInfo_81);
#line 570 "modes.m"
    {
#line 570 "modes.m"
      check_hlds__modes__maybe_modecheck_pred_9_p_0_2(check_hlds__modes__env_ptr);
#line 570 "modes.m"
      return;
    }
#line 570 "modes.m"
  }
#line 570 "modes.m"
}

#line 570 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_2(
#line 570 "modes.m"
  void * check_hlds__modes__env_ptr_arg)
#line 570 "modes.m"
{
#line 570 "modes.m"
  {
#line 570 "modes.m"
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * check_hlds__modes__env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) check_hlds__modes__env_ptr_arg;

#line 570 "modes.m"
    {
#line 571 "modes.m"
      MR_Word check_hlds__modes__V_89_89;

#line 571 "modes.m"
      {
#line 571 "modes.m"
        hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcInfo_81, &(check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__V_84_84);
      }
#line 571 "modes.m"
      (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__V_84_84)) == (MR_mktag((MR_Integer) 1)));
#line 571 "modes.m"
      if ((check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
#line 571 "modes.m"
        {
#line 571 "modes.m"
          check_hlds__modes__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__V_84_84, (MR_Integer) 0)));
#line 571 "modes.m"
          {
#line 571 "modes.m"
            check_hlds__modes__maybe_modecheck_pred_9_p_0_1(check_hlds__modes__env_ptr);
#line 571 "modes.m"
            return;
          }
#line 571 "modes.m"
        }
#line 570 "modes.m"
    }
#line 570 "modes.m"
  }
#line 570 "modes.m"
}

#line 570 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0_4(
#line 570 "modes.m"
  void * check_hlds__modes__env_ptr_arg)
#line 570 "modes.m"
{
#line 570 "modes.m"
  {
#line 570 "modes.m"
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s * check_hlds__modes__env_ptr = (struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s *) check_hlds__modes__env_ptr_arg;

#line 570 "modes.m"
    if (MR_builtin_setjmp((check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__commit_0) == 0)
#line 570 "modes.m"
      {
#line 570 "modes.m"
        {
#line 570 "modes.m"
          {
#line 570 "modes.m"
            mercury__map__member_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcTable_71, &(check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv2__ProcId_73, &(check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__conv1_ProcInfo_81, check_hlds__modes__maybe_modecheck_pred_9_p_0_3, check_hlds__modes__env_ptr);
          }
#line 570 "modes.m"
        }
#line 570 "modes.m"
        (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = MR_FALSE;
#line 570 "modes.m"
      }
#line 570 "modes.m"
    else
#line 570 "modes.m"
      (check_hlds__modes__env_ptr)->check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = MR_TRUE;
#line 570 "modes.m"
  }
#line 570 "modes.m"
}

#line 493 "modes.m"
static void MR_CALL 
check_hlds__modes__maybe_modecheck_pred_9_p_0(
#line 493 "modes.m"
  MR_Word check_hlds__modes__WhatToCheck_10,
#line 493 "modes.m"
  MR_Word check_hlds__modes__MayChangeCalledProc_11,
#line 493 "modes.m"
  MR_Word check_hlds__modes__PredId_12,
#line 493 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25,
#line 493 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ModuleInfo_26,
#line 493 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Changed_0_27,
#line 493 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Changed_28,
#line 493 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_Specs_0_29,
#line 493 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_Specs_30)
#line 493 "modes.m"
{
#line 493 "modes.m"
  {
#line 493 "modes.m"
    struct check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0_s check_hlds__modes__env;

#line 498 "modes.m"
    {
#line 498 "modes.m"
      MR_Word check_hlds__modes__Preds0_16;
#line 498 "modes.m"
      MR_Word check_hlds__modes__PredInfo0_17;
#line 500 "modes.m"
      MR_Box check_hlds__modes__conv0_PredInfo0_17;

#line 499 "modes.m"
      {
#line 499 "modes.m"
        hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25, &check_hlds__modes__Preds0_16);
      }
#line 500 "modes.m"
      {
#line 500 "modes.m"
        mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__modes__Preds0_16, ((MR_Box) (check_hlds__modes__PredId_12)), &check_hlds__modes__conv0_PredInfo0_17);
      }
#line 500 "modes.m"
      check_hlds__modes__PredInfo0_17 = ((MR_Word) check_hlds__modes__conv0_PredInfo0_17);
#line 478 "modes.m"
      {
#line 478 "modes.m"
        (check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__modes__PredInfo0_17);
      }
#line 481 "modes.m"
      if (!((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded))
#line 481 "modes.m"
        {
#line 479 "modes.m"
          {
#line 479 "modes.m"
            (check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(check_hlds__modes__PredInfo0_17);
          }
#line 481 "modes.m"
          if (!((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded))
#line 484 "modes.m"
            {
#line 484 "modes.m"
              MR_Word check_hlds__modes__PredMarkers_46;

#line 484 "modes.m"
              {
#line 484 "modes.m"
                hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modes__PredInfo0_17, &check_hlds__modes__PredMarkers_46);
              }
#line 485 "modes.m"
              {
#line 485 "modes.m"
                (check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__PredMarkers_46, (MR_Integer) 9);
              }
#line 484 "modes.m"
            }
#line 481 "modes.m"
        }
#line 7075 "check_hlds.modes.c"
      if ((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
#line 7077 "check_hlds.modes.c"
        {
#line 503 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_ModuleInfo_26 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25;
#line 503 "modes.m"
          *check_hlds__modes__STATE_VARIABLE_Changed_28 = check_hlds__modes__STATE_VARIABLE_Changed_0_27;
#line 503 "modes.m"
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
#line 506 "modes.m"
          MR_Word check_hlds__modes__Markers_55;
#line 506 "modes.m"
          MR_String check_hlds__modes__Msg_56;

#line 536 "modes.m"
          {
#line 536 "modes.m"
            hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modes__PredInfo0_17, &check_hlds__modes__Markers_55);
          }
#line 537 "modes.m"
          {
#line 537 "modes.m"
            (check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_55, (MR_Integer) 3);
          }
#line 545 "modes.m"
          if ((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
#line 541 "modes.m"
#line 541 "modes.m"
            switch (check_hlds__modes__WhatToCheck_10) {
#line 541 "modes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 541 "modes.m"
              case (MR_Integer) 0:
#line 540 "modes.m"
                check_hlds__modes__Msg_56 = (MR_String) "% Mode-analysing ";
#line 541 "modes.m"
                break;
#line 541 "modes.m"
              case (MR_Integer) 1:
#line 543 "modes.m"
                check_hlds__modes__Msg_56 = (MR_String) "% Unique-mode-analysing ";
#line 541 "modes.m"
                break;
#line 541 "modes.m"
            }
#line 545 "modes.m"
          else
#line 549 "modes.m"
#line 549 "modes.m"
            switch (check_hlds__modes__WhatToCheck_10) {
#line 549 "modes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 549 "modes.m"
              case (MR_Integer) 0:
#line 548 "modes.m"
                check_hlds__modes__Msg_56 = (MR_String) "% Mode-checking ";
#line 549 "modes.m"
                break;
#line 549 "modes.m"
              case (MR_Integer) 1:
#line 551 "modes.m"
                check_hlds__modes__Msg_56 = (MR_String) "% Unique-mode-checking ";
#line 549 "modes.m"
                break;
#line 549 "modes.m"
            }
#line 554 "modes.m"
          {
#line 554 "modes.m"
            hlds__passes_aux__write_pred_progress_message_5_p_0(check_hlds__modes__Msg_56, check_hlds__modes__PredId_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25);
          }
#line 581 "modes.m"
#line 581 "modes.m"
          switch (check_hlds__modes__WhatToCheck_10) {
#line 581 "modes.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 581 "modes.m"
            case (MR_Integer) 0:
#line 566 "modes.m"
              {
#line 567 "modes.m"
                {
#line 567 "modes.m"
                  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__PredInfo0_17, &(check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__ProcTable_71);
                }
#line 570 "modes.m"
                {
#line 570 "modes.m"
                  check_hlds__modes__maybe_modecheck_pred_9_p_0_4(&check_hlds__modes__env);
                }
#line 576 "modes.m"
                if ((check_hlds__modes__env).check_hlds__modes__maybe_modecheck_pred_9_p_0_env_0__succeeded)
#line 575 "modes.m"
                  check_hlds__modes__ThisPredDeclSpecs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 576 "modes.m"
                else
#line 578 "modes.m"
                  {
#line 578 "modes.m"
                    check_hlds__modes__ThisPredDeclSpecs_20 = check_hlds__mode_errors__maybe_report_error_no_modes_3_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__modes__PredId_12, check_hlds__modes__PredInfo0_17);
                  }
#line 566 "modes.m"
              }
#line 581 "modes.m"
              break;
#line 581 "modes.m"
            case (MR_Integer) 1:
#line 583 "modes.m"
              check_hlds__modes__ThisPredDeclSpecs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 581 "modes.m"
              break;
#line 581 "modes.m"
          }
#line 588 "modes.m"
          {
#line 588 "modes.m"
            check_hlds__modes__ProcIds_75 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__modes__PredInfo0_17);
          }
#line 590 "modes.m"
          {
#line 590 "modes.m"
            check_hlds__modes__V_80_80 = parse_tree__error_util__init_error_spec_accumulator_0_f_0();
          }
#line 589 "modes.m"
          {
#line 589 "modes.m"
            check_hlds__modes__modecheck_procs_10_p_0(check_hlds__modes__ProcIds_75, check_hlds__modes__PredId_12, check_hlds__modes__WhatToCheck_10, check_hlds__modes__MayChangeCalledProc_11, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_25, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__modes__STATE_VARIABLE_Changed_0_27, check_hlds__modes__STATE_VARIABLE_Changed_28, check_hlds__modes__V_80_80, &check_hlds__modes__SpecsAcc_76);
          }
#line 591 "modes.m"
          {
#line 591 "modes.m"
            check_hlds__modes__ThisPredProcSpecs_21 = parse_tree__error_util__error_spec_accumulator_to_list_1_f_0(check_hlds__modes__SpecsAcc_76);
          }
#line 7237 "check_hlds.modes.c"
          check_hlds__modes__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 513 "modes.m"
          {
#line 513 "modes.m"
            check_hlds__modes__V_36_36 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_43_43, check_hlds__modes__ThisPredProcSpecs_21, check_hlds__modes__STATE_VARIABLE_Specs_0_29);
          }
#line 513 "modes.m"
          {
#line 513 "modes.m"
            *check_hlds__modes__STATE_VARIABLE_Specs_30 = mercury__list__f_43_43_2_f_0(check_hlds__modes__TypeCtorInfo_43_43, check_hlds__modes__ThisPredDeclSpecs_20, check_hlds__modes__V_36_36);
          }
#line 517 "modes.m"
          {
#line 517 "modes.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33, &check_hlds__modes__Globals_22);
          }
#line 518 "modes.m"
          {
#line 518 "modes.m"
            check_hlds__modes__ContainsError_23 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__modes__Globals_22, check_hlds__modes__ThisPredProcSpecs_21);
          }
#line 522 "modes.m"
#line 522 "modes.m"
          switch (check_hlds__modes__ContainsError_23) {
#line 522 "modes.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 522 "modes.m"
            case (MR_Integer) 0:
#line 523 "modes.m"
              *check_hlds__modes__STATE_VARIABLE_ModuleInfo_26 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33;
#line 522 "modes.m"
              break;
#line 522 "modes.m"
            case (MR_Integer) 1:
#line 521 "modes.m"
              {
#line 521 "modes.m"
                hlds__hlds_module__module_info_make_pred_id_invalid_3_p_0(check_hlds__modes__PredId_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__modes__STATE_VARIABLE_ModuleInfo_26);
              }
#line 522 "modes.m"
              break;
#line 522 "modes.m"
          }
#line 526 "modes.m"
          {
#line 526 "modes.m"
            libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_22, (MR_Integer) 56, &check_hlds__modes__Statistics_24);
          }
#line 528 "modes.m"
          {
#line 528 "modes.m"
            libs__file_util__maybe_report_stats_3_p_0(check_hlds__modes__Statistics_24);
#line 528 "modes.m"
            return;
          }
#line 7293 "check_hlds.modes.c"
        }
#line 498 "modes.m"
    }
#line 493 "modes.m"
  }
#line 493 "modes.m"
}

#line 462 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_proc_body_4_p_0(
#line 462 "modes.m"
  MR_Word check_hlds__modes__OldProcTable_5,
#line 462 "modes.m"
  MR_Integer check_hlds__modes__ProcId_6,
#line 462 "modes.m"
  MR_Word check_hlds__modes__STATE_VARIABLE_ProcTable_0_12,
#line 462 "modes.m"
  MR_Word * check_hlds__modes__STATE_VARIABLE_ProcTable_13)
#line 462 "modes.m"
{
#line 465 "modes.m"
  {
#line 465 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 465 "modes.m"
    MR_Word check_hlds__modes__TypeCtorInfo_16_16 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 465 "modes.m"
    MR_Word check_hlds__modes__OldProcInfo_8;
#line 465 "modes.m"
    MR_Word check_hlds__modes__OldProcBody_9;
#line 465 "modes.m"
    MR_Word check_hlds__modes__ProcInfo0_10;
#line 465 "modes.m"
    MR_Word check_hlds__modes__ProcInfo_11;
#line 466 "modes.m"
    MR_Box check_hlds__modes__conv0_OldProcInfo_8;
#line 468 "modes.m"
    MR_Box check_hlds__modes__conv1_ProcInfo0_10;

#line 466 "modes.m"
    {
#line 466 "modes.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__modes__TypeCtorInfo_16_16, check_hlds__modes__OldProcTable_5, check_hlds__modes__ProcId_6, &check_hlds__modes__conv0_OldProcInfo_8);
    }
#line 466 "modes.m"
    check_hlds__modes__OldProcInfo_8 = ((MR_Word) check_hlds__modes__conv0_OldProcInfo_8);
#line 467 "modes.m"
    {
#line 467 "modes.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__modes__OldProcInfo_8, &check_hlds__modes__OldProcBody_9);
    }
#line 468 "modes.m"
    {
#line 468 "modes.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__modes__TypeCtorInfo_16_16, check_hlds__modes__STATE_VARIABLE_ProcTable_0_12, check_hlds__modes__ProcId_6, &check_hlds__modes__conv1_ProcInfo0_10);
    }
#line 468 "modes.m"
    check_hlds__modes__ProcInfo0_10 = ((MR_Word) check_hlds__modes__conv1_ProcInfo0_10);
#line 469 "modes.m"
    {
#line 469 "modes.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__modes__OldProcBody_9, check_hlds__modes__ProcInfo0_10, &check_hlds__modes__ProcInfo_11);
    }
#line 470 "modes.m"
    {
#line 470 "modes.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__modes__TypeCtorInfo_16_16, check_hlds__modes__ProcId_6, ((MR_Box) (check_hlds__modes__ProcInfo_11)), check_hlds__modes__STATE_VARIABLE_ProcTable_0_12, check_hlds__modes__STATE_VARIABLE_ProcTable_13);
#line 470 "modes.m"
      return;
    }
#line 465 "modes.m"
  }
#line 462 "modes.m"
}

#line 452 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0_1(
#line 452 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 452 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 452 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 452 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3)
#line 452 "modes.m"
{
#line 452 "modes.m"
  {
#line 452 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 452 "modes.m"
    MR_Word check_hlds__modes__conv2_STATE_VARIABLE_ProcTable_13;

#line 452 "modes.m"
    {
#line 452 "modes.m"
      check_hlds__modes__copy_proc_body_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Integer) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2), &check_hlds__modes__conv2_STATE_VARIABLE_ProcTable_13);
    }
#line 452 "modes.m"
    *check_hlds__modes__wrapper_arg_3 = ((MR_Box) (check_hlds__modes__conv2_STATE_VARIABLE_ProcTable_13));
#line 452 "modes.m"
  }
#line 452 "modes.m"
}

#line 434 "modes.m"
static void MR_CALL 
check_hlds__modes__copy_pred_body_4_p_0(
#line 434 "modes.m"
  MR_Word check_hlds__modes__OldPredTable_5,
#line 434 "modes.m"
  MR_Word check_hlds__modes__PredId_6,
#line 434 "modes.m"
  MR_Word check_hlds__modes__PredTable0_7,
#line 434 "modes.m"
  MR_Word * check_hlds__modes__PredTable_8)
#line 434 "modes.m"
{
#line 437 "modes.m"
  {
#line 437 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 437 "modes.m"
    MR_Word check_hlds__modes__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 437 "modes.m"
    MR_Word check_hlds__modes__TypeCtorInfo_20_20 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 437 "modes.m"
    MR_Word check_hlds__modes__PredInfo0_9;
#line 438 "modes.m"
    MR_Box check_hlds__modes__conv0_PredInfo0_9;
#line 443 "modes.m"
    MR_Word check_hlds__modes__Markers_10;

#line 438 "modes.m"
    {
#line 438 "modes.m"
      mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_19_19, check_hlds__modes__TypeCtorInfo_20_20, check_hlds__modes__PredTable0_7, ((MR_Box) (check_hlds__modes__PredId_6)), &check_hlds__modes__conv0_PredInfo0_9);
    }
#line 438 "modes.m"
    check_hlds__modes__PredInfo0_9 = ((MR_Word) check_hlds__modes__conv0_PredInfo0_9);
#line 443 "modes.m"
    {
#line 443 "modes.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modes__PredInfo0_9, &check_hlds__modes__Markers_10);
    }
#line 444 "modes.m"
    {
#line 444 "modes.m"
      check_hlds__modes__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modes__Markers_10, (MR_Integer) 9);
    }
#line 447 "modes.m"
    if (check_hlds__modes__succeeded)
#line 446 "modes.m"
      *check_hlds__modes__PredTable_8 = check_hlds__modes__PredTable0_7;
#line 447 "modes.m"
    else
#line 448 "modes.m"
      {
#line 448 "modes.m"
        MR_Word check_hlds__modes__TypeCtorInfo_21_21;
#line 448 "modes.m"
        MR_Word check_hlds__modes__ProcTable0_11;
#line 448 "modes.m"
        MR_Word check_hlds__modes__OldPredInfo_12;
#line 448 "modes.m"
        MR_Word check_hlds__modes__OldProcTable_13;
#line 448 "modes.m"
        MR_Word check_hlds__modes__OldProcIds_14;
#line 448 "modes.m"
        MR_Word check_hlds__modes__ProcTable_15;
#line 448 "modes.m"
        MR_Word check_hlds__modes__PredInfo_16;
#line 448 "modes.m"
        MR_Word check_hlds__modes__V_18_18;
#line 449 "modes.m"
        MR_Box check_hlds__modes__conv1_OldPredInfo_12;
#line 452 "modes.m"
        MR_Box check_hlds__modes__conv3_ProcTable_15;

#line 448 "modes.m"
        {
#line 448 "modes.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__PredInfo0_9, &check_hlds__modes__ProcTable0_11);
        }
#line 449 "modes.m"
        {
#line 449 "modes.m"
          mercury__map__lookup_3_p_0(check_hlds__modes__TypeCtorInfo_19_19, check_hlds__modes__TypeCtorInfo_20_20, check_hlds__modes__OldPredTable_5, ((MR_Box) (check_hlds__modes__PredId_6)), &check_hlds__modes__conv1_OldPredInfo_12);
        }
#line 449 "modes.m"
        check_hlds__modes__OldPredInfo_12 = ((MR_Word) check_hlds__modes__conv1_OldPredInfo_12);
#line 450 "modes.m"
        {
#line 450 "modes.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modes__OldPredInfo_12, &check_hlds__modes__OldProcTable_13);
        }
#line 7493 "check_hlds.modes.c"
        check_hlds__modes__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 451 "modes.m"
        {
#line 451 "modes.m"
          mercury__map__keys_2_p_0(check_hlds__modes__TypeCtorInfo_21_21, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__modes__OldProcTable_13, &check_hlds__modes__OldProcIds_14);
        }
#line 452 "modes.m"
        {
#line 452 "modes.m"
          check_hlds__modes__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 452 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_18_18, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_5[1]));
#line 452 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_18_18, 1) = ((MR_Box) (check_hlds__modes__copy_pred_body_4_p_0_1));
#line 452 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 452 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_18_18, 3) = ((MR_Box) (check_hlds__modes__OldProcTable_13));
#line 452 "modes.m"
        }
#line 452 "modes.m"
        {
#line 452 "modes.m"
          mercury__list__foldl_4_p_0(check_hlds__modes__TypeCtorInfo_21_21, (MR_Word) &check_hlds__modes_scalar_common_2[1], check_hlds__modes__V_18_18, check_hlds__modes__OldProcIds_14, ((MR_Box) (check_hlds__modes__ProcTable0_11)), &check_hlds__modes__conv3_ProcTable_15);
        }
#line 452 "modes.m"
        check_hlds__modes__ProcTable_15 = ((MR_Word) check_hlds__modes__conv3_ProcTable_15);
#line 454 "modes.m"
        {
#line 454 "modes.m"
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__modes__ProcTable_15, check_hlds__modes__PredInfo0_9, &check_hlds__modes__PredInfo_16);
        }
#line 455 "modes.m"
        {
#line 455 "modes.m"
          mercury__map__set_4_p_0(check_hlds__modes__TypeCtorInfo_19_19, check_hlds__modes__TypeCtorInfo_20_20, ((MR_Box) (check_hlds__modes__PredId_6)), ((MR_Box) (check_hlds__modes__PredInfo_16)), check_hlds__modes__PredTable0_7, check_hlds__modes__PredTable_8);
#line 455 "modes.m"
          return;
        }
#line 448 "modes.m"
      }
#line 437 "modes.m"
  }
#line 434 "modes.m"
}

#line 426 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_2(
#line 426 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 426 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 426 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 426 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3)
#line 426 "modes.m"
{
#line 426 "modes.m"
  {
#line 426 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 426 "modes.m"
    MR_Word check_hlds__modes__conv6_PredTable_8;

#line 426 "modes.m"
    {
#line 426 "modes.m"
      check_hlds__modes__copy_pred_body_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2), &check_hlds__modes__conv6_PredTable_8);
    }
#line 426 "modes.m"
    *check_hlds__modes__wrapper_arg_3 = ((MR_Box) (check_hlds__modes__conv6_PredTable_8));
#line 426 "modes.m"
  }
#line 426 "modes.m"
}

#line 323 "modes.m"
static void MR_CALL 
check_hlds__modes__modecheck_to_fixpoint_8_p_0_1(
#line 323 "modes.m"
  MR_Box check_hlds__modes__closure_arg,
#line 323 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_1,
#line 323 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_2,
#line 323 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_3,
#line 323 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_4,
#line 323 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_5,
#line 323 "modes.m"
  MR_Box check_hlds__modes__wrapper_arg_6,
#line 323 "modes.m"
  MR_Box * check_hlds__modes__wrapper_arg_7)
#line 323 "modes.m"
{
#line 323 "modes.m"
  {
#line 323 "modes.m"
    MR_Box check_hlds__modes__closure = check_hlds__modes__closure_arg;
#line 323 "modes.m"
    MR_Word check_hlds__modes__conv2_STATE_VARIABLE_ModuleInfo_26;
#line 323 "modes.m"
    MR_Word check_hlds__modes__conv1_STATE_VARIABLE_Changed_28;
#line 323 "modes.m"
    MR_Word check_hlds__modes__conv0_STATE_VARIABLE_Specs_30;

#line 323 "modes.m"
    {
#line 323 "modes.m"
      check_hlds__modes__maybe_modecheck_pred_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modes__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modes__wrapper_arg_1), ((MR_Word) check_hlds__modes__wrapper_arg_2), &check_hlds__modes__conv2_STATE_VARIABLE_ModuleInfo_26, ((MR_Word) check_hlds__modes__wrapper_arg_4), &check_hlds__modes__conv1_STATE_VARIABLE_Changed_28, ((MR_Word) check_hlds__modes__wrapper_arg_6), &check_hlds__modes__conv0_STATE_VARIABLE_Specs_30);
    }
#line 323 "modes.m"
    *check_hlds__modes__wrapper_arg_3 = ((MR_Box) (check_hlds__modes__conv2_STATE_VARIABLE_ModuleInfo_26));
#line 323 "modes.m"
    *check_hlds__modes__wrapper_arg_5 = ((MR_Box) (check_hlds__modes__conv1_STATE_VARIABLE_Changed_28));
#line 323 "modes.m"
    *check_hlds__modes__wrapper_arg_7 = ((MR_Box) (check_hlds__modes__conv0_STATE_VARIABLE_Specs_30));
#line 323 "modes.m"
  }
#line 323 "modes.m"
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
#line 323 "modes.m"
        MR_Box check_hlds__modes__conv5_STATE_VARIABLE_ModuleInfo_35_35;
#line 323 "modes.m"
        MR_Box check_hlds__modes__conv4_Changed1_17;
#line 323 "modes.m"
        MR_Box check_hlds__modes__conv3_STATE_VARIABLE_Specs_38_38;

#line 320 "modes.m"
        {
#line 320 "modes.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31, &check_hlds__modes__OldPredTable0_16);
        }
#line 323 "modes.m"
        {
#line 323 "modes.m"
          check_hlds__modes__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 323 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_4[0]));
#line 323 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 1) = ((MR_Box) (check_hlds__modes__modecheck_to_fixpoint_8_p_0_1));
#line 323 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 323 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 3) = ((MR_Box) (check_hlds__modes__WhatToCheck_11));
#line 323 "modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__modes__V_34_34, 4) = ((MR_Box) (check_hlds__modes__MayChangeCalledProc_12));
#line 323 "modes.m"
        }
#line 323 "modes.m"
        {
#line 323 "modes.m"
          mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &check_hlds__modes_scalar_common_1[0], check_hlds__modes__V_34_34, check_hlds__modes__PredIds_9, ((MR_Box) (check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31)), &check_hlds__modes__conv5_STATE_VARIABLE_ModuleInfo_35_35, ((MR_Box) ((MR_Integer) 0)), &check_hlds__modes__conv4_Changed1_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__modes__conv3_STATE_VARIABLE_Specs_38_38);
        }
#line 323 "modes.m"
        check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35 = ((MR_Word) check_hlds__modes__conv5_STATE_VARIABLE_ModuleInfo_35_35);
#line 323 "modes.m"
        check_hlds__modes__Changed1_17 = ((MR_Word) check_hlds__modes__conv4_Changed1_17);
#line 323 "modes.m"
        check_hlds__modes__STATE_VARIABLE_Specs_38_38 = ((MR_Word) check_hlds__modes__conv3_STATE_VARIABLE_Specs_38_38);
#line 328 "modes.m"
        {
#line 328 "modes.m"
          check_hlds__modes__modecheck_queued_procs_7_p_0(check_hlds__modes__WhatToCheck_11, check_hlds__modes__OldPredTable0_16, &check_hlds__modes__OldPredTable_18, check_hlds__modes__STATE_VARIABLE_ModuleInfo_35_35, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__Changed2_19, &check_hlds__modes__QueuedSpecs_20);
        }
#line 330 "modes.m"
        {
#line 330 "modes.m"
          check_hlds__modes__STATE_VARIABLE_Specs_40_40 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__modes__QueuedSpecs_20, check_hlds__modes__STATE_VARIABLE_Specs_38_38);
        }
#line 331 "modes.m"
        {
#line 331 "modes.m"
          mercury__bool__or_3_p_0(check_hlds__modes__Changed1_17, check_hlds__modes__Changed2_19, &check_hlds__modes__Changed_21);
        }
#line 333 "modes.m"
        {
#line 333 "modes.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__Globals_22);
        }
#line 334 "modes.m"
        {
#line 334 "modes.m"
          check_hlds__modes__ErrorsSoFar_23 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__modes__Globals_22, check_hlds__modes__STATE_VARIABLE_Specs_40_40);
        }
#line 339 "modes.m"
#line 339 "modes.m"
        switch (check_hlds__modes__Changed_21) {
#line 339 "modes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 339 "modes.m"
          case (MR_Integer) 0:
#line 336 "modes.m"
            {
#line 338 "modes.m"
              *check_hlds__modes__SafeToContinue_14 = (MR_Integer) 0;
#line 336 "modes.m"
              *check_hlds__modes__STATE_VARIABLE_ModuleInfo_32 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39;
#line 336 "modes.m"
              *check_hlds__modes__STATE_VARIABLE_Specs_33 = check_hlds__modes__STATE_VARIABLE_Specs_40_40;
#line 336 "modes.m"
            }
#line 339 "modes.m"
            break;
#line 339 "modes.m"
          case (MR_Integer) 1:
#line 345 "modes.m"
#line 345 "modes.m"
            switch (check_hlds__modes__ErrorsSoFar_23) {
#line 345 "modes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 345 "modes.m"
              case (MR_Integer) 0:
#line 352 "modes.m"
                {
#line 347 "modes.m"
                  check_hlds__modes__succeeded = (check_hlds__modes__MaxIterations_10 <= (MR_Integer) 1);
#line 352 "modes.m"
                  if (check_hlds__modes__succeeded)
#line 349 "modes.m"
                    {
#line 349 "modes.m"
                      MR_Word check_hlds__modes__MaxIterSpec_24;
#line 349 "modes.m"
                      MR_Word check_hlds__modes__Globals_73;
#line 349 "modes.m"
                      MR_Integer check_hlds__modes__MaxIterations_74;
#line 349 "modes.m"
                      MR_Word check_hlds__modes__Pieces_75;
#line 349 "modes.m"
                      MR_Word check_hlds__modes__Msg_76;
#line 349 "modes.m"
                      MR_Word check_hlds__modes__V_80_80;
#line 349 "modes.m"
                      MR_Word check_hlds__modes__V_82_82;
#line 349 "modes.m"
                      MR_Word check_hlds__modes__V_85_85;
#line 349 "modes.m"
                      MR_Word check_hlds__modes__V_88_88;
#line 349 "modes.m"
                      MR_Word check_hlds__modes__V_91_91;
#line 349 "modes.m"
                      MR_Word check_hlds__modes__V_94_94;
#line 349 "modes.m"
                      MR_Word check_hlds__modes__V_97_97;
#line 349 "modes.m"
                      MR_Word check_hlds__modes__V_98_98;
#line 349 "modes.m"
                      MR_Word check_hlds__modes__V_108_108;
#line 349 "modes.m"
                      MR_Word check_hlds__modes__V_109_109;
#line 349 "modes.m"
                      MR_Word check_hlds__modes__V_114_114;

#line 403 "modes.m"
                      {
#line 403 "modes.m"
                        hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__Globals_73);
                      }
#line 404 "modes.m"
                      {
#line 404 "modes.m"
                        libs__globals__lookup_int_option_3_p_0(check_hlds__modes__Globals_73, (MR_Integer) 175, &check_hlds__modes__MaxIterations_74);
                      }
#line 410 "modes.m"
                      {
#line 410 "modes.m"
                        check_hlds__modes__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "modes.m"
                        MR_hl_field(MR_mktag(3), check_hlds__modes__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 410 "modes.m"
                        MR_hl_field(MR_mktag(3), check_hlds__modes__V_98_98, 1) = ((MR_Box) (check_hlds__modes__MaxIterations_74));
#line 410 "modes.m"
                      }
#line 410 "modes.m"
                      {
#line 410 "modes.m"
                        check_hlds__modes__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_97_97, 0) = ((MR_Box) (check_hlds__modes__V_98_98));
#line 410 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_1[6])));
#line 410 "modes.m"
                      }
#line 410 "modes.m"
                      {
#line 410 "modes.m"
                        check_hlds__modes__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_94_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[44])));
#line 410 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_94_94, 1) = ((MR_Box) (check_hlds__modes__V_97_97));
#line 410 "modes.m"
                      }
#line 409 "modes.m"
                      {
#line 409 "modes.m"
                        check_hlds__modes__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_91_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[43])));
#line 409 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_91_91, 1) = ((MR_Box) (check_hlds__modes__V_94_94));
#line 409 "modes.m"
                      }
#line 408 "modes.m"
                      {
#line 408 "modes.m"
                        check_hlds__modes__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_88_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[42])));
#line 408 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_88_88, 1) = ((MR_Box) (check_hlds__modes__V_91_91));
#line 408 "modes.m"
                      }
#line 408 "modes.m"
                      {
#line 408 "modes.m"
                        check_hlds__modes__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_85_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[41])));
#line 408 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_85_85, 1) = ((MR_Box) (check_hlds__modes__V_88_88));
#line 408 "modes.m"
                      }
#line 407 "modes.m"
                      {
#line 407 "modes.m"
                        check_hlds__modes__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_82_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[40])));
#line 407 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_82_82, 1) = ((MR_Box) (check_hlds__modes__V_85_85));
#line 407 "modes.m"
                      }
#line 406 "modes.m"
                      {
#line 406 "modes.m"
                        check_hlds__modes__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_80_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 406 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_80_80, 1) = ((MR_Box) (check_hlds__modes__V_82_82));
#line 406 "modes.m"
                      }
#line 406 "modes.m"
                      {
#line 406 "modes.m"
                        check_hlds__modes__Pieces_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__Pieces_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modes_scalar_common_1[39])));
#line 406 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__Pieces_75, 1) = ((MR_Box) (check_hlds__modes__V_80_80));
#line 406 "modes.m"
                      }
#line 412 "modes.m"
                      {
#line 412 "modes.m"
                        check_hlds__modes__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 412 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__V_109_109, 0) = ((MR_Box) (check_hlds__modes__Pieces_75));
#line 412 "modes.m"
                      }
#line 412 "modes.m"
                      {
#line 412 "modes.m"
                        check_hlds__modes__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_108_108, 0) = ((MR_Box) (check_hlds__modes__V_109_109));
#line 412 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 412 "modes.m"
                      }
#line 412 "modes.m"
                      {
#line 412 "modes.m"
                        check_hlds__modes__Msg_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 412 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__Msg_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 412 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__Msg_76, 1) = ((MR_Box) ((MR_Integer) 1));
#line 412 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__Msg_76, 2) = ((MR_Box) ((MR_Integer) 0));
#line 412 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__Msg_76, 3) = ((MR_Box) (check_hlds__modes__V_108_108));
#line 412 "modes.m"
                      }
#line 414 "modes.m"
                      {
#line 414 "modes.m"
                        check_hlds__modes__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_114_114, 0) = ((MR_Box) (check_hlds__modes__Msg_76));
#line 414 "modes.m"
                        MR_hl_field(MR_mktag(1), check_hlds__modes__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "modes.m"
                      }
#line 413 "modes.m"
                      {
#line 413 "modes.m"
                        check_hlds__modes__MaxIterSpec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 413 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__MaxIterSpec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 413 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__MaxIterSpec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modes_scalar_common_3[1])));
#line 413 "modes.m"
                        MR_hl_field(MR_mktag(0), check_hlds__modes__MaxIterSpec_24, 2) = ((MR_Box) (check_hlds__modes__V_114_114));
#line 413 "modes.m"
                      }
#line 350 "modes.m"
                      {
#line 350 "modes.m"
                        MR_Word base;
#line 350 "modes.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "modes.m"
                        *check_hlds__modes__STATE_VARIABLE_Specs_33 = base;
#line 350 "modes.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modes__MaxIterSpec_24));
#line 350 "modes.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modes__STATE_VARIABLE_Specs_40_40));
#line 350 "modes.m"
                      }
#line 351 "modes.m"
                      *check_hlds__modes__SafeToContinue_14 = (MR_Integer) 1;
#line 349 "modes.m"
                      *check_hlds__modes__STATE_VARIABLE_ModuleInfo_32 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39;
#line 349 "modes.m"
                    }
#line 352 "modes.m"
                  else
#line 354 "modes.m"
                    {
#line 354 "modes.m"
                      MR_Word check_hlds__modes__DebugModes_25;
#line 354 "modes.m"
                      MR_Integer check_hlds__modes__MaxIterations1_30;
#line 354 "modes.m"
                      MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_55_55;

#line 354 "modes.m"
                      {
#line 354 "modes.m"
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_22, (MR_Integer) 60, &check_hlds__modes__DebugModes_25);
                      }
#line 367 "modes.m"
#line 367 "modes.m"
                      switch (check_hlds__modes__DebugModes_25) {
#line 367 "modes.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 367 "modes.m"
                        case (MR_Integer) 0:
#line 368 "modes.m"
                          {
#line 368 "modes.m"
                          }
#line 367 "modes.m"
                          break;
#line 367 "modes.m"
                        case (MR_Integer) 1:
#line 356 "modes.m"
                          {
#line 356 "modes.m"
                            MR_Word check_hlds__modes__InferenceSpecs_26;
#line 363 "modes.m"
                            MR_Integer check_hlds__modes___NumWarnings_28;
#line 363 "modes.m"
                            MR_Integer check_hlds__modes___NumErrors_29;

#line 358 "modes.m"
                            {
#line 358 "modes.m"
                              check_hlds__modes__InferenceSpecs_26 = check_hlds__mode_errors__report_mode_inference_messages_3_f_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, (MR_Integer) 1, check_hlds__modes__PredIds_9);
                            }
#line 361 "modes.m"
                            {
#line 361 "modes.m"
                              mercury__io__write_string_3_p_0((MR_String) "Inferences by current iteration:\n");
                            }
#line 363 "modes.m"
                            {
#line 363 "modes.m"
                              parse_tree__error_util__write_error_specs_8_p_0(check_hlds__modes__InferenceSpecs_26, check_hlds__modes__Globals_22, (MR_Integer) 0, &check_hlds__modes___NumWarnings_28, (MR_Integer) 0, &check_hlds__modes___NumErrors_29);
                            }
#line 365 "modes.m"
                            {
#line 365 "modes.m"
                              mercury__io__write_string_3_p_0((MR_String) "End of inferences.\n");
                            }
#line 356 "modes.m"
                          }
#line 367 "modes.m"
                          break;
#line 367 "modes.m"
                      }
#line 386 "modes.m"
#line 386 "modes.m"
                      switch (check_hlds__modes__WhatToCheck_11) {
#line 386 "modes.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 386 "modes.m"
                        case (MR_Integer) 0:
#line 380 "modes.m"
                          {
#line 380 "modes.m"
                            MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_54_54;

#line 384 "modes.m"
                            {
#line 384 "modes.m"
                              check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_p_0(check_hlds__modes__PredIds_9, check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_54_54);
                            }
#line 385 "modes.m"
                            {
#line 385 "modes.m"
                              check_hlds__clause_to_proc__introduce_exists_casts_3_p_0(check_hlds__modes__PredIds_9, check_hlds__modes__STATE_VARIABLE_ModuleInfo_54_54, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_55_55);
                            }
#line 380 "modes.m"
                          }
#line 386 "modes.m"
                          break;
#line 386 "modes.m"
                        case (MR_Integer) 1:
#line 424 "modes.m"
                          {
#line 424 "modes.m"
                            MR_Word check_hlds__modes__PredTable0_121;
#line 424 "modes.m"
                            MR_Word check_hlds__modes__PredTable_122;
#line 424 "modes.m"
                            MR_Word check_hlds__modes__V_123_123;
#line 426 "modes.m"
                            MR_Box check_hlds__modes__conv7_PredTable_122;

#line 425 "modes.m"
                            {
#line 425 "modes.m"
                              hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__PredTable0_121);
                            }
#line 426 "modes.m"
                            {
#line 426 "modes.m"
                              check_hlds__modes__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 426 "modes.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modes__V_123_123, 0) = ((MR_Box) (&check_hlds__modes_scalar_common_5[0]));
#line 426 "modes.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modes__V_123_123, 1) = ((MR_Box) (check_hlds__modes__modecheck_to_fixpoint_8_p_0_2));
#line 426 "modes.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modes__V_123_123, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 426 "modes.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modes__V_123_123, 3) = ((MR_Box) (check_hlds__modes__OldPredTable_18));
#line 426 "modes.m"
                            }
#line 426 "modes.m"
                            {
#line 426 "modes.m"
                              mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__modes_scalar_common_2[0], check_hlds__modes__V_123_123, check_hlds__modes__PredIds_9, ((MR_Box) (check_hlds__modes__PredTable0_121)), &check_hlds__modes__conv7_PredTable_122);
                            }
#line 426 "modes.m"
                            check_hlds__modes__PredTable_122 = ((MR_Word) check_hlds__modes__conv7_PredTable_122);
#line 427 "modes.m"
                            {
#line 427 "modes.m"
                              hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__modes__PredTable_122, check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__modes__STATE_VARIABLE_ModuleInfo_55_55);
                            }
#line 424 "modes.m"
                          }
#line 386 "modes.m"
                          break;
#line 386 "modes.m"
                      }
#line 393 "modes.m"
                      check_hlds__modes__MaxIterations1_30 = (check_hlds__modes__MaxIterations_10 - (MR_Integer) 1);
#line 394 "modes.m"
                      /* direct tailcall eliminated */
#line 394 "modes.m"
                      {
#line 394 "modes.m"
                        MR_Integer check_hlds__modes__MaxIterations__tmp_copy_10 = check_hlds__modes__MaxIterations1_30;
#line 394 "modes.m"
                        MR_Word check_hlds__modes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_31 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_55_55;

#line 394 "modes.m"
                        check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_31 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_31;
#line 394 "modes.m"
                        check_hlds__modes__MaxIterations_10 = check_hlds__modes__MaxIterations__tmp_copy_10;
#line 394 "modes.m"
                      }
#line 394 "modes.m"
                      continue;
#line 354 "modes.m"
                    }
#line 352 "modes.m"
                }
#line 345 "modes.m"
                break;
#line 345 "modes.m"
              case (MR_Integer) 1:
#line 342 "modes.m"
                {
#line 344 "modes.m"
                  *check_hlds__modes__SafeToContinue_14 = (MR_Integer) 1;
#line 342 "modes.m"
                  *check_hlds__modes__STATE_VARIABLE_ModuleInfo_32 = check_hlds__modes__STATE_VARIABLE_ModuleInfo_39_39;
#line 342 "modes.m"
                  *check_hlds__modes__STATE_VARIABLE_Specs_33 = check_hlds__modes__STATE_VARIABLE_Specs_40_40;
#line 342 "modes.m"
                }
#line 345 "modes.m"
                break;
#line 345 "modes.m"
            }
#line 339 "modes.m"
            break;
#line 339 "modes.m"
        }
#line 317 "modes.m"
      }
#line 317 "modes.m"
      break;
#line 317 "modes.m"
    }
#line 311 "modes.m"
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
#line 1217 "modes.m"
  {
#line 1217 "modes.m"
    MR_bool check_hlds__modes__succeeded;
#line 1223 "modes.m"
    MR_Word check_hlds__modes___NewFinalInsts_12;

#line 1223 "modes.m"
    {
#line 1223 "modes.m"
      check_hlds__modes__modecheck_final_insts_8_p_0(check_hlds__modes__HeadVars_7, (MR_Integer) 0, check_hlds__modes__ArgFinalInsts_8, &check_hlds__modes___NewFinalInsts_12, check_hlds__modes__STATE_VARIABLE_Goal_0_13, check_hlds__modes__STATE_VARIABLE_Goal_14, check_hlds__modes__STATE_VARIABLE_ModeInfo_0_15, check_hlds__modes__STATE_VARIABLE_ModeInfo_16);
    }
#line 1217 "modes.m"
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
#line 618 "modes.m"
  {
#line 618 "modes.m"
    MR_bool check_hlds__modes__succeeded;

#line 619 "modes.m"
    {
#line 619 "modes.m"
      check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_9, check_hlds__modes__PredId_10, check_hlds__modes__WhatToCheck_11, check_hlds__modes__MayChangeCalledProc_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_16, check_hlds__modes__STATE_VARIABLE_ModuleInfo_17, (MR_Integer) 0, check_hlds__modes__Changed_15, check_hlds__modes__Specs_14);
#line 619 "modes.m"
      return;
    }
#line 618 "modes.m"
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
#line 613 "modes.m"
  {
#line 613 "modes.m"
    MR_bool check_hlds__modes__succeeded;

#line 619 "modes.m"
    {
#line 619 "modes.m"
      check_hlds__modes__maybe_modecheck_proc_9_p_0(check_hlds__modes__ProcId_7, check_hlds__modes__PredId_8, (MR_Integer) 0, (MR_Integer) 0, check_hlds__modes__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__modes__STATE_VARIABLE_ModuleInfo_13, (MR_Integer) 0, check_hlds__modes__Changed_11, check_hlds__modes__Specs_10);
#line 619 "modes.m"
      return;
    }
#line 613 "modes.m"
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
      libs__globals__lookup_int_option_3_p_0(check_hlds__modes__Globals_13, (MR_Integer) 175, &check_hlds__modes__MaxIterations_14);
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
                libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_13, (MR_Integer) 278, &check_hlds__modes__DelayPartialInstantiations_17);
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
#line 296 "modes.m"
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
#line 296 "modes.m"
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
#line 1401 "modes.m"
          {
#line 1401 "modes.m"
            hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__modes__STATE_VARIABLE_ModuleInfo_36_36, &check_hlds__modes__PredIds_65);
          }
#line 1402 "modes.m"
          {
#line 1402 "modes.m"
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
      libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_7, (MR_Integer) 45, &check_hlds__modes__Verbose_9);
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
      libs__globals__lookup_bool_option_3_p_0(check_hlds__modes__Globals_7, (MR_Integer) 55, &check_hlds__modes__Statistics_10);
    }
#line 190 "modes.m"
    {
#line 190 "modes.m"
      libs__file_util__maybe_report_stats_3_p_0(check_hlds__modes__Statistics_10);
#line 190 "modes.m"
      return;
    }
#line 180 "modes.m"
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
