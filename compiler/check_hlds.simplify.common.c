/*
** Automatically generated from `common.m'
** by the Mercury compiler,
** version rotd-2021-01-26
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


// :- module check_hlds.simplify.common.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__common__init
ENDINIT
*/

#include "check_hlds.simplify.common.mih"


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
#include "eqvclass.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
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
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
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
#include "transform_hlds.pd_cost.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__eqvclass__pti_eqvclass_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_call_args_0_0[3];

static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_call_args_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_call_args_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_call_args_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_call_args_0[1];

static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_call_args_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0;

static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_common_info_0_0[5];

static const MR_ConstString check_hlds__simplify__common__check_hlds__simplify__common__field_names_common_info_0_0[5];

static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_common_info_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_common_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_common_info_0[1];

static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_common_info_0[1];

static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_structure_0_0[2];

static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_structure_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_structure_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_structure_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_structure_0[1];

static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_structure_0[1];

static void MR_CALL 
check_hlds__simplify__common__IntroducedFrom__pred__common_optimise_construct__441__1_4_p_0(
  MR_Word HeadVar__1_67,
  MR_Integer * HeadVar__2_68,
  MR_Word HeadVar__3_69,
  MR_Word * HeadVar__4_70);

static void MR_CALL 
check_hlds__simplify__common____Compare____structures_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structures_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____structure_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structure_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____struct_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____struct_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____seen_calls_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____seen_calls_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____cons_id_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____cons_id_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____call_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____call_args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__common__find_representative_4_p_0(
  MR_Word SinceCallVars_5,
  MR_Word VarEqv_6,
  MR_Word Var_7,
  MR_Word * RepnVar_8);

static MR_bool MR_CALL 
check_hlds__simplify__common__find_representative_loop_3_p_0(
  MR_Word SinceCallVars_4,
  MR_Word HeadVar__2_2,
  MR_Word * RepnVar_7);

static MR_bool MR_CALL 
check_hlds__simplify__common__partition_call_args_7_p_0(
  MR_Word VarTypes_1,
  MR_Word ModuleInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
check_hlds__simplify__common__common_optimise_call_2_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__common__common_optimise_call_2_11_p_0(
  MR_Word SeenCall_12,
  MR_Word InputArgs_13,
  MR_Word OutputArgs_14,
  MR_Word Modes_15,
  MR_Word GoalInfo_16,
  MR_Word GoalExpr0_17,
  MR_Word * MaybeAssignsGoalExpr_18,
  MR_Word Common0_19,
  MR_Word * Common_20,
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48);

static MR_bool MR_CALL 
check_hlds__simplify__common__find_previous_call_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InputArgs_8,
  MR_Word Eqv_9,
  MR_Word * OutputArgs_10,
  MR_Word * PrevContext_11);

static MR_bool MR_CALL 
check_hlds__simplify__common__common_var_lists_are_equiv_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
check_hlds__simplify__common__record_equivalence_4_p_0(
  MR_Word VarA_5,
  MR_Word VarB_6,
  MR_Word STATE_VARIABLE_Common_0_10,
  MR_Word * STATE_VARIABLE_Common_11);

static MR_Box MR_CALL 
check_hlds__simplify__common__common_optimise_deconstruct_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__simplify__common__common_optimise_deconstruct_13_p_0(
  MR_Word Var_14,
  MR_Word ConsId_15,
  MR_Word ArgVars_16,
  MR_Word ArgModes_17,
  MR_Word CanFail_18,
  MR_Word GoalExpr0_19,
  MR_Word * GoalExpr_20,
  MR_Word GoalInfo0_21,
  MR_Word * GoalInfo_22,
  MR_Word STATE_VARIABLE_Common_0_40,
  MR_Word * STATE_VARIABLE_Common_41,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43);

static void MR_CALL 
check_hlds__simplify__common__create_output_unifications_9_p_0(
  MR_Word OldGoalInfo_10,
  MR_Word OutputArgs_11,
  MR_Word OldOutputArgs_12,
  MR_Word FromToInsts_13,
  MR_Word * AssignGoals_14,
  MR_Word STATE_VARIABLE_Common_0_27,
  MR_Word * STATE_VARIABLE_Common_28,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_deconstruct_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarEqv_7,
  MR_Integer VarId_8,
  MR_Word * Match_9);

static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0(
  MR_Word Var_13,
  MR_Word ConsId_14,
  MR_Word ArgVars_15,
  MR_Word LVarFinalInst_16,
  MR_Word GoalExpr0_17,
  MR_Word * GoalExpr_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalInfo_20,
  MR_Word STATE_VARIABLE_Common_0_40,
  MR_Word * STATE_VARIABLE_Common_41,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43);

static void MR_CALL 
check_hlds__simplify__common__generate_assign_10_p_0(
  MR_Word ToVar_11,
  MR_Word FromVar_12,
  MR_Word ToVarMode_13,
  MR_Word OldGoalInfo_14,
  MR_Word * GoalExpr_15,
  MR_Word * GoalInfo_16,
  MR_Word STATE_VARIABLE_Common_0_31,
  MR_Word * STATE_VARIABLE_Common_32,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34);

static void MR_CALL 
check_hlds__simplify__common__apply_induced_substitutions_4_p_0(
  MR_Word ToVar_5,
  MR_Word FromVar_6,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_construct_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarEqv_7,
  MR_Word ArgVarIds_8,
  MR_Word * Match_9);

static MR_bool MR_CALL 
check_hlds__simplify__common__ids_vars_match_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
check_hlds__simplify__common__common_standardize_and_record_construct_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__common__common_standardize_and_record_construct_13_p_0(
  MR_Word Var_14,
  MR_Word TypeCtor_15,
  MR_Word ConsId_16,
  MR_Word ArgVars_17,
  MR_Word VarEqv_18,
  MR_Word GoalExpr0_19,
  MR_Word * GoalExpr_20,
  MR_Word GoalInfo0_21,
  MR_Word * GoalInfo_22,
  MR_Word STATE_VARIABLE_Common_0_40,
  MR_Word * STATE_VARIABLE_Common_41,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43);

static void MR_CALL 
check_hlds__simplify__common__record_cell_in_maps_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word ConsId_8,
  MR_Word Struct_9,
  MR_Word VarEqv_10,
  MR_Word STATE_VARIABLE_Common_0_16,
  MR_Word * STATE_VARIABLE_Common_17);

static void MR_CALL 
check_hlds__simplify__common__do_record_cell_in_struct_map_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word ConsId_7,
  MR_Word Struct_8,
  MR_Word STATE_VARIABLE_StructMap_0_14,
  MR_Word * STATE_VARIABLE_StructMap_15);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____call_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____call_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____common_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____common_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____cons_id_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____cons_id_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____seen_calls_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____seen_calls_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____struct_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____struct_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structure_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____structure_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structures_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____structures_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_1[12][2];

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_3[2][7];

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_4[1][1];

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_5[1][5];

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_6[1][6];




static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_1[12][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_structure_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_call_args_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1)),
    ((MR_Box) (&check_hlds__simplify__common_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__common_scalar_common_1[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: redundant"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Here is the previous"))
  },
};

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__simplify__common_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__simplify__common_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0)),
    ((MR_Box) (&check_hlds__simplify__common_scalar_common_1[2]))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__simplify__common_scalar_common_3[1])),
    ((MR_Box) (check_hlds__simplify__common__common_optimise_construct_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__simplify__common_scalar_common_5[0])),
    ((MR_Box) (check_hlds__simplify__common__common_optimise_deconstruct_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_3[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__simplify__common__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__common__eqvclass__pti_eqvclass_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__common__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__common__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__simplify__common__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__simplify__common__eqvclass__pti_eqvclass_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__common__eqvclass__pti_eqvclass_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_4[1][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__eqvclass__pti_eqvclass_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_call_args_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_call_args_0_0 = {
  (MR_String) "call_args",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__simplify__common__check_hlds__simplify__common__field_types_call_args_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_call_args_0_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_call_args_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_call_args_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_call_args_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_call_args_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_call_args_0_0
};

static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_call_args_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_call_args_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__common____Unify____call_args_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____call_args_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "call_args",
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_call_args_0 },
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_call_args_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_call_args_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1,
  {
    (MR_TypeInfo) (&check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_structure_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
    (MR_TypeInfo) (&check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_call_args_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0),
    (MR_TypeInfo) (&check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_common_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__common__eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__common__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0)
};

static const MR_ConstString check_hlds__simplify__common__check_hlds__simplify__common__field_names_common_info_0_0[5] = {
  (MR_String) "var_eqv",
  (MR_String) "all_structs",
  (MR_String) "since_call_structs",
  (MR_String) "since_call_vars",
  (MR_String) "seen_calls"
};

static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_info_0_0 = {
  (MR_String) "common_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__simplify__common__check_hlds__simplify__common__field_types_common_info_0_0,
  check_hlds__simplify__common__check_hlds__simplify__common__field_names_common_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_common_info_0_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_info_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_common_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_common_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_common_info_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_info_0_0
};

static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_common_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_common_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__common____Unify____common_info_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____common_info_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "common_info",
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_common_info_0 },
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_common_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_common_info_0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_cons_id_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__common____Unify____cons_id_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____cons_id_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "cons_id_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_seen_calls_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__common____Unify____seen_calls_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____seen_calls_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "seen_calls",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_struct_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__common____Unify____struct_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____struct_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "struct_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_structure_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_structure_0_0 = {
  (MR_String) "structure",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__simplify__common__check_hlds__simplify__common__field_types_structure_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_structure_0_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_structure_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_structure_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_structure_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_structure_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_structure_0_0
};

static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_structure_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_structure_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__common____Unify____structure_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____structure_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "structure",
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_structure_0 },
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_structure_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_structure_0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_structures_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__common____Unify____structures_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____structures_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "structures",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static void MR_CALL 
check_hlds__simplify__common__IntroducedFrom__pred__common_optimise_construct__441__1_4_p_0(
  MR_Word HeadVar__1_67,
  MR_Integer * HeadVar__2_68,
  MR_Word HeadVar__3_69,
  MR_Word * HeadVar__4_70)
{
  mercury__eqvclass__ensure_element_partition_id_4_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), ((MR_Box) (HeadVar__1_67)), HeadVar__2_68, HeadVar__3_69, HeadVar__4_70);
}

