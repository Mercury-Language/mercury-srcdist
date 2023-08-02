/*
** Automatically generated from `cse_detection.m'
** by the Mercury compiler,
** version rotd-2023-08-02
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


// :- module check_hlds.cse_detection.
// :- implementation.

/*
INIT mercury__check_hlds__cse_detection__init
ENDINIT
*/

#include "check_hlds.cse_detection.mih"


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
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modes.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.switch_detection.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1term_context__type_ctor_info_term_context_0;

static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_info_0_0[5];

static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_info_0_0[5];

static const MR_DuArgLocn check_hlds__cse_detection__check_hlds__cse_detection__field_locns_cse_info_0_0[5];

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_info_0_0[1];

static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_info_0[1];

static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_info_0[1];

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_state_0_1[4];

static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_state_0_1[4];

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1;

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_2;

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_0[2];

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_1[1];

static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_state_0[2];

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_state_0[3];

static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_state_0[3];

static const MR_EnumFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__enum_functor_desc_may_pull_cons_id_0_0;

static const MR_EnumFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__enum_functor_desc_may_pull_cons_id_0_1;

static const MR_EnumFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__enum_ordinal_ordered_may_pull_cons_id_0[2];

static const MR_EnumFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__enum_name_ordered_may_pull_cons_id_0[2];

static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_may_pull_cons_id_0[2];

static void MR_CALL 
check_hlds__cse_detection____Compare____may_pull_cons_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____may_pull_cons_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__cse_detection__find_merged_tvars_6_p_0(
  MR_Word RttiVarMaps_7,
  MR_Word LaterOldNewMap_8,
  MR_Word NewTvarMap_9,
  MR_Word Tvar_10,
  MR_Word STATE_VARIABLE_Renaming_0_17,
  MR_Word * STATE_VARIABLE_Renaming_18);

static void MR_CALL 
check_hlds__cse_detection__find_type_info_locn_tvar_map_5_p_0(
  MR_Word RttiVarMaps_6,
  MR_Word FirstOldNewMap_7,
  MR_Word Tvar_8,
  MR_Word STATE_VARIABLE_NewTvarMap_0_14,
  MR_Word * STATE_VARIABLE_NewTvarMap_15);

static void MR_CALL 
check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(
  MR_Word Var_8,
  MR_Word Goal0_9,
  MR_Word * Goals_10,
  MR_Word STATE_VARIABLE_CseState_0_23,
  MR_Word * STATE_VARIABLE_CseState_24,
  MR_Word STATE_VARIABLE_CseInfo_0_25,
  MR_Word * STATE_VARIABLE_CseInfo_26);

static void MR_CALL 
check_hlds__cse_detection__pair_subterms_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__cse_detection__create_new_arg_vars_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Context_2,
  MR_Word UnifyContext_3,
  MR_Word STATE_VARIABLE_CseInfo_0_4,
  MR_Word * STATE_VARIABLE_CseInfo_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_preds_4_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_procs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_proc_pass_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word * Redo_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_32,
  MR_Word * STATE_VARIABLE_ProcInfo_33);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word IfVars_2,
  MR_Word Cond0_3,
  MR_Word Then0_4,
  MR_Word Else0_5,
  MR_Word GoalInfo_6,
  MR_Word InstMap0_7,
  MR_Word STATE_VARIABLE_CseInfo_0_8,
  MR_Word * STATE_VARIABLE_CseInfo_9,
  MR_Word * GoalExpr_10);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SwitchVar_2,
  MR_Word CanFail_3,
  MR_Word Cases0_4,
  MR_Word HeadVar__5_5,
  MR_Word InstMap0_6,
  MR_Word STATE_VARIABLE_CseInfo_0_7,
  MR_Word * STATE_VARIABLE_CseInfo_8,
  MR_Word * GoalExpr_9);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_disj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Goals0_2,
  MR_Word HeadVar__3_3,
  MR_Word InstMap0_4,
  MR_Word STATE_VARIABLE_CseInfo_0_5,
  MR_Word * STATE_VARIABLE_CseInfo_6,
  MR_Word * GoalExpr_7);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_arms_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_CseInfo_0_3,
  MR_Word * STATE_VARIABLE_CseInfo_4,
  MR_Word InstMap0_5);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_independent_goals_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_CseInfo_0_3,
  MR_Word * STATE_VARIABLE_CseInfo_4,
  MR_Word InstMap0_5);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_conj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_CseInfo_0_3,
  MR_Word * STATE_VARIABLE_CseInfo_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_update_instmap_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_CseInfo_0_118,
  MR_Word * STATE_VARIABLE_CseInfo_119,
  MR_Word InstMap0_10,
  MR_Word * InstMap_11);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word STATE_VARIABLE_CseInfo_0_11,
  MR_Word * STATE_VARIABLE_CseInfo_12,
  MR_Word InstMap0_9);

static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CseState_0_3,
  MR_Word * STATE_VARIABLE_CseState_4,
  MR_Word STATE_VARIABLE_CseInfo_0_5,
  MR_Word * STATE_VARIABLE_CseInfo_6,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
check_hlds__cse_detection__compute_may_pull_cons_id_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__cse_detection__compute_may_pull_cons_id_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(
  MR_Word UnifyGoal_6,
  MR_Word FirstOldNew_7,
  MR_Word LaterOldNew_8,
  MR_Word STATE_VARIABLE_CseInfo_0_25,
  MR_Word * STATE_VARIABLE_CseInfo_26);

static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CseState_0_3,
  MR_Word * STATE_VARIABLE_CseState_4,
  MR_Word STATE_VARIABLE_CseInfo_0_5,
  MR_Word * STATE_VARIABLE_CseInfo_6,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____may_pull_cons_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__cse_detection____Compare____may_pull_cons_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_1[7][2];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_2[8][3];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_3[1][10];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_4[1][8];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_5[1][9];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_6[1][5];




static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_2[1]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[4]))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_2[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[1])),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[1]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[2]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[2])),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__cse_detection__common_deconstruct_2_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__cse_detection__detect_cse_in_ite_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__cse_detection__detect_cse_in_ite_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_3[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__cse_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0)),
    ((MR_Box) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0)),
    ((MR_Box) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0)),
    ((MR_Box) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0))
  },
};

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_4[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_5[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_6[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0),
    (MR_PseudoTypeInfo) (&check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1term_context__type_ctor_info_term_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) }
};

static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&check_hlds__cse_detection__list__ti_list_1term_context__type_ctor_info_term_context_0)
};

static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_info_0_0[5] = {
  (MR_String) "csei_module_info",
  (MR_String) "csei_var_table",
  (MR_String) "csei_rtti_varmaps",
  (MR_String) "csei_redo",
  (MR_String) "csei_nopull_contexts"
};

static const MR_DuArgLocn check_hlds__cse_detection__check_hlds__cse_detection__field_locns_cse_info_0_0[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0 = {
  (MR_String) "cse_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_info_0_0,
  check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_info_0_0,
  check_hlds__cse_detection__check_hlds__cse_detection__field_locns_cse_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_info_0_0[1] = { &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0 };

static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_info_0[1] = { &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0 };

static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__cse_detection____Unify____cse_info_0_0_10001)),
  ((MR_Box) (check_hlds__cse_detection____Compare____cse_info_0_0_10001)),
  (MR_String) "check_hlds.cse_detection",
  (MR_String) "cse_info",
  { check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_info_0 },
  { check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_info_0,

};

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_0 = {
  (MR_String) "before_candidate",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__cse_detection__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_state_0_1[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__cse_detection__list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_state_0_1[4] = {
  (MR_String) "hc_goal",
  (MR_String) "hc_cons_id",
  (MR_String) "hc_first_old_new",
  (MR_String) "hc_later_old_new"
};

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1 = {
  (MR_String) "have_candidate",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_state_0_1,
  check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_state_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_2 = {
  (MR_String) "multiple_candidates",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_0[2] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_0,
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_2
};

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_1[1] = { &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1 };

static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_state_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_state_0[3] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_0,
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1,
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_2
};

static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_state_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__cse_detection____Unify____cse_state_0_0_10001)),
  ((MR_Box) (check_hlds__cse_detection____Compare____cse_state_0_0_10001)),
  (MR_String) "check_hlds.cse_detection",
  (MR_String) "cse_state",
  { check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_state_0 },
  { check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_state_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_state_0,

};

static const MR_EnumFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__enum_functor_desc_may_pull_cons_id_0_0 = {
  (MR_String) "may_pull_cons_id",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__enum_functor_desc_may_pull_cons_id_0_1 = {
  (MR_String) "may_not_pull_cons_id",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__enum_ordinal_ordered_may_pull_cons_id_0[2] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__enum_functor_desc_may_pull_cons_id_0_0,
  &check_hlds__cse_detection__check_hlds__cse_detection__enum_functor_desc_may_pull_cons_id_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__enum_name_ordered_may_pull_cons_id_0[2] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__enum_functor_desc_may_pull_cons_id_0_1,
  &check_hlds__cse_detection__check_hlds__cse_detection__enum_functor_desc_may_pull_cons_id_0_0
};

static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_may_pull_cons_id_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_may_pull_cons_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__cse_detection____Unify____may_pull_cons_id_0_0_10001)),
  ((MR_Box) (check_hlds__cse_detection____Compare____may_pull_cons_id_0_0_10001)),
  (MR_String) "check_hlds.cse_detection",
  (MR_String) "may_pull_cons_id",
  { check_hlds__cse_detection__check_hlds__cse_detection__enum_name_ordered_may_pull_cons_id_0 },
  { check_hlds__cse_detection__check_hlds__cse_detection__enum_ordinal_ordered_may_pull_cons_id_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_may_pull_cons_id_0,

};

static void MR_CALL 
check_hlds__cse_detection____Compare____may_pull_cons_id_0_0(
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
check_hlds__cse_detection____Unify____may_pull_cons_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_31 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_32 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_31 == CastY_32);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word ArgY4_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 3))));
                MR_Word SubResult1_14;

                hlds__hlds_goal____Compare____hlds_goal_0_0(&SubResult1_14, Var_40, ArgY1_13);
                succeeded = (SubResult1_14 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_14;
                else
                {
                  MR_Word SubResult2_17;

                  parse_tree__prog_data____Compare____cons_id_0_0(&SubResult2_17, Var_39, ArgY2_16);
                  succeeded = (SubResult2_17 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_17;
                  else
                  {
                    MR_Word SubResult3_20;

                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[4]), &SubResult3_20, ((MR_Box) (Var_38)), ((MR_Box) (ArgY3_19)));
                    succeeded = (SubResult3_20 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_20;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Var_37)), ((MR_Box) (ArgY4_22)));
                  }
                }
              }
              break;
          }
        }
        break;
    }
}

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_4 == CastX_3);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_14 == CastX_13);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_19_19;
          MR_Word TypeInfo_20_20;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_8;
          MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_10;
          MR_Word ArgX4_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 3))));
          MR_Word ArgY4_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
            succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_5, ArgY1_6);
            if (succeeded)
            {
              succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX2_7, ArgY2_8);
              if (succeeded)
              {
                TypeInfo_19_19 = (MR_Word) (&check_hlds__cse_detection_scalar_common_1[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
                if (succeeded)
                {
                  TypeInfo_20_20 = (MR_Word) (&check_hlds__cse_detection_scalar_common_1[5]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX4_11)), ((MR_Box) (ArgY4_12)));
                }
              }
            }
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__var_table____Compare____var_table_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_25 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_26 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_25 < Var_26);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_25 > Var_26);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&check_hlds__cse_detection_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__cse_detection__find_merged_tvars_6_p_0(
  MR_Word RttiVarMaps_7,
  MR_Word LaterOldNewMap_8,
  MR_Word NewTvarMap_9,
  MR_Word Tvar_10,
  MR_Word STATE_VARIABLE_Renaming_0_17,
  MR_Word * STATE_VARIABLE_Renaming_18)
{
  MR_bool succeeded;
  MR_Word TypeInfoLocn0_12;
  MR_Word Old_13;
  MR_Word New_14;
  MR_Box conv0_New_14;

  hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(RttiVarMaps_7, Tvar_10, &TypeInfoLocn0_12);
  hlds__hlds_rtti__type_info_locn_var_2_p_0(TypeInfoLocn0_12, &Old_13);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), LaterOldNewMap_8, ((MR_Box) (Old_13)), &conv0_New_14);
  if (succeeded)
  {
    New_14 = ((MR_Word) (conv0_New_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word TypeInfoLocn_15;
    MR_Word NewTvar_16;
    MR_Box conv1_NewTvar_16;

    hlds__hlds_rtti__type_info_locn_set_var_3_p_0(New_14, TypeInfoLocn0_12, &TypeInfoLocn_15);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]), NewTvarMap_9, ((MR_Box) (TypeInfoLocn_15)), &conv1_NewTvar_16);
    NewTvar_16 = ((MR_Word) (conv1_NewTvar_16));
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]), ((MR_Box) (NewTvar_16)), ((MR_Box) (Tvar_10)));
    if (succeeded)
      *STATE_VARIABLE_Renaming_18 = STATE_VARIABLE_Renaming_0_17;
    else
      mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]), ((MR_Box) (Tvar_10)), ((MR_Box) (NewTvar_16)), STATE_VARIABLE_Renaming_0_17, STATE_VARIABLE_Renaming_18);
  }
  else
    *STATE_VARIABLE_Renaming_18 = STATE_VARIABLE_Renaming_0_17;
}

