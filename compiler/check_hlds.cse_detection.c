/*
** Automatically generated from `cse_detection.m'
** by the Mercury compiler,
** version rotd-2016-10-04
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


/* :- module check_hlds.cse_detection. */
/* :- implementation. */

/*
INIT mercury__check_hlds__cse_detection__init
ENDINIT
*/

#include "check_hlds.cse_detection.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modes.mih"
#include "check_hlds.switch_detection.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
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

static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_info_0_0[4];

static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_info_0_0[4];

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_info_0_0[1];

static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_info_0[1];

static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_info_0[1];

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_state_0_1[3];

static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_state_0_1[3];

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1;

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_2;

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_0[2];

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_1[1];

static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_state_0[2];

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_state_0[3];

static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_state_0[3];

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0_10001(
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
  MR_Box check_hlds__cse_detection__wrapper_arg_2);

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0_10001(
  MR_Box * check_hlds__cse_detection__wrapper_arg_1,
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
  MR_Box check_hlds__cse_detection__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0_10001(
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
  MR_Box check_hlds__cse_detection__wrapper_arg_2);

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0_10001(
  MR_Box * check_hlds__cse_detection__wrapper_arg_1,
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
  MR_Box check_hlds__cse_detection__wrapper_arg_3);

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0(
  MR_Word * check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
  MR_Word check_hlds__cse_detection__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__HeadVar__2_2);

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0(
  MR_Word * check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
  MR_Word check_hlds__cse_detection__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__HeadVar__2_2);

static void MR_CALL 
check_hlds__cse_detection__find_merged_tvars_6_p_0(
  MR_Word check_hlds__cse_detection__RttiVarMaps_7,
  MR_Word check_hlds__cse_detection__LaterOldNewMap_8,
  MR_Word check_hlds__cse_detection__NewTvarMap_9,
  MR_Word check_hlds__cse_detection__Tvar_10,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_Renaming_18);

static void MR_CALL 
check_hlds__cse_detection__find_type_info_locn_tvar_map_5_p_0(
  MR_Word check_hlds__cse_detection__RttiVarMaps_6,
  MR_Word check_hlds__cse_detection__FirstOldNewMap_7,
  MR_Word check_hlds__cse_detection__Tvar_8,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_0_14,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_15);

static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_2(
  MR_Box check_hlds__cse_detection__closure_arg,
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
  MR_Box * check_hlds__cse_detection__wrapper_arg_3);

static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_1(
  MR_Box check_hlds__cse_detection__closure_arg,
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
  MR_Box * check_hlds__cse_detection__wrapper_arg_3);

static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(
  MR_Word check_hlds__cse_detection__Unify_6,
  MR_Word check_hlds__cse_detection__FirstOldNew_7,
  MR_Word check_hlds__cse_detection__LaterOldNew_8,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26);

static void MR_CALL 
check_hlds__cse_detection__pair_subterms_4_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
  MR_Word check_hlds__cse_detection__HeadVar__3_3,
  MR_Word * check_hlds__cse_detection__HeadVar__4_4);

static MR_bool MR_CALL 
check_hlds__cse_detection__find_similar_deconstruct_5_p_0(
  MR_Word check_hlds__cse_detection__HoistedUnifyGoal_6,
  MR_Word check_hlds__cse_detection__OldUnifyGoal_7,
  MR_Word check_hlds__cse_detection__Context_8,
  MR_Word * check_hlds__cse_detection__OldHoistedVars_9,
  MR_Word * check_hlds__cse_detection__Replacements_10);

static void MR_CALL 
check_hlds__cse_detection__create_new_arg_vars_7_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__Context_2,
  MR_Word check_hlds__cse_detection__UnifyContext_3,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_4,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_5,
  MR_Word * check_hlds__cse_detection__HeadVar__6_6,
  MR_Word * check_hlds__cse_detection__HeadVar__7_7);

static void MR_CALL 
check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(
  MR_Word check_hlds__cse_detection__Var_8,
  MR_Word check_hlds__cse_detection__Goal0_9,
  MR_Word * check_hlds__cse_detection__Goals_10,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_23,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25);

static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0_1(
  MR_Box check_hlds__cse_detection__closure_arg,
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
  MR_Box * check_hlds__cse_detection__wrapper_arg_7);

static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_4,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
  MR_Word * check_hlds__cse_detection__HeadVar__7_7);

static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0_1(
  MR_Box check_hlds__cse_detection__closure_arg,
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
  MR_Box * check_hlds__cse_detection__wrapper_arg_7);

static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_4,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
  MR_Word * check_hlds__cse_detection__HeadVar__7_7);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_arms_10_p_0(
  MR_Word check_hlds__cse_detection__Cond0_11,
  MR_Word * check_hlds__cse_detection__Cond_12,
  MR_Word check_hlds__cse_detection__Then0_13,
  MR_Word * check_hlds__cse_detection__Then_14,
  MR_Word check_hlds__cse_detection__Else0_15,
  MR_Word * check_hlds__cse_detection__Else_16,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26,
  MR_Word check_hlds__cse_detection__InstMap0_18,
  MR_Word * check_hlds__cse_detection__Redo_19);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0_2(
  MR_Box check_hlds__cse_detection__closure_arg,
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
  MR_Box * check_hlds__cse_detection__wrapper_arg_7);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0_1(
  MR_Box check_hlds__cse_detection__closure_arg,
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
  MR_Box * check_hlds__cse_detection__wrapper_arg_7);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__IfVars_2,
  MR_Word check_hlds__cse_detection__Cond0_3,
  MR_Word check_hlds__cse_detection__Then0_4,
  MR_Word check_hlds__cse_detection__Else0_5,
  MR_Word check_hlds__cse_detection__GoalInfo_6,
  MR_Word check_hlds__cse_detection__InstMap_7,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_9,
  MR_Word * check_hlds__cse_detection__Redo_10,
  MR_Word * check_hlds__cse_detection__HeadVar__11_11);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_arms_6_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
  MR_Word check_hlds__cse_detection__InstMap0_5,
  MR_Word * check_hlds__cse_detection__HeadVar__6_6);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_10_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__SwitchVar_2,
  MR_Word check_hlds__cse_detection__CanFail_3,
  MR_Word check_hlds__cse_detection__Cases0_4,
  MR_Word check_hlds__cse_detection__HeadVar__5_5,
  MR_Word check_hlds__cse_detection__InstMap0_6,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_8,
  MR_Word * check_hlds__cse_detection__Redo_9,
  MR_Word * check_hlds__cse_detection__GoalExpr_10);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
  MR_Word check_hlds__cse_detection__InstMap0_5,
  MR_Word * check_hlds__cse_detection__HeadVar__6_6);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_disj_8_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__Goals0_2,
  MR_Word check_hlds__cse_detection__GoalInfo0_3,
  MR_Word check_hlds__cse_detection__HeadVar__4_4,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
  MR_Word * check_hlds__cse_detection__Redo_7,
  MR_Word * check_hlds__cse_detection__HeadVar__8_8);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_conj_7_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
  MR_Word check_hlds__cse_detection__HeadVar__5_5,
  MR_Word check_hlds__cse_detection__HeadVar__6_6,
  MR_Word * check_hlds__cse_detection__HeadVar__7_7);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(
  MR_Word check_hlds__cse_detection__GoalExpr0_8,
  MR_Word * check_hlds__cse_detection__GoalExpr_9,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_97,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_98,
  MR_Word check_hlds__cse_detection__GoalInfo_11,
  MR_Word check_hlds__cse_detection__InstMap0_12,
  MR_Word * check_hlds__cse_detection__Redo_13);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(
  MR_Word check_hlds__cse_detection__Goal0_8,
  MR_Word * check_hlds__cse_detection__Goal_9,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_18,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_19,
  MR_Word check_hlds__cse_detection__InstMap0_11,
  MR_Word * check_hlds__cse_detection__InstMap_12,
  MR_Word * check_hlds__cse_detection__Redo_13);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_6_p_0(
  MR_Word check_hlds__cse_detection__Goal0_7,
  MR_Word * check_hlds__cse_detection__Goal_8,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_13,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_14,
  MR_Word check_hlds__cse_detection__InstMap0_10,
  MR_Word * check_hlds__cse_detection__Redo_11);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_proc_pass_4_p_0(
  MR_Word check_hlds__cse_detection__ModuleInfo_5,
  MR_Word * check_hlds__cse_detection__Redo_6,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_27);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_procs_4_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_4);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_preds_3_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_3);


static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_1[6][2];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_2[8][3];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_3[1][10];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_4[1][8];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_5[1][9];




static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_1[6][2] = {
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
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_2[8][3] = {
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
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__cse_detection__detect_cse_in_ite_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__cse_detection__detect_cse_in_ite_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__cse_detection__common_deconstruct_2_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_3[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0,
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_info_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__cse_detection__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__cse_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0
};

static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_info_0_0[4] = {
  (MR_String) "csei_varset",
  (MR_String) "csei_vartypes",
  (MR_String) "csei_rtti_varmaps",
  (MR_String) "csei_module_info"
};

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0 = {
  (MR_String) "cse_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_info_0_0,
  check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_info_0_0[1] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0
};

static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_info_0_0
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__cse_detection____Unify____cse_info_0_0_10001)),
  ((MR_Box) (check_hlds__cse_detection____Compare____cse_info_0_0_10001)),
  (MR_String) "check_hlds.cse_detection",
  (MR_String) "cse_info",
  {     check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_info_0 },
  {     check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_info_0
};

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_0 = {
  (MR_String) "before_candidate",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__cse_detection__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_state_0_1[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__cse_detection__list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_state_0_1[3] = {
  (MR_String) "hc_goal",
  (MR_String) "hc_first_old_new",
  (MR_String) "hc_later_old_new"
};

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1 = {
  (MR_String) "have_candidate",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_state_0_1,
  check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_state_0_1,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_2 = {
  (MR_String) "multiple_candidates",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_1
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__cse_detection____Unify____cse_state_0_0_10001)),
  ((MR_Box) (check_hlds__cse_detection____Compare____cse_state_0_0_10001)),
  (MR_String) "check_hlds.cse_detection",
  (MR_String) "cse_state",
  {     check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_state_0 },
  {     check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_state_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_state_0
};

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0_10001(
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
  MR_Box check_hlds__cse_detection__wrapper_arg_2)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;

    {
      check_hlds__cse_detection__succeeded = check_hlds__cse_detection____Unify____cse_info_0_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2));
    }
    return check_hlds__cse_detection__succeeded;
  }
}

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0_10001(
  MR_Box * check_hlds__cse_detection__wrapper_arg_1,
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
  MR_Box check_hlds__cse_detection__wrapper_arg_3)
{
  {
    MR_Word check_hlds__cse_detection__conv0_HeadVar__1_1;

    {
      check_hlds__cse_detection____Compare____cse_info_0_0(&check_hlds__cse_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), ((MR_Word) check_hlds__cse_detection__wrapper_arg_3));
    }
    *check_hlds__cse_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__cse_detection__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0_10001(
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
  MR_Box check_hlds__cse_detection__wrapper_arg_2)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;

    {
      check_hlds__cse_detection__succeeded = check_hlds__cse_detection____Unify____cse_state_0_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2));
    }
    return check_hlds__cse_detection__succeeded;
  }
}

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0_10001(
  MR_Box * check_hlds__cse_detection__wrapper_arg_1,
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
  MR_Box check_hlds__cse_detection__wrapper_arg_3)
{
  {
    MR_Word check_hlds__cse_detection__conv0_HeadVar__1_1;

    {
      check_hlds__cse_detection____Compare____cse_state_0_0(&check_hlds__cse_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), ((MR_Word) check_hlds__cse_detection__wrapper_arg_3));
    }
    *check_hlds__cse_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__cse_detection__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0(
  MR_Word * check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
  MR_Word check_hlds__cse_detection__HeadVar__3_3)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;
    MR_Integer check_hlds__cse_detection__CastX_24 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;
    MR_Integer check_hlds__cse_detection__CastY_25 = (MR_Integer) check_hlds__cse_detection__HeadVar__3_3;

    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastX_24 == check_hlds__cse_detection__CastY_25);
    if (check_hlds__cse_detection__succeeded)
      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(check_hlds__cse_detection__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(check_hlds__cse_detection__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(check_hlds__cse_detection__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__cse_detection__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word check_hlds__cse_detection__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__cse_detection__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(check_hlds__cse_detection__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__cse_detection__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word check_hlds__cse_detection__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word check_hlds__cse_detection__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word check_hlds__cse_detection__V_16_16;

                  {
                    hlds__hlds_goal____Compare____hlds_goal_0_0(&check_hlds__cse_detection__V_16_16, check_hlds__cse_detection__V_31_31, check_hlds__cse_detection__V_13_13);
                  }
                  check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_16_16 == (MR_Integer) 0);
                  check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
                  if (check_hlds__cse_detection__succeeded)
                    *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_16_16;
                  else
                    {
                      MR_Word check_hlds__cse_detection__V_17_17;

                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[3], &check_hlds__cse_detection__V_17_17, ((MR_Box) (check_hlds__cse_detection__V_30_30)), ((MR_Box) (check_hlds__cse_detection__V_14_14)));
                      }
                      check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_17_17 == (MR_Integer) 0);
                      check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
                      if (check_hlds__cse_detection__succeeded)
                        *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_17_17;
                      else
                        {
                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[4], check_hlds__cse_detection__HeadVar__1_1, ((MR_Box) (check_hlds__cse_detection__V_29_29)), ((MR_Box) (check_hlds__cse_detection__V_15_15)));
                          }
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
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__HeadVar__2_2)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;
    MR_Integer check_hlds__cse_detection__CastX_13 = (MR_Integer) check_hlds__cse_detection__HeadVar__1_1;
    MR_Integer check_hlds__cse_detection__CastY_14 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;

    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastX_13 == check_hlds__cse_detection__CastY_14);
    if (check_hlds__cse_detection__succeeded)
      check_hlds__cse_detection__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(check_hlds__cse_detection__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer check_hlds__cse_detection__CastX_3 = (MR_Integer) check_hlds__cse_detection__HeadVar__1_1;
                MR_Integer check_hlds__cse_detection__CastY_4 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;

                check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastY_4 == check_hlds__cse_detection__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer check_hlds__cse_detection__CastX_11 = (MR_Integer) check_hlds__cse_detection__HeadVar__1_1;
                MR_Integer check_hlds__cse_detection__CastY_12 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;

                check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastY_12 == check_hlds__cse_detection__CastX_11);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__cse_detection__TypeInfo_16_16;
            MR_Word check_hlds__cse_detection__TypeInfo_17_17;
            MR_Word check_hlds__cse_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__cse_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__cse_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word check_hlds__cse_detection__V_8_8;
            MR_Word check_hlds__cse_detection__V_9_9;
            MR_Word check_hlds__cse_detection__V_10_10;

            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__cse_detection__succeeded)
              {
                check_hlds__cse_detection__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__cse_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
                check_hlds__cse_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 2)));
                {
                  check_hlds__cse_detection__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(check_hlds__cse_detection__V_5_5, check_hlds__cse_detection__V_8_8);
                }
                if (check_hlds__cse_detection__succeeded)
                  {
                    check_hlds__cse_detection__TypeInfo_16_16 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[3];
                    {
                      check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__cse_detection__TypeInfo_16_16, ((MR_Box) (check_hlds__cse_detection__V_6_6)), ((MR_Box) (check_hlds__cse_detection__V_9_9)));
                    }
                    if (check_hlds__cse_detection__succeeded)
                      {
                        check_hlds__cse_detection__TypeInfo_17_17 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[4];
                        {
                          check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__cse_detection__TypeInfo_17_17, ((MR_Box) (check_hlds__cse_detection__V_7_7)), ((MR_Box) (check_hlds__cse_detection__V_10_10)));
                        }
                      }
                  }
              }
          }
          break;
      }
    return check_hlds__cse_detection__succeeded;
  }
}

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0(
  MR_Word * check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
  MR_Word check_hlds__cse_detection__HeadVar__3_3)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;
    MR_Integer check_hlds__cse_detection__CastX_15 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;
    MR_Integer check_hlds__cse_detection__CastY_16 = (MR_Integer) check_hlds__cse_detection__HeadVar__3_3;

    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastX_15 == check_hlds__cse_detection__CastY_16);
    if (check_hlds__cse_detection__succeeded)
      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__cse_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__cse_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__cse_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__cse_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__cse_detection__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__cse_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__cse_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__cse_detection__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word check_hlds__cse_detection__V_12_12;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[2], &check_hlds__cse_detection__V_12_12, ((MR_Box) (check_hlds__cse_detection__V_4_4)), ((MR_Box) (check_hlds__cse_detection__V_8_8)));
        }
        check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_12_12 == (MR_Integer) 0);
        check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
        if (check_hlds__cse_detection__succeeded)
          *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_12_12;
        else
          {
            MR_Word check_hlds__cse_detection__V_13_13;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_2[3], &check_hlds__cse_detection__V_13_13, ((MR_Box) (check_hlds__cse_detection__V_5_5)), ((MR_Box) (check_hlds__cse_detection__V_9_9)));
            }
            check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_13_13 == (MR_Integer) 0);
            check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
            if (check_hlds__cse_detection__succeeded)
              *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_13_13;
            else
              {
                MR_Word check_hlds__cse_detection__V_14_14;

                {
                  hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&check_hlds__cse_detection__V_14_14, check_hlds__cse_detection__V_6_6, check_hlds__cse_detection__V_10_10);
                }
                check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_14_14 == (MR_Integer) 0);
                check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
                if (check_hlds__cse_detection__succeeded)
                  *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_14_14;
                else
                  {
                    hlds__hlds_module____Compare____module_info_0_0(check_hlds__cse_detection__HeadVar__1_1, check_hlds__cse_detection__V_7_7, check_hlds__cse_detection__V_11_11);
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__HeadVar__2_2)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;
    MR_Integer check_hlds__cse_detection__CastX_11 = (MR_Integer) check_hlds__cse_detection__HeadVar__1_1;
    MR_Integer check_hlds__cse_detection__CastY_12 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;

    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastX_11 == check_hlds__cse_detection__CastY_12);
    if (check_hlds__cse_detection__succeeded)
      check_hlds__cse_detection__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__cse_detection__TypeInfo_14_14;
        MR_Word check_hlds__cse_detection__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__cse_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__cse_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__cse_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word check_hlds__cse_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__cse_detection__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__cse_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__cse_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 3)));

        {
          check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[2], ((MR_Box) (check_hlds__cse_detection__V_3_3)), ((MR_Box) (check_hlds__cse_detection__V_7_7)));
        }
        if (check_hlds__cse_detection__succeeded)
          {
            check_hlds__cse_detection__TypeInfo_14_14 = (MR_Word) &check_hlds__cse_detection_scalar_common_2[3];
            {
              check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__cse_detection__TypeInfo_14_14, ((MR_Box) (check_hlds__cse_detection__V_4_4)), ((MR_Box) (check_hlds__cse_detection__V_8_8)));
            }
            if (check_hlds__cse_detection__succeeded)
              {
                {
                  check_hlds__cse_detection__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(check_hlds__cse_detection__V_5_5, check_hlds__cse_detection__V_9_9);
                }
                if (check_hlds__cse_detection__succeeded)
                  {
                    check_hlds__cse_detection__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__cse_detection__V_6_6, check_hlds__cse_detection__V_10_10);
                  }
              }
          }
      }
    return check_hlds__cse_detection__succeeded;
  }
}