static void MR_CALL 
check_hlds__simplify__common____Compare____structures_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structures_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____structure_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structure_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____struct_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____struct_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____seen_calls_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____seen_calls_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____cons_id_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____cons_id_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__common____Compare____common_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
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
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_2[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_2[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[6]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__common____Unify____common_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_16_16;
      MR_Word TypeInfo_17_17;
      MR_Word TypeInfo_18_18;
      MR_Word TypeInfo_19_19;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) (&check_hlds__simplify__common_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) (&check_hlds__simplify__common_scalar_common_2[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[6]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_19_19 = (MR_Word) (&check_hlds__simplify__common_scalar_common_2[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____call_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
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
      MR_Word SubResult1_6;

      mercury__term____Compare____context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____call_args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__term____Unify____context_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common__find_representative_4_p_0(
  MR_Word SinceCallVars_5,
  MR_Word VarEqv_6,
  MR_Word Var_7,
  MR_Word * RepnVar_8)
{
  {
    MR_bool succeeded;
    MR_Word EqvVarsSet_9;
    MR_Word EqvVars_10;
    MR_Word RepnVarPrime_11;

    EqvVarsSet_9 = mercury__eqvclass__get_equivalent_elements_2_f_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), VarEqv_6, ((MR_Box) (Var_7)));
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), EqvVarsSet_9, &EqvVars_10);
    succeeded = check_hlds__simplify__common__find_representative_loop_3_p_0(SinceCallVars_5, EqvVars_10, &RepnVarPrime_11);
    if (succeeded)
      *RepnVar_8 = RepnVarPrime_11;
    else
      *RepnVar_8 = Var_7;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common__find_representative_loop_3_p_0(
  MR_Word SinceCallVars_4,
  MR_Word HeadVar__2_2,
  MR_Word * RepnVar_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var_5;
    MR_Word Vars_6;
    MR_Word TypeCtorInfo_8_8;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      Vars_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      TypeCtorInfo_8_8 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      succeeded = parse_tree__set_of_var__contains_2_p_0(TypeCtorInfo_8_8, SinceCallVars_4, Var_5);
      if (succeeded)
      {
        *RepnVar_7 = Var_5;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Vars_6;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__common__common_vars_are_equivalent_3_p_0(
  MR_Word CommonInfo_4,
  MR_Word X_5,
  MR_Word Y_6)
{
  {
    MR_bool succeeded;
    MR_Word EqvVars_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CommonInfo_4, (MR_Integer) 0))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), ((MR_Box) (X_5)), ((MR_Box) (Y_6)));
    if (!(succeeded))
    {
      MR_Integer Id_15;
      MR_Integer Var_17;

      succeeded = mercury__eqvclass__partition_id_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), EqvVars_7, ((MR_Box) (X_5)), &Id_15);
      if (succeeded)
      {
        succeeded = mercury__eqvclass__partition_id_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), EqvVars_7, ((MR_Box) (Y_6)), &Var_17);
        if (succeeded)
          succeeded = (Id_15 == Var_17);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__common__common_optimise_higher_order_call_12_p_0(
  MR_Word Closure_13,
  MR_Word Args_14,
  MR_Word Modes_15,
  MR_Word Det_16,
  MR_Word Purity_17,
  MR_Word GoalInfo_18,
  MR_Word GoalExpr0_19,
  MR_Word * MaybeAssignsGoalExpr_20,
  MR_Word STATE_VARIABLE_Common_0_28,
  MR_Word * STATE_VARIABLE_Common_29,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  {
    MR_bool succeeded = (Purity_17 == (MR_Integer) 0);
    MR_Word InputArgs_25;
    MR_Word OutputArgs_26;
    MR_Word OutputModes_27;
    MR_Word VarTypes_23;
    MR_Word ModuleInfo_24;
    MR_Word SolnCount_38;
    MR_Word Var_37;

    if (succeeded)
    {
      parse_tree__prog_data__determinism_components_3_p_0(Det_16, &Var_37, &SolnCount_38);
      switch (SolnCount_38) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_30, &VarTypes_23);
        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_30, &ModuleInfo_24);
        succeeded = check_hlds__simplify__common__partition_call_args_7_p_0(VarTypes_23, ModuleInfo_24, Modes_15, Args_14, &InputArgs_25, &OutputArgs_26, &OutputModes_27);
      }
    }
    if (succeeded)
    {
      MR_Word Var_33;

      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Closure_13));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (InputArgs_25));
      }
      check_hlds__simplify__common__common_optimise_call_2_11_p_0((MR_Word) ((MR_Unsigned) 0U), Var_33, OutputArgs_26, OutputModes_27, GoalInfo_18, GoalExpr0_19, MaybeAssignsGoalExpr_20, STATE_VARIABLE_Common_0_28, STATE_VARIABLE_Common_29, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
    }
    else
    {
      *MaybeAssignsGoalExpr_20 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
      *STATE_VARIABLE_Common_29 = STATE_VARIABLE_Common_0_28;
    }
  }
}

