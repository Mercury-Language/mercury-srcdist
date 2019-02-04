/*
** Automatically generated from `common.m'
** by the Mercury compiler,
** version DEV
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


/* :- module check_hlds.simplify.common. */
/* :- implementation. */

/*
INIT mercury__check_hlds__simplify__common__init
ENDINIT
*/

#include "check_hlds.simplify.common.mih"


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
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
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
#include "eqvclass.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__eqvclass__pti_eqvclass_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0;

static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_common_info_0_0[4];

static const MR_ConstString check_hlds__simplify__common__check_hlds__simplify__common__field_names_common_info_0_0[4];

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

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____call_args_0_0_10001(
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____call_args_0_0_10001(
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____common_info_0_0_10001(
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____common_info_0_0_10001(
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____cons_id_map_0_0_10001(
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____cons_id_map_0_0_10001(
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____seen_calls_0_0_10001(
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____seen_calls_0_0_10001(
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____struct_map_0_0_10001(
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____struct_map_0_0_10001(
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structure_0_0_10001(
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____structure_0_0_10001(
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structures_0_0_10001(
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____structures_0_0_10001(
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
  MR_Box check_hlds__simplify__common__wrapper_arg_3);

static void MR_CALL 
check_hlds__simplify__common__IntroducedFrom__pred__common_optimise_construct__353__1_4_p_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_69,
  MR_Integer * check_hlds__simplify__common__HeadVar__2_70,
  MR_Word check_hlds__simplify__common__HeadVar__3_71,
  MR_Word * check_hlds__simplify__common__HeadVar__4_72);

static void MR_CALL 
check_hlds__simplify__common____Compare____structures_0_0(
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structures_0_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____structure_0_0(
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structure_0_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____struct_map_0_0(
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____struct_map_0_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____seen_calls_0_0(
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____seen_calls_0_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____cons_id_map_0_0(
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____cons_id_map_0_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____call_args_0_0(
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____call_args_0_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__common__apply_induced_substitutions_4_p_0(
  MR_Word check_hlds__simplify__common__ToVar_5,
  MR_Word check_hlds__simplify__common__FromVar_6,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_17,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_18);

static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_list_2_p_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_2_p_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__common__generate_assign_10_p_0(
  MR_Word check_hlds__simplify__common__ToVar_11,
  MR_Word check_hlds__simplify__common__FromVar_12,
  MR_Word check_hlds__simplify__common__ToVarMode_13,
  MR_Word check_hlds__simplify__common__OldGoalInfo_14,
  MR_Word * check_hlds__simplify__common__GoalExpr_15,
  MR_Word * check_hlds__simplify__common__GoalInfo_16,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_31,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_32,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_33,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_34);

static void MR_CALL 
check_hlds__simplify__common__create_output_unifications_9_p_0(
  MR_Word check_hlds__simplify__common__OldGoalInfo_10,
  MR_Word check_hlds__simplify__common__OutputArgs_11,
  MR_Word check_hlds__simplify__common__OldOutputArgs_12,
  MR_Word check_hlds__simplify__common__FromToInsts_13,
  MR_Word * check_hlds__simplify__common__AssignGoals_14,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_27,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_28,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_29,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_30);

static MR_bool MR_CALL 
check_hlds__simplify__common__common_var_lists_are_equiv_3_p_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__common__find_previous_call_5_p_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__InputArgs_8,
  MR_Word check_hlds__simplify__common__Eqv_9,
  MR_Word * check_hlds__simplify__common__OutputArgs_10,
  MR_Word * check_hlds__simplify__common__PrevContext_11);

static MR_bool MR_CALL 
check_hlds__simplify__common__partition_call_args_7_p_0(
  MR_Word check_hlds__simplify__common__VarTypes_1,
  MR_Word check_hlds__simplify__common__ModuleInfo_2,
  MR_Word check_hlds__simplify__common__HeadVar__3_3,
  MR_Word check_hlds__simplify__common__HeadVar__4_4,
  MR_Word * check_hlds__simplify__common__HeadVar__5_5,
  MR_Word * check_hlds__simplify__common__HeadVar__6_6,
  MR_Word * check_hlds__simplify__common__HeadVar__7_7);

static void MR_CALL 
check_hlds__simplify__common__common_optimise_call_2_11_p_0_1(
  MR_Box check_hlds__simplify__common__closure_arg,
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
  MR_Box * check_hlds__simplify__common__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__common__common_optimise_call_2_11_p_0(
  MR_Word check_hlds__simplify__common__SeenCall_12,
  MR_Word check_hlds__simplify__common__InputArgs_13,
  MR_Word check_hlds__simplify__common__OutputArgs_14,
  MR_Word check_hlds__simplify__common__Modes_15,
  MR_Word check_hlds__simplify__common__GoalInfo_16,
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
  MR_Word * check_hlds__simplify__common__MaybeAssignsGoalExpr_18,
  MR_Word check_hlds__simplify__common__Common0_19,
  MR_Word * check_hlds__simplify__common__Common_20,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_49);

static void MR_CALL 
check_hlds__simplify__common__do_record_cell_in_struct_map_5_p_0(
  MR_Word check_hlds__simplify__common__TypeCtor_6,
  MR_Word check_hlds__simplify__common__ConsId_7,
  MR_Word check_hlds__simplify__common__Struct_8,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_StructMap_15);

static void MR_CALL 
check_hlds__simplify__common__record_cell_in_maps_6_p_0(
  MR_Word check_hlds__simplify__common__TypeCtor_7,
  MR_Word check_hlds__simplify__common__ConsId_8,
  MR_Word check_hlds__simplify__common__Struct_9,
  MR_Word check_hlds__simplify__common__VarEqv_10,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_16,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_17);

static MR_bool MR_CALL 
check_hlds__simplify__common__ids_vars_match_3_p_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
  MR_Word check_hlds__simplify__common__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_deconstruct_4_p_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__VarEqv_7,
  MR_Integer check_hlds__simplify__common__VarId_8,
  MR_Word * check_hlds__simplify__common__Match_9);

static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_construct_4_p_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__VarEqv_7,
  MR_Word check_hlds__simplify__common__ArgVarIds_8,
  MR_Word * check_hlds__simplify__common__Match_9);

static MR_Box MR_CALL 
check_hlds__simplify__common__common_optimise_deconstruct_14_p_0_1(
  MR_Box check_hlds__simplify__common__closure_arg,
  MR_Box check_hlds__simplify__common__wrapper_arg_1);

static void MR_CALL 
check_hlds__simplify__common__common_optimise_deconstruct_14_p_0(
  MR_Word check_hlds__simplify__common__Var_15,
  MR_Word check_hlds__simplify__common__ConsId_16,
  MR_Word check_hlds__simplify__common__ArgVars_17,
  MR_Word check_hlds__simplify__common__ArgModes_18,
  MR_Word check_hlds__simplify__common__CanFail_19,
  MR_Word check_hlds__simplify__common__UnifyMode_20,
  MR_Word check_hlds__simplify__common__GoalExpr0_21,
  MR_Word * check_hlds__simplify__common__GoalExpr_22,
  MR_Word check_hlds__simplify__common__GoalInfo0_23,
  MR_Word * check_hlds__simplify__common__GoalInfo_24,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_47,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_48,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_49,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_50);

static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0_1(
  MR_Box check_hlds__simplify__common__closure_arg,
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
  MR_Box * check_hlds__simplify__common__wrapper_arg_2,
  MR_Box check_hlds__simplify__common__wrapper_arg_3,
  MR_Box * check_hlds__simplify__common__wrapper_arg_4);

static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0(
  MR_Word check_hlds__simplify__common__Var_13,
  MR_Word check_hlds__simplify__common__ConsId_14,
  MR_Word check_hlds__simplify__common__ArgVars_15,
  MR_Word check_hlds__simplify__common__UnifyMode_16,
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
  MR_Word * check_hlds__simplify__common__GoalExpr_18,
  MR_Word check_hlds__simplify__common__GoalInfo0_19,
  MR_Word * check_hlds__simplify__common__GoalInfo_20,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_46,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_47,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_49);


static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_1[11][2];

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_3[1][4];

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_4[1][7];

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_5[1][5];

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_6[1][6];

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_7[2][1];




static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_1[11][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: redundant"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Here is the previous"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (&check_hlds__simplify__common_scalar_common_4[0])),
    ((MR_Box) (check_hlds__simplify__common__common_optimise_construct_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__simplify__common_scalar_common_5[0])),
    ((MR_Box) (check_hlds__simplify__common__common_optimise_deconstruct_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 25)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__simplify__common__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__simplify__common__eqvclass__pti_eqvclass_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__common__eqvclass__pti_eqvclass_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_7[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__common__eqvclass__pti_eqvclass_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_call_args_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_call_args_0_0 = {
  (MR_String) "call_args",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__common__check_hlds__simplify__common__field_types_call_args_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_call_args_0_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_call_args_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_call_args_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_call_args_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__common____Unify____call_args_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____call_args_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "call_args",
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_call_args_0 },
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_call_args_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_call_args_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_structure_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_TypeInfo) &check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_call_args_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0,
    (MR_TypeInfo) &check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0
  }
};

static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_common_info_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0
};

static const MR_ConstString check_hlds__simplify__common__check_hlds__simplify__common__field_names_common_info_0_0[4] = {
  (MR_String) "var_eqv",
  (MR_String) "all_structs",
  (MR_String) "since_call_structs",
  (MR_String) "seen_calls"
};

static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_info_0_0 = {
  (MR_String) "common_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__common__check_hlds__simplify__common__field_types_common_info_0_0,
  check_hlds__simplify__common__check_hlds__simplify__common__field_names_common_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_common_info_0_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_info_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_common_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_common_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__common____Unify____common_info_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____common_info_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "common_info",
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_common_info_0 },
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_common_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_common_info_0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_cons_id_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__common____Unify____cons_id_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____cons_id_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "cons_id_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_seen_calls_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__common____Unify____seen_calls_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____seen_calls_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "seen_calls",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_struct_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__common____Unify____struct_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____struct_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "struct_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_structure_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_structure_0_0 = {
  (MR_String) "structure",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__common__check_hlds__simplify__common__field_types_structure_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_structure_0_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_structure_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_structure_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_structure_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__common____Unify____structure_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____structure_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "structure",
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_structure_0 },
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_structure_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_structure_0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_structures_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__common____Unify____structures_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____structures_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "structures",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____call_args_0_0_10001(
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;

    {
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____call_args_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
    return check_hlds__simplify__common__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____call_args_0_0_10001(
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__common____Compare____call_args_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____common_info_0_0_10001(
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;

    {
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____common_info_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
    return check_hlds__simplify__common__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____common_info_0_0_10001(
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__common____Compare____common_info_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____cons_id_map_0_0_10001(
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;

    {
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____cons_id_map_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
    return check_hlds__simplify__common__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____cons_id_map_0_0_10001(
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__common____Compare____cons_id_map_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____seen_calls_0_0_10001(
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;

    {
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____seen_calls_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
    return check_hlds__simplify__common__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____seen_calls_0_0_10001(
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__common____Compare____seen_calls_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____struct_map_0_0_10001(
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;

    {
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____struct_map_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
    return check_hlds__simplify__common__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____struct_map_0_0_10001(
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__common____Compare____struct_map_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structure_0_0_10001(
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;

    {
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____structure_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
    return check_hlds__simplify__common__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____structure_0_0_10001(
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__common____Compare____structure_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structures_0_0_10001(
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;

    {
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common____Unify____structures_0_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), ((MR_Word) check_hlds__simplify__common__wrapper_arg_2));
    }
    return check_hlds__simplify__common__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____structures_0_0_10001(
  MR_Box * check_hlds__simplify__common__wrapper_arg_1,
  MR_Box check_hlds__simplify__common__wrapper_arg_2,
  MR_Box check_hlds__simplify__common__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__common__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__common____Compare____structures_0_0(&check_hlds__simplify__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__common__wrapper_arg_2), ((MR_Word) check_hlds__simplify__common__wrapper_arg_3));
    }
    *check_hlds__simplify__common__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__simplify__common__IntroducedFrom__pred__common_optimise_construct__353__1_4_p_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_69,
  MR_Integer * check_hlds__simplify__common__HeadVar__2_70,
  MR_Word check_hlds__simplify__common__HeadVar__3_71,
  MR_Word * check_hlds__simplify__common__HeadVar__4_72)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;

    {
      mercury__eqvclass__ensure_element_partition_id_4_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__HeadVar__1_69)), check_hlds__simplify__common__HeadVar__2_70, check_hlds__simplify__common__HeadVar__3_71, check_hlds__simplify__common__HeadVar__4_72);
    }
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____structures_0_0(
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_4 = check_hlds__simplify__common__HeadVar__2_2;
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_5 = check_hlds__simplify__common__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[1], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structures_0_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_3 = check_hlds__simplify__common__HeadVar__1_1;
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_4 = check_hlds__simplify__common__HeadVar__2_2;

    {
      check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_4)));
    }
    return check_hlds__simplify__common__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____structure_0_0(
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Integer check_hlds__simplify__common__CastX_9 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;
    MR_Integer check_hlds__simplify__common__CastY_10 = (MR_Integer) check_hlds__simplify__common__HeadVar__3_3;

    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_9 == check_hlds__simplify__common__CastY_10);
    if (check_hlds__simplify__common__succeeded)
      *check_hlds__simplify__common__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__simplify__common__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__common__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__common__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__common__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__common__Var_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], &check_hlds__simplify__common__Var_8, ((MR_Box) (check_hlds__simplify__common__Var_4)), ((MR_Box) (check_hlds__simplify__common__Var_6)));
        }
        check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Var_8 == (MR_Integer) 0);
        check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
        if (check_hlds__simplify__common__succeeded)
          *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[5], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__Var_5)), ((MR_Box) (check_hlds__simplify__common__Var_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____structure_0_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Integer check_hlds__simplify__common__CastX_7 = (MR_Integer) check_hlds__simplify__common__HeadVar__1_1;
    MR_Integer check_hlds__simplify__common__CastY_8 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;

    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_7 == check_hlds__simplify__common__CastY_8);
    if (check_hlds__simplify__common__succeeded)
      check_hlds__simplify__common__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__simplify__common__TypeInfo_10_10;
        MR_Word check_hlds__simplify__common__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__common__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__common__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__common__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));

        {
          check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__Var_3)), ((MR_Box) (check_hlds__simplify__common__Var_5)));
        }
        if (check_hlds__simplify__common__succeeded)
          {
            check_hlds__simplify__common__TypeInfo_10_10 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[5];
            {
              check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_10_10, ((MR_Box) (check_hlds__simplify__common__Var_4)), ((MR_Box) (check_hlds__simplify__common__Var_6)));
            }
          }
      }
    return check_hlds__simplify__common__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____struct_map_0_0(
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_4 = check_hlds__simplify__common__HeadVar__2_2;
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_5 = check_hlds__simplify__common__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[1], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____struct_map_0_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_3 = check_hlds__simplify__common__HeadVar__1_1;
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_4 = check_hlds__simplify__common__HeadVar__2_2;

    {
      check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[1], ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_4)));
    }
    return check_hlds__simplify__common__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____seen_calls_0_0(
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_4 = check_hlds__simplify__common__HeadVar__2_2;
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_5 = check_hlds__simplify__common__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[2], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____seen_calls_0_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_3 = check_hlds__simplify__common__HeadVar__1_1;
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_4 = check_hlds__simplify__common__HeadVar__2_2;

    {
      check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[2], ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_4)));
    }
    return check_hlds__simplify__common__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____cons_id_map_0_0(
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_4 = check_hlds__simplify__common__HeadVar__2_2;
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_5 = check_hlds__simplify__common__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[0], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____cons_id_map_0_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Word check_hlds__simplify__common__Cast_HeadVar1_3 = check_hlds__simplify__common__HeadVar__1_1;
    MR_Word check_hlds__simplify__common__Cast_HeadVar2_4 = check_hlds__simplify__common__HeadVar__2_2;

    {
      check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__common__Cast_HeadVar2_4)));
    }
    return check_hlds__simplify__common__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__common____Compare____common_info_0_0(
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Integer check_hlds__simplify__common__CastX_15 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;
    MR_Integer check_hlds__simplify__common__CastY_16 = (MR_Integer) check_hlds__simplify__common__HeadVar__3_3;

    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_15 == check_hlds__simplify__common__CastY_16);
    if (check_hlds__simplify__common__succeeded)
      *check_hlds__simplify__common__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__simplify__common__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__common__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__common__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__common__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__simplify__common__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__common__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__common__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__common__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word check_hlds__simplify__common__Var_12;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[3], &check_hlds__simplify__common__Var_12, ((MR_Box) (check_hlds__simplify__common__Var_4)), ((MR_Box) (check_hlds__simplify__common__Var_8)));
        }
        check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Var_12 == (MR_Integer) 0);
        check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
        if (check_hlds__simplify__common__succeeded)
          *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__Var_12;
        else
          {
            MR_Word check_hlds__simplify__common__Var_13;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[1], &check_hlds__simplify__common__Var_13, ((MR_Box) (check_hlds__simplify__common__Var_5)), ((MR_Box) (check_hlds__simplify__common__Var_9)));
            }
            check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Var_13 == (MR_Integer) 0);
            check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
            if (check_hlds__simplify__common__succeeded)
              *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__Var_13;
            else
              {
                MR_Word check_hlds__simplify__common__Var_14;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[1], &check_hlds__simplify__common__Var_14, ((MR_Box) (check_hlds__simplify__common__Var_6)), ((MR_Box) (check_hlds__simplify__common__Var_10)));
                }
                check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Var_14 == (MR_Integer) 0);
                check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
                if (check_hlds__simplify__common__succeeded)
                  *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__Var_14;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_2[2], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__Var_7)), ((MR_Box) (check_hlds__simplify__common__Var_11)));
                    }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__common____Unify____common_info_0_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Integer check_hlds__simplify__common__CastX_11 = (MR_Integer) check_hlds__simplify__common__HeadVar__1_1;
    MR_Integer check_hlds__simplify__common__CastY_12 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;

    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_11 == check_hlds__simplify__common__CastY_12);
    if (check_hlds__simplify__common__succeeded)
      check_hlds__simplify__common__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__simplify__common__TypeInfo_14_14;
        MR_Word check_hlds__simplify__common__TypeInfo_15_15;
        MR_Word check_hlds__simplify__common__TypeInfo_16_16;
        MR_Word check_hlds__simplify__common__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__common__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__common__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__common__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word check_hlds__simplify__common__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__common__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__common__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__common__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 3)));

        {
          check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[3], ((MR_Box) (check_hlds__simplify__common__Var_3)), ((MR_Box) (check_hlds__simplify__common__Var_7)));
        }
        if (check_hlds__simplify__common__succeeded)
          {
            check_hlds__simplify__common__TypeInfo_14_14 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[1];
            {
              check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_14_14, ((MR_Box) (check_hlds__simplify__common__Var_4)), ((MR_Box) (check_hlds__simplify__common__Var_8)));
            }
            if (check_hlds__simplify__common__succeeded)
              {
                check_hlds__simplify__common__TypeInfo_15_15 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[1];
                {
                  check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_15_15, ((MR_Box) (check_hlds__simplify__common__Var_5)), ((MR_Box) (check_hlds__simplify__common__Var_9)));
                }
                if (check_hlds__simplify__common__succeeded)
                  {
                    check_hlds__simplify__common__TypeInfo_16_16 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[2];
                    {
                      check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_16_16, ((MR_Box) (check_hlds__simplify__common__Var_6)), ((MR_Box) (check_hlds__simplify__common__Var_10)));
                    }
                  }
              }
          }
      }
    return check_hlds__simplify__common__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____call_args_0_0(
  MR_Word * check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Integer check_hlds__simplify__common__CastX_12 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;
    MR_Integer check_hlds__simplify__common__CastY_13 = (MR_Integer) check_hlds__simplify__common__HeadVar__3_3;

    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_12 == check_hlds__simplify__common__CastY_13);
    if (check_hlds__simplify__common__succeeded)
      *check_hlds__simplify__common__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__simplify__common__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__common__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__common__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__common__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__common__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__common__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__common__Var_10;

        {
          mercury__term____Compare____context_0_0(&check_hlds__simplify__common__Var_10, check_hlds__simplify__common__Var_4, check_hlds__simplify__common__Var_7);
        }
        check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Var_10 == (MR_Integer) 0);
        check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
        if (check_hlds__simplify__common__succeeded)
          *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__Var_10;
        else
          {
            MR_Word check_hlds__simplify__common__Var_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[5], &check_hlds__simplify__common__Var_11, ((MR_Box) (check_hlds__simplify__common__Var_5)), ((MR_Box) (check_hlds__simplify__common__Var_8)));
            }
            check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Var_11 == (MR_Integer) 0);
            check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
            if (check_hlds__simplify__common__succeeded)
              *check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__Var_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[5], check_hlds__simplify__common__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__common__Var_6)), ((MR_Box) (check_hlds__simplify__common__Var_9)));
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____call_args_0_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Integer check_hlds__simplify__common__CastX_9 = (MR_Integer) check_hlds__simplify__common__HeadVar__1_1;
    MR_Integer check_hlds__simplify__common__CastY_10 = (MR_Integer) check_hlds__simplify__common__HeadVar__2_2;

    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__CastX_9 == check_hlds__simplify__common__CastY_10);
    if (check_hlds__simplify__common__succeeded)
      check_hlds__simplify__common__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__simplify__common__TypeInfo_12_12;
        MR_Word check_hlds__simplify__common__TypeInfo_13_13;
        MR_Word check_hlds__simplify__common__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__common__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__common__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__common__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__common__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__common__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));

        {
          check_hlds__simplify__common__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__common__Var_3, check_hlds__simplify__common__Var_6);
        }
        if (check_hlds__simplify__common__succeeded)
          {
            check_hlds__simplify__common__TypeInfo_12_12 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[5];
            {
              check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_12_12, ((MR_Box) (check_hlds__simplify__common__Var_4)), ((MR_Box) (check_hlds__simplify__common__Var_7)));
            }
            if (check_hlds__simplify__common__succeeded)
              {
                check_hlds__simplify__common__TypeInfo_13_13 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[5];
                {
                  check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_13_13, ((MR_Box) (check_hlds__simplify__common__Var_5)), ((MR_Box) (check_hlds__simplify__common__Var_8)));
                }
              }
          }
      }
    return check_hlds__simplify__common__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common__apply_induced_substitutions_4_p_0(
  MR_Word check_hlds__simplify__common__ToVar_5,
  MR_Word check_hlds__simplify__common__FromVar_6,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_17,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_18)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Word check_hlds__simplify__common__RttiVarMaps0_8;
    MR_Word check_hlds__simplify__common__FromVarRttiInfo_9;
    MR_Word check_hlds__simplify__common__ToVarRttiInfo_10;
    MR_Word check_hlds__simplify__common__TSubst_11;

    {
      check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_17, &check_hlds__simplify__common__RttiVarMaps0_8);
    }
    {
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(check_hlds__simplify__common__RttiVarMaps0_8, check_hlds__simplify__common__FromVar_6, &check_hlds__simplify__common__FromVarRttiInfo_9);
    }
    {
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(check_hlds__simplify__common__RttiVarMaps0_8, check_hlds__simplify__common__ToVar_5, &check_hlds__simplify__common__ToVarRttiInfo_10);
    }
    switch (MR_tag((MR_Word) check_hlds__simplify__common__ToVarRttiInfo_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__simplify__common__TypeInfo_14_40;
          MR_Word check_hlds__simplify__common__TypeCtorInfo_15_41;

          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__FromVarRttiInfo_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (check_hlds__simplify__common__succeeded)
            {
              check_hlds__simplify__common__TypeInfo_14_40 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[4];
              check_hlds__simplify__common__TypeCtorInfo_15_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
              {
                mercury__map__init_1_p_0(check_hlds__simplify__common__TypeInfo_14_40, check_hlds__simplify__common__TypeCtorInfo_15_41, &check_hlds__simplify__common__TSubst_11);
              }
              check_hlds__simplify__common__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__simplify__common__FromVarTypeInfoType_33;
          MR_Word check_hlds__simplify__common__ToVarTypeInfoType_34;

          check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__FromVarRttiInfo_9)) == (MR_mktag((MR_Integer) 1)));
          if (check_hlds__simplify__common__succeeded)
            {
              check_hlds__simplify__common__FromVarTypeInfoType_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__FromVarRttiInfo_9, (MR_Integer) 0)));
              check_hlds__simplify__common__ToVarTypeInfoType_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__ToVarRttiInfo_10, (MR_Integer) 0)));
              {
                check_hlds__simplify__common__succeeded = parse_tree__prog_type__type_subsumes_3_p_0(check_hlds__simplify__common__ToVarTypeInfoType_34, check_hlds__simplify__common__FromVarTypeInfoType_33, &check_hlds__simplify__common__TSubst_11);
              }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__simplify__common__FromVarConstraint_35;
          MR_Word check_hlds__simplify__common__ToVarConstraint_36;
          MR_Word check_hlds__simplify__common__Name_37;
          MR_Word check_hlds__simplify__common__FromArgs_38;
          MR_Word check_hlds__simplify__common__ToArgs_39;
          MR_Word check_hlds__simplify__common__Var_42;

          check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__FromVarRttiInfo_9)) == (MR_mktag((MR_Integer) 2)));
          if (check_hlds__simplify__common__succeeded)
            {
              check_hlds__simplify__common__FromVarConstraint_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__FromVarRttiInfo_9, (MR_Integer) 0)));
              check_hlds__simplify__common__ToVarConstraint_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__ToVarRttiInfo_10, (MR_Integer) 0)));
              check_hlds__simplify__common__Name_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__FromVarConstraint_35, (MR_Integer) 0)));
              check_hlds__simplify__common__FromArgs_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__FromVarConstraint_35, (MR_Integer) 1)));
              check_hlds__simplify__common__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ToVarConstraint_36, (MR_Integer) 0)));
              check_hlds__simplify__common__ToArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ToVarConstraint_36, (MR_Integer) 1)));
              {
                check_hlds__simplify__common__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__common__Name_37, check_hlds__simplify__common__Var_42);
              }
              if (check_hlds__simplify__common__succeeded)
                {
                  check_hlds__simplify__common__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__simplify__common__ToArgs_39, check_hlds__simplify__common__FromArgs_38, &check_hlds__simplify__common__TSubst_11);
                }
            }
        }
        break;
    }
    if (check_hlds__simplify__common__succeeded)
      {
        {
          check_hlds__simplify__common__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__simplify__common__TSubst_11);
        }
        if (check_hlds__simplify__common__succeeded)
          *check_hlds__simplify__common__STATE_VARIABLE_Info_18 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_17;
        else
          {
            check_hlds__simplify__simplify_info__simplify_info_apply_substitutions_and_duplicate_5_p_0(check_hlds__simplify__common__ToVar_5, check_hlds__simplify__common__FromVar_6, check_hlds__simplify__common__TSubst_11, check_hlds__simplify__common__STATE_VARIABLE_Info_0_17, check_hlds__simplify__common__STATE_VARIABLE_Info_18);
          }
      }
    else
      switch (MR_tag((MR_Word) check_hlds__simplify__common__FromVarRttiInfo_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word check_hlds__simplify__common__RttiVarMaps_12;

            {
              hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(check_hlds__simplify__common__ToVar_5, check_hlds__simplify__common__FromVar_6, check_hlds__simplify__common__RttiVarMaps0_8, &check_hlds__simplify__common__RttiVarMaps_12);
            }
            {
              check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__common__RttiVarMaps_12, check_hlds__simplify__common__STATE_VARIABLE_Info_0_17, check_hlds__simplify__common__STATE_VARIABLE_Info_18);
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          switch (MR_tag((MR_Word) check_hlds__simplify__common__ToVarRttiInfo_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word check_hlds__simplify__common__RttiVarMaps_25;

                {
                  hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(check_hlds__simplify__common__FromVar_6, check_hlds__simplify__common__ToVar_5, check_hlds__simplify__common__RttiVarMaps0_8, &check_hlds__simplify__common__RttiVarMaps_25);
                }
                {
                  check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__common__RttiVarMaps_25, check_hlds__simplify__common__STATE_VARIABLE_Info_0_17, check_hlds__simplify__common__STATE_VARIABLE_Info_18);
                }
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.apply_induced_substitutions\'/4", (MR_String) "inconsistent info");
                  return;
                }
              }
              break;
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_list_2_p_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__common__succeeded;

        if ((check_hlds__simplify__common__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        else
          {
            MR_Word check_hlds__simplify__common__Type1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__common__Types1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__common__Type2_5;
            MR_Word check_hlds__simplify__common__Types2_6;

            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__simplify__common__succeeded)
              {
                check_hlds__simplify__common__Type2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__simplify__common__Types2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
                switch (MR_tag((MR_Word) check_hlds__simplify__common__Type1_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word check_hlds__simplify__common__TypeInfo_44_48;
                      MR_Word check_hlds__simplify__common__TVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Type1_3, (MR_Integer) 0)));
                      MR_Word check_hlds__simplify__common__Var_37;
                      MR_Word check_hlds__simplify__common__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Type1_3, (MR_Integer) 1)));
                      MR_Word check_hlds__simplify__common__Var_9;

                      check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__Type2_5)) == (MR_mktag((MR_Integer) 0)));
                      if (check_hlds__simplify__common__succeeded)
                        {
                          check_hlds__simplify__common__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Type2_5, (MR_Integer) 0)));
                          check_hlds__simplify__common__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Type2_5, (MR_Integer) 1)));
                          check_hlds__simplify__common__TypeInfo_44_48 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[4];
                          {
                            check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_44_48, ((MR_Box) (check_hlds__simplify__common__TVar_7)), ((MR_Box) (check_hlds__simplify__common__Var_37)));
                          }
                        }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word check_hlds__simplify__common__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Type1_3, (MR_Integer) 0)));
                      MR_Word check_hlds__simplify__common__As_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Type1_3, (MR_Integer) 1)));
                      MR_Word check_hlds__simplify__common__Bs_13;
                      MR_Word check_hlds__simplify__common__Var_38;
                      MR_Word check_hlds__simplify__common__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Type1_3, (MR_Integer) 2)));
                      MR_Word check_hlds__simplify__common__Var_14;

                      check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__Type2_5)) == (MR_mktag((MR_Integer) 1)));
                      if (check_hlds__simplify__common__succeeded)
                        {
                          check_hlds__simplify__common__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Type2_5, (MR_Integer) 0)));
                          check_hlds__simplify__common__Bs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Type2_5, (MR_Integer) 1)));
                          check_hlds__simplify__common__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Type2_5, (MR_Integer) 2)));
                          {
                            check_hlds__simplify__common__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__common__Name_10, check_hlds__simplify__common__Var_38);
                          }
                          if (check_hlds__simplify__common__succeeded)
                            {
                              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_11, check_hlds__simplify__common__Bs_13);
                            }
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word check_hlds__simplify__common__BuiltinType_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__Type1_3, (MR_Integer) 0)));
                      MR_Word check_hlds__simplify__common__Var_39;

                      check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__Type2_5)) == (MR_mktag((MR_Integer) 2)));
                      if (check_hlds__simplify__common__succeeded)
                        {
                          check_hlds__simplify__common__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__Type2_5, (MR_Integer) 0)));
                          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__BuiltinType_15 == check_hlds__simplify__common__Var_39);
                        }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Type1_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word check_hlds__simplify__common__As_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Type1_3, (MR_Integer) 1)));
                          MR_Word check_hlds__simplify__common__Bs_24;
                          MR_Word check_hlds__simplify__common__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Type1_3, (MR_Integer) 2)));
                          MR_Word check_hlds__simplify__common__Var_25;

                          check_hlds__simplify__common__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__common__Type2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Type2_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (check_hlds__simplify__common__succeeded)
                            {
                              check_hlds__simplify__common__Bs_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Type2_5, (MR_Integer) 1)));
                              check_hlds__simplify__common__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Type2_5, (MR_Integer) 2)));
                              {
                                check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_22, check_hlds__simplify__common__Bs_24);
                              }
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word check_hlds__simplify__common__PorF_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Type1_3, (MR_Integer) 1)));
                          MR_Word check_hlds__simplify__common__As_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Type1_3, (MR_Integer) 2)));
                          MR_Word check_hlds__simplify__common__H_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Type1_3, (MR_Integer) 3)));
                          MR_Word check_hlds__simplify__common__P_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Type1_3, (MR_Integer) 4)));
                          MR_Word check_hlds__simplify__common__Bs_21;
                          MR_Word check_hlds__simplify__common__Var_40;
                          MR_Word check_hlds__simplify__common__Var_41;
                          MR_Word check_hlds__simplify__common__Var_42;

                          check_hlds__simplify__common__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__common__Type2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Type2_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
                          if (check_hlds__simplify__common__succeeded)
                            {
                              check_hlds__simplify__common__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Type2_5, (MR_Integer) 1)));
                              check_hlds__simplify__common__Bs_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Type2_5, (MR_Integer) 2)));
                              check_hlds__simplify__common__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Type2_5, (MR_Integer) 3)));
                              check_hlds__simplify__common__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Type2_5, (MR_Integer) 4)));
                              check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__PorF_16 == check_hlds__simplify__common__Var_40);
                              if (check_hlds__simplify__common__succeeded)
                                {
                                  {
                                    check_hlds__simplify__common__succeeded = parse_tree__prog_data____Unify____ho_inst_info_0_0(check_hlds__simplify__common__H_18, check_hlds__simplify__common__Var_41);
                                  }
                                  if (check_hlds__simplify__common__succeeded)
                                    {
                                      check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__P_19 == check_hlds__simplify__common__Var_42);
                                      if (check_hlds__simplify__common__succeeded)
                                        {
                                          check_hlds__simplify__common__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
                                          if (check_hlds__simplify__common__succeeded)
                                            {
                                              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_17, check_hlds__simplify__common__Bs_21);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word check_hlds__simplify__common__TypeInfo_41_45;
                          MR_Word check_hlds__simplify__common__TVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Type1_3, (MR_Integer) 1)));
                          MR_Word check_hlds__simplify__common__As_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Type1_3, (MR_Integer) 2)));
                          MR_Word check_hlds__simplify__common__Bs_29;
                          MR_Word check_hlds__simplify__common__Var_44;
                          MR_Word check_hlds__simplify__common__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Type1_3, (MR_Integer) 3)));
                          MR_Word check_hlds__simplify__common__Var_30;

                          check_hlds__simplify__common__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__common__Type2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Type2_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
                          if (check_hlds__simplify__common__succeeded)
                            {
                              check_hlds__simplify__common__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Type2_5, (MR_Integer) 1)));
                              check_hlds__simplify__common__Bs_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Type2_5, (MR_Integer) 2)));
                              check_hlds__simplify__common__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Type2_5, (MR_Integer) 3)));
                              check_hlds__simplify__common__TypeInfo_41_45 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[4];
                              {
                                check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_41_45, ((MR_Box) (check_hlds__simplify__common__TVar_26)), ((MR_Box) (check_hlds__simplify__common__Var_44)));
                              }
                              if (check_hlds__simplify__common__succeeded)
                                {
                                  check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_27, check_hlds__simplify__common__Bs_29);
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.types_match_exactly\'/2", (MR_String) "kind annotation");
                          }
                          check_hlds__simplify__common__succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                }
                if (check_hlds__simplify__common__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word check_hlds__simplify__common__next_value_of_HeadVar__1_1 = check_hlds__simplify__common__Types1_4;
                      MR_Word check_hlds__simplify__common__next_value_of_HeadVar__2_2 = check_hlds__simplify__common__Types2_6;

                      check_hlds__simplify__common__HeadVar__2_2 = check_hlds__simplify__common__next_value_of_HeadVar__2_2;
                      check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__next_value_of_HeadVar__1_1;
                    }
                    continue;
                  }
              }
          }
        return check_hlds__simplify__common__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_2_p_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;

    switch (MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__simplify__common__TypeInfo_44_44;
          MR_Word check_hlds__simplify__common__TVar_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word check_hlds__simplify__common__Var_33;
          MR_Word check_hlds__simplify__common__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word check_hlds__simplify__common__Var_5;

          check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
          if (check_hlds__simplify__common__succeeded)
            {
              check_hlds__simplify__common__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
              check_hlds__simplify__common__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
              check_hlds__simplify__common__TypeInfo_44_44 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[4];
              {
                check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_44_44, ((MR_Box) (check_hlds__simplify__common__TVar_3)), ((MR_Box) (check_hlds__simplify__common__Var_33)));
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__simplify__common__Name_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word check_hlds__simplify__common__As_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word check_hlds__simplify__common__Bs_9;
          MR_Word check_hlds__simplify__common__Var_34;
          MR_Word check_hlds__simplify__common__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word check_hlds__simplify__common__Var_10;

          check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
          if (check_hlds__simplify__common__succeeded)
            {
              check_hlds__simplify__common__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
              check_hlds__simplify__common__Bs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
              check_hlds__simplify__common__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
              {
                check_hlds__simplify__common__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__common__Name_6, check_hlds__simplify__common__Var_34);
              }
              if (check_hlds__simplify__common__succeeded)
                {
                  check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_7, check_hlds__simplify__common__Bs_9);
                }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__simplify__common__BuiltinType_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word check_hlds__simplify__common__Var_35;

          check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
          if (check_hlds__simplify__common__succeeded)
            {
              check_hlds__simplify__common__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
              check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__BuiltinType_11 == check_hlds__simplify__common__Var_35);
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__simplify__common__As_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word check_hlds__simplify__common__Bs_20;
              MR_Word check_hlds__simplify__common__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word check_hlds__simplify__common__Var_21;

              check_hlds__simplify__common__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (check_hlds__simplify__common__succeeded)
                {
                  check_hlds__simplify__common__Bs_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
                  check_hlds__simplify__common__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
                  {
                    check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_18, check_hlds__simplify__common__Bs_20);
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__simplify__common__PorF_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word check_hlds__simplify__common__As_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word check_hlds__simplify__common__H_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word check_hlds__simplify__common__P_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 4)));
              MR_Word check_hlds__simplify__common__Bs_17;
              MR_Word check_hlds__simplify__common__Var_36;
              MR_Word check_hlds__simplify__common__Var_37;
              MR_Word check_hlds__simplify__common__Var_38;

              check_hlds__simplify__common__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (check_hlds__simplify__common__succeeded)
                {
                  check_hlds__simplify__common__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
                  check_hlds__simplify__common__Bs_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
                  check_hlds__simplify__common__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 3)));
                  check_hlds__simplify__common__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 4)));
                  check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__PorF_12 == check_hlds__simplify__common__Var_36);
                  if (check_hlds__simplify__common__succeeded)
                    {
                      {
                        check_hlds__simplify__common__succeeded = parse_tree__prog_data____Unify____ho_inst_info_0_0(check_hlds__simplify__common__H_14, check_hlds__simplify__common__Var_37);
                      }
                      if (check_hlds__simplify__common__succeeded)
                        {
                          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__P_15 == check_hlds__simplify__common__Var_38);
                          if (check_hlds__simplify__common__succeeded)
                            {
                              check_hlds__simplify__common__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
                              if (check_hlds__simplify__common__succeeded)
                                {
                                  check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_13, check_hlds__simplify__common__Bs_17);
                                }
                            }
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__simplify__common__TypeInfo_41_41;
              MR_Word check_hlds__simplify__common__TVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word check_hlds__simplify__common__As_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word check_hlds__simplify__common__Bs_25;
              MR_Word check_hlds__simplify__common__Var_40;
              MR_Word check_hlds__simplify__common__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word check_hlds__simplify__common__Var_26;

              check_hlds__simplify__common__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (check_hlds__simplify__common__succeeded)
                {
                  check_hlds__simplify__common__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
                  check_hlds__simplify__common__Bs_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 2)));
                  check_hlds__simplify__common__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 3)));
                  check_hlds__simplify__common__TypeInfo_41_41 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[4];
                  {
                    check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__common__TypeInfo_41_41, ((MR_Box) (check_hlds__simplify__common__TVar_22)), ((MR_Box) (check_hlds__simplify__common__Var_40)));
                  }
                  if (check_hlds__simplify__common__succeeded)
                    {
                      check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__As_23, check_hlds__simplify__common__Bs_25);
                    }
                }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.types_match_exactly\'/2", (MR_String) "kind annotation");
              }
              check_hlds__simplify__common__succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return check_hlds__simplify__common__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common__generate_assign_10_p_0(
  MR_Word check_hlds__simplify__common__ToVar_11,
  MR_Word check_hlds__simplify__common__FromVar_12,
  MR_Word check_hlds__simplify__common__ToVarMode_13,
  MR_Word check_hlds__simplify__common__OldGoalInfo_14,
  MR_Word * check_hlds__simplify__common__GoalExpr_15,
  MR_Word * check_hlds__simplify__common__GoalInfo_16,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_31,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_32,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_33,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_34)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Word check_hlds__simplify__common__VarTypes_19;
    MR_Word check_hlds__simplify__common__ToVarType_20;
    MR_Word check_hlds__simplify__common__FromVarType_21;
    MR_Word check_hlds__simplify__common__NonLocals_22;
    MR_Word check_hlds__simplify__common__ToVarFinal_24;
    MR_Word check_hlds__simplify__common__InstMapDelta_28;
    MR_Word check_hlds__simplify__common__GoalInfo0_29;
    MR_Word check_hlds__simplify__common__Context_30;
    MR_Word check_hlds__simplify__common__Var_36;
    MR_Word check_hlds__simplify__common__Var_37;
    MR_Word check_hlds__simplify__common__Var_59;
    MR_Word check_hlds__simplify__common__Var_60;
    MR_Word check_hlds__simplify__common__VarEqv0_71;
    MR_Word check_hlds__simplify__common__VarEqv_72;
    MR_Word check_hlds__simplify__common__ToVarInit_23;
    MR_Word check_hlds__simplify__common__Var_74;
    MR_Word check_hlds__simplify__common__Var_75;
    MR_Word check_hlds__simplify__common__Var_76;
    MR_Word check_hlds__simplify__common__Var_78;
    MR_Word check_hlds__simplify__common__Var_79;
    MR_Word check_hlds__simplify__common__Var_80;
    MR_Word check_hlds__simplify__common__Var_77;

    {
      check_hlds__simplify__common__apply_induced_substitutions_4_p_0(check_hlds__simplify__common__ToVar_11, check_hlds__simplify__common__FromVar_12, check_hlds__simplify__common__STATE_VARIABLE_Info_0_33, check_hlds__simplify__common__STATE_VARIABLE_Info_34);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(*check_hlds__simplify__common__STATE_VARIABLE_Info_34, &check_hlds__simplify__common__VarTypes_19);
    }
    {
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_19, check_hlds__simplify__common__ToVar_11, &check_hlds__simplify__common__ToVarType_20);
    }
    {
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_19, check_hlds__simplify__common__FromVar_12, &check_hlds__simplify__common__FromVarType_21);
    }
    {
      check_hlds__simplify__common__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_37, 0) = ((MR_Box) (check_hlds__simplify__common__FromVar_12));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__common__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_36, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_36, 1) = ((MR_Box) (check_hlds__simplify__common__Var_37));
    }
    {
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__common__Var_36, &check_hlds__simplify__common__NonLocals_22);
    }
    check_hlds__simplify__common__ToVarInit_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ToVarMode_13, (MR_Integer) 0)));
    check_hlds__simplify__common__ToVarFinal_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ToVarMode_13, (MR_Integer) 1)));
    {
      check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_2_p_0(check_hlds__simplify__common__ToVarType_20, check_hlds__simplify__common__FromVarType_21);
    }
    if (check_hlds__simplify__common__succeeded)
      {
        MR_Word check_hlds__simplify__common__UnifyMode_25;
        MR_Word check_hlds__simplify__common__Var_40;
        MR_Word check_hlds__simplify__common__Var_44;
        MR_Word check_hlds__simplify__common__Var_45;

        {
          check_hlds__simplify__common__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Var_40, 0) = ((MR_Box) (check_hlds__simplify__common__ToVarFinal_24));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Var_40, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarFinal_24));
        }
        {
          check_hlds__simplify__common__UnifyMode_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UnifyMode_25, 0) = ((MR_Box) (check_hlds__simplify__common__ToVarMode_13));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UnifyMode_25, 1) = ((MR_Box) (check_hlds__simplify__common__Var_40));
        }
        {
          check_hlds__simplify__common__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Var_44, 0) = ((MR_Box) (check_hlds__simplify__common__FromVar_12));
        }
        {
          check_hlds__simplify__common__Var_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), check_hlds__simplify__common__Var_45, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
          MR_hl_field(MR_mktag(2), check_hlds__simplify__common__Var_45, 1) = ((MR_Box) (check_hlds__simplify__common__FromVar_12));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__simplify__common__GoalExpr_15 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__Var_44));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__simplify__common__UnifyMode_25));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__simplify__common__Var_45));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (&check_hlds__simplify__common_scalar_common_1[10]));
        }
      }
    else
      {
        MR_Word check_hlds__simplify__common__Modes_27;
        MR_Word check_hlds__simplify__common__Var_46;
        MR_Word check_hlds__simplify__common__Var_48;
        MR_Word check_hlds__simplify__common__Var_49;
        MR_Word check_hlds__simplify__common__Var_54;
        MR_Word check_hlds__simplify__common__Var_55;

        {
          check_hlds__simplify__common__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Var_46, 0) = ((MR_Box) (check_hlds__simplify__common__ToVarFinal_24));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Var_46, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarFinal_24));
        }
        {
          check_hlds__simplify__common__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Var_49, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarFinal_24));
        }
        {
          check_hlds__simplify__common__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_48, 0) = ((MR_Box) (check_hlds__simplify__common__Var_49));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__simplify__common__Modes_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Modes_27, 0) = ((MR_Box) (check_hlds__simplify__common__Var_46));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Modes_27, 1) = ((MR_Box) (check_hlds__simplify__common__Var_48));
        }
        {
          check_hlds__simplify__common__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_55, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__simplify__common__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_54, 0) = ((MR_Box) (check_hlds__simplify__common__FromVar_12));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_54, 1) = ((MR_Box) (check_hlds__simplify__common__Var_55));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__simplify__common__GoalExpr_15 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_7[1])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__common__Var_54));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__simplify__common__Modes_27));
          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Integer) 0));
        }
      }
    {
      check_hlds__simplify__common__Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Var_60, 0) = ((MR_Box) (check_hlds__simplify__common__ToVar_11));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Var_60, 1) = ((MR_Box) (check_hlds__simplify__common__ToVarFinal_24));
    }
    {
      check_hlds__simplify__common__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_59, 0) = ((MR_Box) (check_hlds__simplify__common__Var_60));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__common__InstMapDelta_28 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__common__Var_59);
    }
    {
      hlds__hlds_goal__goal_info_init_5_p_0(check_hlds__simplify__common__NonLocals_22, check_hlds__simplify__common__InstMapDelta_28, (MR_Integer) 0, (MR_Integer) 0, &check_hlds__simplify__common__GoalInfo0_29);
    }
    {
      check_hlds__simplify__common__Context_30 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__common__OldGoalInfo_14);
    }
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__simplify__common__Context_30, check_hlds__simplify__common__GoalInfo0_29, check_hlds__simplify__common__GoalInfo_16);
    }
    check_hlds__simplify__common__VarEqv0_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_31, (MR_Integer) 0)));
    check_hlds__simplify__common__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_31, (MR_Integer) 1)));
    check_hlds__simplify__common__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_31, (MR_Integer) 2)));
    check_hlds__simplify__common__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_31, (MR_Integer) 3)));
    {
      mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__ToVar_11)), ((MR_Box) (check_hlds__simplify__common__FromVar_12)), check_hlds__simplify__common__VarEqv0_71, &check_hlds__simplify__common__VarEqv_72);
    }
    check_hlds__simplify__common__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_31, (MR_Integer) 0)));
    check_hlds__simplify__common__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_31, (MR_Integer) 1)));
    check_hlds__simplify__common__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_31, (MR_Integer) 2)));
    check_hlds__simplify__common__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_31, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__common__STATE_VARIABLE_Common_32 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_72));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__Var_78));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__Var_79));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__Var_80));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__common__create_output_unifications_9_p_0(
  MR_Word check_hlds__simplify__common__OldGoalInfo_10,
  MR_Word check_hlds__simplify__common__OutputArgs_11,
  MR_Word check_hlds__simplify__common__OldOutputArgs_12,
  MR_Word check_hlds__simplify__common__FromToInsts_13,
  MR_Word * check_hlds__simplify__common__AssignGoals_14,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_27,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_28,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_29,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_30)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__OutputArgs_11)) == (MR_mktag((MR_Integer) 1)));
        MR_Word check_hlds__simplify__common__HeadOutputArg_17;
        MR_Word check_hlds__simplify__common__TailOutputArgs_18;
        MR_Word check_hlds__simplify__common__HeadOldOutputArg_19;
        MR_Word check_hlds__simplify__common__TailOldOutputArgs_20;
        MR_Word check_hlds__simplify__common__HeadFromToInsts_21;
        MR_Word check_hlds__simplify__common__TailFromToInsts_22;

        if (check_hlds__simplify__common__succeeded)
          {
            check_hlds__simplify__common__HeadOutputArg_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__OutputArgs_11, (MR_Integer) 0)));
            check_hlds__simplify__common__TailOutputArgs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__OutputArgs_11, (MR_Integer) 1)));
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__OldOutputArgs_12)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__simplify__common__succeeded)
              {
                check_hlds__simplify__common__HeadOldOutputArg_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__OldOutputArgs_12, (MR_Integer) 0)));
                check_hlds__simplify__common__TailOldOutputArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__OldOutputArgs_12, (MR_Integer) 1)));
                check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__FromToInsts_13)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__simplify__common__succeeded)
                  {
                    check_hlds__simplify__common__HeadFromToInsts_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__FromToInsts_13, (MR_Integer) 0)));
                    check_hlds__simplify__common__TailFromToInsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__FromToInsts_13, (MR_Integer) 1)));
                  }
              }
          }
        if (check_hlds__simplify__common__succeeded)
          {
            {
              check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__HeadOutputArg_17)), ((MR_Box) (check_hlds__simplify__common__HeadOldOutputArg_19)));
            }
            if (check_hlds__simplify__common__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__simplify__common__next_value_of_OutputArgs_11 = check_hlds__simplify__common__TailOutputArgs_18;
                  MR_Word check_hlds__simplify__common__next_value_of_OldOutputArgs_12 = check_hlds__simplify__common__TailOldOutputArgs_20;
                  MR_Word check_hlds__simplify__common__next_value_of_FromToInsts_13 = check_hlds__simplify__common__TailFromToInsts_22;

                  check_hlds__simplify__common__FromToInsts_13 = check_hlds__simplify__common__next_value_of_FromToInsts_13;
                  check_hlds__simplify__common__OldOutputArgs_12 = check_hlds__simplify__common__next_value_of_OldOutputArgs_12;
                  check_hlds__simplify__common__OutputArgs_11 = check_hlds__simplify__common__next_value_of_OutputArgs_11;
                }
                continue;
              }
            else
              {
                MR_Word check_hlds__simplify__common__HeadAssignGoalExpr_23;
                MR_Word check_hlds__simplify__common__HeadAssignGoalInfo_24;
                MR_Word check_hlds__simplify__common__HeadAssignGoal_25;
                MR_Word check_hlds__simplify__common__TailAssignGoals_26;
                MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_33_33;
                MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_34_34;

                {
                  check_hlds__simplify__common__generate_assign_10_p_0(check_hlds__simplify__common__HeadOutputArg_17, check_hlds__simplify__common__HeadOldOutputArg_19, check_hlds__simplify__common__HeadFromToInsts_21, check_hlds__simplify__common__OldGoalInfo_10, &check_hlds__simplify__common__HeadAssignGoalExpr_23, &check_hlds__simplify__common__HeadAssignGoalInfo_24, check_hlds__simplify__common__STATE_VARIABLE_Common_0_27, &check_hlds__simplify__common__STATE_VARIABLE_Common_33_33, check_hlds__simplify__common__STATE_VARIABLE_Info_0_29, &check_hlds__simplify__common__STATE_VARIABLE_Info_34_34);
                }
                {
                  check_hlds__simplify__common__HeadAssignGoal_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadAssignGoal_25, 0) = ((MR_Box) (check_hlds__simplify__common__HeadAssignGoalExpr_23));
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__HeadAssignGoal_25, 1) = ((MR_Box) (check_hlds__simplify__common__HeadAssignGoalInfo_24));
                }
                {
                  check_hlds__simplify__common__create_output_unifications_9_p_0(check_hlds__simplify__common__OldGoalInfo_10, check_hlds__simplify__common__TailOutputArgs_18, check_hlds__simplify__common__TailOldOutputArgs_20, check_hlds__simplify__common__TailFromToInsts_22, &check_hlds__simplify__common__TailAssignGoals_26, check_hlds__simplify__common__STATE_VARIABLE_Common_33_33, check_hlds__simplify__common__STATE_VARIABLE_Common_28, check_hlds__simplify__common__STATE_VARIABLE_Info_34_34, check_hlds__simplify__common__STATE_VARIABLE_Info_30);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__simplify__common__AssignGoals_14 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__HeadAssignGoal_25));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__TailAssignGoals_26));
                }
              }
          }
        else
          {
            check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__OutputArgs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (check_hlds__simplify__common__succeeded)
              {
                check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__OldOutputArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (check_hlds__simplify__common__succeeded)
                  check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__FromToInsts_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            if (check_hlds__simplify__common__succeeded)
              *check_hlds__simplify__common__AssignGoals_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.create_output_unifications\'/9", (MR_String) "mode mismatch");
                  return;
                }
              }
            *check_hlds__simplify__common__STATE_VARIABLE_Info_30 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_29;
            *check_hlds__simplify__common__STATE_VARIABLE_Common_28 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_27;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__simplify__common__common_var_lists_are_equiv_3_p_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__common__succeeded;

        if ((check_hlds__simplify__common__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        else
          {
            MR_Word check_hlds__simplify__common__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__common__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__common__Y_7;
            MR_Word check_hlds__simplify__common__Ys_8;

            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__simplify__common__succeeded)
              {
                check_hlds__simplify__common__Y_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__simplify__common__Ys_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
                {
                  {
                    check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__X_5)), ((MR_Box) (check_hlds__simplify__common__Y_7)));
                  }
                }
                if (!(check_hlds__simplify__common__succeeded))
                  {
                    MR_Word check_hlds__simplify__common__TypeInfo_8_14 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
                    MR_Integer check_hlds__simplify__common__Id_13;
                    MR_Integer check_hlds__simplify__common__Var_15;

                    {
                      check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_14, check_hlds__simplify__common__HeadVar__3_3, ((MR_Box) (check_hlds__simplify__common__X_5)), &check_hlds__simplify__common__Id_13);
                    }
                    if (check_hlds__simplify__common__succeeded)
                      {
                        {
                          check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_14, check_hlds__simplify__common__HeadVar__3_3, ((MR_Box) (check_hlds__simplify__common__Y_7)), &check_hlds__simplify__common__Var_15);
                        }
                        if (check_hlds__simplify__common__succeeded)
                          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Id_13 == check_hlds__simplify__common__Var_15);
                      }
                  }
                if (check_hlds__simplify__common__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word check_hlds__simplify__common__next_value_of_HeadVar__1_1 = check_hlds__simplify__common__Xs_6;
                      MR_Word check_hlds__simplify__common__next_value_of_HeadVar__2_2 = check_hlds__simplify__common__Ys_8;

                      check_hlds__simplify__common__HeadVar__2_2 = check_hlds__simplify__common__next_value_of_HeadVar__2_2;
                      check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__next_value_of_HeadVar__1_1;
                    }
                    continue;
                  }
              }
          }
        return check_hlds__simplify__common__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__simplify__common__find_previous_call_5_p_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__InputArgs_8,
  MR_Word check_hlds__simplify__common__Eqv_9,
  MR_Word * check_hlds__simplify__common__OutputArgs_10,
  MR_Word * check_hlds__simplify__common__PrevContext_11)
{
  {
    MR_bool check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word check_hlds__simplify__common__SeenCall_6;
    MR_Word check_hlds__simplify__common__SeenCalls_7;
    MR_Word check_hlds__simplify__common__InputArgs1_12;
    MR_Word check_hlds__simplify__common__OutputArgs1_13;

    if (check_hlds__simplify__common__succeeded)
      {
        check_hlds__simplify__common__SeenCall_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
        check_hlds__simplify__common__SeenCalls_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
        *check_hlds__simplify__common__PrevContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__SeenCall_6, (MR_Integer) 0)));
        check_hlds__simplify__common__InputArgs1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__SeenCall_6, (MR_Integer) 1)));
        check_hlds__simplify__common__OutputArgs1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__SeenCall_6, (MR_Integer) 2)));
        {
          check_hlds__simplify__common__succeeded = check_hlds__simplify__common__common_var_lists_are_equiv_3_p_0(check_hlds__simplify__common__InputArgs_8, check_hlds__simplify__common__InputArgs1_12, check_hlds__simplify__common__Eqv_9);
        }
        if (check_hlds__simplify__common__succeeded)
          {
            *check_hlds__simplify__common__OutputArgs_10 = check_hlds__simplify__common__OutputArgs1_13;
            check_hlds__simplify__common__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__simplify__common__Var_14;

            {
              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__find_previous_call_5_p_0(check_hlds__simplify__common__SeenCalls_7, check_hlds__simplify__common__InputArgs_8, check_hlds__simplify__common__Eqv_9, check_hlds__simplify__common__OutputArgs_10, &check_hlds__simplify__common__Var_14);
            }
            if (check_hlds__simplify__common__succeeded)
              {
                check_hlds__simplify__common__succeeded = mercury__term____Unify____context_0_0(*check_hlds__simplify__common__PrevContext_11, check_hlds__simplify__common__Var_14);
              }
          }
      }
    return check_hlds__simplify__common__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common__partition_call_args_7_p_0(
  MR_Word check_hlds__simplify__common__VarTypes_1,
  MR_Word check_hlds__simplify__common__ModuleInfo_2,
  MR_Word check_hlds__simplify__common__HeadVar__3_3,
  MR_Word check_hlds__simplify__common__HeadVar__4_4,
  MR_Word * check_hlds__simplify__common__HeadVar__5_5,
  MR_Word * check_hlds__simplify__common__HeadVar__6_6,
  MR_Word * check_hlds__simplify__common__HeadVar__7_7)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;

    if ((check_hlds__simplify__common__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        if ((check_hlds__simplify__common__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__simplify__common__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *check_hlds__simplify__common__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *check_hlds__simplify__common__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.partition_call_args\'/7", (MR_String) "length mismatch (1)");
            }
          }
        check_hlds__simplify__common__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word check_hlds__simplify__common__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__common__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__3_3, (MR_Integer) 0)));

        if ((check_hlds__simplify__common__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.common", (MR_String) "predicate \140check_hlds.simplify.common.partition_call_args\'/7", (MR_String) "length mismatch (2)");
            }
            check_hlds__simplify__common__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__simplify__common__Arg_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__common__Args_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__common__InputArgs1_39;
            MR_Word check_hlds__simplify__common__OutputArgs1_40;
            MR_Word check_hlds__simplify__common__OutputModes1_41;
            MR_Word check_hlds__simplify__common__InitialInst_42;
            MR_Word check_hlds__simplify__common__FinalInst_43;
            MR_Word check_hlds__simplify__common__Type_44;

            {
              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__partition_call_args_7_p_0(check_hlds__simplify__common__VarTypes_1, check_hlds__simplify__common__ModuleInfo_2, check_hlds__simplify__common__Var_46, check_hlds__simplify__common__Args_35, &check_hlds__simplify__common__InputArgs1_39, &check_hlds__simplify__common__OutputArgs1_40, &check_hlds__simplify__common__OutputModes1_41);
            }
            if (check_hlds__simplify__common__succeeded)
              {
                {
                  check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__simplify__common__ModuleInfo_2, check_hlds__simplify__common__Var_47, &check_hlds__simplify__common__InitialInst_42, &check_hlds__simplify__common__FinalInst_43);
                }
                {
                  hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_1, check_hlds__simplify__common__Arg_34, &check_hlds__simplify__common__Type_44);
                }
                {
                  check_hlds__simplify__common__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(check_hlds__simplify__common__InitialInst_42, check_hlds__simplify__common__FinalInst_43, check_hlds__simplify__common__Type_44, check_hlds__simplify__common__ModuleInfo_2);
                }
                if (check_hlds__simplify__common__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__simplify__common__HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__Arg_34));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__InputArgs1_39));
                    }
                    *check_hlds__simplify__common__HeadVar__6_6 = check_hlds__simplify__common__OutputArgs1_40;
                    *check_hlds__simplify__common__HeadVar__7_7 = check_hlds__simplify__common__OutputModes1_41;
                    check_hlds__simplify__common__succeeded = MR_TRUE;
                  }
                else
                  {
                    {
                      check_hlds__simplify__common__succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(check_hlds__simplify__common__ModuleInfo_2, check_hlds__simplify__common__FinalInst_43);
                    }
                    if (check_hlds__simplify__common__succeeded)
                      {
                        {
                          check_hlds__simplify__common__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(check_hlds__simplify__common__FinalInst_43, check_hlds__simplify__common__FinalInst_43, check_hlds__simplify__common__Type_44, check_hlds__simplify__common__ModuleInfo_2);
                        }
                        if (check_hlds__simplify__common__succeeded)
                          {
                            {
                              check_hlds__simplify__common__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__simplify__common__ModuleInfo_2, check_hlds__simplify__common__InitialInst_42);
                            }
                            if (check_hlds__simplify__common__succeeded)
                              {
                                *check_hlds__simplify__common__HeadVar__5_5 = check_hlds__simplify__common__InputArgs1_39;
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  *check_hlds__simplify__common__HeadVar__6_6 = base;
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__Arg_34));
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__OutputArgs1_40));
                                }
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  *check_hlds__simplify__common__HeadVar__7_7 = base;
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__Var_47));
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__common__OutputModes1_41));
                                }
                                check_hlds__simplify__common__succeeded = MR_TRUE;
                              }
                          }
                      }
                  }
              }
          }
      }
    return check_hlds__simplify__common__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common__common_optimise_call_2_11_p_0_1(
  MR_Box check_hlds__simplify__common__closure_arg,
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
  MR_Box * check_hlds__simplify__common__wrapper_arg_2)
{
  {
    MR_Box check_hlds__simplify__common__closure = check_hlds__simplify__common__closure_arg;
    MR_Word check_hlds__simplify__common__conv1_HeadVar__3_3;

    {
      check_hlds__mode_util__mode_get_from_to_insts_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__simplify__common__wrapper_arg_1), &check_hlds__simplify__common__conv1_HeadVar__3_3);
    }
    *check_hlds__simplify__common__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__common__conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__simplify__common__common_optimise_call_2_11_p_0(
  MR_Word check_hlds__simplify__common__SeenCall_12,
  MR_Word check_hlds__simplify__common__InputArgs_13,
  MR_Word check_hlds__simplify__common__OutputArgs_14,
  MR_Word check_hlds__simplify__common__Modes_15,
  MR_Word check_hlds__simplify__common__GoalInfo_16,
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
  MR_Word * check_hlds__simplify__common__MaybeAssignsGoalExpr_18,
  MR_Word check_hlds__simplify__common__Common0_19,
  MR_Word * check_hlds__simplify__common__Common_20,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_49)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Word check_hlds__simplify__common__Eqv0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__common__SeenCalls0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__common__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__common__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__common__SeenCallsList0_24;
    MR_Box check_hlds__simplify__common__conv0_SeenCallsList0_24;

    {
      check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[2], check_hlds__simplify__common__SeenCalls0_23, ((MR_Box) (check_hlds__simplify__common__SeenCall_12)), &check_hlds__simplify__common__conv0_SeenCallsList0_24);
    }
    if (check_hlds__simplify__common__succeeded)
      {
        check_hlds__simplify__common__SeenCallsList0_24 = ((MR_Word) check_hlds__simplify__common__conv0_SeenCallsList0_24);
        check_hlds__simplify__common__succeeded = MR_TRUE;
      }
    if (check_hlds__simplify__common__succeeded)
      {
        MR_Word check_hlds__simplify__common__OutputArgs2_25;
        MR_Word check_hlds__simplify__common__PrevContext_26;

        {
          check_hlds__simplify__common__succeeded = check_hlds__simplify__common__find_previous_call_5_p_0(check_hlds__simplify__common__SeenCallsList0_24, check_hlds__simplify__common__InputArgs_13, check_hlds__simplify__common__Eqv0_22, &check_hlds__simplify__common__OutputArgs2_25, &check_hlds__simplify__common__PrevContext_26);
        }
        if (check_hlds__simplify__common__succeeded)
          {
            MR_Word check_hlds__simplify__common__ModuleInfo_27;
            MR_Word check_hlds__simplify__common__FromToInsts_28;
            MR_Word check_hlds__simplify__common__AssignGoals_29;
            MR_Word check_hlds__simplify__common__AssignsGoalExpr_32;
            MR_Word check_hlds__simplify__common__VarTypes_33;
            MR_Integer check_hlds__simplify__common__Cost_44;
            MR_Word check_hlds__simplify__common__Detism0_45;
            MR_Word check_hlds__simplify__common__Var_50;
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_51_51;
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_97_97;
            MR_Word check_hlds__simplify__common__Var_98;
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_99_99;
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_100_100;
            MR_Word check_hlds__simplify__common__OnlyGoalExpr_30;
            MR_Word check_hlds__simplify__common__Var_52;
            MR_Word check_hlds__simplify__common__Var_53;
            MR_Word check_hlds__simplify__common___OnlyGoalInfo_31;
            MR_Word check_hlds__simplify__common__OutputArgTypes1_34;
            MR_Word check_hlds__simplify__common__OutputArgTypes2_35;

            {
              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__ModuleInfo_27);
            }
            {
              check_hlds__simplify__common__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Var_50, 0) = ((MR_Box) (&check_hlds__simplify__common_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Var_50, 1) = ((MR_Box) (check_hlds__simplify__common__common_optimise_call_2_11_p_0_1));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Var_50, 3) = ((MR_Box) (check_hlds__simplify__common__ModuleInfo_27));
            }
            {
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0, check_hlds__simplify__common__Var_50, check_hlds__simplify__common__Modes_15, &check_hlds__simplify__common__FromToInsts_28);
            }
            {
              check_hlds__simplify__common__create_output_unifications_9_p_0(check_hlds__simplify__common__GoalInfo_16, check_hlds__simplify__common__OutputArgs_14, check_hlds__simplify__common__OutputArgs2_25, check_hlds__simplify__common__FromToInsts_28, &check_hlds__simplify__common__AssignGoals_29, check_hlds__simplify__common__Common0_19, check_hlds__simplify__common__Common_20, check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__STATE_VARIABLE_Info_51_51);
            }
            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__AssignGoals_29)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__simplify__common__succeeded)
              {
                check_hlds__simplify__common__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__AssignGoals_29, (MR_Integer) 0)));
                check_hlds__simplify__common__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__AssignGoals_29, (MR_Integer) 1)));
                check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Var_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (check_hlds__simplify__common__succeeded)
                  {
                    check_hlds__simplify__common__OnlyGoalExpr_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Var_52, (MR_Integer) 0)));
                    check_hlds__simplify__common___OnlyGoalInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Var_52, (MR_Integer) 1)));
                    check_hlds__simplify__common__succeeded = MR_TRUE;
                  }
              }
            if (check_hlds__simplify__common__succeeded)
              check_hlds__simplify__common__AssignsGoalExpr_32 = check_hlds__simplify__common__OnlyGoalExpr_30;
            else
              {
                {
                  check_hlds__simplify__common__AssignsGoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__common__AssignsGoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__common__AssignsGoalExpr_32, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__common__AssignsGoalExpr_32, 2) = ((MR_Box) (check_hlds__simplify__common__AssignGoals_29));
                }
              }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__simplify__common__MaybeAssignsGoalExpr_18 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__common__AssignsGoalExpr_32));
            }
            {
              check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_51_51, &check_hlds__simplify__common__VarTypes_33);
            }
            {
              check_hlds__simplify__common__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_duplicate_calls_1_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_51_51);
            }
            if (check_hlds__simplify__common__succeeded)
              {
                {
                  hlds__vartypes__lookup_var_types_3_p_0(check_hlds__simplify__common__VarTypes_33, check_hlds__simplify__common__OutputArgs_14, &check_hlds__simplify__common__OutputArgTypes1_34);
                }
                {
                  hlds__vartypes__lookup_var_types_3_p_0(check_hlds__simplify__common__VarTypes_33, check_hlds__simplify__common__OutputArgs2_25, &check_hlds__simplify__common__OutputArgTypes2_35);
                }
                {
                  check_hlds__simplify__common__succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(check_hlds__simplify__common__OutputArgTypes1_34, check_hlds__simplify__common__OutputArgTypes2_35);
                }
              }
            if (check_hlds__simplify__common__succeeded)
              {
                MR_Word check_hlds__simplify__common__TypeCtorInfo_129_129;
                MR_Word check_hlds__simplify__common__Context_36;
                MR_Word check_hlds__simplify__common__CallPieces_37;
                MR_Word check_hlds__simplify__common__CurPieces_38;
                MR_Word check_hlds__simplify__common__PrevPieces_39;
                MR_Word check_hlds__simplify__common__Msg_41;
                MR_Word check_hlds__simplify__common__PrevMsg_42;
                MR_Word check_hlds__simplify__common__Spec_43;
                MR_Word check_hlds__simplify__common__Var_55;
                MR_Word check_hlds__simplify__common__Var_58;
                MR_Word check_hlds__simplify__common__Var_62;
                MR_Word check_hlds__simplify__common__Var_73;
                MR_Word check_hlds__simplify__common__Var_74;
                MR_Word check_hlds__simplify__common__Var_77;
                MR_Word check_hlds__simplify__common__Var_78;
                MR_Word check_hlds__simplify__common__Var_81;
                MR_Word check_hlds__simplify__common__Var_84;
                MR_Word check_hlds__simplify__common__Var_85;
                MR_Word check_hlds__simplify__common__Var_88;
                MR_Word check_hlds__simplify__common__Var_89;
                MR_Word check_hlds__simplify__common__Var_94;
                MR_Word check_hlds__simplify__common__Var_95;

                {
                  check_hlds__simplify__common__Context_36 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__common__GoalInfo_16);
                }
                {
                  check_hlds__simplify__common__CallPieces_37 = check_hlds__det_report__det_report_seen_call_id_2_f_0(check_hlds__simplify__common__ModuleInfo_27, check_hlds__simplify__common__SeenCall_12);
                }
                check_hlds__simplify__common__TypeCtorInfo_129_129 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                {
                  check_hlds__simplify__common__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_1[6])));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_55, 1) = ((MR_Box) (check_hlds__simplify__common__CallPieces_37));
                }
                check_hlds__simplify__common__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__common_scalar_common_1[8]);
                {
                  check_hlds__simplify__common__CurPieces_38 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__common__TypeCtorInfo_129_129, check_hlds__simplify__common__Var_55, check_hlds__simplify__common__Var_58);
                }
                {
                  check_hlds__simplify__common__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_1[9])));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_62, 1) = ((MR_Box) (check_hlds__simplify__common__CallPieces_37));
                }
                {
                  check_hlds__simplify__common__PrevPieces_39 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__common__TypeCtorInfo_129_129, check_hlds__simplify__common__Var_62, check_hlds__simplify__common__Var_58);
                }
                {
                  check_hlds__simplify__common__Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Var_78, 0) = ((MR_Box) (check_hlds__simplify__common__CurPieces_38));
                }
                {
                  check_hlds__simplify__common__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_77, 0) = ((MR_Box) (check_hlds__simplify__common__Var_78));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__simplify__common__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_74, 0) = ((MR_Box) (((MR_Integer) 25 | (((MR_Integer) 1 << (MR_Integer) 10)))));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_74, 1) = ((MR_Box) (check_hlds__simplify__common__Var_77));
                }
                {
                  check_hlds__simplify__common__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_73, 0) = ((MR_Box) (check_hlds__simplify__common__Var_74));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__simplify__common__Msg_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Msg_41, 0) = ((MR_Box) (check_hlds__simplify__common__Context_36));
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Msg_41, 1) = ((MR_Box) (check_hlds__simplify__common__Var_73));
                }
                {
                  check_hlds__simplify__common__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_81, 0) = ((MR_Box) (check_hlds__simplify__common__PrevContext_26));
                }
                {
                  check_hlds__simplify__common__Var_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Var_89, 0) = ((MR_Box) (check_hlds__simplify__common__PrevPieces_39));
                }
                {
                  check_hlds__simplify__common__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_88, 0) = ((MR_Box) (check_hlds__simplify__common__Var_89));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__simplify__common__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_85, 0) = ((MR_Box) (((MR_Integer) 25 | (((MR_Integer) 1 << (MR_Integer) 10)))));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_85, 1) = ((MR_Box) (check_hlds__simplify__common__Var_88));
                }
                {
                  check_hlds__simplify__common__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_84, 0) = ((MR_Box) (check_hlds__simplify__common__Var_85));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__simplify__common__PrevMsg_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__PrevMsg_42, 0) = ((MR_Box) (check_hlds__simplify__common__Var_81));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__PrevMsg_42, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__PrevMsg_42, 2) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__PrevMsg_42, 3) = ((MR_Box) (check_hlds__simplify__common__Var_84));
                }
                {
                  check_hlds__simplify__common__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_95, 0) = ((MR_Box) (check_hlds__simplify__common__PrevMsg_42));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__simplify__common__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_94, 0) = ((MR_Box) (check_hlds__simplify__common__Msg_41));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_94, 1) = ((MR_Box) (check_hlds__simplify__common__Var_95));
                }
                {
                  check_hlds__simplify__common__Spec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Spec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__common_scalar_common_3[0])));
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Spec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__common_scalar_common_7[0])));
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Spec_43, 2) = ((MR_Box) (check_hlds__simplify__common__Var_94));
                }
                {
                  check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(check_hlds__simplify__common__Spec_43, check_hlds__simplify__common__STATE_VARIABLE_Info_51_51, &check_hlds__simplify__common__STATE_VARIABLE_Info_97_97);
                }
              }
            else
              check_hlds__simplify__common__STATE_VARIABLE_Info_97_97 = check_hlds__simplify__common__STATE_VARIABLE_Info_51_51;
            {
              check_hlds__simplify__common__Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Var_98, 0) = ((MR_Box) (check_hlds__simplify__common__GoalExpr0_17));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Var_98, 1) = ((MR_Box) (check_hlds__simplify__common__GoalInfo_16));
            }
            {
              transform_hlds__pd_cost__goal_cost_2_p_0(check_hlds__simplify__common__Var_98, &check_hlds__simplify__common__Cost_44);
            }
            {
              check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__common__Cost_44, check_hlds__simplify__common__STATE_VARIABLE_Info_97_97, &check_hlds__simplify__common__STATE_VARIABLE_Info_99_99);
            }
            {
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_99_99, &check_hlds__simplify__common__STATE_VARIABLE_Info_100_100);
            }
            {
              check_hlds__simplify__common__Detism0_45 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__common__GoalInfo_16);
            }
            switch (check_hlds__simplify__common__Detism0_45) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 4:
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 1:
                {
                  check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_100_100, check_hlds__simplify__common__STATE_VARIABLE_Info_49);
                }
                break;
              case (MR_Integer) 0:
                *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_100_100;
                break;
            }
          }
        else
          {
            MR_Word check_hlds__simplify__common__ThisCall_46;
            MR_Word check_hlds__simplify__common__SeenCalls_47;
            MR_Word check_hlds__simplify__common__Var_102;
            MR_Word check_hlds__simplify__common__Context_105;
            MR_Word check_hlds__simplify__common__Var_115;
            MR_Word check_hlds__simplify__common__Var_116;
            MR_Word check_hlds__simplify__common__Var_117;
            MR_Word check_hlds__simplify__common__Var_118;

            {
              check_hlds__simplify__common__Context_105 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__common__GoalInfo_16);
            }
            {
              check_hlds__simplify__common__ThisCall_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_46, 0) = ((MR_Box) (check_hlds__simplify__common__Context_105));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_46, 1) = ((MR_Box) (check_hlds__simplify__common__InputArgs_13));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_46, 2) = ((MR_Box) (check_hlds__simplify__common__OutputArgs_14));
            }
            {
              check_hlds__simplify__common__Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_102, 0) = ((MR_Box) (check_hlds__simplify__common__ThisCall_46));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_102, 1) = ((MR_Box) (check_hlds__simplify__common__SeenCallsList0_24));
            }
            {
              mercury__map__det_update_4_p_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[2], ((MR_Box) (check_hlds__simplify__common__SeenCall_12)), ((MR_Box) (check_hlds__simplify__common__Var_102)), check_hlds__simplify__common__SeenCalls0_23, &check_hlds__simplify__common__SeenCalls_47);
            }
            check_hlds__simplify__common__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 0)));
            check_hlds__simplify__common__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 1)));
            check_hlds__simplify__common__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 2)));
            check_hlds__simplify__common__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 3)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *check_hlds__simplify__common__Common_20 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__Var_115));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__Var_116));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__Var_117));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__SeenCalls_47));
            }
            *check_hlds__simplify__common__MaybeAssignsGoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
          }
      }
    else
      {
        MR_Word check_hlds__simplify__common__Var_103;
        MR_Word check_hlds__simplify__common__Context_106;
        MR_Word check_hlds__simplify__common__ThisCall_107;
        MR_Word check_hlds__simplify__common__SeenCalls_108;
        MR_Word check_hlds__simplify__common__Var_119;
        MR_Word check_hlds__simplify__common__Var_120;
        MR_Word check_hlds__simplify__common__Var_121;
        MR_Word check_hlds__simplify__common__Var_122;

        {
          check_hlds__simplify__common__Context_106 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__common__GoalInfo_16);
        }
        {
          check_hlds__simplify__common__ThisCall_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_107, 0) = ((MR_Box) (check_hlds__simplify__common__Context_106));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_107, 1) = ((MR_Box) (check_hlds__simplify__common__InputArgs_13));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__common__ThisCall_107, 2) = ((MR_Box) (check_hlds__simplify__common__OutputArgs_14));
        }
        {
          check_hlds__simplify__common__Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_103, 0) = ((MR_Box) (check_hlds__simplify__common__ThisCall_107));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[2], ((MR_Box) (check_hlds__simplify__common__SeenCall_12)), ((MR_Box) (check_hlds__simplify__common__Var_103)), check_hlds__simplify__common__SeenCalls0_23, &check_hlds__simplify__common__SeenCalls_108);
        }
        check_hlds__simplify__common__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 0)));
        check_hlds__simplify__common__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 1)));
        check_hlds__simplify__common__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 2)));
        check_hlds__simplify__common__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Common0_19, (MR_Integer) 3)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__simplify__common__Common_20 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__Var_119));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__Var_120));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__Var_121));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__SeenCalls_108));
        }
        *check_hlds__simplify__common__MaybeAssignsGoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
      }
  }
}