static void MR_CALL 
check_hlds__cse_detection__find_merged_tvars_6_p_0(
  MR_Word check_hlds__cse_detection__RttiVarMaps_7,
  MR_Word check_hlds__cse_detection__LaterOldNewMap_8,
  MR_Word check_hlds__cse_detection__NewTvarMap_9,
  MR_Word check_hlds__cse_detection__Tvar_10,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_Renaming_18)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;
    MR_Word check_hlds__cse_detection__TypeInfoLocn0_12;
    MR_Word check_hlds__cse_detection__Old_13;
    MR_Word check_hlds__cse_detection__New_14;
    MR_Word check_hlds__cse_detection__TypeInfo_20_20;
    MR_Box check_hlds__cse_detection__conv0_New_14;

    {
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(check_hlds__cse_detection__RttiVarMaps_7, check_hlds__cse_detection__Tvar_10, &check_hlds__cse_detection__TypeInfoLocn0_12);
    }
    {
      hlds__hlds_rtti__type_info_locn_var_2_p_0(check_hlds__cse_detection__TypeInfoLocn0_12, &check_hlds__cse_detection__Old_13);
    }
    check_hlds__cse_detection__TypeInfo_20_20 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
    {
      check_hlds__cse_detection__succeeded = mercury__map__search_3_p_0(check_hlds__cse_detection__TypeInfo_20_20, check_hlds__cse_detection__TypeInfo_20_20, check_hlds__cse_detection__LaterOldNewMap_8, ((MR_Box) (check_hlds__cse_detection__Old_13)), &check_hlds__cse_detection__conv0_New_14);
    }
    if (check_hlds__cse_detection__succeeded)
      {
        check_hlds__cse_detection__New_14 = ((MR_Word) check_hlds__cse_detection__conv0_New_14);
        check_hlds__cse_detection__succeeded = MR_TRUE;
      }
    if (check_hlds__cse_detection__succeeded)
      {
        MR_Word check_hlds__cse_detection__TypeInfo_22_22;
        MR_Word check_hlds__cse_detection__TypeInfoLocn_15;
        MR_Word check_hlds__cse_detection__NewTvar_16;
        MR_Box check_hlds__cse_detection__conv1_NewTvar_16;

        {
          hlds__hlds_rtti__type_info_locn_set_var_3_p_0(check_hlds__cse_detection__New_14, check_hlds__cse_detection__TypeInfoLocn0_12, &check_hlds__cse_detection__TypeInfoLocn_15);
        }
        check_hlds__cse_detection__TypeInfo_22_22 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[1];
        {
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, check_hlds__cse_detection__TypeInfo_22_22, check_hlds__cse_detection__NewTvarMap_9, ((MR_Box) (check_hlds__cse_detection__TypeInfoLocn_15)), &check_hlds__cse_detection__conv1_NewTvar_16);
        }
        check_hlds__cse_detection__NewTvar_16 = ((MR_Word) check_hlds__cse_detection__conv1_NewTvar_16);
        {
          check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[1], ((MR_Box) (check_hlds__cse_detection__NewTvar_16)), ((MR_Box) (check_hlds__cse_detection__Tvar_10)));
        }
        if (check_hlds__cse_detection__succeeded)
          *check_hlds__cse_detection__STATE_VARIABLE_Renaming_18 = check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17;
        else
          {
            mercury__map__det_insert_4_p_0(check_hlds__cse_detection__TypeInfo_22_22, check_hlds__cse_detection__TypeInfo_22_22, ((MR_Box) (check_hlds__cse_detection__Tvar_10)), ((MR_Box) (check_hlds__cse_detection__NewTvar_16)), check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17, check_hlds__cse_detection__STATE_VARIABLE_Renaming_18);
          }
      }
    else
      *check_hlds__cse_detection__STATE_VARIABLE_Renaming_18 = check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17;
  }
}

static void MR_CALL 
check_hlds__cse_detection__find_type_info_locn_tvar_map_5_p_0(
  MR_Word check_hlds__cse_detection__RttiVarMaps_6,
  MR_Word check_hlds__cse_detection__FirstOldNewMap_7,
  MR_Word check_hlds__cse_detection__Tvar_8,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_0_14,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_15)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;
    MR_Word check_hlds__cse_detection__TypeInfoLocn0_10;
    MR_Word check_hlds__cse_detection__Old_11;
    MR_Word check_hlds__cse_detection__New_12;
    MR_Word check_hlds__cse_detection__TypeInfo_17_17;
    MR_Box check_hlds__cse_detection__conv0_New_12;

    {
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(check_hlds__cse_detection__RttiVarMaps_6, check_hlds__cse_detection__Tvar_8, &check_hlds__cse_detection__TypeInfoLocn0_10);
    }
    {
      hlds__hlds_rtti__type_info_locn_var_2_p_0(check_hlds__cse_detection__TypeInfoLocn0_10, &check_hlds__cse_detection__Old_11);
    }
    check_hlds__cse_detection__TypeInfo_17_17 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
    {
      check_hlds__cse_detection__succeeded = mercury__map__search_3_p_0(check_hlds__cse_detection__TypeInfo_17_17, check_hlds__cse_detection__TypeInfo_17_17, check_hlds__cse_detection__FirstOldNewMap_7, ((MR_Box) (check_hlds__cse_detection__Old_11)), &check_hlds__cse_detection__conv0_New_12);
    }
    if (check_hlds__cse_detection__succeeded)
      {
        check_hlds__cse_detection__New_12 = ((MR_Word) check_hlds__cse_detection__conv0_New_12);
        check_hlds__cse_detection__succeeded = MR_TRUE;
      }
    if (check_hlds__cse_detection__succeeded)
      {
        MR_Word check_hlds__cse_detection__TypeInfoLocn_13;

        {
          hlds__hlds_rtti__type_info_locn_set_var_3_p_0(check_hlds__cse_detection__New_12, check_hlds__cse_detection__TypeInfoLocn0_10, &check_hlds__cse_detection__TypeInfoLocn_13);
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, (MR_Word) &check_hlds__cse_detection_scalar_common_1[1], ((MR_Box) (check_hlds__cse_detection__TypeInfoLocn_13)), ((MR_Box) (check_hlds__cse_detection__Tvar_8)), check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_0_14, check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_15);
        }
      }
    else
      *check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_15 = check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_0_14;
  }
}

static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_2(
  MR_Box check_hlds__cse_detection__closure_arg,
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
  MR_Box * check_hlds__cse_detection__wrapper_arg_3)
{
  {
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
    MR_Word check_hlds__cse_detection__conv2_STATE_VARIABLE_Renaming_18;

    {
      check_hlds__cse_detection__find_merged_tvars_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv2_STATE_VARIABLE_Renaming_18);
    }
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv2_STATE_VARIABLE_Renaming_18));
  }
}

static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_1(
  MR_Box check_hlds__cse_detection__closure_arg,
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
  MR_Box * check_hlds__cse_detection__wrapper_arg_3)
{
  {
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
    MR_Word check_hlds__cse_detection__conv0_STATE_VARIABLE_NewTvarMap_15;

    {
      check_hlds__cse_detection__find_type_info_locn_tvar_map_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv0_STATE_VARIABLE_NewTvarMap_15);
    }
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv0_STATE_VARIABLE_NewTvarMap_15));
  }
}

static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(
  MR_Word check_hlds__cse_detection__Unify_6,
  MR_Word check_hlds__cse_detection__FirstOldNew_7,
  MR_Word check_hlds__cse_detection__LaterOldNew_8,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;
    MR_Word check_hlds__cse_detection__UnifyInfo_13;
    MR_Word check_hlds__cse_detection__Var_16;
    MR_Word check_hlds__cse_detection__ConsId_17;
    MR_Word check_hlds__cse_detection__ModuleInfo_22;
    MR_Word check_hlds__cse_detection__VarTypes_23;
    MR_Word check_hlds__cse_detection__Type_24;
    MR_Word check_hlds__cse_detection__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Unify_6, (MR_Integer) 0)));
    MR_Word check_hlds__cse_detection__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Unify_6, (MR_Integer) 1)));
    MR_Word check_hlds__cse_detection__V_10_10;
    MR_Word check_hlds__cse_detection__V_11_11;
    MR_Word check_hlds__cse_detection__V_12_12;
    MR_Word check_hlds__cse_detection__V_14_14;
    MR_Word check_hlds__cse_detection__V_18_18;
    MR_Word check_hlds__cse_detection__V_19_19;
    MR_Word check_hlds__cse_detection__V_20_20;
    MR_Word check_hlds__cse_detection__V_21_21;
    MR_Word check_hlds__cse_detection__V_29_29;
    MR_Word check_hlds__cse_detection__V_31_31;

    check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_27_27)) == (MR_mktag((MR_Integer) 1)));
    if (check_hlds__cse_detection__succeeded)
      {
        check_hlds__cse_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 0)));
        check_hlds__cse_detection__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 1)));
        check_hlds__cse_detection__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 2)));
        check_hlds__cse_detection__UnifyInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 3)));
        check_hlds__cse_detection__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 4)));
        check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__UnifyInfo_13)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__cse_detection__succeeded)
          {
            check_hlds__cse_detection__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 0)));
            check_hlds__cse_detection__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 1)));
            check_hlds__cse_detection__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 2)));
            check_hlds__cse_detection__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 3)));
            check_hlds__cse_detection__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 4)));
            check_hlds__cse_detection__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 5)));
            check_hlds__cse_detection__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 0)));
            check_hlds__cse_detection__VarTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 1)));
            check_hlds__cse_detection__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 2)));
            check_hlds__cse_detection__ModuleInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 3)));
            {
              hlds__vartypes__lookup_var_type_3_p_0(check_hlds__cse_detection__VarTypes_23, check_hlds__cse_detection__Var_16, &check_hlds__cse_detection__Type_24);
            }
            {
              check_hlds__cse_detection__succeeded = check_hlds__type_util__cons_id_is_existq_cons_3_p_0(check_hlds__cse_detection__ModuleInfo_22, check_hlds__cse_detection__Type_24, check_hlds__cse_detection__ConsId_17);
            }
          }
      }
    if (check_hlds__cse_detection__succeeded)
      {
        MR_Word check_hlds__cse_detection__TypeInfo_43_73 = (MR_Word) &check_hlds__cse_detection_scalar_common_2[0];
        MR_Word check_hlds__cse_detection__TypeInfo_44_74;
        MR_Word check_hlds__cse_detection__TypeInfo_49_79;
        MR_Word check_hlds__cse_detection__LaterOldNew_40;
        MR_Word check_hlds__cse_detection__FirstOldNewMap_41;
        MR_Word check_hlds__cse_detection__LaterOldNewMap_42;
        MR_Word check_hlds__cse_detection__RttiVarMaps0_43;
        MR_Word check_hlds__cse_detection__VarTypes0_44;
        MR_Word check_hlds__cse_detection__TvarsList_45;
        MR_Word check_hlds__cse_detection__NewTvarMap_46;
        MR_Word check_hlds__cse_detection__Renaming_47;
        MR_Word check_hlds__cse_detection__OldNew_48;
        MR_Word check_hlds__cse_detection__OldNewMap_49;
        MR_Word check_hlds__cse_detection__RttiVarMaps_50;
        MR_Word check_hlds__cse_detection__VarTypes_51;
        MR_Word check_hlds__cse_detection__V_52_52;
        MR_Word check_hlds__cse_detection__V_53_53;
        MR_Word check_hlds__cse_detection__V_54_54;
        MR_Word check_hlds__cse_detection__V_55_55;
        MR_Word check_hlds__cse_detection__V_56_56;
        MR_Word check_hlds__cse_detection__V_65_65;
        MR_Word check_hlds__cse_detection__V_68_68;
        MR_Word check_hlds__cse_detection__V_59_59;
        MR_Word check_hlds__cse_detection__V_61_61;
        MR_Box check_hlds__cse_detection__conv1_NewTvarMap_46;
        MR_Box check_hlds__cse_detection__conv3_Renaming_47;
        MR_Word check_hlds__cse_detection__V_66_66;
        MR_Word check_hlds__cse_detection__V_67_67;

        {
          mercury__list__condense_2_p_0(check_hlds__cse_detection__TypeInfo_43_73, check_hlds__cse_detection__LaterOldNew_8, &check_hlds__cse_detection__LaterOldNew_40);
        }
        check_hlds__cse_detection__TypeInfo_44_74 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
        {
          mercury__map__from_assoc_list_2_p_0(check_hlds__cse_detection__TypeInfo_44_74, check_hlds__cse_detection__TypeInfo_44_74, check_hlds__cse_detection__FirstOldNew_7, &check_hlds__cse_detection__FirstOldNewMap_41);
        }
        {
          mercury__map__from_assoc_list_2_p_0(check_hlds__cse_detection__TypeInfo_44_74, check_hlds__cse_detection__TypeInfo_44_74, check_hlds__cse_detection__LaterOldNew_40, &check_hlds__cse_detection__LaterOldNewMap_42);
        }
        check_hlds__cse_detection__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 0)));
        check_hlds__cse_detection__VarTypes0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 1)));
        check_hlds__cse_detection__RttiVarMaps0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 2)));
        check_hlds__cse_detection__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 3)));
        {
          hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(check_hlds__cse_detection__RttiVarMaps0_43, &check_hlds__cse_detection__TvarsList_45);
        }
        {
          check_hlds__cse_detection__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 0) = ((MR_Box) (&check_hlds__cse_detection_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 1) = ((MR_Box) (check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_1));
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 3) = ((MR_Box) (check_hlds__cse_detection__RttiVarMaps0_43));
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 4) = ((MR_Box) (check_hlds__cse_detection__FirstOldNewMap_41));
        }
        check_hlds__cse_detection__TypeInfo_49_79 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[1];
        {
          check_hlds__cse_detection__V_53_53 = mercury__map__init_0_f_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, check_hlds__cse_detection__TypeInfo_49_79);
        }
        {
          mercury__list__foldl_4_p_0(check_hlds__cse_detection__TypeInfo_49_79, (MR_Word) &check_hlds__cse_detection_scalar_common_2[1], check_hlds__cse_detection__V_52_52, check_hlds__cse_detection__TvarsList_45, ((MR_Box) (check_hlds__cse_detection__V_53_53)), &check_hlds__cse_detection__conv1_NewTvarMap_46);
        }
        check_hlds__cse_detection__NewTvarMap_46 = ((MR_Word) check_hlds__cse_detection__conv1_NewTvarMap_46);
        {
          check_hlds__cse_detection__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 0) = ((MR_Box) (&check_hlds__cse_detection_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 1) = ((MR_Box) (check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_2));
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 3) = ((MR_Box) (check_hlds__cse_detection__RttiVarMaps0_43));
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 4) = ((MR_Box) (check_hlds__cse_detection__LaterOldNewMap_42));
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 5) = ((MR_Box) (check_hlds__cse_detection__NewTvarMap_46));
        }
        {
          check_hlds__cse_detection__V_55_55 = mercury__map__init_0_f_0(check_hlds__cse_detection__TypeInfo_49_79, check_hlds__cse_detection__TypeInfo_49_79);
        }
        {
          mercury__list__foldl_4_p_0(check_hlds__cse_detection__TypeInfo_49_79, (MR_Word) &check_hlds__cse_detection_scalar_common_2[2], check_hlds__cse_detection__V_54_54, check_hlds__cse_detection__TvarsList_45, ((MR_Box) (check_hlds__cse_detection__V_55_55)), &check_hlds__cse_detection__conv3_Renaming_47);
        }
        check_hlds__cse_detection__Renaming_47 = ((MR_Word) check_hlds__cse_detection__conv3_Renaming_47);
        {
          mercury__list__append_3_p_1(check_hlds__cse_detection__TypeInfo_43_73, check_hlds__cse_detection__FirstOldNew_7, check_hlds__cse_detection__LaterOldNew_40, &check_hlds__cse_detection__OldNew_48);
        }
        {
          mercury__map__from_assoc_list_2_p_0(check_hlds__cse_detection__TypeInfo_44_74, check_hlds__cse_detection__TypeInfo_44_74, check_hlds__cse_detection__OldNew_48, &check_hlds__cse_detection__OldNewMap_49);
        }
        {
          check_hlds__cse_detection__V_56_56 = mercury__map__init_0_f_0(check_hlds__cse_detection__TypeInfo_49_79, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        }
        {
          hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(check_hlds__cse_detection__Renaming_47, check_hlds__cse_detection__V_56_56, check_hlds__cse_detection__OldNewMap_49, check_hlds__cse_detection__RttiVarMaps0_43, &check_hlds__cse_detection__RttiVarMaps_50);
        }
        {
          hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0(check_hlds__cse_detection__Renaming_47, check_hlds__cse_detection__VarTypes0_44, &check_hlds__cse_detection__VarTypes_51);
        }
        check_hlds__cse_detection__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 0)));
        check_hlds__cse_detection__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 1)));
        check_hlds__cse_detection__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 2)));
        check_hlds__cse_detection__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 3)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__cse_detection__V_65_65));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__cse_detection__VarTypes_51));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__cse_detection__RttiVarMaps_50));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__cse_detection__V_68_68));
        }
      }
    else
      *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25;
  }
}