void MR_CALL 
check_hlds__simplify__common__common_optimise_call_11_p_0(
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word Args_14,
  MR_Word Purity_15,
  MR_Word GoalInfo_16,
  MR_Word GoalExpr0_17,
  MR_Word * MaybeAssignsGoalExpr_18,
  MR_Word STATE_VARIABLE_Common_0_30,
  MR_Word * STATE_VARIABLE_Common_31,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  {
    MR_bool succeeded = (Purity_15 == (MR_Integer) 0);
    MR_Word InputArgs_27;
    MR_Word OutputArgs_28;
    MR_Word OutputModes_29;
    MR_Word Det_21;
    MR_Word VarTypes_22;
    MR_Word ModuleInfo_23;
    MR_Word ProcInfo_25;
    MR_Word ArgModes_26;
    MR_Word SolnCount_39;
    MR_Word Var_38;
    MR_Word Var_24;

    if (succeeded)
    {
      Det_21 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_16);
      parse_tree__prog_data__determinism_components_3_p_0(Det_21, &Var_38, &SolnCount_39);
      switch (SolnCount_39) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_32, &VarTypes_22);
        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_32, &ModuleInfo_23);
        hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_23, PredId_12, ProcId_13, &Var_24, &ProcInfo_25);
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_25, &ArgModes_26);
        succeeded = check_hlds__simplify__common__partition_call_args_7_p_0(VarTypes_22, ModuleInfo_23, ArgModes_26, Args_14, &InputArgs_27, &OutputArgs_28, &OutputModes_29);
      }
    }
    if (succeeded)
    {
      MR_Word Var_34;

      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (PredId_12));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (ProcId_13));
      }
      check_hlds__simplify__common__common_optimise_call_2_11_p_0(Var_34, InputArgs_27, OutputArgs_28, OutputModes_29, GoalInfo_16, GoalExpr0_17, MaybeAssignsGoalExpr_18, STATE_VARIABLE_Common_0_30, STATE_VARIABLE_Common_31, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
    }
    else
    {
      *MaybeAssignsGoalExpr_18 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
      *STATE_VARIABLE_Common_31 = STATE_VARIABLE_Common_0_30;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common__partition_call_args_7_p_0(
  MR_Word VarTypes_1,
  MR_Word ModuleInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.common.partition_call_args\'/7", (MR_String) "length mismatch (1)");
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.common.partition_call_args\'/7", (MR_String) "length mismatch (2)");
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Arg_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
        MR_Word Args_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
        MR_Word InputArgs1_37;
        MR_Word OutputArgs1_38;
        MR_Word OutputModes1_39;
        MR_Word InitialInst_40;
        MR_Word FinalInst_41;
        MR_Word Type_42;

        succeeded = check_hlds__simplify__common__partition_call_args_7_p_0(VarTypes_1, ModuleInfo_2, Var_44, Args_33, &InputArgs1_37, &OutputArgs1_38, &OutputModes1_39);
        if (succeeded)
        {
          check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_2, Var_45, &InitialInst_40, &FinalInst_41);
          hlds__vartypes__lookup_var_type_3_p_0(VarTypes_1, Arg_32, &Type_42);
          succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(InitialInst_40, FinalInst_41, Type_42, ModuleInfo_2);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_32));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InputArgs1_37));
            }
            *HeadVar__6_6 = OutputArgs1_38;
            *HeadVar__7_7 = OutputModes1_39;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_2, FinalInst_41);
            if (succeeded)
            {
              succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(FinalInst_41, FinalInst_41, Type_42, ModuleInfo_2);
              if (succeeded)
              {
                succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_2, InitialInst_40);
                if (succeeded)
                {
                  *HeadVar__5_5 = InputArgs1_37;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__6_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_32));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OutputArgs1_38));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__7_7 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_45));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OutputModes1_39));
                  }
                  succeeded = MR_TRUE;
                }
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
check_hlds__simplify__common__common_optimise_call_2_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    check_hlds__mode_util__mode_get_from_to_insts_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__simplify__common__common_optimise_call_2_11_p_0(
  MR_Word SeenCall_12,
  MR_Word InputArgs_13,
  MR_Word OutputArgs_14,
  MR_Word Modes_15,
  MR_Word GoalInfo_16,
  MR_Word GoalExpr0_17,
  MR_Word * MaybeAssignsGoalExpr_18,
  MR_Word Common0_19,
  MR_Word * Common_20,
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48)
{
  {
    MR_bool succeeded;
    MR_Word Eqv0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Common0_19, (MR_Integer) 0))));
    MR_Word SeenCalls0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Common0_19, (MR_Integer) 4))));
    MR_Word SeenCallsList0_24;
    MR_Box conv0_SeenCallsList0_24;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_1[2]), SeenCalls0_23, ((MR_Box) (SeenCall_12)), &conv0_SeenCallsList0_24);
    if (succeeded)
    {
      SeenCallsList0_24 = ((MR_Word) (conv0_SeenCallsList0_24));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word OutputArgs2_25;
      MR_Word PrevContext_26;

      succeeded = check_hlds__simplify__common__find_previous_call_5_p_0(SeenCallsList0_24, InputArgs_13, Eqv0_22, &OutputArgs2_25, &PrevContext_26);
      if (succeeded)
      {
        MR_Word ModuleInfo_27;
        MR_Word FromToInsts_28;
        MR_Word AssignGoals_29;
        MR_Word AssignsGoalExpr_32;
        MR_Word VarTypes_33;
        MR_Integer Cost_43;
        MR_Word Detism0_44;
        MR_Word Var_49;
        MR_Word STATE_VARIABLE_Info_50_50;
        MR_Word STATE_VARIABLE_Info_83_83;
        MR_Word Var_84;
        MR_Word STATE_VARIABLE_Info_85_85;
        MR_Word STATE_VARIABLE_Info_86_86;
        MR_Word OnlyGoalExpr_30;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word OutputArgTypes1_34;
        MR_Word OutputArgTypes2_35;

        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_47, &ModuleInfo_27);
        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&check_hlds__simplify__common_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (check_hlds__simplify__common__common_optimise_call_2_11_p_0_1));
          MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (ModuleInfo_27));
        }
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0), Var_49, Modes_15, &FromToInsts_28);
        check_hlds__simplify__common__create_output_unifications_9_p_0(GoalInfo_16, OutputArgs_14, OutputArgs2_25, FromToInsts_28, &AssignGoals_29, Common0_19, Common_20, STATE_VARIABLE_Info_0_47, &STATE_VARIABLE_Info_50_50);
        succeeded = (AssignGoals_29 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssignGoals_29, (MR_Integer) 0))));
          Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssignGoals_29, (MR_Integer) 1))));
          succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OnlyGoalExpr_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 0))));
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          AssignsGoalExpr_32 = OnlyGoalExpr_30;
        else
          {
            AssignsGoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), AssignsGoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), AssignsGoalExpr_32, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), AssignsGoalExpr_32, 2) = ((MR_Box) (AssignGoals_29));
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeAssignsGoalExpr_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AssignsGoalExpr_32));
        }
        check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_50_50, &VarTypes_33);
        succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_duplicate_calls_1_p_0(STATE_VARIABLE_Info_50_50);
        if (succeeded)
        {
          hlds__vartypes__lookup_var_types_3_p_0(VarTypes_33, OutputArgs_14, &OutputArgTypes1_34);
          hlds__vartypes__lookup_var_types_3_p_0(VarTypes_33, OutputArgs2_25, &OutputArgTypes2_35);
          succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(OutputArgTypes1_34, OutputArgTypes2_35);
        }
        if (succeeded)
        {
          MR_Word Context_36;
          MR_Word CallPieces_37;
          MR_Word CurPieces_38;
          MR_Word PrevPieces_39;
          MR_Word Msg_40;
          MR_Word PrevMsg_41;
          MR_Word Spec_42;
          MR_Word Var_54;
          MR_Word Var_57;
          MR_Word Var_61;
          MR_Word Var_68;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_80;
          MR_Word Var_81;

          Context_36 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
          CallPieces_37 = check_hlds__det_report__det_report_seen_call_id_2_f_0(ModuleInfo_27, SeenCall_12);
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_1[8])));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (CallPieces_37));
          }
          Var_57 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__common_scalar_common_1[10]));
          CurPieces_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_54, Var_57);
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_1[11])));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (CallPieces_37));
          }
          PrevPieces_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_61, Var_57);
          {
            Msg_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Msg_40, 0) = ((MR_Box) (Context_36));
            MR_hl_field(MR_mktag(0), Msg_40, 1) = ((MR_Box) (CurPieces_38));
          }
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (PrevContext_26));
          }
          {
            Var_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (PrevPieces_39));
          }
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
            MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            PrevMsg_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), PrevMsg_41, 0) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(2), PrevMsg_41, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(2), PrevMsg_41, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(2), PrevMsg_41, 3) = ((MR_Box) (Var_71));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (PrevMsg_41));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Msg_40));
            MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_81));
          }
          {
            Spec_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Spec_42, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.common.common_optimise_call_2\'/11"));
            MR_hl_field(MR_mktag(2), Spec_42, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 27) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(2), Spec_42, 2) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(2), Spec_42, 3) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__common_scalar_common_4[0])));
            MR_hl_field(MR_mktag(2), Spec_42, 4) = ((MR_Box) (Var_80));
          }
          check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_42, STATE_VARIABLE_Info_50_50, &STATE_VARIABLE_Info_83_83);
        }
        else
          STATE_VARIABLE_Info_83_83 = STATE_VARIABLE_Info_50_50;
        {
          Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (GoalExpr0_17));
          MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (GoalInfo_16));
        }
        transform_hlds__pd_cost__goal_cost_2_p_0(Var_84, &Cost_43);
        check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(Cost_43, STATE_VARIABLE_Info_83_83, &STATE_VARIABLE_Info_85_85);
        check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_85_85, &STATE_VARIABLE_Info_86_86);
        Detism0_44 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_16);
        switch (Detism0_44) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 1:
            check_hlds__simplify__simplify_info__simplify_info_set_rerun_det_2_p_0(STATE_VARIABLE_Info_86_86, STATE_VARIABLE_Info_48);
            break;
          case (MR_Integer) 0:
            *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_86_86;
            break;
        }
      }
      else
      {
        MR_Word ThisCall_45;
        MR_Word SeenCalls_46;
        MR_Word Var_88;
        MR_Word Context_91;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word Var_106;

        Context_91 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
        {
          ThisCall_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ThisCall_45, 0) = ((MR_Box) (Context_91));
          MR_hl_field(MR_mktag(0), ThisCall_45, 1) = ((MR_Box) (InputArgs_13));
          MR_hl_field(MR_mktag(0), ThisCall_45, 2) = ((MR_Box) (OutputArgs_14));
        }
        {
          Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (ThisCall_45));
          MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (SeenCallsList0_24));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_1[2]), ((MR_Box) (SeenCall_12)), ((MR_Box) (Var_88)), SeenCalls0_23, &SeenCalls_46);
        Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Common0_19, (MR_Integer) 0))));
        Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Common0_19, (MR_Integer) 1))));
        Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Common0_19, (MR_Integer) 2))));
        Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Common0_19, (MR_Integer) 3))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          *Common_20 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_103));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_104));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_105));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_106));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (SeenCalls_46));
        }
        *MaybeAssignsGoalExpr_18 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
      }
    }
    else
    {
      MR_Word Var_89;
      MR_Word Context_92;
      MR_Word ThisCall_93;
      MR_Word SeenCalls_94;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_111;

      Context_92 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
      {
        ThisCall_93 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ThisCall_93, 0) = ((MR_Box) (Context_92));
        MR_hl_field(MR_mktag(0), ThisCall_93, 1) = ((MR_Box) (InputArgs_13));
        MR_hl_field(MR_mktag(0), ThisCall_93, 2) = ((MR_Box) (OutputArgs_14));
      }
      {
        Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (ThisCall_93));
        MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_1[2]), ((MR_Box) (SeenCall_12)), ((MR_Box) (Var_89)), SeenCalls0_23, &SeenCalls_94);
      Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Common0_19, (MR_Integer) 0))));
      Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Common0_19, (MR_Integer) 1))));
      Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Common0_19, (MR_Integer) 2))));
      Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Common0_19, (MR_Integer) 3))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *Common_20 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_108));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_109));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_110));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_111));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (SeenCalls_94));
      }
      *MaybeAssignsGoalExpr_18 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common__find_previous_call_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InputArgs_8,
  MR_Word Eqv_9,
  MR_Word * OutputArgs_10,
  MR_Word * PrevContext_11)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word SeenCall_6;
    MR_Word SeenCalls_7;
    MR_Word InputArgs1_12;
    MR_Word OutputArgs1_13;

    if (succeeded)
    {
      SeenCall_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      SeenCalls_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      *PrevContext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SeenCall_6, (MR_Integer) 0))));
      InputArgs1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SeenCall_6, (MR_Integer) 1))));
      OutputArgs1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SeenCall_6, (MR_Integer) 2))));
      succeeded = check_hlds__simplify__common__common_var_lists_are_equiv_3_p_0(Eqv_9, InputArgs_8, InputArgs1_12);
      if (succeeded)
      {
        *OutputArgs_10 = OutputArgs1_13;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Var_14;

        succeeded = check_hlds__simplify__common__find_previous_call_5_p_0(SeenCalls_7, InputArgs_8, Eqv_9, OutputArgs_10, &Var_14);
        if (succeeded)
          succeeded = mercury__term____Unify____context_0_0(*PrevContext_11, Var_14);
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common__common_var_lists_are_equiv_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
    else
    {
      MR_Word X_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Xs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Y_8;
      MR_Word Ys_9;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Y_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        Ys_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), ((MR_Box) (X_6)), ((MR_Box) (Y_8)));
        if (!(succeeded))
        {
          MR_Integer Id_13;
          MR_Integer Var_15;

          succeeded = mercury__eqvclass__partition_id_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (X_6)), &Id_13);
          if (succeeded)
          {
            succeeded = mercury__eqvclass__partition_id_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Y_8)), &Var_15);
            if (succeeded)
              succeeded = (Id_13 == Var_15);
          }
        }
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Xs_7;
          next_value_of_HeadVar__3_3 = Ys_9;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