static void MR_CALL 
check_hlds__simplify__common__do_record_cell_in_struct_map_5_p_0(
  MR_Word check_hlds__simplify__common__TypeCtor_6,
  MR_Word check_hlds__simplify__common__ConsId_7,
  MR_Word check_hlds__simplify__common__Struct_8,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_StructMap_15)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Word check_hlds__simplify__common__ConsIdMap0_10;
    MR_Box check_hlds__simplify__common__conv0_ConsIdMap0_10;

    {
      check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14, ((MR_Box) (check_hlds__simplify__common__TypeCtor_6)), &check_hlds__simplify__common__conv0_ConsIdMap0_10);
    }
    if (check_hlds__simplify__common__succeeded)
      {
        check_hlds__simplify__common__ConsIdMap0_10 = ((MR_Word) check_hlds__simplify__common__conv0_ConsIdMap0_10);
        check_hlds__simplify__common__succeeded = MR_TRUE;
      }
    if (check_hlds__simplify__common__succeeded)
      {
        MR_Word check_hlds__simplify__common__ConsIdMap_13;
        MR_Word check_hlds__simplify__common__Structs0_11;
        MR_Box check_hlds__simplify__common__conv1_Structs0_11;

        {
          check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], check_hlds__simplify__common__ConsIdMap0_10, ((MR_Box) (check_hlds__simplify__common__ConsId_7)), &check_hlds__simplify__common__conv1_Structs0_11);
        }
        if (check_hlds__simplify__common__succeeded)
          {
            check_hlds__simplify__common__Structs0_11 = ((MR_Word) check_hlds__simplify__common__conv1_Structs0_11);
            check_hlds__simplify__common__succeeded = MR_TRUE;
          }
        if (check_hlds__simplify__common__succeeded)
          {
            MR_Word check_hlds__simplify__common__Structs_12;

            {
              check_hlds__simplify__common__Structs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Structs_12, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_8));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Structs_12, 1) = ((MR_Box) (check_hlds__simplify__common__Structs0_11));
            }
            {
              mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_7)), ((MR_Box) (check_hlds__simplify__common__Structs_12)), check_hlds__simplify__common__ConsIdMap0_10, &check_hlds__simplify__common__ConsIdMap_13);
            }
          }
        else
          {
            MR_Word check_hlds__simplify__common__Var_16;

            {
              check_hlds__simplify__common__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_16, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_8));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_7)), ((MR_Box) (check_hlds__simplify__common__Var_16)), check_hlds__simplify__common__ConsIdMap0_10, &check_hlds__simplify__common__ConsIdMap_13);
            }
          }
        {
          mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__TypeCtor_6)), ((MR_Box) (check_hlds__simplify__common__ConsIdMap_13)), check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14, check_hlds__simplify__common__STATE_VARIABLE_StructMap_15);
        }
      }
    else
      {
        MR_Word check_hlds__simplify__common__Var_19;
        MR_Word check_hlds__simplify__common__ConsIdMap_22;

        {
          check_hlds__simplify__common__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_19, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_8));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__simplify__common__ConsIdMap_22 = mercury__map__singleton_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_7)), ((MR_Box) (check_hlds__simplify__common__Var_19)));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__TypeCtor_6)), ((MR_Box) (check_hlds__simplify__common__ConsIdMap_22)), check_hlds__simplify__common__STATE_VARIABLE_StructMap_0_14, check_hlds__simplify__common__STATE_VARIABLE_StructMap_15);
        }
      }
  }
}