static void MR_CALL 
check_hlds__cse_detection__find_type_info_locn_tvar_map_5_p_0(
  MR_Word RttiVarMaps_6,
  MR_Word FirstOldNewMap_7,
  MR_Word Tvar_8,
  MR_Word STATE_VARIABLE_NewTvarMap_0_14,
  MR_Word * STATE_VARIABLE_NewTvarMap_15)
{
  MR_bool succeeded;
  MR_Word TypeInfoLocn0_10;
  MR_Word Old_11;
  MR_Word New_12;
  MR_Box conv0_New_12;

  hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(RttiVarMaps_6, Tvar_8, &TypeInfoLocn0_10);
  hlds__hlds_rtti__type_info_locn_var_2_p_0(TypeInfoLocn0_10, &Old_11);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), FirstOldNewMap_7, ((MR_Box) (Old_11)), &conv0_New_12);
  if (succeeded)
  {
    New_12 = ((MR_Word) (conv0_New_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word TypeInfoLocn_13;

    hlds__hlds_rtti__type_info_locn_set_var_3_p_0(New_12, TypeInfoLocn0_10, &TypeInfoLocn_13);
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]), ((MR_Box) (TypeInfoLocn_13)), ((MR_Box) (Tvar_8)), STATE_VARIABLE_NewTvarMap_0_14, STATE_VARIABLE_NewTvarMap_15);
  }
  else
    *STATE_VARIABLE_NewTvarMap_15 = STATE_VARIABLE_NewTvarMap_0_14;
}

static void MR_CALL 
check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(
  MR_Word Var_8,
  MR_Word Goal0_9,
  MR_Word * Goals_10,
  MR_Word STATE_VARIABLE_CseState_0_23,
  MR_Word * STATE_VARIABLE_CseState_24,
  MR_Word STATE_VARIABLE_CseInfo_0_25,
  MR_Word * STATE_VARIABLE_CseInfo_26)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) STATE_VARIABLE_CseState_0_23)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(STATE_VARIABLE_CseState_0_23)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ConsId_13;
            MR_Word OldNewVars_14;
            MR_Word HoistedGoal_15;
            MR_Word GoalExpr0_39 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 0))));
            MR_Word GoalInfo0_40 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 1))));
            MR_Word RHS_42;
            MR_Word Umode_43;
            MR_Word Ucontext_45;
            MR_Word ConsId0_47;
            MR_Word ArgVars_48;
            MR_Word Submodes_49;
            MR_Word Unif0_44;
            MR_Unsigned packed_word_0;

            succeeded = ((MR_tag((MR_Word) GoalExpr0_39)) == (MR_Integer) 1);
            if (succeeded)
            {
              RHS_42 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_39, (MR_Integer) 1))));
              Umode_43 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_39, (MR_Integer) 2))));
              Unif0_44 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_39, (MR_Integer) 3))));
              Ucontext_45 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_39, (MR_Integer) 4))));
              succeeded = ((MR_tag((MR_Word) Unif0_44)) == (MR_Integer) 1);
              if (succeeded)
              {
                ConsId0_47 = ((MR_Word) ((MR_hl_field(1, Unif0_44, (MR_Integer) 1))));
                ArgVars_48 = ((MR_Word) ((MR_hl_field(1, Unif0_44, (MR_Integer) 2))));
                Submodes_49 = ((MR_Word) ((MR_hl_field(1, Unif0_44, (MR_Integer) 3))));
                packed_word_0 = (MR_Unsigned) ((MR_hl_field(1, Unif0_44, (MR_Integer) 4)));
              }
            }
            if (succeeded)
            {
              MR_Word Unif_52;
              MR_Word GoalExpr1_56;
              MR_Word GoalInfo1_66;
              MR_Word Context_67;
              MR_Word Subn_68;
              MR_Word Var_72;

              ConsId_13 = ConsId0_47;
              {
                Unif_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Unif_52, 0) = ((MR_Box) (Var_8));
                MR_hl_field(1, Unif_52, 1) = ((MR_Box) (ConsId_13));
                MR_hl_field(1, Unif_52, 2) = ((MR_Box) (ArgVars_48));
                MR_hl_field(1, Unif_52, 3) = ((MR_Box) (Submodes_49));
                MR_hl_field(1, Unif_52, 4) = (MR_Box) (packed_word_0);
              }
              switch (MR_tag((MR_Word) RHS_42)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.cse_detection.construct_common_unify\'/8", (MR_String) "non-functor unify");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    GoalExpr1_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, GoalExpr1_56, 0) = ((MR_Box) (Var_8));
                    MR_hl_field(1, GoalExpr1_56, 1) = ((MR_Box) (RHS_42));
                    MR_hl_field(1, GoalExpr1_56, 2) = ((MR_Box) (Umode_43));
                    MR_hl_field(1, GoalExpr1_56, 3) = ((MR_Box) (Unif_52));
                    MR_hl_field(1, GoalExpr1_56, 4) = ((MR_Box) (Ucontext_45));
                  }
                  break;
              }
              hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 27, GoalInfo0_40, &GoalInfo1_66);
              Context_67 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo1_66);
              check_hlds__cse_detection__create_new_arg_vars_7_p_0(ArgVars_48, Context_67, Ucontext_45, STATE_VARIABLE_CseInfo_0_25, STATE_VARIABLE_CseInfo_26, &OldNewVars_14, Goals_10);
              mercury__map__from_assoc_list_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), OldNewVars_14, &Subn_68);
              {
                Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_72, 0) = ((MR_Box) (GoalExpr1_56));
                MR_hl_field(0, Var_72, 1) = ((MR_Box) (GoalInfo1_66));
              }
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subn_68, Var_72, &HoistedGoal_15);
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.cse_detection.construct_common_unify\'/8", (MR_String) "non-unify goal");
                return;
              }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_CseState_24 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (HoistedGoal_15));
              MR_hl_field(1, base, 1) = ((MR_Box) (ConsId_13));
              MR_hl_field(1, base, 2) = ((MR_Box) (OldNewVars_14));
              MR_hl_field(1, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Goals_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Goal0_9));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *STATE_VARIABLE_CseState_24 = (MR_Word) ((MR_Unsigned) 4U);
            *STATE_VARIABLE_CseInfo_26 = STATE_VARIABLE_CseInfo_0_25;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word FirstOldNewVars_16 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_CseState_0_23, (MR_Integer) 2))));
        MR_Word LaterOldNewVars0_17 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_CseState_0_23, (MR_Integer) 3))));
        MR_Word GoalInfo_19 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 1))));
        MR_Word Context_20;
        MR_Word ConsId_36 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_CseState_0_23, (MR_Integer) 1))));
        MR_Word HoistedGoal_38 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_CseState_0_23, (MR_Integer) 0))));
        MR_Word Goals0_21;
        MR_Word OldNewVars_35;
        MR_Word OC_80;
        MR_Word HoistedFunctor_83;
        MR_Word HoistedVars_84;
        MR_Word OldFunctor_95;
        MR_Word OldVars_96;
        MR_Word HoistedUnifyInfo_79;
        MR_Word OldUnifyInfo_91;
        MR_Word Var_102;
        MR_Word Var_103;

        Context_20 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_19);
        Var_102 = ((MR_Word) ((MR_hl_field(0, HoistedGoal_38, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_102)) == (MR_Integer) 1);
        if (succeeded)
        {
          HoistedUnifyInfo_79 = ((MR_Word) ((MR_hl_field(1, Var_102, (MR_Integer) 3))));
          OC_80 = ((MR_Word) ((MR_hl_field(1, Var_102, (MR_Integer) 4))));
          succeeded = ((MR_tag((MR_Word) HoistedUnifyInfo_79)) == (MR_Integer) 1);
          if (succeeded)
          {
            HoistedFunctor_83 = ((MR_Word) ((MR_hl_field(1, HoistedUnifyInfo_79, (MR_Integer) 1))));
            HoistedVars_84 = ((MR_Word) ((MR_hl_field(1, HoistedUnifyInfo_79, (MR_Integer) 2))));
            Var_103 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_103)) == (MR_Integer) 1);
            if (succeeded)
            {
              OldUnifyInfo_91 = ((MR_Word) ((MR_hl_field(1, Var_103, (MR_Integer) 3))));
              succeeded = ((MR_tag((MR_Word) OldUnifyInfo_91)) == (MR_Integer) 1);
              if (succeeded)
              {
                OldFunctor_95 = ((MR_Word) ((MR_hl_field(1, OldUnifyInfo_91, (MR_Integer) 1))));
                OldVars_96 = ((MR_Word) ((MR_hl_field(1, OldUnifyInfo_91, (MR_Integer) 2))));
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word TypeInfo_41_106;
          MR_Integer HoistedVarsCount_100;
          MR_Integer OldVarsCount_101;

          succeeded = parse_tree__prog_data____Unify____cons_id_0_0(HoistedFunctor_83, OldFunctor_95);
          if (succeeded)
          {
            TypeInfo_41_106 = (MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]);
            mercury__list__length_2_p_0(TypeInfo_41_106, HoistedVars_84, &HoistedVarsCount_100);
            mercury__list__length_2_p_0(TypeInfo_41_106, OldVars_96, &OldVarsCount_101);
            succeeded = (HoistedVarsCount_100 == OldVarsCount_101);
            if (succeeded)
            {
              mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_41_106, TypeInfo_41_106, OldVars_96, HoistedVars_84, &OldNewVars_35);
              check_hlds__cse_detection__pair_subterms_4_p_0(OldNewVars_35, Context_20, OC_80, &Goals0_21);
              succeeded = MR_TRUE;
            }
          }
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.cse_detection.find_similar_deconstruct\'/5", (MR_String) "non-deconstruct unify");
            return;
          }
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word LaterOldNewVars_22;

          *Goals_10 = Goals0_21;
          {
            LaterOldNewVars_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, LaterOldNewVars_22, 0) = ((MR_Box) (OldNewVars_35));
            MR_hl_field(1, LaterOldNewVars_22, 1) = ((MR_Box) (LaterOldNewVars0_17));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_CseState_24 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (HoistedGoal_38));
            MR_hl_field(1, base, 1) = ((MR_Box) (ConsId_36));
            MR_hl_field(1, base, 2) = ((MR_Box) (FirstOldNewVars_16));
            MR_hl_field(1, base, 3) = ((MR_Box) (LaterOldNewVars_22));
          }
        }
        else
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Goals_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Goal0_9));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_CseState_24 = (MR_Word) ((MR_Unsigned) 4U);
        }
        *STATE_VARIABLE_CseInfo_26 = STATE_VARIABLE_CseInfo_0_25;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__cse_detection__pair_subterms_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word OldVar_7;
    MR_Word HoistedVar_8;
    MR_Word OldHoistedVars_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Replacements1_13;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    OldVar_7 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
    HoistedVar_8 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 1))));
    check_hlds__cse_detection__pair_subterms_4_p_0(OldHoistedVars_9, HeadVar__2_2, HeadVar__3_3, &Replacements1_13);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), ((MR_Box) (OldVar_7)), ((MR_Box) (HoistedVar_8)));
    if (succeeded)
      *HeadVar__4_4 = Replacements1_13;
    else
    {
      MR_Word MainCtxt_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word SubCtxt_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Goal_16;
      MR_Word Var_18;

      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_18, 0) = ((MR_Box) (OldVar_7));
      }
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(HoistedVar_8, Var_18, HeadVar__2_2, MainCtxt_14, SubCtxt_15, &Goal_16);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_16));
        MR_hl_field(1, base, 1) = ((MR_Box) (Replacements1_13));
      }
    }
  }
}