check_hlds__simplify__common__common_optimise_unification_10_p_0(
  MR_Word Unification0_11,
  MR_Word UnifyMode_12,
  MR_Word STATE_VARIABLE_GoalExpr_0_46,
  MR_Word * STATE_VARIABLE_GoalExpr_47,
  MR_Word STATE_VARIABLE_GoalInfo_0_48,
  MR_Word * STATE_VARIABLE_GoalInfo_49,
  MR_Word STATE_VARIABLE_Common_0_50,
  MR_Word * STATE_VARIABLE_Common_51,
  MR_Word STATE_VARIABLE_Info_0_52,
  MR_Word * STATE_VARIABLE_Info_53)
{
  {
    MR_bool succeeded;
    MR_Word NonLocals_43;
    MR_Word SinceCallVars0_44;
    MR_Word SinceCallVars_45;
    MR_Word STATE_VARIABLE_Common_61_61;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_76;

    switch (MR_tag((MR_Word) Unification0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_11, (MR_Integer) 0))));
          MR_Word ConsId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_11, (MR_Integer) 1))));
          MR_Word ArgVars_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_11, (MR_Integer) 2))));
          MR_Word How_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_11, (MR_Integer) 4))));
          MR_Word SubInfo_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_11, (MR_Integer) 6))));
          MR_Word LVarFinalInst_28;
          MR_Word ModuleInfo_26;

          if ((SubInfo_23 == (MR_Word) ((MR_Unsigned) 0U)))
            succeeded = MR_TRUE;
          else
          {
            MR_Word MaybeTakeAddr_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_23, (MR_Integer) 0))));

            succeeded = (MaybeTakeAddr_24 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_52, &ModuleInfo_26);
            LVarFinalInst_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_12, (MR_Integer) 1))));
            succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_26, LVarFinalInst_28);
            if (succeeded)
              succeeded = (How_21 == (MR_Word) ((MR_Unsigned) 4U));
          }
          if (succeeded)
            check_hlds__simplify__common__common_optimise_construct_12_p_0(Var_17, ConsId_18, ArgVars_19, LVarFinalInst_28, STATE_VARIABLE_GoalExpr_0_46, STATE_VARIABLE_GoalExpr_47, STATE_VARIABLE_GoalInfo_0_48, STATE_VARIABLE_GoalInfo_49, STATE_VARIABLE_Common_0_50, &STATE_VARIABLE_Common_61_61, STATE_VARIABLE_Info_0_52, STATE_VARIABLE_Info_53);
          else
          {
            *STATE_VARIABLE_Info_53 = STATE_VARIABLE_Info_0_52;
            STATE_VARIABLE_Common_61_61 = STATE_VARIABLE_Common_0_50;
            *STATE_VARIABLE_GoalInfo_49 = STATE_VARIABLE_GoalInfo_0_48;
            *STATE_VARIABLE_GoalExpr_47 = STATE_VARIABLE_GoalExpr_0_46;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgModes_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_11, (MR_Integer) 3))));
          MR_Word CanFail_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unification0_11, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
          MR_Word LVarInitInst_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_12, (MR_Integer) 0))));
          MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_11, (MR_Integer) 0))));
          MR_Word ConsId_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_11, (MR_Integer) 1))));
          MR_Word ArgVars_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_11, (MR_Integer) 2))));
          MR_Word ModuleInfo_67;

          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_52, &ModuleInfo_67);
          succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_67, LVarInitInst_34);
          if (succeeded)
            check_hlds__simplify__common__common_optimise_deconstruct_13_p_0(Var_64, ConsId_65, ArgVars_66, ArgModes_31, CanFail_32, STATE_VARIABLE_GoalExpr_0_46, STATE_VARIABLE_GoalExpr_47, STATE_VARIABLE_GoalInfo_0_48, STATE_VARIABLE_GoalInfo_49, STATE_VARIABLE_Common_0_50, &STATE_VARIABLE_Common_61_61, STATE_VARIABLE_Info_0_52, STATE_VARIABLE_Info_53);
          else
          {
            *STATE_VARIABLE_Info_53 = STATE_VARIABLE_Info_0_52;
            STATE_VARIABLE_Common_61_61 = STATE_VARIABLE_Common_0_50;
            *STATE_VARIABLE_GoalInfo_49 = STATE_VARIABLE_GoalInfo_0_48;
            *STATE_VARIABLE_GoalExpr_47 = STATE_VARIABLE_GoalExpr_0_46;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var1_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification0_11, (MR_Integer) 0))));
          MR_Word Var2_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification0_11, (MR_Integer) 1))));

          check_hlds__simplify__common__record_equivalence_4_p_0(Var1_38, Var2_39, STATE_VARIABLE_Common_0_50, &STATE_VARIABLE_Common_61_61);
          *STATE_VARIABLE_GoalExpr_47 = STATE_VARIABLE_GoalExpr_0_46;
          *STATE_VARIABLE_GoalInfo_49 = STATE_VARIABLE_GoalInfo_0_48;
          *STATE_VARIABLE_Info_53 = STATE_VARIABLE_Info_0_52;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification0_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var1_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification0_11, (MR_Integer) 1))));
              MR_Word Var2_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification0_11, (MR_Integer) 2))));

              check_hlds__simplify__common__record_equivalence_4_p_0(Var1_78, Var2_79, STATE_VARIABLE_Common_0_50, &STATE_VARIABLE_Common_61_61);
              *STATE_VARIABLE_GoalExpr_47 = STATE_VARIABLE_GoalExpr_0_46;
              *STATE_VARIABLE_GoalInfo_49 = STATE_VARIABLE_GoalInfo_0_48;
              *STATE_VARIABLE_Info_53 = STATE_VARIABLE_Info_0_52;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_GoalExpr_47 = STATE_VARIABLE_GoalExpr_0_46;
              *STATE_VARIABLE_GoalInfo_49 = STATE_VARIABLE_GoalInfo_0_48;
              STATE_VARIABLE_Common_61_61 = STATE_VARIABLE_Common_0_50;
              *STATE_VARIABLE_Info_53 = STATE_VARIABLE_Info_0_52;
            }
            break;
        }
        break;
    }
    NonLocals_43 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(*STATE_VARIABLE_GoalInfo_49);
    SinceCallVars0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_61_61, (MR_Integer) 3))));
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_43, SinceCallVars0_44, &SinceCallVars_45);
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_61_61, (MR_Integer) 0))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_61_61, (MR_Integer) 1))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_61_61, (MR_Integer) 2))));
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_61_61, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Common_51 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (SinceCallVars_45));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_76));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__common__record_equivalence_4_p_0(
  MR_Word VarA_5,
  MR_Word VarB_6,
  MR_Word STATE_VARIABLE_Common_0_10,
  MR_Word * STATE_VARIABLE_Common_11)
{
  {
    MR_Word VarEqv0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_10, (MR_Integer) 0))));
    MR_Word VarEqv_9;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;

    mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), ((MR_Box) (VarA_5)), ((MR_Box) (VarB_6)), VarEqv0_8, &VarEqv_9);
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_10, (MR_Integer) 1))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_10, (MR_Integer) 2))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_10, (MR_Integer) 3))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_10, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Common_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarEqv_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
    }
  }
}

static MR_Box MR_CALL 
check_hlds__simplify__common__common_optimise_deconstruct_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = check_hlds__mode_util__unify_modes_to_rhs_from_to_insts_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__simplify__common__common_optimise_deconstruct_13_p_0(
  MR_Word Var_14,
  MR_Word ConsId_15,
  MR_Word ArgVars_16,
  MR_Word ArgModes_17,
  MR_Word CanFail_18,
  MR_Word GoalExpr0_19,
  MR_Word * GoalExpr_20,
  MR_Word GoalInfo0_21,
  MR_Word * GoalInfo_22,
  MR_Word STATE_VARIABLE_Common_0_40,
  MR_Word * STATE_VARIABLE_Common_41,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_25;
    MR_Word VarEqv0_26;
    MR_Integer VarId_27;
    MR_Word VarEqv1_28;
    MR_Word SinceCallStructMap0_29;
    MR_Word VarTypes_81;
    MR_Word Type_82;
    MR_Word OldStruct_32;
    MR_Word TypeCtorInfo_70_70;
    MR_Word TypeInfo_71_71;
    MR_Word TypeCtorInfo_72_72;
    MR_Word TypeInfo_73_73;
    MR_Word ConsIdMap0_30;
    MR_Word Structs_31;
    MR_Word Var_45;
    MR_Box conv0_ConsIdMap0_30;
    MR_Box conv1_Structs_31;

    check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_42, &VarTypes_81);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_81, Var_14, &Type_82);
    parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_82, &TypeCtor_25);
    VarEqv0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_40, (MR_Integer) 0))));
    mercury__eqvclass__ensure_element_partition_id_4_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), ((MR_Box) (Var_14)), &VarId_27, VarEqv0_26, &VarEqv1_28);
    SinceCallStructMap0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_40, (MR_Integer) 2))));
    *GoalInfo_22 = GoalInfo0_21;
    succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(*GoalInfo_22, (MR_Integer) 3);
    succeeded = !(succeeded);
    if (succeeded)
    {
      Var_45 = (MR_Integer) 4;
      succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(*GoalInfo_22, Var_45);
      succeeded = !(succeeded);
      if (succeeded)
      {
        TypeCtorInfo_70_70 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
        TypeInfo_71_71 = (MR_Word) (&check_hlds__simplify__common_scalar_common_2[0]);
        succeeded = mercury__map__search_3_p_0(TypeCtorInfo_70_70, TypeInfo_71_71, SinceCallStructMap0_29, ((MR_Box) (TypeCtor_25)), &conv0_ConsIdMap0_30);
        if (succeeded)
        {
          ConsIdMap0_30 = ((MR_Word) (conv0_ConsIdMap0_30));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          TypeCtorInfo_72_72 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0);
          TypeInfo_73_73 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[1]);
          succeeded = mercury__map__search_3_p_0(TypeCtorInfo_72_72, TypeInfo_73_73, ConsIdMap0_30, ((MR_Box) (ConsId_15)), &conv1_Structs_31);
          if (succeeded)
          {
            Structs_31 = ((MR_Word) (conv1_Structs_31));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            succeeded = check_hlds__simplify__common__find_matching_cell_deconstruct_4_p_0(Structs_31, VarEqv1_28, VarId_27, &OldStruct_32);
        }
      }
    }
    if (succeeded)
    {
      MR_Word OldArgVars_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldStruct_32, (MR_Integer) 1))));
      MR_Word VarEqv_35;
      MR_Word RHSFromToInsts_36;
      MR_Word Goals_37;
      MR_Integer Cost_38;
      MR_Word STATE_VARIABLE_Common_46_46;
      MR_Word STATE_VARIABLE_Info_49_49;
      MR_Word Var_51;
      MR_Word STATE_VARIABLE_Info_52_52;
      MR_Word STATE_VARIABLE_Info_53_53;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;

      mercury__eqvclass__ensure_corresponding_equivalences_4_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), ArgVars_16, OldArgVars_34, VarEqv1_28, &VarEqv_35);
      Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_40, (MR_Integer) 1))));
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_40, (MR_Integer) 2))));
      Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_40, (MR_Integer) 3))));
      Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_40, (MR_Integer) 4))));
      {
        STATE_VARIABLE_Common_46_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_46_46, 0) = ((MR_Box) (VarEqv_35));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_46_46, 1) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_46_46, 2) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_46_46, 3) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_46_46, 4) = ((MR_Box) (Var_68));
      }
      RHSFromToInsts_36 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_2[4]), ArgModes_17);
      check_hlds__simplify__common__create_output_unifications_9_p_0(GoalInfo0_21, ArgVars_16, OldArgVars_34, RHSFromToInsts_36, &Goals_37, STATE_VARIABLE_Common_46_46, STATE_VARIABLE_Common_41, STATE_VARIABLE_Info_0_42, &STATE_VARIABLE_Info_49_49);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_20 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_37));
      }
      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (GoalExpr0_19));
        MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (GoalInfo0_21));
      }
      transform_hlds__pd_cost__goal_cost_2_p_0(Var_51, &Cost_38);
      check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(Cost_38, STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_52_52);
      check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_52_52, &STATE_VARIABLE_Info_53_53);
      switch (CanFail_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          check_hlds__simplify__simplify_info__simplify_info_set_rerun_det_2_p_0(STATE_VARIABLE_Info_53_53, STATE_VARIABLE_Info_43);
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_53_53;
          break;
      }
    }
    else
    {
      MR_Word Struct_39;

      *GoalExpr_20 = GoalExpr0_19;
      {
        Struct_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Struct_39, 0) = ((MR_Box) (Var_14));
        MR_hl_field(MR_mktag(0), Struct_39, 1) = ((MR_Box) (ArgVars_16));
      }
      check_hlds__simplify__common__record_cell_in_maps_6_p_0(TypeCtor_25, ConsId_15, Struct_39, VarEqv1_28, STATE_VARIABLE_Common_0_40, STATE_VARIABLE_Common_41);
      *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_0_42;
    }
  }
}