static void MR_CALL 
check_hlds__simplify__common__record_cell_in_maps_6_p_0(
  MR_Word check_hlds__simplify__common__TypeCtor_7,
  MR_Word check_hlds__simplify__common__ConsId_8,
  MR_Word check_hlds__simplify__common__Struct_9,
  MR_Word check_hlds__simplify__common__VarEqv_10,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_16,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_17)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Word check_hlds__simplify__common__AllStructMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__common__SinceCallStructMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__common__AllStructMap_14;
    MR_Word check_hlds__simplify__common__SinceCallStructMap_15;
    MR_Word check_hlds__simplify__common__Var_30;
    MR_Word check_hlds__simplify__common__Var_31;
    MR_Word check_hlds__simplify__common__Var_34;
    MR_Word check_hlds__simplify__common__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__common__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__common__ConsIdMap0_45;
    MR_Box check_hlds__simplify__common__conv0_ConsIdMap0_45;
    MR_Word check_hlds__simplify__common__Var_27;
    MR_Word check_hlds__simplify__common__Var_28;
    MR_Word check_hlds__simplify__common__Var_29;

    {
      check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], check_hlds__simplify__common__AllStructMap0_12, ((MR_Box) (check_hlds__simplify__common__TypeCtor_7)), &check_hlds__simplify__common__conv0_ConsIdMap0_45);
    }
    if (check_hlds__simplify__common__succeeded)
      {
        check_hlds__simplify__common__ConsIdMap0_45 = ((MR_Word) check_hlds__simplify__common__conv0_ConsIdMap0_45);
        check_hlds__simplify__common__succeeded = MR_TRUE;
      }
    if (check_hlds__simplify__common__succeeded)
      {
        MR_Word check_hlds__simplify__common__ConsIdMap_48;
        MR_Word check_hlds__simplify__common__Structs0_46;
        MR_Box check_hlds__simplify__common__conv1_Structs0_46;

        {
          check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], check_hlds__simplify__common__ConsIdMap0_45, ((MR_Box) (check_hlds__simplify__common__ConsId_8)), &check_hlds__simplify__common__conv1_Structs0_46);
        }
        if (check_hlds__simplify__common__succeeded)
          {
            check_hlds__simplify__common__Structs0_46 = ((MR_Word) check_hlds__simplify__common__conv1_Structs0_46);
            check_hlds__simplify__common__succeeded = MR_TRUE;
          }
        if (check_hlds__simplify__common__succeeded)
          {
            MR_Word check_hlds__simplify__common__Structs_47;

            {
              check_hlds__simplify__common__Structs_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Structs_47, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_9));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Structs_47, 1) = ((MR_Box) (check_hlds__simplify__common__Structs0_46));
            }
            {
              mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_8)), ((MR_Box) (check_hlds__simplify__common__Structs_47)), check_hlds__simplify__common__ConsIdMap0_45, &check_hlds__simplify__common__ConsIdMap_48);
            }
          }
        else
          {
            MR_Word check_hlds__simplify__common__Var_49;

            {
              check_hlds__simplify__common__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_49, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_9));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_8)), ((MR_Box) (check_hlds__simplify__common__Var_49)), check_hlds__simplify__common__ConsIdMap0_45, &check_hlds__simplify__common__ConsIdMap_48);
            }
          }
        {
          mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__TypeCtor_7)), ((MR_Box) (check_hlds__simplify__common__ConsIdMap_48)), check_hlds__simplify__common__AllStructMap0_12, &check_hlds__simplify__common__AllStructMap_14);
        }
      }
    else
      {
        MR_Word check_hlds__simplify__common__Var_52;
        MR_Word check_hlds__simplify__common__ConsIdMap_55;

        {
          check_hlds__simplify__common__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_52, 0) = ((MR_Box) (check_hlds__simplify__common__Struct_9));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__simplify__common__ConsIdMap_55 = mercury__map__singleton_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__common__ConsId_8)), ((MR_Box) (check_hlds__simplify__common__Var_52)));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__common__TypeCtor_7)), ((MR_Box) (check_hlds__simplify__common__ConsIdMap_55)), check_hlds__simplify__common__AllStructMap0_12, &check_hlds__simplify__common__AllStructMap_14);
        }
      }
    {
      check_hlds__simplify__common__do_record_cell_in_struct_map_5_p_0(check_hlds__simplify__common__TypeCtor_7, check_hlds__simplify__common__ConsId_8, check_hlds__simplify__common__Struct_9, check_hlds__simplify__common__SinceCallStructMap0_13, &check_hlds__simplify__common__SinceCallStructMap_15);
    }
    check_hlds__simplify__common__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 0)));
    check_hlds__simplify__common__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 1)));
    check_hlds__simplify__common__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 2)));
    check_hlds__simplify__common__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_16, (MR_Integer) 3)));
    check_hlds__simplify__common__Var_31 = check_hlds__simplify__common__VarEqv_10;
    check_hlds__simplify__common__Var_34 = check_hlds__simplify__common__Var_30;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__common__STATE_VARIABLE_Common_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__Var_31));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__AllStructMap_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__SinceCallStructMap_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__Var_34));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common__ids_vars_match_3_p_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__HeadVar__2_2,
  MR_Word check_hlds__simplify__common__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__common__succeeded;

        if ((check_hlds__simplify__common__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        else
          {
            MR_Word check_hlds__simplify__common__TypeInfo_8_14;
            MR_Integer check_hlds__simplify__common__Id_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__common__Ids_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__common__Var_7;
            MR_Word check_hlds__simplify__common__Vars_8;
            MR_Integer check_hlds__simplify__common__VarId_13;

            check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__simplify__common__succeeded)
              {
                check_hlds__simplify__common__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__simplify__common__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__2_2, (MR_Integer) 1)));
                check_hlds__simplify__common__TypeInfo_8_14 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
                {
                  check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_14, check_hlds__simplify__common__HeadVar__3_3, ((MR_Box) (check_hlds__simplify__common__Var_7)), &check_hlds__simplify__common__VarId_13);
                }
                if (check_hlds__simplify__common__succeeded)
                  {
                    check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Id_5 == check_hlds__simplify__common__VarId_13);
                    if (check_hlds__simplify__common__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__simplify__common__next_value_of_HeadVar__1_1 = check_hlds__simplify__common__Ids_6;
                          MR_Word check_hlds__simplify__common__next_value_of_HeadVar__2_2 = check_hlds__simplify__common__Vars_8;

                          check_hlds__simplify__common__HeadVar__2_2 = check_hlds__simplify__common__next_value_of_HeadVar__2_2;
                          check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                  }
              }
          }
        return check_hlds__simplify__common__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_deconstruct_4_p_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__VarEqv_7,
  MR_Integer check_hlds__simplify__common__VarId_8,
  MR_Word * check_hlds__simplify__common__Match_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word check_hlds__simplify__common__Struct_5;
        MR_Word check_hlds__simplify__common__Structs_6;
        MR_Word check_hlds__simplify__common__Var_10;
        MR_Word check_hlds__simplify__common___Vars_11;
        MR_Word check_hlds__simplify__common__TypeInfo_8_16;
        MR_Integer check_hlds__simplify__common__VarId_15;

        if (check_hlds__simplify__common__succeeded)
          {
            check_hlds__simplify__common__Struct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
            check_hlds__simplify__common__Structs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
            check_hlds__simplify__common__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_5, (MR_Integer) 0)));
            check_hlds__simplify__common___Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_5, (MR_Integer) 1)));
            check_hlds__simplify__common__TypeInfo_8_16 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
            {
              check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_16, check_hlds__simplify__common__VarEqv_7, ((MR_Box) (check_hlds__simplify__common__Var_10)), &check_hlds__simplify__common__VarId_15);
            }
            if (check_hlds__simplify__common__succeeded)
              check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__VarId_8 == check_hlds__simplify__common__VarId_15);
            if (check_hlds__simplify__common__succeeded)
              {
                *check_hlds__simplify__common__Match_9 = check_hlds__simplify__common__Struct_5;
                check_hlds__simplify__common__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__simplify__common__next_value_of_HeadVar__1_1 = check_hlds__simplify__common__Structs_6;

                  check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return check_hlds__simplify__common__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__simplify__common__find_matching_cell_construct_4_p_0(
  MR_Word check_hlds__simplify__common__HeadVar__1_1,
  MR_Word check_hlds__simplify__common__VarEqv_7,
  MR_Word check_hlds__simplify__common__ArgVarIds_8,
  MR_Word * check_hlds__simplify__common__Match_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word check_hlds__simplify__common__Struct_5;
        MR_Word check_hlds__simplify__common__Structs_6;
        MR_Word check_hlds__simplify__common__Vars_11;
        MR_Word check_hlds__simplify__common___Var_10;

        if (check_hlds__simplify__common__succeeded)
          {
            check_hlds__simplify__common__Struct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 0)));
            check_hlds__simplify__common__Structs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__HeadVar__1_1, (MR_Integer) 1)));
            check_hlds__simplify__common___Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_5, (MR_Integer) 0)));
            check_hlds__simplify__common__Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_5, (MR_Integer) 1)));
            {
              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__ids_vars_match_3_p_0(check_hlds__simplify__common__ArgVarIds_8, check_hlds__simplify__common__Vars_11, check_hlds__simplify__common__VarEqv_7);
            }
            if (check_hlds__simplify__common__succeeded)
              {
                *check_hlds__simplify__common__Match_9 = check_hlds__simplify__common__Struct_5;
                check_hlds__simplify__common__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__simplify__common__next_value_of_HeadVar__1_1 = check_hlds__simplify__common__Structs_6;

                  check_hlds__simplify__common__HeadVar__1_1 = check_hlds__simplify__common__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return check_hlds__simplify__common__succeeded;
      }
      break;
    }
}

