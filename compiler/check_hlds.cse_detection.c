/*
** Automatically generated from `cse_detection.m'
** by the Mercury compiler,
** version rotd-2020-10-05
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.set_of_var.mih"
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

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1term__type_ctor_info_context_0;

static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_info_0_0[6];

static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_info_0_0[6];

static const MR_DuArgLocn check_hlds__cse_detection__check_hlds__cse_detection__field_locns_cse_info_0_0[6];

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

static const MR_EnumFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__enum_value_ordered_may_pull_cons_id_0[2];

static const MR_EnumFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__enum_name_ordered_may_pull_cons_id_0[2];

static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_may_pull_cons_id_0[2];

static void MR_CALL 
check_hlds__cse_detection____Compare____may_pull_cons_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____may_pull_cons_id_0_0(
  MR_Word HeadVar__2_1,
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

static MR_bool MR_CALL 
check_hlds__cse_detection__find_similar_deconstruct_5_p_0(
  MR_Word HoistedUnifyGoal_6,
  MR_Word OldUnifyGoal_7,
  MR_Word Context_8,
  MR_Word * OldHoistedVars_9,
  MR_Word * Replacements_10);

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
check_hlds__cse_detection__detect_cse_in_preds_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_procs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_proc_pass_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word * Redo_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_36,
  MR_Word * STATE_VARIABLE_ProcInfo_37);

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
  MR_Word STATE_VARIABLE_CseInfo_0_117,
  MR_Word * STATE_VARIABLE_CseInfo_118,
  MR_Word InstMap0_10,
  MR_Word * InstMap_11);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word STATE_VARIABLE_CseInfo_0_11,
  MR_Word * STATE_VARIABLE_CseInfo_12,
  MR_Word InstMap0_9);

static MR_bool MR_CALL 
check_hlds__cse_detection__may_pull_lhs_inst_cons_id_3_p_0(
  MR_Word CseInfo_4,
  MR_Word VarInst_5,
  MR_Word ConsId_6);

static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_9_p_0(
  MR_Word Goals0_10,
  MR_Word Var_11,
  MR_Word STATE_VARIABLE_CseInfo_0_22,
  MR_Word * STATE_VARIABLE_CseInfo_23,
  MR_Word * Unify_13,
  MR_Word * ConsId_14,
  MR_Word * FirstOldNew_15,
  MR_Word * LaterOldNew_16,
  MR_Word * Goals_17);

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
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(
  MR_Word UnifyGoal_6,
  MR_Word FirstOldNew_7,
  MR_Word LaterOldNew_8,
  MR_Word STATE_VARIABLE_CseInfo_0_25,
  MR_Word * STATE_VARIABLE_CseInfo_26);

static void MR_CALL 
check_hlds__cse_detection__update_existential_data_structures_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__cse_detection__update_existential_data_structures_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__cse_detection__update_existential_data_structures_4_p_0(
  MR_Word FirstOldNew_5,
  MR_Word LaterOldNews_6,
  MR_Word STATE_VARIABLE_CseInfo_0_20,
  MR_Word * STATE_VARIABLE_CseInfo_21);

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

static void MR_CALL 
check_hlds__cse_detection__record_pull_decline_3_p_0(
  MR_Word UnifyGoal_4,
  MR_Word STATE_VARIABLE_CseInfo_0_11,
  MR_Word * STATE_VARIABLE_CseInfo_12);

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

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_3[1][10];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_4[1][8];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_5[1][9];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_6[1][5];




static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_2[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[4]))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[1])),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__cse_detection__common_deconstruct_2_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_3[1][10] = {
  /* row 0 */
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
  /* row 0 */
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
  /* row 0 */
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
  /* row 0 */
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



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
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

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__cse_detection__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__cse_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&check_hlds__cse_detection__list__ti_list_1term__type_ctor_info_context_0)
};

static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_info_0_0[6] = {
  (MR_String) "csei_module_info",
  (MR_String) "csei_varset",
  (MR_String) "csei_vartypes",
  (MR_String) "csei_rtti_varmaps",
  (MR_String) "csei_redo",
  (MR_String) "csei_nopull_contexts"
};

static const MR_DuArgLocn check_hlds__cse_detection__check_hlds__cse_detection__field_locns_cse_info_0_0[6] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0 = {
  (MR_String) "cse_info",
  INT16_C(6),
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

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_info_0_0[1] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0
};

static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_info_0[1] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0
};

static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__cse_detection____Unify____cse_info_0_0_10001)),
  ((MR_Box) (check_hlds__cse_detection____Compare____cse_info_0_0_10001)),
  (MR_String) "check_hlds.cse_detection",
  (MR_String) "cse_info",
  {     check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_info_0 },
  {     check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_info_0
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
  {
    (MR_TypeInfo) (&check_hlds__cse_detection__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
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

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_1[1] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1
};

static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_state_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__cse_detection____Unify____cse_state_0_0_10001)),
  ((MR_Box) (check_hlds__cse_detection____Compare____cse_state_0_0_10001)),
  (MR_String) "check_hlds.cse_detection",
  (MR_String) "cse_state",
  {     check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_state_0 },
  {     check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_state_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_state_0
};

static const MR_EnumFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__enum_functor_desc_may_pull_cons_id_0_0 = {
  (MR_String) "may_pull_cons_id",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__enum_functor_desc_may_pull_cons_id_0_1 = {
  (MR_String) "may_not_pull_cons_id",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__enum_value_ordered_may_pull_cons_id_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__cse_detection____Unify____may_pull_cons_id_0_0_10001)),
  ((MR_Box) (check_hlds__cse_detection____Compare____may_pull_cons_id_0_0_10001)),
  (MR_String) "check_hlds.cse_detection",
  (MR_String) "may_pull_cons_id",
  {     check_hlds__cse_detection__check_hlds__cse_detection__enum_name_ordered_may_pull_cons_id_0 },
  {     check_hlds__cse_detection__check_hlds__cse_detection__enum_value_ordered_may_pull_cons_id_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_may_pull_cons_id_0
};

static void MR_CALL 
check_hlds__cse_detection____Compare____may_pull_cons_id_0_0(
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
check_hlds__cse_detection____Unify____may_pull_cons_id_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
            MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
            MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word ArgY4_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
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
}

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;
            MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_8;
            MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_10;
            MR_Word ArgX4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word ArgY4_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
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
}

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;
              MR_Integer Var_29 = (MR_Integer) (ArgX5_16);
              MR_Integer Var_30 = (MR_Integer) (ArgY5_17);

              succeeded = (Var_29 < Var_30);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_29 > Var_30);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult5_18 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
            }
          }
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
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_18_18;
      MR_Word TypeCtorInfo_19_19;
      MR_Word TypeInfo_21_21;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_18_18 = (MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeCtorInfo_19_19 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
          succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_19_19, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                TypeInfo_21_21 = (MR_Word) (&check_hlds__cse_detection_scalar_common_1[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
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
  {
    MR_bool succeeded;
    MR_Word TypeInfoLocn0_12;
    MR_Word Old_13;
    MR_Word New_14;
    MR_Box conv0_New_14;

    hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(RttiVarMaps_7, Tvar_10, &TypeInfoLocn0_12);
    hlds__hlds_rtti__type_info_locn_var_2_p_0(TypeInfoLocn0_12, &Old_13);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[0]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[0]), LaterOldNewMap_8, ((MR_Box) (Old_13)), &conv0_New_14);
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
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), NewTvarMap_9, ((MR_Box) (TypeInfoLocn_15)), &conv1_NewTvar_16);
      NewTvar_16 = ((MR_Word) (conv1_NewTvar_16));
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), ((MR_Box) (NewTvar_16)), ((MR_Box) (Tvar_10)));
      if (succeeded)
        *STATE_VARIABLE_Renaming_18 = STATE_VARIABLE_Renaming_0_17;
      else
        mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), ((MR_Box) (Tvar_10)), ((MR_Box) (NewTvar_16)), STATE_VARIABLE_Renaming_0_17, STATE_VARIABLE_Renaming_18);
    }
    else
      *STATE_VARIABLE_Renaming_18 = STATE_VARIABLE_Renaming_0_17;
  }
}