static void MR_CALL 
check_hlds__simplify__common__create_output_unifications_9_p_0(
  MR_Word OldGoalInfo_10,
  MR_Word OutputArgs_11,
  MR_Word OldOutputArgs_12,
  MR_Word FromToInsts_13,
  MR_Word * AssignGoals_14,
  MR_Word STATE_VARIABLE_Common_0_27,
  MR_Word * STATE_VARIABLE_Common_28,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (OutputArgs_11 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word HeadOutputArg_17;
    MR_Word TailOutputArgs_18;
    MR_Word HeadOldOutputArg_19;
    MR_Word TailOldOutputArgs_20;
    MR_Word HeadFromToInsts_21;
    MR_Word TailFromToInsts_22;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      HeadOutputArg_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OutputArgs_11, (MR_Integer) 0))));
      TailOutputArgs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OutputArgs_11, (MR_Integer) 1))));
      succeeded = (OldOutputArgs_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadOldOutputArg_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldOutputArgs_12, (MR_Integer) 0))));
        TailOldOutputArgs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldOutputArgs_12, (MR_Integer) 1))));
        succeeded = (FromToInsts_13 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadFromToInsts_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FromToInsts_13, (MR_Integer) 0))));
          TailFromToInsts_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FromToInsts_13, (MR_Integer) 1))));
        }
      }
    }
    if (succeeded)
    {
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), ((MR_Box) (HeadOutputArg_17)), ((MR_Box) (HeadOldOutputArg_19)));
      if (succeeded)
      {
        MR_Word next_value_of_OutputArgs_11 = TailOutputArgs_18;
        MR_Word next_value_of_OldOutputArgs_12 = TailOldOutputArgs_20;
        MR_Word next_value_of_FromToInsts_13 = TailFromToInsts_22;

        // direct tailcall eliminated
        ;
        OutputArgs_11 = next_value_of_OutputArgs_11;
        OldOutputArgs_12 = next_value_of_OldOutputArgs_12;
        FromToInsts_13 = next_value_of_FromToInsts_13;
        continue;
      }
      else
      {
        MR_Word HeadAssignGoalExpr_23;
        MR_Word HeadAssignGoalInfo_24;
        MR_Word HeadAssignGoal_25;
        MR_Word TailAssignGoals_26;
        MR_Word STATE_VARIABLE_Common_33_33;
        MR_Word STATE_VARIABLE_Info_34_34;

        check_hlds__simplify__common__generate_assign_10_p_0(HeadOutputArg_17, HeadOldOutputArg_19, HeadFromToInsts_21, OldGoalInfo_10, &HeadAssignGoalExpr_23, &HeadAssignGoalInfo_24, STATE_VARIABLE_Common_0_27, &STATE_VARIABLE_Common_33_33, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_34_34);
        {
          HeadAssignGoal_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadAssignGoal_25, 0) = ((MR_Box) (HeadAssignGoalExpr_23));
          MR_hl_field(MR_mktag(0), HeadAssignGoal_25, 1) = ((MR_Box) (HeadAssignGoalInfo_24));
        }
        check_hlds__simplify__common__create_output_unifications_9_p_0(OldGoalInfo_10, TailOutputArgs_18, TailOldOutputArgs_20, TailFromToInsts_22, &TailAssignGoals_26, STATE_VARIABLE_Common_33_33, STATE_VARIABLE_Common_28, STATE_VARIABLE_Info_34_34, STATE_VARIABLE_Info_30);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *AssignGoals_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadAssignGoal_25));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailAssignGoals_26));
        }
      }
    }
    else
    {
      succeeded = (OutputArgs_11 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (OldOutputArgs_12 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (FromToInsts_13 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
        *AssignGoals_14 = (MR_Word) ((MR_Unsigned) 0U);
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.common.create_output_unifications\'/9", (MR_String) "mode mismatch");
          return;
        }
      *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
      *STATE_VARIABLE_Common_28 = STATE_VARIABLE_Common_0_27;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_deconstruct_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarEqv_7,
  MR_Integer VarId_8,
  MR_Word * Match_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Struct_5;
    MR_Word Structs_6;
    MR_Word Var_10;
    MR_Word TypeInfo_8_16;
    MR_Integer VarId_15;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Struct_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Structs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Struct_5, (MR_Integer) 0))));
      TypeInfo_8_16 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]);
      succeeded = mercury__eqvclass__partition_id_3_p_0(TypeInfo_8_16, VarEqv_7, ((MR_Box) (Var_10)), &VarId_15);
      if (succeeded)
        succeeded = (VarId_8 == VarId_15);
      if (succeeded)
      {
        *Match_9 = Struct_5;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Structs_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_HeadVar__2_68;
    MR_Word conv0_HeadVar__4_70;

    check_hlds__simplify__common__IntroducedFrom__pred__common_optimise_construct__441__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_68, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_70);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_68));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_70));
  }
}