static MR_Box MR_CALL 
check_hlds__simplify__common__common_optimise_deconstruct_14_p_0_1(
  MR_Box check_hlds__simplify__common__closure_arg,
  MR_Box check_hlds__simplify__common__wrapper_arg_1)
{
  {
    MR_Box check_hlds__simplify__common__wrapper_arg_2;
    MR_Box check_hlds__simplify__common__closure = check_hlds__simplify__common__closure_arg;
    MR_Word check_hlds__simplify__common__conv2_HeadVar__2_2;

    {
      check_hlds__simplify__common__conv2_HeadVar__2_2 = check_hlds__mode_util__unify_modes_to_rhs_from_to_insts_1_f_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1));
    }
    check_hlds__simplify__common__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__common__conv2_HeadVar__2_2));
    return check_hlds__simplify__common__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__simplify__common__common_optimise_deconstruct_14_p_0(
  MR_Word check_hlds__simplify__common__Var_15,
  MR_Word check_hlds__simplify__common__ConsId_16,
  MR_Word check_hlds__simplify__common__ArgVars_17,
  MR_Word check_hlds__simplify__common__ArgModes_18,
  MR_Word check_hlds__simplify__common__CanFail_19,
  MR_Word check_hlds__simplify__common__UnifyMode_20,
  MR_Word check_hlds__simplify__common__GoalExpr0_21,
  MR_Word * check_hlds__simplify__common__GoalExpr_22,
  MR_Word check_hlds__simplify__common__GoalInfo0_23,
  MR_Word * check_hlds__simplify__common__GoalInfo_24,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_47,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_48,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_49,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_50)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Word check_hlds__simplify__common__ModuleInfo_27;
    MR_Word check_hlds__simplify__common__LVarMode_28;
    MR_Word check_hlds__simplify__common__LVarInitInst_30;
    MR_Word check_hlds__simplify__common___RVarMode_29;
    MR_Word check_hlds__simplify__common__Var_31;

    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_49, &check_hlds__simplify__common__ModuleInfo_27);
    }
    *check_hlds__simplify__common__GoalInfo_24 = check_hlds__simplify__common__GoalInfo0_23;
    check_hlds__simplify__common__LVarMode_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UnifyMode_20, (MR_Integer) 0)));
    check_hlds__simplify__common___RVarMode_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UnifyMode_20, (MR_Integer) 1)));
    check_hlds__simplify__common__LVarInitInst_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__LVarMode_28, (MR_Integer) 0)));
    check_hlds__simplify__common__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__LVarMode_28, (MR_Integer) 1)));
    {
      check_hlds__simplify__common__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__simplify__common__ModuleInfo_27, check_hlds__simplify__common__LVarInitInst_30);
    }
    check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
    if (check_hlds__simplify__common__succeeded)
      {
        *check_hlds__simplify__common__GoalExpr_22 = check_hlds__simplify__common__GoalExpr0_21;
        *check_hlds__simplify__common__STATE_VARIABLE_Info_50 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_49;
        *check_hlds__simplify__common__STATE_VARIABLE_Common_48 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_47;
      }
    else
      {
        MR_Word check_hlds__simplify__common__TypeInfo_73_73;
        MR_Word check_hlds__simplify__common__TypeCtor_32;
        MR_Word check_hlds__simplify__common__VarEqv0_33;
        MR_Integer check_hlds__simplify__common__VarId_34;
        MR_Word check_hlds__simplify__common__VarEqv1_35;
        MR_Word check_hlds__simplify__common__SinceCallStructMap0_36;
        MR_Word check_hlds__simplify__common__VarTypes_85;
        MR_Word check_hlds__simplify__common__Type_86;
        MR_Word check_hlds__simplify__common__Var_63;
        MR_Word check_hlds__simplify__common__Var_64;
        MR_Word check_hlds__simplify__common__Var_65;
        MR_Word check_hlds__simplify__common__Var_66;
        MR_Word check_hlds__simplify__common__Var_67;
        MR_Word check_hlds__simplify__common__Var_68;
        MR_Word check_hlds__simplify__common__OldStruct_39;
        MR_Word check_hlds__simplify__common__TypeCtorInfo_74_74;
        MR_Word check_hlds__simplify__common__TypeInfo_75_75;
        MR_Word check_hlds__simplify__common__TypeCtorInfo_76_76;
        MR_Word check_hlds__simplify__common__TypeInfo_77_77;
        MR_Word check_hlds__simplify__common__ConsIdMap0_37;
        MR_Word check_hlds__simplify__common__Structs_38;
        MR_Word check_hlds__simplify__common__Var_52;
        MR_Box check_hlds__simplify__common__conv0_ConsIdMap0_37;
        MR_Box check_hlds__simplify__common__conv1_Structs_38;

        {
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_49, &check_hlds__simplify__common__VarTypes_85);
        }
        {
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_85, check_hlds__simplify__common__Var_15, &check_hlds__simplify__common__Type_86);
        }
        {
          parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__simplify__common__Type_86, &check_hlds__simplify__common__TypeCtor_32);
        }
        check_hlds__simplify__common__VarEqv0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_47, (MR_Integer) 0)));
        check_hlds__simplify__common__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_47, (MR_Integer) 1)));
        check_hlds__simplify__common__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_47, (MR_Integer) 2)));
        check_hlds__simplify__common__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_47, (MR_Integer) 3)));
        check_hlds__simplify__common__TypeInfo_73_73 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
        {
          mercury__eqvclass__ensure_element_partition_id_4_p_0(check_hlds__simplify__common__TypeInfo_73_73, ((MR_Box) (check_hlds__simplify__common__Var_15)), &check_hlds__simplify__common__VarId_34, check_hlds__simplify__common__VarEqv0_33, &check_hlds__simplify__common__VarEqv1_35);
        }
        check_hlds__simplify__common__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_47, (MR_Integer) 0)));
        check_hlds__simplify__common__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_47, (MR_Integer) 1)));
        check_hlds__simplify__common__SinceCallStructMap0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_47, (MR_Integer) 2)));
        check_hlds__simplify__common__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_47, (MR_Integer) 3)));
        {
          check_hlds__simplify__common__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(*check_hlds__simplify__common__GoalInfo_24, (MR_Integer) 3);
        }
        check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
        if (check_hlds__simplify__common__succeeded)
          {
            check_hlds__simplify__common__Var_52 = (MR_Integer) 4;
            {
              check_hlds__simplify__common__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(*check_hlds__simplify__common__GoalInfo_24, check_hlds__simplify__common__Var_52);
            }
            check_hlds__simplify__common__succeeded = !(check_hlds__simplify__common__succeeded);
            if (check_hlds__simplify__common__succeeded)
              {
                check_hlds__simplify__common__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
                check_hlds__simplify__common__TypeInfo_75_75 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[0];
                {
                  check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__common__TypeCtorInfo_74_74, check_hlds__simplify__common__TypeInfo_75_75, check_hlds__simplify__common__SinceCallStructMap0_36, ((MR_Box) (check_hlds__simplify__common__TypeCtor_32)), &check_hlds__simplify__common__conv0_ConsIdMap0_37);
                }
                if (check_hlds__simplify__common__succeeded)
                  {
                    check_hlds__simplify__common__ConsIdMap0_37 = ((MR_Word) check_hlds__simplify__common__conv0_ConsIdMap0_37);
                    check_hlds__simplify__common__succeeded = MR_TRUE;
                  }
                if (check_hlds__simplify__common__succeeded)
                  {
                    check_hlds__simplify__common__TypeCtorInfo_76_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
                    check_hlds__simplify__common__TypeInfo_77_77 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[1];
                    {
                      check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__common__TypeCtorInfo_76_76, check_hlds__simplify__common__TypeInfo_77_77, check_hlds__simplify__common__ConsIdMap0_37, ((MR_Box) (check_hlds__simplify__common__ConsId_16)), &check_hlds__simplify__common__conv1_Structs_38);
                    }
                    if (check_hlds__simplify__common__succeeded)
                      {
                        check_hlds__simplify__common__Structs_38 = ((MR_Word) check_hlds__simplify__common__conv1_Structs_38);
                        check_hlds__simplify__common__succeeded = MR_TRUE;
                      }
                    if (check_hlds__simplify__common__succeeded)
                      {
                        check_hlds__simplify__common__succeeded = check_hlds__simplify__common__find_matching_cell_deconstruct_4_p_0(check_hlds__simplify__common__Structs_38, check_hlds__simplify__common__VarEqv1_35, check_hlds__simplify__common__VarId_34, &check_hlds__simplify__common__OldStruct_39);
                      }
                  }
              }
          }
        if (check_hlds__simplify__common__succeeded)
          {
            MR_Word check_hlds__simplify__common__OldArgVars_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__OldStruct_39, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__common__VarEqv_42;
            MR_Word check_hlds__simplify__common__RHSFromToInsts_43;
            MR_Word check_hlds__simplify__common__Goals_44;
            MR_Integer check_hlds__simplify__common__Cost_45;
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_53_53;
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_56_56;
            MR_Word check_hlds__simplify__common__Var_58;
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_59_59;
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_60_60;
            MR_Word check_hlds__simplify__common__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__OldStruct_39, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__common__Var_70;
            MR_Word check_hlds__simplify__common__Var_71;
            MR_Word check_hlds__simplify__common__Var_72;
            MR_Word check_hlds__simplify__common__Var_69;

            {
              mercury__eqvclass__ensure_corresponding_equivalences_4_p_0(check_hlds__simplify__common__TypeInfo_73_73, check_hlds__simplify__common__ArgVars_17, check_hlds__simplify__common__OldArgVars_41, check_hlds__simplify__common__VarEqv1_35, &check_hlds__simplify__common__VarEqv_42);
            }
            check_hlds__simplify__common__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_47, (MR_Integer) 0)));
            check_hlds__simplify__common__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_47, (MR_Integer) 1)));
            check_hlds__simplify__common__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_47, (MR_Integer) 2)));
            check_hlds__simplify__common__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_47, (MR_Integer) 3)));
            {
              check_hlds__simplify__common__STATE_VARIABLE_Common_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_53_53, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_42));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_53_53, 1) = ((MR_Box) (check_hlds__simplify__common__Var_70));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_53_53, 2) = ((MR_Box) (check_hlds__simplify__common__Var_71));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_53_53, 3) = ((MR_Box) (check_hlds__simplify__common__Var_72));
            }
            {
              check_hlds__simplify__common__RHSFromToInsts_43 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[4], check_hlds__simplify__common__ArgModes_18);
            }
            {
              check_hlds__simplify__common__create_output_unifications_9_p_0(check_hlds__simplify__common__GoalInfo0_23, check_hlds__simplify__common__ArgVars_17, check_hlds__simplify__common__OldArgVars_41, check_hlds__simplify__common__RHSFromToInsts_43, &check_hlds__simplify__common__Goals_44, check_hlds__simplify__common__STATE_VARIABLE_Common_53_53, check_hlds__simplify__common__STATE_VARIABLE_Common_48, check_hlds__simplify__common__STATE_VARIABLE_Info_0_49, &check_hlds__simplify__common__STATE_VARIABLE_Info_56_56);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__simplify__common__GoalExpr_22 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__common__Goals_44));
            }
            {
              check_hlds__simplify__common__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Var_58, 0) = ((MR_Box) (check_hlds__simplify__common__GoalExpr0_21));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Var_58, 1) = ((MR_Box) (check_hlds__simplify__common__GoalInfo0_23));
            }
            {
              transform_hlds__pd_cost__goal_cost_2_p_0(check_hlds__simplify__common__Var_58, &check_hlds__simplify__common__Cost_45);
            }
            {
              check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__common__Cost_45, check_hlds__simplify__common__STATE_VARIABLE_Info_56_56, &check_hlds__simplify__common__STATE_VARIABLE_Info_59_59);
            }
            {
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_59_59, &check_hlds__simplify__common__STATE_VARIABLE_Info_60_60);
            }
            switch (check_hlds__simplify__common__CanFail_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_60_60, check_hlds__simplify__common__STATE_VARIABLE_Info_50);
                }
                break;
              case (MR_Integer) 1:
                *check_hlds__simplify__common__STATE_VARIABLE_Info_50 = check_hlds__simplify__common__STATE_VARIABLE_Info_60_60;
                break;
            }
          }
        else
          {
            MR_Word check_hlds__simplify__common__Struct_46;

            *check_hlds__simplify__common__GoalExpr_22 = check_hlds__simplify__common__GoalExpr0_21;
            {
              check_hlds__simplify__common__Struct_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_46, 0) = ((MR_Box) (check_hlds__simplify__common__Var_15));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_46, 1) = ((MR_Box) (check_hlds__simplify__common__ArgVars_17));
            }
            {
              check_hlds__simplify__common__record_cell_in_maps_6_p_0(check_hlds__simplify__common__TypeCtor_32, check_hlds__simplify__common__ConsId_16, check_hlds__simplify__common__Struct_46, check_hlds__simplify__common__VarEqv1_35, check_hlds__simplify__common__STATE_VARIABLE_Common_0_47, check_hlds__simplify__common__STATE_VARIABLE_Common_48);
            }
            *check_hlds__simplify__common__STATE_VARIABLE_Info_50 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_49;
          }
      }
  }
}