static void MR_CALL 
check_hlds__cse_detection__find_type_info_locn_tvar_map_5_p_0(
  MR_Word RttiVarMaps_6,
  MR_Word FirstOldNewMap_7,
  MR_Word Tvar_8,
  MR_Word STATE_VARIABLE_NewTvarMap_0_14,
  MR_Word * STATE_VARIABLE_NewTvarMap_15)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfoLocn0_10;
    MR_Word Old_11;
    MR_Word New_12;
    MR_Box conv0_New_12;

    hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(RttiVarMaps_6, Tvar_8, &TypeInfoLocn0_10);
    hlds__hlds_rtti__type_info_locn_var_2_p_0(TypeInfoLocn0_10, &Old_11);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[0]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[0]), FirstOldNewMap_7, ((MR_Box) (Old_11)), &conv0_New_12);
    if (succeeded)
    {
      New_12 = ((MR_Word) (conv0_New_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeInfoLocn_13;

      hlds__hlds_rtti__type_info_locn_set_var_3_p_0(New_12, TypeInfoLocn0_10, &TypeInfoLocn_13);
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), ((MR_Box) (TypeInfoLocn_13)), ((MR_Box) (Tvar_8)), STATE_VARIABLE_NewTvarMap_0_14, STATE_VARIABLE_NewTvarMap_15);
    }
    else
      *STATE_VARIABLE_NewTvarMap_15 = STATE_VARIABLE_NewTvarMap_0_14;
  }
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
              MR_Word GoalExpr0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 0))));
              MR_Word GoalInfo0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1))));
              MR_Word RHS_51;
              MR_Word Umode_52;
              MR_Word Ucontext_54;
              MR_Word ConsId0_56;
              MR_Word ArgVars_57;
              MR_Word Submodes_58;
              MR_Word Unif0_53;
              MR_Unsigned packed_word_0;

              succeeded = ((MR_tag((MR_Word) GoalExpr0_48)) == (MR_Integer) 1);
              if (succeeded)
              {
                RHS_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_48, (MR_Integer) 1))));
                Umode_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_48, (MR_Integer) 2))));
                Unif0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_48, (MR_Integer) 3))));
                Ucontext_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_48, (MR_Integer) 4))));
                succeeded = ((MR_tag((MR_Word) Unif0_53)) == (MR_Integer) 1);
                if (succeeded)
                {
                  ConsId0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unif0_53, (MR_Integer) 1))));
                  ArgVars_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unif0_53, (MR_Integer) 2))));
                  Submodes_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unif0_53, (MR_Integer) 3))));
                  packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unif0_53, (MR_Integer) 4)));
                }
              }
              if (succeeded)
              {
                MR_Word Unif_61;
                MR_Word GoalExpr1_65;
                MR_Word GoalInfo1_76;
                MR_Word Context_77;
                MR_Word Subn_78;
                MR_Word Var_83;

                ConsId_13 = ConsId0_56;
                {
                  Unif_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Unif_61, 0) = ((MR_Box) (Var_8));
                  MR_hl_field(MR_mktag(1), Unif_61, 1) = ((MR_Box) (ConsId_13));
                  MR_hl_field(MR_mktag(1), Unif_61, 2) = ((MR_Box) (ArgVars_57));
                  MR_hl_field(MR_mktag(1), Unif_61, 3) = ((MR_Box) (Submodes_58));
                  MR_hl_field(MR_mktag(1), Unif_61, 4) = (MR_Box) (packed_word_0);
                }
                switch (MR_tag((MR_Word) RHS_51)) {
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
                      GoalExpr1_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), GoalExpr1_65, 0) = ((MR_Box) (Var_8));
                      MR_hl_field(MR_mktag(1), GoalExpr1_65, 1) = ((MR_Box) (RHS_51));
                      MR_hl_field(MR_mktag(1), GoalExpr1_65, 2) = ((MR_Box) (Umode_52));
                      MR_hl_field(MR_mktag(1), GoalExpr1_65, 3) = ((MR_Box) (Unif_61));
                      MR_hl_field(MR_mktag(1), GoalExpr1_65, 4) = ((MR_Box) (Ucontext_54));
                    }
                    break;
                }
                hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 27, GoalInfo0_49, &GoalInfo1_76);
                Context_77 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo1_76);
                check_hlds__cse_detection__create_new_arg_vars_7_p_0(ArgVars_57, Context_77, Ucontext_54, STATE_VARIABLE_CseInfo_0_25, STATE_VARIABLE_CseInfo_26, &OldNewVars_14, Goals_10);
                mercury__map__from_assoc_list_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[0]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[0]), OldNewVars_14, &Subn_78);
                {
                  Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (GoalExpr1_65));
                  MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (GoalInfo1_76));
                }
                hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subn_78, Var_83, &HoistedGoal_15);
              }
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.cse_detection.construct_common_unify\'/8", (MR_String) "non-unify goal");
                  return;
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_CseState_24 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HoistedGoal_15));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ConsId_13));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (OldNewVars_14));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Goals_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal0_9));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *STATE_VARIABLE_CseState_24 = (MR_Word) ((MR_Unsigned) 4U);
              *STATE_VARIABLE_CseInfo_26 = STATE_VARIABLE_CseInfo_0_25;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word FirstOldNewVars_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_CseState_0_23, (MR_Integer) 2))));
          MR_Word LaterOldNewVars0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_CseState_0_23, (MR_Integer) 3))));
          MR_Word GoalInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1))));
          MR_Word Context_20;
          MR_Word ConsId_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_CseState_0_23, (MR_Integer) 1))));
          MR_Word HoistedGoal_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_CseState_0_23, (MR_Integer) 0))));
          MR_Word Goals0_21;
          MR_Word OldNewVars_35;

          Context_20 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_19);
          succeeded = check_hlds__cse_detection__find_similar_deconstruct_5_p_0(HoistedGoal_38, Goal0_9, Context_20, &OldNewVars_35, &Goals0_21);
          if (succeeded)
          {
            MR_Word LaterOldNewVars_22;

            *Goals_10 = Goals0_21;
            {
              LaterOldNewVars_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), LaterOldNewVars_22, 0) = ((MR_Box) (OldNewVars_35));
              MR_hl_field(MR_mktag(1), LaterOldNewVars_22, 1) = ((MR_Box) (LaterOldNewVars0_17));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_CseState_24 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HoistedGoal_38));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ConsId_36));
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (FirstOldNewVars_16));
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (LaterOldNewVars_22));
            }
          }
          else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Goals_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal0_9));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *STATE_VARIABLE_CseState_24 = (MR_Word) ((MR_Unsigned) 4U);
          }
          *STATE_VARIABLE_CseInfo_26 = STATE_VARIABLE_CseInfo_0_25;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__cse_detection__find_similar_deconstruct_5_p_0(
  MR_Word HoistedUnifyGoal_6,
  MR_Word OldUnifyGoal_7,
  MR_Word Context_8,
  MR_Word * OldHoistedVars_9,
  MR_Word * Replacements_10)
{
  {
    MR_bool succeeded;
    MR_Word OC_15;
    MR_Word HoistedFunctor_18;
    MR_Word HoistedVars_19;
    MR_Word OldFunctor_30;
    MR_Word OldVars_31;
    MR_Word HoistedUnifyInfo_14;
    MR_Word OldUnifyInfo_26;
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HoistedUnifyGoal_6, (MR_Integer) 0))));
    MR_Word Var_38;

    succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 1);
    if (succeeded)
    {
      HoistedUnifyInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_37, (MR_Integer) 3))));
      OC_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_37, (MR_Integer) 4))));
      succeeded = ((MR_tag((MR_Word) HoistedUnifyInfo_14)) == (MR_Integer) 1);
      if (succeeded)
      {
        HoistedFunctor_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HoistedUnifyInfo_14, (MR_Integer) 1))));
        HoistedVars_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HoistedUnifyInfo_14, (MR_Integer) 2))));
        Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldUnifyGoal_7, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 1);
        if (succeeded)
        {
          OldUnifyInfo_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 3))));
          succeeded = ((MR_tag((MR_Word) OldUnifyInfo_26)) == (MR_Integer) 1);
          if (succeeded)
          {
            OldFunctor_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldUnifyInfo_26, (MR_Integer) 1))));
            OldVars_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldUnifyInfo_26, (MR_Integer) 2))));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeInfo_41_41;
      MR_Integer HoistedVarsCount_35;
      MR_Integer OldVarsCount_36;

      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(HoistedFunctor_18, OldFunctor_30);
      if (succeeded)
      {
        TypeInfo_41_41 = (MR_Word) (&check_hlds__cse_detection_scalar_common_1[0]);
        mercury__list__length_2_p_0(TypeInfo_41_41, HoistedVars_19, &HoistedVarsCount_35);
        mercury__list__length_2_p_0(TypeInfo_41_41, OldVars_31, &OldVarsCount_36);
        succeeded = (HoistedVarsCount_35 == OldVarsCount_36);
        if (succeeded)
        {
          mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_41_41, TypeInfo_41_41, OldVars_31, HoistedVars_19, OldHoistedVars_9);
          check_hlds__cse_detection__pair_subterms_4_p_0(*OldHoistedVars_9, Context_8, OC_15, Replacements_10);
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.cse_detection.find_similar_deconstruct\'/5", (MR_String) "non-deconstruct unify");
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__cse_detection__pair_subterms_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word OldVar_7;
      MR_Word HoistedVar_8;
      MR_Word OldHoistedVars_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Replacements1_13;
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      OldVar_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
      HoistedVar_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1))));
      check_hlds__cse_detection__pair_subterms_4_p_0(OldHoistedVars_9, HeadVar__2_2, HeadVar__3_3, &Replacements1_13);
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[0]), ((MR_Box) (OldVar_7)), ((MR_Box) (HoistedVar_8)));
      if (succeeded)
        *HeadVar__4_4 = Replacements1_13;
      else
      {
        MR_Word MainCtxt_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word SubCtxt_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Goal_16;
        MR_Word Var_18;

        {
          Var_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (OldVar_7));
        }
        hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(HoistedVar_8, Var_18, HeadVar__2_2, MainCtxt_14, SubCtxt_15, &Goal_16);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Replacements1_13));
        }
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
      MR_Word HeadOldArgVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TailOldArgVars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TailReplacementGoals_20;
      MR_Word HeadReplacementGoal_21;
      MR_Word STATE_VARIABLE_CseInfo_25_25;
      MR_Word STATE_VARIABLE_OldNewVars_26_26;
      MR_Word VarSet0_39;
      MR_Word VarTypes0_40;
      MR_Word Type_41;
      MR_Word ModuleInfo_42;
      MR_Word TypeCat_43;
      MR_Word NewArgVar_46;
      MR_Word VarSet_47;
      MR_Word VarTypes_48;
      MR_Word MainCtxt_49;
      MR_Word SubCtxt_50;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_71;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_String OldName_45;
      MR_Word TypeCtorInfo_63_83;

      check_hlds__cse_detection__create_new_arg_vars_7_p_0(TailOldArgVars_14, Context_2, UnifyContext_3, STATE_VARIABLE_CseInfo_0_4, &STATE_VARIABLE_CseInfo_25_25, &STATE_VARIABLE_OldNewVars_26_26, &TailReplacementGoals_20);
      VarSet0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 1))));
      VarTypes0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 2))));
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes0_40, HeadOldArgVar_13, &Type_41);
      ModuleInfo_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 0))));
      TypeCat_43 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_42, Type_41);
      succeeded = ((((MR_tag((MR_Word) TypeCat_43)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeCat_43, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        TypeCtorInfo_63_83 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        succeeded = mercury__varset__search_name_3_p_0(TypeCtorInfo_63_83, VarSet0_39, HeadOldArgVar_13, &OldName_45);
      }
      if (succeeded)
        mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OldName_45, &NewArgVar_46, VarSet0_39, &VarSet_47);
      else
        mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &NewArgVar_46, VarSet0_39, &VarSet_47);
      hlds__vartypes__add_var_type_4_p_0(NewArgVar_46, Type_41, VarTypes0_40, &VarTypes_48);
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (HeadOldArgVar_13));
        MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (NewArgVar_46));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OldNewVars_26_26));
      }
      MainCtxt_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyContext_3, (MR_Integer) 0))));
      SubCtxt_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyContext_3, (MR_Integer) 1))));
      {
        Var_53 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (NewArgVar_46));
      }
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(HeadOldArgVar_13, Var_53, Context_2, MainCtxt_49, SubCtxt_50, &HeadReplacementGoal_21);
      Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 0))));
      Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 3))));
      Var_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 4))) & (MR_Integer) 1);
      Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 5))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_CseInfo_5 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarSet_47));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_48));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (Var_75));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_76));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadReplacementGoal_21));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailReplacementGoals_20));
      }
    }
  }
}