static void MR_CALL 
check_hlds__cse_detection__create_new_arg_vars_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Context_2,
  MR_Word UnifyContext_3,
  MR_Word STATE_VARIABLE_CseInfo_0_4,
  MR_Word * STATE_VARIABLE_CseInfo_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CseInfo_5 = STATE_VARIABLE_CseInfo_0_4;
  }
  else
  {
    MR_Word HeadOldArgVar_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TailOldArgVars_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TailReplacementGoals_20;
    MR_Word HeadReplacementGoal_21;
    MR_Word STATE_VARIABLE_CseInfo_25_25;
    MR_Word STATE_VARIABLE_OldNewVars_26_26;
    MR_Word VarTable0_27;
    MR_Word OldArgVarEntry_28;
    MR_String OldArgVarName_29;
    MR_Word OldArgVarType_30;
    MR_Word OldArgVarIsDummy_31;
    MR_Word ModuleInfo_32;
    MR_Word TypeCat_33;
    MR_String NewArgVarName_35;
    MR_Word NewArgVarEntry_36;
    MR_Word NewArgVar_37;
    MR_Word VarTable_38;
    MR_Word MainCtxt_39;
    MR_Word SubCtxt_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;

    check_hlds__cse_detection__create_new_arg_vars_7_p_0(TailOldArgVars_14, Context_2, UnifyContext_3, STATE_VARIABLE_CseInfo_0_4, &STATE_VARIABLE_CseInfo_25_25, &STATE_VARIABLE_OldNewVars_26_26, &TailReplacementGoals_20);
    VarTable0_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 1))));
    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable0_27, HeadOldArgVar_13, &OldArgVarEntry_28);
    OldArgVarName_29 = ((MR_String) ((MR_hl_field(0, OldArgVarEntry_28, (MR_Integer) 0))));
    OldArgVarType_30 = ((MR_Word) ((MR_hl_field(0, OldArgVarEntry_28, (MR_Integer) 1))));
    OldArgVarIsDummy_31 = ((MR_Unsigned) ((MR_hl_field(0, OldArgVarEntry_28, (MR_Integer) 2))) & (MR_Integer) 1);
    ModuleInfo_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 0))));
    TypeCat_33 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_32, OldArgVarType_30);
    succeeded = ((((MR_tag((MR_Word) TypeCat_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeCat_33, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      succeeded = (strcmp(OldArgVarName_29, (MR_String) "") == 0);
      succeeded = !(succeeded);
    }
    if (succeeded)
      NewArgVarName_35 = OldArgVarName_29;
    else
      NewArgVarName_35 = (MR_String) "";
    {
      NewArgVarEntry_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NewArgVarEntry_36, 0) = ((MR_Box) (NewArgVarName_35));
      MR_hl_field(0, NewArgVarEntry_36, 1) = ((MR_Box) (OldArgVarType_30));
      MR_hl_field(0, NewArgVarEntry_36, 2) = (MR_Box) ((MR_Unsigned) (OldArgVarIsDummy_31));
    }
    parse_tree__var_table__add_var_entry_4_p_0(NewArgVarEntry_36, &NewArgVar_37, VarTable0_27, &VarTable_38);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = ((MR_Box) (HeadOldArgVar_13));
      MR_hl_field(0, Var_41, 1) = ((MR_Box) (NewArgVar_37));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_41));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OldNewVars_26_26));
    }
    MainCtxt_39 = ((MR_Word) ((MR_hl_field(0, UnifyContext_3, (MR_Integer) 0))));
    SubCtxt_40 = ((MR_Word) ((MR_hl_field(0, UnifyContext_3, (MR_Integer) 1))));
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_42, 0) = ((MR_Box) (NewArgVar_37));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(HeadOldArgVar_13, Var_42, Context_2, MainCtxt_39, SubCtxt_40, &HeadReplacementGoal_21);
    Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 0))));
    Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 2))));
    Var_54 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 3))) & (MR_Integer) 1);
    Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CseInfo_5 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_51));
      MR_hl_field(0, base, 1) = ((MR_Box) (VarTable_38));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_53));
      MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_54));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_55));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadReplacementGoal_21));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailReplacementGoals_20));
    }
  }
}