static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0(
  MR_Word Var_13,
  MR_Word ConsId_14,
  MR_Word ArgVars_15,
  MR_Word LVarFinalInst_16,
  MR_Word GoalExpr0_17,
  MR_Word * GoalExpr_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalInfo_20,
  MR_Word STATE_VARIABLE_Common_0_40,
  MR_Word * STATE_VARIABLE_Common_41,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_23;
    MR_Word VarEqv0_24;
    MR_Word ArgVarIds_25;
    MR_Word VarEqv1_26;
    MR_Word AllStructMap0_27;
    MR_Word VarTypes_82;
    MR_Word Type_83;
    MR_Box conv2_VarEqv1_26;
    MR_Word OldStruct_30;
    MR_Word TypeCtorInfo_77_77;
    MR_Word TypeInfo_78_78;
    MR_Word ConsIdMap0_28;
    MR_Word Structs_29;
    MR_Word InstMapDelta_31;
    MR_Box conv3_ConsIdMap0_28;
    MR_Box conv4_Structs_29;
    MR_Word Var_32;

    check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_42, &VarTypes_82);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_82, Var_13, &Type_83);
    parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_83, &TypeCtor_23);
    VarEqv0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_40, (MR_Integer) 0))));
    mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), (MR_Word) (&mercury__eqvclass__eqvclass__type_ctor_info_partition_id_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_1[3]), (MR_Word) (&check_hlds__simplify__common_scalar_common_2[3]), ArgVars_15, &ArgVarIds_25, ((MR_Box) (VarEqv0_24)), &conv2_VarEqv1_26);
    VarEqv1_26 = ((MR_Word) (conv2_VarEqv1_26));
    AllStructMap0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_40, (MR_Integer) 1))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_2[0]), AllStructMap0_27, ((MR_Box) (TypeCtor_23)), &conv3_ConsIdMap0_28);
    if (succeeded)
    {
      ConsIdMap0_28 = ((MR_Word) (conv3_ConsIdMap0_28));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeCtorInfo_77_77 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0);
      TypeInfo_78_78 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[1]);
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_77_77, TypeInfo_78_78, ConsIdMap0_28, ((MR_Box) (ConsId_14)), &conv4_Structs_29);
      if (succeeded)
      {
        Structs_29 = ((MR_Word) (conv4_Structs_29));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = check_hlds__simplify__common__find_matching_cell_construct_4_p_0(Structs_29, VarEqv1_26, ArgVarIds_25, &OldStruct_30);
        if (succeeded)
        {
          InstMapDelta_31 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_19);
          succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(InstMapDelta_31, Var_13, &Var_32);
        }
      }
    }
    if (succeeded)
    {
      MR_Word OldVar_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldStruct_30, (MR_Integer) 0))));
      MR_Word VarEqv_35;
      MR_Word STATE_VARIABLE_Common_45_45;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;

      mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), ((MR_Box) (Var_13)), ((MR_Box) (OldVar_33)), VarEqv1_26, &VarEqv_35);
      Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_40, (MR_Integer) 1))));
      Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_40, (MR_Integer) 2))));
      Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_40, (MR_Integer) 3))));
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_40, (MR_Integer) 4))));
      {
        STATE_VARIABLE_Common_45_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_45_45, 0) = ((MR_Box) (VarEqv_35));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_45_45, 1) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_45_45, 2) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_45_45, 3) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_45_45, 4) = ((MR_Box) (Var_66));
      }
      if ((ArgVars_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *GoalExpr_18 = GoalExpr0_17;
        *GoalInfo_20 = GoalInfo0_19;
        *STATE_VARIABLE_Common_41 = STATE_VARIABLE_Common_45_45;
        *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_0_42;
      }
      else
      {
        MR_Word VarFromToInsts_38;
        MR_Integer Cost_39;
        MR_Word STATE_VARIABLE_Info_48_48;
        MR_Word STATE_VARIABLE_Info_49_49;
        MR_Word Var_50;

        {
          VarFromToInsts_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), VarFromToInsts_38, 0) = ((MR_Box) (LVarFinalInst_16));
          MR_hl_field(MR_mktag(0), VarFromToInsts_38, 1) = ((MR_Box) (LVarFinalInst_16));
        }
        check_hlds__simplify__common__generate_assign_10_p_0(Var_13, OldVar_33, VarFromToInsts_38, GoalInfo0_19, GoalExpr_18, GoalInfo_20, STATE_VARIABLE_Common_45_45, STATE_VARIABLE_Common_41, STATE_VARIABLE_Info_0_42, &STATE_VARIABLE_Info_48_48);
        check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_48_48, &STATE_VARIABLE_Info_49_49);
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (GoalExpr0_17));
          MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (GoalInfo0_19));
        }
        transform_hlds__pd_cost__goal_cost_2_p_0(Var_50, &Cost_39);
        check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(Cost_39, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_43);
      }
    }
    else
      check_hlds__simplify__common__common_standardize_and_record_construct_13_p_0(Var_13, TypeCtor_23, ConsId_14, ArgVars_15, VarEqv1_26, GoalExpr0_17, GoalExpr_18, GoalInfo0_19, GoalInfo_20, STATE_VARIABLE_Common_0_40, STATE_VARIABLE_Common_41, STATE_VARIABLE_Info_0_42, STATE_VARIABLE_Info_43);
  }
}

static void MR_CALL 
check_hlds__simplify__common__generate_assign_10_p_0(
  MR_Word ToVar_11,
  MR_Word FromVar_12,
  MR_Word ToVarMode_13,
  MR_Word OldGoalInfo_14,
  MR_Word * GoalExpr_15,
  MR_Word * GoalInfo_16,
  MR_Word STATE_VARIABLE_Common_0_31,
  MR_Word * STATE_VARIABLE_Common_32,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  {
    MR_bool succeeded;
    MR_Word VarTypes_19;
    MR_Word ToVarType_20;
    MR_Word FromVarType_21;
    MR_Word NonLocals_22;
    MR_Word ToVarInit_23;
    MR_Word ToVarFinal_24;
    MR_Word InstMapDelta_28;
    MR_Word GoalInfo0_29;
    MR_Word Context_30;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word VarEqv0_70;
    MR_Word VarEqv_71;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;

    check_hlds__simplify__common__apply_induced_substitutions_4_p_0(ToVar_11, FromVar_12, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
    check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(*STATE_VARIABLE_Info_34, &VarTypes_19);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_19, ToVar_11, &ToVarType_20);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_19, FromVar_12, &FromVarType_21);
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (FromVar_12));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (ToVar_11));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_36, &NonLocals_22);
    ToVarInit_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ToVarMode_13, (MR_Integer) 0))));
    ToVarFinal_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ToVarMode_13, (MR_Integer) 1))));
    succeeded = check_hlds__simplify__common__types_match_exactly_2_p_0(ToVarType_20, FromVarType_21);
    if (succeeded)
    {
      MR_Word UnifyMode_25;
      MR_Word Var_43;
      MR_Word Var_44;

      {
        UnifyMode_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), UnifyMode_25, 0) = ((MR_Box) (ToVarInit_23));
        MR_hl_field(MR_mktag(0), UnifyMode_25, 1) = ((MR_Box) (ToVarFinal_24));
        MR_hl_field(MR_mktag(0), UnifyMode_25, 2) = ((MR_Box) (ToVarFinal_24));
        MR_hl_field(MR_mktag(0), UnifyMode_25, 3) = ((MR_Box) (ToVarFinal_24));
      }
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (FromVar_12));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_44, 0) = ((MR_Box) (ToVar_11));
        MR_hl_field(MR_mktag(2), Var_44, 1) = ((MR_Box) (FromVar_12));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_15 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ToVar_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (UnifyMode_25));
        MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (&check_hlds__simplify__common_scalar_common_1[7]));
      }
    }
    else
    {
      MR_Word Modes_27;
      MR_Word Var_45;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_53;
      MR_Word Var_54;

      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (ToVarFinal_24));
        MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (ToVarFinal_24));
      }
      {
        Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (ToVarFinal_24));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Modes_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Modes_27, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(1), Modes_27, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (ToVar_11));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (FromVar_12));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_15 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_4[0])));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Modes_27));
        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (ToVar_11));
      MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (ToVarFinal_24));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    InstMapDelta_28 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_58);
    hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_22, InstMapDelta_28, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo0_29);
    Context_30 = hlds__hlds_goal__goal_info_get_context_1_f_0(OldGoalInfo_14);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_30, GoalInfo0_29, GoalInfo_16);
    VarEqv0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_31, (MR_Integer) 0))));
    mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), ((MR_Box) (ToVar_11)), ((MR_Box) (FromVar_12)), VarEqv0_70, &VarEqv_71);
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_31, (MR_Integer) 1))));
    Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_31, (MR_Integer) 2))));
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_31, (MR_Integer) 3))));
    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_31, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Common_32 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarEqv_71));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_81));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__common__apply_induced_substitutions_4_p_0(
  MR_Word ToVar_5,
  MR_Word FromVar_6,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_bool succeeded;
    MR_Word RttiVarMaps0_8;
    MR_Word FromVarRttiInfo_9;
    MR_Word ToVarRttiInfo_10;
    MR_Word TSubst_11;

    check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_17, &RttiVarMaps0_8);
    hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(RttiVarMaps0_8, FromVar_6, &FromVarRttiInfo_9);
    hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(RttiVarMaps0_8, ToVar_5, &ToVarRttiInfo_10);
    switch (MR_tag((MR_Word) ToVarRttiInfo_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeInfo_14_39;
          MR_Word TypeCtorInfo_15_40;

          succeeded = (FromVarRttiInfo_9 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TypeInfo_14_39 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[4]);
            TypeCtorInfo_15_40 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
            mercury__map__init_1_p_0(TypeInfo_14_39, TypeCtorInfo_15_40, &TSubst_11);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word FromVarTypeInfoType_32;
          MR_Word ToVarTypeInfoType_33;

          succeeded = ((MR_tag((MR_Word) FromVarRttiInfo_9)) == (MR_Integer) 1);
          if (succeeded)
          {
            FromVarTypeInfoType_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FromVarRttiInfo_9, (MR_Integer) 0))));
            ToVarTypeInfoType_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ToVarRttiInfo_10, (MR_Integer) 0))));
            succeeded = parse_tree__prog_type__type_subsumes_3_p_0(ToVarTypeInfoType_33, FromVarTypeInfoType_32, &TSubst_11);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FromVarConstraint_34;
          MR_Word ToVarConstraint_35;
          MR_Word Name_36;
          MR_Word FromArgs_37;
          MR_Word ToArgs_38;
          MR_Word Var_41;

          succeeded = ((MR_tag((MR_Word) FromVarRttiInfo_9)) == (MR_Integer) 2);
          if (succeeded)
          {
            FromVarConstraint_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), FromVarRttiInfo_9, (MR_Integer) 0))));
            ToVarConstraint_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ToVarRttiInfo_10, (MR_Integer) 0))));
            Name_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FromVarConstraint_34, (MR_Integer) 0))));
            FromArgs_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FromVarConstraint_34, (MR_Integer) 1))));
            Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ToVarConstraint_35, (MR_Integer) 0))));
            ToArgs_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ToVarConstraint_35, (MR_Integer) 1))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_36, Var_41);
            if (succeeded)
              succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(ToArgs_38, FromArgs_37, &TSubst_11);
          }
        }
        break;
    }
    if (succeeded)
    {
      succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TSubst_11);
      if (succeeded)
        *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
      else
        check_hlds__simplify__simplify_info__simplify_info_apply_substitutions_and_duplicate_5_p_0(ToVar_5, FromVar_6, TSubst_11, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
    }
    else
      switch (MR_tag((MR_Word) FromVarRttiInfo_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word RttiVarMaps_12;

            hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(ToVar_5, FromVar_6, RttiVarMaps0_8, &RttiVarMaps_12);
            check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(RttiVarMaps_12, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          switch (MR_tag((MR_Word) ToVarRttiInfo_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word RttiVarMaps_24;

                hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(FromVar_6, ToVar_5, RttiVarMaps0_8, &RttiVarMaps_24);
                check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(RttiVarMaps_24, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.common.apply_induced_substitutions\'/4", (MR_String) "inconsistent info");
                return;
              }
              break;
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeInfo_44_44;
          MR_Word TVar_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word Var_32;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_44_44 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (TVar_3)), ((MR_Box) (Var_32)));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Name_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word As_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word Bs_9;
          MR_Word Var_33;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            Bs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_6, Var_33);
            if (succeeded)
              succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(As_7, Bs_9);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word Var_34;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_11, Var_34);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word As_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word Bs_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Bs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(As_18, Bs_20);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word As_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word H_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word P_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 3);
              MR_Word Bs_17;
              MR_Word Var_35;
              MR_Word Var_36;
              MR_Word Var_37;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                Bs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                Var_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 3);
                succeeded = (PorF_12 == Var_35);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____ho_inst_info_0_0(H_14, Var_36);
                  if (succeeded)
                  {
                    succeeded = (P_15 == Var_37);
                    if (succeeded)
                    {
                      succeeded = MR_TRUE;
                      if (succeeded)
                        succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(As_13, Bs_17);
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_40_40;
              MR_Word TVar_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word As_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word Bs_25;
              MR_Word Var_39;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                Bs_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                TypeInfo_40_40 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_40_40, ((MR_Box) (TVar_22)), ((MR_Box) (Var_39)));
                if (succeeded)
                  succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(As_23, Bs_25);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.common.types_match_exactly\'/2", (MR_String) "kind annotation");
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
    else
    {
      MR_Word Type1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Types1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Type2_5;
      MR_Word Types2_6;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Type2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        Types2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        switch (MR_tag((MR_Word) Type1_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_44_48;
              MR_Word TVar_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type1_3, (MR_Integer) 0))));
              MR_Word Var_36;

              succeeded = ((MR_tag((MR_Word) Type2_5)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type2_5, (MR_Integer) 0))));
                TypeInfo_44_48 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_48, ((MR_Box) (TVar_7)), ((MR_Box) (Var_36)));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Name_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type1_3, (MR_Integer) 0))));
              MR_Word As_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type1_3, (MR_Integer) 1))));
              MR_Word Bs_13;
              MR_Word Var_37;

              succeeded = ((MR_tag((MR_Word) Type2_5)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type2_5, (MR_Integer) 0))));
                Bs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type2_5, (MR_Integer) 1))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_10, Var_37);
                if (succeeded)
                  succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(As_11, Bs_13);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word BuiltinType_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type1_3, (MR_Integer) 0))));
              MR_Word Var_38;

              succeeded = ((MR_tag((MR_Word) Type2_5)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type2_5, (MR_Integer) 0))));
                succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_15, Var_38);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type1_3, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word As_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type1_3, (MR_Integer) 1))));
                  MR_Word Bs_24;

                  succeeded = ((((MR_tag((MR_Word) Type2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type2_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Bs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type2_5, (MR_Integer) 1))));
                    succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(As_22, Bs_24);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PorF_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type1_3, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word As_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type1_3, (MR_Integer) 2))));
                  MR_Word H_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type1_3, (MR_Integer) 3))));
                  MR_Word P_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type1_3, (MR_Integer) 4))) & (MR_Integer) 3);
                  MR_Word Bs_21;
                  MR_Word Var_39;
                  MR_Word Var_40;
                  MR_Word Var_41;

                  succeeded = ((((MR_tag((MR_Word) Type2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type2_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type2_5, (MR_Integer) 1))) & (MR_Integer) 1);
                    Bs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type2_5, (MR_Integer) 2))));
                    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type2_5, (MR_Integer) 3))));
                    Var_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type2_5, (MR_Integer) 4))) & (MR_Integer) 3);
                    succeeded = (PorF_16 == Var_39);
                    if (succeeded)
                    {
                      succeeded = parse_tree__prog_data____Unify____ho_inst_info_0_0(H_18, Var_40);
                      if (succeeded)
                      {
                        succeeded = (P_19 == Var_41);
                        if (succeeded)
                        {
                          succeeded = MR_TRUE;
                          if (succeeded)
                            succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(As_17, Bs_21);
                        }
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word TypeInfo_40_44;
                  MR_Word TVar_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type1_3, (MR_Integer) 1))));
                  MR_Word As_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type1_3, (MR_Integer) 2))));
                  MR_Word Bs_29;
                  MR_Word Var_43;

                  succeeded = ((((MR_tag((MR_Word) Type2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type2_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type2_5, (MR_Integer) 1))));
                    Bs_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type2_5, (MR_Integer) 2))));
                    TypeInfo_40_44 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[4]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_40_44, ((MR_Box) (TVar_26)), ((MR_Box) (Var_43)));
                    if (succeeded)
                      succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(As_27, Bs_29);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.common.types_match_exactly\'/2", (MR_String) "kind annotation");
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
        }
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Types1_4;
          next_value_of_HeadVar__2_2 = Types2_6;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_construct_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarEqv_7,
  MR_Word ArgVarIds_8,
  MR_Word * Match_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Struct_5;
    MR_Word Structs_6;
    MR_Word Vars_11;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Struct_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Structs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Vars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Struct_5, (MR_Integer) 1))));
      succeeded = check_hlds__simplify__common__ids_vars_match_3_p_0(ArgVarIds_8, Vars_11, VarEqv_7);
      if (succeeded)
      {
        *Match_9 = Struct_5;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Structs_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common__ids_vars_match_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
    else
    {
      MR_Word TypeInfo_8_14;
      MR_Integer Id_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ids_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_7;
      MR_Word Vars_8;
      MR_Integer VarId_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        Vars_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        TypeInfo_8_14 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]);
        succeeded = mercury__eqvclass__partition_id_3_p_0(TypeInfo_8_14, HeadVar__3_3, ((MR_Box) (Var_7)), &VarId_13);
        if (succeeded)
        {
          succeeded = (Id_5 == VarId_13);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Ids_6;
            next_value_of_HeadVar__2_2 = Vars_8;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__simplify__common__common_standardize_and_record_construct_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_RepnVar_8;

    check_hlds__simplify__common__find_representative_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_RepnVar_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_RepnVar_8));
  }
}