void MR_CALL 
check_hlds__cse_detection__detect_cse_in_module_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6)
{
  {
    MR_Word PredIds_4;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_5, &PredIds_4);
    check_hlds__cse_detection__detect_cse_in_preds_3_p_0(PredIds_4, STATE_VARIABLE_ModuleInfo_0_5, STATE_VARIABLE_ModuleInfo_6);
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_preds_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    else
    {
      MR_Word PredId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PredIds_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PredTable_10;
      MR_Word PredInfo_11;
      MR_Word STATE_VARIABLE_ModuleInfo_14_14;
      MR_Word ProcIds_23;
      MR_Box conv0_PredInfo_11;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;

      hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_2, &PredTable_10);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_10, ((MR_Box) (PredId_7)), &conv0_PredInfo_11);
      PredInfo_11 = ((MR_Word) (conv0_PredInfo_11));
      ProcIds_23 = hlds__hlds_pred__pred_info_valid_non_imported_procids_1_f_0(PredInfo_11);
      check_hlds__cse_detection__detect_cse_in_procs_4_p_0(PredId_7, ProcIds_23, STATE_VARIABLE_ModuleInfo_0_2, &STATE_VARIABLE_ModuleInfo_14_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredIds_8;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_procs_4_p_0(
  MR_Word HeadVar__1_1,
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
      MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ProcIds_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_15_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;

      check_hlds__cse_detection__detect_cse_in_proc_4_p_0(HeadVar__1_1, ProcId_10, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ProcIds_11;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
check_hlds__cse_detection__detect_cse_in_proc_4_p_0(
  MR_Word PredId_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35)
{
  while (MR_TRUE)
  {
    MR_Word Globals_8;
    MR_Word VeryVerbose_9;
    MR_Word PredTable0_11;
    MR_Word PredInfo0_12;
    MR_Word ProcTable0_13;
    MR_Word ProcInfo0_14;
    MR_Word Redo_15;
    MR_Word ProcInfo1_16;
    MR_Word ProcTable1_17;
    MR_Word PredInfo1_18;
    MR_Word PredTable1_19;
    MR_Word Statistics_20;
    MR_Word STATE_VARIABLE_ModuleInfo_43_43;
    MR_Box conv0_PredInfo0_12;
    MR_Box conv1_ProcInfo0_14;

    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_34, &Globals_8);
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 66, &VeryVerbose_9);
    switch (VeryVerbose_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "% Detecting common deconstructions for ");
          hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(STATE_VARIABLE_ModuleInfo_0_34, PredId_5);
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        break;
    }
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_34, &PredTable0_11);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_11, ((MR_Box) (PredId_5)), &conv0_PredInfo0_12);
    PredInfo0_12 = ((MR_Word) (conv0_PredInfo0_12));
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_12, &ProcTable0_13);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_13, ((MR_Box) (ProcId_6)), &conv1_ProcInfo0_14);
    ProcInfo0_14 = ((MR_Word) (conv1_ProcInfo0_14));
    check_hlds__cse_detection__detect_cse_in_proc_pass_4_p_0(STATE_VARIABLE_ModuleInfo_0_34, &Redo_15, ProcInfo0_14, &ProcInfo1_16);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_6)), ((MR_Box) (ProcInfo1_16)), ProcTable0_13, &ProcTable1_17);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable1_17, PredInfo0_12, &PredInfo1_18);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_5)), ((MR_Box) (PredInfo1_18)), PredTable0_11, &PredTable1_19);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable1_19, STATE_VARIABLE_ModuleInfo_0_34, &STATE_VARIABLE_ModuleInfo_43_43);
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 76, &Statistics_20);
    libs__file_util__maybe_report_stats_3_p_0(Statistics_20);
    switch (Redo_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_43_43;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModeSpecs_22;
          MR_Word ContainsErrors_23;
          MR_Word PredTable2_25;
          MR_Word PredInfo2_26;
          MR_Word ProcTable2_27;
          MR_Word ProcInfo2_28;
          MR_Word SwitchDetectInfo_29;
          MR_Word ProcInfo_30;
          MR_Word ProcTable3_31;
          MR_Word PredInfo3_32;
          MR_Word PredTable3_33;
          MR_Word STATE_VARIABLE_ModuleInfo_53_53;
          MR_Word STATE_VARIABLE_ModuleInfo_70_70;
          MR_Word _Changed_21;
          MR_Box conv2_PredInfo2_26;
          MR_Box conv3_ProcInfo2_28;
          MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_34;

          switch (VeryVerbose_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "% Repeating mode check for ");
                hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(STATE_VARIABLE_ModuleInfo_43_43, PredId_5);
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
              break;
          }
          check_hlds__modes__modecheck_proc_6_p_0(PredId_5, ProcId_6, STATE_VARIABLE_ModuleInfo_43_43, &STATE_VARIABLE_ModuleInfo_53_53, &_Changed_21, &ModeSpecs_22);
          libs__file_util__maybe_report_stats_3_p_0(Statistics_20);
          ContainsErrors_23 = parse_tree__error_util__contains_errors_2_f_0(Globals_8, ModeSpecs_22);
          switch (ContainsErrors_23) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word _DumpInfo_24;

                hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_ModuleInfo_53_53, (MR_Integer) 46, (MR_String) "cse_repeat_modecheck", (MR_Word) ((MR_Unsigned) 0U), &_DumpInfo_24);
                parse_tree__error_util__write_error_specs_ignore_4_p_0(Globals_8, ModeSpecs_22);
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_proc\'/4", (MR_String) "mode check fails when repeated");
                  return;
                }
              }
              break;
          }
          switch (VeryVerbose_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "% Repeating switch detection for ");
                hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(STATE_VARIABLE_ModuleInfo_53_53, PredId_5);
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
              break;
          }
          hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_53_53, &PredTable2_25);
          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable2_25, ((MR_Box) (PredId_5)), &conv2_PredInfo2_26);
          PredInfo2_26 = ((MR_Word) (conv2_PredInfo2_26));
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo2_26, &ProcTable2_27);
          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable2_27, ((MR_Box) (ProcId_6)), &conv3_ProcInfo2_28);
          ProcInfo2_28 = ((MR_Word) (conv3_ProcInfo2_28));
          SwitchDetectInfo_29 = check_hlds__switch_detection__init_switch_detect_info_1_f_0(STATE_VARIABLE_ModuleInfo_53_53);
          check_hlds__switch_detection__detect_switches_in_proc_3_p_0(SwitchDetectInfo_29, ProcInfo2_28, &ProcInfo_30);
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_6)), ((MR_Box) (ProcInfo_30)), ProcTable2_27, &ProcTable3_31);
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable3_31, PredInfo2_26, &PredInfo3_32);
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_5)), ((MR_Box) (PredInfo3_32)), PredTable2_25, &PredTable3_33);
          hlds__hlds_module__module_info_set_preds_3_p_0(PredTable3_33, STATE_VARIABLE_ModuleInfo_53_53, &STATE_VARIABLE_ModuleInfo_70_70);
          libs__file_util__maybe_report_stats_3_p_0(Statistics_20);
          switch (VeryVerbose_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Var_74;

                Var_74 = mercury__string__f_43_43_2_f_0((MR_String) "% Repeating common ", (MR_String) "deconstruction detection for ");
                mercury__io__write_string_3_p_0(Var_74);
                hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(STATE_VARIABLE_ModuleInfo_70_70, PredId_5);
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
              break;
          }
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_ModuleInfo_0_34 = STATE_VARIABLE_ModuleInfo_70_70;
          STATE_VARIABLE_ModuleInfo_0_34 = next_value_of_STATE_VARIABLE_ModuleInfo_0_34;
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
  MR_Word STATE_VARIABLE_ProcInfo_0_36,
  MR_Word * STATE_VARIABLE_ProcInfo_37)
{
  {
    MR_Word Goal0_8;
    MR_Word InstMap0_9;
    MR_Word Varset0_10;
    MR_Word VarTypes0_11;
    MR_Word RttiVarMaps0_12;
    MR_Word CseInfo0_14;
    MR_Word Goal1_15;
    MR_Word CseInfo_16;
    MR_Word CseNoPullContexts_21;
    MR_Word NoPullContexts0_22;
    MR_Word NoPullContexts_23;
    MR_Word STATE_VARIABLE_ProcInfo_39_39;
    MR_Word _InstMap_52;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_36, &Goal0_8);
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ProcInfo_0_36, ModuleInfo_5, &InstMap0_9);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_36, &Varset0_10);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_36, &VarTypes0_11);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_0_36, &RttiVarMaps0_12);
    {
      CseInfo0_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CseInfo0_14, 0) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), CseInfo0_14, 1) = ((MR_Box) (Varset0_10));
      MR_hl_field(MR_mktag(0), CseInfo0_14, 2) = ((MR_Box) (VarTypes0_11));
      MR_hl_field(MR_mktag(0), CseInfo0_14, 3) = ((MR_Box) (RttiVarMaps0_12));
      MR_hl_field(MR_mktag(0), CseInfo0_14, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), CseInfo0_14, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    check_hlds__cse_detection__detect_cse_in_goal_update_instmap_6_p_0(Goal0_8, &Goal1_15, CseInfo0_14, &CseInfo_16, InstMap0_9, &_InstMap_52);
    *Redo_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CseInfo_16, (MR_Integer) 4))) & (MR_Integer) 1);
    CseNoPullContexts_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CseInfo_16, (MR_Integer) 5))));
    hlds__hlds_pred__proc_info_get_cse_nopull_contexts_2_p_0(STATE_VARIABLE_ProcInfo_0_36, &NoPullContexts0_22);
    NoPullContexts_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), CseNoPullContexts_21, NoPullContexts0_22);
    hlds__hlds_pred__proc_info_set_cse_nopull_contexts_3_p_0(NoPullContexts_23, STATE_VARIABLE_ProcInfo_0_36, &STATE_VARIABLE_ProcInfo_39_39);
    switch (*Redo_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_ProcInfo_37 = STATE_VARIABLE_ProcInfo_39_39;
        break;
      case (MR_Integer) 1:
        {
          MR_Word VarSet1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CseInfo_16, (MR_Integer) 1))));
          MR_Word VarTypes1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CseInfo_16, (MR_Integer) 2))));
          MR_Word RttiVarMaps1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CseInfo_16, (MR_Integer) 3))));
          MR_Word HeadVars_30;
          MR_Word Goal_32;
          MR_Word VarSet_33;
          MR_Word VarTypes_34;
          MR_Word RttiVarMaps_35;
          MR_Word STATE_VARIABLE_ProcInfo_41_41;
          MR_Word STATE_VARIABLE_ProcInfo_42_42;
          MR_Word STATE_VARIABLE_ProcInfo_43_43;
          MR_Word _Warnings_31;

          hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_39_39, &HeadVars_30);
          hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, HeadVars_30, &_Warnings_31, Goal1_15, &Goal_32, VarSet1_25, &VarSet_33, VarTypes1_26, &VarTypes_34, RttiVarMaps1_27, &RttiVarMaps_35);
          hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_32, STATE_VARIABLE_ProcInfo_39_39, &STATE_VARIABLE_ProcInfo_41_41);
          hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_33, STATE_VARIABLE_ProcInfo_41_41, &STATE_VARIABLE_ProcInfo_42_42);
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_34, STATE_VARIABLE_ProcInfo_42_42, &STATE_VARIABLE_ProcInfo_43_43);
          hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_35, STATE_VARIABLE_ProcInfo_43_43, STATE_VARIABLE_ProcInfo_37);
        }
        break;
    }
  }
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
      MR_Word InstMap1_85;
      MR_Word STATE_VARIABLE_CseInfo_21_86;
      MR_Word STATE_VARIABLE_CseInfo_22_87;

      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_6_p_0(Cond0_3, &Cond_19, STATE_VARIABLE_CseInfo_0_8, &STATE_VARIABLE_CseInfo_21_86, InstMap0_7, &InstMap1_85);
      check_hlds__cse_detection__detect_cse_in_goal_5_p_0(Then0_4, &Then_20, STATE_VARIABLE_CseInfo_21_86, &STATE_VARIABLE_CseInfo_22_87, InstMap1_85);
      check_hlds__cse_detection__detect_cse_in_goal_5_p_0(Else0_5, &Else_21, STATE_VARIABLE_CseInfo_22_87, STATE_VARIABLE_CseInfo_9, InstMap0_7);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_10 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (IfVars_2));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_19));
        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_20));
        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_21));
      }
    }
    else
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word UnifyGoal_36;
      MR_Word ConsId_37;
      MR_Word FirstOldNew_38;
      MR_Word LaterOldNew_39;
      MR_Word Goals_40;
      MR_Word STATE_VARIABLE_CseInfo_51_51;
      MR_Word Var_50;
      MR_Word Var_52;

      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Else0_5));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Then0_4));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
      }
      succeeded = check_hlds__cse_detection__common_deconstruct_9_p_0(Var_50, Var_25, STATE_VARIABLE_CseInfo_0_8, &STATE_VARIABLE_CseInfo_51_51, &UnifyGoal_36, &ConsId_37, &FirstOldNew_38, &LaterOldNew_39, &Goals_40);
      if (succeeded)
      {
        MR_Word Then_43;
        MR_Word Else_44;
        MR_Word VarInst0_45;
        MR_Word Then1_41;
        MR_Word Else1_42;
        MR_Word Var_54;
        MR_Word Var_55;

        succeeded = (Goals_40 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Then1_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_40, (MR_Integer) 0))));
          Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_40, (MR_Integer) 1))));
          succeeded = (Var_54 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Else1_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_54, (MR_Integer) 0))));
            Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_54, (MR_Integer) 1))));
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
        succeeded = check_hlds__cse_detection__may_pull_lhs_inst_cons_id_3_p_0(STATE_VARIABLE_CseInfo_51_51, VarInst0_45, ConsId_37);
        if (succeeded)
        {
          MR_Word IfGoalExpr_46;
          MR_Word IfGoal_47;
          MR_Word STATE_VARIABLE_CseInfo_58_58;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_74;

          check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(UnifyGoal_36, FirstOldNew_38, LaterOldNew_39, STATE_VARIABLE_CseInfo_51_51, &STATE_VARIABLE_CseInfo_58_58);
          {
            IfGoalExpr_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), IfGoalExpr_46, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), IfGoalExpr_46, 1) = ((MR_Box) (IfVars_2));
            MR_hl_field(MR_mktag(3), IfGoalExpr_46, 2) = ((MR_Box) (Cond0_3));
            MR_hl_field(MR_mktag(3), IfGoalExpr_46, 3) = ((MR_Box) (Then_43));
            MR_hl_field(MR_mktag(3), IfGoalExpr_46, 4) = ((MR_Box) (Else_44));
          }
          {
            IfGoal_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), IfGoal_47, 0) = ((MR_Box) (IfGoalExpr_46));
            MR_hl_field(MR_mktag(0), IfGoal_47, 1) = ((MR_Box) (GoalInfo_6));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (IfGoal_47));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (UnifyGoal_36));
            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_61));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_60));
          }
          Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_58_58, (MR_Integer) 0))));
          Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_58_58, (MR_Integer) 1))));
          Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_58_58, (MR_Integer) 2))));
          Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_58_58, (MR_Integer) 3))));
          Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_58_58, (MR_Integer) 5))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_CseInfo_9 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_69));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_70));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_71));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_72));
            MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_74));
          }
        }
        else
        {
          MR_Word STATE_VARIABLE_CseInfo_66_66;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_STATE_VARIABLE_CseInfo_0_8;

          check_hlds__cse_detection__record_pull_decline_3_p_0(UnifyGoal_36, STATE_VARIABLE_CseInfo_0_8, &STATE_VARIABLE_CseInfo_66_66);
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
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_9 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SwitchVar_2));
        MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (CanFail_3));
        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_17));
      }
    }
    else
    {
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word UnifyGoal_31;
      MR_Word ConsId_32;
      MR_Word FirstOldNew_33;
      MR_Word LaterOldNew_34;
      MR_Word Cases_35;
      MR_Word STATE_VARIABLE_CseInfo_41_41;
      MR_Word CseState0_70;
      MR_Word CseState_71;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[0]), ((MR_Box) (Var_21)), ((MR_Box) (SwitchVar_2)));
      succeeded = !(succeeded);
      if (succeeded)
      {
        CseState0_70 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(Cases0_4, Var_21, CseState0_70, &CseState_71, STATE_VARIABLE_CseInfo_0_7, &STATE_VARIABLE_CseInfo_41_41, &Cases_35);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) CseState_71)) == (MR_Integer) 1);
          if (succeeded)
          {
            UnifyGoal_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CseState_71, (MR_Integer) 0))));
            ConsId_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CseState_71, (MR_Integer) 1))));
            FirstOldNew_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CseState_71, (MR_Integer) 2))));
            LaterOldNew_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CseState_71, (MR_Integer) 3))));
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
        MR_Word ModuleInfo_78;

        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_6, Var_21, &VarInst0_36);
        ModuleInfo_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_41_41, (MR_Integer) 0))));
        succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(ModuleInfo_78, VarInst0_36);
        if (succeeded)
        {
          succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_78, VarInst0_36);
          if (succeeded)
            succeeded = MR_TRUE;
          else
          {
            MR_Word FunctorBoundInsts_79;
            MR_Word MayPullConsId_80;

            succeeded = check_hlds__inst_test__inst_is_bound_to_functors_3_p_0(ModuleInfo_78, VarInst0_36, &FunctorBoundInsts_79);
            if (succeeded)
            {
              check_hlds__cse_detection__compute_may_pull_cons_id_4_p_0(ModuleInfo_78, FunctorBoundInsts_79, ConsId_32, &MayPullConsId_80);
              succeeded = (MayPullConsId_80 == (MR_Integer) 0);
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
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_58;

          check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(UnifyGoal_31, FirstOldNew_33, LaterOldNew_34, STATE_VARIABLE_CseInfo_41_41, &STATE_VARIABLE_CseInfo_42_42);
          {
            SwitchGoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SwitchGoalExpr_37, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), SwitchGoalExpr_37, 1) = ((MR_Box) (SwitchVar_2));
            MR_hl_field(MR_mktag(3), SwitchGoalExpr_37, 2) = (MR_Box) ((MR_Unsigned) (CanFail_3));
            MR_hl_field(MR_mktag(3), SwitchGoalExpr_37, 3) = ((MR_Box) (Cases_35));
          }
          {
            SwitchGoal_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SwitchGoal_38, 0) = ((MR_Box) (SwitchGoalExpr_37));
            MR_hl_field(MR_mktag(0), SwitchGoal_38, 1) = ((MR_Box) (HeadVar__5_5));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (SwitchGoal_38));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (UnifyGoal_31));
            MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_45));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_9 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_44));
          }
          Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_42_42, (MR_Integer) 0))));
          Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_42_42, (MR_Integer) 1))));
          Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_42_42, (MR_Integer) 2))));
          Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_42_42, (MR_Integer) 3))));
          Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_42_42, (MR_Integer) 5))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_CseInfo_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_58));
          }
        }
        else
        {
          MR_Word STATE_VARIABLE_CseInfo_50_50;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_STATE_VARIABLE_CseInfo_0_7;

          check_hlds__cse_detection__record_pull_decline_3_p_0(UnifyGoal_31, STATE_VARIABLE_CseInfo_0_7, &STATE_VARIABLE_CseInfo_50_50);
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
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_7 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Goals_13));
      }
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word UnifyGoal_25;
      MR_Word ConsId_26;
      MR_Word FirstOldNew_27;
      MR_Word LaterOldNew_28;
      MR_Word Goals_29;
      MR_Word STATE_VARIABLE_CseInfo_33_33;
      MR_Word CseState_64;

      succeeded = check_hlds__cse_detection__common_deconstruct_2_7_p_0(Goals0_2, Var_17, (MR_Word) ((MR_Unsigned) 0U), &CseState_64, STATE_VARIABLE_CseInfo_0_5, &STATE_VARIABLE_CseInfo_33_33, &Goals_29);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) CseState_64)) == (MR_Integer) 1);
        if (succeeded)
        {
          UnifyGoal_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CseState_64, (MR_Integer) 0))));
          ConsId_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CseState_64, (MR_Integer) 1))));
          FirstOldNew_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CseState_64, (MR_Integer) 2))));
          LaterOldNew_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CseState_64, (MR_Integer) 3))));
          succeeded = (LaterOldNew_28 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        MR_Word VarInst0_30;
        MR_Word ModuleInfo_71;

        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_4, Var_17, &VarInst0_30);
        ModuleInfo_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_33_33, (MR_Integer) 0))));
        succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(ModuleInfo_71, VarInst0_30);
        if (succeeded)
        {
          succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_71, VarInst0_30);
          if (succeeded)
            succeeded = MR_TRUE;
          else
          {
            MR_Word FunctorBoundInsts_72;
            MR_Word MayPullConsId_73;

            succeeded = check_hlds__inst_test__inst_is_bound_to_functors_3_p_0(ModuleInfo_71, VarInst0_30, &FunctorBoundInsts_72);
            if (succeeded)
            {
              check_hlds__cse_detection__compute_may_pull_cons_id_4_p_0(ModuleInfo_71, FunctorBoundInsts_72, ConsId_26, &MayPullConsId_73);
              succeeded = (MayPullConsId_73 == (MR_Integer) 0);
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
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word Var_52;

          check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(UnifyGoal_25, FirstOldNew_27, LaterOldNew_28, STATE_VARIABLE_CseInfo_33_33, &STATE_VARIABLE_CseInfo_34_34);
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (Goals_29));
          }
          {
            Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Var_39));
            MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (HeadVar__3_3));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (UnifyGoal_25));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_7 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_36));
          }
          Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_34_34, (MR_Integer) 0))));
          Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_34_34, (MR_Integer) 1))));
          Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_34_34, (MR_Integer) 2))));
          Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_34_34, (MR_Integer) 3))));
          Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_34_34, (MR_Integer) 5))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_CseInfo_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_49));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_50));
            MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_52));
          }
        }
        else
        {
          MR_Word STATE_VARIABLE_CseInfo_44_44;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_STATE_VARIABLE_CseInfo_0_5;

          check_hlds__cse_detection__record_pull_decline_3_p_0(UnifyGoal_25, STATE_VARIABLE_CseInfo_0_5, &STATE_VARIABLE_CseInfo_44_44);
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
    MR_Word Case0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_12;
    MR_Word Cases_13;
    MR_Word MainConsId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 0))));
    MR_Word OtherConsIds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 1))));
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 2))));
    MR_Word Goal_19;
    MR_Word STATE_VARIABLE_CseInfo_22_22;
    MR_Word _InstMap_30;

    check_hlds__cse_detection__detect_cse_in_goal_update_instmap_6_p_0(Goal0_18, &Goal_19, STATE_VARIABLE_CseInfo_0_3, &STATE_VARIABLE_CseInfo_22_22, InstMap0_5, &_InstMap_30);
    {
      Case_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_12, 0) = ((MR_Box) (MainConsId_16));
      MR_hl_field(MR_mktag(0), Case_12, 1) = ((MR_Box) (OtherConsIds_17));
      MR_hl_field(MR_mktag(0), Case_12, 2) = ((MR_Box) (Goal_19));
    }
    check_hlds__cse_detection__detect_cse_in_cases_arms_5_p_0(Cases0_11, &Cases_13, STATE_VARIABLE_CseInfo_22_22, STATE_VARIABLE_CseInfo_4, InstMap0_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_13));
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
    MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_12;
    MR_Word Goals_13;
    MR_Word STATE_VARIABLE_CseInfo_18_18;
    MR_Word _InstMap_26;

    check_hlds__cse_detection__detect_cse_in_goal_update_instmap_6_p_0(Goal0_10, &Goal_12, STATE_VARIABLE_CseInfo_0_3, &STATE_VARIABLE_CseInfo_18_18, InstMap0_5, &_InstMap_26);
    check_hlds__cse_detection__detect_cse_in_independent_goals_5_p_0(Goals0_11, &Goals_13, STATE_VARIABLE_CseInfo_18_18, STATE_VARIABLE_CseInfo_4, InstMap0_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_13));
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
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_CseInfo_4 = STATE_VARIABLE_CseInfo_0_3;
    }
    else
    {
      MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_18;
      MR_Word TailGoals_19;
      MR_Word STATE_VARIABLE_CseInfo_26_26;
      MR_Word STATE_VARIABLE_InstMap_27_27;
      MR_Word ConjGoals_21;
      MR_Word InnerConjType_20;
      MR_Word Var_29;

      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_6_p_0(Goal0_12, &Goal_18, STATE_VARIABLE_CseInfo_0_3, &STATE_VARIABLE_CseInfo_26_26, HeadVar__6_6, &STATE_VARIABLE_InstMap_27_27);
      check_hlds__cse_detection__detect_cse_in_conj_6_p_0(Goals0_13, &TailGoals_19, STATE_VARIABLE_CseInfo_26_26, STATE_VARIABLE_CseInfo_4, HeadVar__5_5, STATE_VARIABLE_InstMap_27_27);
      Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_29)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_29, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        InnerConjType_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_29, (MR_Integer) 1))) & (MR_Integer) 1);
        ConjGoals_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_29, (MR_Integer) 2))));
        succeeded = (HeadVar__5_5 == InnerConjType_20);
      }
      if (succeeded)
        *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ConjGoals_21, TailGoals_19);
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailGoals_19));
        }
    }
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_update_instmap_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_CseInfo_0_117,
  MR_Word * STATE_VARIABLE_CseInfo_118,
  MR_Word InstMap0_10,
  MR_Word * InstMap_11)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
    MR_Word GoalInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));
    MR_Word GoalExpr_32;
    MR_Word InstMapDelta_116;

    switch (MR_tag((MR_Word) GoalExpr0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_55 = (MR_Word) ((MR_Word) (GoalExpr0_12));
          MR_Word SubGoal_56;

          check_hlds__cse_detection__detect_cse_in_goal_5_p_0(SubGoal0_55, &SubGoal_56, STATE_VARIABLE_CseInfo_0_117, STATE_VARIABLE_CseInfo_118, InstMap0_10);
          GoalExpr_32 = (MR_Word) ((MR_Word) (SubGoal_56));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 0))));
          MR_Word RHS0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 1))));
          MR_Word Mode_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 2))));
          MR_Word Unify_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 3))));
          MR_Word UnifyContext_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 4))));
          MR_Word RHS_50;

          switch (MR_tag((MR_Word) RHS0_34)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                RHS_50 = RHS0_34;
                *STATE_VARIABLE_CseInfo_118 = STATE_VARIABLE_CseInfo_0_117;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word NonLocalVars_42 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_34, (MR_Integer) 2))));
                MR_Word Vars_43 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_34, (MR_Integer) 3))));
                MR_Word Modes_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_34, (MR_Integer) 4))));
                MR_Word Det_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_34, (MR_Integer) 5))) & (MR_Integer) 7);
                MR_Word LambdaGoal0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_34, (MR_Integer) 6))));
                MR_Word ModuleInfo_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_0_117, (MR_Integer) 0))));
                MR_Word InstMap1_48;
                MR_Word LambdaGoal_49;
                MR_Unsigned packed_word_8 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_34, (MR_Integer) 0)));

                hlds__instmap__pre_lambda_update_5_p_0(ModuleInfo_47, Vars_43, Modes_44, InstMap0_10, &InstMap1_48);
                check_hlds__cse_detection__detect_cse_in_goal_5_p_0(LambdaGoal0_46, &LambdaGoal_49, STATE_VARIABLE_CseInfo_0_117, STATE_VARIABLE_CseInfo_118, InstMap1_48);
                {
                  RHS_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), RHS_50, 0) = (MR_Box) (packed_word_8);
                  MR_hl_field(MR_mktag(2), RHS_50, 1) = NULL;
                  MR_hl_field(MR_mktag(2), RHS_50, 2) = ((MR_Box) (NonLocalVars_42));
                  MR_hl_field(MR_mktag(2), RHS_50, 3) = ((MR_Box) (Vars_43));
                  MR_hl_field(MR_mktag(2), RHS_50, 4) = ((MR_Box) (Modes_44));
                  MR_hl_field(MR_mktag(2), RHS_50, 5) = (MR_Box) ((MR_Unsigned) (Det_45));
                  MR_hl_field(MR_mktag(2), RHS_50, 6) = ((MR_Box) (LambdaGoal_49));
                }
              }
              break;
          }
          {
            GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), GoalExpr_32, 0) = ((MR_Box) (LHS_33));
            MR_hl_field(MR_mktag(1), GoalExpr_32, 1) = ((MR_Box) (RHS_50));
            MR_hl_field(MR_mktag(1), GoalExpr_32, 2) = ((MR_Box) (Mode_35));
            MR_hl_field(MR_mktag(1), GoalExpr_32, 3) = ((MR_Box) (Unify_36));
            MR_hl_field(MR_mktag(1), GoalExpr_32, 4) = ((MR_Box) (UnifyContext_37));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          GoalExpr_32 = GoalExpr0_12;
          *STATE_VARIABLE_CseInfo_118 = STATE_VARIABLE_CseInfo_0_117;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              GoalExpr_32 = GoalExpr0_12;
              *STATE_VARIABLE_CseInfo_118 = STATE_VARIABLE_CseInfo_0_117;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_90 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
              MR_Word Goals_92;

              check_hlds__cse_detection__detect_cse_in_conj_6_p_0(Goals0_91, &Goals_92, STATE_VARIABLE_CseInfo_0_117, STATE_VARIABLE_CseInfo_118, ConjType_90, InstMap0_10);
              {
                GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = (MR_Box) ((MR_Unsigned) (ConjType_90));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 2) = ((MR_Box) (Goals_92));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_154 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));

              if ((Goals0_154 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                GoalExpr_32 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__cse_detection_scalar_common_1[6]));
                *STATE_VARIABLE_CseInfo_118 = STATE_VARIABLE_CseInfo_0_117;
              }
              else
              {
                MR_Word NonLocals_95;
                MR_Word NonLocalsList_96;

                NonLocals_95 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_13);
                NonLocalsList_96 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_95);
                check_hlds__cse_detection__detect_cse_in_disj_7_p_0(NonLocalsList_96, Goals0_154, GoalInfo_13, InstMap0_10, STATE_VARIABLE_CseInfo_0_117, STATE_VARIABLE_CseInfo_118, &GoalExpr_32);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word CanFail_155 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_156 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
              MR_Word NonLocals_157;
              MR_Word NonLocalsList_158;

              NonLocals_157 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_13);
              NonLocalsList_158 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_157);
              check_hlds__cse_detection__detect_cse_in_cases_9_p_0(NonLocalsList_158, Var_97, CanFail_155, Cases0_156, GoalInfo_13, InstMap0_10, STATE_VARIABLE_CseInfo_0_117, STATE_VARIABLE_CseInfo_118, &GoalExpr_32);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word SubGoal0_152 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) Reason0_57)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_150;

                    check_hlds__cse_detection__detect_cse_in_goal_5_p_0(SubGoal0_152, &SubGoal_150, STATE_VARIABLE_CseInfo_0_117, STATE_VARIABLE_CseInfo_118, InstMap0_10);
                    {
                      GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (Reason0_57));
                      MR_hl_field(MR_mktag(3), GoalExpr_32, 2) = ((MR_Box) (SubGoal_150));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason0_57, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                      {
                        MR_Word SubGoal_150;

                        check_hlds__cse_detection__detect_cse_in_goal_5_p_0(SubGoal0_152, &SubGoal_150, STATE_VARIABLE_CseInfo_0_117, STATE_VARIABLE_CseInfo_118, InstMap0_10);
                        {
                          GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (Reason0_57));
                          MR_hl_field(MR_mktag(3), GoalExpr_32, 2) = ((MR_Box) (SubGoal_150));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word SubGoalExpr0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal0_152, (MR_Integer) 0))));
                        MR_Word SubGoalInfo0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal0_152, (MR_Integer) 1))));
                        MR_Word SwitchVar_67;
                        MR_Word CanFail_68;
                        MR_Word Cases0_69;

                        succeeded = ((((MR_tag((MR_Word) SubGoalExpr0_65)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubGoalExpr0_65, (MR_Integer) 0)))) == (MR_Integer) 4)));
                        if (succeeded)
                        {
                          SwitchVar_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubGoalExpr0_65, (MR_Integer) 1))));
                          CanFail_68 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), SubGoalExpr0_65, (MR_Integer) 2))) & (MR_Integer) 1);
                          Cases0_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubGoalExpr0_65, (MR_Integer) 3))));
                          {
                            MR_Word Cases_70;
                            MR_Word SubGoalExpr_71;
                            MR_Word SubGoal_146;

                            check_hlds__cse_detection__detect_cse_in_cases_arms_5_p_0(Cases0_69, &Cases_70, STATE_VARIABLE_CseInfo_0_117, STATE_VARIABLE_CseInfo_118, InstMap0_10);
                            {
                              SubGoalExpr_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), SubGoalExpr_71, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                              MR_hl_field(MR_mktag(3), SubGoalExpr_71, 1) = ((MR_Box) (SwitchVar_67));
                              MR_hl_field(MR_mktag(3), SubGoalExpr_71, 2) = (MR_Box) ((MR_Unsigned) (CanFail_68));
                              MR_hl_field(MR_mktag(3), SubGoalExpr_71, 3) = ((MR_Box) (Cases_70));
                            }
                            {
                              SubGoal_146 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), SubGoal_146, 0) = ((MR_Box) (SubGoalExpr_71));
                              MR_hl_field(MR_mktag(0), SubGoal_146, 1) = ((MR_Box) (SubGoalInfo0_66));
                            }
                            {
                              GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                              MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (Reason0_57));
                              MR_hl_field(MR_mktag(3), GoalExpr_32, 2) = ((MR_Box) (SubGoal_146));
                            }
                          }
                        }
                        else
                        {
                          MR_Word SubGoal_147;

                          check_hlds__cse_detection__detect_cse_in_goal_5_p_0(SubGoal0_152, &SubGoal_147, STATE_VARIABLE_CseInfo_0_117, STATE_VARIABLE_CseInfo_118, InstMap0_10);
                          {
                            GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                            MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (Reason0_57));
                            MR_hl_field(MR_mktag(3), GoalExpr_32, 2) = ((MR_Box) (SubGoal_147));
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word FGTReason_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason0_57, (MR_Integer) 2))) & (MR_Integer) 3);

                        switch (FGTReason_59) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              GoalExpr_32 = GoalExpr0_12;
                              *STATE_VARIABLE_CseInfo_118 = STATE_VARIABLE_CseInfo_0_117;
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word OldRedo_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_0_117, (MR_Integer) 4))) & (MR_Integer) 1);
                              MR_Word SubGoalRedo_61;
                              MR_Word STATE_VARIABLE_CseInfo_135_135;
                              MR_Word STATE_VARIABLE_CseInfo_137_137;
                              MR_Word Var_139;
                              MR_Word SubGoal_142;
                              MR_Word Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_0_117, (MR_Integer) 0))));
                              MR_Word Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_0_117, (MR_Integer) 1))));
                              MR_Word Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_0_117, (MR_Integer) 2))));
                              MR_Word Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_0_117, (MR_Integer) 3))));
                              MR_Word Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_0_117, (MR_Integer) 5))));
                              MR_Word Var_189;
                              MR_Word Var_190;
                              MR_Word Var_191;
                              MR_Word Var_192;
                              MR_Word Var_194;

                              {
                                STATE_VARIABLE_CseInfo_135_135 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_135_135, 0) = ((MR_Box) (Var_173));
                                MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_135_135, 1) = ((MR_Box) (Var_174));
                                MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_135_135, 2) = ((MR_Box) (Var_175));
                                MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_135_135, 3) = ((MR_Box) (Var_176));
                                MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_135_135, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                                MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_135_135, 5) = ((MR_Box) (Var_177));
                              }
                              check_hlds__cse_detection__detect_cse_in_goal_5_p_0(SubGoal0_152, &SubGoal_142, STATE_VARIABLE_CseInfo_135_135, &STATE_VARIABLE_CseInfo_137_137, InstMap0_10);
                              SubGoalRedo_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_137_137, (MR_Integer) 4))) & (MR_Integer) 1);
                              Var_139 = mercury__bool__or_2_f_0(OldRedo_60, SubGoalRedo_61);
                              Var_189 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_137_137, (MR_Integer) 0))));
                              Var_190 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_137_137, (MR_Integer) 1))));
                              Var_191 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_137_137, (MR_Integer) 2))));
                              Var_192 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_137_137, (MR_Integer) 3))));
                              Var_194 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_137_137, (MR_Integer) 5))));
                              {
                                MR_Word base;
                                base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                                *STATE_VARIABLE_CseInfo_118 = base;
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_189));
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_190));
                                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_191));
                                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_192));
                                MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (Var_139));
                                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_194));
                              }
                              switch (SubGoalRedo_61) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  {
                                    GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                                    MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (Reason0_57));
                                    MR_hl_field(MR_mktag(3), GoalExpr_32, 2) = ((MR_Box) (SubGoal_142));
                                  }
                                  break;
                                case (MR_Integer) 1:
                                  GoalExpr_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_142, (MR_Integer) 0))));
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
                              MR_Word SubGoal_143;

                              check_hlds__cse_detection__detect_cse_in_goal_5_p_0(SubGoal0_152, &SubGoal_143, STATE_VARIABLE_CseInfo_0_117, STATE_VARIABLE_CseInfo_118, InstMap0_10);
                              {
                                GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                                MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (Reason0_57));
                                MR_hl_field(MR_mktag(3), GoalExpr_32, 2) = ((MR_Box) (SubGoal_143));
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
              MR_Word Cond0_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
              MR_Word Then0_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
              MR_Word Else0_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 4))));
              MR_Word Vars_159 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word NonLocals_160;
              MR_Word NonLocalsList_161;

              NonLocals_160 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_13);
              NonLocalsList_161 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_160);
              check_hlds__cse_detection__detect_cse_in_ite_10_p_0(NonLocalsList_161, Vars_159, Cond0_98, Then0_99, Else0_100, GoalInfo_13, InstMap0_10, STATE_VARIABLE_CseInfo_0_117, STATE_VARIABLE_CseInfo_118, &GoalExpr_32);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word ShortHand_111;

              switch (MR_tag((MR_Word) ShortHand0_101)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_goal_update_instmap\'/6", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word AtomicGoalType_102 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_101, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word Outer_103 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_101, (MR_Integer) 1))));
                    MR_Word Inner_104 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_101, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_101, (MR_Integer) 3))));
                    MR_Word MainGoal0_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_101, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_101, (MR_Integer) 5))));
                    MR_Word OrElseInners_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_101, (MR_Integer) 6))));
                    MR_Word MainGoal_109;
                    MR_Word OrElseGoals_110;
                    MR_Word STATE_VARIABLE_CseInfo_122_122;

                    check_hlds__cse_detection__detect_cse_in_goal_5_p_0(MainGoal0_106, &MainGoal_109, STATE_VARIABLE_CseInfo_0_117, &STATE_VARIABLE_CseInfo_122_122, InstMap0_10);
                    check_hlds__cse_detection__detect_cse_in_independent_goals_5_p_0(OrElseGoals0_107, &OrElseGoals_110, STATE_VARIABLE_CseInfo_122_122, STATE_VARIABLE_CseInfo_118, InstMap0_10);
                    {
                      ShortHand_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ShortHand_111, 0) = (MR_Box) ((MR_Unsigned) (AtomicGoalType_102));
                      MR_hl_field(MR_mktag(1), ShortHand_111, 1) = ((MR_Box) (Outer_103));
                      MR_hl_field(MR_mktag(1), ShortHand_111, 2) = ((MR_Box) (Inner_104));
                      MR_hl_field(MR_mktag(1), ShortHand_111, 3) = ((MR_Box) (MaybeOutputVars_105));
                      MR_hl_field(MR_mktag(1), ShortHand_111, 4) = ((MR_Box) (MainGoal_109));
                      MR_hl_field(MR_mktag(1), ShortHand_111, 5) = ((MR_Box) (OrElseGoals_110));
                      MR_hl_field(MR_mktag(1), ShortHand_111, 6) = ((MR_Box) (OrElseInners_108));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_114 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_101, (MR_Integer) 0))));
                    MR_Word ResultVar_115 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_101, (MR_Integer) 1))));
                    MR_Word SubGoal0_162 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_101, (MR_Integer) 2))));
                    MR_Word SubGoal_163;

                    check_hlds__cse_detection__detect_cse_in_goal_5_p_0(SubGoal0_162, &SubGoal_163, STATE_VARIABLE_CseInfo_0_117, STATE_VARIABLE_CseInfo_118, InstMap0_10);
                    {
                      ShortHand_111 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ShortHand_111, 0) = ((MR_Box) (MaybeIO_114));
                      MR_hl_field(MR_mktag(2), ShortHand_111, 1) = ((MR_Box) (ResultVar_115));
                      MR_hl_field(MR_mktag(2), ShortHand_111, 2) = ((MR_Box) (SubGoal_163));
                    }
                  }
                  break;
              }
              {
                GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (ShortHand_111));
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
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_13));
    }
    InstMapDelta_116 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_13);
    hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_116, InstMap0_10, InstMap_11);
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word STATE_VARIABLE_CseInfo_0_11,
  MR_Word * STATE_VARIABLE_CseInfo_12,
  MR_Word InstMap0_9)
{
  {
    MR_Word _InstMap_10;

    check_hlds__cse_detection__detect_cse_in_goal_update_instmap_6_p_0(Goal0_6, Goal_7, STATE_VARIABLE_CseInfo_0_11, STATE_VARIABLE_CseInfo_12, InstMap0_9, &_InstMap_10);
  }
}