static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0_1(
  MR_Box check_hlds__simplify__common__closure_arg,
  MR_Box check_hlds__simplify__common__wrapper_arg_1,
  MR_Box * check_hlds__simplify__common__wrapper_arg_2,
  MR_Box check_hlds__simplify__common__wrapper_arg_3,
  MR_Box * check_hlds__simplify__common__wrapper_arg_4)
{
  {
    MR_Box check_hlds__simplify__common__closure = check_hlds__simplify__common__closure_arg;
    MR_Integer check_hlds__simplify__common__conv1_HeadVar__2_70;
    MR_Word check_hlds__simplify__common__conv0_HeadVar__4_72;

    {
      check_hlds__simplify__common__IntroducedFrom__pred__common_optimise_construct__353__1_4_p_0(((MR_Word) check_hlds__simplify__common__wrapper_arg_1), &check_hlds__simplify__common__conv1_HeadVar__2_70, ((MR_Word) check_hlds__simplify__common__wrapper_arg_3), &check_hlds__simplify__common__conv0_HeadVar__4_72);
    }
    *check_hlds__simplify__common__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__common__conv1_HeadVar__2_70));
    *check_hlds__simplify__common__wrapper_arg_4 = ((MR_Box) (check_hlds__simplify__common__conv0_HeadVar__4_72));
  }
}