static void MR_CALL 
check_hlds__simplify__common__common_standardize_and_record_construct_13_p_0(
  MR_Word Var_14,
  MR_Word TypeCtor_15,
  MR_Word ConsId_16,
  MR_Word ArgVars_17,
  MR_Word VarEqv_18,
  MR_Word GoalExpr0_19,
  MR_Word * GoalExpr_20,
  MR_Word GoalInfo0_21,
  MR_Word * GoalInfo_22,
  MR_Word STATE_VARIABLE_Common_0_40,
  MR_Word * STATE_VARIABLE_Common_41,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43)
{
  {
    MR_bool succeeded;
    MR_Word SinceCallVars_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_40, (MR_Integer) 3))));
    MR_Word ArgRepnVars_26;
    MR_Word Struct_39;
    MR_Word Var_44;
    MR_Word STATE_VARIABLE_Common_46_46;

    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&check_hlds__simplify__common_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (check_hlds__simplify__common__common_standardize_and_record_construct_13_p_0_1));
      MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (SinceCallVars_25));
      MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (VarEqv_18));
    }
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), Var_44, ArgVars_17, &ArgRepnVars_26);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[5]), ((MR_Box) (ArgRepnVars_26)), ((MR_Box) (ArgVars_17)));
    if (succeeded)
    {
      *GoalExpr_20 = GoalExpr0_19;
      *GoalInfo_22 = GoalInfo0_21;
      *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_0_42;
      STATE_VARIABLE_Common_46_46 = STATE_VARIABLE_Common_0_40;
    }
    else
    {
      MR_Word UnifyMode_28;
      MR_Word Ctxt_30;
      MR_Word IsExistConstr_31;
      MR_Word ArgModes_32;
      MR_Word How_33;
      MR_Word Uniq_34;
      MR_Word SubInfo_35;
      MR_Word TypeInfo_71_71;
      MR_Word TypeInfo_73_73;
      MR_Word TypeInfo_74_74;
      MR_Word TypeInfo_76_76;
      MR_Word RHS0_27;
      MR_Word Unification0_29;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;

      succeeded = ((MR_tag((MR_Word) GoalExpr0_19)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_19, (MR_Integer) 0))));
        RHS0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_19, (MR_Integer) 1))));
        UnifyMode_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_19, (MR_Integer) 2))));
        Unification0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_19, (MR_Integer) 3))));
        Ctxt_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_19, (MR_Integer) 4))));
        TypeInfo_71_71 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_71_71, ((MR_Box) (Var_14)), ((MR_Box) (Var_64)));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) RHS0_27)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS0_27, (MR_Integer) 0))));
            IsExistConstr_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), RHS0_27, (MR_Integer) 1))) & (MR_Integer) 1);
            Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS0_27, (MR_Integer) 2))));
            succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_16, Var_65);
            if (succeeded)
            {
              TypeInfo_73_73 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_73_73, ((MR_Box) (ArgVars_17)), ((MR_Box) (Var_66)));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Unification0_29)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_29, (MR_Integer) 0))));
                  Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_29, (MR_Integer) 1))));
                  Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_29, (MR_Integer) 2))));
                  ArgModes_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_29, (MR_Integer) 3))));
                  How_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_29, (MR_Integer) 4))));
                  Uniq_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Unification0_29, (MR_Integer) 5))) & (MR_Integer) 1);
                  SubInfo_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_29, (MR_Integer) 6))));
                  TypeInfo_74_74 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_74_74, ((MR_Box) (Var_14)), ((MR_Box) (Var_67)));
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_16, Var_68);
                    if (succeeded)
                    {
                      TypeInfo_76_76 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[5]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_76_76, ((MR_Box) (ArgVars_17)), ((MR_Box) (Var_69)));
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Unification_36;
        MR_Word RHS_37;
        MR_Word NonLocals_38;
        MR_Word Var_45;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_59;

        {
          Unification_36 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Unification_36, 0) = ((MR_Box) (Var_14));
          MR_hl_field(MR_mktag(0), Unification_36, 1) = ((MR_Box) (ConsId_16));
          MR_hl_field(MR_mktag(0), Unification_36, 2) = ((MR_Box) (ArgRepnVars_26));
          MR_hl_field(MR_mktag(0), Unification_36, 3) = ((MR_Box) (ArgModes_32));
          MR_hl_field(MR_mktag(0), Unification_36, 4) = ((MR_Box) (How_33));
          MR_hl_field(MR_mktag(0), Unification_36, 5) = (MR_Box) ((MR_Unsigned) (Uniq_34));
          MR_hl_field(MR_mktag(0), Unification_36, 6) = ((MR_Box) (SubInfo_35));
        }
        {
          RHS_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RHS_37, 0) = ((MR_Box) (ConsId_16));
          MR_hl_field(MR_mktag(1), RHS_37, 1) = (MR_Box) ((MR_Unsigned) (IsExistConstr_31));
          MR_hl_field(MR_mktag(1), RHS_37, 2) = ((MR_Box) (ArgRepnVars_26));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_20 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RHS_37));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (UnifyMode_28));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification_36));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Ctxt_30));
        }
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_14));
          MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (ArgRepnVars_26));
        }
        parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_45, &NonLocals_38);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_38, GoalInfo0_21, GoalInfo_22);
        Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_40, (MR_Integer) 1))));
        Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_40, (MR_Integer) 2))));
        Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_40, (MR_Integer) 3))));
        Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_40, (MR_Integer) 4))));
        {
          STATE_VARIABLE_Common_46_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_46_46, 0) = ((MR_Box) (VarEqv_18));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_46_46, 1) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_46_46, 2) = ((MR_Box) (Var_57));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_46_46, 3) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_46_46, 4) = ((MR_Box) (Var_59));
        }
        check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_0_42, STATE_VARIABLE_Info_43);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.common.common_standardize_and_record_construct\'/13", (MR_String) "GoalExpr0 has unexpected shape");
          return;
        }
    }
    {
      Struct_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Struct_39, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), Struct_39, 1) = ((MR_Box) (ArgRepnVars_26));
    }
    check_hlds__simplify__common__record_cell_in_maps_6_p_0(TypeCtor_15, ConsId_16, Struct_39, VarEqv_18, STATE_VARIABLE_Common_46_46, STATE_VARIABLE_Common_41);
  }
}