static MR_bool MR_CALL 
check_hlds__cse_detection__may_pull_lhs_inst_cons_id_3_p_0(
  MR_Word CseInfo_4,
  MR_Word VarInst_5,
  MR_Word ConsId_6)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CseInfo_4, (MR_Integer) 0))));

    succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(ModuleInfo_7, VarInst_5);
    if (succeeded)
    {
      succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_7, VarInst_5);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word FunctorBoundInsts_8;
        MR_Word MayPullConsId_9;

        succeeded = check_hlds__inst_test__inst_is_bound_to_functors_3_p_0(ModuleInfo_7, VarInst_5, &FunctorBoundInsts_8);
        if (succeeded)
        {
          check_hlds__cse_detection__compute_may_pull_cons_id_4_p_0(ModuleInfo_7, FunctorBoundInsts_8, ConsId_6, &MayPullConsId_9);
          succeeded = (MayPullConsId_9 == (MR_Integer) 0);
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_9_p_0(
  MR_Word Goals0_10,
  MR_Word Var_11,
  MR_Word STATE_VARIABLE_CseInfo_0_22,
  MR_Word * STATE_VARIABLE_CseInfo_23,
  MR_Word * Unify_13,
  MR_Word * ConsId_14,
  MR_Word * FirstOldNew_15,
  MR_Word * LaterOldNew_16,
  MR_Word * Goals_17)
{
  {
    MR_bool succeeded;
    MR_Word CseState_19;

    succeeded = check_hlds__cse_detection__common_deconstruct_2_7_p_0(Goals0_10, Var_11, (MR_Word) ((MR_Unsigned) 0U), &CseState_19, STATE_VARIABLE_CseInfo_0_22, STATE_VARIABLE_CseInfo_23, Goals_17);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) CseState_19)) == (MR_Integer) 1);
      if (succeeded)
      {
        *Unify_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CseState_19, (MR_Integer) 0))));
        *ConsId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CseState_19, (MR_Integer) 1))));
        *FirstOldNew_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CseState_19, (MR_Integer) 2))));
        *LaterOldNew_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CseState_19, (MR_Integer) 3))));
        succeeded = (*LaterOldNew_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
    }
    return succeeded;
  }
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
      MR_Word Case0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Case_20;
      MR_Word Cases_21;
      MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_15, (MR_Integer) 0))));
      MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_15, (MR_Integer) 1))));
      MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_15, (MR_Integer) 2))));
      MR_Word Goal_25;
      MR_Word STATE_VARIABLE_CseState_35_35;
      MR_Word STATE_VARIABLE_CseInfo_36_36;
      MR_Word Var_49;
      MR_Box conv4_STATE_VARIABLE_CseState_35_35;
      MR_Box conv3_STATE_VARIABLE_CseInfo_36_36;

      check_hlds__switch_detection__find_bind_var_9_p_0((MR_Word) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0), (MR_Word) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0), HeadVar__2_2, (MR_Word) (&check_hlds__cse_detection_scalar_common_2[4]), Goal0_24, &Goal_25, ((MR_Box) (STATE_VARIABLE_CseState_0_3)), &conv4_STATE_VARIABLE_CseState_35_35, ((MR_Box) (STATE_VARIABLE_CseInfo_0_5)), &conv3_STATE_VARIABLE_CseInfo_36_36, &Var_49);
      STATE_VARIABLE_CseState_35_35 = ((MR_Word) (conv4_STATE_VARIABLE_CseState_35_35));
      STATE_VARIABLE_CseInfo_36_36 = ((MR_Word) (conv3_STATE_VARIABLE_CseInfo_36_36));
      succeeded = ((MR_Integer) 0 == Var_49);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_CseState_35_35)) == (MR_Integer) 1);
        if (succeeded)
        {
          {
            Case_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Case_20, 0) = ((MR_Box) (MainConsId_22));
            MR_hl_field(MR_mktag(0), Case_20, 1) = ((MR_Box) (OtherConsIds_23));
            MR_hl_field(MR_mktag(0), Case_20, 2) = ((MR_Box) (Goal_25));
          }
          succeeded = check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(Cases0_16, HeadVar__2_2, STATE_VARIABLE_CseState_35_35, STATE_VARIABLE_CseState_4, STATE_VARIABLE_CseInfo_36_36, STATE_VARIABLE_CseInfo_6, &Cases_21);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__7_7 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_20));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_21));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__cse_detection__compute_may_pull_cons_id_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
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
      MR_Word BoundInst_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundInsts_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word InstConsId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_8, (MR_Integer) 0))));
      MR_Word ArgInsts_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_8, (MR_Integer) 1))));

      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(HeadVar__3_3, InstConsId_12);
      if (!(succeeded))
      {
        MR_Word SymName_14;
        MR_Integer Arity_15;
        MR_Word InstSymName_17;
        MR_Integer InstArity_18;

        succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          SymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
          Arity_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
          succeeded = ((((MR_tag((MR_Word) InstConsId_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstConsId_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            InstSymName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstConsId_12, (MR_Integer) 1))));
            InstArity_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), InstConsId_12, (MR_Integer) 2))));
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
          MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&check_hlds__cse_detection_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (check_hlds__cse_detection__compute_may_pull_cons_id_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (HeadVar__1_1));
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
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(
  MR_Word UnifyGoal_6,
  MR_Word FirstOldNew_7,
  MR_Word LaterOldNew_8,
  MR_Word STATE_VARIABLE_CseInfo_0_25,
  MR_Word * STATE_VARIABLE_CseInfo_26)
{
  {
    MR_bool succeeded;
    MR_Word UnifyInfo_13;
    MR_Word Var_16;
    MR_Word ConsId_17;
    MR_Word ModuleInfo_22;
    MR_Word VarTypes_23;
    MR_Word Type_24;
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyGoal_6, (MR_Integer) 0))));

    succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 1);
    if (succeeded)
    {
      UnifyInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 3))));
      succeeded = ((MR_tag((MR_Word) UnifyInfo_13)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnifyInfo_13, (MR_Integer) 0))));
        ConsId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnifyInfo_13, (MR_Integer) 1))));
        ModuleInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 0))));
        VarTypes_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 2))));
        hlds__vartypes__lookup_var_type_3_p_0(VarTypes_23, Var_16, &Type_24);
        succeeded = check_hlds__type_util__cons_id_is_existq_cons_3_p_0(ModuleInfo_22, Type_24, ConsId_17);
      }
    }
    if (succeeded)
      check_hlds__cse_detection__update_existential_data_structures_4_p_0(FirstOldNew_7, LaterOldNew_8, STATE_VARIABLE_CseInfo_0_25, STATE_VARIABLE_CseInfo_26);
    else
      *STATE_VARIABLE_CseInfo_26 = STATE_VARIABLE_CseInfo_0_25;
  }
}