void MR_CALL 
check_hlds__cse_detection__detect_cse_in_module_3_p_0(
  MR_Word ProgressStream_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  MR_Word PredIds_6;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_7, &PredIds_6);
  check_hlds__cse_detection__detect_cse_in_preds_4_p_0(ProgressStream_4, PredIds_6, STATE_VARIABLE_ModuleInfo_0_7, STATE_VARIABLE_ModuleInfo_8);
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_preds_4_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    else
    {
      MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PredIds_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PredInfo_13;
      MR_Word STATE_VARIABLE_ModuleInfo_16_16;
      MR_Word Globals_17;
      MR_Word VeryVerbose_18;
      MR_Word ProcIds_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_3, PredId_10, &PredInfo_13);
      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_3, &Globals_17);
      libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 73, &VeryVerbose_18);
      switch (VeryVerbose_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_26;

            Var_26 = hlds__hlds_out__hlds_out_util__pred_id_to_user_string_2_f_0(STATE_VARIABLE_ModuleInfo_0_3, PredId_10);
            mercury__io__write_string_4_p_0(ProgressStream_1, (MR_String) "% Detecting common deconstructions for ");
            mercury__io__write_string_4_p_0(ProgressStream_1, Var_26);
            mercury__io__write_string_4_p_0(ProgressStream_1, (MR_String) "\n");
          }
          break;
      }
      ProcIds_19 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo_13);
      check_hlds__cse_detection__detect_cse_in_procs_5_p_0(ProgressStream_1, PredId_10, ProcIds_19, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_11;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_16_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_procs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_5 = STATE_VARIABLE_ModuleInfo_0_4;
    else
    {
      MR_Integer ProcId_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ProcIds_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_18;
      MR_Word STATE_VARIABLE_ModuleInfo_19_19;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_4;

      {
        Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_18, 0) = ((MR_Box) (HeadVar__1_1));
      }
      check_hlds__cse_detection__detect_cse_in_proc_5_p_0(Var_18, HeadVar__2_2, ProcId_13, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_19_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ProcIds_14;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_4 = STATE_VARIABLE_ModuleInfo_19_19;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_ModuleInfo_0_4 = next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
check_hlds__cse_detection__detect_cse_in_proc_5_p_0(
  MR_Word MaybeProgressStream_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * STATE_VARIABLE_ModuleInfo_33)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Globals_10;
    MR_Word VeryVerbose_11;
    MR_Word PredInfo0_12;
    MR_Word ProcInfo0_13;
    MR_Word Redo_14;
    MR_Word ProcInfo1_15;
    MR_Word PredInfo1_16;
    MR_Word Statistics_17;
    MR_Word STATE_VARIABLE_ModuleInfo_35_35;
    MR_Word ProgressStream_78;

    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_32, &Globals_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 73, &VeryVerbose_11);
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_32, PredId_7, &PredInfo0_12);
    hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo0_12, ProcId_8, &ProcInfo0_13);
    check_hlds__cse_detection__detect_cse_in_proc_pass_4_p_0(STATE_VARIABLE_ModuleInfo_0_32, &Redo_14, ProcInfo0_13, &ProcInfo1_15);
    hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_8, ProcInfo1_15, PredInfo0_12, &PredInfo1_16);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_7, PredInfo1_16, STATE_VARIABLE_ModuleInfo_0_32, &STATE_VARIABLE_ModuleInfo_35_35);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 83, &Statistics_17);
    hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_35_35, &ProgressStream_78);
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_78, Statistics_17);
    switch (Redo_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_ModuleInfo_33 = STATE_VARIABLE_ModuleInfo_35_35;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ProcModeErrorMap0_20;
          MR_Word ModeSpecs_23;
          MR_Word ContainsErrors_24;
          MR_Word PredInfo2_27;
          MR_Word ProcInfo2_28;
          MR_Word SwitchDetectInfo_29;
          MR_Word ProcInfo_30;
          MR_Word PredInfo3_31;
          MR_Word STATE_VARIABLE_ModuleInfo_47_47;
          MR_Word STATE_VARIABLE_ModuleInfo_66_66;
          MR_Word ProgressStream_79;
          MR_Word _ProcModeErrorMap_21;
          MR_Word _Changed_22;
          MR_Word ProgressStream_87;
          MR_Word ProgressStream_89;
          MR_Word ProgressStream_90;
          MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_32;

          succeeded = (VeryVerbose_11 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = (MaybeProgressStream_6 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              ProgressStream_79 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_6, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_String Var_45;

            Var_45 = hlds__hlds_out__hlds_out_util__pred_id_to_user_string_2_f_0(STATE_VARIABLE_ModuleInfo_35_35, PredId_7);
            mercury__io__write_string_4_p_0(ProgressStream_79, (MR_String) "% Repeating mode check for ");
            mercury__io__write_string_4_p_0(ProgressStream_79, Var_45);
            mercury__io__write_string_4_p_0(ProgressStream_79, (MR_String) "\n");
          }
          mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__cse_detection_scalar_common_2[0]), &ProcModeErrorMap0_20);
          check_hlds__modes__modecheck_proc_8_p_0(PredId_7, ProcId_8, STATE_VARIABLE_ModuleInfo_35_35, &STATE_VARIABLE_ModuleInfo_47_47, ProcModeErrorMap0_20, &_ProcModeErrorMap_21, &_Changed_22, &ModeSpecs_23);
          if (!((MaybeProgressStream_6 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word ProgressStream_81 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_6, (MR_Integer) 0))));

            libs__file_util__maybe_report_stats_4_p_0(ProgressStream_81, Statistics_17);
          }
          ContainsErrors_24 = parse_tree__error_util__contains_errors_2_f_0(Globals_10, ModeSpecs_23);
          switch (ContainsErrors_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word DebugStream_26;

                if (!((MaybeProgressStream_6 == (MR_Word) ((MR_Unsigned) 0U))))
                {
                  MR_Word ProgressStream_84 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_6, (MR_Integer) 0))));
                  MR_Word _DumpInfo_25;

                  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_84, STATE_VARIABLE_ModuleInfo_47_47, (MR_Integer) 46, (MR_String) "cse_repeat_modecheck", (MR_Word) ((MR_Unsigned) 0U), &_DumpInfo_25);
                }
                hlds__passes_aux__get_debug_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_47_47, &DebugStream_26);
                parse_tree__write_error_spec__write_error_specs_5_p_0(DebugStream_26, Globals_10, ModeSpecs_23);
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_proc\'/5", (MR_String) "mode check fails when repeated");
                  return;
                }
              }
              break;
          }
          succeeded = (VeryVerbose_11 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = (MaybeProgressStream_6 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              ProgressStream_87 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_6, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_String Var_64;

            Var_64 = hlds__hlds_out__hlds_out_util__pred_id_to_user_string_2_f_0(STATE_VARIABLE_ModuleInfo_47_47, PredId_7);
            mercury__io__write_string_4_p_0(ProgressStream_87, (MR_String) "% Repeating switch detection for ");
            mercury__io__write_string_4_p_0(ProgressStream_87, Var_64);
            mercury__io__write_string_4_p_0(ProgressStream_87, (MR_String) "\n");
          }
          hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_47_47, PredId_7, &PredInfo2_27);
          hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo2_27, ProcId_8, &ProcInfo2_28);
          SwitchDetectInfo_29 = check_hlds__switch_detection__init_switch_detect_info_1_f_0(STATE_VARIABLE_ModuleInfo_47_47);
          check_hlds__switch_detection__detect_switches_in_proc_3_p_0(SwitchDetectInfo_29, ProcInfo2_28, &ProcInfo_30);
          hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_8, ProcInfo_30, PredInfo2_27, &PredInfo3_31);
          hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_7, PredInfo3_31, STATE_VARIABLE_ModuleInfo_47_47, &STATE_VARIABLE_ModuleInfo_66_66);
          hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_66_66, &ProgressStream_89);
          libs__file_util__maybe_report_stats_4_p_0(ProgressStream_89, Statistics_17);
          succeeded = (VeryVerbose_11 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = (MaybeProgressStream_6 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              ProgressStream_90 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_6, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_String Var_75;

            Var_75 = hlds__hlds_out__hlds_out_util__pred_id_to_user_string_2_f_0(STATE_VARIABLE_ModuleInfo_66_66, PredId_7);
            mercury__io__write_string_4_p_0(ProgressStream_90, (MR_String) "% Repeating common deconstruction detection for ");
            mercury__io__write_string_4_p_0(ProgressStream_90, Var_75);
            mercury__io__write_string_4_p_0(ProgressStream_90, (MR_String) "\n");
          }
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_ModuleInfo_0_32 = STATE_VARIABLE_ModuleInfo_66_66;
          STATE_VARIABLE_ModuleInfo_0_32 = next_value_of_STATE_VARIABLE_ModuleInfo_0_32;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_proc_pass_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word * Redo_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_32,
  MR_Word * STATE_VARIABLE_ProcInfo_33)
{
  MR_Word Goal0_8;
  MR_Word InstMap0_9;
  MR_Word VarTable0_10;
  MR_Word RttiVarMaps0_11;
  MR_Word CseInfo0_13;
  MR_Word Goal1_14;
  MR_Word CseInfo_15;
  MR_Word CseNoPullContexts_19;
  MR_Word NoPullContexts0_20;
  MR_Word NoPullContexts_21;
  MR_Word STATE_VARIABLE_ProcInfo_35_35;
  MR_Word _InstMap_40;

  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_32, &Goal0_8);
  hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ModuleInfo_5, STATE_VARIABLE_ProcInfo_0_32, &InstMap0_9);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_32, &VarTable0_10);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_0_32, &RttiVarMaps0_11);
  {
    CseInfo0_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CseInfo0_13, 0) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, CseInfo0_13, 1) = ((MR_Box) (VarTable0_10));
    MR_hl_field(0, CseInfo0_13, 2) = ((MR_Box) (RttiVarMaps0_11));
    MR_hl_field(0, CseInfo0_13, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, CseInfo0_13, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  check_hlds__cse_detection__detect_cse_in_goal_update_instmap_6_p_0(Goal0_8, &Goal1_14, CseInfo0_13, &CseInfo_15, InstMap0_9, &_InstMap_40);
  *Redo_6 = ((MR_Unsigned) ((MR_hl_field(0, CseInfo_15, (MR_Integer) 3))) & (MR_Integer) 1);
  CseNoPullContexts_19 = ((MR_Word) ((MR_hl_field(0, CseInfo_15, (MR_Integer) 4))));
  hlds__hlds_pred__proc_info_get_cse_nopull_contexts_2_p_0(STATE_VARIABLE_ProcInfo_0_32, &NoPullContexts0_20);
  NoPullContexts_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), CseNoPullContexts_19, NoPullContexts0_20);
  hlds__hlds_pred__proc_info_set_cse_nopull_contexts_3_p_0(NoPullContexts_21, STATE_VARIABLE_ProcInfo_0_32, &STATE_VARIABLE_ProcInfo_35_35);
  switch (*Redo_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_ProcInfo_33 = STATE_VARIABLE_ProcInfo_35_35;
      break;
    case (MR_Integer) 1:
      {
        MR_Word VarTable1_23 = ((MR_Word) ((MR_hl_field(0, CseInfo_15, (MR_Integer) 1))));
        MR_Word RttiVarMaps1_24 = ((MR_Word) ((MR_hl_field(0, CseInfo_15, (MR_Integer) 2))));
        MR_Word HeadVars_27;
        MR_Word Goal_29;
        MR_Word VarTable_30;
        MR_Word RttiVarMaps_31;
        MR_Word STATE_VARIABLE_ProcInfo_37_37;
        MR_Word STATE_VARIABLE_ProcInfo_38_38;
        MR_Word _Warnings_28;

        hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_35_35, &HeadVars_27);
        hlds__quantification__implicitly_quantify_clause_body_general_9_p_0((MR_Integer) 0, HeadVars_27, &_Warnings_28, Goal1_14, &Goal_29, VarTable1_23, &VarTable_30, RttiVarMaps1_24, &RttiVarMaps_31);
        hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_29, STATE_VARIABLE_ProcInfo_35_35, &STATE_VARIABLE_ProcInfo_37_37);
        hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_30, STATE_VARIABLE_ProcInfo_37_37, &STATE_VARIABLE_ProcInfo_38_38);
        hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_31, STATE_VARIABLE_ProcInfo_38_38, STATE_VARIABLE_ProcInfo_33);
      }
      break;
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_Goals_10;
  MR_Word conv6_STATE_VARIABLE_CseState_24;
  MR_Word conv5_STATE_VARIABLE_CseInfo_26;

  check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_Goals_10, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_CseState_24, ((MR_Word) (wrapper_arg_6)), &conv5_STATE_VARIABLE_CseInfo_26);
  *wrapper_arg_3 = ((MR_Box) (conv7_Goals_10));
  *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_CseState_24));
  *wrapper_arg_7 = ((MR_Box) (conv5_STATE_VARIABLE_CseInfo_26));
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Goals_10;
  MR_Word conv1_STATE_VARIABLE_CseState_24;
  MR_Word conv0_STATE_VARIABLE_CseInfo_26;

  check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Goals_10, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_CseState_24, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_CseInfo_26);
  *wrapper_arg_3 = ((MR_Box) (conv2_Goals_10));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_CseState_24));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_CseInfo_26));
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word IfVars_2,
  MR_Word Cond0_3,
  MR_Word Then0_4,
  MR_Word Else0_5,
  MR_Word GoalInfo_6,
  MR_Word InstMap0_7,
  MR_Word STATE_VARIABLE_CseInfo_0_8,
  MR_Word * STATE_VARIABLE_CseInfo_9,
  MR_Word * GoalExpr_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Cond_19;
      MR_Word Then_20;
      MR_Word Else_21;
      MR_Word InstMap1_72;
      MR_Word STATE_VARIABLE_CseInfo_21_73;
      MR_Word STATE_VARIABLE_CseInfo_22_74;

      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_6_p_0(Cond0_3, &Cond_19, STATE_VARIABLE_CseInfo_0_8, &STATE_VARIABLE_CseInfo_21_73, InstMap0_7, &InstMap1_72);
      check_hlds__cse_detection__detect_cse_in_goal_5_p_0(Then0_4, &Then_20, STATE_VARIABLE_CseInfo_21_73, &STATE_VARIABLE_CseInfo_22_74, InstMap1_72);
      check_hlds__cse_detection__detect_cse_in_goal_5_p_0(Else0_5, &Else_21, STATE_VARIABLE_CseInfo_22_74, STATE_VARIABLE_CseInfo_9, InstMap0_7);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_10 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, base, 1) = ((MR_Box) (IfVars_2));
        MR_hl_field(3, base, 2) = ((MR_Box) (Cond_19));
        MR_hl_field(3, base, 3) = ((MR_Box) (Then_20));
        MR_hl_field(3, base, 4) = ((MR_Box) (Else_21));
      }
    }
    else
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word UnifyGoal_36;
      MR_Word ConsId_37;
      MR_Word FirstOldNew_38;
      MR_Word LaterOldNew_39;
      MR_Word Goals_40;
      MR_Word STATE_VARIABLE_CseInfo_51_51;
      MR_Word TypeCtorInfo_41_134;
      MR_Word TypeCtorInfo_42_135;
      MR_Word CseState_76;
      MR_Word Goals0_101;
      MR_Word Goal_102;
      MR_Word Goals_103;
      MR_Word STATE_VARIABLE_CseState_31_109;
      MR_Word STATE_VARIABLE_CseInfo_32_110;
      MR_Word Var_114;
      MR_Word Goal0_122;
      MR_Word Goal_124;
      MR_Word Goals_125;
      MR_Word Var_130;
      MR_Word Var_133;
      MR_Word Var_136;
      MR_Box conv4_STATE_VARIABLE_CseState_31_109;
      MR_Box conv3_STATE_VARIABLE_CseInfo_32_110;
      MR_Box conv9_CseState_76;
      MR_Box conv8_STATE_VARIABLE_CseInfo_51_51;

      {
        Goals0_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Goals0_101, 0) = ((MR_Box) (Else0_5));
        MR_hl_field(1, Goals0_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      check_hlds__switch_detection__find_bind_var_9_p_0((MR_Word) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0), (MR_Word) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0), Var_25, (MR_Word) (&check_hlds__cse_detection_scalar_common_2[6]), Then0_4, &Goal_102, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_STATE_VARIABLE_CseState_31_109, ((MR_Box) (STATE_VARIABLE_CseInfo_0_8)), &conv3_STATE_VARIABLE_CseInfo_32_110, &Var_114);
      STATE_VARIABLE_CseState_31_109 = ((MR_Word) (conv4_STATE_VARIABLE_CseState_31_109));
      STATE_VARIABLE_CseInfo_32_110 = ((MR_Word) (conv3_STATE_VARIABLE_CseInfo_32_110));
      succeeded = ((MR_Integer) 0 == Var_114);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_CseState_31_109)) == (MR_Integer) 1);
        if (succeeded)
        {
          Goal0_122 = ((MR_Word) ((MR_hl_field(1, Goals0_101, (MR_Integer) 0))));
          Var_130 = (MR_Word) (&check_hlds__cse_detection_scalar_common_2[7]);
          Var_133 = (MR_Integer) 0;
          TypeCtorInfo_41_134 = (MR_Word) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0);
          TypeCtorInfo_42_135 = (MR_Word) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0);
          check_hlds__switch_detection__find_bind_var_9_p_0(TypeCtorInfo_41_134, TypeCtorInfo_42_135, Var_25, Var_130, Goal0_122, &Goal_124, ((MR_Box) (STATE_VARIABLE_CseState_31_109)), &conv9_CseState_76, ((MR_Box) (STATE_VARIABLE_CseInfo_32_110)), &conv8_STATE_VARIABLE_CseInfo_51_51, &Var_136);
          CseState_76 = ((MR_Word) (conv9_CseState_76));
          STATE_VARIABLE_CseInfo_51_51 = ((MR_Word) (conv8_STATE_VARIABLE_CseInfo_51_51));
          succeeded = (Var_133 == Var_136);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) CseState_76)) == (MR_Integer) 1);
            if (succeeded)
            {
              UnifyGoal_36 = ((MR_Word) ((MR_hl_field(1, CseState_76, (MR_Integer) 0))));
              ConsId_37 = ((MR_Word) ((MR_hl_field(1, CseState_76, (MR_Integer) 1))));
              FirstOldNew_38 = ((MR_Word) ((MR_hl_field(1, CseState_76, (MR_Integer) 2))));
              LaterOldNew_39 = ((MR_Word) ((MR_hl_field(1, CseState_76, (MR_Integer) 3))));
              Goals_125 = (MR_Word) ((MR_Unsigned) 0U);
              succeeded = (LaterOldNew_39 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                {
                  Goals_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Goals_103, 0) = ((MR_Box) (Goal_124));
                  MR_hl_field(1, Goals_103, 1) = ((MR_Box) (Goals_125));
                }
                {
                  Goals_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Goals_40, 0) = ((MR_Box) (Goal_102));
                  MR_hl_field(1, Goals_40, 1) = ((MR_Box) (Goals_103));
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Then_43;
        MR_Word Else_44;
        MR_Word VarInst0_45;
        MR_Word Then1_41;
        MR_Word Else1_42;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word ModuleInfo_79;

        succeeded = (Goals_40 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Then1_41 = ((MR_Word) ((MR_hl_field(1, Goals_40, (MR_Integer) 0))));
          Var_54 = ((MR_Word) ((MR_hl_field(1, Goals_40, (MR_Integer) 1))));
          succeeded = (Var_54 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Else1_42 = ((MR_Word) ((MR_hl_field(1, Var_54, (MR_Integer) 0))));
            Var_55 = ((MR_Word) ((MR_hl_field(1, Var_54, (MR_Integer) 1))));
            succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
        {
          Then_43 = Then1_41;
          Else_44 = Else1_42;
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_ite\'/10", (MR_String) "common_deconstruct changes number of goals");
            return;
          }
        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_7, Var_25, &VarInst0_45);
        ModuleInfo_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_51_51, (MR_Integer) 0))));
        succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(ModuleInfo_79, VarInst0_45);
        if (succeeded)
        {
          succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_79, VarInst0_45);
          if (succeeded)
            succeeded = MR_TRUE;
          else
          {
            MR_Word FunctorBoundInsts_80;
            MR_Word MayPullConsId_81;

            succeeded = check_hlds__inst_test__inst_is_bound_to_functors_3_p_0(ModuleInfo_79, VarInst0_45, &FunctorBoundInsts_80);
            if (succeeded)
            {
              check_hlds__cse_detection__compute_may_pull_cons_id_4_p_0(ModuleInfo_79, FunctorBoundInsts_80, ConsId_37, &MayPullConsId_81);
              succeeded = (MayPullConsId_81 == (MR_Integer) 0);
            }
          }
        }
        if (succeeded)
        {
          MR_Word IfGoalExpr_46;
          MR_Word IfGoal_47;
          MR_Word STATE_VARIABLE_CseInfo_58_58;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_71;

          check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(UnifyGoal_36, FirstOldNew_38, LaterOldNew_39, STATE_VARIABLE_CseInfo_51_51, &STATE_VARIABLE_CseInfo_58_58);
          {
            IfGoalExpr_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, IfGoalExpr_46, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, IfGoalExpr_46, 1) = ((MR_Box) (IfVars_2));
            MR_hl_field(3, IfGoalExpr_46, 2) = ((MR_Box) (Cond0_3));
            MR_hl_field(3, IfGoalExpr_46, 3) = ((MR_Box) (Then_43));
            MR_hl_field(3, IfGoalExpr_46, 4) = ((MR_Box) (Else_44));
          }
          {
            IfGoal_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, IfGoal_47, 0) = ((MR_Box) (IfGoalExpr_46));
            MR_hl_field(0, IfGoal_47, 1) = ((MR_Box) (GoalInfo_6));
          }
          {
            Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_61, 0) = ((MR_Box) (IfGoal_47));
            MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_60, 0) = ((MR_Box) (UnifyGoal_36));
            MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_61));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_10 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, base, 2) = ((MR_Box) (Var_60));
          }
          Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_58_58, (MR_Integer) 0))));
          Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_58_58, (MR_Integer) 1))));
          Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_58_58, (MR_Integer) 2))));
          Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_58_58, (MR_Integer) 4))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_CseInfo_9 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_67));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_68));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_69));
            MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_71));
          }
        }
        else
        {
          MR_Word STATE_VARIABLE_CseInfo_66_66;
          MR_Word UnifyGoalInfo_87 = ((MR_Word) ((MR_hl_field(0, UnifyGoal_36, (MR_Integer) 1))));
          MR_Word Context_88;
          MR_Word NoPullContexts0_89;
          MR_Word NoPullContexts_90;
          MR_Word Var_91;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Word Var_94;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_STATE_VARIABLE_CseInfo_0_8;

          Context_88 = hlds__hlds_goal__goal_info_get_context_1_f_0(UnifyGoalInfo_87);
          Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 0))));
          Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 1))));
          Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 2))));
          Var_94 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 3))) & (MR_Integer) 1);
          NoPullContexts0_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 4))));
          {
            NoPullContexts_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NoPullContexts_90, 0) = ((MR_Box) (Context_88));
            MR_hl_field(1, NoPullContexts_90, 1) = ((MR_Box) (NoPullContexts0_89));
          }
          {
            STATE_VARIABLE_CseInfo_66_66 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_CseInfo_66_66, 0) = ((MR_Box) (Var_91));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_66_66, 1) = ((MR_Box) (Var_92));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_66_66, 2) = ((MR_Box) (Var_93));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_66_66, 3) = (MR_Box) ((MR_Unsigned) (Var_94));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_66_66, 4) = ((MR_Box) (NoPullContexts_90));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Vars_26;
          next_value_of_STATE_VARIABLE_CseInfo_0_8 = STATE_VARIABLE_CseInfo_66_66;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_CseInfo_0_8 = next_value_of_STATE_VARIABLE_CseInfo_0_8;
          continue;
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Vars_26;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SwitchVar_2,
  MR_Word CanFail_3,
  MR_Word Cases0_4,
  MR_Word HeadVar__5_5,
  MR_Word InstMap0_6,
  MR_Word STATE_VARIABLE_CseInfo_0_7,
  MR_Word * STATE_VARIABLE_CseInfo_8,
  MR_Word * GoalExpr_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Cases_17;

      check_hlds__cse_detection__detect_cse_in_cases_arms_5_p_0(Cases0_4, &Cases_17, STATE_VARIABLE_CseInfo_0_7, STATE_VARIABLE_CseInfo_8, InstMap0_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_9 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, base, 1) = ((MR_Box) (SwitchVar_2));
        MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (CanFail_3));
        MR_hl_field(3, base, 3) = ((MR_Box) (Cases_17));
      }
    }
    else
    {
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word UnifyGoal_31;
      MR_Word ConsId_32;
      MR_Word FirstOldNew_33;
      MR_Word LaterOldNew_34;
      MR_Word Cases_35;
      MR_Word STATE_VARIABLE_CseInfo_41_41;
      MR_Word CseState0_57;
      MR_Word CseState_58;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), ((MR_Box) (Var_21)), ((MR_Box) (SwitchVar_2)));
      succeeded = !(succeeded);
      if (succeeded)
      {
        CseState0_57 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(Cases0_4, Var_21, CseState0_57, &CseState_58, STATE_VARIABLE_CseInfo_0_7, &STATE_VARIABLE_CseInfo_41_41, &Cases_35);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) CseState_58)) == (MR_Integer) 1);
          if (succeeded)
          {
            UnifyGoal_31 = ((MR_Word) ((MR_hl_field(1, CseState_58, (MR_Integer) 0))));
            ConsId_32 = ((MR_Word) ((MR_hl_field(1, CseState_58, (MR_Integer) 1))));
            FirstOldNew_33 = ((MR_Word) ((MR_hl_field(1, CseState_58, (MR_Integer) 2))));
            LaterOldNew_34 = ((MR_Word) ((MR_hl_field(1, CseState_58, (MR_Integer) 3))));
            succeeded = (LaterOldNew_34 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word VarInst0_36;
        MR_Word ModuleInfo_61;

        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_6, Var_21, &VarInst0_36);
        ModuleInfo_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_41_41, (MR_Integer) 0))));
        succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(ModuleInfo_61, VarInst0_36);
        if (succeeded)
        {
          succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_61, VarInst0_36);
          if (succeeded)
            succeeded = MR_TRUE;
          else
          {
            MR_Word FunctorBoundInsts_62;
            MR_Word MayPullConsId_63;

            succeeded = check_hlds__inst_test__inst_is_bound_to_functors_3_p_0(ModuleInfo_61, VarInst0_36, &FunctorBoundInsts_62);
            if (succeeded)
            {
              check_hlds__cse_detection__compute_may_pull_cons_id_4_p_0(ModuleInfo_61, FunctorBoundInsts_62, ConsId_32, &MayPullConsId_63);
              succeeded = (MayPullConsId_63 == (MR_Integer) 0);
            }
          }
        }
        if (succeeded)
        {
          MR_Word SwitchGoalExpr_37;
          MR_Word SwitchGoal_38;
          MR_Word STATE_VARIABLE_CseInfo_42_42;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_55;

          check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(UnifyGoal_31, FirstOldNew_33, LaterOldNew_34, STATE_VARIABLE_CseInfo_41_41, &STATE_VARIABLE_CseInfo_42_42);
          {
            SwitchGoalExpr_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, SwitchGoalExpr_37, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, SwitchGoalExpr_37, 1) = ((MR_Box) (SwitchVar_2));
            MR_hl_field(3, SwitchGoalExpr_37, 2) = (MR_Box) ((MR_Unsigned) (CanFail_3));
            MR_hl_field(3, SwitchGoalExpr_37, 3) = ((MR_Box) (Cases_35));
          }
          {
            SwitchGoal_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SwitchGoal_38, 0) = ((MR_Box) (SwitchGoalExpr_37));
            MR_hl_field(0, SwitchGoal_38, 1) = ((MR_Box) (HeadVar__5_5));
          }
          {
            Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_45, 0) = ((MR_Box) (SwitchGoal_38));
            MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_44, 0) = ((MR_Box) (UnifyGoal_31));
            MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_45));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_9 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, base, 2) = ((MR_Box) (Var_44));
          }
          Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_42_42, (MR_Integer) 0))));
          Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_42_42, (MR_Integer) 1))));
          Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_42_42, (MR_Integer) 2))));
          Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_42_42, (MR_Integer) 4))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_CseInfo_8 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_51));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_52));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_53));
            MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_55));
          }
        }
        else
        {
          MR_Word STATE_VARIABLE_CseInfo_50_50;
          MR_Word UnifyGoalInfo_69 = ((MR_Word) ((MR_hl_field(0, UnifyGoal_31, (MR_Integer) 1))));
          MR_Word Context_70;
          MR_Word NoPullContexts0_71;
          MR_Word NoPullContexts_72;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_STATE_VARIABLE_CseInfo_0_7;

          Context_70 = hlds__hlds_goal__goal_info_get_context_1_f_0(UnifyGoalInfo_69);
          Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 0))));
          Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 1))));
          Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 2))));
          Var_76 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 3))) & (MR_Integer) 1);
          NoPullContexts0_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 4))));
          {
            NoPullContexts_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NoPullContexts_72, 0) = ((MR_Box) (Context_70));
            MR_hl_field(1, NoPullContexts_72, 1) = ((MR_Box) (NoPullContexts0_71));
          }
          {
            STATE_VARIABLE_CseInfo_50_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_CseInfo_50_50, 0) = ((MR_Box) (Var_73));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_50_50, 1) = ((MR_Box) (Var_74));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_50_50, 2) = ((MR_Box) (Var_75));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_50_50, 3) = (MR_Box) ((MR_Unsigned) (Var_76));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_50_50, 4) = ((MR_Box) (NoPullContexts_72));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Vars_22;
          next_value_of_STATE_VARIABLE_CseInfo_0_7 = STATE_VARIABLE_CseInfo_50_50;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_CseInfo_0_7 = next_value_of_STATE_VARIABLE_CseInfo_0_7;
          continue;
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Vars_22;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_disj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Goals0_2,
  MR_Word HeadVar__3_3,
  MR_Word InstMap0_4,
  MR_Word STATE_VARIABLE_CseInfo_0_5,
  MR_Word * STATE_VARIABLE_CseInfo_6,
  MR_Word * GoalExpr_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Goals_13;

      check_hlds__cse_detection__detect_cse_in_independent_goals_5_p_0(Goals0_2, &Goals_13, STATE_VARIABLE_CseInfo_0_5, STATE_VARIABLE_CseInfo_6, InstMap0_4);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_7 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, base, 1) = ((MR_Box) (Goals_13));
      }
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word UnifyGoal_25;
      MR_Word ConsId_26;
      MR_Word FirstOldNew_27;
      MR_Word LaterOldNew_28;
      MR_Word Goals_29;
      MR_Word STATE_VARIABLE_CseInfo_33_33;
      MR_Word CseState_51;

      succeeded = check_hlds__cse_detection__common_deconstruct_2_7_p_0(Goals0_2, Var_17, (MR_Word) ((MR_Unsigned) 0U), &CseState_51, STATE_VARIABLE_CseInfo_0_5, &STATE_VARIABLE_CseInfo_33_33, &Goals_29);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) CseState_51)) == (MR_Integer) 1);
        if (succeeded)
        {
          UnifyGoal_25 = ((MR_Word) ((MR_hl_field(1, CseState_51, (MR_Integer) 0))));
          ConsId_26 = ((MR_Word) ((MR_hl_field(1, CseState_51, (MR_Integer) 1))));
          FirstOldNew_27 = ((MR_Word) ((MR_hl_field(1, CseState_51, (MR_Integer) 2))));
          LaterOldNew_28 = ((MR_Word) ((MR_hl_field(1, CseState_51, (MR_Integer) 3))));
          succeeded = (LaterOldNew_28 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        MR_Word VarInst0_30;
        MR_Word ModuleInfo_54;

        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_4, Var_17, &VarInst0_30);
        ModuleInfo_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_33_33, (MR_Integer) 0))));
        succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(ModuleInfo_54, VarInst0_30);
        if (succeeded)
        {
          succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_54, VarInst0_30);
          if (succeeded)
            succeeded = MR_TRUE;
          else
          {
            MR_Word FunctorBoundInsts_55;
            MR_Word MayPullConsId_56;

            succeeded = check_hlds__inst_test__inst_is_bound_to_functors_3_p_0(ModuleInfo_54, VarInst0_30, &FunctorBoundInsts_55);
            if (succeeded)
            {
              check_hlds__cse_detection__compute_may_pull_cons_id_4_p_0(ModuleInfo_54, FunctorBoundInsts_55, ConsId_26, &MayPullConsId_56);
              succeeded = (MayPullConsId_56 == (MR_Integer) 0);
            }
          }
        }
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_CseInfo_34_34;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_49;

          check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(UnifyGoal_25, FirstOldNew_27, LaterOldNew_28, STATE_VARIABLE_CseInfo_33_33, &STATE_VARIABLE_CseInfo_34_34);
          {
            Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Var_39, 1) = ((MR_Box) (Goals_29));
          }
          {
            Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_38, 0) = ((MR_Box) (Var_39));
            MR_hl_field(0, Var_38, 1) = ((MR_Box) (HeadVar__3_3));
          }
          {
            Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
            MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_36, 0) = ((MR_Box) (UnifyGoal_25));
            MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_37));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_7 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, base, 2) = ((MR_Box) (Var_36));
          }
          Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_34_34, (MR_Integer) 0))));
          Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_34_34, (MR_Integer) 1))));
          Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_34_34, (MR_Integer) 2))));
          Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_34_34, (MR_Integer) 4))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_CseInfo_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_45));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_46));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_47));
            MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_49));
          }
        }
        else
        {
          MR_Word STATE_VARIABLE_CseInfo_44_44;
          MR_Word UnifyGoalInfo_62 = ((MR_Word) ((MR_hl_field(0, UnifyGoal_25, (MR_Integer) 1))));
          MR_Word Context_63;
          MR_Word NoPullContexts0_64;
          MR_Word NoPullContexts_65;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_STATE_VARIABLE_CseInfo_0_5;

          Context_63 = hlds__hlds_goal__goal_info_get_context_1_f_0(UnifyGoalInfo_62);
          Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 0))));
          Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 1))));
          Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 2))));
          Var_69 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 3))) & (MR_Integer) 1);
          NoPullContexts0_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 4))));
          {
            NoPullContexts_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NoPullContexts_65, 0) = ((MR_Box) (Context_63));
            MR_hl_field(1, NoPullContexts_65, 1) = ((MR_Box) (NoPullContexts0_64));
          }
          {
            STATE_VARIABLE_CseInfo_44_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_CseInfo_44_44, 0) = ((MR_Box) (Var_66));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_44_44, 1) = ((MR_Box) (Var_67));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_44_44, 2) = ((MR_Box) (Var_68));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_44_44, 3) = (MR_Box) ((MR_Unsigned) (Var_69));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_44_44, 4) = ((MR_Box) (NoPullContexts_65));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Vars_18;
          next_value_of_STATE_VARIABLE_CseInfo_0_5 = STATE_VARIABLE_CseInfo_44_44;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_CseInfo_0_5 = next_value_of_STATE_VARIABLE_CseInfo_0_5;
          continue;
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Vars_18;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_arms_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_CseInfo_0_3,
  MR_Word * STATE_VARIABLE_CseInfo_4,
  MR_Word InstMap0_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CseInfo_4 = STATE_VARIABLE_CseInfo_0_3;
  }
  else
  {
    MR_Word Case0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_12;
    MR_Word Cases_13;
    MR_Word MainConsId_16 = ((MR_Word) ((MR_hl_field(0, Case0_10, (MR_Integer) 0))));
    MR_Word OtherConsIds_17 = ((MR_Word) ((MR_hl_field(0, Case0_10, (MR_Integer) 1))));
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(0, Case0_10, (MR_Integer) 2))));
    MR_Word Goal_19;
    MR_Word STATE_VARIABLE_CseInfo_22_22;
    MR_Word _InstMap_23;

    check_hlds__cse_detection__detect_cse_in_goal_update_instmap_6_p_0(Goal0_18, &Goal_19, STATE_VARIABLE_CseInfo_0_3, &STATE_VARIABLE_CseInfo_22_22, InstMap0_5, &_InstMap_23);
    {
      Case_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_12, 0) = ((MR_Box) (MainConsId_16));
      MR_hl_field(0, Case_12, 1) = ((MR_Box) (OtherConsIds_17));
      MR_hl_field(0, Case_12, 2) = ((MR_Box) (Goal_19));
    }
    check_hlds__cse_detection__detect_cse_in_cases_arms_5_p_0(Cases0_11, &Cases_13, STATE_VARIABLE_CseInfo_22_22, STATE_VARIABLE_CseInfo_4, InstMap0_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_13));
    }
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_independent_goals_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_CseInfo_0_3,
  MR_Word * STATE_VARIABLE_CseInfo_4,
  MR_Word InstMap0_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CseInfo_4 = STATE_VARIABLE_CseInfo_0_3;
  }
  else
  {
    MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_12;
    MR_Word Goals_13;
    MR_Word STATE_VARIABLE_CseInfo_18_18;
    MR_Word _InstMap_19;

    check_hlds__cse_detection__detect_cse_in_goal_update_instmap_6_p_0(Goal0_10, &Goal_12, STATE_VARIABLE_CseInfo_0_3, &STATE_VARIABLE_CseInfo_18_18, InstMap0_5, &_InstMap_19);
    check_hlds__cse_detection__detect_cse_in_independent_goals_5_p_0(Goals0_11, &Goals_13, STATE_VARIABLE_CseInfo_18_18, STATE_VARIABLE_CseInfo_4, InstMap0_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_13));
    }
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_conj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_CseInfo_0_3,
  MR_Word * STATE_VARIABLE_CseInfo_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CseInfo_4 = STATE_VARIABLE_CseInfo_0_3;
  }
  else
  {
    MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_18;
    MR_Word TailGoals_19;
    MR_Word STATE_VARIABLE_CseInfo_26_26;
    MR_Word STATE_VARIABLE_InstMap_27_27;
    MR_Word ConjGoals_21;
    MR_Word InnerConjType_20;
    MR_Word Var_29;

    check_hlds__cse_detection__detect_cse_in_goal_update_instmap_6_p_0(Goal0_12, &Goal_18, STATE_VARIABLE_CseInfo_0_3, &STATE_VARIABLE_CseInfo_26_26, HeadVar__6_6, &STATE_VARIABLE_InstMap_27_27);
    check_hlds__cse_detection__detect_cse_in_conj_6_p_0(Goals0_13, &TailGoals_19, STATE_VARIABLE_CseInfo_26_26, STATE_VARIABLE_CseInfo_4, HeadVar__5_5, STATE_VARIABLE_InstMap_27_27);
    Var_29 = ((MR_Word) ((MR_hl_field(0, Goal_18, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) Var_29)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_29, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      InnerConjType_20 = ((MR_Unsigned) ((MR_hl_field(3, Var_29, (MR_Integer) 1))) & (MR_Integer) 1);
      ConjGoals_21 = ((MR_Word) ((MR_hl_field(3, Var_29, (MR_Integer) 2))));
      succeeded = (HeadVar__5_5 == InnerConjType_20);
    }
    if (succeeded)
      *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ConjGoals_21, TailGoals_19);
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailGoals_19));
      }
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_update_instmap_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_CseInfo_0_118,
  MR_Word * STATE_VARIABLE_CseInfo_119,
  MR_Word InstMap0_10,
  MR_Word * InstMap_11)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 0))));
  MR_Word GoalInfo_13 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 1))));
  MR_Word GoalExpr_32;
  MR_Word InstMapDelta_117;

  switch (MR_tag((MR_Word) GoalExpr0_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_54 = (MR_Word) ((MR_Word) (GoalExpr0_12));
        MR_Word SubGoal_55;

        check_hlds__cse_detection__detect_cse_in_goal_5_p_0(SubGoal0_54, &SubGoal_55, STATE_VARIABLE_CseInfo_0_118, STATE_VARIABLE_CseInfo_119, InstMap0_10);
        GoalExpr_32 = (MR_Word) ((MR_Word) (SubGoal_55));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHS_33 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_12, (MR_Integer) 0))));
        MR_Word RHS0_34 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_12, (MR_Integer) 1))));
        MR_Word Mode_35 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_12, (MR_Integer) 2))));
        MR_Word Unify_36 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_12, (MR_Integer) 3))));
        MR_Word UnifyContext_37 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_12, (MR_Integer) 4))));
        MR_Word RHS_49;

        switch (MR_tag((MR_Word) RHS0_34)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              RHS_49 = RHS0_34;
              *STATE_VARIABLE_CseInfo_119 = STATE_VARIABLE_CseInfo_0_118;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word NonLocalVars_42 = ((MR_Word) ((MR_hl_field(2, RHS0_34, (MR_Integer) 2))));
              MR_Word VarsModes_43 = ((MR_Word) ((MR_hl_field(2, RHS0_34, (MR_Integer) 3))));
              MR_Word Det_44 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_34, (MR_Integer) 4))) & (MR_Integer) 7);
              MR_Word LambdaGoal0_45 = ((MR_Word) ((MR_hl_field(2, RHS0_34, (MR_Integer) 5))));
              MR_Word ModuleInfo_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_118, (MR_Integer) 0))));
              MR_Word InstMap1_47;
              MR_Word LambdaGoal_48;
              MR_Unsigned packed_word_8 = (MR_Unsigned) ((MR_hl_field(2, RHS0_34, (MR_Integer) 0)));

              hlds__instmap__pre_lambda_update_4_p_0(ModuleInfo_46, VarsModes_43, InstMap0_10, &InstMap1_47);
              check_hlds__cse_detection__detect_cse_in_goal_5_p_0(LambdaGoal0_45, &LambdaGoal_48, STATE_VARIABLE_CseInfo_0_118, STATE_VARIABLE_CseInfo_119, InstMap1_47);
              {
                RHS_49 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, RHS_49, 0) = (MR_Box) (packed_word_8);
                MR_hl_field(2, RHS_49, 1) = NULL;
                MR_hl_field(2, RHS_49, 2) = ((MR_Box) (NonLocalVars_42));
                MR_hl_field(2, RHS_49, 3) = ((MR_Box) (VarsModes_43));
                MR_hl_field(2, RHS_49, 4) = (MR_Box) ((MR_Unsigned) (Det_44));
                MR_hl_field(2, RHS_49, 5) = ((MR_Box) (LambdaGoal_48));
              }
            }
            break;
        }
        {
          GoalExpr_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, GoalExpr_32, 0) = ((MR_Box) (LHS_33));
          MR_hl_field(1, GoalExpr_32, 1) = ((MR_Box) (RHS_49));
          MR_hl_field(1, GoalExpr_32, 2) = ((MR_Box) (Mode_35));
          MR_hl_field(1, GoalExpr_32, 3) = ((MR_Box) (Unify_36));
          MR_hl_field(1, GoalExpr_32, 4) = ((MR_Box) (UnifyContext_37));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        GoalExpr_32 = GoalExpr0_12;
        *STATE_VARIABLE_CseInfo_119 = STATE_VARIABLE_CseInfo_0_118;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            GoalExpr_32 = GoalExpr0_12;
            *STATE_VARIABLE_CseInfo_119 = STATE_VARIABLE_CseInfo_0_118;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_90 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_91 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word Goals_92;

            check_hlds__cse_detection__detect_cse_in_conj_6_p_0(Goals0_91, &Goals_92, STATE_VARIABLE_CseInfo_0_118, STATE_VARIABLE_CseInfo_119, ConjType_90, InstMap0_10);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_32, 1) = (MR_Box) ((MR_Unsigned) (ConjType_90));
              MR_hl_field(3, GoalExpr_32, 2) = ((MR_Box) (Goals_92));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_155 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));

            if ((Goals0_155 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              GoalExpr_32 = (MR_Word) (MR_mkword(3, &check_hlds__cse_detection_scalar_common_1[6]));
              *STATE_VARIABLE_CseInfo_119 = STATE_VARIABLE_CseInfo_0_118;
            }
            else
            {
              MR_Word NonLocals_95;
              MR_Word NonLocalsList_96;

              NonLocals_95 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_13);
              NonLocalsList_96 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_95);
              check_hlds__cse_detection__detect_cse_in_disj_7_p_0(NonLocalsList_96, Goals0_155, GoalInfo_13, InstMap0_10, STATE_VARIABLE_CseInfo_0_118, STATE_VARIABLE_CseInfo_119, &GoalExpr_32);
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_97 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word CanFail_156 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_157 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 3))));
            MR_Word NonLocals_158;
            MR_Word NonLocalsList_159;

            NonLocals_158 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_13);
            NonLocalsList_159 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_158);
            check_hlds__cse_detection__detect_cse_in_cases_9_p_0(NonLocalsList_159, Var_97, CanFail_156, Cases0_157, GoalInfo_13, InstMap0_10, STATE_VARIABLE_CseInfo_0_118, STATE_VARIABLE_CseInfo_119, &GoalExpr_32);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason0_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word SubGoal0_153 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) Reason0_56)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word SubGoal_151;

                  check_hlds__cse_detection__detect_cse_in_goal_5_p_0(SubGoal0_153, &SubGoal_151, STATE_VARIABLE_CseInfo_0_118, STATE_VARIABLE_CseInfo_119, InstMap0_10);
                  {
                    GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (Reason0_56));
                    MR_hl_field(3, GoalExpr_32, 2) = ((MR_Box) (SubGoal_151));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason0_56, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                    {
                      MR_Word SubGoal_151;

                      check_hlds__cse_detection__detect_cse_in_goal_5_p_0(SubGoal0_153, &SubGoal_151, STATE_VARIABLE_CseInfo_0_118, STATE_VARIABLE_CseInfo_119, InstMap0_10);
                      {
                        GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (Reason0_56));
                        MR_hl_field(3, GoalExpr_32, 2) = ((MR_Box) (SubGoal_151));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word SubGoalExpr0_64 = ((MR_Word) ((MR_hl_field(0, SubGoal0_153, (MR_Integer) 0))));
                      MR_Word SubGoalInfo0_65 = ((MR_Word) ((MR_hl_field(0, SubGoal0_153, (MR_Integer) 1))));
                      MR_Word SwitchVar_66;
                      MR_Word CanFail_67;
                      MR_Word Cases0_68;

                      succeeded = ((((MR_tag((MR_Word) SubGoalExpr0_64)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubGoalExpr0_64, (MR_Integer) 0)))) == (MR_Integer) 4)));
                      if (succeeded)
                      {
                        SwitchVar_66 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr0_64, (MR_Integer) 1))));
                        CanFail_67 = ((MR_Unsigned) ((MR_hl_field(3, SubGoalExpr0_64, (MR_Integer) 2))) & (MR_Integer) 1);
                        Cases0_68 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr0_64, (MR_Integer) 3))));
                        {
                          MR_Word Cases_69;
                          MR_Word SubGoalExpr_70;
                          MR_Word SubGoal_147;

                          check_hlds__cse_detection__detect_cse_in_cases_arms_5_p_0(Cases0_68, &Cases_69, STATE_VARIABLE_CseInfo_0_118, STATE_VARIABLE_CseInfo_119, InstMap0_10);
                          {
                            SubGoalExpr_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, SubGoalExpr_70, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                            MR_hl_field(3, SubGoalExpr_70, 1) = ((MR_Box) (SwitchVar_66));
                            MR_hl_field(3, SubGoalExpr_70, 2) = (MR_Box) ((MR_Unsigned) (CanFail_67));
                            MR_hl_field(3, SubGoalExpr_70, 3) = ((MR_Box) (Cases_69));
                          }
                          {
                            SubGoal_147 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, SubGoal_147, 0) = ((MR_Box) (SubGoalExpr_70));
                            MR_hl_field(0, SubGoal_147, 1) = ((MR_Box) (SubGoalInfo0_65));
                          }
                          {
                            GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                            MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (Reason0_56));
                            MR_hl_field(3, GoalExpr_32, 2) = ((MR_Box) (SubGoal_147));
                          }
                        }
                      }
                      else
                      {
                        MR_Word SubGoal_148;

                        check_hlds__cse_detection__detect_cse_in_goal_5_p_0(SubGoal0_153, &SubGoal_148, STATE_VARIABLE_CseInfo_0_118, STATE_VARIABLE_CseInfo_119, InstMap0_10);
                        {
                          GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (Reason0_56));
                          MR_hl_field(3, GoalExpr_32, 2) = ((MR_Box) (SubGoal_148));
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word FGTReason_58 = ((MR_Unsigned) ((MR_hl_field(3, Reason0_56, (MR_Integer) 2))) & (MR_Integer) 3);

                      switch (FGTReason_58) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            GoalExpr_32 = GoalExpr0_12;
                            *STATE_VARIABLE_CseInfo_119 = STATE_VARIABLE_CseInfo_0_118;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word OldRedo_59 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_118, (MR_Integer) 3))) & (MR_Integer) 1);
                            MR_Word SubGoalRedo_60;
                            MR_Word STATE_VARIABLE_CseInfo_122_122;
                            MR_Word STATE_VARIABLE_CseInfo_124_124;
                            MR_Word Var_126;
                            MR_Word SubGoal_143;
                            MR_Word Var_168 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_118, (MR_Integer) 0))));
                            MR_Word Var_169 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_118, (MR_Integer) 1))));
                            MR_Word Var_170 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_118, (MR_Integer) 2))));
                            MR_Word Var_171 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_118, (MR_Integer) 4))));
                            MR_Word Var_181;
                            MR_Word Var_182;
                            MR_Word Var_183;
                            MR_Word Var_185;

                            {
                              STATE_VARIABLE_CseInfo_122_122 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, STATE_VARIABLE_CseInfo_122_122, 0) = ((MR_Box) (Var_168));
                              MR_hl_field(0, STATE_VARIABLE_CseInfo_122_122, 1) = ((MR_Box) (Var_169));
                              MR_hl_field(0, STATE_VARIABLE_CseInfo_122_122, 2) = ((MR_Box) (Var_170));
                              MR_hl_field(0, STATE_VARIABLE_CseInfo_122_122, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                              MR_hl_field(0, STATE_VARIABLE_CseInfo_122_122, 4) = ((MR_Box) (Var_171));
                            }
                            check_hlds__cse_detection__detect_cse_in_goal_5_p_0(SubGoal0_153, &SubGoal_143, STATE_VARIABLE_CseInfo_122_122, &STATE_VARIABLE_CseInfo_124_124, InstMap0_10);
                            SubGoalRedo_60 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_124_124, (MR_Integer) 3))) & (MR_Integer) 1);
                            Var_126 = mercury__bool__or_2_f_0(OldRedo_59, SubGoalRedo_60);
                            Var_181 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_124_124, (MR_Integer) 0))));
                            Var_182 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_124_124, (MR_Integer) 1))));
                            Var_183 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_124_124, (MR_Integer) 2))));
                            Var_185 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_124_124, (MR_Integer) 4))));
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                              *STATE_VARIABLE_CseInfo_119 = base;
                              MR_hl_field(0, base, 0) = ((MR_Box) (Var_181));
                              MR_hl_field(0, base, 1) = ((MR_Box) (Var_182));
                              MR_hl_field(0, base, 2) = ((MR_Box) (Var_183));
                              MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_126));
                              MR_hl_field(0, base, 4) = ((MR_Box) (Var_185));
                            }
                            switch (SubGoalRedo_60) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                                  MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (Reason0_56));
                                  MR_hl_field(3, GoalExpr_32, 2) = ((MR_Box) (SubGoal_143));
                                }
                                break;
                              case (MR_Integer) 1:
                                GoalExpr_32 = ((MR_Word) ((MR_hl_field(0, SubGoal_143, (MR_Integer) 0))));
                                break;
                            }
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_goal_update_instmap\'/6", (MR_String) "from_ground_term_initial");
                            return;
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            MR_Word SubGoal_144;

                            check_hlds__cse_detection__detect_cse_in_goal_5_p_0(SubGoal0_153, &SubGoal_144, STATE_VARIABLE_CseInfo_0_118, STATE_VARIABLE_CseInfo_119, InstMap0_10);
                            {
                              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                              MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (Reason0_56));
                              MR_hl_field(3, GoalExpr_32, 2) = ((MR_Box) (SubGoal_144));
                            }
                          }
                          break;
                      }
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_98 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Cond0_99 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word Then0_100 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 3))));
            MR_Word Else0_101 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 4))));
            MR_Word NonLocals_160;
            MR_Word NonLocalsList_161;

            NonLocals_160 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_13);
            NonLocalsList_161 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_160);
            check_hlds__cse_detection__detect_cse_in_ite_10_p_0(NonLocalsList_161, Vars_98, Cond0_99, Then0_100, Else0_101, GoalInfo_13, InstMap0_10, STATE_VARIABLE_CseInfo_0_118, STATE_VARIABLE_CseInfo_119, &GoalExpr_32);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_102 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word ShortHand_112;

            switch (MR_tag((MR_Word) ShortHand0_102)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_goal_update_instmap\'/6", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word AtomicGoalType_103 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_102, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_104 = ((MR_Word) ((MR_hl_field(1, ShortHand0_102, (MR_Integer) 1))));
                  MR_Word Inner_105 = ((MR_Word) ((MR_hl_field(1, ShortHand0_102, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_106 = ((MR_Word) ((MR_hl_field(1, ShortHand0_102, (MR_Integer) 3))));
                  MR_Word MainGoal0_107 = ((MR_Word) ((MR_hl_field(1, ShortHand0_102, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_108 = ((MR_Word) ((MR_hl_field(1, ShortHand0_102, (MR_Integer) 5))));
                  MR_Word OrElseInners_109 = ((MR_Word) ((MR_hl_field(1, ShortHand0_102, (MR_Integer) 6))));
                  MR_Word MainGoal_110;
                  MR_Word OrElseGoals_111;
                  MR_Word STATE_VARIABLE_CseInfo_138_138;

                  check_hlds__cse_detection__detect_cse_in_goal_5_p_0(MainGoal0_107, &MainGoal_110, STATE_VARIABLE_CseInfo_0_118, &STATE_VARIABLE_CseInfo_138_138, InstMap0_10);
                  check_hlds__cse_detection__detect_cse_in_independent_goals_5_p_0(OrElseGoals0_108, &OrElseGoals_111, STATE_VARIABLE_CseInfo_138_138, STATE_VARIABLE_CseInfo_119, InstMap0_10);
                  {
                    ShortHand_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_112, 0) = (MR_Box) ((MR_Unsigned) (AtomicGoalType_103));
                    MR_hl_field(1, ShortHand_112, 1) = ((MR_Box) (Outer_104));
                    MR_hl_field(1, ShortHand_112, 2) = ((MR_Box) (Inner_105));
                    MR_hl_field(1, ShortHand_112, 3) = ((MR_Box) (MaybeOutputVars_106));
                    MR_hl_field(1, ShortHand_112, 4) = ((MR_Box) (MainGoal_110));
                    MR_hl_field(1, ShortHand_112, 5) = ((MR_Box) (OrElseGoals_111));
                    MR_hl_field(1, ShortHand_112, 6) = ((MR_Box) (OrElseInners_109));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_115 = ((MR_Word) ((MR_hl_field(2, ShortHand0_102, (MR_Integer) 0))));
                  MR_Word ResultVar_116 = ((MR_Word) ((MR_hl_field(2, ShortHand0_102, (MR_Integer) 1))));
                  MR_Word SubGoal0_162 = ((MR_Word) ((MR_hl_field(2, ShortHand0_102, (MR_Integer) 2))));
                  MR_Word SubGoal_163;

                  check_hlds__cse_detection__detect_cse_in_goal_5_p_0(SubGoal0_162, &SubGoal_163, STATE_VARIABLE_CseInfo_0_118, STATE_VARIABLE_CseInfo_119, InstMap0_10);
                  {
                    ShortHand_112 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_112, 0) = ((MR_Box) (MaybeIO_115));
                    MR_hl_field(2, ShortHand_112, 1) = ((MR_Box) (ResultVar_116));
                    MR_hl_field(2, ShortHand_112, 2) = ((MR_Box) (SubGoal_163));
                  }
                }
                break;
            }
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (ShortHand_112));
            }
          }
          break;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_32));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_13));
  }
  InstMapDelta_117 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_13);
  hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_117, InstMap0_10, InstMap_11);
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word STATE_VARIABLE_CseInfo_0_11,
  MR_Word * STATE_VARIABLE_CseInfo_12,
  MR_Word InstMap0_9)
{
  MR_Word _InstMap_10;

  check_hlds__cse_detection__detect_cse_in_goal_update_instmap_6_p_0(Goal0_6, Goal_7, STATE_VARIABLE_CseInfo_0_11, STATE_VARIABLE_CseInfo_12, InstMap0_9, &_InstMap_10);
}