static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0(
  MR_Word check_hlds__simplify__common__Var_13,
  MR_Word check_hlds__simplify__common__ConsId_14,
  MR_Word check_hlds__simplify__common__ArgVars_15,
  MR_Word check_hlds__simplify__common__UnifyMode_16,
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
  MR_Word * check_hlds__simplify__common__GoalExpr_18,
  MR_Word check_hlds__simplify__common__GoalInfo0_19,
  MR_Word * check_hlds__simplify__common__GoalInfo_20,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_46,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_47,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_48,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_49)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Word check_hlds__simplify__common__LVarMode_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UnifyMode_16, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__common__ModuleInfo_25;
    MR_Word check_hlds__simplify__common__LVarFinalInst_27;
    MR_Word check_hlds__simplify__common___RVarMode_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__UnifyMode_16, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__common__Var_26;

    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__ModuleInfo_25);
    }
    check_hlds__simplify__common__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__LVarMode_23, (MR_Integer) 0)));
    check_hlds__simplify__common__LVarFinalInst_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__LVarMode_23, (MR_Integer) 1)));
    {
      check_hlds__simplify__common__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__simplify__common__ModuleInfo_25, check_hlds__simplify__common__LVarFinalInst_27);
    }
    if (check_hlds__simplify__common__succeeded)
      {
        MR_Word check_hlds__simplify__common__TypeInfo_74_74;
        MR_Word check_hlds__simplify__common__TypeCtor_28;
        MR_Word check_hlds__simplify__common__VarEqv0_29;
        MR_Word check_hlds__simplify__common__ArgVarIds_30;
        MR_Word check_hlds__simplify__common__VarEqv1_31;
        MR_Word check_hlds__simplify__common__AllStructMap0_32;
        MR_Word check_hlds__simplify__common__VarTypes_84;
        MR_Word check_hlds__simplify__common__Type_85;
        MR_Word check_hlds__simplify__common__Var_59;
        MR_Word check_hlds__simplify__common__Var_60;
        MR_Word check_hlds__simplify__common__Var_61;
        MR_Box check_hlds__simplify__common__conv2_VarEqv1_31;
        MR_Word check_hlds__simplify__common__Var_62;
        MR_Word check_hlds__simplify__common__Var_63;
        MR_Word check_hlds__simplify__common__Var_64;
        MR_Word check_hlds__simplify__common__OldStruct_37;
        MR_Word check_hlds__simplify__common__TypeCtorInfo_77_77;
        MR_Word check_hlds__simplify__common__TypeInfo_78_78;
        MR_Word check_hlds__simplify__common__TypeCtorInfo_79_79;
        MR_Word check_hlds__simplify__common__TypeInfo_80_80;
        MR_Word check_hlds__simplify__common__InstMapDelta_33;
        MR_Word check_hlds__simplify__common__ConsIdMap0_35;
        MR_Word check_hlds__simplify__common__Structs_36;
        MR_Word check_hlds__simplify__common__Var_34;
        MR_Box check_hlds__simplify__common__conv3_ConsIdMap0_35;
        MR_Box check_hlds__simplify__common__conv4_Structs_36;

        {
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__VarTypes_84);
        }
        {
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__common__VarTypes_84, check_hlds__simplify__common__Var_13, &check_hlds__simplify__common__Type_85);
        }
        {
          parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__simplify__common__Type_85, &check_hlds__simplify__common__TypeCtor_28);
        }
        check_hlds__simplify__common__VarEqv0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
        check_hlds__simplify__common__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
        check_hlds__simplify__common__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
        check_hlds__simplify__common__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
        check_hlds__simplify__common__TypeInfo_74_74 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
        {
          mercury__list__map_foldl_5_p_0(check_hlds__simplify__common__TypeInfo_74_74, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[3], (MR_Word) &check_hlds__simplify__common_scalar_common_2[3], check_hlds__simplify__common__ArgVars_15, &check_hlds__simplify__common__ArgVarIds_30, ((MR_Box) (check_hlds__simplify__common__VarEqv0_29)), &check_hlds__simplify__common__conv2_VarEqv1_31);
        }
        check_hlds__simplify__common__VarEqv1_31 = ((MR_Word) check_hlds__simplify__common__conv2_VarEqv1_31);
        check_hlds__simplify__common__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
        check_hlds__simplify__common__AllStructMap0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
        check_hlds__simplify__common__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
        check_hlds__simplify__common__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
        {
          check_hlds__simplify__common__InstMapDelta_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__common__GoalInfo0_19);
        }
        {
          check_hlds__simplify__common__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(check_hlds__simplify__common__InstMapDelta_33, check_hlds__simplify__common__Var_13, &check_hlds__simplify__common__Var_34);
        }
        if (check_hlds__simplify__common__succeeded)
          {
            check_hlds__simplify__common__TypeCtorInfo_77_77 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
            check_hlds__simplify__common__TypeInfo_78_78 = (MR_Word) &check_hlds__simplify__common_scalar_common_2[0];
            {
              check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__common__TypeCtorInfo_77_77, check_hlds__simplify__common__TypeInfo_78_78, check_hlds__simplify__common__AllStructMap0_32, ((MR_Box) (check_hlds__simplify__common__TypeCtor_28)), &check_hlds__simplify__common__conv3_ConsIdMap0_35);
            }
            if (check_hlds__simplify__common__succeeded)
              {
                check_hlds__simplify__common__ConsIdMap0_35 = ((MR_Word) check_hlds__simplify__common__conv3_ConsIdMap0_35);
                check_hlds__simplify__common__succeeded = MR_TRUE;
              }
            if (check_hlds__simplify__common__succeeded)
              {
                check_hlds__simplify__common__TypeCtorInfo_79_79 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
                check_hlds__simplify__common__TypeInfo_80_80 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[1];
                {
                  check_hlds__simplify__common__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__common__TypeCtorInfo_79_79, check_hlds__simplify__common__TypeInfo_80_80, check_hlds__simplify__common__ConsIdMap0_35, ((MR_Box) (check_hlds__simplify__common__ConsId_14)), &check_hlds__simplify__common__conv4_Structs_36);
                }
                if (check_hlds__simplify__common__succeeded)
                  {
                    check_hlds__simplify__common__Structs_36 = ((MR_Word) check_hlds__simplify__common__conv4_Structs_36);
                    check_hlds__simplify__common__succeeded = MR_TRUE;
                  }
                if (check_hlds__simplify__common__succeeded)
                  {
                    check_hlds__simplify__common__succeeded = check_hlds__simplify__common__find_matching_cell_construct_4_p_0(check_hlds__simplify__common__Structs_36, check_hlds__simplify__common__VarEqv1_31, check_hlds__simplify__common__ArgVarIds_30, &check_hlds__simplify__common__OldStruct_37);
                  }
              }
          }
        if (check_hlds__simplify__common__succeeded)
          {
            MR_Word check_hlds__simplify__common__OldVar_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__OldStruct_37, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__common__VarEqv_40;
            MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_51_51;
            MR_Word check_hlds__simplify__common__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__OldStruct_37, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__common__Var_66;
            MR_Word check_hlds__simplify__common__Var_67;
            MR_Word check_hlds__simplify__common__Var_68;
            MR_Word check_hlds__simplify__common__Var_65;

            {
              mercury__eqvclass__ensure_equivalence_4_p_0(check_hlds__simplify__common__TypeInfo_74_74, ((MR_Box) (check_hlds__simplify__common__Var_13)), ((MR_Box) (check_hlds__simplify__common__OldVar_38)), check_hlds__simplify__common__VarEqv1_31, &check_hlds__simplify__common__VarEqv_40);
            }
            check_hlds__simplify__common__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 0)));
            check_hlds__simplify__common__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 1)));
            check_hlds__simplify__common__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 2)));
            check_hlds__simplify__common__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, (MR_Integer) 3)));
            {
              check_hlds__simplify__common__STATE_VARIABLE_Common_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_40));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, 1) = ((MR_Box) (check_hlds__simplify__common__Var_66));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, 2) = ((MR_Box) (check_hlds__simplify__common__Var_67));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, 3) = ((MR_Box) (check_hlds__simplify__common__Var_68));
            }
            if ((check_hlds__simplify__common__ArgVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *check_hlds__simplify__common__GoalExpr_18 = check_hlds__simplify__common__GoalExpr0_17;
                *check_hlds__simplify__common__GoalInfo_20 = check_hlds__simplify__common__GoalInfo0_19;
                *check_hlds__simplify__common__STATE_VARIABLE_Common_47 = check_hlds__simplify__common__STATE_VARIABLE_Common_51_51;
                *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
              }
            else
              {
                MR_Word check_hlds__simplify__common__VarFromToInsts_43;
                MR_Integer check_hlds__simplify__common__Cost_44;
                MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_54_54;
                MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_55_55;
                MR_Word check_hlds__simplify__common__Var_56;

                {
                  check_hlds__simplify__common__VarFromToInsts_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__VarFromToInsts_43, 0) = ((MR_Box) (check_hlds__simplify__common__LVarFinalInst_27));
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__VarFromToInsts_43, 1) = ((MR_Box) (check_hlds__simplify__common__LVarFinalInst_27));
                }
                {
                  check_hlds__simplify__common__generate_assign_10_p_0(check_hlds__simplify__common__Var_13, check_hlds__simplify__common__OldVar_38, check_hlds__simplify__common__VarFromToInsts_43, check_hlds__simplify__common__GoalInfo0_19, check_hlds__simplify__common__GoalExpr_18, check_hlds__simplify__common__GoalInfo_20, check_hlds__simplify__common__STATE_VARIABLE_Common_51_51, check_hlds__simplify__common__STATE_VARIABLE_Common_47, check_hlds__simplify__common__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__common__STATE_VARIABLE_Info_54_54);
                }
                {
                  check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_54_54, &check_hlds__simplify__common__STATE_VARIABLE_Info_55_55);
                }
                {
                  check_hlds__simplify__common__Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Var_56, 0) = ((MR_Box) (check_hlds__simplify__common__GoalExpr0_17));
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Var_56, 1) = ((MR_Box) (check_hlds__simplify__common__GoalInfo0_19));
                }
                {
                  transform_hlds__pd_cost__goal_cost_2_p_0(check_hlds__simplify__common__Var_56, &check_hlds__simplify__common__Cost_44);
                }
                {
                  check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__common__Cost_44, check_hlds__simplify__common__STATE_VARIABLE_Info_55_55, check_hlds__simplify__common__STATE_VARIABLE_Info_49);
                }
              }
          }
        else
          {
            MR_Word check_hlds__simplify__common__Struct_45;

            *check_hlds__simplify__common__GoalExpr_18 = check_hlds__simplify__common__GoalExpr0_17;
            *check_hlds__simplify__common__GoalInfo_20 = check_hlds__simplify__common__GoalInfo0_19;
            {
              check_hlds__simplify__common__Struct_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_45, 0) = ((MR_Box) (check_hlds__simplify__common__Var_13));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Struct_45, 1) = ((MR_Box) (check_hlds__simplify__common__ArgVars_15));
            }
            {
              check_hlds__simplify__common__record_cell_in_maps_6_p_0(check_hlds__simplify__common__TypeCtor_28, check_hlds__simplify__common__ConsId_14, check_hlds__simplify__common__Struct_45, check_hlds__simplify__common__VarEqv1_31, check_hlds__simplify__common__STATE_VARIABLE_Common_0_46, check_hlds__simplify__common__STATE_VARIABLE_Common_47);
            }
            *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
          }
      }
    else
      {
        *check_hlds__simplify__common__GoalExpr_18 = check_hlds__simplify__common__GoalExpr0_17;
        *check_hlds__simplify__common__GoalInfo_20 = check_hlds__simplify__common__GoalInfo0_19;
        *check_hlds__simplify__common__STATE_VARIABLE_Info_49 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_48;
        *check_hlds__simplify__common__STATE_VARIABLE_Common_47 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_46;
      }
  }
}