static void MR_CALL 
check_hlds__cse_detection__update_existential_data_structures_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Renaming_18;

    check_hlds__cse_detection__find_merged_tvars_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Renaming_18);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Renaming_18));
  }
}

static void MR_CALL 
check_hlds__cse_detection__update_existential_data_structures_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_NewTvarMap_15;

    check_hlds__cse_detection__find_type_info_locn_tvar_map_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_NewTvarMap_15);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_NewTvarMap_15));
  }
}

static void MR_CALL 
check_hlds__cse_detection__update_existential_data_structures_4_p_0(
  MR_Word FirstOldNew_5,
  MR_Word LaterOldNews_6,
  MR_Word STATE_VARIABLE_CseInfo_0_20,
  MR_Word * STATE_VARIABLE_CseInfo_21)
{
  {
    MR_Word LaterOldNew_8;
    MR_Word FirstOldNewMap_9;
    MR_Word LaterOldNewMap_10;
    MR_Word RttiVarMaps0_11;
    MR_Word VarTypes0_12;
    MR_Word TvarsList_13;
    MR_Word NewTvarMap_14;
    MR_Word Renaming_15;
    MR_Word OldNew_16;
    MR_Word OldNewMap_17;
    MR_Word RttiVarMaps_18;
    MR_Word VarTypes_19;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Box conv1_NewTvarMap_14;
    MR_Box conv3_Renaming_15;

    mercury__list__condense_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_2[0]), LaterOldNews_6, &LaterOldNew_8);
    mercury__map__from_assoc_list_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[0]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[0]), FirstOldNew_5, &FirstOldNewMap_9);
    mercury__map__from_assoc_list_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[0]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[0]), LaterOldNew_8, &LaterOldNewMap_10);
    VarTypes0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_0_20, (MR_Integer) 2))));
    RttiVarMaps0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_0_20, (MR_Integer) 3))));
    hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(RttiVarMaps0_11, &TvarsList_13);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&check_hlds__cse_detection_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (check_hlds__cse_detection__update_existential_data_structures_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (RttiVarMaps0_11));
      MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (FirstOldNewMap_9));
    }
    Var_23 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]));
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), (MR_Word) (&check_hlds__cse_detection_scalar_common_2[1]), Var_22, TvarsList_13, ((MR_Box) (Var_23)), &conv1_NewTvarMap_14);
    NewTvarMap_14 = ((MR_Word) (conv1_NewTvarMap_14));
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&check_hlds__cse_detection_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (check_hlds__cse_detection__update_existential_data_structures_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (RttiVarMaps0_11));
      MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (LaterOldNewMap_10));
      MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (NewTvarMap_14));
    }
    Var_25 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]));
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), (MR_Word) (&check_hlds__cse_detection_scalar_common_2[2]), Var_24, TvarsList_13, ((MR_Box) (Var_25)), &conv3_Renaming_15);
    Renaming_15 = ((MR_Word) (conv3_Renaming_15));
    mercury__list__append_3_p_1((MR_Word) (&check_hlds__cse_detection_scalar_common_2[0]), FirstOldNew_5, LaterOldNew_8, &OldNew_16);
    mercury__map__from_assoc_list_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[0]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[0]), OldNew_16, &OldNewMap_17);
    Var_26 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
    hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(Renaming_15, Var_26, OldNewMap_17, RttiVarMaps0_11, &RttiVarMaps_18);
    hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0(Renaming_15, VarTypes0_12, &VarTypes_19);
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_0_20, (MR_Integer) 0))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_0_20, (MR_Integer) 1))));
    Var_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_0_20, (MR_Integer) 4))) & (MR_Integer) 1);
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_0_20, (MR_Integer) 5))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CseInfo_21 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (RttiVarMaps_18));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (Var_43));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_44));
    }
  }
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
      MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_20;
      MR_Word Goals_21;
      MR_Word STATE_VARIABLE_CseState_31_31;
      MR_Word STATE_VARIABLE_CseInfo_32_32;
      MR_Word Var_45;
      MR_Box conv4_STATE_VARIABLE_CseState_31_31;
      MR_Box conv3_STATE_VARIABLE_CseInfo_32_32;

      check_hlds__switch_detection__find_bind_var_9_p_0((MR_Word) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0), (MR_Word) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0), HeadVar__2_2, (MR_Word) (&check_hlds__cse_detection_scalar_common_2[3]), Goal0_15, &Goal_20, ((MR_Box) (STATE_VARIABLE_CseState_0_3)), &conv4_STATE_VARIABLE_CseState_31_31, ((MR_Box) (STATE_VARIABLE_CseInfo_0_5)), &conv3_STATE_VARIABLE_CseInfo_32_32, &Var_45);
      STATE_VARIABLE_CseState_31_31 = ((MR_Word) (conv4_STATE_VARIABLE_CseState_31_31));
      STATE_VARIABLE_CseInfo_32_32 = ((MR_Word) (conv3_STATE_VARIABLE_CseInfo_32_32));
      succeeded = ((MR_Integer) 0 == Var_45);
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
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__7_7 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_20));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_21));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__cse_detection__record_pull_decline_3_p_0(
  MR_Word UnifyGoal_4,
  MR_Word STATE_VARIABLE_CseInfo_0_11,
  MR_Word * STATE_VARIABLE_CseInfo_12)
{
  {
    MR_Word UnifyGoalInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyGoal_4, (MR_Integer) 1))));
    MR_Word Context_8;
    MR_Word NoPullContexts0_9;
    MR_Word NoPullContexts_10;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;

    Context_8 = hlds__hlds_goal__goal_info_get_context_1_f_0(UnifyGoalInfo_7);
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_0_11, (MR_Integer) 0))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_0_11, (MR_Integer) 1))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_0_11, (MR_Integer) 2))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_0_11, (MR_Integer) 3))));
    Var_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_0_11, (MR_Integer) 4))) & (MR_Integer) 1);
    NoPullContexts0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CseInfo_0_11, (MR_Integer) 5))));
    {
      NoPullContexts_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), NoPullContexts_10, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(1), NoPullContexts_10, 1) = ((MR_Box) (NoPullContexts0_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CseInfo_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (Var_18));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (NoPullContexts_10));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__cse_detection____Unify____cse_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__cse_detection____Compare____cse_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__cse_detection____Unify____cse_state_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__cse_detection____Compare____cse_state_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____may_pull_cons_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__cse_detection____Unify____may_pull_cons_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__cse_detection____Compare____may_pull_cons_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__cse_detection____Compare____may_pull_cons_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