static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Goals_10;
  MR_Word conv1_STATE_VARIABLE_CseState_24;
  MR_Word conv0_STATE_VARIABLE_CseInfo_26;

  check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Goals_10, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_CseState_24, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_CseInfo_26);
  *wrapper_arg_3 = ((MR_Box) (conv2_Goals_10));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_CseState_24));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_CseInfo_26));
}

static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CseState_0_3,
  MR_Word * STATE_VARIABLE_CseState_4,
  MR_Word STATE_VARIABLE_CseInfo_0_5,
  MR_Word * STATE_VARIABLE_CseInfo_6,
  MR_Word * HeadVar__7_7)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CseInfo_6 = STATE_VARIABLE_CseInfo_0_5;
    *STATE_VARIABLE_CseState_4 = STATE_VARIABLE_CseState_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Case0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_20;
    MR_Word Cases_21;
    MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(0, Case0_15, (MR_Integer) 0))));
    MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(0, Case0_15, (MR_Integer) 1))));
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(0, Case0_15, (MR_Integer) 2))));
    MR_Word Goal_25;
    MR_Word STATE_VARIABLE_CseState_35_35;
    MR_Word STATE_VARIABLE_CseInfo_36_36;
    MR_Word Var_47;
    MR_Box conv4_STATE_VARIABLE_CseState_35_35;
    MR_Box conv3_STATE_VARIABLE_CseInfo_36_36;

    check_hlds__switch_detection__find_bind_var_9_p_0((MR_Word) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0), (MR_Word) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0), HeadVar__2_2, (MR_Word) (&check_hlds__cse_detection_scalar_common_2[5]), Goal0_24, &Goal_25, ((MR_Box) (STATE_VARIABLE_CseState_0_3)), &conv4_STATE_VARIABLE_CseState_35_35, ((MR_Box) (STATE_VARIABLE_CseInfo_0_5)), &conv3_STATE_VARIABLE_CseInfo_36_36, &Var_47);
    STATE_VARIABLE_CseState_35_35 = ((MR_Word) (conv4_STATE_VARIABLE_CseState_35_35));
    STATE_VARIABLE_CseInfo_36_36 = ((MR_Word) (conv3_STATE_VARIABLE_CseInfo_36_36));
    succeeded = ((MR_Integer) 0 == Var_47);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_CseState_35_35)) == (MR_Integer) 1);
      if (succeeded)
      {
        {
          Case_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Case_20, 0) = ((MR_Box) (MainConsId_22));
          MR_hl_field(0, Case_20, 1) = ((MR_Box) (OtherConsIds_23));
          MR_hl_field(0, Case_20, 2) = ((MR_Box) (Goal_25));
        }
        succeeded = check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(Cases0_16, HeadVar__2_2, STATE_VARIABLE_CseState_35_35, STATE_VARIABLE_CseState_4, STATE_VARIABLE_CseInfo_36_36, STATE_VARIABLE_CseInfo_6, &Cases_21);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__7_7 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Case_20));
            MR_hl_field(1, base, 1) = ((MR_Box) (Cases_21));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__cse_detection__compute_may_pull_cons_id_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__cse_detection__compute_may_pull_cons_id_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Integer) 1;
    else
    {
      MR_Word BoundInst_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundInsts_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word InstConsId_12 = ((MR_Word) ((MR_hl_field(0, BoundInst_8, (MR_Integer) 0))));
      MR_Word ArgInsts_13 = ((MR_Word) ((MR_hl_field(0, BoundInst_8, (MR_Integer) 1))));

      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(HeadVar__3_3, InstConsId_12);
      if (!(succeeded))
      {
        MR_Word SymName_14;
        MR_Integer Arity_15;
        MR_Word InstSymName_17;
        MR_Integer InstArity_18;

        succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          SymName_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
          Arity_15 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
          succeeded = ((((MR_tag((MR_Word) InstConsId_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InstConsId_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            InstSymName_17 = ((MR_Word) ((MR_hl_field(3, InstConsId_12, (MR_Integer) 1))));
            InstArity_18 = ((MR_Integer) ((MR_hl_field(3, InstConsId_12, (MR_Integer) 2))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_14, InstSymName_17);
            if (succeeded)
              succeeded = (Arity_15 == InstArity_18);
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_20;

        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_20, 0) = ((MR_Box) (&check_hlds__cse_detection_scalar_common_6[0]));
          MR_hl_field(0, Var_20, 1) = ((MR_Box) (check_hlds__cse_detection__compute_may_pull_cons_id_4_p_0_1));
          MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_20, 3) = ((MR_Box) (HeadVar__1_1));
        }
        succeeded = mercury__list__all_true_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_20, ArgInsts_13);
        if (succeeded)
          *HeadVar__4_4 = (MR_Integer) 0;
        else
          *HeadVar__4_4 = (MR_Integer) 1;
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = BoundInsts_9;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Renaming_18;

  check_hlds__cse_detection__find_merged_tvars_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Renaming_18);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Renaming_18));
}