void MR_CALL 
check_hlds__simplify__common__common_info_clear_structs_2_p_0(
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_5)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Word check_hlds__simplify__common__Var_7;
    MR_Word check_hlds__simplify__common__Var_8;
    MR_Word check_hlds__simplify__common__Var_9;
    MR_Word check_hlds__simplify__common__Var_11;
    MR_Word check_hlds__simplify__common__Var_10;

    {
      check_hlds__simplify__common__Var_7 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0]);
    }
    check_hlds__simplify__common__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
    check_hlds__simplify__common__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
    check_hlds__simplify__common__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
    check_hlds__simplify__common__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__common__STATE_VARIABLE_Info_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__Var_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__Var_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__Var_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__Var_11));
    }
  }
}

MR_Word MR_CALL 
check_hlds__simplify__common__common_info_init_0_f_0(void)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Word check_hlds__simplify__common__CommonInfo_2;
    MR_Word check_hlds__simplify__common__VarEqv0_3;
    MR_Word check_hlds__simplify__common__StructMap0_4;
    MR_Word check_hlds__simplify__common__SeenCalls0_5;

    {
      mercury__eqvclass__init_1_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], &check_hlds__simplify__common__VarEqv0_3);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__simplify__common_scalar_common_2[0], &check_hlds__simplify__common__StructMap0_4);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0, (MR_Word) &check_hlds__simplify__common_scalar_common_1[2], &check_hlds__simplify__common__SeenCalls0_5);
    }
    {
      check_hlds__simplify__common__CommonInfo_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_2, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv0_3));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_2, 1) = ((MR_Box) (check_hlds__simplify__common__StructMap0_4));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_2, 2) = ((MR_Box) (check_hlds__simplify__common__StructMap0_4));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_2, 3) = ((MR_Box) (check_hlds__simplify__common__SeenCalls0_5));
    }
    return check_hlds__simplify__common__CommonInfo_2;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__common__common_vars_are_equivalent_3_p_0(
  MR_Word check_hlds__simplify__common__X_4,
  MR_Word check_hlds__simplify__common__Y_5,
  MR_Word check_hlds__simplify__common__CommonInfo_6)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;
    MR_Word check_hlds__simplify__common__EqvVars_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_6, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__common__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_6, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__common__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_6, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__common__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__CommonInfo_6, (MR_Integer) 3)));

    {
      check_hlds__simplify__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__X_4)), ((MR_Box) (check_hlds__simplify__common__Y_5)));
    }
    if (!(check_hlds__simplify__common__succeeded))
      {
        MR_Word check_hlds__simplify__common__TypeInfo_8_15 = (MR_Word) &check_hlds__simplify__common_scalar_common_1[0];
        MR_Integer check_hlds__simplify__common__Id_14;
        MR_Integer check_hlds__simplify__common__Var_16;

        {
          check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_15, check_hlds__simplify__common__EqvVars_7, ((MR_Box) (check_hlds__simplify__common__X_4)), &check_hlds__simplify__common__Id_14);
        }
        if (check_hlds__simplify__common__succeeded)
          {
            {
              check_hlds__simplify__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__simplify__common__TypeInfo_8_15, check_hlds__simplify__common__EqvVars_7, ((MR_Box) (check_hlds__simplify__common__Y_5)), &check_hlds__simplify__common__Var_16);
            }
            if (check_hlds__simplify__common__succeeded)
              check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Id_14 == check_hlds__simplify__common__Var_16);
          }
      }
    return check_hlds__simplify__common__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__common__common_optimise_higher_order_call_12_p_0(
  MR_Word check_hlds__simplify__common__Closure_13,
  MR_Word check_hlds__simplify__common__Args_14,
  MR_Word check_hlds__simplify__common__Modes_15,
  MR_Word check_hlds__simplify__common__Det_16,
  MR_Word check_hlds__simplify__common__Purity_17,
  MR_Word check_hlds__simplify__common__GoalInfo_18,
  MR_Word check_hlds__simplify__common__GoalExpr0_19,
  MR_Word * check_hlds__simplify__common__MaybeAssignsGoalExpr_20,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_28,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_29,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_30,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_31)
{
  {
    MR_bool check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Purity_17 == (MR_Integer) 0);
    MR_Word check_hlds__simplify__common__InputArgs_25;
    MR_Word check_hlds__simplify__common__OutputArgs_26;
    MR_Word check_hlds__simplify__common__OutputModes_27;
    MR_Word check_hlds__simplify__common__VarTypes_23;
    MR_Word check_hlds__simplify__common__ModuleInfo_24;
    MR_Word check_hlds__simplify__common__SolnCount_38;
    MR_Word check_hlds__simplify__common__Var_37;

    if (check_hlds__simplify__common__succeeded)
      {
        {
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__common__Det_16, &check_hlds__simplify__common__Var_37, &check_hlds__simplify__common__SolnCount_38);
        }
        switch (check_hlds__simplify__common__SolnCount_38) {
          default:
            check_hlds__simplify__common__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            check_hlds__simplify__common__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            check_hlds__simplify__common__succeeded = MR_TRUE;
            break;
        }
        if (check_hlds__simplify__common__succeeded)
          {
            {
              check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_30, &check_hlds__simplify__common__VarTypes_23);
            }
            {
              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_30, &check_hlds__simplify__common__ModuleInfo_24);
            }
            {
              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__partition_call_args_7_p_0(check_hlds__simplify__common__VarTypes_23, check_hlds__simplify__common__ModuleInfo_24, check_hlds__simplify__common__Modes_15, check_hlds__simplify__common__Args_14, &check_hlds__simplify__common__InputArgs_25, &check_hlds__simplify__common__OutputArgs_26, &check_hlds__simplify__common__OutputModes_27);
            }
          }
      }
    if (check_hlds__simplify__common__succeeded)
      {
        MR_Word check_hlds__simplify__common__Var_33;

        {
          check_hlds__simplify__common__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_33, 0) = ((MR_Box) (check_hlds__simplify__common__Closure_13));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_33, 1) = ((MR_Box) (check_hlds__simplify__common__InputArgs_25));
        }
        {
          check_hlds__simplify__common__common_optimise_call_2_11_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__common__Var_33, check_hlds__simplify__common__OutputArgs_26, check_hlds__simplify__common__OutputModes_27, check_hlds__simplify__common__GoalInfo_18, check_hlds__simplify__common__GoalExpr0_19, check_hlds__simplify__common__MaybeAssignsGoalExpr_20, check_hlds__simplify__common__STATE_VARIABLE_Common_0_28, check_hlds__simplify__common__STATE_VARIABLE_Common_29, check_hlds__simplify__common__STATE_VARIABLE_Info_0_30, check_hlds__simplify__common__STATE_VARIABLE_Info_31);
        }
      }
    else
      {
        *check_hlds__simplify__common__MaybeAssignsGoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__simplify__common__STATE_VARIABLE_Info_31 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_30;
        *check_hlds__simplify__common__STATE_VARIABLE_Common_29 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_28;
      }
  }
}

