/*
** Automatically generated from `common.m'
** by the Mercury compiler,
** version 22.01-beta-2022-01-25
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
#include "edit_seq.mih"
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

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__maybe__ti_maybe_1check_hlds__simplify__common__type_ctor_info_common_struct_info_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__maybe__ti_maybe_1check_hlds__simplify__common__type_ctor_info_const_struct_info_0;

static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_common_info_0_0[2];

static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_common_info_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_common_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_common_info_0[1];

static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_common_info_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0;

static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_common_struct_info_0_0[6];

static const MR_ConstString check_hlds__simplify__common__check_hlds__simplify__common__field_names_common_struct_info_0_0[6];

static const MR_DuArgLocn check_hlds__simplify__common__check_hlds__simplify__common__field_locns_common_struct_info_0_0[6];

static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_struct_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_common_struct_info_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_common_struct_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_common_struct_info_0[1];

static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_common_struct_info_0[1];

static const MR_EnumFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__enum_functor_desc_common_struct_task_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__enum_functor_desc_common_struct_task_0_1;

static const MR_EnumFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__enum_functor_desc_common_struct_task_0_2;

static const MR_EnumFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__enum_ordinal_ordered_common_struct_task_0[3];

static const MR_EnumFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__enum_name_ordered_common_struct_task_0[3];

static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_common_struct_task_0[3];

static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_const_struct_info_0[1];

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_NotagFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__notag_functor_desc_const_struct_info_0;

static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_maybe_override_by_const_struct_0_0;

static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_maybe_override_by_const_struct_0_1[2];

static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_maybe_override_by_const_struct_0_1;

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_maybe_override_by_const_struct_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_maybe_override_by_const_struct_0_1[1];

static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_maybe_override_by_const_struct_0[2];

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_maybe_override_by_const_struct_0[2];

static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_maybe_override_by_const_struct_0[2];

static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_structure_0_0[2];

static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_structure_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_structure_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_structure_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_structure_0[1];

static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_structure_0[1];

static void MR_CALL 
check_hlds__simplify__common__IntroducedFrom__pred__common_optimise_construct__647__1_4_p_0(
  MR_Word HeadVar__1_129,
  MR_Integer * HeadVar__2_130,
  MR_Word HeadVar__3_131,
  MR_Word * HeadVar__4_132);

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
check_hlds__simplify__common____Compare____maybe_override_by_const_struct_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____maybe_override_by_const_struct_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____const_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____const_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____const_struct_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____const_struct_info_0_0(
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
check_hlds__simplify__common____Compare____common_struct_task_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____common_struct_task_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____common_struct_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____common_struct_info_0_0(
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
check_hlds__simplify__common__common_do_optimise_call_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__common__common_do_optimise_call_11_p_0(
  MR_Word SeenCall_12,
  MR_Word InputArgs_13,
  MR_Word OutputArgs_14,
  MR_Word Modes_15,
  MR_Word GoalInfo_16,
  MR_Word GoalExpr0_17,
  MR_Word * MaybeAssignsGoalExpr_18,
  MR_Word CommonStruct0_19,
  MR_Word * CommonStruct_20,
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
  MR_Word STATE_VARIABLE_CommonStruct_0_10,
  MR_Word * STATE_VARIABLE_CommonStruct_11);

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
  MR_Word STATE_VARIABLE_CommonStruct_0_40,
  MR_Word * STATE_VARIABLE_CommonStruct_41,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43);

static void MR_CALL 
check_hlds__simplify__common__create_output_unifications_9_p_0(
  MR_Word OldGoalInfo_10,
  MR_Word OutputArgs_11,
  MR_Word OldOutputArgs_12,
  MR_Word FromToInsts_13,
  MR_Word * AssignGoals_14,
  MR_Word STATE_VARIABLE_CommonStruct_0_27,
  MR_Word * STATE_VARIABLE_CommonStruct_28,
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
  MR_Word RHS0_13,
  MR_Word UnifyMode0_14,
  MR_Word Unification0_15,
  MR_Word UnifyContext0_16,
  MR_Word STATE_VARIABLE_GoalExpr_0_72,
  MR_Word * STATE_VARIABLE_GoalExpr_73,
  MR_Word STATE_VARIABLE_GoalInfo_0_74,
  MR_Word * STATE_VARIABLE_GoalInfo_75,
  MR_Word STATE_VARIABLE_Common_0_76,
  MR_Word * STATE_VARIABLE_Common_77,
  MR_Word STATE_VARIABLE_Info_0_78,
  MR_Word * STATE_VARIABLE_Info_79);

static void MR_CALL 
check_hlds__simplify__common__generate_assign_10_p_0(
  MR_Word ToVar_11,
  MR_Word FromVar_12,
  MR_Word ToVarMode_13,
  MR_Word OldGoalInfo_14,
  MR_Word * GoalExpr_15,
  MR_Word * GoalInfo_16,
  MR_Word STATE_VARIABLE_CommonStruct_0_30,
  MR_Word * STATE_VARIABLE_CommonStruct_31,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33);

static void MR_CALL 
check_hlds__simplify__common__apply_induced_substitutions_4_p_0(
  MR_Word ToVar_5,
  MR_Word FromVar_6,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_2_p_0(
  MR_Word TypeA_3,
  MR_Word TypeB_4);

static MR_bool MR_CALL 
check_hlds__simplify__common__types_match_exactly_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__common__generate_assign_from_const_struct_11_p_0(
  MR_Word Unification0_12,
  MR_Word UnifyMode0_13,
  MR_Word UnifyContext0_14,
  MR_Word CSAs_15,
  MR_Word OldGoalInfo_16,
  MR_Word * ConstGoalExpr_17,
  MR_Word * ConstGoalInfo_18,
  MR_Word VarMap0_19,
  MR_Word * VarMap_20,
  MR_Word STATE_VARIABLE_Info_0_56,
  MR_Word * STATE_VARIABLE_Info_57);

static void MR_CALL 
check_hlds__simplify__common__record_nonlocals_as_seen_3_p_0(
  MR_Word GoalInfo_4,
  MR_Word STATE_VARIABLE_CommonStruct_0_9,
  MR_Word * STATE_VARIABLE_CommonStruct_10);

static void MR_CALL 
check_hlds__simplify__common__maybe_restore_original_goal_8_p_0(
  MR_Word CommonStruct_9,
  MR_Word Override_10,
  MR_Word GoalExpr0_11,
  MR_Word GoalInfo0_12,
  MR_Word STATE_VARIABLE_GoalExpr_0_16,
  MR_Word * STATE_VARIABLE_GoalExpr_17,
  MR_Word STATE_VARIABLE_GoalInfo_0_18,
  MR_Word * STATE_VARIABLE_GoalInfo_19);

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

static MR_Word MR_CALL 
check_hlds__simplify__common__lookup_var_type_ctor_2_f_0(
  MR_Word Info_4,
  MR_Word Var_5);

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
  MR_Word STATE_VARIABLE_CommonStruct_0_40,
  MR_Word * STATE_VARIABLE_CommonStruct_41,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43);

static void MR_CALL 
check_hlds__simplify__common__record_cell_in_maps_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word ConsId_8,
  MR_Word Struct_9,
  MR_Word VarEqv_10,
  MR_Word STATE_VARIABLE_CommonStruct_0_16,
  MR_Word * STATE_VARIABLE_CommonStruct_17);

static void MR_CALL 
check_hlds__simplify__common__do_record_cell_in_struct_map_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word ConsId_7,
  MR_Word Struct_8,
  MR_Word STATE_VARIABLE_StructMap_0_14,
  MR_Word * STATE_VARIABLE_StructMap_15);

static MR_bool MR_CALL 
check_hlds__simplify__common__how_to_construct_is_acceptable_2_p_0(
  MR_Word Info_3,
  MR_Word How_4);

static MR_bool MR_CALL 
check_hlds__simplify__common__all_vars_are_const_struct_args_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

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
check_hlds__simplify__common____Unify____common_struct_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____common_struct_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____common_struct_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____common_struct_task_0_0_10001(
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
check_hlds__simplify__common____Unify____const_struct_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____const_struct_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____const_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____const_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____maybe_override_by_const_struct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__common____Compare____maybe_override_by_const_struct_0_0_10001(
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


static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_1[14][2];

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_2[6][3];

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_3[4][1];

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_4[2][7];

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_5[1][5];

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_6[1][6];




static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_1[14][2] = {
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
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_common_struct_info_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_const_struct_info_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: redundant"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Here is the previous"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_2[6][3] = {
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
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__common_scalar_common_1[0])),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__simplify__common_scalar_common_4[1])),
    ((MR_Box) (check_hlds__simplify__common__common_optimise_construct_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__simplify__common_scalar_common_5[0])),
    ((MR_Box) (check_hlds__simplify__common__common_optimise_deconstruct_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 3 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box check_hlds__simplify__common_scalar_common_4[2][7] = {
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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__common____Unify____call_args_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____call_args_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "call_args",
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_call_args_0 },
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_call_args_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_call_args_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__maybe__ti_maybe_1check_hlds__simplify__common__type_ctor_info_common_struct_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_common_struct_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__common__maybe__ti_maybe_1check_hlds__simplify__common__type_ctor_info_const_struct_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_const_struct_info_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_common_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__common__maybe__ti_maybe_1check_hlds__simplify__common__type_ctor_info_common_struct_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__common__maybe__ti_maybe_1check_hlds__simplify__common__type_ctor_info_const_struct_info_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_info_0_0 = {
  (MR_String) "common_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__simplify__common__check_hlds__simplify__common__field_types_common_info_0_0,
  NULL,
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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__common____Unify____common_info_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____common_info_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "common_info",
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_common_info_0 },
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_common_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_common_info_0,

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

static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_common_struct_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_common_struct_task_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__common__eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_structure_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__common__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__simplify__common__type_ctor_info_call_args_0)
};

static const MR_ConstString check_hlds__simplify__common__check_hlds__simplify__common__field_names_common_struct_info_0_0[6] = {
  (MR_String) "common_struct_task",
  (MR_String) "var_eqv",
  (MR_String) "all_structs",
  (MR_String) "since_call_structs",
  (MR_String) "since_call_vars",
  (MR_String) "seen_calls"
};

static const MR_DuArgLocn check_hlds__simplify__common__check_hlds__simplify__common__field_locns_common_struct_info_0_0[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_struct_info_0_0 = {
  (MR_String) "common_struct_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__simplify__common__check_hlds__simplify__common__field_types_common_struct_info_0_0,
  check_hlds__simplify__common__check_hlds__simplify__common__field_names_common_struct_info_0_0,
  check_hlds__simplify__common__check_hlds__simplify__common__field_locns_common_struct_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_common_struct_info_0_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_struct_info_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_common_struct_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_common_struct_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_common_struct_info_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_common_struct_info_0_0
};

static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_common_struct_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_common_struct_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__common____Unify____common_struct_info_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____common_struct_info_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "common_struct_info",
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_common_struct_info_0 },
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_common_struct_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_common_struct_info_0,

};

static const MR_EnumFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__enum_functor_desc_common_struct_task_0_0 = {
  (MR_String) "common_task_only_eqv",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__enum_functor_desc_common_struct_task_0_1 = {
  (MR_String) "common_task_std",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__enum_functor_desc_common_struct_task_0_2 = {
  (MR_String) "common_task_extra",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__enum_ordinal_ordered_common_struct_task_0[3] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__enum_functor_desc_common_struct_task_0_0,
  &check_hlds__simplify__common__check_hlds__simplify__common__enum_functor_desc_common_struct_task_0_1,
  &check_hlds__simplify__common__check_hlds__simplify__common__enum_functor_desc_common_struct_task_0_2
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__enum_name_ordered_common_struct_task_0[3] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__enum_functor_desc_common_struct_task_0_2,
  &check_hlds__simplify__common__check_hlds__simplify__common__enum_functor_desc_common_struct_task_0_0,
  &check_hlds__simplify__common__check_hlds__simplify__common__enum_functor_desc_common_struct_task_0_1
};

static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_common_struct_task_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_common_struct_task_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__common____Unify____common_struct_task_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____common_struct_task_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "common_struct_task",
  {     check_hlds__simplify__common__check_hlds__simplify__common__enum_name_ordered_common_struct_task_0 },
  {     check_hlds__simplify__common__check_hlds__simplify__common__enum_ordinal_ordered_common_struct_task_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_common_struct_task_0,

};

const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_cons_id_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
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
  NULL,

};

static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_const_struct_info_0[1] = {
  (MR_Integer) 0
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__common__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__simplify__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)
  }
};

static const MR_NotagFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__notag_functor_desc_const_struct_info_0 = {
  (MR_String) "const_struct_info",
  (MR_PseudoTypeInfo) (&check_hlds__simplify__common__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__const_struct__type_ctor_info_const_struct_arg_0),
  (MR_String) "const_var_map",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_const_struct_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__simplify__common____Unify____const_struct_info_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____const_struct_info_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "const_struct_info",
  {     &check_hlds__simplify__common__check_hlds__simplify__common__notag_functor_desc_const_struct_info_0 },
  {     &check_hlds__simplify__common__check_hlds__simplify__common__notag_functor_desc_const_struct_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_const_struct_info_0,

};

const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_const_var_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__common____Unify____const_var_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____const_var_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "const_var_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__simplify__common__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__const_struct__type_ctor_info_const_struct_arg_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_maybe_override_by_const_struct_0_0 = {
  (MR_String) "no_override_by_const_struct",
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

static const MR_PseudoTypeInfo check_hlds__simplify__common__check_hlds__simplify__common__field_types_maybe_override_by_const_struct_0_1[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_expr_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_maybe_override_by_const_struct_0_1 = {
  (MR_String) "override_by_const_struct",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__simplify__common__check_hlds__simplify__common__field_types_maybe_override_by_const_struct_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_maybe_override_by_const_struct_0_0[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_maybe_override_by_const_struct_0_0
};

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_maybe_override_by_const_struct_0_1[1] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_maybe_override_by_const_struct_0_1
};

static const MR_DuPtagLayout check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_maybe_override_by_const_struct_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_maybe_override_by_const_struct_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__common__check_hlds__simplify__common__du_stag_ordered_maybe_override_by_const_struct_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_maybe_override_by_const_struct_0[2] = {
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_maybe_override_by_const_struct_0_0,
  &check_hlds__simplify__common__check_hlds__simplify__common__du_functor_desc_maybe_override_by_const_struct_0_1
};

static const MR_Integer check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_maybe_override_by_const_struct_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_maybe_override_by_const_struct_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__common____Unify____maybe_override_by_const_struct_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____maybe_override_by_const_struct_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "maybe_override_by_const_struct",
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_maybe_override_by_const_struct_0 },
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_maybe_override_by_const_struct_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_maybe_override_by_const_struct_0,

};

const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_seen_calls_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
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
  NULL,

};

const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_struct_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
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
  NULL,

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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__common____Unify____structure_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__common____Compare____structure_0_0_10001)),
  (MR_String) "check_hlds.simplify.common",
  (MR_String) "structure",
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_name_ordered_structure_0 },
  {     check_hlds__simplify__common__check_hlds__simplify__common__du_ptag_ordered_structure_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__simplify__common__check_hlds__simplify__common__functor_number_map_structure_0,

};

const MR_TypeCtorInfo_Struct check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_structures_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
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
  NULL,

};

static void MR_CALL 
check_hlds__simplify__common__IntroducedFrom__pred__common_optimise_construct__647__1_4_p_0(
  MR_Word HeadVar__1_129,
  MR_Integer * HeadVar__2_130,
  MR_Word HeadVar__3_131,
  MR_Word * HeadVar__4_132)
{
  mercury__eqvclass__ensure_element_partition_id_4_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), ((MR_Box) (HeadVar__1_129)), HeadVar__2_130, HeadVar__3_131, HeadVar__4_132);
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
check_hlds__simplify__common____Compare____maybe_override_by_const_struct_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_10;

        hlds__hlds_goal____Compare____hlds_goal_expr_0_0(&SubResult1_10, Var_18, ArgY1_9);
        succeeded = (SubResult1_10 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_10;
        else
          hlds__hlds_goal____Compare____hlds_goal_info_0_0(HeadVar__1_1, Var_17, ArgY2_12);
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____maybe_override_by_const_struct_0_0(
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0(ArgX1_5, ArgY1_6);
        if (succeeded)
          succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(ArgX2_7, ArgY2_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____const_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____const_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____const_struct_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____const_struct_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_2[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
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

static void MR_CALL 
check_hlds__simplify__common____Compare____common_struct_task_0_0(
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
check_hlds__simplify__common____Unify____common_struct_task_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____common_struct_info_0_0(
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
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word SubResult1_6;
      MR_Integer Var_29 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_30 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_29 < Var_30);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_29 > Var_30);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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

            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_2[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[8]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____common_struct_info_0_0(
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
      MR_Word TypeInfo_17_17;
      MR_Word TypeInfo_18_18;
      MR_Word TypeInfo_19_19;
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_17_17 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&check_hlds__simplify__common_scalar_common_2[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_19_19 = (MR_Word) (&check_hlds__simplify__common_scalar_common_2[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_20_20 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[8]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_21_21 = (MR_Word) (&check_hlds__simplify__common_scalar_common_2[2]);
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

void MR_CALL 
check_hlds__simplify__common____Compare____common_info_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[6]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[6]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[7]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
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
  MR_Word Common_4,
  MR_Word Xs_5,
  MR_Word Ys_6)
{
  {
    MR_bool succeeded;
    MR_Word MaybeCommonStruct_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Common_4, (MR_Integer) 0))));

    if ((MaybeCommonStruct_7 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), ((MR_Box) (Xs_5)), ((MR_Box) (Ys_6)));
    else
    {
      MR_Word CommonStruct_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCommonStruct_7, (MR_Integer) 0))));
      MR_Word EqvVars_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CommonStruct_9, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), ((MR_Box) (Xs_5)), ((MR_Box) (Ys_6)));
      if (!(succeeded))
      {
        MR_Integer Id_20;
        MR_Integer Var_22;

        succeeded = mercury__eqvclass__partition_id_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), EqvVars_10, ((MR_Box) (Xs_5)), &Id_20);
        if (succeeded)
        {
          succeeded = mercury__eqvclass__partition_id_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), EqvVars_10, ((MR_Box) (Ys_6)), &Var_22);
          if (succeeded)
            succeeded = (Id_20 == Var_22);
        }
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
  MR_Word STATE_VARIABLE_Common_0_32,
  MR_Word * STATE_VARIABLE_Common_33,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  {
    MR_bool succeeded = (Purity_17 == (MR_Integer) 0);
    MR_Word MaybeCommonStruct0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_32, (MR_Integer) 0))));
    MR_Word ConstStruct_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_32, (MR_Integer) 1))));
    MR_Word CommonStruct0_25;
    MR_Word InputArgs_28;
    MR_Word OutputArgs_29;
    MR_Word OutputModes_30;
    MR_Word VarTypes_26;
    MR_Word ModuleInfo_27;
    MR_Word SolnCount_43;
    MR_Word Var_42;

    if (succeeded)
    {
      succeeded = (MaybeCommonStruct0_23 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        CommonStruct0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCommonStruct0_23, (MR_Integer) 0))));
        parse_tree__prog_data__determinism_components_3_p_0(Det_16, &Var_42, &SolnCount_43);
        switch (SolnCount_43) {
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
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_34, &VarTypes_26);
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_27);
          succeeded = check_hlds__simplify__common__partition_call_args_7_p_0(VarTypes_26, ModuleInfo_27, Modes_15, Args_14, &InputArgs_28, &OutputArgs_29, &OutputModes_30);
        }
      }
    }
    if (succeeded)
    {
      MR_Word CommonStruct_31;
      MR_Word Var_37;
      MR_Word Var_40;

      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Closure_13));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (InputArgs_28));
      }
      check_hlds__simplify__common__common_do_optimise_call_11_p_0((MR_Word) ((MR_Unsigned) 0U), Var_37, OutputArgs_29, OutputModes_30, GoalInfo_18, GoalExpr0_19, MaybeAssignsGoalExpr_20, CommonStruct0_25, &CommonStruct_31, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (CommonStruct_31));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Common_33 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ConstStruct_24));
      }
    }
    else
    {
      *MaybeAssignsGoalExpr_20 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
      *STATE_VARIABLE_Common_33 = STATE_VARIABLE_Common_0_32;
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
  MR_Word STATE_VARIABLE_Common_0_34,
  MR_Word * STATE_VARIABLE_Common_35,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37)
{
  {
    MR_bool succeeded = (Purity_15 == (MR_Integer) 0);
    MR_Word MaybeCommonStruct0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_34, (MR_Integer) 0))));
    MR_Word ConstStruct_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_34, (MR_Integer) 1))));
    MR_Word CommonStruct0_23;
    MR_Word InputArgs_30;
    MR_Word OutputArgs_31;
    MR_Word OutputModes_32;
    MR_Word Det_24;
    MR_Word VarTypes_25;
    MR_Word ModuleInfo_26;
    MR_Word ProcInfo_28;
    MR_Word ArgModes_29;
    MR_Word SolnCount_44;
    MR_Word Var_43;
    MR_Word Var_27;

    if (succeeded)
    {
      succeeded = (MaybeCommonStruct0_21 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        CommonStruct0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCommonStruct0_21, (MR_Integer) 0))));
        Det_24 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_16);
        parse_tree__prog_data__determinism_components_3_p_0(Det_24, &Var_43, &SolnCount_44);
        switch (SolnCount_44) {
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
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_36, &VarTypes_25);
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_36, &ModuleInfo_26);
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_26, PredId_12, ProcId_13, &Var_27, &ProcInfo_28);
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_28, &ArgModes_29);
          succeeded = check_hlds__simplify__common__partition_call_args_7_p_0(VarTypes_25, ModuleInfo_26, ArgModes_29, Args_14, &InputArgs_30, &OutputArgs_31, &OutputModes_32);
        }
      }
    }
    if (succeeded)
    {
      MR_Word CommonStruct_33;
      MR_Word Var_38;
      MR_Word Var_41;

      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (PredId_12));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (ProcId_13));
      }
      check_hlds__simplify__common__common_do_optimise_call_11_p_0(Var_38, InputArgs_30, OutputArgs_31, OutputModes_32, GoalInfo_16, GoalExpr0_17, MaybeAssignsGoalExpr_18, CommonStruct0_23, &CommonStruct_33, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (CommonStruct_33));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Common_35 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ConstStruct_22));
      }
    }
    else
    {
      *MaybeAssignsGoalExpr_18 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_0_36;
      *STATE_VARIABLE_Common_35 = STATE_VARIABLE_Common_0_34;
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
          succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(ModuleInfo_2, Type_42, InitialInst_40, FinalInst_41);
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
              succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(ModuleInfo_2, Type_42, FinalInst_41, FinalInst_41);
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
check_hlds__simplify__common__common_do_optimise_call_11_p_0_1(
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
check_hlds__simplify__common__common_do_optimise_call_11_p_0(
  MR_Word SeenCall_12,
  MR_Word InputArgs_13,
  MR_Word OutputArgs_14,
  MR_Word Modes_15,
  MR_Word GoalInfo_16,
  MR_Word GoalExpr0_17,
  MR_Word * MaybeAssignsGoalExpr_18,
  MR_Word CommonStruct0_19,
  MR_Word * CommonStruct_20,
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48)
{
  {
    MR_bool succeeded;
    MR_Word Eqv0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CommonStruct0_19, (MR_Integer) 1))));
    MR_Word SeenCalls0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CommonStruct0_19, (MR_Integer) 5))));
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
          MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (check_hlds__simplify__common__common_do_optimise_call_11_p_0_1));
          MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (ModuleInfo_27));
        }
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0), Var_49, Modes_15, &FromToInsts_28);
        check_hlds__simplify__common__create_output_unifications_9_p_0(GoalInfo_16, OutputArgs_14, OutputArgs2_25, FromToInsts_28, &AssignGoals_29, CommonStruct0_19, CommonStruct_20, STATE_VARIABLE_Info_0_47, &STATE_VARIABLE_Info_50_50);
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
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_1[9])));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (CallPieces_37));
          }
          CurPieces_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_54, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__common_scalar_common_1[11])));
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_1[12])));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (CallPieces_37));
          }
          PrevPieces_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_61, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__common_scalar_common_1[11])));
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
            PrevMsg_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), PrevMsg_41, 0) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(3), PrevMsg_41, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), PrevMsg_41, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), PrevMsg_41, 3) = ((MR_Box) (Var_71));
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
            Spec_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Spec_42, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.common.common_do_optimise_call\'/11"));
            MR_hl_field(MR_mktag(3), Spec_42, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 28) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(3), Spec_42, 2) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), Spec_42, 3) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__common_scalar_common_3[3])));
            MR_hl_field(MR_mktag(3), Spec_42, 4) = ((MR_Box) (Var_80));
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
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_107;
        MR_Word Var_108;
        MR_Word Var_109;

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
        Var_105 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CommonStruct0_19, (MR_Integer) 0))) & (MR_Integer) 3);
        Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CommonStruct0_19, (MR_Integer) 1))));
        Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CommonStruct0_19, (MR_Integer) 2))));
        Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CommonStruct0_19, (MR_Integer) 3))));
        Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CommonStruct0_19, (MR_Integer) 4))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *CommonStruct_20 = base;
          MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (Var_105));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_106));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_107));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_108));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_109));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (SeenCalls_46));
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
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_113;
      MR_Word Var_114;
      MR_Word Var_115;

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
      Var_111 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CommonStruct0_19, (MR_Integer) 0))) & (MR_Integer) 3);
      Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CommonStruct0_19, (MR_Integer) 1))));
      Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CommonStruct0_19, (MR_Integer) 2))));
      Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CommonStruct0_19, (MR_Integer) 3))));
      Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CommonStruct0_19, (MR_Integer) 4))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        *CommonStruct_20 = base;
        MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (Var_111));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_112));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_113));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_114));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_115));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (SeenCalls_94));
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
check_hlds__simplify__common__common_optimise_unification_12_p_0(
  MR_Word RHS0_13,
  MR_Word UnifyMode_14,
  MR_Word Unification0_15,
  MR_Word UnifyContext_16,
  MR_Word STATE_VARIABLE_GoalExpr_0_55,
  MR_Word * STATE_VARIABLE_GoalExpr_56,
  MR_Word STATE_VARIABLE_GoalInfo_0_57,
  MR_Word * STATE_VARIABLE_GoalInfo_58,
  MR_Word STATE_VARIABLE_Common_0_59,
  MR_Word * STATE_VARIABLE_Common_60,
  MR_Word STATE_VARIABLE_Info_0_61,
  MR_Word * STATE_VARIABLE_Info_62)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Unification0_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubInfo_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_15, (MR_Integer) 6))));
          MR_Word ModuleInfo_30;
          MR_Word LVarFinalInst_32;

          if ((SubInfo_27 == (MR_Word) ((MR_Unsigned) 0U)))
            succeeded = MR_TRUE;
          else
          {
            MR_Word MaybeTakeAddr_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_27, (MR_Integer) 0))));

            succeeded = (MaybeTakeAddr_28 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_61, &ModuleInfo_30);
            LVarFinalInst_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_14, (MR_Integer) 1))));
            succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_30, LVarFinalInst_32);
          }
          if (succeeded)
            check_hlds__simplify__common__common_optimise_construct_12_p_0(RHS0_13, UnifyMode_14, Unification0_15, UnifyContext_16, STATE_VARIABLE_GoalExpr_0_55, STATE_VARIABLE_GoalExpr_56, STATE_VARIABLE_GoalInfo_0_57, STATE_VARIABLE_GoalInfo_58, STATE_VARIABLE_Common_0_59, STATE_VARIABLE_Common_60, STATE_VARIABLE_Info_0_61, STATE_VARIABLE_Info_62);
          else
          {
            *STATE_VARIABLE_Info_62 = STATE_VARIABLE_Info_0_61;
            *STATE_VARIABLE_Common_60 = STATE_VARIABLE_Common_0_59;
            *STATE_VARIABLE_GoalInfo_58 = STATE_VARIABLE_GoalInfo_0_57;
            *STATE_VARIABLE_GoalExpr_56 = STATE_VARIABLE_GoalExpr_0_55;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_15, (MR_Integer) 0))));
          MR_Word ConsId_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_15, (MR_Integer) 1))));
          MR_Word ArgVars_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_15, (MR_Integer) 2))));
          MR_Word ArgModes_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_15, (MR_Integer) 3))));
          MR_Word CanFail_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unification0_15, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
          MR_Word MaybeCommonStruct0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_59, (MR_Integer) 0))));
          MR_Word MaybeConstStruct0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_59, (MR_Integer) 1))));

          if ((MaybeCommonStruct0_41 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *STATE_VARIABLE_GoalExpr_56 = STATE_VARIABLE_GoalExpr_0_55;
            *STATE_VARIABLE_GoalInfo_58 = STATE_VARIABLE_GoalInfo_0_57;
            *STATE_VARIABLE_Common_60 = STATE_VARIABLE_Common_0_59;
            *STATE_VARIABLE_Info_62 = STATE_VARIABLE_Info_0_61;
          }
          else
          {
            MR_Word LVarInitInst_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_14, (MR_Integer) 0))));
            MR_Word STATE_VARIABLE_CommonStruct_70_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCommonStruct0_41, (MR_Integer) 0))));
            MR_Word STATE_VARIABLE_CommonStruct_73_73;
            MR_Word STATE_VARIABLE_CommonStruct_78_78;
            MR_Word Var_80;
            MR_Word ModuleInfo_85;

            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_61, &ModuleInfo_85);
            succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_85, LVarInitInst_46);
            if (succeeded)
            {
              MR_Word STATE_VARIABLE_GoalExpr_71_71;
              MR_Word STATE_VARIABLE_GoalInfo_72_72;

              check_hlds__simplify__common__common_optimise_deconstruct_13_p_0(Var_35, ConsId_36, ArgVars_37, ArgModes_38, CanFail_39, STATE_VARIABLE_GoalExpr_0_55, &STATE_VARIABLE_GoalExpr_71_71, STATE_VARIABLE_GoalInfo_0_57, &STATE_VARIABLE_GoalInfo_72_72, STATE_VARIABLE_CommonStruct_70_70, &STATE_VARIABLE_CommonStruct_73_73, STATE_VARIABLE_Info_0_61, STATE_VARIABLE_Info_62);
              check_hlds__simplify__common__maybe_restore_original_goal_8_p_0(STATE_VARIABLE_CommonStruct_73_73, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_GoalExpr_0_55, STATE_VARIABLE_GoalInfo_0_57, STATE_VARIABLE_GoalExpr_71_71, STATE_VARIABLE_GoalExpr_56, STATE_VARIABLE_GoalInfo_72_72, STATE_VARIABLE_GoalInfo_58);
            }
            else
            {
              STATE_VARIABLE_CommonStruct_73_73 = STATE_VARIABLE_CommonStruct_70_70;
              *STATE_VARIABLE_Info_62 = STATE_VARIABLE_Info_0_61;
              *STATE_VARIABLE_GoalInfo_58 = STATE_VARIABLE_GoalInfo_0_57;
              *STATE_VARIABLE_GoalExpr_56 = STATE_VARIABLE_GoalExpr_0_55;
            }
            check_hlds__simplify__common__record_nonlocals_as_seen_3_p_0(*STATE_VARIABLE_GoalInfo_58, STATE_VARIABLE_CommonStruct_73_73, &STATE_VARIABLE_CommonStruct_78_78);
            {
              Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (STATE_VARIABLE_CommonStruct_78_78));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Common_60 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_80));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeConstStruct0_42));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var1_50 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification0_15, (MR_Integer) 0))));
          MR_Word Var2_51 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification0_15, (MR_Integer) 1))));
          MR_Word MaybeCommonStruct0_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_59, (MR_Integer) 0))));
          MR_Word MaybeConstStruct0_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_59, (MR_Integer) 1))));

          if ((MaybeCommonStruct0_89 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_Common_60 = STATE_VARIABLE_Common_0_59;
          else
          {
            MR_Word STATE_VARIABLE_CommonStruct_65_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCommonStruct0_89, (MR_Integer) 0))));
            MR_Word STATE_VARIABLE_CommonStruct_66_66;
            MR_Word STATE_VARIABLE_CommonStruct_67_67;
            MR_Word Var_69;

            check_hlds__simplify__common__record_equivalence_4_p_0(Var1_50, Var2_51, STATE_VARIABLE_CommonStruct_65_65, &STATE_VARIABLE_CommonStruct_66_66);
            check_hlds__simplify__common__record_nonlocals_as_seen_3_p_0(STATE_VARIABLE_GoalInfo_0_57, STATE_VARIABLE_CommonStruct_66_66, &STATE_VARIABLE_CommonStruct_67_67);
            {
              Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (STATE_VARIABLE_CommonStruct_67_67));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Common_60 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_69));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeConstStruct0_90));
            }
          }
          *STATE_VARIABLE_GoalExpr_56 = STATE_VARIABLE_GoalExpr_0_55;
          *STATE_VARIABLE_GoalInfo_58 = STATE_VARIABLE_GoalInfo_0_57;
          *STATE_VARIABLE_Info_62 = STATE_VARIABLE_Info_0_61;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification0_15, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var1_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification0_15, (MR_Integer) 1))));
              MR_Word Var2_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification0_15, (MR_Integer) 2))));
              MR_Word MaybeCommonStruct0_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_59, (MR_Integer) 0))));
              MR_Word MaybeConstStruct0_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_59, (MR_Integer) 1))));

              if ((MaybeCommonStruct0_109 == (MR_Word) ((MR_Unsigned) 0U)))
                *STATE_VARIABLE_Common_60 = STATE_VARIABLE_Common_0_59;
              else
              {
                MR_Word STATE_VARIABLE_CommonStruct_65_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCommonStruct0_109, (MR_Integer) 0))));
                MR_Word STATE_VARIABLE_CommonStruct_66_92;
                MR_Word STATE_VARIABLE_CommonStruct_67_93;
                MR_Word Var_94;

                check_hlds__simplify__common__record_equivalence_4_p_0(Var1_103, Var2_104, STATE_VARIABLE_CommonStruct_65_91, &STATE_VARIABLE_CommonStruct_66_92);
                check_hlds__simplify__common__record_nonlocals_as_seen_3_p_0(STATE_VARIABLE_GoalInfo_0_57, STATE_VARIABLE_CommonStruct_66_92, &STATE_VARIABLE_CommonStruct_67_93);
                {
                  Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (STATE_VARIABLE_CommonStruct_67_93));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Common_60 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_94));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeConstStruct0_110));
                }
              }
              *STATE_VARIABLE_GoalExpr_56 = STATE_VARIABLE_GoalExpr_0_55;
              *STATE_VARIABLE_GoalInfo_58 = STATE_VARIABLE_GoalInfo_0_57;
              *STATE_VARIABLE_Info_62 = STATE_VARIABLE_Info_0_61;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.common.common_optimise_unification\'/12", (MR_String) "complicated_unify");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__simplify__common__record_equivalence_4_p_0(
  MR_Word VarA_5,
  MR_Word VarB_6,
  MR_Word STATE_VARIABLE_CommonStruct_0_10,
  MR_Word * STATE_VARIABLE_CommonStruct_11)
{
  {
    MR_Word VarEqv0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_10, (MR_Integer) 1))));
    MR_Word VarEqv_9;
    MR_Word Var_18;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;

    mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), ((MR_Box) (VarA_5)), ((MR_Box) (VarB_6)), VarEqv0_8, &VarEqv_9);
    Var_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_10, (MR_Integer) 0))) & (MR_Integer) 3);
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_10, (MR_Integer) 2))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_10, (MR_Integer) 3))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_10, (MR_Integer) 4))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_10, (MR_Integer) 5))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CommonStruct_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (Var_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarEqv_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_23));
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

    conv2_HeadVar__2_2 = check_hlds__mode_util__unify_mode_to_rhs_from_to_insts_1_f_0(((MR_Word) (wrapper_arg_1)));
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
  MR_Word STATE_VARIABLE_CommonStruct_0_40,
  MR_Word * STATE_VARIABLE_CommonStruct_41,
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
    MR_Word VarTypes_84;
    MR_Word Type_85;
    MR_Word OldStruct_32;
    MR_Word TypeCtorInfo_73_73;
    MR_Word TypeInfo_74_74;
    MR_Word TypeCtorInfo_75_75;
    MR_Word TypeInfo_76_76;
    MR_Word ConsIdMap0_30;
    MR_Word Structs_31;
    MR_Word Var_45;
    MR_Box conv0_ConsIdMap0_30;
    MR_Box conv1_Structs_31;

    check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_42, &VarTypes_84);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_84, Var_14, &Type_85);
    parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_85, &TypeCtor_25);
    VarEqv0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_40, (MR_Integer) 1))));
    mercury__eqvclass__ensure_element_partition_id_4_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), ((MR_Box) (Var_14)), &VarId_27, VarEqv0_26, &VarEqv1_28);
    SinceCallStructMap0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_40, (MR_Integer) 3))));
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
        TypeCtorInfo_73_73 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
        TypeInfo_74_74 = (MR_Word) (&check_hlds__simplify__common_scalar_common_2[0]);
        succeeded = mercury__map__search_3_p_0(TypeCtorInfo_73_73, TypeInfo_74_74, SinceCallStructMap0_29, ((MR_Box) (TypeCtor_25)), &conv0_ConsIdMap0_30);
        if (succeeded)
        {
          ConsIdMap0_30 = ((MR_Word) (conv0_ConsIdMap0_30));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          TypeCtorInfo_75_75 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0);
          TypeInfo_76_76 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[1]);
          succeeded = mercury__map__search_3_p_0(TypeCtorInfo_75_75, TypeInfo_76_76, ConsIdMap0_30, ((MR_Box) (ConsId_15)), &conv1_Structs_31);
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
      MR_Word STATE_VARIABLE_CommonStruct_46_46;
      MR_Word STATE_VARIABLE_Info_49_49;
      MR_Word Var_51;
      MR_Word STATE_VARIABLE_Info_52_52;
      MR_Word STATE_VARIABLE_Info_53_53;
      MR_Word Var_66;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;

      mercury__eqvclass__ensure_corresponding_equivalences_4_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), ArgVars_16, OldArgVars_34, VarEqv1_28, &VarEqv_35);
      Var_66 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_40, (MR_Integer) 0))) & (MR_Integer) 3);
      Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_40, (MR_Integer) 2))));
      Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_40, (MR_Integer) 3))));
      Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_40, (MR_Integer) 4))));
      Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_40, (MR_Integer) 5))));
      {
        STATE_VARIABLE_CommonStruct_46_46 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_46_46, 0) = (MR_Box) ((MR_Unsigned) (Var_66));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_46_46, 1) = ((MR_Box) (VarEqv_35));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_46_46, 2) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_46_46, 3) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_46_46, 4) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_46_46, 5) = ((MR_Box) (Var_71));
      }
      RHSFromToInsts_36 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_2[5]), ArgModes_17);
      check_hlds__simplify__common__create_output_unifications_9_p_0(GoalInfo0_21, ArgVars_16, OldArgVars_34, RHSFromToInsts_36, &Goals_37, STATE_VARIABLE_CommonStruct_46_46, STATE_VARIABLE_CommonStruct_41, STATE_VARIABLE_Info_0_42, &STATE_VARIABLE_Info_49_49);
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
      check_hlds__simplify__common__record_cell_in_maps_6_p_0(TypeCtor_25, ConsId_15, Struct_39, VarEqv1_28, STATE_VARIABLE_CommonStruct_0_40, STATE_VARIABLE_CommonStruct_41);
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
  MR_Word STATE_VARIABLE_CommonStruct_0_27,
  MR_Word * STATE_VARIABLE_CommonStruct_28,
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
        MR_Word STATE_VARIABLE_CommonStruct_33_33;
        MR_Word STATE_VARIABLE_Info_34_34;

        check_hlds__simplify__common__generate_assign_10_p_0(HeadOutputArg_17, HeadOldOutputArg_19, HeadFromToInsts_21, OldGoalInfo_10, &HeadAssignGoalExpr_23, &HeadAssignGoalInfo_24, STATE_VARIABLE_CommonStruct_0_27, &STATE_VARIABLE_CommonStruct_33_33, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_34_34);
        {
          HeadAssignGoal_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadAssignGoal_25, 0) = ((MR_Box) (HeadAssignGoalExpr_23));
          MR_hl_field(MR_mktag(0), HeadAssignGoal_25, 1) = ((MR_Box) (HeadAssignGoalInfo_24));
        }
        check_hlds__simplify__common__create_output_unifications_9_p_0(OldGoalInfo_10, TailOutputArgs_18, TailOldOutputArgs_20, TailFromToInsts_22, &TailAssignGoals_26, STATE_VARIABLE_CommonStruct_33_33, STATE_VARIABLE_CommonStruct_28, STATE_VARIABLE_Info_34_34, STATE_VARIABLE_Info_30);
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
      *STATE_VARIABLE_CommonStruct_28 = STATE_VARIABLE_CommonStruct_0_27;
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
    MR_Integer conv2_HeadVar__2_130;
    MR_Word conv1_HeadVar__4_132;

    check_hlds__simplify__common__IntroducedFrom__pred__common_optimise_construct__647__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_130, ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__4_132);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_130));
    *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_132));
  }
}

static void MR_CALL 
check_hlds__simplify__common__common_optimise_construct_12_p_0(
  MR_Word RHS0_13,
  MR_Word UnifyMode0_14,
  MR_Word Unification0_15,
  MR_Word UnifyContext0_16,
  MR_Word STATE_VARIABLE_GoalExpr_0_72,
  MR_Word * STATE_VARIABLE_GoalExpr_73,
  MR_Word STATE_VARIABLE_GoalInfo_0_74,
  MR_Word * STATE_VARIABLE_GoalInfo_75,
  MR_Word STATE_VARIABLE_Common_0_76,
  MR_Word * STATE_VARIABLE_Common_77,
  MR_Word STATE_VARIABLE_Info_0_78,
  MR_Word * STATE_VARIABLE_Info_79)
{
  {
    MR_bool succeeded;
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_15, (MR_Integer) 0))));
    MR_Word ConsId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_15, (MR_Integer) 1))));
    MR_Word ArgVars_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_15, (MR_Integer) 2))));
    MR_Word How_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_15, (MR_Integer) 4))));
    MR_Word MaybeCommonStruct0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_76, (MR_Integer) 0))));
    MR_Word MaybeConstStruct0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Common_0_76, (MR_Integer) 1))));
    MR_Word MaybeConstStruct_32;
    MR_Word Override_33;
    MR_Word MaybeCommonStruct_50;
    MR_Word STATE_VARIABLE_Info_81_81;

    if ((MaybeConstStruct0_29 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeConstStruct_32 = (MR_Word) ((MR_Unsigned) 0U);
      Override_33 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Info_81_81 = STATE_VARIABLE_Info_0_78;
    }
    else
    {
      MR_Word ConstStruct0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeConstStruct0_29, (MR_Integer) 0))));
      MR_Word VarMap0_35 = (MR_Word) (ConstStruct0_34);

      if ((ArgVars_23 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word VarMap_38;
        MR_Word ConstStruct_41;
        MR_Integer ConstNum_36;

        succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 14)));
        if (succeeded)
        {
          ConstNum_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_22, (MR_Integer) 1))));
          {
            MR_Word Var_82;

            {
              Var_82 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (ConstNum_36));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), (MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), ((MR_Box) (Var_21)), ((MR_Box) (Var_82)), VarMap0_35, &VarMap_38);
          }
        }
        else
        {
          MR_Word VarTypes_39;
          MR_Word Type_40;
          MR_Word Var_83;

          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_78, &VarTypes_39);
          hlds__vartypes__lookup_var_type_3_p_0(VarTypes_39, Var_21, &Type_40);
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (ConsId_22));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Type_40));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), (MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), ((MR_Box) (Var_21)), ((MR_Box) (Var_83)), VarMap0_35, &VarMap_38);
        }
        ConstStruct_41 = (MR_Word) (VarMap_38);
        {
          MaybeConstStruct_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeConstStruct_32, 0) = ((MR_Box) (ConstStruct_41));
        }
        Override_33 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_81_81 = STATE_VARIABLE_Info_0_78;
      }
      else
      {
        MR_Word CSAs_44;
        MR_Word Var_80;
        MR_Word ArgVar_143 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_23, (MR_Integer) 0))));
        MR_Word ArgVars_144 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_23, (MR_Integer) 1))));
        MR_Word CSA_145;
        MR_Word CSAs_146;
        MR_Box conv0_CSA_145;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), (MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), VarMap0_35, ((MR_Box) (ArgVar_143)), &conv0_CSA_145);
        if (succeeded)
        {
          CSA_145 = ((MR_Word) (conv0_CSA_145));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          succeeded = check_hlds__simplify__common__all_vars_are_const_struct_args_3_p_0(VarMap0_35, ArgVars_144, &CSAs_146);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) RHS0_13)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_80 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), RHS0_13, (MR_Integer) 1))) & (MR_Integer) 1);
              succeeded = (Var_80 == (MR_Integer) 0);
              if (succeeded)
              {
                {
                  CSAs_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), CSAs_44, 0) = ((MR_Box) (CSA_145));
                  MR_hl_field(MR_mktag(1), CSAs_44, 1) = ((MR_Box) (CSAs_146));
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word ConstGoalExpr_47;
          MR_Word ConstGoalInfo_48;
          MR_Word VarMap_103;
          MR_Word ConstStruct_104;

          check_hlds__simplify__common__generate_assign_from_const_struct_11_p_0(Unification0_15, UnifyMode0_14, UnifyContext0_16, CSAs_44, STATE_VARIABLE_GoalInfo_0_74, &ConstGoalExpr_47, &ConstGoalInfo_48, VarMap0_35, &VarMap_103, STATE_VARIABLE_Info_0_78, &STATE_VARIABLE_Info_81_81);
          ConstStruct_104 = (MR_Word) (VarMap_103);
          {
            MaybeConstStruct_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeConstStruct_32, 0) = ((MR_Box) (ConstStruct_104));
          }
          {
            Override_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Override_33, 0) = ((MR_Box) (ConstGoalExpr_47));
            MR_hl_field(MR_mktag(1), Override_33, 1) = ((MR_Box) (ConstGoalInfo_48));
          }
        }
        else
        {
          MaybeConstStruct_32 = MaybeConstStruct0_29;
          Override_33 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Info_81_81 = STATE_VARIABLE_Info_0_78;
        }
      }
    }
    if ((MaybeCommonStruct0_28 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeCommonStruct_50 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_GoalExpr_73 = STATE_VARIABLE_GoalExpr_0_72;
      *STATE_VARIABLE_GoalInfo_75 = STATE_VARIABLE_GoalInfo_0_74;
      *STATE_VARIABLE_Info_79 = STATE_VARIABLE_Info_81_81;
    }
    else
    {
      MR_Word STATE_VARIABLE_CommonStruct_84_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCommonStruct0_28, (MR_Integer) 0))));

      succeeded = check_hlds__simplify__common__how_to_construct_is_acceptable_2_p_0(STATE_VARIABLE_Info_81_81, How_25);
      if (succeeded)
      {
        MR_Word TypeCtor_51;
        MR_Word VarEqv0_52;
        MR_Word ArgVarIds_53;
        MR_Word VarEqv1_54;
        MR_Word AllStructMap0_55;
        MR_Word STATE_VARIABLE_GoalExpr_88_88;
        MR_Word STATE_VARIABLE_GoalInfo_89_89;
        MR_Word STATE_VARIABLE_CommonStruct_90_90;
        MR_Word STATE_VARIABLE_CommonStruct_101_101;
        MR_Box conv3_VarEqv1_54;
        MR_Word OldStruct_58;
        MR_Word TypeCtorInfo_139_139;
        MR_Word TypeInfo_140_140;
        MR_Word ConsIdMap0_56;
        MR_Word Structs_57;
        MR_Word InstMapDelta_59;
        MR_Box conv4_ConsIdMap0_56;
        MR_Box conv5_Structs_57;
        MR_Word Var_60;

        TypeCtor_51 = check_hlds__simplify__common__lookup_var_type_ctor_2_f_0(STATE_VARIABLE_Info_81_81, Var_21);
        VarEqv0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_84_84, (MR_Integer) 1))));
        mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), (MR_Word) (&mercury__eqvclass__eqvclass__type_ctor_info_partition_id_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_1[3]), (MR_Word) (&check_hlds__simplify__common_scalar_common_2[4]), ArgVars_23, &ArgVarIds_53, ((MR_Box) (VarEqv0_52)), &conv3_VarEqv1_54);
        VarEqv1_54 = ((MR_Word) (conv3_VarEqv1_54));
        AllStructMap0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_84_84, (MR_Integer) 2))));
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_2[0]), AllStructMap0_55, ((MR_Box) (TypeCtor_51)), &conv4_ConsIdMap0_56);
        if (succeeded)
        {
          ConsIdMap0_56 = ((MR_Word) (conv4_ConsIdMap0_56));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          TypeCtorInfo_139_139 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0);
          TypeInfo_140_140 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[1]);
          succeeded = mercury__map__search_3_p_0(TypeCtorInfo_139_139, TypeInfo_140_140, ConsIdMap0_56, ((MR_Box) (ConsId_22)), &conv5_Structs_57);
          if (succeeded)
          {
            Structs_57 = ((MR_Word) (conv5_Structs_57));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            succeeded = check_hlds__simplify__common__find_matching_cell_construct_4_p_0(Structs_57, VarEqv1_54, ArgVarIds_53, &OldStruct_58);
            if (succeeded)
            {
              InstMapDelta_59 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(STATE_VARIABLE_GoalInfo_0_74);
              succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(InstMapDelta_59, Var_21, &Var_60);
            }
          }
        }
        if (succeeded)
        {
          MR_Word OldVar_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldStruct_58, (MR_Integer) 0))));
          MR_Word VarEqv_63;
          MR_Word STATE_VARIABLE_CommonStruct_86_86;
          MR_Word Var_119;
          MR_Word Var_121;
          MR_Word Var_122;
          MR_Word Var_123;
          MR_Word Var_124;

          mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), ((MR_Box) (Var_21)), ((MR_Box) (OldVar_61)), VarEqv1_54, &VarEqv_63);
          Var_119 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_84_84, (MR_Integer) 0))) & (MR_Integer) 3);
          Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_84_84, (MR_Integer) 2))));
          Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_84_84, (MR_Integer) 3))));
          Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_84_84, (MR_Integer) 4))));
          Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_84_84, (MR_Integer) 5))));
          {
            STATE_VARIABLE_CommonStruct_86_86 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_86_86, 0) = (MR_Box) ((MR_Unsigned) (Var_119));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_86_86, 1) = ((MR_Box) (VarEqv_63));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_86_86, 2) = ((MR_Box) (Var_121));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_86_86, 3) = ((MR_Box) (Var_122));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_86_86, 4) = ((MR_Box) (Var_123));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_86_86, 5) = ((MR_Box) (Var_124));
          }
          if ((ArgVars_23 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_GoalExpr_88_88 = STATE_VARIABLE_GoalExpr_0_72;
            STATE_VARIABLE_GoalInfo_89_89 = STATE_VARIABLE_GoalInfo_0_74;
            *STATE_VARIABLE_Info_79 = STATE_VARIABLE_Info_81_81;
            STATE_VARIABLE_CommonStruct_90_90 = STATE_VARIABLE_CommonStruct_86_86;
          }
          else
          {
            MR_Word LVarFinalInst_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode0_14, (MR_Integer) 1))));
            MR_Word VarFromToInsts_70;
            MR_Integer Cost_71;
            MR_Word STATE_VARIABLE_Info_91_91;
            MR_Word STATE_VARIABLE_Info_92_92;
            MR_Word Var_93;

            {
              VarFromToInsts_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), VarFromToInsts_70, 0) = ((MR_Box) (LVarFinalInst_67));
              MR_hl_field(MR_mktag(0), VarFromToInsts_70, 1) = ((MR_Box) (LVarFinalInst_67));
            }
            check_hlds__simplify__common__generate_assign_10_p_0(Var_21, OldVar_61, VarFromToInsts_70, STATE_VARIABLE_GoalInfo_0_74, &STATE_VARIABLE_GoalExpr_88_88, &STATE_VARIABLE_GoalInfo_89_89, STATE_VARIABLE_CommonStruct_86_86, &STATE_VARIABLE_CommonStruct_90_90, STATE_VARIABLE_Info_81_81, &STATE_VARIABLE_Info_91_91);
            check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_91_91, &STATE_VARIABLE_Info_92_92);
            {
              Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (STATE_VARIABLE_GoalExpr_0_72));
              MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_0_74));
            }
            transform_hlds__pd_cost__goal_cost_2_p_0(Var_93, &Cost_71);
            check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(Cost_71, STATE_VARIABLE_Info_92_92, STATE_VARIABLE_Info_79);
          }
        }
        else
          check_hlds__simplify__common__common_standardize_and_record_construct_13_p_0(Var_21, TypeCtor_51, ConsId_22, ArgVars_23, VarEqv1_54, STATE_VARIABLE_GoalExpr_0_72, &STATE_VARIABLE_GoalExpr_88_88, STATE_VARIABLE_GoalInfo_0_74, &STATE_VARIABLE_GoalInfo_89_89, STATE_VARIABLE_CommonStruct_84_84, &STATE_VARIABLE_CommonStruct_90_90, STATE_VARIABLE_Info_81_81, STATE_VARIABLE_Info_79);
        check_hlds__simplify__common__maybe_restore_original_goal_8_p_0(STATE_VARIABLE_CommonStruct_90_90, Override_33, STATE_VARIABLE_GoalExpr_0_72, STATE_VARIABLE_GoalInfo_0_74, STATE_VARIABLE_GoalExpr_88_88, STATE_VARIABLE_GoalExpr_73, STATE_VARIABLE_GoalInfo_89_89, STATE_VARIABLE_GoalInfo_75);
        check_hlds__simplify__common__record_nonlocals_as_seen_3_p_0(*STATE_VARIABLE_GoalInfo_75, STATE_VARIABLE_CommonStruct_90_90, &STATE_VARIABLE_CommonStruct_101_101);
        {
          MaybeCommonStruct_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeCommonStruct_50, 0) = ((MR_Box) (STATE_VARIABLE_CommonStruct_101_101));
        }
      }
      else
      {
        MaybeCommonStruct_50 = MaybeCommonStruct0_28;
        *STATE_VARIABLE_Info_79 = STATE_VARIABLE_Info_81_81;
        *STATE_VARIABLE_GoalInfo_75 = STATE_VARIABLE_GoalInfo_0_74;
        *STATE_VARIABLE_GoalExpr_73 = STATE_VARIABLE_GoalExpr_0_72;
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Common_77 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeCommonStruct_50));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeConstStruct_32));
    }
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
  MR_Word STATE_VARIABLE_CommonStruct_0_30,
  MR_Word * STATE_VARIABLE_CommonStruct_31,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
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
    MR_Word Context_29;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word VarEqv0_69;
    MR_Word VarEqv_70;
    MR_Word Var_77;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;

    check_hlds__simplify__common__apply_induced_substitutions_4_p_0(ToVar_11, FromVar_12, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
    check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(*STATE_VARIABLE_Info_33, &VarTypes_19);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_19, ToVar_11, &ToVarType_20);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_19, FromVar_12, &FromVarType_21);
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (FromVar_12));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (ToVar_11));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_36));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_35, &NonLocals_22);
    ToVarInit_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ToVarMode_13, (MR_Integer) 0))));
    ToVarFinal_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ToVarMode_13, (MR_Integer) 1))));
    succeeded = check_hlds__simplify__common__types_match_exactly_2_p_0(ToVarType_20, FromVarType_21);
    if (succeeded)
    {
      MR_Word UnifyMode_25;
      MR_Word Var_42;
      MR_Word Var_43;

      {
        UnifyMode_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), UnifyMode_25, 0) = ((MR_Box) (ToVarInit_23));
        MR_hl_field(MR_mktag(0), UnifyMode_25, 1) = ((MR_Box) (ToVarFinal_24));
        MR_hl_field(MR_mktag(0), UnifyMode_25, 2) = ((MR_Box) (ToVarFinal_24));
        MR_hl_field(MR_mktag(0), UnifyMode_25, 3) = ((MR_Box) (ToVarFinal_24));
      }
      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (FromVar_12));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_43, 0) = ((MR_Box) (ToVar_11));
        MR_hl_field(MR_mktag(2), Var_43, 1) = ((MR_Box) (FromVar_12));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_15 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ToVar_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (UnifyMode_25));
        MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (&check_hlds__simplify__common_scalar_common_1[13]));
      }
    }
    else
    {
      MR_Word Modes_27;
      MR_Word Var_44;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_52;
      MR_Word Var_53;

      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (ToVarFinal_24));
        MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (ToVarFinal_24));
      }
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (ToVarFinal_24));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Modes_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Modes_27, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), Modes_27, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (ToVar_11));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (FromVar_12));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_53));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_15 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__common_scalar_common_3[3])));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Modes_27));
        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (ToVar_11));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (ToVarFinal_24));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    InstMapDelta_28 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_57);
    Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(OldGoalInfo_14);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_22, InstMapDelta_28, (MR_Integer) 0, (MR_Integer) 0, Context_29, GoalInfo_16);
    VarEqv0_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_30, (MR_Integer) 1))));
    mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), ((MR_Box) (ToVar_11)), ((MR_Box) (FromVar_12)), VarEqv0_69, &VarEqv_70);
    Var_77 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_30, (MR_Integer) 0))) & (MR_Integer) 3);
    Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_30, (MR_Integer) 2))));
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_30, (MR_Integer) 3))));
    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_30, (MR_Integer) 4))));
    Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_30, (MR_Integer) 5))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CommonStruct_31 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (Var_77));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarEqv_70));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_82));
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
  MR_Word TypeA_3,
  MR_Word TypeB_4)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) TypeA_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeInfo_45_45;
          MR_Word TVar_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeA_3, (MR_Integer) 0))));
          MR_Word Var_33;

          succeeded = ((MR_tag((MR_Word) TypeB_4)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeB_4, (MR_Integer) 0))));
            TypeInfo_45_45 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (TVar_5)), ((MR_Box) (Var_33)));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Name_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeA_3, (MR_Integer) 0))));
          MR_Word ArgTypesA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeA_3, (MR_Integer) 1))));
          MR_Word ArgTypesB_11;
          MR_Word Var_34;

          succeeded = ((MR_tag((MR_Word) TypeB_4)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeB_4, (MR_Integer) 0))));
            ArgTypesB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeB_4, (MR_Integer) 1))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_8, Var_34);
            if (succeeded)
              succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(ArgTypesA_9, ArgTypesB_11);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeA_3, (MR_Integer) 0))));
          MR_Word Var_35;

          succeeded = ((MR_tag((MR_Word) TypeB_4)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeB_4, (MR_Integer) 0))));
            succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_13, Var_35);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeA_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypesA_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_3, (MR_Integer) 1))));
              MR_Word ArgTypesB_29;

              succeeded = ((((MR_tag((MR_Word) TypeB_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_4, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgTypesB_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_4, (MR_Integer) 1))));
                succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(ArgTypesA_28, ArgTypesB_29);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeA_3, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word H_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_3, (MR_Integer) 3))));
              MR_Word P_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeA_3, (MR_Integer) 4))) & (MR_Integer) 3);
              MR_Word ArgTypesA_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_3, (MR_Integer) 2))));
              MR_Word ArgTypesB_27;
              MR_Word Var_36;
              MR_Word Var_37;
              MR_Word Var_38;

              succeeded = ((((MR_tag((MR_Word) TypeB_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeB_4, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgTypesB_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_4, (MR_Integer) 2))));
                Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_4, (MR_Integer) 3))));
                Var_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeB_4, (MR_Integer) 4))) & (MR_Integer) 3);
                succeeded = (PorF_14 == Var_36);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____ho_inst_info_0_0(H_15, Var_37);
                  if (succeeded)
                  {
                    succeeded = (P_16 == Var_38);
                    if (succeeded)
                    {
                      succeeded = MR_TRUE;
                      if (succeeded)
                        succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(ArgTypesA_26, ArgTypesB_27);
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_41_41;
              MR_Word TVar_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_3, (MR_Integer) 1))));
              MR_Word ArgTypesA_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_3, (MR_Integer) 2))));
              MR_Word ArgTypesB_32;
              MR_Word Var_40;

              succeeded = ((((MR_tag((MR_Word) TypeB_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_4, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_4, (MR_Integer) 1))));
                ArgTypesB_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_4, (MR_Integer) 2))));
                TypeInfo_41_41 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_41, ((MR_Box) (TVar_30)), ((MR_Box) (Var_40)));
                if (succeeded)
                  succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(ArgTypesA_31, ArgTypesB_32);
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
      MR_Word TypeA_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypesA_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeB_5;
      MR_Word TypesB_6;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeB_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TypesB_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        switch (MR_tag((MR_Word) TypeA_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_45_49;
              MR_Word TVar_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeA_3, (MR_Integer) 0))));
              MR_Word Var_37;

              succeeded = ((MR_tag((MR_Word) TypeB_5)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeB_5, (MR_Integer) 0))));
                TypeInfo_45_49 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_49, ((MR_Box) (TVar_9)), ((MR_Box) (Var_37)));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Name_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeA_3, (MR_Integer) 0))));
              MR_Word ArgTypesA_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeA_3, (MR_Integer) 1))));
              MR_Word ArgTypesB_15;
              MR_Word Var_38;

              succeeded = ((MR_tag((MR_Word) TypeB_5)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeB_5, (MR_Integer) 0))));
                ArgTypesB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeB_5, (MR_Integer) 1))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_12, Var_38);
                if (succeeded)
                  succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(ArgTypesA_13, ArgTypesB_15);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word BuiltinType_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeA_3, (MR_Integer) 0))));
              MR_Word Var_39;

              succeeded = ((MR_tag((MR_Word) TypeB_5)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeB_5, (MR_Integer) 0))));
                succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_17, Var_39);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeA_3, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgTypesA_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_3, (MR_Integer) 1))));
                  MR_Word ArgTypesB_33;

                  succeeded = ((((MR_tag((MR_Word) TypeB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgTypesB_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_5, (MR_Integer) 1))));
                    succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(ArgTypesA_32, ArgTypesB_33);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PorF_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeA_3, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word H_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_3, (MR_Integer) 3))));
                  MR_Word P_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeA_3, (MR_Integer) 4))) & (MR_Integer) 3);
                  MR_Word ArgTypesA_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_3, (MR_Integer) 2))));
                  MR_Word ArgTypesB_31;
                  MR_Word Var_40;
                  MR_Word Var_41;
                  MR_Word Var_42;

                  succeeded = ((((MR_tag((MR_Word) TypeB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeB_5, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgTypesB_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_5, (MR_Integer) 2))));
                    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_5, (MR_Integer) 3))));
                    Var_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeB_5, (MR_Integer) 4))) & (MR_Integer) 3);
                    succeeded = (PorF_18 == Var_40);
                    if (succeeded)
                    {
                      succeeded = parse_tree__prog_data____Unify____ho_inst_info_0_0(H_19, Var_41);
                      if (succeeded)
                      {
                        succeeded = (P_20 == Var_42);
                        if (succeeded)
                        {
                          succeeded = MR_TRUE;
                          if (succeeded)
                            succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(ArgTypesA_30, ArgTypesB_31);
                        }
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word TypeInfo_41_45;
                  MR_Word TVar_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_3, (MR_Integer) 1))));
                  MR_Word ArgTypesA_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_3, (MR_Integer) 2))));
                  MR_Word ArgTypesB_36;
                  MR_Word Var_44;

                  succeeded = ((((MR_tag((MR_Word) TypeB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_5, (MR_Integer) 1))));
                    ArgTypesB_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_5, (MR_Integer) 2))));
                    TypeInfo_41_45 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[4]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_45, ((MR_Box) (TVar_34)), ((MR_Box) (Var_44)));
                    if (succeeded)
                      succeeded = check_hlds__simplify__common__types_match_exactly_list_2_p_0(ArgTypesA_35, ArgTypesB_36);
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
          next_value_of_HeadVar__1_1 = TypesA_4;
          next_value_of_HeadVar__2_2 = TypesB_6;
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

static void MR_CALL 
check_hlds__simplify__common__generate_assign_from_const_struct_11_p_0(
  MR_Word Unification0_12,
  MR_Word UnifyMode0_13,
  MR_Word UnifyContext0_14,
  MR_Word CSAs_15,
  MR_Word OldGoalInfo_16,
  MR_Word * ConstGoalExpr_17,
  MR_Word * ConstGoalInfo_18,
  MR_Word VarMap0_19,
  MR_Word * VarMap_20,
  MR_Word STATE_VARIABLE_Info_0_56,
  MR_Word * STATE_VARIABLE_Info_57)
{
  {
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_12, (MR_Integer) 0))));
    MR_Word ConsId_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_12, (MR_Integer) 1))));
    MR_Word SubInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_12, (MR_Integer) 6))));
    MR_Word VarTypes_29;
    MR_Word Type_30;
    MR_Word ToVarInit_31;
    MR_Word ToVarFinal_32;
    MR_Word ModuleInfo0_35;
    MR_Word PredId_36;
    MR_Word PredInfo_38;
    MR_Word PredStatus_39;
    MR_Word DefnThisModule_40;
    MR_Word Where_41;
    MR_Word Struct_42;
    MR_Word ConstStructDb0_43;
    MR_Integer ConstNum_44;
    MR_Word ConstStructDb_45;
    MR_Word ModuleInfo_46;
    MR_Word ConstConsId_47;
    MR_Word ConstRHS_48;
    MR_Word ConstUnifyMode_49;
    MR_Word ConstUnification_52;
    MR_Word NonLocals_53;
    MR_Word InstMapDelta_54;
    MR_Word Context_55;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word Var_67;
    MR_Word Var_68;

    check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_56, &VarTypes_29);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_29, Var_22, &Type_30);
    ToVarInit_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode0_13, (MR_Integer) 0))));
    ToVarFinal_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode0_13, (MR_Integer) 1))));
    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_56, &ModuleInfo0_35);
    check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_56, &Var_58);
    PredId_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_58, (MR_Integer) 0))));
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo0_35, PredId_36, &PredInfo_38);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_38, &PredStatus_39);
    DefnThisModule_40 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_39);
    switch (DefnThisModule_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Where_41 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        Where_41 = (MR_Integer) 0;
        break;
    }
    {
      Struct_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Struct_42, 0) = ((MR_Box) (ConsId_23));
      MR_hl_field(MR_mktag(0), Struct_42, 1) = ((MR_Box) (CSAs_15));
      MR_hl_field(MR_mktag(0), Struct_42, 2) = ((MR_Box) (Type_30));
      MR_hl_field(MR_mktag(0), Struct_42, 3) = ((MR_Box) (ToVarFinal_32));
      MR_hl_field(MR_mktag(0), Struct_42, 4) = (MR_Box) ((MR_Unsigned) (Where_41));
    }
    hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo0_35, &ConstStructDb0_43);
    hlds__const_struct__lookup_insert_const_struct_4_p_0(Struct_42, &ConstNum_44, ConstStructDb0_43, &ConstStructDb_45);
    hlds__hlds_module__module_info_set_const_struct_db_3_p_0(ConstStructDb_45, ModuleInfo0_35, &ModuleInfo_46);
    check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(ModuleInfo_46, STATE_VARIABLE_Info_0_56, STATE_VARIABLE_Info_57);
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (ConstNum_44));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), (MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), ((MR_Box) (Var_22)), ((MR_Box) (Var_60)), VarMap0_19, VarMap_20);
    {
      ConstConsId_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConstConsId_47, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(MR_mktag(3), ConstConsId_47, 1) = ((MR_Box) (ConstNum_44));
      MR_hl_field(MR_mktag(3), ConstConsId_47, 2) = ((MR_Box) (ConsId_23));
    }
    {
      ConstRHS_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ConstRHS_48, 0) = ((MR_Box) (ConstConsId_47));
      MR_hl_field(MR_mktag(1), ConstRHS_48, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), ConstRHS_48, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ConstUnifyMode_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ConstUnifyMode_49, 0) = ((MR_Box) (ToVarInit_31));
      MR_hl_field(MR_mktag(0), ConstUnifyMode_49, 1) = ((MR_Box) (ToVarFinal_32));
      MR_hl_field(MR_mktag(0), ConstUnifyMode_49, 2) = ((MR_Box) (ToVarFinal_32));
      MR_hl_field(MR_mktag(0), ConstUnifyMode_49, 3) = ((MR_Box) (ToVarFinal_32));
    }
    {
      ConstUnification_52 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ConstUnification_52, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), ConstUnification_52, 1) = ((MR_Box) (ConstConsId_47));
      MR_hl_field(MR_mktag(0), ConstUnification_52, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ConstUnification_52, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ConstUnification_52, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ConstUnification_52, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ConstUnification_52, 6) = ((MR_Box) (SubInfo_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *ConstGoalExpr_17 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ConstRHS_48));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ConstUnifyMode_49));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ConstUnification_52));
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (UnifyContext0_14));
    }
    parse_tree__set_of_var__make_singleton_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_22, &NonLocals_53);
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (ToVarFinal_32));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    InstMapDelta_54 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_67);
    Context_55 = hlds__hlds_goal__goal_info_get_context_1_f_0(OldGoalInfo_16);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_53, InstMapDelta_54, (MR_Integer) 0, (MR_Integer) 0, Context_55, ConstGoalInfo_18);
  }
}

static void MR_CALL 
check_hlds__simplify__common__record_nonlocals_as_seen_3_p_0(
  MR_Word GoalInfo_4,
  MR_Word STATE_VARIABLE_CommonStruct_0_9,
  MR_Word * STATE_VARIABLE_CommonStruct_10)
{
  {
    MR_Word NonLocals_6;
    MR_Word SinceCallVars0_7;
    MR_Word SinceCallVars_8;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_22;

    NonLocals_6 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_4);
    SinceCallVars0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_9, (MR_Integer) 4))));
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_6, SinceCallVars0_7, &SinceCallVars_8);
    Var_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_9, (MR_Integer) 0))) & (MR_Integer) 3);
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_9, (MR_Integer) 1))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_9, (MR_Integer) 2))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_9, (MR_Integer) 3))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_9, (MR_Integer) 5))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CommonStruct_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (SinceCallVars_8));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__common__maybe_restore_original_goal_8_p_0(
  MR_Word CommonStruct_9,
  MR_Word Override_10,
  MR_Word GoalExpr0_11,
  MR_Word GoalInfo0_12,
  MR_Word STATE_VARIABLE_GoalExpr_0_16,
  MR_Word * STATE_VARIABLE_GoalExpr_17,
  MR_Word STATE_VARIABLE_GoalInfo_0_18,
  MR_Word * STATE_VARIABLE_GoalInfo_19)
{
  {
    MR_Word CommonStructTask_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CommonStruct_9, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word STATE_VARIABLE_GoalExpr_20_20;
    MR_Word STATE_VARIABLE_GoalInfo_21_21;

    switch (CommonStructTask_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          STATE_VARIABLE_GoalExpr_20_20 = STATE_VARIABLE_GoalExpr_0_16;
          STATE_VARIABLE_GoalInfo_21_21 = STATE_VARIABLE_GoalInfo_0_18;
        }
        break;
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_GoalExpr_20_20 = GoalExpr0_11;
          STATE_VARIABLE_GoalInfo_21_21 = GoalInfo0_12;
        }
        break;
      case (MR_Integer) 1:
        {
          STATE_VARIABLE_GoalExpr_20_20 = STATE_VARIABLE_GoalExpr_0_16;
          STATE_VARIABLE_GoalInfo_21_21 = STATE_VARIABLE_GoalInfo_0_18;
        }
        break;
    }
    if ((Override_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_GoalExpr_17 = STATE_VARIABLE_GoalExpr_20_20;
      *STATE_VARIABLE_GoalInfo_19 = STATE_VARIABLE_GoalInfo_21_21;
    }
    else
    {
      *STATE_VARIABLE_GoalExpr_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Override_10, (MR_Integer) 0))));
      *STATE_VARIABLE_GoalInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Override_10, (MR_Integer) 1))));
    }
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

static MR_Word MR_CALL 
check_hlds__simplify__common__lookup_var_type_ctor_2_f_0(
  MR_Word Info_4,
  MR_Word Var_5)
{
  {
    MR_Word TypeCtor_6;
    MR_Word VarTypes_7;
    MR_Word Type_8;

    check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(Info_4, &VarTypes_7);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_7, Var_5, &Type_8);
    parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_8, &TypeCtor_6);
    return TypeCtor_6;
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
  MR_Word STATE_VARIABLE_CommonStruct_0_40,
  MR_Word * STATE_VARIABLE_CommonStruct_41,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43)
{
  {
    MR_bool succeeded;
    MR_Word SinceCallVars_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_40, (MR_Integer) 4))));
    MR_Word ArgRepnVars_26;
    MR_Word Struct_39;
    MR_Word Var_44;
    MR_Word STATE_VARIABLE_CommonStruct_46_46;

    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&check_hlds__simplify__common_scalar_common_4[0]));
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
      STATE_VARIABLE_CommonStruct_46_46 = STATE_VARIABLE_CommonStruct_0_40;
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
      MR_Word TypeInfo_73_73;
      MR_Word TypeInfo_75_75;
      MR_Word TypeInfo_76_76;
      MR_Word TypeInfo_78_78;
      MR_Word RHS0_27;
      MR_Word Unification0_29;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;

      succeeded = ((MR_tag((MR_Word) GoalExpr0_19)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_19, (MR_Integer) 0))));
        RHS0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_19, (MR_Integer) 1))));
        UnifyMode_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_19, (MR_Integer) 2))));
        Unification0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_19, (MR_Integer) 3))));
        Ctxt_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_19, (MR_Integer) 4))));
        TypeInfo_73_73 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_73_73, ((MR_Box) (Var_14)), ((MR_Box) (Var_66)));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) RHS0_27)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS0_27, (MR_Integer) 0))));
            IsExistConstr_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), RHS0_27, (MR_Integer) 1))) & (MR_Integer) 1);
            Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS0_27, (MR_Integer) 2))));
            succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_16, Var_67);
            if (succeeded)
            {
              TypeInfo_75_75 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_75_75, ((MR_Box) (ArgVars_17)), ((MR_Box) (Var_68)));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Unification0_29)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_29, (MR_Integer) 0))));
                  Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_29, (MR_Integer) 1))));
                  Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_29, (MR_Integer) 2))));
                  ArgModes_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_29, (MR_Integer) 3))));
                  How_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_29, (MR_Integer) 4))));
                  Uniq_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Unification0_29, (MR_Integer) 5))) & (MR_Integer) 1);
                  SubInfo_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_29, (MR_Integer) 6))));
                  TypeInfo_76_76 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_76_76, ((MR_Box) (Var_14)), ((MR_Box) (Var_69)));
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_16, Var_70);
                    if (succeeded)
                    {
                      TypeInfo_78_78 = (MR_Word) (&check_hlds__simplify__common_scalar_common_1[5]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_78_78, ((MR_Box) (ArgVars_17)), ((MR_Box) (Var_71)));
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
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_61;

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
        Var_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_40, (MR_Integer) 0))) & (MR_Integer) 3);
        Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_40, (MR_Integer) 2))));
        Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_40, (MR_Integer) 3))));
        Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_40, (MR_Integer) 4))));
        Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_40, (MR_Integer) 5))));
        {
          STATE_VARIABLE_CommonStruct_46_46 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_46_46, 0) = (MR_Box) ((MR_Unsigned) (Var_56));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_46_46, 1) = ((MR_Box) (VarEqv_18));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_46_46, 2) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_46_46, 3) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_46_46, 4) = ((MR_Box) (Var_60));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_46_46, 5) = ((MR_Box) (Var_61));
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
    check_hlds__simplify__common__record_cell_in_maps_6_p_0(TypeCtor_15, ConsId_16, Struct_39, VarEqv_18, STATE_VARIABLE_CommonStruct_46_46, STATE_VARIABLE_CommonStruct_41);
  }
}

static void MR_CALL 
check_hlds__simplify__common__record_cell_in_maps_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word ConsId_8,
  MR_Word Struct_9,
  MR_Word VarEqv_10,
  MR_Word STATE_VARIABLE_CommonStruct_0_16,
  MR_Word * STATE_VARIABLE_CommonStruct_17)
{
  {
    MR_bool succeeded;
    MR_Word AllStructMap0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_16, (MR_Integer) 2))));
    MR_Word SinceCallStructMap0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_16, (MR_Integer) 3))));
    MR_Word AllStructMap_14;
    MR_Word SinceCallStructMap_15;
    MR_Word Var_31;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word ConsIdMap0_55;
    MR_Box conv0_ConsIdMap0_55;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_2[0]), AllStructMap0_12, ((MR_Box) (TypeCtor_7)), &conv0_ConsIdMap0_55);
    if (succeeded)
    {
      ConsIdMap0_55 = ((MR_Word) (conv0_ConsIdMap0_55));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ConsIdMap_58;
      MR_Word Structs0_56;
      MR_Box conv1_Structs0_56;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_1[1]), ConsIdMap0_55, ((MR_Box) (ConsId_8)), &conv1_Structs0_56);
      if (succeeded)
      {
        Structs0_56 = ((MR_Word) (conv1_Structs0_56));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Structs_57;

        {
          Structs_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Structs_57, 0) = ((MR_Box) (Struct_9));
          MR_hl_field(MR_mktag(1), Structs_57, 1) = ((MR_Box) (Structs0_56));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_1[1]), ((MR_Box) (ConsId_8)), ((MR_Box) (Structs_57)), ConsIdMap0_55, &ConsIdMap_58);
      }
      else
      {
        MR_Word Var_59;

        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Struct_9));
          MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_1[1]), ((MR_Box) (ConsId_8)), ((MR_Box) (Var_59)), ConsIdMap0_55, &ConsIdMap_58);
      }
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_2[0]), ((MR_Box) (TypeCtor_7)), ((MR_Box) (ConsIdMap_58)), AllStructMap0_12, &AllStructMap_14);
    }
    else
    {
      MR_Word Var_62;
      MR_Word ConsIdMap_65;

      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Struct_9));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ConsIdMap_65 = mercury__map__singleton_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_1[1]), ((MR_Box) (ConsId_8)), ((MR_Box) (Var_62)));
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_2[0]), ((MR_Box) (TypeCtor_7)), ((MR_Box) (ConsIdMap_65)), AllStructMap0_12, &AllStructMap_14);
    }
    check_hlds__simplify__common__do_record_cell_in_struct_map_5_p_0(TypeCtor_7, ConsId_8, Struct_9, SinceCallStructMap0_13, &SinceCallStructMap_15);
    Var_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_16, (MR_Integer) 0))) & (MR_Integer) 3);
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_16, (MR_Integer) 4))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonStruct_0_16, (MR_Integer) 5))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CommonStruct_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (Var_31));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarEqv_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (AllStructMap_14));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (SinceCallStructMap_15));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_36));
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

static MR_bool MR_CALL 
check_hlds__simplify__common__how_to_construct_is_acceptable_2_p_0(
  MR_Word Info_3,
  MR_Word How_4)
{
  {
    MR_bool succeeded;

    if ((How_4 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) How_4)) == (MR_Integer) 2))
    {
      MR_Word Var_7;

      check_hlds__simplify__simplify_info__simplify_info_get_ignore_marked_static_2_p_0(Info_3, &Var_7);
      succeeded = ((MR_Integer) 1 == Var_7);
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common__all_vars_are_const_struct_args_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word ArgVar_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgVars_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word CSA_8;
      MR_Word CSAs_9;
      MR_Box conv0_CSA_8;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), (MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), HeadVar__1_1, ((MR_Box) (ArgVar_6)), &conv0_CSA_8);
      if (succeeded)
      {
        CSA_8 = ((MR_Word) (conv0_CSA_8));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = check_hlds__simplify__common__all_vars_are_const_struct_args_3_p_0(HeadVar__1_1, ArgVars_7, &CSAs_9);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CSA_8));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CSAs_9));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__common__common_info_stack_flush_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  {
    MR_Word MaybeCommonStruct0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 0))));
    MR_Word ConstStruct_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 1))));

    if ((MaybeCommonStruct0_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
    else
    {
      MR_Word CommonStruct0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCommonStruct0_4, (MR_Integer) 0))));
      MR_Word Task_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CommonStruct0_6, (MR_Integer) 0))) & (MR_Integer) 3);

      switch (Task_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_Word CommonStruct_8;
            MR_Word Var_11;
            MR_Word Var_12;
            MR_Word Var_13;
            MR_Word Var_15;
            MR_Word Var_21;
            MR_Word Var_22;
            MR_Word Var_23;
            MR_Word Var_25;
            MR_Word Var_26;
            MR_Word Var_27;
            MR_Word Var_28;
            MR_Word Var_29;
            MR_Word Var_30;
            MR_Word Var_32;

            Var_13 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_2[0]));
            Var_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CommonStruct0_6, (MR_Integer) 0))) & (MR_Integer) 3);
            Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CommonStruct0_6, (MR_Integer) 1))));
            Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CommonStruct0_6, (MR_Integer) 2))));
            Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CommonStruct0_6, (MR_Integer) 4))));
            Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CommonStruct0_6, (MR_Integer) 5))));
            {
              Var_11 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_11, 0) = (MR_Box) ((MR_Unsigned) (Var_21));
              MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (Var_22));
              MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) (Var_23));
              MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (Var_13));
              MR_hl_field(MR_mktag(0), Var_11, 4) = ((MR_Box) (Var_25));
              MR_hl_field(MR_mktag(0), Var_11, 5) = ((MR_Box) (Var_26));
            }
            Var_12 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            Var_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))) & (MR_Integer) 3);
            Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));
            Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 2))));
            Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 3))));
            Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 5))));
            {
              CommonStruct_8 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CommonStruct_8, 0) = (MR_Box) ((MR_Unsigned) (Var_27));
              MR_hl_field(MR_mktag(0), CommonStruct_8, 1) = ((MR_Box) (Var_28));
              MR_hl_field(MR_mktag(0), CommonStruct_8, 2) = ((MR_Box) (Var_29));
              MR_hl_field(MR_mktag(0), CommonStruct_8, 3) = ((MR_Box) (Var_30));
              MR_hl_field(MR_mktag(0), CommonStruct_8, 4) = ((MR_Box) (Var_12));
              MR_hl_field(MR_mktag(0), CommonStruct_8, 5) = ((MR_Box) (Var_32));
            }
            {
              Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (CommonStruct_8));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_15));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ConstStruct_5));
            }
          }
          break;
      }
    }
  }
}

MR_Word MR_CALL 
check_hlds__simplify__common__common_info_init_1_f_0(
  MR_Word SimplifyTasks_3)
{
  {
    MR_bool succeeded;
    MR_Word Common_4;
    MR_Word OptCommonStructs_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
    MR_Word MaybeCommonStructTask_7;
    MR_Word MaybeCommonStruct_10;
    MR_Word OptConstStruct_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word MaybeConstStruct_20;
    MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 17)) & (MR_Integer) 1);
    MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
    MR_Word Var_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);

    switch (OptCommonStructs_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          succeeded = (Var_26 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (Var_35 == (MR_Integer) 0);
          if (succeeded)
            MaybeCommonStructTask_7 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__common_scalar_common_3[0]));
          else
            MaybeCommonStructTask_7 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 0:
        switch (Var_37) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MaybeCommonStructTask_7 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__common_scalar_common_3[1]));
            break;
          case (MR_Integer) 1:
            MaybeCommonStructTask_7 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__common_scalar_common_3[2]));
            break;
        }
        break;
    }
    if ((MaybeCommonStructTask_7 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeCommonStruct_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word CommonStructTask_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCommonStructTask_7, (MR_Integer) 0))));
      MR_Word VarEqv0_12;
      MR_Word StructMap0_13;
      MR_Word SinceCallVars0_14;
      MR_Word SeenCalls0_15;
      MR_Word CommonStruct_16;

      mercury__eqvclass__init_1_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), &VarEqv0_12);
      mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_2[0]), &StructMap0_13);
      parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &SinceCallVars0_14);
      mercury__map__init_1_p_0((MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0), (MR_Word) (&check_hlds__simplify__common_scalar_common_1[2]), &SeenCalls0_15);
      {
        CommonStruct_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CommonStruct_16, 0) = (MR_Box) ((MR_Unsigned) (CommonStructTask_11));
        MR_hl_field(MR_mktag(0), CommonStruct_16, 1) = ((MR_Box) (VarEqv0_12));
        MR_hl_field(MR_mktag(0), CommonStruct_16, 2) = ((MR_Box) (StructMap0_13));
        MR_hl_field(MR_mktag(0), CommonStruct_16, 3) = ((MR_Box) (StructMap0_13));
        MR_hl_field(MR_mktag(0), CommonStruct_16, 4) = ((MR_Box) (SinceCallVars0_14));
        MR_hl_field(MR_mktag(0), CommonStruct_16, 5) = ((MR_Box) (SeenCalls0_15));
      }
      {
        MaybeCommonStruct_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeCommonStruct_10, 0) = ((MR_Box) (CommonStruct_16));
      }
    }
    switch (OptConstStruct_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeConstStruct_20 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word ConstVarMap0_18;
          MR_Word ConstStruct_19;

          mercury__map__init_1_p_0((MR_Word) (&check_hlds__simplify__common_scalar_common_1[0]), (MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), &ConstVarMap0_18);
          ConstStruct_19 = (MR_Word) (ConstVarMap0_18);
          {
            MaybeConstStruct_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeConstStruct_20, 0) = ((MR_Box) (ConstStruct_19));
          }
        }
        break;
    }
    {
      Common_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Common_4, 0) = ((MR_Box) (MaybeCommonStruct_10));
      MR_hl_field(MR_mktag(0), Common_4, 1) = ((MR_Box) (MaybeConstStruct_20));
    }
    return Common_4;
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
check_hlds__simplify__common____Unify____common_struct_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__common____Unify____common_struct_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____common_struct_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__common____Compare____common_struct_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____common_struct_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__common____Unify____common_struct_task_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____common_struct_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__common____Compare____common_struct_task_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
check_hlds__simplify__common____Unify____const_struct_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__common____Unify____const_struct_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____const_struct_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__common____Compare____const_struct_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____const_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__common____Unify____const_var_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____const_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__common____Compare____const_var_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__common____Unify____maybe_override_by_const_struct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__common____Unify____maybe_override_by_const_struct_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__common____Compare____maybe_override_by_const_struct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__common____Compare____maybe_override_by_const_struct_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_common_struct_info_0);
	MR_register_type_ctor_info(&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_common_struct_task_0);
	MR_register_type_ctor_info(&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_cons_id_map_0);
	MR_register_type_ctor_info(&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_const_struct_info_0);
	MR_register_type_ctor_info(&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_const_var_map_0);
	MR_register_type_ctor_info(&check_hlds__simplify__common__check_hlds__simplify__common__type_ctor_info_maybe_override_by_const_struct_0);
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