static void MR_CALL 
check_hlds__cse_detection__pair_subterms_4_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
  MR_Word check_hlds__cse_detection__HeadVar__3_3,
  MR_Word * check_hlds__cse_detection__HeadVar__4_4)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;

    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__cse_detection__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__cse_detection__OldVar_7;
        MR_Word check_hlds__cse_detection__HoistedVar_8;
        MR_Word check_hlds__cse_detection__OldHoistedVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__cse_detection__Replacements1_13;
        MR_Word check_hlds__cse_detection__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));

        check_hlds__cse_detection__OldVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_17_17, (MR_Integer) 0)));
        check_hlds__cse_detection__HoistedVar_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_17_17, (MR_Integer) 1)));
        {
          check_hlds__cse_detection__pair_subterms_4_p_0(check_hlds__cse_detection__OldHoistedVars_9, check_hlds__cse_detection__HeadVar__2_2, check_hlds__cse_detection__HeadVar__3_3, &check_hlds__cse_detection__Replacements1_13);
        }
        {
          check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[0], ((MR_Box) (check_hlds__cse_detection__OldVar_7)), ((MR_Box) (check_hlds__cse_detection__HoistedVar_8)));
        }
        if (check_hlds__cse_detection__succeeded)
          *check_hlds__cse_detection__HeadVar__4_4 = check_hlds__cse_detection__Replacements1_13;
        else
          {
            MR_Word check_hlds__cse_detection__MainCtxt_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__cse_detection__SubCtxt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__cse_detection__Goal_16;
            MR_Word check_hlds__cse_detection__V_18_18;

            {
              check_hlds__cse_detection__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_18_18, 0) = ((MR_Box) (check_hlds__cse_detection__OldVar_7));
            }
            {
              hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__cse_detection__HoistedVar_8, check_hlds__cse_detection__V_18_18, check_hlds__cse_detection__HeadVar__2_2, check_hlds__cse_detection__MainCtxt_14, check_hlds__cse_detection__SubCtxt_15, &check_hlds__cse_detection__Goal_16);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__cse_detection__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal_16));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Replacements1_13));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__cse_detection__find_similar_deconstruct_5_p_0(
  MR_Word check_hlds__cse_detection__HoistedUnifyGoal_6,
  MR_Word check_hlds__cse_detection__OldUnifyGoal_7,
  MR_Word check_hlds__cse_detection__Context_8,
  MR_Word * check_hlds__cse_detection__OldHoistedVars_9,
  MR_Word * check_hlds__cse_detection__Replacements_10)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;
    MR_Word check_hlds__cse_detection__OC_15;
    MR_Word check_hlds__cse_detection__HoistedFunctor_18;
    MR_Word check_hlds__cse_detection__HoistedVars_19;
    MR_Word check_hlds__cse_detection__OldFunctor_30;
    MR_Word check_hlds__cse_detection__OldVars_31;
    MR_Word check_hlds__cse_detection__HoistedUnifyInfo_14;
    MR_Word check_hlds__cse_detection__OldUnifyInfo_26;
    MR_Word check_hlds__cse_detection__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HoistedUnifyGoal_6, (MR_Integer) 0)));
    MR_Word check_hlds__cse_detection__V_38_38;
    MR_Word check_hlds__cse_detection__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HoistedUnifyGoal_6, (MR_Integer) 1)));
    MR_Word check_hlds__cse_detection__V_11_11;
    MR_Word check_hlds__cse_detection__V_12_12;
    MR_Word check_hlds__cse_detection__V_13_13;
    MR_Word check_hlds__cse_detection__V_17_17;
    MR_Word check_hlds__cse_detection__V_20_20;
    MR_Word check_hlds__cse_detection__V_21_21;
    MR_Word check_hlds__cse_detection__V_22_22;
    MR_Word check_hlds__cse_detection__V_28_28;
    MR_Word check_hlds__cse_detection__V_23_23;
    MR_Word check_hlds__cse_detection__V_24_24;
    MR_Word check_hlds__cse_detection__V_25_25;
    MR_Word check_hlds__cse_detection___NC_27;
    MR_Word check_hlds__cse_detection__V_29_29;
    MR_Word check_hlds__cse_detection__V_32_32;
    MR_Word check_hlds__cse_detection__V_33_33;
    MR_Word check_hlds__cse_detection__V_34_34;

    check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_37_37)) == (MR_mktag((MR_Integer) 1)));
    if (check_hlds__cse_detection__succeeded)
      {
        check_hlds__cse_detection__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 0)));
        check_hlds__cse_detection__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 1)));
        check_hlds__cse_detection__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 2)));
        check_hlds__cse_detection__HoistedUnifyInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 3)));
        check_hlds__cse_detection__OC_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 4)));
        check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__HoistedUnifyInfo_14)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__cse_detection__succeeded)
          {
            check_hlds__cse_detection__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 0)));
            check_hlds__cse_detection__HoistedFunctor_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 1)));
            check_hlds__cse_detection__HoistedVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 2)));
            check_hlds__cse_detection__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 3)));
            check_hlds__cse_detection__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 4)));
            check_hlds__cse_detection__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 5)));
            check_hlds__cse_detection__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__OldUnifyGoal_7, (MR_Integer) 0)));
            check_hlds__cse_detection__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__OldUnifyGoal_7, (MR_Integer) 1)));
            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_38_38)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__cse_detection__succeeded)
              {
                check_hlds__cse_detection__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 0)));
                check_hlds__cse_detection__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 1)));
                check_hlds__cse_detection__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 2)));
                check_hlds__cse_detection__OldUnifyInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 3)));
                check_hlds__cse_detection___NC_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 4)));
                check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__OldUnifyInfo_26)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__cse_detection__succeeded)
                  {
                    check_hlds__cse_detection__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 0)));
                    check_hlds__cse_detection__OldFunctor_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 1)));
                    check_hlds__cse_detection__OldVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 2)));
                    check_hlds__cse_detection__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 3)));
                    check_hlds__cse_detection__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 4)));
                    check_hlds__cse_detection__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 5)));
                  }
              }
          }
      }
    if (check_hlds__cse_detection__succeeded)
      {
        MR_Word check_hlds__cse_detection__TypeInfo_42_42;
        MR_Integer check_hlds__cse_detection__HoistedVarsCount_35;
        MR_Integer check_hlds__cse_detection__OldVarsCount_36;

        {
          check_hlds__cse_detection__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__cse_detection__HoistedFunctor_18, check_hlds__cse_detection__OldFunctor_30);
        }
        if (check_hlds__cse_detection__succeeded)
          {
            check_hlds__cse_detection__TypeInfo_42_42 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
            {
              mercury__list__length_2_p_0(check_hlds__cse_detection__TypeInfo_42_42, check_hlds__cse_detection__HoistedVars_19, &check_hlds__cse_detection__HoistedVarsCount_35);
            }
            {
              mercury__list__length_2_p_0(check_hlds__cse_detection__TypeInfo_42_42, check_hlds__cse_detection__OldVars_31, &check_hlds__cse_detection__OldVarsCount_36);
            }
            check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__HoistedVarsCount_35 == check_hlds__cse_detection__OldVarsCount_36);
            if (check_hlds__cse_detection__succeeded)
              {
                {
                  mercury__assoc_list__from_corresponding_lists_3_p_0(check_hlds__cse_detection__TypeInfo_42_42, check_hlds__cse_detection__TypeInfo_42_42, check_hlds__cse_detection__OldVars_31, check_hlds__cse_detection__HoistedVars_19, check_hlds__cse_detection__OldHoistedVars_9);
                }
                {
                  check_hlds__cse_detection__pair_subterms_4_p_0(*check_hlds__cse_detection__OldHoistedVars_9, check_hlds__cse_detection__Context_8, check_hlds__cse_detection__OC_15, check_hlds__cse_detection__Replacements_10);
                }
                check_hlds__cse_detection__succeeded = MR_TRUE;
              }
          }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.find_similar_deconstruct\'/5", (MR_String) "non-deconstruct unify");
        }
        check_hlds__cse_detection__succeeded = MR_TRUE;
      }
    return check_hlds__cse_detection__succeeded;
  }
}

static void MR_CALL 
check_hlds__cse_detection__create_new_arg_vars_7_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__Context_2,
  MR_Word check_hlds__cse_detection__UnifyContext_3,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_4,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_5,
  MR_Word * check_hlds__cse_detection__HeadVar__6_6,
  MR_Word * check_hlds__cse_detection__HeadVar__7_7)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;

    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__cse_detection__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__cse_detection__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_5 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_4;
      }
    else
      {
        MR_Word check_hlds__cse_detection__HeadOldArgVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__cse_detection__TailOldArgVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__cse_detection__TailReplacementGoals_20;
        MR_Word check_hlds__cse_detection__HeadReplacementGoal_21;
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25;
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_OldNewVars_26_26;
        MR_Word check_hlds__cse_detection__VarSet0_39;
        MR_Word check_hlds__cse_detection__VarTypes0_40;
        MR_Word check_hlds__cse_detection__Type_41;
        MR_Word check_hlds__cse_detection__ModuleInfo_42;
        MR_Word check_hlds__cse_detection__TypeCat_43;
        MR_Word check_hlds__cse_detection__NewArgVar_46;
        MR_Word check_hlds__cse_detection__VarSet_47;
        MR_Word check_hlds__cse_detection__VarTypes_48;
        MR_Word check_hlds__cse_detection__MainCtxt_49;
        MR_Word check_hlds__cse_detection__SubCtxt_50;
        MR_Word check_hlds__cse_detection__V_52_52;
        MR_Word check_hlds__cse_detection__V_53_53;
        MR_Word check_hlds__cse_detection__V_67_67;
        MR_Word check_hlds__cse_detection__V_68_68;
        MR_Word check_hlds__cse_detection__V_57_57;
        MR_Word check_hlds__cse_detection__V_58_58;
        MR_Word check_hlds__cse_detection__V_62_62;
        MR_Word check_hlds__cse_detection__V_63_63;
        MR_Word check_hlds__cse_detection__V_64_64;
        MR_String check_hlds__cse_detection__OldName_45;
        MR_Word check_hlds__cse_detection__TypeCtorInfo_53_73;
        MR_Word check_hlds__cse_detection__V_44_44;
        MR_Word check_hlds__cse_detection__V_65_65;
        MR_Word check_hlds__cse_detection__V_66_66;

        {
          check_hlds__cse_detection__create_new_arg_vars_7_p_0(check_hlds__cse_detection__TailOldArgVars_14, check_hlds__cse_detection__Context_2, check_hlds__cse_detection__UnifyContext_3, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_4, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, &check_hlds__cse_detection__STATE_VARIABLE_OldNewVars_26_26, &check_hlds__cse_detection__TailReplacementGoals_20);
        }
        check_hlds__cse_detection__VarSet0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 0)));
        check_hlds__cse_detection__VarTypes0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 1)));
        check_hlds__cse_detection__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 2)));
        check_hlds__cse_detection__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 3)));
        {
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__cse_detection__VarTypes0_40, check_hlds__cse_detection__HeadOldArgVar_13, &check_hlds__cse_detection__Type_41);
        }
        check_hlds__cse_detection__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 0)));
        check_hlds__cse_detection__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 1)));
        check_hlds__cse_detection__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 2)));
        check_hlds__cse_detection__ModuleInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 3)));
        {
          check_hlds__cse_detection__TypeCat_43 = check_hlds__type_util__classify_type_2_f_0(check_hlds__cse_detection__ModuleInfo_42, check_hlds__cse_detection__Type_41);
        }
        check_hlds__cse_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__cse_detection__TypeCat_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__TypeCat_43, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (check_hlds__cse_detection__succeeded)
          {
            check_hlds__cse_detection__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__TypeCat_43, (MR_Integer) 1)));
            check_hlds__cse_detection__TypeCtorInfo_53_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              check_hlds__cse_detection__succeeded = mercury__varset__search_name_3_p_0(check_hlds__cse_detection__TypeCtorInfo_53_73, check_hlds__cse_detection__VarSet0_39, check_hlds__cse_detection__HeadOldArgVar_13, &check_hlds__cse_detection__OldName_45);
            }
          }
        if (check_hlds__cse_detection__succeeded)
          {
            {
              mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__cse_detection__OldName_45, &check_hlds__cse_detection__NewArgVar_46, check_hlds__cse_detection__VarSet0_39, &check_hlds__cse_detection__VarSet_47);
            }
          }
        else
          {
            {
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__cse_detection__NewArgVar_46, check_hlds__cse_detection__VarSet0_39, &check_hlds__cse_detection__VarSet_47);
            }
          }
        {
          hlds__vartypes__add_var_type_4_p_0(check_hlds__cse_detection__NewArgVar_46, check_hlds__cse_detection__Type_41, check_hlds__cse_detection__VarTypes0_40, &check_hlds__cse_detection__VarTypes_48);
        }
        {
          check_hlds__cse_detection__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 0) = ((MR_Box) (check_hlds__cse_detection__HeadOldArgVar_13));
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 1) = ((MR_Box) (check_hlds__cse_detection__NewArgVar_46));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__cse_detection__HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__V_52_52));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_OldNewVars_26_26));
        }
        check_hlds__cse_detection__MainCtxt_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__UnifyContext_3, (MR_Integer) 0)));
        check_hlds__cse_detection__SubCtxt_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__UnifyContext_3, (MR_Integer) 1)));
        {
          check_hlds__cse_detection__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_53_53, 0) = ((MR_Box) (check_hlds__cse_detection__NewArgVar_46));
        }
        {
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__cse_detection__HeadOldArgVar_13, check_hlds__cse_detection__V_53_53, check_hlds__cse_detection__Context_2, check_hlds__cse_detection__MainCtxt_49, check_hlds__cse_detection__SubCtxt_50, &check_hlds__cse_detection__HeadReplacementGoal_21);
        }
        check_hlds__cse_detection__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 0)));
        check_hlds__cse_detection__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 1)));
        check_hlds__cse_detection__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 2)));
        check_hlds__cse_detection__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 3)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_5 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__cse_detection__VarSet_47));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__cse_detection__VarTypes_48));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__cse_detection__V_67_67));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__cse_detection__V_68_68));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__cse_detection__HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__HeadReplacementGoal_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__TailReplacementGoals_20));
        }
      }
  }
}