void MR_CALL 
check_hlds__simplify__common__common_optimise_call_11_p_0(
  MR_Word check_hlds__simplify__common__PredId_12,
  MR_Integer check_hlds__simplify__common__ProcId_13,
  MR_Word check_hlds__simplify__common__Args_14,
  MR_Word check_hlds__simplify__common__Purity_15,
  MR_Word check_hlds__simplify__common__GoalInfo_16,
  MR_Word check_hlds__simplify__common__GoalExpr0_17,
  MR_Word * check_hlds__simplify__common__MaybeAssignsGoalExpr_18,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_30,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_31,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_32,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_33)
{
  {
    MR_bool check_hlds__simplify__common__succeeded = (check_hlds__simplify__common__Purity_15 == (MR_Integer) 0);
    MR_Word check_hlds__simplify__common__InputArgs_27;
    MR_Word check_hlds__simplify__common__OutputArgs_28;
    MR_Word check_hlds__simplify__common__OutputModes_29;
    MR_Word check_hlds__simplify__common__Det_21;
    MR_Word check_hlds__simplify__common__VarTypes_22;
    MR_Word check_hlds__simplify__common__ModuleInfo_23;
    MR_Word check_hlds__simplify__common__ProcInfo_25;
    MR_Word check_hlds__simplify__common__ArgModes_26;
    MR_Word check_hlds__simplify__common__SolnCount_39;
    MR_Word check_hlds__simplify__common__Var_38;
    MR_Word check_hlds__simplify__common__Var_24;

    if (check_hlds__simplify__common__succeeded)
      {
        {
          check_hlds__simplify__common__Det_21 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__common__GoalInfo_16);
        }
        {
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__common__Det_21, &check_hlds__simplify__common__Var_38, &check_hlds__simplify__common__SolnCount_39);
        }
        switch (check_hlds__simplify__common__SolnCount_39) {
          default:
            check_hlds__simplify__common__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            check_hlds__simplify__common__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            check_hlds__simplify__common__succeeded = MR_TRUE;
            break;
        }
        if (check_hlds__simplify__common__succeeded)
          {
            {
              check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_32, &check_hlds__simplify__common__VarTypes_22);
            }
            {
              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__common__STATE_VARIABLE_Info_0_32, &check_hlds__simplify__common__ModuleInfo_23);
            }
            {
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__simplify__common__ModuleInfo_23, check_hlds__simplify__common__PredId_12, check_hlds__simplify__common__ProcId_13, &check_hlds__simplify__common__Var_24, &check_hlds__simplify__common__ProcInfo_25);
            }
            {
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__simplify__common__ProcInfo_25, &check_hlds__simplify__common__ArgModes_26);
            }
            {
              check_hlds__simplify__common__succeeded = check_hlds__simplify__common__partition_call_args_7_p_0(check_hlds__simplify__common__VarTypes_22, check_hlds__simplify__common__ModuleInfo_23, check_hlds__simplify__common__ArgModes_26, check_hlds__simplify__common__Args_14, &check_hlds__simplify__common__InputArgs_27, &check_hlds__simplify__common__OutputArgs_28, &check_hlds__simplify__common__OutputModes_29);
            }
          }
      }
    if (check_hlds__simplify__common__succeeded)
      {
        MR_Word check_hlds__simplify__common__Var_34;

        {
          check_hlds__simplify__common__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_34, 0) = ((MR_Box) (check_hlds__simplify__common__PredId_12));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Var_34, 1) = ((MR_Box) (check_hlds__simplify__common__ProcId_13));
        }
        {
          check_hlds__simplify__common__common_optimise_call_2_11_p_0(check_hlds__simplify__common__Var_34, check_hlds__simplify__common__InputArgs_27, check_hlds__simplify__common__OutputArgs_28, check_hlds__simplify__common__OutputModes_29, check_hlds__simplify__common__GoalInfo_16, check_hlds__simplify__common__GoalExpr0_17, check_hlds__simplify__common__MaybeAssignsGoalExpr_18, check_hlds__simplify__common__STATE_VARIABLE_Common_0_30, check_hlds__simplify__common__STATE_VARIABLE_Common_31, check_hlds__simplify__common__STATE_VARIABLE_Info_0_32, check_hlds__simplify__common__STATE_VARIABLE_Info_33);
        }
      }
    else
      {
        *check_hlds__simplify__common__MaybeAssignsGoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__simplify__common__STATE_VARIABLE_Info_33 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_32;
        *check_hlds__simplify__common__STATE_VARIABLE_Common_31 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_30;
      }
  }
}

void MR_CALL 
check_hlds__simplify__common__common_optimise_unification_10_p_0(
  MR_Word check_hlds__simplify__common__Unification0_11,
  MR_Word check_hlds__simplify__common__Mode_12,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Common_0_39,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Common_40,
  MR_Word check_hlds__simplify__common__STATE_VARIABLE_Info_0_41,
  MR_Word * check_hlds__simplify__common__STATE_VARIABLE_Info_42)
{
  {
    MR_bool check_hlds__simplify__common__succeeded;

    switch (MR_tag((MR_Word) check_hlds__simplify__common__Unification0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__simplify__common__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 0)));
          MR_Word check_hlds__simplify__common__ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 1)));
          MR_Word check_hlds__simplify__common__ArgVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 2)));
          MR_Word check_hlds__simplify__common__SubInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 6)));
          MR_Word check_hlds__simplify__common__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 3)));
          MR_Word check_hlds__simplify__common__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 4)));
          MR_Word check_hlds__simplify__common__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__Unification0_11, (MR_Integer) 5)));
          MR_Word check_hlds__simplify__common__MaybeTakeAddr_24;
          MR_Word check_hlds__simplify__common__Var_25;
          MR_Word check_hlds__simplify__common__Var_26;

          check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__SubInfo_23)) == (MR_mktag((MR_Integer) 1)));
          if (check_hlds__simplify__common__succeeded)
            {
              check_hlds__simplify__common__MaybeTakeAddr_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__SubInfo_23, (MR_Integer) 0)));
              check_hlds__simplify__common__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__SubInfo_23, (MR_Integer) 1)));
              check_hlds__simplify__common__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__common__MaybeTakeAddr_24)) == (MR_mktag((MR_Integer) 1)));
              if (check_hlds__simplify__common__succeeded)
                check_hlds__simplify__common__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__MaybeTakeAddr_24, (MR_Integer) 0)));
            }
          if (check_hlds__simplify__common__succeeded)
            {
              *check_hlds__simplify__common__STATE_VARIABLE_Info_42 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_41;
              *check_hlds__simplify__common__STATE_VARIABLE_Common_40 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_39;
              *check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38 = check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37;
              *check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36 = check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35;
            }
          else
            {
              check_hlds__simplify__common__common_optimise_construct_12_p_0(check_hlds__simplify__common__Var_17, check_hlds__simplify__common__ConsId_18, check_hlds__simplify__common__ArgVars_19, check_hlds__simplify__common__Mode_12, check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35, check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36, check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37, check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38, check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, check_hlds__simplify__common__STATE_VARIABLE_Common_40, check_hlds__simplify__common__STATE_VARIABLE_Info_0_41, check_hlds__simplify__common__STATE_VARIABLE_Info_42);
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__simplify__common__ArgModes_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 3)));
          MR_Word check_hlds__simplify__common__CanFail_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 4)));
          MR_Word check_hlds__simplify__common__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 0)));
          MR_Word check_hlds__simplify__common__ConsId_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 1)));
          MR_Word check_hlds__simplify__common__ArgVars_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 2)));
          MR_Word check_hlds__simplify__common__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__common__Unification0_11, (MR_Integer) 5)));

          {
            check_hlds__simplify__common__common_optimise_deconstruct_14_p_0(check_hlds__simplify__common__Var_52, check_hlds__simplify__common__ConsId_53, check_hlds__simplify__common__ArgVars_54, check_hlds__simplify__common__ArgModes_27, check_hlds__simplify__common__CanFail_28, check_hlds__simplify__common__Mode_12, check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35, check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36, check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37, check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38, check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, check_hlds__simplify__common__STATE_VARIABLE_Common_40, check_hlds__simplify__common__STATE_VARIABLE_Info_0_41, check_hlds__simplify__common__STATE_VARIABLE_Info_42);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__simplify__common__Var1_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__Unification0_11, (MR_Integer) 0)));
          MR_Word check_hlds__simplify__common__Var2_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__common__Unification0_11, (MR_Integer) 1)));
          MR_Word check_hlds__simplify__common__VarEqv0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 0)));
          MR_Word check_hlds__simplify__common__VarEqv_63;
          MR_Word check_hlds__simplify__common__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 1)));
          MR_Word check_hlds__simplify__common__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 2)));
          MR_Word check_hlds__simplify__common__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 3)));
          MR_Word check_hlds__simplify__common__Var_69;
          MR_Word check_hlds__simplify__common__Var_70;
          MR_Word check_hlds__simplify__common__Var_71;
          MR_Word check_hlds__simplify__common__Var_68;

          {
            mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__Var1_30)), ((MR_Box) (check_hlds__simplify__common__Var2_31)), check_hlds__simplify__common__VarEqv0_62, &check_hlds__simplify__common__VarEqv_63);
          }
          check_hlds__simplify__common__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 0)));
          check_hlds__simplify__common__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 1)));
          check_hlds__simplify__common__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 2)));
          check_hlds__simplify__common__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 3)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *check_hlds__simplify__common__STATE_VARIABLE_Common_40 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_63));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__Var_69));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__Var_70));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__Var_71));
          }
          *check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36 = check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35;
          *check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38 = check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37;
          *check_hlds__simplify__common__STATE_VARIABLE_Info_42 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_41;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Unification0_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__simplify__common__Var1_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Unification0_11, (MR_Integer) 1)));
              MR_Word check_hlds__simplify__common__Var2_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__common__Unification0_11, (MR_Integer) 2)));
              MR_Word check_hlds__simplify__common__VarEqv0_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 0)));
              MR_Word check_hlds__simplify__common__VarEqv_79;
              MR_Word check_hlds__simplify__common__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 1)));
              MR_Word check_hlds__simplify__common__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 2)));
              MR_Word check_hlds__simplify__common__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 3)));
              MR_Word check_hlds__simplify__common__Var_85;
              MR_Word check_hlds__simplify__common__Var_86;
              MR_Word check_hlds__simplify__common__Var_87;
              MR_Word check_hlds__simplify__common__Var_84;

              {
                mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) &check_hlds__simplify__common_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__common__Var1_55)), ((MR_Box) (check_hlds__simplify__common__Var2_56)), check_hlds__simplify__common__VarEqv0_78, &check_hlds__simplify__common__VarEqv_79);
              }
              check_hlds__simplify__common__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 0)));
              check_hlds__simplify__common__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 1)));
              check_hlds__simplify__common__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 2)));
              check_hlds__simplify__common__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__common__STATE_VARIABLE_Common_0_39, (MR_Integer) 3)));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                *check_hlds__simplify__common__STATE_VARIABLE_Common_40 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__common__VarEqv_79));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__common__Var_85));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__common__Var_86));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__common__Var_87));
              }
              *check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36 = check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35;
              *check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38 = check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37;
              *check_hlds__simplify__common__STATE_VARIABLE_Info_42 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_41;
            }
            break;
          case (MR_Integer) 1:
            {
              *check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_36 = check_hlds__simplify__common__STATE_VARIABLE_GoalExpr_0_35;
              *check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_38 = check_hlds__simplify__common__STATE_VARIABLE_GoalInfo_0_37;
              *check_hlds__simplify__common__STATE_VARIABLE_Common_40 = check_hlds__simplify__common__STATE_VARIABLE_Common_0_39;
              *check_hlds__simplify__common__STATE_VARIABLE_Info_42 = check_hlds__simplify__common__STATE_VARIABLE_Info_0_41;
            }
            break;
        }
        break;
    }
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

/* :- end_module check_hlds.simplify.common. */