static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_NewTvarMap_15;

  check_hlds__cse_detection__find_type_info_locn_tvar_map_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_NewTvarMap_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_NewTvarMap_15));
}

static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(
  MR_Word UnifyGoal_6,
  MR_Word FirstOldNew_7,
  MR_Word LaterOldNew_8,
  MR_Word STATE_VARIABLE_CseInfo_0_25,
  MR_Word * STATE_VARIABLE_CseInfo_26)
{
  MR_bool succeeded;
  MR_Word UnifyInfo_13;
  MR_Word Var_16;
  MR_Word ConsId_17;
  MR_Word ModuleInfo_22;
  MR_Word VarTable_23;
  MR_Word Type_24;
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, UnifyGoal_6, (MR_Integer) 0))));

  succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 1);
  if (succeeded)
  {
    UnifyInfo_13 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 3))));
    succeeded = ((MR_tag((MR_Word) UnifyInfo_13)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(1, UnifyInfo_13, (MR_Integer) 0))));
      ConsId_17 = ((MR_Word) ((MR_hl_field(1, UnifyInfo_13, (MR_Integer) 1))));
      ModuleInfo_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 0))));
      VarTable_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 1))));
      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_23, Var_16, &Type_24);
      succeeded = check_hlds__type_util__cons_id_is_existq_cons_3_p_0(ModuleInfo_22, Type_24, ConsId_17);
    }
  }
  if (succeeded)
  {
    MR_Word LaterOldNew_36;
    MR_Word FirstOldNewMap_37;
    MR_Word LaterOldNewMap_38;
    MR_Word RttiVarMaps0_39;
    MR_Word VarTable0_40;
    MR_Word TvarsList_41;
    MR_Word NewTvarMap_42;
    MR_Word Renaming_43;
    MR_Word OldNew_44;
    MR_Word OldNewMap_45;
    MR_Word RttiVarMaps_46;
    MR_Word VarTable_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Box conv1_NewTvarMap_42;
    MR_Box conv3_Renaming_43;

    mercury__list__condense_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_2[1]), LaterOldNew_8, &LaterOldNew_36);
    mercury__map__from_assoc_list_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), FirstOldNew_7, &FirstOldNewMap_37);
    mercury__map__from_assoc_list_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), LaterOldNew_36, &LaterOldNewMap_38);
    VarTable0_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 1))));
    RttiVarMaps0_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 2))));
    hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(RttiVarMaps0_39, &TvarsList_41);
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_48, 0) = ((MR_Box) (&check_hlds__cse_detection_scalar_common_4[0]));
      MR_hl_field(0, Var_48, 1) = ((MR_Box) (check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_1));
      MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_48, 3) = ((MR_Box) (RttiVarMaps0_39));
      MR_hl_field(0, Var_48, 4) = ((MR_Box) (FirstOldNewMap_37));
    }
    Var_49 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]));
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]), (MR_Word) (&check_hlds__cse_detection_scalar_common_2[2]), Var_48, TvarsList_41, ((MR_Box) (Var_49)), &conv1_NewTvarMap_42);
    NewTvarMap_42 = ((MR_Word) (conv1_NewTvarMap_42));
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_50, 0) = ((MR_Box) (&check_hlds__cse_detection_scalar_common_5[0]));
      MR_hl_field(0, Var_50, 1) = ((MR_Box) (check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_2));
      MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_50, 3) = ((MR_Box) (RttiVarMaps0_39));
      MR_hl_field(0, Var_50, 4) = ((MR_Box) (LaterOldNewMap_38));
      MR_hl_field(0, Var_50, 5) = ((MR_Box) (NewTvarMap_42));
    }
    Var_51 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]));
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]), (MR_Word) (&check_hlds__cse_detection_scalar_common_2[3]), Var_50, TvarsList_41, ((MR_Box) (Var_51)), &conv3_Renaming_43);
    Renaming_43 = ((MR_Word) (conv3_Renaming_43));
    mercury__list__append_3_p_1((MR_Word) (&check_hlds__cse_detection_scalar_common_2[1]), FirstOldNew_7, LaterOldNew_36, &OldNew_44);
    mercury__map__from_assoc_list_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), OldNew_44, &OldNewMap_45);
    Var_52 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
    hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(Renaming_43, Var_52, OldNewMap_45, RttiVarMaps0_39, &RttiVarMaps_46);
    parse_tree__var_table__apply_variable_renaming_to_var_table_3_p_0(Renaming_43, VarTable0_40, &VarTable_47);
    Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 0))));
    Var_59 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 3))) & (MR_Integer) 1);
    Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CseInfo_26 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_56));
      MR_hl_field(0, base, 1) = ((MR_Box) (VarTable_47));
      MR_hl_field(0, base, 2) = ((MR_Box) (RttiVarMaps_46));
      MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_59));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_60));
    }
  }
  else
    *STATE_VARIABLE_CseInfo_26 = STATE_VARIABLE_CseInfo_0_25;
}