static void MR_CALL 
check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(
  MR_Word check_hlds__cse_detection__Var_8,
  MR_Word check_hlds__cse_detection__Goal0_9,
  MR_Word * check_hlds__cse_detection__Goals_10,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_23,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;

    switch (MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__cse_detection__OldNewVars_13;
              MR_Word check_hlds__cse_detection__HoistedGoal_14;
              MR_Word check_hlds__cse_detection__GoalExpr0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_9, (MR_Integer) 0)));
              MR_Word check_hlds__cse_detection__GoalInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_9, (MR_Integer) 1)));
              MR_Word check_hlds__cse_detection__RHS_48;
              MR_Word check_hlds__cse_detection__Umode_49;
              MR_Word check_hlds__cse_detection__Ucontext_51;
              MR_Word check_hlds__cse_detection__ConsId_53;
              MR_Word check_hlds__cse_detection__ArgVars_54;
              MR_Word check_hlds__cse_detection__Submodes_55;
              MR_Word check_hlds__cse_detection__CanFail_56;
              MR_Word check_hlds__cse_detection__CanCGC_57;
              MR_Word check_hlds__cse_detection__Unif0_50;
              MR_Word check_hlds__cse_detection__V_47_47;
              MR_Word check_hlds__cse_detection__V_52_52;

              check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__GoalExpr0_45)) == (MR_mktag((MR_Integer) 1)));
              if (check_hlds__cse_detection__succeeded)
                {
                  check_hlds__cse_detection__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_45, (MR_Integer) 0)));
                  check_hlds__cse_detection__RHS_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_45, (MR_Integer) 1)));
                  check_hlds__cse_detection__Umode_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_45, (MR_Integer) 2)));
                  check_hlds__cse_detection__Unif0_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_45, (MR_Integer) 3)));
                  check_hlds__cse_detection__Ucontext_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_45, (MR_Integer) 4)));
                  check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__Unif0_50)) == (MR_mktag((MR_Integer) 1)));
                  if (check_hlds__cse_detection__succeeded)
                    {
                      check_hlds__cse_detection__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_50, (MR_Integer) 0)));
                      check_hlds__cse_detection__ConsId_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_50, (MR_Integer) 1)));
                      check_hlds__cse_detection__ArgVars_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_50, (MR_Integer) 2)));
                      check_hlds__cse_detection__Submodes_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_50, (MR_Integer) 3)));
                      check_hlds__cse_detection__CanFail_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_50, (MR_Integer) 4)));
                      check_hlds__cse_detection__CanCGC_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_50, (MR_Integer) 5)));
                    }
                }
              if (check_hlds__cse_detection__succeeded)
                {
                  MR_Word check_hlds__cse_detection__TypeInfo_54_83;
                  MR_Word check_hlds__cse_detection__Unif_58;
                  MR_Word check_hlds__cse_detection__GoalExpr1_62;
                  MR_Word check_hlds__cse_detection__Context_73;
                  MR_Word check_hlds__cse_detection__Subn_74;
                  MR_Word check_hlds__cse_detection__V_79_79;

                  {
                    check_hlds__cse_detection__Unif_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_58, 0) = ((MR_Box) (check_hlds__cse_detection__Var_8));
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_58, 1) = ((MR_Box) (check_hlds__cse_detection__ConsId_53));
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_58, 2) = ((MR_Box) (check_hlds__cse_detection__ArgVars_54));
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_58, 3) = ((MR_Box) (check_hlds__cse_detection__Submodes_55));
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_58, 4) = ((MR_Box) (check_hlds__cse_detection__CanFail_56));
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_58, 5) = ((MR_Box) (check_hlds__cse_detection__CanCGC_57));
                  }
                  switch (MR_tag((MR_Word) check_hlds__cse_detection__RHS_48)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 2:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.construct_common_unify\'/7", (MR_String) "non-functor unify");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        check_hlds__cse_detection__GoalExpr1_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_62, 0) = ((MR_Box) (check_hlds__cse_detection__Var_8));
                        MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_62, 1) = ((MR_Box) (check_hlds__cse_detection__RHS_48));
                        MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_62, 2) = ((MR_Box) (check_hlds__cse_detection__Umode_49));
                        MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_62, 3) = ((MR_Box) (check_hlds__cse_detection__Unif_58));
                        MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_62, 4) = ((MR_Box) (check_hlds__cse_detection__Ucontext_51));
                      }
                      break;
                  }
                  {
                    check_hlds__cse_detection__Context_73 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__cse_detection__GoalInfo_46);
                  }
                  {
                    check_hlds__cse_detection__create_new_arg_vars_7_p_0(check_hlds__cse_detection__ArgVars_54, check_hlds__cse_detection__Context_73, check_hlds__cse_detection__Ucontext_51, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25, &check_hlds__cse_detection__OldNewVars_13, check_hlds__cse_detection__Goals_10);
                  }
                  check_hlds__cse_detection__TypeInfo_54_83 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
                  {
                    mercury__map__from_assoc_list_2_p_0(check_hlds__cse_detection__TypeInfo_54_83, check_hlds__cse_detection__TypeInfo_54_83, check_hlds__cse_detection__OldNewVars_13, &check_hlds__cse_detection__Subn_74);
                  }
                  {
                    check_hlds__cse_detection__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_79_79, 0) = ((MR_Box) (check_hlds__cse_detection__GoalExpr1_62));
                    MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_79_79, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_46));
                  }
                  {
                    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(check_hlds__cse_detection__Subn_74, check_hlds__cse_detection__V_79_79, &check_hlds__cse_detection__HoistedGoal_14);
                  }
                }
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.construct_common_unify\'/7", (MR_String) "non-unify goal");
                    return;
                  }
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__cse_detection__STATE_VARIABLE_CseState_23 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__HoistedGoal_14));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__OldNewVars_13));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__cse_detection__Goals_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal0_9));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              *check_hlds__cse_detection__STATE_VARIABLE_CseState_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__cse_detection__FirstOldNewVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22, (MR_Integer) 1)));
          MR_Word check_hlds__cse_detection__LaterOldNewVars0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22, (MR_Integer) 2)));
          MR_Word check_hlds__cse_detection__GoalInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_9, (MR_Integer) 1)));
          MR_Word check_hlds__cse_detection__Context_19;
          MR_Word check_hlds__cse_detection__HoistedGoal_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22, (MR_Integer) 0)));
          MR_Word check_hlds__cse_detection__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_9, (MR_Integer) 0)));
          MR_Word check_hlds__cse_detection__Goals0_20;
          MR_Word check_hlds__cse_detection__OldNewVars_34;

          {
            check_hlds__cse_detection__Context_19 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__cse_detection__GoalInfo_18);
          }
          {
            check_hlds__cse_detection__succeeded = check_hlds__cse_detection__find_similar_deconstruct_5_p_0(check_hlds__cse_detection__HoistedGoal_36, check_hlds__cse_detection__Goal0_9, check_hlds__cse_detection__Context_19, &check_hlds__cse_detection__OldNewVars_34, &check_hlds__cse_detection__Goals0_20);
          }
          if (check_hlds__cse_detection__succeeded)
            {
              MR_Word check_hlds__cse_detection__LaterOldNewVars_21;

              *check_hlds__cse_detection__Goals_10 = check_hlds__cse_detection__Goals0_20;
              {
                check_hlds__cse_detection__LaterOldNewVars_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNewVars_21, 0) = ((MR_Box) (check_hlds__cse_detection__OldNewVars_34));
                MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNewVars_21, 1) = ((MR_Box) (check_hlds__cse_detection__LaterOldNewVars0_16));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__cse_detection__STATE_VARIABLE_CseState_23 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__HoistedGoal_36));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__FirstOldNewVars_15));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__cse_detection__LaterOldNewVars_21));
              }
            }
          else
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__cse_detection__Goals_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal0_9));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              *check_hlds__cse_detection__STATE_VARIABLE_CseState_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            }
          *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0_1(
  MR_Box check_hlds__cse_detection__closure_arg,
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
  MR_Box * check_hlds__cse_detection__wrapper_arg_7)
{
  {
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
    MR_Word check_hlds__cse_detection__conv2_Goals_10;
    MR_Word check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23;
    MR_Word check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25;

    {
      check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv2_Goals_10, ((MR_Word) check_hlds__cse_detection__wrapper_arg_4), &check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23, ((MR_Word) check_hlds__cse_detection__wrapper_arg_6), &check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25);
    }
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv2_Goals_10));
    *check_hlds__cse_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23));
    *check_hlds__cse_detection__wrapper_arg_7 = ((MR_Box) (check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25));
  }
}

static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_4,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
  MR_Word * check_hlds__cse_detection__HeadVar__7_7)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;

    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__cse_detection__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5;
        *check_hlds__cse_detection__STATE_VARIABLE_CseState_4 = check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3;
        check_hlds__cse_detection__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word check_hlds__cse_detection__Case0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__cse_detection__Cases0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__cse_detection__Case_20;
        MR_Word check_hlds__cse_detection__Cases_21;
        MR_Word check_hlds__cse_detection__MainConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_15, (MR_Integer) 0)));
        MR_Word check_hlds__cse_detection__OtherConsIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_15, (MR_Integer) 1)));
        MR_Word check_hlds__cse_detection__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_15, (MR_Integer) 2)));
        MR_Word check_hlds__cse_detection__Goal_25;
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34;
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_35_35;
        MR_Word check_hlds__cse_detection__V_48_48;
        MR_Box check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_34_34;
        MR_Box check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_35_35;
        MR_Word check_hlds__cse_detection__V_26_26;
        MR_Word check_hlds__cse_detection__V_27_27;
        MR_Word check_hlds__cse_detection__V_28_28;

        {
          check_hlds__switch_detection__find_bind_var_9_p_0((MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0, (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0, check_hlds__cse_detection__HeadVar__2_2, (MR_Word) &check_hlds__cse_detection_scalar_common_2[7], check_hlds__cse_detection__Goal0_24, &check_hlds__cse_detection__Goal_25, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3)), &check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_34_34, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5)), &check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_35_35, &check_hlds__cse_detection__V_48_48);
        }
        check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34 = ((MR_Word) check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_34_34);
        check_hlds__cse_detection__STATE_VARIABLE_CseInfo_35_35 = ((MR_Word) check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_35_35);
        check_hlds__cse_detection__succeeded = ((MR_Integer) 0 == check_hlds__cse_detection__V_48_48);
        if (check_hlds__cse_detection__succeeded)
          {
            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__cse_detection__succeeded)
              {
                check_hlds__cse_detection__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34, (MR_Integer) 0)));
                check_hlds__cse_detection__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34, (MR_Integer) 1)));
                check_hlds__cse_detection__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34, (MR_Integer) 2)));
                {
                  check_hlds__cse_detection__Case_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_20, 0) = ((MR_Box) (check_hlds__cse_detection__MainConsId_22));
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_20, 1) = ((MR_Box) (check_hlds__cse_detection__OtherConsIds_23));
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_20, 2) = ((MR_Box) (check_hlds__cse_detection__Goal_25));
                }
                {
                  check_hlds__cse_detection__succeeded = check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(check_hlds__cse_detection__Cases0_16, check_hlds__cse_detection__HeadVar__2_2, check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34, check_hlds__cse_detection__STATE_VARIABLE_CseState_4, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_35_35, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6, &check_hlds__cse_detection__Cases_21);
                }
                if (check_hlds__cse_detection__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__cse_detection__HeadVar__7_7 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Case_20));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Cases_21));
                    }
                    check_hlds__cse_detection__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return check_hlds__cse_detection__succeeded;
  }
}

static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0_1(
  MR_Box check_hlds__cse_detection__closure_arg,
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
  MR_Box * check_hlds__cse_detection__wrapper_arg_7)
{
  {
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
    MR_Word check_hlds__cse_detection__conv2_Goals_10;
    MR_Word check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23;
    MR_Word check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25;

    {
      check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv2_Goals_10, ((MR_Word) check_hlds__cse_detection__wrapper_arg_4), &check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23, ((MR_Word) check_hlds__cse_detection__wrapper_arg_6), &check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25);
    }
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv2_Goals_10));
    *check_hlds__cse_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23));
    *check_hlds__cse_detection__wrapper_arg_7 = ((MR_Box) (check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25));
  }
}