static void MR_CALL 
check_hlds__simplify__common__record_cell_in_maps_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word ConsId_8,
  MR_Word Struct_9,
  MR_Word VarEqv_10,
  MR_Word STATE_VARIABLE_Common_0_16,
  MR_Word * STATE_VARIABLE_Common_17)
{
  {
    MR_bool succeeded;
    MR_Word AllStructMap0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_16, (MR_Integer) 1))));
    MR_Word SinceCallStructMap0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_16, (MR_Integer) 2))));
    MR_Word AllStructMap_14;
    MR_Word SinceCallStructMap_15;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word ConsIdMap0_50;
    MR_Box conv0_ConsIdMap0_50;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_2[0]), AllStructMap0_12, ((MR_Box) (TypeCtor_7)), &conv0_ConsIdMap0_50);
    if (succeeded)
    {
      ConsIdMap0_50 = ((MR_Word) (conv0_ConsIdMap0_50));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ConsIdMap_53;
      MR_Word Structs0_51;
      MR_Box conv1_Structs0_51;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_1[1]), ConsIdMap0_50, ((MR_Box) (ConsId_8)), &conv1_Structs0_51);
      if (succeeded)
      {
        Structs0_51 = ((MR_Word) (conv1_Structs0_51));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Structs_52;

        {
          Structs_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Structs_52, 0) = ((MR_Box) (Struct_9));
          MR_hl_field(MR_mktag(1), Structs_52, 1) = ((MR_Box) (Structs0_51));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_1[1]), ((MR_Box) (ConsId_8)), ((MR_Box) (Structs_52)), ConsIdMap0_50, &ConsIdMap_53);
      }
      else
      {
        MR_Word Var_54;

        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Struct_9));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_1[1]), ((MR_Box) (ConsId_8)), ((MR_Box) (Var_54)), ConsIdMap0_50, &ConsIdMap_53);
      }
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_2[0]), ((MR_Box) (TypeCtor_7)), ((MR_Box) (ConsIdMap_53)), AllStructMap0_12, &AllStructMap_14);
    }
    else
    {
      MR_Word Var_57;
      MR_Word ConsIdMap_60;

      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Struct_9));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ConsIdMap_60 = mercury__map__singleton_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_1[1]), ((MR_Box) (ConsId_8)), ((MR_Box) (Var_57)));
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_2[0]), ((MR_Box) (TypeCtor_7)), ((MR_Box) (ConsIdMap_60)), AllStructMap0_12, &AllStructMap_14);
    }
    check_hlds__simplify__common__do_record_cell_in_struct_map_5_p_0(TypeCtor_7, ConsId_8, Struct_9, SinceCallStructMap0_13, &SinceCallStructMap_15);
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_16, (MR_Integer) 3))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_16, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Common_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarEqv_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (AllStructMap_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SinceCallStructMap_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_33));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__common__do_record_cell_in_struct_map_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word ConsId_7,
  MR_Word Struct_8,
  MR_Word STATE_VARIABLE_StructMap_0_14,
  MR_Word * STATE_VARIABLE_StructMap_15)
{
  {
    MR_bool succeeded;
    MR_Word ConsIdMap0_10;
    MR_Box conv0_ConsIdMap0_10;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_2[0]), STATE_VARIABLE_StructMap_0_14, ((MR_Box) (TypeCtor_6)), &conv0_ConsIdMap0_10);
    if (succeeded)
    {
      ConsIdMap0_10 = ((MR_Word) (conv0_ConsIdMap0_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ConsIdMap_13;
      MR_Word Structs0_11;
      MR_Box conv1_Structs0_11;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_1[1]), ConsIdMap0_10, ((MR_Box) (ConsId_7)), &conv1_Structs0_11);
      if (succeeded)
      {
        Structs0_11 = ((MR_Word) (conv1_Structs0_11));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Structs_12;

        {
          Structs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Structs_12, 0) = ((MR_Box) (Struct_8));
          MR_hl_field(MR_mktag(1), Structs_12, 1) = ((MR_Box) (Structs0_11));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_1[1]), ((MR_Box) (ConsId_7)), ((MR_Box) (Structs_12)), ConsIdMap0_10, &ConsIdMap_13);
      }
      else
      {
        MR_Word Var_16;

        {
          Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Struct_8));
          MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_1[1]), ((MR_Box) (ConsId_7)), ((MR_Box) (Var_16)), ConsIdMap0_10, &ConsIdMap_13);
      }
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_2[0]), ((MR_Box) (TypeCtor_6)), ((MR_Box) (ConsIdMap_13)), STATE_VARIABLE_StructMap_0_14, STATE_VARIABLE_StructMap_15);
    }
    else
    {
      MR_Word Var_19;
      MR_Word ConsIdMap_22;

      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Struct_8));
        MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ConsIdMap_22 = mercury__map__singleton_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_1[1]), ((MR_Box) (ConsId_7)), ((MR_Box) (Var_19)));
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_2[0]), ((MR_Box) (TypeCtor_6)), ((MR_Box) (ConsIdMap_22)), STATE_VARIABLE_StructMap_0_14, STATE_VARIABLE_StructMap_15);
    }
  }
}

void MR_CALL 
check_hlds__simplify__common__common_info_stack_flush_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  {
    MR_Word STATE_VARIABLE_Info_6_6;
    MR_Word Var_7;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_19;

    Var_7 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_2[0]));
    Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 0))));
    Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 1))));
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 3))));
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 4))));
    {
      STATE_VARIABLE_Info_6_6 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_6_6, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_6_6, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_6_6, 2) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_6_6, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_6_6, 4) = ((MR_Box) (Var_14));
    }
    Var_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_6_6, (MR_Integer) 0))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_6_6, (MR_Integer) 1))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_6_6, (MR_Integer) 2))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_6_6, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_19));
    }
  }
}

MR_Word MR_CALL 
check_hlds__simplify__common__common_info_init_0_f_0(void)
{
  {
    MR_Word CommonInfo_2;
    MR_Word VarEqv0_3;
    MR_Word StructMap0_4;
    MR_Word SinceCallVars0_5;
    MR_Word SeenCalls0_6;

    mercury__eqvclass__init_1_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), &VarEqv0_3);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_2[0]), &StructMap0_4);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &SinceCallVars0_5);
    mercury__map__init_1_p_0((MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_1[2]), &SeenCalls0_6);
    {
      CommonInfo_2 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CommonInfo_2, 0) = ((MR_Box) (VarEqv0_3));
      MR_hl_field(MR_mktag(0), CommonInfo_2, 1) = ((MR_Box) (StructMap0_4));
      MR_hl_field(MR_mktag(0), CommonInfo_2, 2) = ((MR_Box) (StructMap0_4));
      MR_hl_field(MR_mktag(0), CommonInfo_2, 3) = ((MR_Box) (SinceCallVars0_5));
      MR_hl_field(MR_mktag(0), CommonInfo_2, 4) = ((MR_Box) (SeenCalls0_6));
    }
    return CommonInfo_2;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____call_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__common____Unify____call_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____call_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__common____Compare____call_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____common_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__common____Unify____common_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____common_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__common____Compare____common_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____cons_id_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__common____Unify____cons_id_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____cons_id_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__common____Compare____cons_id_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____seen_calls_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__common____Unify____seen_calls_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____seen_calls_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__common____Compare____seen_calls_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____struct_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__common____Unify____struct_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____struct_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__common____Compare____struct_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structure_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__common____Unify____structure_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____structure_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__common____Compare____structure_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structures_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__common____Unify____structures_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____structures_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__common____Compare____structures_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__simplify__common__init(void)
{
}

void mercury__check_hlds__simplify__common__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_call_args_0);
	MR_register_type_ctor_info(&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_common_info_0);
	MR_register_type_ctor_info(&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_cons_id_map_0);
	MR_register_type_ctor_info(&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_seen_calls_0);
	MR_register_type_ctor_info(&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_struct_map_0);
	MR_register_type_ctor_info(&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_structure_0);
	MR_register_type_ctor_info(&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_structures_0);
}

void mercury__check_hlds__simplify__common__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__common__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.common.