static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Goals_10;
  MR_Word conv1_STATE_VARIABLE_CseState_24;
  MR_Word conv0_STATE_VARIABLE_CseInfo_26;

  check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Goals_10, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_CseState_24, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_CseInfo_26);
  *wrapper_arg_3 = ((MR_Box) (conv2_Goals_10));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_CseState_24));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_CseInfo_26));
}

static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CseState_0_3,
  MR_Word * STATE_VARIABLE_CseState_4,
  MR_Word STATE_VARIABLE_CseInfo_0_5,
  MR_Word * STATE_VARIABLE_CseInfo_6,
  MR_Word * HeadVar__7_7)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CseInfo_6 = STATE_VARIABLE_CseInfo_0_5;
    *STATE_VARIABLE_CseState_4 = STATE_VARIABLE_CseState_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_20;
    MR_Word Goals_21;
    MR_Word STATE_VARIABLE_CseState_31_31;
    MR_Word STATE_VARIABLE_CseInfo_32_32;
    MR_Word Var_43;
    MR_Box conv4_STATE_VARIABLE_CseState_31_31;
    MR_Box conv3_STATE_VARIABLE_CseInfo_32_32;

    check_hlds__switch_detection__find_bind_var_9_p_0((MR_Word) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0), (MR_Word) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0), HeadVar__2_2, (MR_Word) (&check_hlds__cse_detection_scalar_common_2[4]), Goal0_15, &Goal_20, ((MR_Box) (STATE_VARIABLE_CseState_0_3)), &conv4_STATE_VARIABLE_CseState_31_31, ((MR_Box) (STATE_VARIABLE_CseInfo_0_5)), &conv3_STATE_VARIABLE_CseInfo_32_32, &Var_43);
    STATE_VARIABLE_CseState_31_31 = ((MR_Word) (conv4_STATE_VARIABLE_CseState_31_31));
    STATE_VARIABLE_CseInfo_32_32 = ((MR_Word) (conv3_STATE_VARIABLE_CseInfo_32_32));
    succeeded = ((MR_Integer) 0 == Var_43);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_CseState_31_31)) == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = check_hlds__cse_detection__common_deconstruct_2_7_p_0(Goals0_16, HeadVar__2_2, STATE_VARIABLE_CseState_31_31, STATE_VARIABLE_CseState_4, STATE_VARIABLE_CseInfo_32_32, STATE_VARIABLE_CseInfo_6, &Goals_21);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__7_7 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Goal_20));
            MR_hl_field(1, base, 1) = ((MR_Box) (Goals_21));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__cse_detection____Unify____cse_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__cse_detection____Compare____cse_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__cse_detection____Unify____cse_state_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__cse_detection____Compare____cse_state_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____may_pull_cons_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__cse_detection____Unify____may_pull_cons_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__cse_detection____Compare____may_pull_cons_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__cse_detection____Compare____may_pull_cons_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__cse_detection__init(void)
{
}

void mercury__check_hlds__cse_detection__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0);
	MR_register_type_ctor_info(&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0);
	MR_register_type_ctor_info(&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_may_pull_cons_id_0);
}

void mercury__check_hlds__cse_detection__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__cse_detection__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.cse_detection.