static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_4,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
  MR_Word * check_hlds__cse_detection__HeadVar__7_7)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;

    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__cse_detection__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5;
        *check_hlds__cse_detection__STATE_VARIABLE_CseState_4 = check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3;
        check_hlds__cse_detection__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word check_hlds__cse_detection__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__cse_detection__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__cse_detection__Goal_20;
        MR_Word check_hlds__cse_detection__Goals_21;
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30;
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_31;
        MR_Word check_hlds__cse_detection__V_44_44;
        MR_Box check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_30;
        MR_Box check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_31;
        MR_Word check_hlds__cse_detection__V_22_22;
        MR_Word check_hlds__cse_detection__V_23_23;
        MR_Word check_hlds__cse_detection__V_24_24;

        {
          check_hlds__switch_detection__find_bind_var_9_p_0((MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0, (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0, check_hlds__cse_detection__HeadVar__2_2, (MR_Word) &check_hlds__cse_detection_scalar_common_2[6], check_hlds__cse_detection__Goal0_15, &check_hlds__cse_detection__Goal_20, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3)), &check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_30, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5)), &check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_31, &check_hlds__cse_detection__V_44_44);
        }
        check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30 = ((MR_Word) check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_30);
        check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_31 = ((MR_Word) check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_31);
        check_hlds__cse_detection__succeeded = ((MR_Integer) 0 == check_hlds__cse_detection__V_44_44);
        if (check_hlds__cse_detection__succeeded)
          {
            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__cse_detection__succeeded)
              {
                check_hlds__cse_detection__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30, (MR_Integer) 0)));
                check_hlds__cse_detection__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30, (MR_Integer) 1)));
                check_hlds__cse_detection__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30, (MR_Integer) 2)));
                {
                  check_hlds__cse_detection__succeeded = check_hlds__cse_detection__common_deconstruct_2_7_p_0(check_hlds__cse_detection__Goals0_16, check_hlds__cse_detection__HeadVar__2_2, check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30, check_hlds__cse_detection__STATE_VARIABLE_CseState_4, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_31, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6, &check_hlds__cse_detection__Goals_21);
                }
                if (check_hlds__cse_detection__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__cse_detection__HeadVar__7_7 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal_20));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_21));
                    }
                    check_hlds__cse_detection__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return check_hlds__cse_detection__succeeded;
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_arms_10_p_0(
  MR_Word check_hlds__cse_detection__Cond0_11,
  MR_Word * check_hlds__cse_detection__Cond_12,
  MR_Word check_hlds__cse_detection__Then0_13,
  MR_Word * check_hlds__cse_detection__Then_14,
  MR_Word check_hlds__cse_detection__Else0_15,
  MR_Word * check_hlds__cse_detection__Else_16,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26,
  MR_Word check_hlds__cse_detection__InstMap0_18,
  MR_Word * check_hlds__cse_detection__Redo_19)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;
    MR_Word check_hlds__cse_detection__InstMap1_20;
    MR_Word check_hlds__cse_detection__Redo1_21;
    MR_Word check_hlds__cse_detection__Redo2_22;
    MR_Word check_hlds__cse_detection__Redo3_23;
    MR_Word check_hlds__cse_detection__Redo12_24;
    MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_27_27;
    MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_28_28;
    MR_Word check_hlds__cse_detection__GoalExpr0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Cond0_11, (MR_Integer) 0)));
    MR_Word check_hlds__cse_detection__GoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Cond0_11, (MR_Integer) 1)));
    MR_Word check_hlds__cse_detection__GoalExpr_40;
    MR_Word check_hlds__cse_detection__InstMapDelta_41;
    MR_Word check_hlds__cse_detection___InstMap_50;
    MR_Word check_hlds__cse_detection___InstMap_59;

    {
      check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(check_hlds__cse_detection__GoalExpr0_38, &check_hlds__cse_detection__GoalExpr_40, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_27_27, check_hlds__cse_detection__GoalInfo_39, check_hlds__cse_detection__InstMap0_18, &check_hlds__cse_detection__Redo1_21);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__cse_detection__Cond_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__cse_detection__GoalExpr_40));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_39));
    }
    {
      check_hlds__cse_detection__InstMapDelta_41 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__cse_detection__GoalInfo_39);
    }
    {
      hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__cse_detection__InstMap0_18, check_hlds__cse_detection__InstMapDelta_41, &check_hlds__cse_detection__InstMap1_20);
    }
    {
      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Then0_13, check_hlds__cse_detection__Then_14, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_27_27, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_28_28, check_hlds__cse_detection__InstMap1_20, &check_hlds__cse_detection___InstMap_50, &check_hlds__cse_detection__Redo2_22);
    }
    {
      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Else0_15, check_hlds__cse_detection__Else_16, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_28_28, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26, check_hlds__cse_detection__InstMap0_18, &check_hlds__cse_detection___InstMap_59, &check_hlds__cse_detection__Redo3_23);
    }
    {
      mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_21, check_hlds__cse_detection__Redo2_22, &check_hlds__cse_detection__Redo12_24);
    }
    {
      mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo12_24, check_hlds__cse_detection__Redo3_23, check_hlds__cse_detection__Redo_19);
    }
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0_2(
  MR_Box check_hlds__cse_detection__closure_arg,
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
  MR_Box * check_hlds__cse_detection__wrapper_arg_7)
{
  {
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
    MR_Word check_hlds__cse_detection__conv7_Goals_10;
    MR_Word check_hlds__cse_detection__conv6_STATE_VARIABLE_CseState_23;
    MR_Word check_hlds__cse_detection__conv5_STATE_VARIABLE_CseInfo_25;

    {
      check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv7_Goals_10, ((MR_Word) check_hlds__cse_detection__wrapper_arg_4), &check_hlds__cse_detection__conv6_STATE_VARIABLE_CseState_23, ((MR_Word) check_hlds__cse_detection__wrapper_arg_6), &check_hlds__cse_detection__conv5_STATE_VARIABLE_CseInfo_25);
    }
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv7_Goals_10));
    *check_hlds__cse_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__cse_detection__conv6_STATE_VARIABLE_CseState_23));
    *check_hlds__cse_detection__wrapper_arg_7 = ((MR_Box) (check_hlds__cse_detection__conv5_STATE_VARIABLE_CseInfo_25));
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0_1(
  MR_Box check_hlds__cse_detection__closure_arg,
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
  MR_Box * check_hlds__cse_detection__wrapper_arg_7)
{
  {
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
    MR_Word check_hlds__cse_detection__conv2_Goals_10;
    MR_Word check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23;
    MR_Word check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25;

    {
      check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv2_Goals_10, ((MR_Word) check_hlds__cse_detection__wrapper_arg_4), &check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23, ((MR_Word) check_hlds__cse_detection__wrapper_arg_6), &check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25);
    }
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv2_Goals_10));
    *check_hlds__cse_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23));
    *check_hlds__cse_detection__wrapper_arg_7 = ((MR_Box) (check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25));
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__IfVars_2,
  MR_Word check_hlds__cse_detection__Cond0_3,
  MR_Word check_hlds__cse_detection__Then0_4,
  MR_Word check_hlds__cse_detection__Else0_5,
  MR_Word check_hlds__cse_detection__GoalInfo_6,
  MR_Word check_hlds__cse_detection__InstMap_7,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_9,
  MR_Word * check_hlds__cse_detection__Redo_10,
  MR_Word * check_hlds__cse_detection__HeadVar__11_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__cse_detection__succeeded;

        if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__cse_detection__Cond_20;
            MR_Word check_hlds__cse_detection__Then_21;
            MR_Word check_hlds__cse_detection__Else_22;

            {
              check_hlds__cse_detection__detect_cse_in_ite_arms_10_p_0(check_hlds__cse_detection__Cond0_3, &check_hlds__cse_detection__Cond_20, check_hlds__cse_detection__Then0_4, &check_hlds__cse_detection__Then_21, check_hlds__cse_detection__Else0_5, &check_hlds__cse_detection__Else_22, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_9, check_hlds__cse_detection__InstMap_7, check_hlds__cse_detection__Redo_10);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__cse_detection__HeadVar__11_11 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__IfVars_2));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__Cond_20));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__cse_detection__Then_21));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__cse_detection__Else_22));
            }
          }
        else
          {
            MR_Word check_hlds__cse_detection__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__cse_detection__Vars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__cse_detection__ModuleInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 3)));
            MR_Word check_hlds__cse_detection__VarInst0_38;
            MR_Word check_hlds__cse_detection__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 0)));
            MR_Word check_hlds__cse_detection__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 1)));
            MR_Word check_hlds__cse_detection__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 2)));
            MR_Word check_hlds__cse_detection__Unify_39;
            MR_Word check_hlds__cse_detection__FirstOldNew_40;
            MR_Word check_hlds__cse_detection__LaterOldNew_41;
            MR_Word check_hlds__cse_detection__Then_43;
            MR_Word check_hlds__cse_detection__Else_44;
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_49_49;
            MR_Word check_hlds__cse_detection__TypeCtorInfo_42_112;
            MR_Word check_hlds__cse_detection__TypeCtorInfo_43_113;
            MR_Word check_hlds__cse_detection__TypeCtorInfo_42_156;
            MR_Word check_hlds__cse_detection__TypeCtorInfo_43_157;
            MR_Word check_hlds__cse_detection__V_51_51;
            MR_Word check_hlds__cse_detection__V_75_75;
            MR_Word check_hlds__cse_detection__Goals0_86;
            MR_Word check_hlds__cse_detection__V_99_99;
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100;
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_101;
            MR_Word check_hlds__cse_detection__V_102_102;
            MR_Word check_hlds__cse_detection__V_114_114;
            MR_Word check_hlds__cse_detection__Goal0_129;
            MR_Word check_hlds__cse_detection__Goals_135;
            MR_Word check_hlds__cse_detection__V_143_143;
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144;
            MR_Word check_hlds__cse_detection__V_146_146;
            MR_Word check_hlds__cse_detection__V_158_158;
            MR_Box check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_100;
            MR_Box check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_101;
            MR_Word check_hlds__cse_detection__V_92_92;
            MR_Word check_hlds__cse_detection__V_93_93;
            MR_Word check_hlds__cse_detection__V_94_94;
            MR_Word check_hlds__cse_detection__Goals0_130;
            MR_Box check_hlds__cse_detection__conv9_STATE_VARIABLE_CseState_30_144;
            MR_Box check_hlds__cse_detection__conv8_STATE_VARIABLE_CseInfo_49_49;
            MR_Word check_hlds__cse_detection__V_73_73;
            MR_Word check_hlds__cse_detection__V_74_74;
            MR_Word check_hlds__cse_detection__Goals_91;

            {
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__cse_detection__InstMap_7, check_hlds__cse_detection__Var_26, &check_hlds__cse_detection__VarInst0_38);
            }
            {
              check_hlds__cse_detection__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(check_hlds__cse_detection__ModuleInfo_37, check_hlds__cse_detection__VarInst0_38);
            }
            if (check_hlds__cse_detection__succeeded)
              {
                check_hlds__cse_detection__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                check_hlds__cse_detection__V_75_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  check_hlds__cse_detection__Goals0_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals0_86, 0) = ((MR_Box) (check_hlds__cse_detection__Else0_5));
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals0_86, 1) = ((MR_Box) (check_hlds__cse_detection__V_51_51));
                }
                check_hlds__cse_detection__V_99_99 = (MR_Word) &check_hlds__cse_detection_scalar_common_2[4];
                check_hlds__cse_detection__V_102_102 = (MR_Integer) 0;
                check_hlds__cse_detection__TypeCtorInfo_42_112 = (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0;
                check_hlds__cse_detection__TypeCtorInfo_43_113 = (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0;
                {
                  check_hlds__switch_detection__find_bind_var_9_p_0(check_hlds__cse_detection__TypeCtorInfo_42_112, check_hlds__cse_detection__TypeCtorInfo_43_113, check_hlds__cse_detection__Var_26, check_hlds__cse_detection__V_99_99, check_hlds__cse_detection__Then0_4, &check_hlds__cse_detection__Then_43, ((MR_Box) (check_hlds__cse_detection__V_75_75)), &check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_100, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8)), &check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_101, &check_hlds__cse_detection__V_114_114);
                }
                check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100 = ((MR_Word) check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_100);
                check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_101 = ((MR_Word) check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_101);
                check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_102_102 == check_hlds__cse_detection__V_114_114);
                if (check_hlds__cse_detection__succeeded)
                  {
                    check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100)) == (MR_mktag((MR_Integer) 1)));
                    if (check_hlds__cse_detection__succeeded)
                      {
                        check_hlds__cse_detection__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100, (MR_Integer) 0)));
                        check_hlds__cse_detection__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100, (MR_Integer) 1)));
                        check_hlds__cse_detection__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100, (MR_Integer) 2)));
                        check_hlds__cse_detection__Goal0_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals0_86, (MR_Integer) 0)));
                        check_hlds__cse_detection__Goals0_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals0_86, (MR_Integer) 1)));
                        check_hlds__cse_detection__V_143_143 = (MR_Word) &check_hlds__cse_detection_scalar_common_2[5];
                        check_hlds__cse_detection__V_146_146 = (MR_Integer) 0;
                        check_hlds__cse_detection__TypeCtorInfo_42_156 = (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0;
                        check_hlds__cse_detection__TypeCtorInfo_43_157 = (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0;
                        {
                          check_hlds__switch_detection__find_bind_var_9_p_0(check_hlds__cse_detection__TypeCtorInfo_42_156, check_hlds__cse_detection__TypeCtorInfo_43_157, check_hlds__cse_detection__Var_26, check_hlds__cse_detection__V_143_143, check_hlds__cse_detection__Goal0_129, &check_hlds__cse_detection__Else_44, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100)), &check_hlds__cse_detection__conv9_STATE_VARIABLE_CseState_30_144, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_101)), &check_hlds__cse_detection__conv8_STATE_VARIABLE_CseInfo_49_49, &check_hlds__cse_detection__V_158_158);
                        }
                        check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144 = ((MR_Word) check_hlds__cse_detection__conv9_STATE_VARIABLE_CseState_30_144);
                        check_hlds__cse_detection__STATE_VARIABLE_CseInfo_49_49 = ((MR_Word) check_hlds__cse_detection__conv8_STATE_VARIABLE_CseInfo_49_49);
                        check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_146_146 == check_hlds__cse_detection__V_158_158);
                        if (check_hlds__cse_detection__succeeded)
                          {
                            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__cse_detection__succeeded)
                              {
                                check_hlds__cse_detection__Unify_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144, (MR_Integer) 0)));
                                check_hlds__cse_detection__FirstOldNew_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144, (MR_Integer) 1)));
                                check_hlds__cse_detection__LaterOldNew_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144, (MR_Integer) 2)));
                                check_hlds__cse_detection__Goals_135 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__LaterOldNew_41)) == (MR_mktag((MR_Integer) 1)));
                                if (check_hlds__cse_detection__succeeded)
                                  {
                                    check_hlds__cse_detection__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_41, (MR_Integer) 0)));
                                    check_hlds__cse_detection__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_41, (MR_Integer) 1)));
                                    {
                                      check_hlds__cse_detection__Goals_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals_91, 0) = ((MR_Box) (check_hlds__cse_detection__Else_44));
                                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals_91, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_135));
                                    }
                                    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__Goals_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  }
                              }
                          }
                      }
                  }
              }
            if (check_hlds__cse_detection__succeeded)
              {
                MR_Word check_hlds__cse_detection__IfGoal_45;
                MR_Word check_hlds__cse_detection__V_55_55;
                MR_Word check_hlds__cse_detection__V_57_57;
                MR_Word check_hlds__cse_detection__V_58_58;

                {
                  check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(check_hlds__cse_detection__Unify_39, check_hlds__cse_detection__FirstOldNew_40, check_hlds__cse_detection__LaterOldNew_41, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_49_49, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_9);
                }
                {
                  check_hlds__cse_detection__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 1) = ((MR_Box) (check_hlds__cse_detection__IfVars_2));
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 2) = ((MR_Box) (check_hlds__cse_detection__Cond0_3));
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 3) = ((MR_Box) (check_hlds__cse_detection__Then_43));
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 4) = ((MR_Box) (check_hlds__cse_detection__Else_44));
                }
                {
                  check_hlds__cse_detection__IfGoal_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__IfGoal_45, 0) = ((MR_Box) (check_hlds__cse_detection__V_55_55));
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__IfGoal_45, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_6));
                }
                {
                  check_hlds__cse_detection__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, 0) = ((MR_Box) (check_hlds__cse_detection__IfGoal_45));
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__cse_detection__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_57_57, 0) = ((MR_Box) (check_hlds__cse_detection__Unify_39));
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_57_57, 1) = ((MR_Box) (check_hlds__cse_detection__V_58_58));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__cse_detection__HeadVar__11_11 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__V_57_57));
                }
                *check_hlds__cse_detection__Redo_10 = (MR_Integer) 1;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__cse_detection__HeadVar__1__tmp_copy_1 = check_hlds__cse_detection__Vars_27;

                  check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_arms_6_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
  MR_Word check_hlds__cse_detection__InstMap0_5,
  MR_Word * check_hlds__cse_detection__HeadVar__6_6)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;

    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__cse_detection__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__cse_detection__HeadVar__6_6 = (MR_Integer) 0;
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3;
      }
    else
      {
        MR_Word check_hlds__cse_detection__Case0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__cse_detection__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__cse_detection__Case_13;
        MR_Word check_hlds__cse_detection__Cases_14;
        MR_Word check_hlds__cse_detection__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_11, (MR_Integer) 0)));
        MR_Word check_hlds__cse_detection__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_11, (MR_Integer) 1)));
        MR_Word check_hlds__cse_detection__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_11, (MR_Integer) 2)));
        MR_Word check_hlds__cse_detection__Goal_21;
        MR_Word check_hlds__cse_detection__Redo1_22;
        MR_Word check_hlds__cse_detection__Redo2_23;
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26_26;
        MR_Word check_hlds__cse_detection___InstMap_35;

        {
          check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Goal0_20, &check_hlds__cse_detection__Goal_21, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26_26, check_hlds__cse_detection__InstMap0_5, &check_hlds__cse_detection___InstMap_35, &check_hlds__cse_detection__Redo1_22);
        }
        {
          check_hlds__cse_detection__Case_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_13, 0) = ((MR_Box) (check_hlds__cse_detection__MainConsId_18));
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_13, 1) = ((MR_Box) (check_hlds__cse_detection__OtherConsIds_19));
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_13, 2) = ((MR_Box) (check_hlds__cse_detection__Goal_21));
        }
        {
          check_hlds__cse_detection__detect_cse_in_cases_arms_6_p_0(check_hlds__cse_detection__Cases0_12, &check_hlds__cse_detection__Cases_14, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26_26, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4, check_hlds__cse_detection__InstMap0_5, &check_hlds__cse_detection__Redo2_23);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__cse_detection__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Case_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Cases_14));
        }
        {
          mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_22, check_hlds__cse_detection__Redo2_23, check_hlds__cse_detection__HeadVar__6_6);
        }
      }
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_10_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__SwitchVar_2,
  MR_Word check_hlds__cse_detection__CanFail_3,
  MR_Word check_hlds__cse_detection__Cases0_4,
  MR_Word check_hlds__cse_detection__HeadVar__5_5,
  MR_Word check_hlds__cse_detection__InstMap0_6,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_8,
  MR_Word * check_hlds__cse_detection__Redo_9,
  MR_Word * check_hlds__cse_detection__GoalExpr_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__cse_detection__succeeded;

        if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__cse_detection__Cases_19;

            {
              check_hlds__cse_detection__detect_cse_in_cases_arms_6_p_0(check_hlds__cse_detection__Cases0_4, &check_hlds__cse_detection__Cases_19, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_8, check_hlds__cse_detection__InstMap0_6, check_hlds__cse_detection__Redo_9);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__cse_detection__GoalExpr_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__SwitchVar_2));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__CanFail_3));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__cse_detection__Cases_19));
            }
          }
        else
          {
            MR_Word check_hlds__cse_detection__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__cse_detection__Vars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__cse_detection__Unify_35;
            MR_Word check_hlds__cse_detection__FirstOldNew_36;
            MR_Word check_hlds__cse_detection__LaterOldNew_37;
            MR_Word check_hlds__cse_detection__Cases_38;
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_41_41;
            MR_Word check_hlds__cse_detection__ModuleInfo_33;
            MR_Word check_hlds__cse_detection__VarInst0_34;
            MR_Word check_hlds__cse_detection__V_65_65;
            MR_Word check_hlds__cse_detection__V_66_66;
            MR_Word check_hlds__cse_detection__V_50_50;
            MR_Word check_hlds__cse_detection__V_51_51;
            MR_Word check_hlds__cse_detection__V_52_52;
            MR_Word check_hlds__cse_detection__V_63_63;
            MR_Word check_hlds__cse_detection__V_64_64;

            {
              check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[0], ((MR_Box) (check_hlds__cse_detection__Var_23)), ((MR_Box) (check_hlds__cse_detection__SwitchVar_2)));
            }
            check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
            if (check_hlds__cse_detection__succeeded)
              {
                check_hlds__cse_detection__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 0)));
                check_hlds__cse_detection__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 1)));
                check_hlds__cse_detection__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 2)));
                check_hlds__cse_detection__ModuleInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 3)));
                {
                  hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__cse_detection__InstMap0_6, check_hlds__cse_detection__Var_23, &check_hlds__cse_detection__VarInst0_34);
                }
                {
                  check_hlds__cse_detection__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(check_hlds__cse_detection__ModuleInfo_33, check_hlds__cse_detection__VarInst0_34);
                }
                if (check_hlds__cse_detection__succeeded)
                  {
                    check_hlds__cse_detection__V_65_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      check_hlds__cse_detection__succeeded = check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(check_hlds__cse_detection__Cases0_4, check_hlds__cse_detection__Var_23, check_hlds__cse_detection__V_65_65, &check_hlds__cse_detection__V_66_66, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_41_41, &check_hlds__cse_detection__Cases_38);
                    }
                    if (check_hlds__cse_detection__succeeded)
                      {
                        check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_66_66)) == (MR_mktag((MR_Integer) 1)));
                        if (check_hlds__cse_detection__succeeded)
                          {
                            check_hlds__cse_detection__Unify_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_66_66, (MR_Integer) 0)));
                            check_hlds__cse_detection__FirstOldNew_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_66_66, (MR_Integer) 1)));
                            check_hlds__cse_detection__LaterOldNew_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_66_66, (MR_Integer) 2)));
                            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__LaterOldNew_37)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__cse_detection__succeeded)
                              {
                                check_hlds__cse_detection__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_37, (MR_Integer) 0)));
                                check_hlds__cse_detection__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_37, (MR_Integer) 1)));
                              }
                          }
                      }
                  }
              }
            if (check_hlds__cse_detection__succeeded)
              {
                MR_Word check_hlds__cse_detection__V_44_44;
                MR_Word check_hlds__cse_detection__V_45_45;
                MR_Word check_hlds__cse_detection__V_46_46;
                MR_Word check_hlds__cse_detection__V_47_47;

                {
                  check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(check_hlds__cse_detection__Unify_35, check_hlds__cse_detection__FirstOldNew_36, check_hlds__cse_detection__LaterOldNew_37, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_41_41, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_8);
                }
                {
                  check_hlds__cse_detection__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_47_47, 1) = ((MR_Box) (check_hlds__cse_detection__SwitchVar_2));
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_47_47, 2) = ((MR_Box) (check_hlds__cse_detection__CanFail_3));
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_47_47, 3) = ((MR_Box) (check_hlds__cse_detection__Cases_38));
                }
                {
                  check_hlds__cse_detection__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_46_46, 0) = ((MR_Box) (check_hlds__cse_detection__V_47_47));
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_46_46, 1) = ((MR_Box) (check_hlds__cse_detection__HeadVar__5_5));
                }
                {
                  check_hlds__cse_detection__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_45_45, 0) = ((MR_Box) (check_hlds__cse_detection__V_46_46));
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__cse_detection__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_44_44, 0) = ((MR_Box) (check_hlds__cse_detection__Unify_35));
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_44_44, 1) = ((MR_Box) (check_hlds__cse_detection__V_45_45));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__cse_detection__GoalExpr_10 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__V_44_44));
                }
                *check_hlds__cse_detection__Redo_9 = (MR_Integer) 1;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__cse_detection__HeadVar__1__tmp_copy_1 = check_hlds__cse_detection__Vars_24;

                  check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
  MR_Word check_hlds__cse_detection__InstMap0_5,
  MR_Word * check_hlds__cse_detection__HeadVar__6_6)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;

    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__cse_detection__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__cse_detection__HeadVar__6_6 = (MR_Integer) 0;
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3;
      }
    else
      {
        MR_Word check_hlds__cse_detection__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__cse_detection__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__cse_detection__Goal_13;
        MR_Word check_hlds__cse_detection__Goals_14;
        MR_Word check_hlds__cse_detection__Redo1_18;
        MR_Word check_hlds__cse_detection__Redo2_19;
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_22_22;
        MR_Word check_hlds__cse_detection___InstMap_31;

        {
          check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Goal0_11, &check_hlds__cse_detection__Goal_13, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_22_22, check_hlds__cse_detection__InstMap0_5, &check_hlds__cse_detection___InstMap_31, &check_hlds__cse_detection__Redo1_18);
        }
        {
          check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(check_hlds__cse_detection__Goals0_12, &check_hlds__cse_detection__Goals_14, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_22_22, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4, check_hlds__cse_detection__InstMap0_5, &check_hlds__cse_detection__Redo2_19);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__cse_detection__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_14));
        }
        {
          mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_18, check_hlds__cse_detection__Redo2_19, check_hlds__cse_detection__HeadVar__6_6);
        }
      }
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_disj_8_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__Goals0_2,
  MR_Word check_hlds__cse_detection__GoalInfo0_3,
  MR_Word check_hlds__cse_detection__HeadVar__4_4,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
  MR_Word * check_hlds__cse_detection__Redo_7,
  MR_Word * check_hlds__cse_detection__HeadVar__8_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__cse_detection__succeeded;

        if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__cse_detection__Goals_14;

            {
              check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(check_hlds__cse_detection__Goals0_2, &check_hlds__cse_detection__Goals_14, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6, check_hlds__cse_detection__HeadVar__4_4, check_hlds__cse_detection__Redo_7);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__cse_detection__HeadVar__8_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_14));
            }
          }
        else
          {
            MR_Word check_hlds__cse_detection__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__cse_detection__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__cse_detection__ModuleInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 3)));
            MR_Word check_hlds__cse_detection__VarInst0_27;
            MR_Word check_hlds__cse_detection__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 0)));
            MR_Word check_hlds__cse_detection__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 1)));
            MR_Word check_hlds__cse_detection__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 2)));
            MR_Word check_hlds__cse_detection__Unify_28;
            MR_Word check_hlds__cse_detection__FirstOldNew_29;
            MR_Word check_hlds__cse_detection__LaterOldNew_30;
            MR_Word check_hlds__cse_detection__Goals_31;
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_34_34;
            MR_Word check_hlds__cse_detection__V_57_57;
            MR_Word check_hlds__cse_detection__V_58_58;
            MR_Word check_hlds__cse_detection__V_55_55;
            MR_Word check_hlds__cse_detection__V_56_56;

            {
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__cse_detection__HeadVar__4_4, check_hlds__cse_detection__Var_18, &check_hlds__cse_detection__VarInst0_27);
            }
            {
              check_hlds__cse_detection__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(check_hlds__cse_detection__ModuleInfo_26, check_hlds__cse_detection__VarInst0_27);
            }
            if (check_hlds__cse_detection__succeeded)
              {
                check_hlds__cse_detection__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  check_hlds__cse_detection__succeeded = check_hlds__cse_detection__common_deconstruct_2_7_p_0(check_hlds__cse_detection__Goals0_2, check_hlds__cse_detection__Var_18, check_hlds__cse_detection__V_57_57, &check_hlds__cse_detection__V_58_58, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_34_34, &check_hlds__cse_detection__Goals_31);
                }
                if (check_hlds__cse_detection__succeeded)
                  {
                    check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_58_58)) == (MR_mktag((MR_Integer) 1)));
                    if (check_hlds__cse_detection__succeeded)
                      {
                        check_hlds__cse_detection__Unify_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, (MR_Integer) 0)));
                        check_hlds__cse_detection__FirstOldNew_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, (MR_Integer) 1)));
                        check_hlds__cse_detection__LaterOldNew_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, (MR_Integer) 2)));
                        check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__LaterOldNew_30)) == (MR_mktag((MR_Integer) 1)));
                        if (check_hlds__cse_detection__succeeded)
                          {
                            check_hlds__cse_detection__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_30, (MR_Integer) 0)));
                            check_hlds__cse_detection__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_30, (MR_Integer) 1)));
                          }
                      }
                  }
              }
            if (check_hlds__cse_detection__succeeded)
              {
                MR_Word check_hlds__cse_detection__V_37_37;
                MR_Word check_hlds__cse_detection__V_38_38;
                MR_Word check_hlds__cse_detection__V_39_39;
                MR_Word check_hlds__cse_detection__V_40_40;

                {
                  check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(check_hlds__cse_detection__Unify_28, check_hlds__cse_detection__FirstOldNew_29, check_hlds__cse_detection__LaterOldNew_30, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_34_34, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6);
                }
                {
                  check_hlds__cse_detection__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_40_40, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_31));
                }
                {
                  check_hlds__cse_detection__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_39_39, 0) = ((MR_Box) (check_hlds__cse_detection__V_40_40));
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_39_39, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo0_3));
                }
                {
                  check_hlds__cse_detection__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, 0) = ((MR_Box) (check_hlds__cse_detection__V_39_39));
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__cse_detection__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, 0) = ((MR_Box) (check_hlds__cse_detection__Unify_28));
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, 1) = ((MR_Box) (check_hlds__cse_detection__V_38_38));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__cse_detection__HeadVar__8_8 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__V_37_37));
                }
                *check_hlds__cse_detection__Redo_7 = (MR_Integer) 1;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__cse_detection__HeadVar__1__tmp_copy_1 = check_hlds__cse_detection__Vars_19;

                  check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_conj_7_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
  MR_Word check_hlds__cse_detection__HeadVar__5_5,
  MR_Word check_hlds__cse_detection__HeadVar__6_6,
  MR_Word * check_hlds__cse_detection__HeadVar__7_7)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;

    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__cse_detection__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__cse_detection__HeadVar__7_7 = (MR_Integer) 0;
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3;
      }
    else
      {
        MR_Word check_hlds__cse_detection__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__cse_detection__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__cse_detection__Goal_20;
        MR_Word check_hlds__cse_detection__Redo1_21;
        MR_Word check_hlds__cse_detection__TailGoals_22;
        MR_Word check_hlds__cse_detection__Redo2_23;
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_30_30;
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_InstMap_31_31;
        MR_Word check_hlds__cse_detection__GoalExpr0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_13, (MR_Integer) 0)));
        MR_Word check_hlds__cse_detection__GoalInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_13, (MR_Integer) 1)));
        MR_Word check_hlds__cse_detection__GoalExpr_45;
        MR_Word check_hlds__cse_detection__InstMapDelta_46;
        MR_Word check_hlds__cse_detection__ConjGoals_25;
        MR_Word check_hlds__cse_detection__InnerConjType_24;
        MR_Word check_hlds__cse_detection__V_33_33;
        MR_Word check_hlds__cse_detection__V_26_26;

        {
          check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(check_hlds__cse_detection__GoalExpr0_43, &check_hlds__cse_detection__GoalExpr_45, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_30_30, check_hlds__cse_detection__GoalInfo_44, check_hlds__cse_detection__HeadVar__6_6, &check_hlds__cse_detection__Redo1_21);
        }
        {
          check_hlds__cse_detection__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal_20, 0) = ((MR_Box) (check_hlds__cse_detection__GoalExpr_45));
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal_20, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_44));
        }
        {
          check_hlds__cse_detection__InstMapDelta_46 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__cse_detection__GoalInfo_44);
        }
        {
          hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__cse_detection__HeadVar__6_6, check_hlds__cse_detection__InstMapDelta_46, &check_hlds__cse_detection__STATE_VARIABLE_InstMap_31_31);
        }
        {
          check_hlds__cse_detection__detect_cse_in_conj_7_p_0(check_hlds__cse_detection__Goals0_14, &check_hlds__cse_detection__TailGoals_22, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_30_30, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4, check_hlds__cse_detection__HeadVar__5_5, check_hlds__cse_detection__STATE_VARIABLE_InstMap_31_31, &check_hlds__cse_detection__Redo2_23);
        }
        check_hlds__cse_detection__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal_20, (MR_Integer) 0)));
        check_hlds__cse_detection__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal_20, (MR_Integer) 1)));
        check_hlds__cse_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__cse_detection__V_33_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_33_33, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (check_hlds__cse_detection__succeeded)
          {
            check_hlds__cse_detection__InnerConjType_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_33_33, (MR_Integer) 1)));
            check_hlds__cse_detection__ConjGoals_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_33_33, (MR_Integer) 2)));
            check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__HeadVar__5_5 == check_hlds__cse_detection__InnerConjType_24);
          }
        if (check_hlds__cse_detection__succeeded)
          {
            {
              *check_hlds__cse_detection__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__cse_detection__ConjGoals_25, check_hlds__cse_detection__TailGoals_22);
            }
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__cse_detection__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal_20));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__TailGoals_22));
          }
        {
          mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_21, check_hlds__cse_detection__Redo2_23, check_hlds__cse_detection__HeadVar__7_7);
        }
      }
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(
  MR_Word check_hlds__cse_detection__GoalExpr0_8,
  MR_Word * check_hlds__cse_detection__GoalExpr_9,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_97,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_98,
  MR_Word check_hlds__cse_detection__GoalInfo_11,
  MR_Word check_hlds__cse_detection__InstMap0_12,
  MR_Word * check_hlds__cse_detection__Redo_13)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;

    switch (MR_tag((MR_Word) check_hlds__cse_detection__GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__cse_detection__SubGoal0_54 = (MR_Word) MR_body(((MR_Word) check_hlds__cse_detection__GoalExpr0_8), (MR_Integer) 0);
          MR_Word check_hlds__cse_detection__SubGoal_55;

          {
            check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__SubGoal0_54, &check_hlds__cse_detection__SubGoal_55, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_97, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_98, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__Redo_13);
          }
          *check_hlds__cse_detection__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__cse_detection__SubGoal_55);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__cse_detection__LHS_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 0)));
          MR_Word check_hlds__cse_detection__RHS0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
          MR_Word check_hlds__cse_detection__Mode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
          MR_Word check_hlds__cse_detection__Unify_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 3)));
          MR_Word check_hlds__cse_detection__UnifyContext_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 4)));
          MR_Word check_hlds__cse_detection__RHS_49;

          switch (MR_tag((MR_Word) check_hlds__cse_detection__RHS0_33)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                check_hlds__cse_detection__RHS_49 = check_hlds__cse_detection__RHS0_33;
                *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
                *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_98 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_97;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word check_hlds__cse_detection__Purity_37 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 0)))) & (MR_Integer) 3);
                MR_Word check_hlds__cse_detection__Groundness_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                MR_Word check_hlds__cse_detection__PredOrFunc_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                MR_Word check_hlds__cse_detection__NonLocalVars_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 2)));
                MR_Word check_hlds__cse_detection__Vars_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 3)));
                MR_Word check_hlds__cse_detection__Modes_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 4)));
                MR_Word check_hlds__cse_detection__Det_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 5)));
                MR_Word check_hlds__cse_detection__LambdaGoal0_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 6)));
                MR_Word check_hlds__cse_detection__ModuleInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_97, (MR_Integer) 3)));
                MR_Word check_hlds__cse_detection__InstMap1_47;
                MR_Word check_hlds__cse_detection__LambdaGoal_48;
                MR_Word check_hlds__cse_detection__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_97, (MR_Integer) 0)));
                MR_Word check_hlds__cse_detection__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_97, (MR_Integer) 1)));
                MR_Word check_hlds__cse_detection__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_97, (MR_Integer) 2)));

                {
                  hlds__instmap__pre_lambda_update_5_p_0(check_hlds__cse_detection__ModuleInfo_46, check_hlds__cse_detection__Vars_42, check_hlds__cse_detection__Modes_43, check_hlds__cse_detection__InstMap0_12, &check_hlds__cse_detection__InstMap1_47);
                }
                {
                  check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__LambdaGoal0_45, &check_hlds__cse_detection__LambdaGoal_48, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_97, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_98, check_hlds__cse_detection__InstMap1_47, check_hlds__cse_detection__Redo_13);
                }
                {
                  check_hlds__cse_detection__RHS_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 0) = ((MR_Box) ((check_hlds__cse_detection__Purity_37 | ((((check_hlds__cse_detection__Groundness_38 << (MR_Integer) 2)) | ((check_hlds__cse_detection__PredOrFunc_39 << (MR_Integer) 3)))))));
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 1) = (MR_Integer) 0;
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 2) = ((MR_Box) (check_hlds__cse_detection__NonLocalVars_41));
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 3) = ((MR_Box) (check_hlds__cse_detection__Vars_42));
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 4) = ((MR_Box) (check_hlds__cse_detection__Modes_43));
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 5) = ((MR_Box) (check_hlds__cse_detection__Det_44));
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 6) = ((MR_Box) (check_hlds__cse_detection__LambdaGoal_48));
                }
              }
              break;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__cse_detection__GoalExpr_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__LHS_32));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__RHS_49));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__cse_detection__Mode_34));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__cse_detection__Unify_35));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__cse_detection__UnifyContext_36));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *check_hlds__cse_detection__GoalExpr_9 = check_hlds__cse_detection__GoalExpr0_8;
          *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
          *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_98 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_97;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *check_hlds__cse_detection__GoalExpr_9 = check_hlds__cse_detection__GoalExpr0_8;
              *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
              *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_98 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_97;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__cse_detection__ConjType_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word check_hlds__cse_detection__Goals0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word check_hlds__cse_detection__Goals_71;

              {
                check_hlds__cse_detection__detect_cse_in_conj_7_p_0(check_hlds__cse_detection__Goals0_70, &check_hlds__cse_detection__Goals_71, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_97, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_98, check_hlds__cse_detection__ConjType_69, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__Redo_13);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__cse_detection__GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__ConjType_69));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__Goals_71));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__cse_detection__Goals0_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));

              if ((check_hlds__cse_detection__Goals0_122 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
                  *check_hlds__cse_detection__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__cse_detection_scalar_common_1[5]);
                  *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_98 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_97;
                }
              else
                {
                  MR_Word check_hlds__cse_detection__NonLocals_74;
                  MR_Word check_hlds__cse_detection__NonLocalsList_75;

                  {
                    check_hlds__cse_detection__NonLocals_74 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__cse_detection__GoalInfo_11);
                  }
                  {
                    check_hlds__cse_detection__NonLocalsList_75 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__cse_detection__NonLocals_74);
                  }
                  {
                    check_hlds__cse_detection__detect_cse_in_disj_8_p_0(check_hlds__cse_detection__NonLocalsList_75, check_hlds__cse_detection__Goals0_122, check_hlds__cse_detection__GoalInfo_11, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_97, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_98, check_hlds__cse_detection__Redo_13, check_hlds__cse_detection__GoalExpr_9);
                  }
                }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word check_hlds__cse_detection__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word check_hlds__cse_detection__CanFail_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word check_hlds__cse_detection__Cases0_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word check_hlds__cse_detection__NonLocals_125;
              MR_Word check_hlds__cse_detection__NonLocalsList_126;

              {
                check_hlds__cse_detection__NonLocals_125 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__cse_detection__GoalInfo_11);
              }
              {
                check_hlds__cse_detection__NonLocalsList_126 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__cse_detection__NonLocals_125);
              }
              {
                check_hlds__cse_detection__detect_cse_in_cases_10_p_0(check_hlds__cse_detection__NonLocalsList_126, check_hlds__cse_detection__Var_76, check_hlds__cse_detection__CanFail_123, check_hlds__cse_detection__Cases0_124, check_hlds__cse_detection__GoalInfo_11, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_97, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_98, check_hlds__cse_detection__Redo_13, check_hlds__cse_detection__GoalExpr_9);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word check_hlds__cse_detection__Reason0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word check_hlds__cse_detection__SubGoal0_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word check_hlds__cse_detection__V_110_110;
              MR_Word check_hlds__cse_detection__V_57_57;

              check_hlds__cse_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__cse_detection__Reason0_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (check_hlds__cse_detection__succeeded)
                {
                  check_hlds__cse_detection__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 1)));
                  check_hlds__cse_detection__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 2)));
                  check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_110_110 == (MR_Integer) 1);
                }
              if (check_hlds__cse_detection__succeeded)
                {
                  *check_hlds__cse_detection__GoalExpr_9 = check_hlds__cse_detection__GoalExpr0_8;
                  *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
                  *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_98 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_97;
                }
              else
                {
                  MR_Word check_hlds__cse_detection__SubGoalInfo0_61;
                  MR_Word check_hlds__cse_detection__SwitchVar_62;
                  MR_Word check_hlds__cse_detection__CanFail_63;
                  MR_Word check_hlds__cse_detection__Cases0_64;
                  MR_Word check_hlds__cse_detection__SubGoalExpr0_60;
                  MR_Word check_hlds__cse_detection__V_58_58;
                  MR_Word check_hlds__cse_detection__V_59_59;

                  check_hlds__cse_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__cse_detection__Reason0_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (check_hlds__cse_detection__succeeded)
                    {
                      check_hlds__cse_detection__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 1)));
                      check_hlds__cse_detection__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 2)));
                      check_hlds__cse_detection__SubGoalExpr0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__SubGoal0_120, (MR_Integer) 0)));
                      check_hlds__cse_detection__SubGoalInfo0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__SubGoal0_120, (MR_Integer) 1)));
                      check_hlds__cse_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__cse_detection__SubGoalExpr0_60)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__SubGoalExpr0_60, (MR_Integer) 0)))) == (MR_Integer) 4)));
                      if (check_hlds__cse_detection__succeeded)
                        {
                          check_hlds__cse_detection__SwitchVar_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__SubGoalExpr0_60, (MR_Integer) 1)));
                          check_hlds__cse_detection__CanFail_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__SubGoalExpr0_60, (MR_Integer) 2)));
                          check_hlds__cse_detection__Cases0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__SubGoalExpr0_60, (MR_Integer) 3)));
                        }
                    }
                  if (check_hlds__cse_detection__succeeded)
                    {
                      MR_Word check_hlds__cse_detection__Cases_65;
                      MR_Word check_hlds__cse_detection__SubGoalExpr_66;
                      MR_Word check_hlds__cse_detection__SubGoal_116;

                      {
                        check_hlds__cse_detection__detect_cse_in_cases_arms_6_p_0(check_hlds__cse_detection__Cases0_64, &check_hlds__cse_detection__Cases_65, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_97, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_98, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__Redo_13);
                      }
                      {
                        check_hlds__cse_detection__SubGoalExpr_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), check_hlds__cse_detection__SubGoalExpr_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                        MR_hl_field(MR_mktag(3), check_hlds__cse_detection__SubGoalExpr_66, 1) = ((MR_Box) (check_hlds__cse_detection__SwitchVar_62));
                        MR_hl_field(MR_mktag(3), check_hlds__cse_detection__SubGoalExpr_66, 2) = ((MR_Box) (check_hlds__cse_detection__CanFail_63));
                        MR_hl_field(MR_mktag(3), check_hlds__cse_detection__SubGoalExpr_66, 3) = ((MR_Box) (check_hlds__cse_detection__Cases_65));
                      }
                      {
                        check_hlds__cse_detection__SubGoal_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__cse_detection__SubGoal_116, 0) = ((MR_Box) (check_hlds__cse_detection__SubGoalExpr_66));
                        MR_hl_field(MR_mktag(0), check_hlds__cse_detection__SubGoal_116, 1) = ((MR_Box) (check_hlds__cse_detection__SubGoalInfo0_61));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        *check_hlds__cse_detection__GoalExpr_9 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__Reason0_56));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__SubGoal_116));
                      }
                    }
                  else
                    {
                      MR_Word check_hlds__cse_detection__SubGoal_117;
                      MR_Word check_hlds__cse_detection__V_113_113;
                      MR_Word check_hlds__cse_detection__V_67_67;

                      {
                        check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__SubGoal0_120, &check_hlds__cse_detection__SubGoal_117, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_97, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_98, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__Redo_13);
                      }
                      check_hlds__cse_detection__succeeded = (*check_hlds__cse_detection__Redo_13 == (MR_Integer) 1);
                      if (check_hlds__cse_detection__succeeded)
                        {
                          check_hlds__cse_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__cse_detection__Reason0_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 0)))) == (MR_Integer) 5)));
                          if (check_hlds__cse_detection__succeeded)
                            {
                              check_hlds__cse_detection__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 1)));
                              check_hlds__cse_detection__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 2)));
                              check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_113_113 == (MR_Integer) 2);
                            }
                        }
                      if (check_hlds__cse_detection__succeeded)
                        {
                          MR_Word check_hlds__cse_detection__V_68_68;

                          *check_hlds__cse_detection__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__SubGoal_117, (MR_Integer) 0)));
                          check_hlds__cse_detection__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__SubGoal_117, (MR_Integer) 1)));
                        }
                      else
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          *check_hlds__cse_detection__GoalExpr_9 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__Reason0_56));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__SubGoal_117));
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word check_hlds__cse_detection__Cond0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word check_hlds__cse_detection__Then0_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word check_hlds__cse_detection__Else0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 4)));
              MR_Word check_hlds__cse_detection__Vars_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word check_hlds__cse_detection__NonLocals_128;
              MR_Word check_hlds__cse_detection__NonLocalsList_129;

              {
                check_hlds__cse_detection__NonLocals_128 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__cse_detection__GoalInfo_11);
              }
              {
                check_hlds__cse_detection__NonLocalsList_129 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__cse_detection__NonLocals_128);
              }
              {
                check_hlds__cse_detection__detect_cse_in_ite_11_p_0(check_hlds__cse_detection__NonLocalsList_129, check_hlds__cse_detection__Vars_127, check_hlds__cse_detection__Cond0_77, check_hlds__cse_detection__Then0_78, check_hlds__cse_detection__Else0_79, check_hlds__cse_detection__GoalInfo_11, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_97, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_98, check_hlds__cse_detection__Redo_13, check_hlds__cse_detection__GoalExpr_9);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word check_hlds__cse_detection__ShortHand0_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word check_hlds__cse_detection__ShortHand_92;

              switch (MR_tag((MR_Word) check_hlds__cse_detection__ShortHand0_80)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_goal_expr\'/7", (MR_String) "bi_implication");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__cse_detection__AtomicGoalType_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_80, (MR_Integer) 0)));
                    MR_Word check_hlds__cse_detection__Outer_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_80, (MR_Integer) 1)));
                    MR_Word check_hlds__cse_detection__Inner_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_80, (MR_Integer) 2)));
                    MR_Word check_hlds__cse_detection__MaybeOutputVars_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_80, (MR_Integer) 3)));
                    MR_Word check_hlds__cse_detection__MainGoal0_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_80, (MR_Integer) 4)));
                    MR_Word check_hlds__cse_detection__OrElseGoals0_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_80, (MR_Integer) 5)));
                    MR_Word check_hlds__cse_detection__OrElseInners_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_80, (MR_Integer) 6)));
                    MR_Word check_hlds__cse_detection__MainGoal_88;
                    MR_Word check_hlds__cse_detection__Redo1_89;
                    MR_Word check_hlds__cse_detection__OrElseGoals_90;
                    MR_Word check_hlds__cse_detection__Redo2_91;
                    MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_103_103;

                    {
                      check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__MainGoal0_85, &check_hlds__cse_detection__MainGoal_88, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_97, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_103_103, check_hlds__cse_detection__InstMap0_12, &check_hlds__cse_detection__Redo1_89);
                    }
                    {
                      check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(check_hlds__cse_detection__OrElseGoals0_86, &check_hlds__cse_detection__OrElseGoals_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_103_103, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_98, check_hlds__cse_detection__InstMap0_12, &check_hlds__cse_detection__Redo2_91);
                    }
                    {
                      check_hlds__cse_detection__ShortHand_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_92, 0) = ((MR_Box) (check_hlds__cse_detection__AtomicGoalType_81));
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_92, 1) = ((MR_Box) (check_hlds__cse_detection__Outer_82));
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_92, 2) = ((MR_Box) (check_hlds__cse_detection__Inner_83));
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_92, 3) = ((MR_Box) (check_hlds__cse_detection__MaybeOutputVars_84));
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_92, 4) = ((MR_Box) (check_hlds__cse_detection__MainGoal_88));
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_92, 5) = ((MR_Box) (check_hlds__cse_detection__OrElseGoals_90));
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_92, 6) = ((MR_Box) (check_hlds__cse_detection__OrElseInners_87));
                    }
                    {
                      mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_89, check_hlds__cse_detection__Redo2_91, check_hlds__cse_detection__Redo_13);
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__cse_detection__MaybeIO_95 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand0_80, (MR_Integer) 0)));
                    MR_Word check_hlds__cse_detection__ResultVar_96 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand0_80, (MR_Integer) 1)));
                    MR_Word check_hlds__cse_detection__SubGoal0_130 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand0_80, (MR_Integer) 2)));
                    MR_Word check_hlds__cse_detection__SubGoal_131;

                    {
                      check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__SubGoal0_130, &check_hlds__cse_detection__SubGoal_131, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_97, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_98, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__Redo_13);
                    }
                    {
                      check_hlds__cse_detection__ShortHand_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand_92, 0) = ((MR_Box) (check_hlds__cse_detection__MaybeIO_95));
                      MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand_92, 1) = ((MR_Box) (check_hlds__cse_detection__ResultVar_96));
                      MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand_92, 2) = ((MR_Box) (check_hlds__cse_detection__SubGoal_131));
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__cse_detection__GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__ShortHand_92));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(
  MR_Word check_hlds__cse_detection__Goal0_8,
  MR_Word * check_hlds__cse_detection__Goal_9,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_18,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_19,
  MR_Word check_hlds__cse_detection__InstMap0_11,
  MR_Word * check_hlds__cse_detection__InstMap_12,
  MR_Word * check_hlds__cse_detection__Redo_13)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;
    MR_Word check_hlds__cse_detection__GoalExpr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_8, (MR_Integer) 0)));
    MR_Word check_hlds__cse_detection__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_8, (MR_Integer) 1)));
    MR_Word check_hlds__cse_detection__GoalExpr_16;
    MR_Word check_hlds__cse_detection__InstMapDelta_17;

    {
      check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(check_hlds__cse_detection__GoalExpr0_14, &check_hlds__cse_detection__GoalExpr_16, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_18, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_19, check_hlds__cse_detection__GoalInfo_15, check_hlds__cse_detection__InstMap0_11, check_hlds__cse_detection__Redo_13);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__cse_detection__Goal_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__cse_detection__GoalExpr_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_15));
    }
    {
      check_hlds__cse_detection__InstMapDelta_17 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__cse_detection__GoalInfo_15);
    }
    {
      hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__cse_detection__InstMap0_11, check_hlds__cse_detection__InstMapDelta_17, check_hlds__cse_detection__InstMap_12);
    }
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_6_p_0(
  MR_Word check_hlds__cse_detection__Goal0_7,
  MR_Word * check_hlds__cse_detection__Goal_8,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_13,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_14,
  MR_Word check_hlds__cse_detection__InstMap0_10,
  MR_Word * check_hlds__cse_detection__Redo_11)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;
    MR_Word check_hlds__cse_detection___InstMap_12;

    {
      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Goal0_7, check_hlds__cse_detection__Goal_8, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_13, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_14, check_hlds__cse_detection__InstMap0_10, &check_hlds__cse_detection___InstMap_12, check_hlds__cse_detection__Redo_11);
    }
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_proc_pass_4_p_0(
  MR_Word check_hlds__cse_detection__ModuleInfo_5,
  MR_Word * check_hlds__cse_detection__Redo_6,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_27)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;
    MR_Word check_hlds__cse_detection__Goal0_8;
    MR_Word check_hlds__cse_detection__InstMap0_9;
    MR_Word check_hlds__cse_detection__Varset0_10;
    MR_Word check_hlds__cse_detection__VarTypes0_11;
    MR_Word check_hlds__cse_detection__RttiVarMaps0_12;
    MR_Word check_hlds__cse_detection__CseInfo0_13;
    MR_Word check_hlds__cse_detection__Goal1_14;
    MR_Word check_hlds__cse_detection__CseInfo_15;
    MR_Word check_hlds__cse_detection___InstMap_40;

    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__Goal0_8);
    }
    {
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, check_hlds__cse_detection__ModuleInfo_5, &check_hlds__cse_detection__InstMap0_9);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__Varset0_10);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__VarTypes0_11);
    }
    {
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__RttiVarMaps0_12);
    }
    {
      check_hlds__cse_detection__CseInfo0_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo0_13, 0) = ((MR_Box) (check_hlds__cse_detection__Varset0_10));
      MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo0_13, 1) = ((MR_Box) (check_hlds__cse_detection__VarTypes0_11));
      MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo0_13, 2) = ((MR_Box) (check_hlds__cse_detection__RttiVarMaps0_12));
      MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo0_13, 3) = ((MR_Box) (check_hlds__cse_detection__ModuleInfo_5));
    }
    {
      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Goal0_8, &check_hlds__cse_detection__Goal1_14, check_hlds__cse_detection__CseInfo0_13, &check_hlds__cse_detection__CseInfo_15, check_hlds__cse_detection__InstMap0_9, &check_hlds__cse_detection___InstMap_40, check_hlds__cse_detection__Redo_6);
    }
    switch (*check_hlds__cse_detection__Redo_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_27 = check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26;
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__cse_detection__VarSet1_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo_15, (MR_Integer) 0)));
          MR_Word check_hlds__cse_detection__VarTypes1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo_15, (MR_Integer) 1)));
          MR_Word check_hlds__cse_detection__RttiVarMaps1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo_15, (MR_Integer) 2)));
          MR_Word check_hlds__cse_detection__HeadVars_20;
          MR_Word check_hlds__cse_detection__Goal_22;
          MR_Word check_hlds__cse_detection__VarSet_23;
          MR_Word check_hlds__cse_detection__VarTypes_24;
          MR_Word check_hlds__cse_detection__RttiVarMaps_25;
          MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_29_29;
          MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_30_30;
          MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_31_31;
          MR_Word check_hlds__cse_detection__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo_15, (MR_Integer) 3)));
          MR_Word check_hlds__cse_detection___Warnings_21;

          {
            hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__HeadVars_20);
          }
          {
            hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, check_hlds__cse_detection__HeadVars_20, &check_hlds__cse_detection___Warnings_21, check_hlds__cse_detection__Goal1_14, &check_hlds__cse_detection__Goal_22, check_hlds__cse_detection__VarSet1_16, &check_hlds__cse_detection__VarSet_23, check_hlds__cse_detection__VarTypes1_17, &check_hlds__cse_detection__VarTypes_24, check_hlds__cse_detection__RttiVarMaps1_18, &check_hlds__cse_detection__RttiVarMaps_25);
          }
          {
            hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__cse_detection__Goal_22, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_29_29);
          }
          {
            hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__cse_detection__VarSet_23, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_29_29, &check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_30_30);
          }
          {
            hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__cse_detection__VarTypes_24, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_30_30, &check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_31_31);
          }
          {
            hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(check_hlds__cse_detection__RttiVarMaps_25, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_31_31, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_27);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_procs_4_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__cse_detection__succeeded;

        if ((check_hlds__cse_detection__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_4 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3;
        else
          {
            MR_Integer check_hlds__cse_detection__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__cse_detection__ProcIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_15_15;

            {
              check_hlds__cse_detection__detect_cse_in_proc_4_p_0(check_hlds__cse_detection__HeadVar__1_1, check_hlds__cse_detection__ProcId_10, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_15_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__cse_detection__HeadVar__2__tmp_copy_2 = check_hlds__cse_detection__ProcIds_11;
              MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_15_15;

              check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
              check_hlds__cse_detection__HeadVar__2_2 = check_hlds__cse_detection__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_preds_3_p_0(
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__cse_detection__succeeded;

        if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_3 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2;
        else
          {
            MR_Word check_hlds__cse_detection__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__cse_detection__PredIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__cse_detection__PredTable_10;
            MR_Word check_hlds__cse_detection__PredInfo_11;
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_14_14;
            MR_Word check_hlds__cse_detection__ProcIds_23;
            MR_Box check_hlds__cse_detection__conv0_PredInfo_11;

            {
              hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2, &check_hlds__cse_detection__PredTable_10);
            }
            {
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__cse_detection__PredTable_10, ((MR_Box) (check_hlds__cse_detection__PredId_7)), &check_hlds__cse_detection__conv0_PredInfo_11);
            }
            check_hlds__cse_detection__PredInfo_11 = ((MR_Word) check_hlds__cse_detection__conv0_PredInfo_11);
            {
              check_hlds__cse_detection__ProcIds_23 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(check_hlds__cse_detection__PredInfo_11);
            }
            {
              check_hlds__cse_detection__detect_cse_in_procs_4_p_0(check_hlds__cse_detection__PredId_7, check_hlds__cse_detection__ProcIds_23, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_14_14);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__cse_detection__HeadVar__1__tmp_copy_1 = check_hlds__cse_detection__PredIds_8;
              MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_14_14;

              check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
              check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
check_hlds__cse_detection__detect_cse_in_proc_4_p_0(
  MR_Word check_hlds__cse_detection__PredId_5,
  MR_Integer check_hlds__cse_detection__ProcId_6,
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_34)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__cse_detection__succeeded;
        MR_Word check_hlds__cse_detection__TypeCtorInfo_76_76;
        MR_Word check_hlds__cse_detection__TypeCtorInfo_77_77;
        MR_Word check_hlds__cse_detection__TypeCtorInfo_79_79;
        MR_Word check_hlds__cse_detection__Globals_8;
        MR_Word check_hlds__cse_detection__VeryVerbose_9;
        MR_Word check_hlds__cse_detection__PredTable0_11;
        MR_Word check_hlds__cse_detection__PredInfo0_12;
        MR_Word check_hlds__cse_detection__ProcTable0_13;
        MR_Word check_hlds__cse_detection__ProcInfo0_14;
        MR_Word check_hlds__cse_detection__Redo_15;
        MR_Word check_hlds__cse_detection__ProcInfo1_16;
        MR_Word check_hlds__cse_detection__ProcTable1_17;
        MR_Word check_hlds__cse_detection__PredInfo1_18;
        MR_Word check_hlds__cse_detection__PredTable1_19;
        MR_Word check_hlds__cse_detection__Statistics_20;
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42;
        MR_Box check_hlds__cse_detection__conv0_PredInfo0_12;
        MR_Box check_hlds__cse_detection__conv1_ProcInfo0_14;

        {
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__cse_detection__Globals_8);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(check_hlds__cse_detection__Globals_8, (MR_Integer) 48, &check_hlds__cse_detection__VeryVerbose_9);
        }
        switch (check_hlds__cse_detection__VeryVerbose_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "% Detecting common deconstructions for ");
              }
              {
                hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, check_hlds__cse_detection__PredId_5);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
            }
            break;
        }
        {
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__cse_detection__PredTable0_11);
        }
        check_hlds__cse_detection__TypeCtorInfo_76_76 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
        check_hlds__cse_detection__TypeCtorInfo_77_77 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
        {
          mercury__map__lookup_3_p_0(check_hlds__cse_detection__TypeCtorInfo_76_76, check_hlds__cse_detection__TypeCtorInfo_77_77, check_hlds__cse_detection__PredTable0_11, ((MR_Box) (check_hlds__cse_detection__PredId_5)), &check_hlds__cse_detection__conv0_PredInfo0_12);
        }
        check_hlds__cse_detection__PredInfo0_12 = ((MR_Word) check_hlds__cse_detection__conv0_PredInfo0_12);
        {
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__cse_detection__PredInfo0_12, &check_hlds__cse_detection__ProcTable0_13);
        }
        check_hlds__cse_detection__TypeCtorInfo_79_79 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__cse_detection__TypeCtorInfo_79_79, check_hlds__cse_detection__ProcTable0_13, check_hlds__cse_detection__ProcId_6, &check_hlds__cse_detection__conv1_ProcInfo0_14);
        }
        check_hlds__cse_detection__ProcInfo0_14 = ((MR_Word) check_hlds__cse_detection__conv1_ProcInfo0_14);
        {
          check_hlds__cse_detection__detect_cse_in_proc_pass_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__cse_detection__Redo_15, check_hlds__cse_detection__ProcInfo0_14, &check_hlds__cse_detection__ProcInfo1_16);
        }
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__cse_detection__TypeCtorInfo_79_79, check_hlds__cse_detection__ProcId_6, ((MR_Box) (check_hlds__cse_detection__ProcInfo1_16)), check_hlds__cse_detection__ProcTable0_13, &check_hlds__cse_detection__ProcTable1_17);
        }
        {
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__cse_detection__ProcTable1_17, check_hlds__cse_detection__PredInfo0_12, &check_hlds__cse_detection__PredInfo1_18);
        }
        {
          mercury__map__det_update_4_p_0(check_hlds__cse_detection__TypeCtorInfo_76_76, check_hlds__cse_detection__TypeCtorInfo_77_77, ((MR_Box) (check_hlds__cse_detection__PredId_5)), ((MR_Box) (check_hlds__cse_detection__PredInfo1_18)), check_hlds__cse_detection__PredTable0_11, &check_hlds__cse_detection__PredTable1_19);
        }
        {
          hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__cse_detection__PredTable1_19, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(check_hlds__cse_detection__Globals_8, (MR_Integer) 58, &check_hlds__cse_detection__Statistics_20);
        }
        {
          libs__file_util__maybe_report_stats_3_p_0(check_hlds__cse_detection__Statistics_20);
        }
        switch (check_hlds__cse_detection__Redo_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_34 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42;
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__cse_detection__PredTable2_24;
              MR_Word check_hlds__cse_detection__PredInfo2_25;
              MR_Word check_hlds__cse_detection__ProcTable2_26;
              MR_Word check_hlds__cse_detection__ProcInfo2_27;
              MR_Word check_hlds__cse_detection__SwitchDetectInfo_28;
              MR_Word check_hlds__cse_detection__ProcInfo_29;
              MR_Word check_hlds__cse_detection__ProcTable3_30;
              MR_Word check_hlds__cse_detection__PredInfo3_31;
              MR_Word check_hlds__cse_detection__PredTable3_32;
              MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52;
              MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_64_64;
              MR_Box check_hlds__cse_detection__conv2_PredInfo2_25;
              MR_Box check_hlds__cse_detection__conv3_ProcInfo2_27;

              switch (check_hlds__cse_detection__VeryVerbose_9) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__cse_detection__ModeSpecs_21;
                    MR_Word check_hlds__cse_detection__ContainsErrors_23;
                    MR_Word check_hlds__cse_detection___Changed_22;

                    {
                      check_hlds__modes__modecheck_proc_6_p_0(check_hlds__cse_detection__ProcId_6, check_hlds__cse_detection__PredId_5, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__cse_detection__ModeSpecs_21, &check_hlds__cse_detection___Changed_22);
                    }
                    {
                      libs__file_util__maybe_report_stats_3_p_0(check_hlds__cse_detection__Statistics_20);
                    }
                    {
                      check_hlds__cse_detection__ContainsErrors_23 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__cse_detection__Globals_8, check_hlds__cse_detection__ModeSpecs_21);
                    }
                    switch (check_hlds__cse_detection__ContainsErrors_23) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_proc\'/4", (MR_String) "mode check fails when repeated");
                            return;
                          }
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__cse_detection__ModeSpecs_91;
                    MR_Word check_hlds__cse_detection__ContainsErrors_93;
                    MR_Word check_hlds__cse_detection___Changed_80;

                    {
                      mercury__io__write_string_3_p_0((MR_String) "% Repeating mode check for ");
                    }
                    {
                      hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42, check_hlds__cse_detection__PredId_5);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\n");
                    }
                    {
                      check_hlds__modes__modecheck_proc_6_p_0(check_hlds__cse_detection__ProcId_6, check_hlds__cse_detection__PredId_5, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__cse_detection__ModeSpecs_91, &check_hlds__cse_detection___Changed_80);
                    }
                    {
                      libs__file_util__maybe_report_stats_3_p_0(check_hlds__cse_detection__Statistics_20);
                    }
                    {
                      check_hlds__cse_detection__ContainsErrors_93 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__cse_detection__Globals_8, check_hlds__cse_detection__ModeSpecs_91);
                    }
                    switch (check_hlds__cse_detection__ContainsErrors_93) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_proc\'/4", (MR_String) "mode check fails when repeated");
                            return;
                          }
                        }
                        break;
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "% Repeating switch detection for ");
                    }
                    {
                      hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, check_hlds__cse_detection__PredId_5);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\n");
                    }
                  }
                  break;
              }
              {
                hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__cse_detection__PredTable2_24);
              }
              {
                mercury__map__lookup_3_p_0(check_hlds__cse_detection__TypeCtorInfo_76_76, check_hlds__cse_detection__TypeCtorInfo_77_77, check_hlds__cse_detection__PredTable2_24, ((MR_Box) (check_hlds__cse_detection__PredId_5)), &check_hlds__cse_detection__conv2_PredInfo2_25);
              }
              check_hlds__cse_detection__PredInfo2_25 = ((MR_Word) check_hlds__cse_detection__conv2_PredInfo2_25);
              {
                hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__cse_detection__PredInfo2_25, &check_hlds__cse_detection__ProcTable2_26);
              }
              {
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__cse_detection__TypeCtorInfo_79_79, check_hlds__cse_detection__ProcTable2_26, check_hlds__cse_detection__ProcId_6, &check_hlds__cse_detection__conv3_ProcInfo2_27);
              }
              check_hlds__cse_detection__ProcInfo2_27 = ((MR_Word) check_hlds__cse_detection__conv3_ProcInfo2_27);
              {
                check_hlds__cse_detection__SwitchDetectInfo_28 = check_hlds__switch_detection__init_switch_detect_info_1_f_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52);
              }
              {
                check_hlds__switch_detection__detect_switches_in_proc_3_p_0(check_hlds__cse_detection__SwitchDetectInfo_28, check_hlds__cse_detection__ProcInfo2_27, &check_hlds__cse_detection__ProcInfo_29);
              }
              {
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__cse_detection__TypeCtorInfo_79_79, check_hlds__cse_detection__ProcId_6, ((MR_Box) (check_hlds__cse_detection__ProcInfo_29)), check_hlds__cse_detection__ProcTable2_26, &check_hlds__cse_detection__ProcTable3_30);
              }
              {
                hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__cse_detection__ProcTable3_30, check_hlds__cse_detection__PredInfo2_25, &check_hlds__cse_detection__PredInfo3_31);
              }
              {
                mercury__map__det_update_4_p_0(check_hlds__cse_detection__TypeCtorInfo_76_76, check_hlds__cse_detection__TypeCtorInfo_77_77, ((MR_Box) (check_hlds__cse_detection__PredId_5)), ((MR_Box) (check_hlds__cse_detection__PredInfo3_31)), check_hlds__cse_detection__PredTable2_24, &check_hlds__cse_detection__PredTable3_32);
              }
              {
                hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__cse_detection__PredTable3_32, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_64_64);
              }
              {
                libs__file_util__maybe_report_stats_3_p_0(check_hlds__cse_detection__Statistics_20);
              }
              switch (check_hlds__cse_detection__VeryVerbose_9) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "% Repeating common deconstruction detection for ");
                    }
                    {
                      hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_64_64, check_hlds__cse_detection__PredId_5);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\n");
                    }
                  }
                  break;
              }
              /* direct tailcall eliminated */
              {
                MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_33 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_64_64;

                check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_33;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
check_hlds__cse_detection__detect_cse_in_module_2_p_0(
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_6)
{
  {
    MR_bool check_hlds__cse_detection__succeeded;
    MR_Word check_hlds__cse_detection__PredIds_4;

    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_5, &check_hlds__cse_detection__PredIds_4);
    }
    {
      check_hlds__cse_detection__detect_cse_in_preds_3_p_0(check_hlds__cse_detection__PredIds_4, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_5, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_6);
    }
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

/* :- end_module check_hlds.cse_detection. */
