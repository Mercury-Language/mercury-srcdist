/*
** Automatically generated from `typecheck_clauses.m'
** by the Mercury compiler,
** version rotd-2024-08-26
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


// :- module check_hlds.typecheck_clauses.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck_clauses__init
ENDINIT
*/

#include "check_hlds.typecheck_clauses.mih"


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
#include "getopt.mih"
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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_assign.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.typecheck_coerce.mih"
#include "check_hlds.typecheck_debug.mih"
#include "check_hlds.typecheck_error_overload.mih"
#include "check_hlds.typecheck_error_type_assign.mih"
#include "check_hlds.typecheck_error_undef.mih"
#include "check_hlds.typecheck_error_util.mih"
#include "check_hlds.typecheck_errors.mih"
#include "check_hlds.typecheck_info.mih"
#include "check_hlds.typecheck_unify_var_functor.mih"
#include "check_hlds.typecheck_util.mih"
#include "check_hlds.typeclasses.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_event.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_construct.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_unify.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_clauses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_clauses__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_clauses__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_clauses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_stuff_to_check_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_stuff_to_check_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_ordinal_ordered_stuff_to_check_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_name_ordered_stuff_to_check_0[2];

static const MR_Integer check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__functor_number_map_stuff_to_check_0[2];

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__IntroducedFrom__pred__typecheck_goal_expr__478__1_2_p_0(
  MR_Word GoalType_94,
  MR_Word HeadVar__2_228);

static void MR_CALL 
check_hlds__typecheck_clauses__compute_headvar_types_in_type_assign_3_p_0(
  MR_Word HeadVars_4,
  MR_Word TypeAssign_5,
  MR_Word * HeadTypes_6);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_var_has_stm_atomic_type_6_p_0(
  MR_Word Context_7,
  MR_Word Var_8,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_11,
  MR_Word * STATE_VARIABLE_TypeAssignSet_12,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_clauses_loop_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_clauses_loop_9_p_0(
  MR_Word HeadVars_1,
  MR_Word ArgTypes_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevClauses_0_4,
  MR_Word * STATE_VARIABLE_RevClauses_5,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_6,
  MR_Word * STATE_VARIABLE_TypeAssignSet_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_unification_10_p_0(
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word GoalId_13,
  MR_Word LHSVar_14,
  MR_Word RHS0_15,
  MR_Word * RHS_16,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_34,
  MR_Word * STATE_VARIABLE_TypeAssignSet_35,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_case_list_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word Context_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_list_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word Context_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0_3(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_115,
  MR_Word * STATE_VARIABLE_TypeAssignSet_116,
  MR_Word STATE_VARIABLE_Info_0_117,
  MR_Word * STATE_VARIABLE_Info_118);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_7_p_0(
  MR_Word Goal0_8,
  MR_Word * Goal_9,
  MR_Word EnclosingContext_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_28,
  MR_Word * STATE_VARIABLE_TypeAssignSet_29,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static void MR_CALL 
check_hlds__typecheck_clauses__ensure_vars_have_a_single_type_7_p_0(
  MR_Word VarVectorKind_8,
  MR_Word Context_9,
  MR_Word Vars_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_21,
  MR_Word * STATE_VARIABLE_TypeAssignSet_22,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
check_hlds__typecheck_clauses__ensure_vars_have_a_type_7_p_0(
  MR_Word VarVectorKind_8,
  MR_Word Context_9,
  MR_Word Vars_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_20,
  MR_Word * STATE_VARIABLE_TypeAssignSet_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_var_has_type_8_p_0(
  MR_Word GoalContext_9,
  MR_Word Context_10,
  MR_Word Var_11,
  MR_Word Type_12,
  MR_Word TypeAssignSet0_13,
  MR_Word * TypeAssignSet_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_lambda_var_has_type_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Purity_2,
  MR_Word PredOrFunc_3,
  MR_Word Var_4,
  MR_Word ArgVars_5,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_6,
  MR_Word * STATE_VARIABLE_TypeAssignSet_7);

static void MR_CALL 
check_hlds__typecheck_clauses__type_assign_get_types_of_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_TypeAssign_0_3,
  MR_Word * STATE_VARIABLE_TypeAssign_4);

static void MR_CALL 
check_hlds__typecheck_clauses__type_assigns_unify_var_var_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word X_2,
  MR_Word Y_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_event_call_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_event_call_7_p_0(
  MR_Word Context_8,
  MR_String EventName_9,
  MR_Word ArgVars_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_21,
  MR_Word * STATE_VARIABLE_TypeAssignSet_22,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_higher_order_call_9_p_0(
  MR_Word GenericCallId_10,
  MR_Word Context_11,
  MR_Word PredVar_12,
  MR_Word Purity_13,
  MR_Word ArgVars_14,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_23,
  MR_Word * STATE_VARIABLE_TypeAssignSet_24,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_plain_or_foreign_call_pred_id_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_plain_or_foreign_call_pred_id_9_p_0(
  MR_Word ArgVectorKind_10,
  MR_Word Context_11,
  MR_Word GoalId_12,
  MR_Word PredId_13,
  MR_Word ArgVars_14,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_25,
  MR_Word * STATE_VARIABLE_TypeAssignSet_26,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_plain_call_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_plain_call_9_p_0(
  MR_Word SymName_10,
  MR_Word Context_11,
  MR_Word GoalId_12,
  MR_Word ArgVars_13,
  MR_Word * PredId_14,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_30,
  MR_Word * STATE_VARIABLE_TypeAssignSet_31,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_vars_have_types_in_arg_vector_12_p_0(
  MR_Word Info_1,
  MR_Word Context_2,
  MR_Word ArgVectorKind_3,
  MR_Integer ArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_7,
  MR_Word * STATE_VARIABLE_TypeAssignSet_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10,
  MR_Word STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11,
  MR_Word * STATE_VARIABLE_MaybeArgVectorTypeErrors_12);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_var_has_type_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Var_2,
  MR_Word Type_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_vars_have_arg_types_8_p_0(
  MR_Word VarVectorKind_1,
  MR_Word Context_2,
  MR_Integer CurArgNum_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ArgsTypeAssignSet_0_5,
  MR_Word * STATE_VARIABLE_ArgsTypeAssignSet_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_var_has_arg_type_in_args_type_assigns_5_p_0(
  MR_Integer ArgNum_1,
  MR_Word Var_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ArgsTypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_ArgsTypeAssignSet_5);

static void MR_CALL 
check_hlds__typecheck_clauses__get_overloaded_pred_arg_types_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_ArgsTypeAssignSet_0_6,
  MR_Word * STATE_VARIABLE_ArgsTypeAssignSet_7);

static void MR_CALL 
check_hlds__typecheck_clauses__add_renamed_apart_arg_type_assigns_8_p_0(
  MR_Word Source_1,
  MR_Word PredTypeVarSet_2,
  MR_Word PredExistQVars_3,
  MR_Word PredArgTypes_4,
  MR_Word PredConstraints_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_ArgsTypeAssigns_0_7,
  MR_Word * STATE_VARIABLE_ArgsTypeAssigns_8);

static MR_Word MR_CALL 
check_hlds__typecheck_clauses__atomic_interface_list_to_var_list_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_check_for_ambiguity_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__all_identical_up_to_renaming_2_p_0(
  MR_Word HeadTypes1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____stuff_to_check_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____stuff_to_check_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_1[6][2];

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_2[1][1];

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_3[2][6];

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_4[5][3];

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_5[2][5];

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_6[1][9];




static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_1[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_2[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_3[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck_clauses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_4[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck_clauses__typecheck_plain_call_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck_clauses__typecheck_plain_or_foreign_call_pred_id_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck_clauses__typecheck_event_call_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_5[0])),
    ((MR_Box) (check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck_clauses__typecheck_clauses_loop_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_5[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_goal_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_goal_type_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_6[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_clauses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_clauses__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_clauses__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_clauses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0) }
};

static const MR_EnumFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_stuff_to_check_0_0 = {
  (MR_String) "clause_only",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_stuff_to_check_0_1 = {
  (MR_String) "whole_pred",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_ordinal_ordered_stuff_to_check_0[2] = {
  &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_stuff_to_check_0_0,
  &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_stuff_to_check_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_name_ordered_stuff_to_check_0[2] = {
  &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_stuff_to_check_0_0,
  &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_stuff_to_check_0_1
};

static const MR_Integer check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__functor_number_map_stuff_to_check_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__type_ctor_info_stuff_to_check_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck_clauses____Unify____stuff_to_check_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_clauses____Compare____stuff_to_check_0_0_10001)),
  (MR_String) "check_hlds.typecheck_clauses",
  (MR_String) "stuff_to_check",
  { check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_name_ordered_stuff_to_check_0 },
  { check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_ordinal_ordered_stuff_to_check_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__functor_number_map_stuff_to_check_0,

};

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__IntroducedFrom__pred__typecheck_goal_expr__478__1_2_p_0(
  MR_Word GoalType_94,
  MR_Word HeadVar__2_228)
{
  MR_bool succeeded = (GoalType_94 == HeadVar__2_228);

  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_clauses____Compare____stuff_to_check_0_0(
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

MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____stuff_to_check_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses__compute_headvar_types_in_type_assign_3_p_0(
  MR_Word HeadVars_4,
  MR_Word TypeAssign_5,
  MR_Word * HeadTypes_6)
{
  MR_Word VarTypes_7;
  MR_Word TypeBindings_8;
  MR_Word HeadTypes0_9;

  check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_5, &VarTypes_7);
  check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_5, &TypeBindings_8);
  parse_tree__vartypes__lookup_var_types_3_p_0(VarTypes_7, HeadVars_4, &HeadTypes0_9);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(TypeBindings_8, HeadTypes0_9, HeadTypes_6);
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_var_has_stm_atomic_type_6_p_0(
  MR_Word Context_7,
  MR_Word Var_8,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_11,
  MR_Word * STATE_VARIABLE_TypeAssignSet_12,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_bool succeeded;
  MR_Word Var_16;
  MR_Word TypeAssignSet1_17;

  Var_16 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
  check_hlds__typecheck_clauses__typecheck_var_has_type_2_5_p_0(STATE_VARIABLE_TypeAssignSet_0_11, Var_8, Var_16, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_17);
  succeeded = (TypeAssignSet1_17 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = (STATE_VARIABLE_TypeAssignSet_0_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
  {
    MR_Word SpecAndMaybeActualExpected_20;
    MR_Word Spec_21;

    *STATE_VARIABLE_TypeAssignSet_12 = STATE_VARIABLE_TypeAssignSet_0_11;
    SpecAndMaybeActualExpected_20 = check_hlds__typecheck_errors__report_error_var_has_wrong_type_6_f_0(STATE_VARIABLE_Info_0_13, (MR_Word) ((MR_Unsigned) 0U), Context_7, Var_8, Var_16, STATE_VARIABLE_TypeAssignSet_0_11);
    Spec_21 = ((MR_Word) ((MR_hl_field(0, SpecAndMaybeActualExpected_20, (MR_Integer) 0))));
    check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_21, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
  }
  else
  {
    *STATE_VARIABLE_TypeAssignSet_12 = TypeAssignSet1_17;
    *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
  }
}

void MR_CALL 
check_hlds__typecheck_clauses__typecheck_clauses_8_p_0(
  MR_Word HeadVars_9,
  MR_Word ArgTypes_10,
  MR_Word Clauses0_11,
  MR_Word * Clauses_12,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_16,
  MR_Word * STATE_VARIABLE_TypeAssignSet_17,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_Word RevClauses_15;

  check_hlds__typecheck_clauses__typecheck_clauses_loop_9_p_0(HeadVars_9, ArgTypes_10, Clauses0_11, (MR_Word) ((MR_Unsigned) 0U), &RevClauses_15, STATE_VARIABLE_TypeAssignSet_0_16, STATE_VARIABLE_TypeAssignSet_17, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), RevClauses_15, Clauses_12);
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_clauses_loop_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_clauses_loop_9_p_0(
  MR_Word HeadVars_1,
  MR_Word ArgTypes_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevClauses_0_4,
  MR_Word * STATE_VARIABLE_RevClauses_5,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_6,
  MR_Word * STATE_VARIABLE_TypeAssignSet_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
      *STATE_VARIABLE_TypeAssignSet_7 = STATE_VARIABLE_TypeAssignSet_0_6;
      *STATE_VARIABLE_RevClauses_5 = STATE_VARIABLE_RevClauses_0_4;
    }
    else
    {
      MR_Word Clause0_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Clauses0_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Clause_28;
      MR_Word STATE_VARIABLE_TypeAssignSet_35_35;
      MR_Word STATE_VARIABLE_Info_36_36;
      MR_Word STATE_VARIABLE_RevClauses_37_37;
      MR_Word Body0_39 = ((MR_Word) ((MR_hl_field(0, Clause0_23, (MR_Integer) 1))));
      MR_Word Context_41 = ((MR_Word) ((MR_hl_field(0, Clause0_23, (MR_Integer) 3))));
      MR_Word Body_44;
      MR_Word STATE_VARIABLE_TypeAssignSet_30_47;
      MR_Word STATE_VARIABLE_Info_31_48;
      MR_Word STATE_VARIABLE_TypeAssignSet_32_49;
      MR_Word STATE_VARIABLE_Info_33_50;
      MR_Word STATE_VARIABLE_Info_38_54;
      MR_Word Specs_66;
      MR_Word MaybeArgVectorTypeErrors_67;
      MR_Word ArgVectorTypeErrors_68;
      MR_Word Var_76;
      MR_Word Var_61;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_RevClauses_0_4;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_8;

      check_hlds__typecheck_clauses__typecheck_vars_have_types_in_arg_vector_12_p_0(STATE_VARIABLE_Info_0_8, Context_41, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, HeadVars_1, ArgTypes_2, STATE_VARIABLE_TypeAssignSet_0_6, &STATE_VARIABLE_TypeAssignSet_30_47, (MR_Word) ((MR_Unsigned) 0U), &Specs_66, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_clauses_scalar_common_2[0])), &MaybeArgVectorTypeErrors_67);
      succeeded = (MaybeArgVectorTypeErrors_67 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgVectorTypeErrors_68 = ((MR_Word) ((MR_hl_field(1, MaybeArgVectorTypeErrors_67, (MR_Integer) 0))));
        succeeded = (ArgVectorTypeErrors_68 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_76 = ((MR_Word) ((MR_hl_field(1, ArgVectorTypeErrors_68, (MR_Integer) 1))));
          succeeded = (Var_76 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        MR_Word AllArgsSpec_72;

        AllArgsSpec_72 = check_hlds__typecheck_errors__report_error_wrong_types_in_arg_vector_5_f_0(STATE_VARIABLE_Info_0_8, Context_41, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_TypeAssignSet_30_47, ArgVectorTypeErrors_68);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(AllArgsSpec_72, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_31_48);
      }
      else
      {
        MR_Box conv1_STATE_VARIABLE_Info_31_48;

        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_4[4]), Specs_66, ((MR_Box) (STATE_VARIABLE_Info_0_8)), &conv1_STATE_VARIABLE_Info_31_48);
        STATE_VARIABLE_Info_31_48 = ((MR_Word) (conv1_STATE_VARIABLE_Info_31_48));
      }
      check_hlds__typecheck_clauses__typecheck_goal_7_p_0(Body0_39, &Body_44, Context_41, STATE_VARIABLE_TypeAssignSet_30_47, &STATE_VARIABLE_TypeAssignSet_32_49, STATE_VARIABLE_Info_31_48, &STATE_VARIABLE_Info_33_50);
      check_hlds__typecheck_coerce__typecheck_prune_coerce_constraints_4_p_0(STATE_VARIABLE_TypeAssignSet_32_49, &STATE_VARIABLE_TypeAssignSet_35_35, STATE_VARIABLE_Info_33_50, &STATE_VARIABLE_Info_38_54);
      Var_61 = ((MR_Word) ((MR_hl_field(0, Clause0_23, (MR_Integer) 0))));
      Var_63 = ((MR_Word) ((MR_hl_field(0, Clause0_23, (MR_Integer) 2))));
      Var_64 = ((MR_Word) ((MR_hl_field(0, Clause0_23, (MR_Integer) 3))));
      Var_65 = ((MR_Word) ((MR_hl_field(0, Clause0_23, (MR_Integer) 4))));
      {
        Clause_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Clause_28, 0) = ((MR_Box) (Var_61));
        MR_hl_field(0, Clause_28, 1) = ((MR_Box) (Body_44));
        MR_hl_field(0, Clause_28, 2) = ((MR_Box) (Var_63));
        MR_hl_field(0, Clause_28, 3) = ((MR_Box) (Var_64));
        MR_hl_field(0, Clause_28, 4) = ((MR_Box) (Var_65));
      }
      check_hlds__typecheck_clauses__typecheck_check_for_ambiguity_6_p_0(Context_41, (MR_Integer) 0, HeadVars_1, STATE_VARIABLE_TypeAssignSet_35_35, STATE_VARIABLE_Info_38_54, &STATE_VARIABLE_Info_36_36);
      {
        STATE_VARIABLE_RevClauses_37_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevClauses_37_37, 0) = ((MR_Box) (Clause_28));
        MR_hl_field(1, STATE_VARIABLE_RevClauses_37_37, 1) = ((MR_Box) (STATE_VARIABLE_RevClauses_0_4));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Clauses0_24;
      next_value_of_STATE_VARIABLE_RevClauses_0_4 = STATE_VARIABLE_RevClauses_37_37;
      next_value_of_STATE_VARIABLE_TypeAssignSet_0_6 = STATE_VARIABLE_TypeAssignSet_35_35;
      next_value_of_STATE_VARIABLE_Info_0_8 = STATE_VARIABLE_Info_36_36;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_RevClauses_0_4 = next_value_of_STATE_VARIABLE_RevClauses_0_4;
      STATE_VARIABLE_TypeAssignSet_0_6 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_6;
      STATE_VARIABLE_Info_0_8 = next_value_of_STATE_VARIABLE_Info_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_unification_10_p_0(
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word GoalId_13,
  MR_Word LHSVar_14,
  MR_Word RHS0_15,
  MR_Word * RHS_16,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_34,
  MR_Word * STATE_VARIABLE_TypeAssignSet_35,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) RHS0_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RHSVar_19 = ((MR_Word) ((MR_hl_field(0, RHS0_15, (MR_Integer) 0))));
        MR_Word TypeAssignSet1_61;

        check_hlds__typecheck_clauses__type_assigns_unify_var_var_5_p_0(STATE_VARIABLE_TypeAssignSet_0_34, LHSVar_14, RHSVar_19, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_61);
        succeeded = (TypeAssignSet1_61 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (STATE_VARIABLE_TypeAssignSet_0_34 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          MR_Word Spec_64;

          *STATE_VARIABLE_TypeAssignSet_35 = STATE_VARIABLE_TypeAssignSet_0_34;
          Spec_64 = check_hlds__typecheck_errors__report_error_unify_var_var_6_f_0(STATE_VARIABLE_Info_0_36, UnifyContext_11, Context_12, LHSVar_14, RHSVar_19, STATE_VARIABLE_TypeAssignSet_0_34);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_64, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
        }
        else
        {
          *STATE_VARIABLE_TypeAssignSet_35 = TypeAssignSet1_61;
          *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_0_36;
        }
        *RHS_16 = RHS0_15;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ConsId_20 = ((MR_Word) ((MR_hl_field(1, RHS0_15, (MR_Integer) 0))));
        MR_Word ArgVars_22 = ((MR_Word) ((MR_hl_field(1, RHS0_15, (MR_Integer) 2))));
        MR_Word STATE_VARIABLE_TypeAssignSet_40_40;
        MR_Word STATE_VARIABLE_Info_41_41;
        MR_Word BuiltinType_23;
        MR_String BuiltinTypeName_24;

        switch (MR_tag((MR_Word) ConsId_20)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, ConsId_20, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 5:
                {
                  MR_Word IntConst_52 = ((MR_Word) ((MR_hl_field(3, ConsId_20, (MR_Integer) 1))));
                  MR_Word Var_55;

                  Var_55 = parse_tree__prog_data__type_of_int_const_1_f_0(IntConst_52);
                  {
                    BuiltinType_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, BuiltinType_23, 0) = (MR_Box) ((MR_Unsigned) (Var_55));
                  }
                  BuiltinTypeName_24 = parse_tree__prog_data__type_name_of_int_const_1_f_0(IntConst_52);
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 6:
                {
                  BuiltinTypeName_24 = (MR_String) "float";
                  BuiltinType_23 = (MR_Word) ((MR_Unsigned) 0U);
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 8:
                {
                  BuiltinTypeName_24 = (MR_String) "string";
                  BuiltinType_23 = (MR_Word) ((MR_Unsigned) 4U);
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
        }
        if (succeeded)
          check_hlds__typecheck_unify_var_functor__typecheck_unify_var_functor_builtin_10_p_0(UnifyContext_11, Context_12, LHSVar_14, ConsId_20, BuiltinType_23, BuiltinTypeName_24, STATE_VARIABLE_TypeAssignSet_0_34, &STATE_VARIABLE_TypeAssignSet_40_40, STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_Info_41_41);
        else
          check_hlds__typecheck_unify_var_functor__typecheck_unify_var_functor_std_10_p_0(UnifyContext_11, Context_12, LHSVar_14, ConsId_20, ArgVars_22, GoalId_13, STATE_VARIABLE_TypeAssignSet_0_34, &STATE_VARIABLE_TypeAssignSet_40_40, STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_Info_41_41);
        check_hlds__typeclasses__perform_context_reduction_5_p_0(Context_12, STATE_VARIABLE_TypeAssignSet_40_40, STATE_VARIABLE_TypeAssignSet_35, STATE_VARIABLE_Info_41_41, STATE_VARIABLE_Info_37);
        *RHS_16 = RHS0_15;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Purity_25 = ((((MR_Unsigned) ((MR_hl_field(2, RHS0_15, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
        MR_Word PredOrFunc_27 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_15, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word NonLocals_28 = ((MR_Word) ((MR_hl_field(2, RHS0_15, (MR_Integer) 1))));
        MR_Word VarsModes_29 = ((MR_Word) ((MR_hl_field(2, RHS0_15, (MR_Integer) 2))));
        MR_Word Det_30 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_15, (MR_Integer) 3))) & (MR_Integer) 7);
        MR_Word Goal0_31 = ((MR_Word) ((MR_hl_field(2, RHS0_15, (MR_Integer) 4))));
        MR_Word Vars_32;
        MR_Word Goal_33;
        MR_Word STATE_VARIABLE_Info_47_47;
        MR_Word STATE_VARIABLE_TypeAssignSet_48_48;
        MR_Word STATE_VARIABLE_Info_49_49;
        MR_Word TypeAssignSet1_56;
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(2, RHS0_15, (MR_Integer) 0)));

        check_hlds__typecheck_info__typecheck_info_set_rhs_lambda_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_Info_47_47);
        mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), VarsModes_29, &Vars_32);
        check_hlds__typecheck_clauses__typecheck_lambda_var_has_type_2_7_p_0(STATE_VARIABLE_TypeAssignSet_0_34, Purity_25, PredOrFunc_27, LHSVar_14, Vars_32, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_56);
        succeeded = (TypeAssignSet1_56 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (STATE_VARIABLE_TypeAssignSet_0_34 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          MR_Word Spec_59;

          STATE_VARIABLE_TypeAssignSet_48_48 = STATE_VARIABLE_TypeAssignSet_0_34;
          Spec_59 = check_hlds__typecheck_errors__report_error_unify_var_lambda_7_f_0(STATE_VARIABLE_Info_47_47, UnifyContext_11, Context_12, PredOrFunc_27, LHSVar_14, Vars_32, STATE_VARIABLE_TypeAssignSet_0_34);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_59, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_49_49);
        }
        else
        {
          STATE_VARIABLE_TypeAssignSet_48_48 = TypeAssignSet1_56;
          STATE_VARIABLE_Info_49_49 = STATE_VARIABLE_Info_47_47;
        }
        check_hlds__typecheck_clauses__typecheck_goal_7_p_0(Goal0_31, &Goal_33, Context_12, STATE_VARIABLE_TypeAssignSet_48_48, STATE_VARIABLE_TypeAssignSet_35, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_37);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *RHS_16 = base;
          MR_hl_field(2, base, 0) = (MR_Box) (packed_word_1);
          MR_hl_field(2, base, 1) = ((MR_Box) (NonLocals_28));
          MR_hl_field(2, base, 2) = ((MR_Box) (VarsModes_29));
          MR_hl_field(2, base, 3) = (MR_Box) ((MR_Unsigned) (Det_30));
          MR_hl_field(2, base, 4) = ((MR_Box) (Goal_33));
        }
      }
      break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_case_list_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word Context_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    *STATE_VARIABLE_TypeAssignSet_5 = STATE_VARIABLE_TypeAssignSet_0_4;
  }
  else
  {
    MR_Word Case0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_17;
    MR_Word Cases_18;
    MR_Word MainCondId_22 = ((MR_Word) ((MR_hl_field(0, Case0_15, (MR_Integer) 0))));
    MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(0, Case0_15, (MR_Integer) 1))));
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(0, Case0_15, (MR_Integer) 2))));
    MR_Word Goal_25;
    MR_Word STATE_VARIABLE_TypeAssignSet_30_30;
    MR_Word STATE_VARIABLE_Info_31_31;

    check_hlds__typecheck_clauses__typecheck_goal_7_p_0(Goal0_24, &Goal_25, Context_3, STATE_VARIABLE_TypeAssignSet_0_4, &STATE_VARIABLE_TypeAssignSet_30_30, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_31_31);
    {
      Case_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_17, 0) = ((MR_Box) (MainCondId_22));
      MR_hl_field(0, Case_17, 1) = ((MR_Box) (OtherConsIds_23));
      MR_hl_field(0, Case_17, 2) = ((MR_Box) (Goal_25));
    }
    check_hlds__typecheck_clauses__typecheck_case_list_7_p_0(Cases0_16, &Cases_18, Context_3, STATE_VARIABLE_TypeAssignSet_30_30, STATE_VARIABLE_TypeAssignSet_5, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_18));
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_list_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word Context_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    *STATE_VARIABLE_TypeAssignSet_5 = STATE_VARIABLE_TypeAssignSet_0_4;
  }
  else
  {
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_17;
    MR_Word Goals_18;
    MR_Word STATE_VARIABLE_TypeAssignSet_26_26;
    MR_Word STATE_VARIABLE_Info_27_27;

    check_hlds__typecheck_clauses__typecheck_goal_7_p_0(Goal0_15, &Goal_17, Context_3, STATE_VARIABLE_TypeAssignSet_0_4, &STATE_VARIABLE_TypeAssignSet_26_26, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_27_27);
    check_hlds__typecheck_clauses__typecheck_goal_list_7_p_0(Goals0_16, &Goals_18, Context_3, STATE_VARIABLE_TypeAssignSet_26_26, STATE_VARIABLE_TypeAssignSet_5, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_18));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_clauses__IntroducedFrom__pred__typecheck_goal_expr__478__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_TypeAssignSet_12;
  MR_Word conv1_STATE_VARIABLE_Info_14;

  check_hlds__typecheck_clauses__typecheck_var_has_stm_atomic_type_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_TypeAssignSet_12, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Info_14);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_TypeAssignSet_12));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Info_14));
}

static MR_Box MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_115,
  MR_Word * STATE_VARIABLE_TypeAssignSet_116,
  MR_Word STATE_VARIABLE_Info_0_117,
  MR_Word * STATE_VARIABLE_Info_118)
{
  MR_bool succeeded;
  MR_Word Context_15;
  MR_Word ClauseContext_13;

  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_117, &ClauseContext_13);
  Context_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_10);
  switch (MR_tag((MR_Word) GoalExpr0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_31 = (MR_Word) ((MR_Word) (GoalExpr0_8));
        MR_Word SubGoal_32;

        check_hlds__typecheck_clauses__typecheck_goal_7_p_0(SubGoal0_31, &SubGoal_32, Context_15, STATE_VARIABLE_TypeAssignSet_0_115, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_0_117, STATE_VARIABLE_Info_118);
        *GoalExpr_9 = (MR_Word) ((MR_Word) (SubGoal_32));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHS_85 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 0))));
        MR_Word RHS0_86 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 1))));
        MR_Word UnifyMode_87 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 2))));
        MR_Word Unification_88 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 3))));
        MR_Word UnifyContext_89 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 4))));
        MR_Word RHS_90;
        MR_Word GoalId_260;

        GoalId_260 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_10);
        check_hlds__typecheck_clauses__typecheck_unification_10_p_0(UnifyContext_89, Context_15, GoalId_260, LHS_85, RHS0_86, &RHS_90, STATE_VARIABLE_TypeAssignSet_0_115, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_0_117, STATE_VARIABLE_Info_118);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LHS_85));
          MR_hl_field(1, base, 1) = ((MR_Box) (RHS_90));
          MR_hl_field(1, base, 2) = ((MR_Box) (UnifyMode_87));
          MR_hl_field(1, base, 3) = ((MR_Box) (Unification_88));
          MR_hl_field(1, base, 4) = ((MR_Box) (UnifyContext_89));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer ProcId_56 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_8, (MR_Integer) 1))));
        MR_Word ArgVars_57 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_8, (MR_Integer) 2))));
        MR_Word BI_58 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_8, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word UC_59 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_8, (MR_Integer) 4))));
        MR_Word SymName_60 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_8, (MR_Integer) 5))));
        MR_Word GoalId_61;
        MR_Word PredId_62;

        GoalId_61 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_10);
        check_hlds__typecheck_clauses__typecheck_plain_call_9_p_0(SymName_60, Context_15, GoalId_61, ArgVars_57, &PredId_62, STATE_VARIABLE_TypeAssignSet_0_115, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_0_117, STATE_VARIABLE_Info_118);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_9 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (PredId_62));
          MR_hl_field(2, base, 1) = ((MR_Box) (ProcId_56));
          MR_hl_field(2, base, 2) = ((MR_Box) (ArgVars_57));
          MR_hl_field(2, base, 3) = (MR_Box) ((MR_Unsigned) (BI_58));
          MR_hl_field(2, base, 4) = ((MR_Box) (UC_59));
          MR_hl_field(2, base, 5) = ((MR_Box) (SymName_60));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word ArgVars_259 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) GenericCall_70)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word PredVar_74 = ((MR_Word) ((MR_hl_field(0, GenericCall_70, (MR_Integer) 0))));
                  MR_Word Purity_75 = ((((MR_Unsigned) ((MR_hl_field(0, GenericCall_70, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
                  MR_Word GenericCallId_78;

                  hlds__hlds_goal__generic_call_to_id_2_p_0(GenericCall_70, &GenericCallId_78);
                  check_hlds__typecheck_clauses__typecheck_higher_order_call_9_p_0(GenericCallId_78, Context_15, PredVar_74, Purity_75, ArgVars_259, STATE_VARIABLE_TypeAssignSet_0_115, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_0_117, STATE_VARIABLE_Info_118);
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.typecheck_goal_expr\'/7", (MR_String) "unexpected class method call");
                  return;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String EventName_83 = ((MR_String) ((MR_hl_field(2, GenericCall_70, (MR_Integer) 0))));

                  check_hlds__typecheck_clauses__typecheck_event_call_7_p_0(Context_15, EventName_83, ArgVars_259, STATE_VARIABLE_TypeAssignSet_0_115, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_0_117, STATE_VARIABLE_Info_118);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word CastType_84 = ((MR_Unsigned) ((MR_hl_field(3, GenericCall_70, (MR_Integer) 0))) & (MR_Integer) 7);

                  switch (CastType_84) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 2:
                      {
                        *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_0_115;
                        *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_0_117;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_0_115;
                        *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_0_117;
                      }
                      break;
                    case (MR_Integer) 4:
                      check_hlds__typecheck_coerce__typecheck_coerce_6_p_0(Context_15, ArgVars_259, STATE_VARIABLE_TypeAssignSet_0_115, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_0_117, STATE_VARIABLE_Info_118);
                      break;
                    case (MR_Integer) 0:
                      {
                        *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_0_115;
                        *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_0_117;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_0_115;
                        *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_0_117;
                      }
                      break;
                  }
                }
                break;
            }
            *GoalExpr_9 = GoalExpr0_8;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Args_65 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 4))));
            MR_Word ArgVectorKind_69;
            MR_Word STATE_VARIABLE_TypeAssignSet_174_174;
            MR_Word STATE_VARIABLE_Info_175_175;
            MR_Word ArgVars_256;
            MR_Word GoalId_257;
            MR_Word PredId_258 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));

            {
              ArgVectorKind_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ArgVectorKind_69, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ArgVectorKind_69, 1) = ((MR_Box) (PredId_258));
            }
            ArgVars_256 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[1]), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_4[3]), Args_65);
            GoalId_257 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_10);
            check_hlds__typecheck_clauses__typecheck_plain_or_foreign_call_pred_id_9_p_0(ArgVectorKind_69, Context_15, GoalId_257, PredId_258, ArgVars_256, STATE_VARIABLE_TypeAssignSet_0_115, &STATE_VARIABLE_TypeAssignSet_174_174, STATE_VARIABLE_Info_0_117, &STATE_VARIABLE_Info_175_175);
            check_hlds__typeclasses__perform_context_reduction_5_p_0(Context_15, STATE_VARIABLE_TypeAssignSet_174_174, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_175_175, STATE_VARIABLE_Info_118);
            *GoalExpr_9 = GoalExpr0_8;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_16 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word SubGoals0_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word SubGoals_19;

            check_hlds__typecheck_clauses__typecheck_goal_list_7_p_0(SubGoals0_17, &SubGoals_19, Context_15, STATE_VARIABLE_TypeAssignSet_0_115, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_0_117, STATE_VARIABLE_Info_118);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_16));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoals_19));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubGoals0_248 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word SubGoals_249;

            check_hlds__typecheck_clauses__typecheck_goal_list_7_p_0(SubGoals0_248, &SubGoals_249, Context_15, STATE_VARIABLE_TypeAssignSet_0_115, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_0_117, STATE_VARIABLE_Info_118);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (SubGoals_249));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word SwitchVar_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word CanFail_21 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 3))));
            MR_Word Cases_23;

            check_hlds__typecheck_clauses__typecheck_case_list_7_p_0(Cases0_22, &Cases_23, Context_15, STATE_VARIABLE_TypeAssignSet_0_115, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_0_117, STATE_VARIABLE_Info_118);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (SwitchVar_20));
              MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (CanFail_21));
              MR_hl_field(3, base, 3) = ((MR_Box) (Cases_23));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word STATE_VARIABLE_TypeAssignSet_160_160;
            MR_Word STATE_VARIABLE_Info_161_161;
            MR_Word SubGoal0_254 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word SubGoal_255;

            check_hlds__typecheck_clauses__typecheck_goal_7_p_0(SubGoal0_254, &SubGoal_255, Context_15, STATE_VARIABLE_TypeAssignSet_0_115, &STATE_VARIABLE_TypeAssignSet_160_160, STATE_VARIABLE_Info_0_117, &STATE_VARIABLE_Info_161_161);
            switch (MR_tag((MR_Word) Reason_33)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Vars_251 = ((MR_Word) ((MR_hl_field(0, Reason_33, (MR_Integer) 0))));

                  check_hlds__typecheck_clauses__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 4U), Context_15, Vars_251, STATE_VARIABLE_TypeAssignSet_160_160, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_161_161, STATE_VARIABLE_Info_118);
                }
                break;
              case (MR_Integer) 1:
                {
                  *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_160_160;
                  *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_161_161;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Vars_289 = ((MR_Word) ((MR_hl_field(2, Reason_33, (MR_Integer) 0))));

                  check_hlds__typecheck_clauses__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 8U), Context_15, Vars_289, STATE_VARIABLE_TypeAssignSet_160_160, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_161_161, STATE_VARIABLE_Info_118);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason_33, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_160_160;
                      *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_161_161;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_160_160;
                      *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_161_161;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(3, Reason_33, (MR_Integer) 1))));
                      MR_Word Vars_291;

                      {
                        Vars_291 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Vars_291, 0) = ((MR_Box) (Var_37));
                        MR_hl_field(1, Vars_291, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      check_hlds__typecheck_clauses__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 12U), Context_15, Vars_291, STATE_VARIABLE_TypeAssignSet_160_160, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_161_161, STATE_VARIABLE_Info_118);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word Var_250 = ((MR_Word) ((MR_hl_field(3, Reason_33, (MR_Integer) 1))));
                      MR_Word Vars_293;

                      {
                        Vars_293 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Vars_293, 0) = ((MR_Box) (Var_250));
                        MR_hl_field(1, Vars_293, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      check_hlds__typecheck_clauses__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 16U), Context_15, Vars_293, STATE_VARIABLE_TypeAssignSet_160_160, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_161_161, STATE_VARIABLE_Info_118);
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_160_160;
                      *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_161_161;
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_160_160;
                      *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_161_161;
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_160_160;
                      *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_161_161;
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_160_160;
                      *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_161_161;
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_Word LCVar_39 = ((MR_Word) ((MR_hl_field(3, Reason_33, (MR_Integer) 1))));
                      MR_Word LCSVar_40 = ((MR_Word) ((MR_hl_field(3, Reason_33, (MR_Integer) 2))));
                      MR_Word Var_164;
                      MR_Word Vars_287;

                      {
                        Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_164, 0) = ((MR_Box) (LCSVar_40));
                        MR_hl_field(1, Var_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Vars_287 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Vars_287, 0) = ((MR_Box) (LCVar_39));
                        MR_hl_field(1, Vars_287, 1) = ((MR_Box) (Var_164));
                      }
                      check_hlds__typecheck_clauses__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 20U), Context_15, Vars_287, STATE_VARIABLE_TypeAssignSet_160_160, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_161_161, STATE_VARIABLE_Info_118);
                    }
                    break;
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_33));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_255));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word Cond0_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word Then0_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 3))));
            MR_Word Else0_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 4))));
            MR_Word Cond_28;
            MR_Word Then_29;
            MR_Word Else_30;
            MR_Word STATE_VARIABLE_TypeAssignSet_137_137;
            MR_Word STATE_VARIABLE_Info_138_138;
            MR_Word STATE_VARIABLE_TypeAssignSet_142_142;
            MR_Word STATE_VARIABLE_Info_143_143;
            MR_Word STATE_VARIABLE_TypeAssignSet_147_147;
            MR_Word STATE_VARIABLE_Info_148_148;

            check_hlds__typecheck_clauses__typecheck_goal_7_p_0(Cond0_25, &Cond_28, Context_15, STATE_VARIABLE_TypeAssignSet_0_115, &STATE_VARIABLE_TypeAssignSet_137_137, STATE_VARIABLE_Info_0_117, &STATE_VARIABLE_Info_138_138);
            check_hlds__typecheck_clauses__typecheck_goal_7_p_0(Then0_26, &Then_29, Context_15, STATE_VARIABLE_TypeAssignSet_137_137, &STATE_VARIABLE_TypeAssignSet_142_142, STATE_VARIABLE_Info_138_138, &STATE_VARIABLE_Info_143_143);
            check_hlds__typecheck_clauses__typecheck_goal_7_p_0(Else0_27, &Else_30, Context_15, STATE_VARIABLE_TypeAssignSet_142_142, &STATE_VARIABLE_TypeAssignSet_147_147, STATE_VARIABLE_Info_143_143, &STATE_VARIABLE_Info_148_148);
            check_hlds__typecheck_clauses__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 0U), Context_15, Vars_24, STATE_VARIABLE_TypeAssignSet_147_147, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_148_148, STATE_VARIABLE_Info_118);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Vars_24));
              MR_hl_field(3, base, 2) = ((MR_Box) (Cond_28));
              MR_hl_field(3, base, 3) = ((MR_Box) (Then_29));
              MR_hl_field(3, base, 4) = ((MR_Box) (Else_30));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_91 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word ShortHand_93;

            switch (MR_tag((MR_Word) ShortHand0_91)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word LHS0_92 = ((MR_Word) ((MR_hl_field(0, ShortHand0_91, (MR_Integer) 0))));
                  MR_Word STATE_VARIABLE_TypeAssignSet_203_203;
                  MR_Word STATE_VARIABLE_Info_204_204;
                  MR_Word LHS_261;
                  MR_Word RHS0_262 = ((MR_Word) ((MR_hl_field(0, ShortHand0_91, (MR_Integer) 1))));
                  MR_Word RHS_263;

                  check_hlds__typecheck_clauses__typecheck_goal_7_p_0(LHS0_92, &LHS_261, Context_15, STATE_VARIABLE_TypeAssignSet_0_115, &STATE_VARIABLE_TypeAssignSet_203_203, STATE_VARIABLE_Info_0_117, &STATE_VARIABLE_Info_204_204);
                  check_hlds__typecheck_clauses__typecheck_goal_7_p_0(RHS0_262, &RHS_263, Context_15, STATE_VARIABLE_TypeAssignSet_203_203, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_204_204, STATE_VARIABLE_Info_118);
                  {
                    ShortHand_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ShortHand_93, 0) = ((MR_Box) (LHS_261));
                    MR_hl_field(0, ShortHand_93, 1) = ((MR_Box) (RHS_263));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_94 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_91, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_95 = ((MR_Word) ((MR_hl_field(1, ShortHand0_91, (MR_Integer) 1))));
                  MR_Word Inner_96 = ((MR_Word) ((MR_hl_field(1, ShortHand0_91, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_97 = ((MR_Word) ((MR_hl_field(1, ShortHand0_91, (MR_Integer) 3))));
                  MR_Word MainGoal0_98 = ((MR_Word) ((MR_hl_field(1, ShortHand0_91, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_99 = ((MR_Word) ((MR_hl_field(1, ShortHand0_91, (MR_Integer) 5))));
                  MR_Word MainGoal_103;
                  MR_Word OrElseGoals_104;
                  MR_Word OuterDI_106;
                  MR_Word OuterUO_107;
                  MR_Word InnerVars_108;
                  MR_Word STATE_VARIABLE_TypeAssignSet_210_210;
                  MR_Word STATE_VARIABLE_Info_211_211;
                  MR_Word STATE_VARIABLE_TypeAssignSet_212_212;
                  MR_Word STATE_VARIABLE_Info_213_213;
                  MR_Word STATE_VARIABLE_TypeAssignSet_214_214;
                  MR_Word STATE_VARIABLE_Info_215_215;
                  MR_Word Var_216;
                  MR_Word STATE_VARIABLE_TypeAssignSet_217_217;
                  MR_Word STATE_VARIABLE_Info_218_218;
                  MR_Word Var_219;
                  MR_Word Var_222;
                  MR_Word Var_225;
                  MR_Word I_294;
                  MR_Word O_295;
                  MR_Word Interfaces_296 = ((MR_Word) ((MR_hl_field(1, ShortHand0_91, (MR_Integer) 6))));
                  MR_Word Var_298;
                  MR_Word Var_299;
                  MR_Box conv4_STATE_VARIABLE_TypeAssignSet_116;
                  MR_Box conv3_STATE_VARIABLE_Info_118;

                  if ((MaybeOutputVars_97 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    STATE_VARIABLE_TypeAssignSet_210_210 = STATE_VARIABLE_TypeAssignSet_0_115;
                    STATE_VARIABLE_Info_211_211 = STATE_VARIABLE_Info_0_117;
                  }
                  else
                  {
                    MR_Word OutputVars_101 = ((MR_Word) ((MR_hl_field(1, MaybeOutputVars_97, (MR_Integer) 0))));

                    check_hlds__typecheck_clauses__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 28U), Context_15, OutputVars_101, STATE_VARIABLE_TypeAssignSet_0_115, &STATE_VARIABLE_TypeAssignSet_210_210, STATE_VARIABLE_Info_0_117, &STATE_VARIABLE_Info_211_211);
                  }
                  check_hlds__typecheck_clauses__typecheck_goal_7_p_0(MainGoal0_98, &MainGoal_103, Context_15, STATE_VARIABLE_TypeAssignSet_210_210, &STATE_VARIABLE_TypeAssignSet_212_212, STATE_VARIABLE_Info_211_211, &STATE_VARIABLE_Info_213_213);
                  check_hlds__typecheck_clauses__typecheck_goal_list_7_p_0(OrElseGoals0_99, &OrElseGoals_104, Context_15, STATE_VARIABLE_TypeAssignSet_212_212, &STATE_VARIABLE_TypeAssignSet_214_214, STATE_VARIABLE_Info_213_213, &STATE_VARIABLE_Info_215_215);
                  OuterDI_106 = ((MR_Word) ((MR_hl_field(0, Outer_95, (MR_Integer) 0))));
                  OuterUO_107 = ((MR_Word) ((MR_hl_field(0, Outer_95, (MR_Integer) 1))));
                  {
                    Var_219 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_219, 0) = ((MR_Box) (OuterUO_107));
                    MR_hl_field(1, Var_219, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_216 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_216, 0) = ((MR_Box) (OuterDI_106));
                    MR_hl_field(1, Var_216, 1) = ((MR_Box) (Var_219));
                  }
                  check_hlds__typecheck_clauses__ensure_vars_have_a_single_type_7_p_0((MR_Word) ((MR_Unsigned) 32U), Context_15, Var_216, STATE_VARIABLE_TypeAssignSet_214_214, &STATE_VARIABLE_TypeAssignSet_217_217, STATE_VARIABLE_Info_215_215, &STATE_VARIABLE_Info_218_218);
                  I_294 = ((MR_Word) ((MR_hl_field(0, Inner_96, (MR_Integer) 0))));
                  O_295 = ((MR_Word) ((MR_hl_field(0, Inner_96, (MR_Integer) 1))));
                  Var_299 = check_hlds__typecheck_clauses__atomic_interface_list_to_var_list_1_f_0(Interfaces_296);
                  {
                    Var_298 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_298, 0) = ((MR_Box) (O_295));
                    MR_hl_field(1, Var_298, 1) = ((MR_Box) (Var_299));
                  }
                  {
                    InnerVars_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, InnerVars_108, 0) = ((MR_Box) (I_294));
                    MR_hl_field(1, InnerVars_108, 1) = ((MR_Box) (Var_298));
                  }
                  {
                    Var_222 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_222, 0) = ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_6[0]));
                    MR_hl_field(0, Var_222, 1) = ((MR_Box) (check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0_2));
                    MR_hl_field(0, Var_222, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_222, 3) = ((MR_Box) (Context_15));
                  }
                  mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[1]), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[2]), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), Var_222, InnerVars_108, ((MR_Box) (STATE_VARIABLE_TypeAssignSet_217_217)), &conv4_STATE_VARIABLE_TypeAssignSet_116, ((MR_Box) (STATE_VARIABLE_Info_218_218)), &conv3_STATE_VARIABLE_Info_118);
                  *STATE_VARIABLE_TypeAssignSet_116 = ((MR_Word) (conv4_STATE_VARIABLE_TypeAssignSet_116));
                  *STATE_VARIABLE_Info_118 = ((MR_Word) (conv3_STATE_VARIABLE_Info_118));
                  {
                    Var_225 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_225, 0) = ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_5[1]));
                    MR_hl_field(0, Var_225, 1) = ((MR_Box) (check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0_3));
                    MR_hl_field(0, Var_225, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_225, 3) = ((MR_Box) (GoalType_94));
                    MR_hl_field(0, Var_225, 4) = ((MR_Box) ((MR_Integer) 0));
                  }
                  mercury__require__expect_3_p_0(Var_225, (MR_String) "predicate \140check_hlds.typecheck_clauses.typecheck_goal_expr\'/7", (MR_String) "GoalType != unknown_atomic_goal_type");
                  {
                    ShortHand_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_93, 0) = (MR_Box) ((MR_Unsigned) (GoalType_94));
                    MR_hl_field(1, ShortHand_93, 1) = ((MR_Box) (Outer_95));
                    MR_hl_field(1, ShortHand_93, 2) = ((MR_Box) (Inner_96));
                    MR_hl_field(1, ShortHand_93, 3) = ((MR_Box) (MaybeOutputVars_97));
                    MR_hl_field(1, ShortHand_93, 4) = ((MR_Box) (MainGoal_103));
                    MR_hl_field(1, ShortHand_93, 5) = ((MR_Box) (OrElseGoals_104));
                    MR_hl_field(1, ShortHand_93, 6) = ((MR_Box) (Interfaces_296));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_109 = ((MR_Word) ((MR_hl_field(2, ShortHand0_91, (MR_Integer) 0))));
                  MR_Word ResultVar_110 = ((MR_Word) ((MR_hl_field(2, ShortHand0_91, (MR_Integer) 1))));
                  MR_Word STATE_VARIABLE_TypeAssignSet_232_232;
                  MR_Word STATE_VARIABLE_Info_233_233;
                  MR_Word SubGoal0_266 = ((MR_Word) ((MR_hl_field(2, ShortHand0_91, (MR_Integer) 2))));
                  MR_Word SubGoal_267;

                  check_hlds__typecheck_clauses__typecheck_goal_7_p_0(SubGoal0_266, &SubGoal_267, Context_15, STATE_VARIABLE_TypeAssignSet_0_115, &STATE_VARIABLE_TypeAssignSet_232_232, STATE_VARIABLE_Info_0_117, &STATE_VARIABLE_Info_233_233);
                  if ((MaybeIO_109 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_232_232;
                    *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_233_233;
                  }
                  else
                  {
                    MR_Word InitialIO_111;
                    MR_Word FinalIO_112;
                    MR_Word Var_234 = ((MR_Word) ((MR_hl_field(1, MaybeIO_109, (MR_Integer) 0))));
                    MR_Word Var_235;
                    MR_Word STATE_VARIABLE_TypeAssignSet_236_236;
                    MR_Word STATE_VARIABLE_Info_237_237;
                    MR_Word Var_238;
                    MR_Word Var_242;
                    MR_Word STATE_VARIABLE_TypeAssignSet_243_243;
                    MR_Word STATE_VARIABLE_Info_244_244;
                    MR_Word Var_245;

                    InitialIO_111 = ((MR_Word) ((MR_hl_field(0, Var_234, (MR_Integer) 0))));
                    FinalIO_112 = ((MR_Word) ((MR_hl_field(0, Var_234, (MR_Integer) 1))));
                    {
                      Var_238 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_238, 0) = ((MR_Box) (FinalIO_112));
                      MR_hl_field(1, Var_238, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_235 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_235, 0) = ((MR_Box) (InitialIO_111));
                      MR_hl_field(1, Var_235, 1) = ((MR_Box) (Var_238));
                    }
                    check_hlds__typecheck_clauses__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 24U), Context_15, Var_235, STATE_VARIABLE_TypeAssignSet_232_232, &STATE_VARIABLE_TypeAssignSet_236_236, STATE_VARIABLE_Info_233_233, &STATE_VARIABLE_Info_237_237);
                    Var_242 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
                    check_hlds__typecheck_clauses__typecheck_var_has_type_8_p_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_clauses_scalar_common_1[4])), Context_15, InitialIO_111, Var_242, STATE_VARIABLE_TypeAssignSet_236_236, &STATE_VARIABLE_TypeAssignSet_243_243, STATE_VARIABLE_Info_237_237, &STATE_VARIABLE_Info_244_244);
                    Var_245 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
                    check_hlds__typecheck_clauses__typecheck_var_has_type_8_p_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_clauses_scalar_common_1[5])), Context_15, FinalIO_112, Var_245, STATE_VARIABLE_TypeAssignSet_243_243, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_244_244, STATE_VARIABLE_Info_118);
                  }
                  {
                    ShortHand_93 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_93, 0) = ((MR_Box) (MaybeIO_109));
                    MR_hl_field(2, ShortHand_93, 1) = ((MR_Box) (ResultVar_110));
                    MR_hl_field(2, ShortHand_93, 2) = ((MR_Box) (SubGoal_267));
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, base, 1) = ((MR_Box) (ShortHand_93));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_7_p_0(
  MR_Word Goal0_8,
  MR_Word * Goal_9,
  MR_Word EnclosingContext_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_28,
  MR_Word * STATE_VARIABLE_TypeAssignSet_29,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_8, (MR_Integer) 0))));
  MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_8, (MR_Integer) 1))));
  MR_Word Context0_15;
  MR_Word Context_16;
  MR_Word GoalInfo_17;
  MR_Integer NumTypeAssignSets_18;
  MR_Integer WarnLimit_19;
  MR_Word GoalExpr_24;

  Context0_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_14);
  succeeded = mercury__term_context__is_dummy_context_1_p_0(Context0_15);
  if (succeeded)
  {
    Context_16 = EnclosingContext_10;
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_16, GoalInfo0_14, &GoalInfo_17);
  }
  else
  {
    Context_16 = Context0_15;
    GoalInfo_17 = GoalInfo0_14;
  }
  mercury__list__length_2_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), STATE_VARIABLE_TypeAssignSet_0_28, &NumTypeAssignSets_18);
  check_hlds__typecheck_info__typecheck_info_get_ambiguity_warn_limit_2_p_0(STATE_VARIABLE_Info_0_30, &WarnLimit_19);
  succeeded = (NumTypeAssignSets_18 > WarnLimit_19);
  if (succeeded)
  {
    MR_Integer ErrorLimit_20;
    MR_Word ClauseContext_21;
    MR_Word OverloadedSymbolMap_22;

    check_hlds__typecheck_info__typecheck_info_get_ambiguity_error_limit_2_p_0(STATE_VARIABLE_Info_0_30, &ErrorLimit_20);
    check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_30, &ClauseContext_21);
    check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(STATE_VARIABLE_Info_0_30, &OverloadedSymbolMap_22);
    succeeded = (NumTypeAssignSets_18 > ErrorLimit_20);
    if (succeeded)
    {
      MR_Word ErrorSpec_23;
      MR_Word Var_32;

      ErrorSpec_23 = check_hlds__typecheck_error_overload__report_error_too_much_overloading_3_f_0(ClauseContext_21, Context_16, OverloadedSymbolMap_22);
      {
        Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_32, 0) = ((MR_Box) (ErrorSpec_23));
      }
      check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(Var_32, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
      GoalExpr_24 = GoalExpr0_13;
      *STATE_VARIABLE_TypeAssignSet_29 = STATE_VARIABLE_TypeAssignSet_0_28;
    }
    else
    {
      MR_Word MaybePrevSpec_25;
      MR_Word STATE_VARIABLE_Info_35_35;

      check_hlds__typecheck_info__typecheck_info_get_overload_error_2_p_0(STATE_VARIABLE_Info_0_30, &MaybePrevSpec_25);
      if ((MaybePrevSpec_25 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word WarnSpec_26;
        MR_Word Var_34;

        WarnSpec_26 = check_hlds__typecheck_error_overload__report_warning_too_much_overloading_3_f_0(ClauseContext_21, Context_16, OverloadedSymbolMap_22);
        {
          Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_34, 0) = ((MR_Box) (WarnSpec_26));
        }
        check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(Var_34, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_35_35);
      }
      else
        STATE_VARIABLE_Info_35_35 = STATE_VARIABLE_Info_0_30;
      check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0(GoalExpr0_13, &GoalExpr_24, GoalInfo_17, STATE_VARIABLE_TypeAssignSet_0_28, STATE_VARIABLE_TypeAssignSet_29, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_31);
    }
  }
  else
    check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0(GoalExpr0_13, &GoalExpr_24, GoalInfo_17, STATE_VARIABLE_TypeAssignSet_0_28, STATE_VARIABLE_TypeAssignSet_29, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_17));
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__ensure_vars_have_a_single_type_7_p_0(
  MR_Word VarVectorKind_8,
  MR_Word Context_9,
  MR_Word Vars_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_21,
  MR_Word * STATE_VARIABLE_TypeAssignSet_22,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  if ((Vars_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_TypeAssignSet_22 = STATE_VARIABLE_TypeAssignSet_0_21;
    *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
  }
  else
  {
    MR_Word TypeVarSet0_15;
    MR_Word TypeVar_16;
    MR_Word TypeVarSet_17;
    MR_Word Type_18;
    MR_Integer NumVars_19;
    MR_Word Types_20;
    MR_Word Var_28;
    MR_Word ArgsTypeAssignSet0_32;
    MR_Word ArgsTypeAssignSet_33;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_15);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVar_16, TypeVarSet0_15, &TypeVarSet_17);
    {
      Type_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Type_18, 0) = ((MR_Box) (TypeVar_16));
      MR_hl_field(0, Type_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[1]), Vars_10, &NumVars_19);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), NumVars_19, ((MR_Box) (Type_18)), &Types_20);
    Var_28 = check_hlds__typecheck_util__empty_hlds_constraints_0_f_0();
    check_hlds__typecheck_clauses__add_renamed_apart_arg_type_assigns_8_p_0((MR_Word) ((MR_Unsigned) 0U), TypeVarSet_17, (MR_Word) ((MR_Unsigned) 0U), Types_20, Var_28, STATE_VARIABLE_TypeAssignSet_0_21, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet0_32);
    check_hlds__typecheck_clauses__typecheck_vars_have_arg_types_8_p_0(VarVectorKind_8, Context_9, (MR_Integer) 1, Vars_10, ArgsTypeAssignSet0_32, &ArgsTypeAssignSet_33, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
    *STATE_VARIABLE_TypeAssignSet_22 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(ArgsTypeAssignSet_33);
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__ensure_vars_have_a_type_7_p_0(
  MR_Word VarVectorKind_8,
  MR_Word Context_9,
  MR_Word Vars_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_20,
  MR_Word * STATE_VARIABLE_TypeAssignSet_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  if ((Vars_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_TypeAssignSet_21 = STATE_VARIABLE_TypeAssignSet_0_20;
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
  }
  else
  {
    MR_Integer NumVars_15;
    MR_Word TypeVarSet0_16;
    MR_Word TypeVars_17;
    MR_Word TypeVarSet_18;
    MR_Word Types_19;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word ArgsTypeAssignSet0_32;
    MR_Word ArgsTypeAssignSet_33;

    mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[1]), Vars_10, &NumVars_15);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_16);
    mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), NumVars_15, &TypeVars_17, TypeVarSet0_16, &TypeVarSet_18);
    Var_24 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
    parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_24, TypeVars_17, &Types_19);
    Var_27 = check_hlds__typecheck_util__empty_hlds_constraints_0_f_0();
    check_hlds__typecheck_clauses__add_renamed_apart_arg_type_assigns_8_p_0((MR_Word) ((MR_Unsigned) 0U), TypeVarSet_18, (MR_Word) ((MR_Unsigned) 0U), Types_19, Var_27, STATE_VARIABLE_TypeAssignSet_0_20, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet0_32);
    check_hlds__typecheck_clauses__typecheck_vars_have_arg_types_8_p_0(VarVectorKind_8, Context_9, (MR_Integer) 1, Vars_10, ArgsTypeAssignSet0_32, &ArgsTypeAssignSet_33, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
    *STATE_VARIABLE_TypeAssignSet_21 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(ArgsTypeAssignSet_33);
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_var_has_type_8_p_0(
  MR_Word GoalContext_9,
  MR_Word Context_10,
  MR_Word Var_11,
  MR_Word Type_12,
  MR_Word TypeAssignSet0_13,
  MR_Word * TypeAssignSet_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_bool succeeded;
  MR_Word TypeAssignSet1_16;

  check_hlds__typecheck_clauses__typecheck_var_has_type_2_5_p_0(TypeAssignSet0_13, Var_11, Type_12, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_16);
  succeeded = (TypeAssignSet1_16 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = (TypeAssignSet0_13 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
  {
    MR_Word SpecAndMaybeActualExpected_19;
    MR_Word Spec_20;

    *TypeAssignSet_14 = TypeAssignSet0_13;
    SpecAndMaybeActualExpected_19 = check_hlds__typecheck_errors__report_error_var_has_wrong_type_6_f_0(STATE_VARIABLE_Info_0_22, GoalContext_9, Context_10, Var_11, Type_12, TypeAssignSet0_13);
    Spec_20 = ((MR_Word) ((MR_hl_field(0, SpecAndMaybeActualExpected_19, (MR_Integer) 0))));
    check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_20, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
  }
  else
  {
    *TypeAssignSet_14 = TypeAssignSet1_16;
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_lambda_var_has_type_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Purity_2,
  MR_Word PredOrFunc_3,
  MR_Word Var_4,
  MR_Word ArgVars_5,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_6,
  MR_Word * STATE_VARIABLE_TypeAssignSet_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeAssignSet_7 = STATE_VARIABLE_TypeAssignSet_0_6;
    else
    {
      MR_Word TypeAssign0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeAssignSet0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgVarTypes_22;
      MR_Word TypeAssign1_23;
      MR_Word LambdaType_24;
      MR_Word STATE_VARIABLE_TypeAssignSet_27_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_6;

      check_hlds__typecheck_clauses__type_assign_get_types_of_vars_4_p_0(ArgVars_5, &ArgVarTypes_22, TypeAssign0_15, &TypeAssign1_23);
      parse_tree__prog_type_construct__construct_higher_order_type_4_p_0(Purity_2, PredOrFunc_3, ArgVarTypes_22, &LambdaType_24);
      check_hlds__typecheck_util__type_assign_var_has_type_5_p_0(TypeAssign1_23, Var_4, LambdaType_24, STATE_VARIABLE_TypeAssignSet_0_6, &STATE_VARIABLE_TypeAssignSet_27_27);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TypeAssignSet0_16;
      next_value_of_STATE_VARIABLE_TypeAssignSet_0_6 = STATE_VARIABLE_TypeAssignSet_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeAssignSet_0_6 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__type_assign_get_types_of_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_TypeAssign_0_3,
  MR_Word * STATE_VARIABLE_TypeAssign_4)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_TypeAssign_4 = STATE_VARIABLE_TypeAssign_0_3;
  }
  else
  {
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Vars_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Type_10;
    MR_Word Types_11;
    MR_Word VarTypes0_13;
    MR_Word STATE_VARIABLE_TypeAssign_17_17;
    MR_Word VarType_14;

    check_hlds__type_assign__type_assign_get_var_types_2_p_0(STATE_VARIABLE_TypeAssign_0_3, &VarTypes0_13);
    succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes0_13, Var_8, &VarType_14);
    if (succeeded)
    {
      Type_10 = VarType_14;
      STATE_VARIABLE_TypeAssign_17_17 = STATE_VARIABLE_TypeAssign_0_3;
    }
    else
      check_hlds__typecheck_util__type_assign_fresh_type_var_4_p_0(Var_8, &Type_10, STATE_VARIABLE_TypeAssign_0_3, &STATE_VARIABLE_TypeAssign_17_17);
    check_hlds__typecheck_clauses__type_assign_get_types_of_vars_4_p_0(Vars_9, &Types_11, STATE_VARIABLE_TypeAssign_17_17, STATE_VARIABLE_TypeAssign_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Type_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Types_11));
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__type_assigns_unify_var_var_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word X_2,
  MR_Word Y_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeAssignSet_5 = STATE_VARIABLE_TypeAssignSet_0_4;
    else
    {
      MR_Word TypeAssign_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeAssigns_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeAssignSet_18_18;
      MR_Word VarTypes0_19;
      MR_Word TypeX_20;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;

      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_11, &VarTypes0_19);
      succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes0_19, X_2, &TypeX_20);
      if (succeeded)
      {
        MR_Word MaybeTypeY_21;
        MR_Word VarTypes_22;

        parse_tree__vartypes__search_insert_var_type_5_p_0(Y_3, TypeX_20, &MaybeTypeY_21, VarTypes0_19, &VarTypes_22);
        if ((MaybeTypeY_21 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word TypeAssign_25;

          check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_22, TypeAssign_11, &TypeAssign_25);
          {
            STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (TypeAssign_25));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
          }
        }
        else
        {
          MR_Word TypeY_23 = ((MR_Word) ((MR_hl_field(1, MaybeTypeY_21, (MR_Integer) 0))));
          MR_Word TypeAssign3_24;

          succeeded = check_hlds__typecheck_util__type_assign_unify_type_4_p_0(TypeX_20, TypeY_23, TypeAssign_11, &TypeAssign3_24);
          if (succeeded)
            {
              STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (TypeAssign3_24));
              MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
            }
          else
            STATE_VARIABLE_TypeAssignSet_18_18 = STATE_VARIABLE_TypeAssignSet_0_4;
        }
      }
      else
      {
        MR_Word TypeY_37;

        succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes0_19, Y_3, &TypeY_37);
        if (succeeded)
        {
          MR_Word VarTypes_33;
          MR_Word TypeAssign_34;

          parse_tree__vartypes__add_var_type_4_p_0(X_2, TypeY_37, VarTypes0_19, &VarTypes_33);
          check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_33, TypeAssign_11, &TypeAssign_34);
          {
            STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (TypeAssign_34));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
          }
        }
        else
        {
          MR_Word TypeVarSet0_26;
          MR_Word TypeVar_27;
          MR_Word TypeVarSet_28;
          MR_Word TypeAssign1_29;
          MR_Word Type_30;
          MR_Word VarTypes1_31;
          MR_Word VarTypes_35;
          MR_Word TypeAssign_36;

          check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_11, &TypeVarSet0_26);
          mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVar_27, TypeVarSet0_26, &TypeVarSet_28);
          check_hlds__type_assign__type_assign_set_typevarset_3_p_0(TypeVarSet_28, TypeAssign_11, &TypeAssign1_29);
          {
            Type_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Type_30, 0) = ((MR_Box) (TypeVar_27));
            MR_hl_field(0, Type_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__vartypes__add_var_type_4_p_0(X_2, Type_30, VarTypes0_19, &VarTypes1_31);
          succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[1]), ((MR_Box) (X_2)), ((MR_Box) (Y_3)));
          if (succeeded)
            VarTypes_35 = VarTypes1_31;
          else
            parse_tree__vartypes__add_var_type_4_p_0(Y_3, Type_30, VarTypes1_31, &VarTypes_35);
          check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_35, TypeAssign1_29, &TypeAssign_36);
          {
            STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (TypeAssign_36));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
          }
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TypeAssigns_12;
      next_value_of_STATE_VARIABLE_TypeAssignSet_0_4 = STATE_VARIABLE_TypeAssignSet_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeAssignSet_0_4 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_event_call_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_event_call_7_p_0(
  MR_Word Context_8,
  MR_String EventName_9,
  MR_Word ArgVars_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_21,
  MR_Word * STATE_VARIABLE_TypeAssignSet_22,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_13;
  MR_Word EventSet_14;
  MR_Word EventSpecMap_15;
  MR_Word EventArgTypes_16;

  check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_23, &ModuleInfo_13);
  hlds__hlds_module__module_info_get_event_set_2_p_0(ModuleInfo_13, &EventSet_14);
  EventSpecMap_15 = ((MR_Word) ((MR_hl_field(0, EventSet_14, (MR_Integer) 1))));
  succeeded = parse_tree__prog_event__event_arg_types_3_p_0(EventSpecMap_15, EventName_9, &EventArgTypes_16);
  if (succeeded)
  {
    MR_Integer NumArgVars_17;
    MR_Integer NumEventArgTypes_18;

    mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[1]), ArgVars_10, &NumArgVars_17);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), EventArgTypes_16, &NumEventArgTypes_18);
    succeeded = (NumArgVars_17 == NumEventArgTypes_18);
    if (succeeded)
    {
      MR_Word ArgVectorKind_19;
      MR_Word Specs_33;
      MR_Word MaybeArgVectorTypeErrors_34;
      MR_Word ArgVectorTypeErrors_35;
      MR_Word Var_43;

      {
        ArgVectorKind_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ArgVectorKind_19, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, ArgVectorKind_19, 1) = ((MR_Box) (EventName_9));
      }
      check_hlds__typecheck_clauses__typecheck_vars_have_types_in_arg_vector_12_p_0(STATE_VARIABLE_Info_0_23, Context_8, ArgVectorKind_19, (MR_Integer) 1, ArgVars_10, EventArgTypes_16, STATE_VARIABLE_TypeAssignSet_0_21, STATE_VARIABLE_TypeAssignSet_22, (MR_Word) ((MR_Unsigned) 0U), &Specs_33, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_clauses_scalar_common_2[0])), &MaybeArgVectorTypeErrors_34);
      succeeded = (MaybeArgVectorTypeErrors_34 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgVectorTypeErrors_35 = ((MR_Word) ((MR_hl_field(1, MaybeArgVectorTypeErrors_34, (MR_Integer) 0))));
        succeeded = (ArgVectorTypeErrors_35 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_43 = ((MR_Word) ((MR_hl_field(1, ArgVectorTypeErrors_35, (MR_Integer) 1))));
          succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        MR_Word AllArgsSpec_39;

        AllArgsSpec_39 = check_hlds__typecheck_errors__report_error_wrong_types_in_arg_vector_5_f_0(STATE_VARIABLE_Info_0_23, Context_8, ArgVectorKind_19, *STATE_VARIABLE_TypeAssignSet_22, ArgVectorTypeErrors_35);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(AllArgsSpec_39, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
      }
      else
      {
        MR_Box conv1_STATE_VARIABLE_Info_24;

        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_4[2]), Specs_33, ((MR_Box) (STATE_VARIABLE_Info_0_23)), &conv1_STATE_VARIABLE_Info_24);
        *STATE_VARIABLE_Info_24 = ((MR_Word) (conv1_STATE_VARIABLE_Info_24));
      }
    }
    else
    {
      MR_Word Spec_20;

      Spec_20 = check_hlds__typecheck_error_undef__report_error_undef_event_arity_4_f_0(Context_8, EventName_9, EventArgTypes_16, ArgVars_10);
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_20, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
      *STATE_VARIABLE_TypeAssignSet_22 = STATE_VARIABLE_TypeAssignSet_0_21;
    }
  }
  else
  {
    MR_Word Spec_29;

    Spec_29 = check_hlds__typecheck_error_undef__report_error_undef_event_2_f_0(Context_8, EventName_9);
    check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_29, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
    *STATE_VARIABLE_TypeAssignSet_22 = STATE_VARIABLE_TypeAssignSet_0_21;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_higher_order_call_9_p_0(
  MR_Word GenericCallId_10,
  MR_Word Context_11,
  MR_Word PredVar_12,
  MR_Word Purity_13,
  MR_Word ArgVars_14,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_23,
  MR_Word * STATE_VARIABLE_TypeAssignSet_24,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  MR_Integer Arity_17;
  MR_Word TypeVarSet_18;
  MR_Word PredVarType_19;
  MR_Word ArgTypes_20;
  MR_Word VarVectorKind_21;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word ArgsTypeAssignSet0_33;
  MR_Word ArgsTypeAssignSet_34;

  mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[1]), ArgVars_14, &Arity_17);
  check_hlds__typecheck_util__higher_order_pred_type_5_p_0(Purity_13, Arity_17, &TypeVarSet_18, &PredVarType_19, &ArgTypes_20);
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (GenericCallId_10));
  }
  {
    VarVectorKind_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, VarVectorKind_21, 0) = ((MR_Box) (Var_27));
  }
  {
    Var_28 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_28, 0) = ((MR_Box) (PredVar_12));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (PredVar_12));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (ArgVars_14));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (PredVarType_19));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (ArgTypes_20));
  }
  Var_31 = check_hlds__typecheck_util__empty_hlds_constraints_0_f_0();
  check_hlds__typecheck_clauses__add_renamed_apart_arg_type_assigns_8_p_0(Var_28, TypeVarSet_18, (MR_Word) ((MR_Unsigned) 0U), Var_30, Var_31, STATE_VARIABLE_TypeAssignSet_0_23, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet0_33);
  check_hlds__typecheck_clauses__typecheck_vars_have_arg_types_8_p_0(VarVectorKind_21, Context_11, (MR_Integer) 1, Var_29, ArgsTypeAssignSet0_33, &ArgsTypeAssignSet_34, STATE_VARIABLE_Info_0_25, STATE_VARIABLE_Info_26);
  *STATE_VARIABLE_TypeAssignSet_24 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(ArgsTypeAssignSet_34);
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_plain_or_foreign_call_pred_id_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_plain_or_foreign_call_pred_id_9_p_0(
  MR_Word ArgVectorKind_10,
  MR_Word Context_11,
  MR_Word GoalId_12,
  MR_Word PredId_13,
  MR_Word ArgVars_14,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_25,
  MR_Word * STATE_VARIABLE_TypeAssignSet_26,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_17;
  MR_Word PredInfo_18;
  MR_Word PredTypeVarSet_19;
  MR_Word PredExistQVars_20;
  MR_Word PredArgTypes_21;
  MR_Word PredClassContext_22;
  MR_Word Var_29;
  MR_Word Var_30;

  check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_27, &ModuleInfo_17);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_17, PredId_13, &PredInfo_18);
  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_18, &PredTypeVarSet_19, &PredExistQVars_20, &PredArgTypes_21);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_18, &PredClassContext_22);
  succeeded = mercury__varset__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), PredTypeVarSet_19);
  if (succeeded)
  {
    Var_29 = ((MR_Word) ((MR_hl_field(0, PredClassContext_22, (MR_Integer) 0))));
    Var_30 = ((MR_Word) ((MR_hl_field(0, PredClassContext_22, (MR_Integer) 1))));
    succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word Specs_36;
    MR_Word MaybeArgVectorTypeErrors_37;
    MR_Word ArgVectorTypeErrors_38;
    MR_Word Var_46;

    check_hlds__typecheck_clauses__typecheck_vars_have_types_in_arg_vector_12_p_0(STATE_VARIABLE_Info_0_27, Context_11, ArgVectorKind_10, (MR_Integer) 1, ArgVars_14, PredArgTypes_21, STATE_VARIABLE_TypeAssignSet_0_25, STATE_VARIABLE_TypeAssignSet_26, (MR_Word) ((MR_Unsigned) 0U), &Specs_36, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_clauses_scalar_common_2[0])), &MaybeArgVectorTypeErrors_37);
    succeeded = (MaybeArgVectorTypeErrors_37 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgVectorTypeErrors_38 = ((MR_Word) ((MR_hl_field(1, MaybeArgVectorTypeErrors_37, (MR_Integer) 0))));
      succeeded = (ArgVectorTypeErrors_38 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_46 = ((MR_Word) ((MR_hl_field(1, ArgVectorTypeErrors_38, (MR_Integer) 1))));
        succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
    }
    if (succeeded)
    {
      MR_Word AllArgsSpec_42;

      AllArgsSpec_42 = check_hlds__typecheck_errors__report_error_wrong_types_in_arg_vector_5_f_0(STATE_VARIABLE_Info_0_27, Context_11, ArgVectorKind_10, *STATE_VARIABLE_TypeAssignSet_26, ArgVectorTypeErrors_38);
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(AllArgsSpec_42, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
    }
    else
    {
      MR_Box conv1_STATE_VARIABLE_Info_28;

      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_4[1]), Specs_36, ((MR_Box) (STATE_VARIABLE_Info_0_27)), &conv1_STATE_VARIABLE_Info_28);
      *STATE_VARIABLE_Info_28 = ((MR_Word) (conv1_STATE_VARIABLE_Info_28));
    }
  }
  else
  {
    MR_Word ClassTable_23;
    MR_Word PredConstraints_24;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word ArgsTypeAssignSet0_50;
    MR_Word ArgsTypeAssignSet_51;

    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_17, &ClassTable_23);
    hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_23, PredTypeVarSet_19, GoalId_12, PredClassContext_22, &PredConstraints_24);
    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (PredId_13));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (ArgVectorKind_10));
    }
    check_hlds__typecheck_clauses__add_renamed_apart_arg_type_assigns_8_p_0(Var_33, PredTypeVarSet_19, PredExistQVars_20, PredArgTypes_21, PredConstraints_24, STATE_VARIABLE_TypeAssignSet_0_25, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet0_50);
    check_hlds__typecheck_clauses__typecheck_vars_have_arg_types_8_p_0(Var_34, Context_11, (MR_Integer) 1, ArgVars_14, ArgsTypeAssignSet0_50, &ArgsTypeAssignSet_51, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
    *STATE_VARIABLE_TypeAssignSet_26 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(ArgsTypeAssignSet_51);
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_plain_call_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_plain_call_9_p_0(
  MR_Word SymName_10,
  MR_Word Context_11,
  MR_Word GoalId_12,
  MR_Word ArgVars_13,
  MR_Word * PredId_14,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_30,
  MR_Word * STATE_VARIABLE_TypeAssignSet_31,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_17;
  MR_Word PredicateTable_18;
  MR_Word PredFormArity_19;
  MR_Word SymNamePredFormArity_20;
  MR_Word IsFullyQualified_21;
  MR_Word PredIds_22;

  check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_32, &ModuleInfo_17);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_17, &PredicateTable_18);
  PredFormArity_19 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[1]), ArgVars_13);
  {
    SymNamePredFormArity_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SymNamePredFormArity_20, 0) = ((MR_Box) (SymName_10));
    MR_hl_field(0, SymNamePredFormArity_20, 1) = ((MR_Box) (PredFormArity_19));
  }
  check_hlds__typecheck_info__typecheck_info_get_calls_are_fully_qualified_2_p_0(STATE_VARIABLE_Info_0_32, &IsFullyQualified_21);
  hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredicateTable_18, IsFullyQualified_21, (MR_Integer) 0, SymName_10, PredFormArity_19, &PredIds_22);
  if ((PredIds_22 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ClauseContext_23;
    MR_Word Spec_24;

    *PredId_14 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_32, &ClauseContext_23);
    Spec_24 = check_hlds__typecheck_error_undef__report_error_call_to_undef_pred_3_f_0(ClauseContext_23, Context_11, SymNamePredFormArity_20);
    check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_24, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
    *STATE_VARIABLE_TypeAssignSet_31 = STATE_VARIABLE_TypeAssignSet_0_30;
  }
  else
  {
    MR_Word HeadPredId_25 = ((MR_Word) ((MR_hl_field(1, PredIds_22, (MR_Integer) 0))));
    MR_Word TailPredIds_26 = ((MR_Word) ((MR_hl_field(1, PredIds_22, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_TypeAssignSet_36_36;
    MR_Word STATE_VARIABLE_Info_37_37;

    if ((TailPredIds_26 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ArgVectorKind_27;
      MR_Word ModuleInfo_39;
      MR_Word PredInfo_40;
      MR_Word PredTypeVarSet_41;
      MR_Word PredExistQVars_42;
      MR_Word PredArgTypes_43;
      MR_Word PredClassContext_44;
      MR_Word Var_47;
      MR_Word Var_48;

      *PredId_14 = HeadPredId_25;
      {
        ArgVectorKind_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ArgVectorKind_27, 0) = ((MR_Box) (*PredId_14));
      }
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_32, &ModuleInfo_39);
      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_39, *PredId_14, &PredInfo_40);
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_40, &PredTypeVarSet_41, &PredExistQVars_42, &PredArgTypes_43);
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_40, &PredClassContext_44);
      succeeded = mercury__varset__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), PredTypeVarSet_41);
      if (succeeded)
      {
        Var_47 = ((MR_Word) ((MR_hl_field(0, PredClassContext_44, (MR_Integer) 0))));
        Var_48 = ((MR_Word) ((MR_hl_field(0, PredClassContext_44, (MR_Integer) 1))));
        succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word Specs_52;
        MR_Word MaybeArgVectorTypeErrors_53;
        MR_Word ArgVectorTypeErrors_54;
        MR_Word Var_62;

        check_hlds__typecheck_clauses__typecheck_vars_have_types_in_arg_vector_12_p_0(STATE_VARIABLE_Info_0_32, Context_11, ArgVectorKind_27, (MR_Integer) 1, ArgVars_13, PredArgTypes_43, STATE_VARIABLE_TypeAssignSet_0_30, &STATE_VARIABLE_TypeAssignSet_36_36, (MR_Word) ((MR_Unsigned) 0U), &Specs_52, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_clauses_scalar_common_2[0])), &MaybeArgVectorTypeErrors_53);
        succeeded = (MaybeArgVectorTypeErrors_53 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgVectorTypeErrors_54 = ((MR_Word) ((MR_hl_field(1, MaybeArgVectorTypeErrors_53, (MR_Integer) 0))));
          succeeded = (ArgVectorTypeErrors_54 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_62 = ((MR_Word) ((MR_hl_field(1, ArgVectorTypeErrors_54, (MR_Integer) 1))));
            succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
          }
        }
        if (succeeded)
        {
          MR_Word AllArgsSpec_58;

          AllArgsSpec_58 = check_hlds__typecheck_errors__report_error_wrong_types_in_arg_vector_5_f_0(STATE_VARIABLE_Info_0_32, Context_11, ArgVectorKind_27, STATE_VARIABLE_TypeAssignSet_36_36, ArgVectorTypeErrors_54);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(AllArgsSpec_58, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_37_37);
        }
        else
        {
          MR_Box conv1_STATE_VARIABLE_Info_37_37;

          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_4[0]), Specs_52, ((MR_Box) (STATE_VARIABLE_Info_0_32)), &conv1_STATE_VARIABLE_Info_37_37);
          STATE_VARIABLE_Info_37_37 = ((MR_Word) (conv1_STATE_VARIABLE_Info_37_37));
        }
      }
      else
      {
        MR_Word ClassTable_45;
        MR_Word PredConstraints_46;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word ArgsTypeAssignSet0_66;
        MR_Word ArgsTypeAssignSet_67;

        hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_39, &ClassTable_45);
        hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_45, PredTypeVarSet_41, GoalId_12, PredClassContext_44, &PredConstraints_46);
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (*PredId_14));
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (ArgVectorKind_27));
        }
        check_hlds__typecheck_clauses__add_renamed_apart_arg_type_assigns_8_p_0(Var_49, PredTypeVarSet_41, PredExistQVars_42, PredArgTypes_43, PredConstraints_46, STATE_VARIABLE_TypeAssignSet_0_30, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet0_66);
        check_hlds__typecheck_clauses__typecheck_vars_have_arg_types_8_p_0(Var_50, Context_11, (MR_Integer) 1, ArgVars_13, ArgsTypeAssignSet0_66, &ArgsTypeAssignSet_67, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_37_37);
        STATE_VARIABLE_TypeAssignSet_36_36 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(ArgsTypeAssignSet_67);
      }
    }
    else
    {
      MR_Word PredFormArity_70;
      MR_Word SymNamePredFormArity_71;
      MR_Word Symbol_72;
      MR_Word ModuleInfo_73;
      MR_Word ClassTable_74;
      MR_Word PredicateTable_75;
      MR_Word PredIdTable_76;
      MR_Word ArgsTypeAssignSet0_77;
      MR_Word VarVectorKind_78;
      MR_Word ArgsTypeAssignSet_79;
      MR_Word STATE_VARIABLE_Info_30_80;
      MR_Word Var_82;
      MR_Word PredId_94;
      MR_Word PredIds_95;
      MR_Word PredInfo_97;
      MR_Word PredTypeVarSet_98;
      MR_Word PredExistQVars_99;
      MR_Word PredArgTypes_100;
      MR_Word PredClassContext_101;
      MR_Word TVarSet_102;
      MR_Word PredConstraints_103;
      MR_Word Var_106;
      MR_Word STATE_VARIABLE_ArgsTypeAssignSet_32_107;
      MR_Box conv2_PredInfo_97;

      PredFormArity_70 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[1]), ArgVars_13);
      {
        SymNamePredFormArity_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SymNamePredFormArity_71, 0) = ((MR_Box) (SymName_10));
        MR_hl_field(0, SymNamePredFormArity_71, 1) = ((MR_Box) (PredFormArity_70));
      }
      {
        Symbol_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Symbol_72, 0) = ((MR_Box) (SymNamePredFormArity_71));
        MR_hl_field(0, Symbol_72, 1) = ((MR_Box) (PredIds_22));
      }
      check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(Symbol_72, Context_11, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_30_80);
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(STATE_VARIABLE_Info_30_80, &ModuleInfo_73);
      hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_73, &ClassTable_74);
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_73, &PredicateTable_75);
      hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredicateTable_75, &PredIdTable_76);
      PredId_94 = ((MR_Word) ((MR_hl_field(1, PredIds_22, (MR_Integer) 0))));
      PredIds_95 = ((MR_Word) ((MR_hl_field(1, PredIds_22, (MR_Integer) 1))));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_76, ((MR_Box) (PredId_94)), &conv2_PredInfo_97);
      PredInfo_97 = ((MR_Word) (conv2_PredInfo_97));
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_97, &PredTypeVarSet_98, &PredExistQVars_99, &PredArgTypes_100);
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_97, &PredClassContext_101);
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_97, &TVarSet_102);
      hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_74, TVarSet_102, GoalId_12, PredClassContext_101, &PredConstraints_103);
      {
        Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_106, 0) = ((MR_Box) (PredId_94));
      }
      check_hlds__typecheck_clauses__add_renamed_apart_arg_type_assigns_8_p_0(Var_106, PredTypeVarSet_98, PredExistQVars_99, PredArgTypes_100, PredConstraints_103, STATE_VARIABLE_TypeAssignSet_0_30, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_ArgsTypeAssignSet_32_107);
      check_hlds__typecheck_clauses__get_overloaded_pred_arg_types_7_p_0(PredIdTable_76, ClassTable_74, GoalId_12, PredIds_95, STATE_VARIABLE_TypeAssignSet_0_30, STATE_VARIABLE_ArgsTypeAssignSet_32_107, &ArgsTypeAssignSet0_77);
      {
        Var_82 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_82, 0) = ((MR_Box) (SymNamePredFormArity_71));
      }
      {
        VarVectorKind_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, VarVectorKind_78, 0) = ((MR_Box) (Var_82));
      }
      check_hlds__typecheck_clauses__typecheck_vars_have_arg_types_8_p_0(VarVectorKind_78, Context_11, (MR_Integer) 1, ArgVars_13, ArgsTypeAssignSet0_77, &ArgsTypeAssignSet_79, STATE_VARIABLE_Info_30_80, &STATE_VARIABLE_Info_37_37);
      STATE_VARIABLE_TypeAssignSet_36_36 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(ArgsTypeAssignSet_79);
      *PredId_14 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
    check_hlds__typeclasses__perform_context_reduction_5_p_0(Context_11, STATE_VARIABLE_TypeAssignSet_36_36, STATE_VARIABLE_TypeAssignSet_31, STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Info_33);
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_vars_have_types_in_arg_vector_12_p_0(
  MR_Word Info_1,
  MR_Word Context_2,
  MR_Word ArgVectorKind_3,
  MR_Integer ArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_7,
  MR_Word * STATE_VARIABLE_TypeAssignSet_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10,
  MR_Word STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11,
  MR_Word * STATE_VARIABLE_MaybeArgVectorTypeErrors_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_MaybeArgVectorTypeErrors_12 = STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11;
        *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_0_9;
        *STATE_VARIABLE_TypeAssignSet_8 = STATE_VARIABLE_TypeAssignSet_0_7;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.typecheck_vars_have_types_in_arg_vector\'/12", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_85 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Var_86 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));

      if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.typecheck_vars_have_types_in_arg_vector\'/12", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word Type_66 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
        MR_Word Types_67 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_TypeAssignSet_77_77;
        MR_Word STATE_VARIABLE_Specs_78_78;
        MR_Word STATE_VARIABLE_MaybeArgVectorTypeErrors_79_79;
        MR_Integer Var_80;
        MR_Word TypeAssignSet1_87;
        MR_Integer next_value_of_ArgNum_4;
        MR_Word next_value_of_HeadVar__5_5;
        MR_Word next_value_of_HeadVar__6_6;
        MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_7;
        MR_Word next_value_of_STATE_VARIABLE_Specs_0_9;
        MR_Word next_value_of_STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11;

        check_hlds__typecheck_clauses__typecheck_var_has_type_2_5_p_0(STATE_VARIABLE_TypeAssignSet_0_7, Var_86, Type_66, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_87);
        succeeded = (TypeAssignSet1_87 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (STATE_VARIABLE_TypeAssignSet_0_7 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          MR_Word GoalContext_90;
          MR_Word SpecAndMaybeActualExpected_91;
          MR_Word Spec_92;
          MR_Word MaybeActualExpected_93;
          MR_Word Var_99;

          STATE_VARIABLE_TypeAssignSet_77_77 = STATE_VARIABLE_TypeAssignSet_0_7;
          {
            Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_99, 0) = ((MR_Box) (ArgVectorKind_3));
          }
          {
            GoalContext_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, GoalContext_90, 0) = ((MR_Box) (Var_99));
            MR_hl_field(1, GoalContext_90, 1) = ((MR_Box) (ArgNum_4));
          }
          SpecAndMaybeActualExpected_91 = check_hlds__typecheck_errors__report_error_var_has_wrong_type_6_f_0(Info_1, GoalContext_90, Context_2, Var_86, Type_66, STATE_VARIABLE_TypeAssignSet_0_7);
          Spec_92 = ((MR_Word) ((MR_hl_field(0, SpecAndMaybeActualExpected_91, (MR_Integer) 0))));
          MaybeActualExpected_93 = ((MR_Word) ((MR_hl_field(0, SpecAndMaybeActualExpected_91, (MR_Integer) 1))));
          {
            STATE_VARIABLE_Specs_78_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Specs_78_78, 0) = ((MR_Box) (Spec_92));
            MR_hl_field(1, STATE_VARIABLE_Specs_78_78, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_9));
          }
          if ((STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_MaybeArgVectorTypeErrors_79_79 = STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11;
          else
          {
            MR_Word ArgVectorTypeErrors0_94 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11, (MR_Integer) 0))));

            if ((MaybeActualExpected_93 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_MaybeArgVectorTypeErrors_79_79 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word ActualExpected_95 = ((MR_Word) ((MR_hl_field(1, MaybeActualExpected_93, (MR_Integer) 0))));
              MR_Word ArgVectorTypeError_96;
              MR_Word ArgVectorTypeErrors_97;

              {
                ArgVectorTypeError_96 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ArgVectorTypeError_96, 0) = ((MR_Box) (ArgNum_4));
                MR_hl_field(0, ArgVectorTypeError_96, 1) = ((MR_Box) (Var_86));
                MR_hl_field(0, ArgVectorTypeError_96, 2) = ((MR_Box) (ActualExpected_95));
              }
              {
                ArgVectorTypeErrors_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ArgVectorTypeErrors_97, 0) = ((MR_Box) (ArgVectorTypeError_96));
                MR_hl_field(1, ArgVectorTypeErrors_97, 1) = ((MR_Box) (ArgVectorTypeErrors0_94));
              }
              {
                STATE_VARIABLE_MaybeArgVectorTypeErrors_79_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_MaybeArgVectorTypeErrors_79_79, 0) = ((MR_Box) (ArgVectorTypeErrors_97));
              }
            }
          }
        }
        else
        {
          STATE_VARIABLE_TypeAssignSet_77_77 = TypeAssignSet1_87;
          STATE_VARIABLE_MaybeArgVectorTypeErrors_79_79 = STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11;
          STATE_VARIABLE_Specs_78_78 = STATE_VARIABLE_Specs_0_9;
        }
        Var_80 = (MR_Integer) ((MR_Unsigned) ArgNum_4 + (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_ArgNum_4 = Var_80;
        next_value_of_HeadVar__5_5 = Var_85;
        next_value_of_HeadVar__6_6 = Types_67;
        next_value_of_STATE_VARIABLE_TypeAssignSet_0_7 = STATE_VARIABLE_TypeAssignSet_77_77;
        next_value_of_STATE_VARIABLE_Specs_0_9 = STATE_VARIABLE_Specs_78_78;
        next_value_of_STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11 = STATE_VARIABLE_MaybeArgVectorTypeErrors_79_79;
        ArgNum_4 = next_value_of_ArgNum_4;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        HeadVar__6_6 = next_value_of_HeadVar__6_6;
        STATE_VARIABLE_TypeAssignSet_0_7 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_7;
        STATE_VARIABLE_Specs_0_9 = next_value_of_STATE_VARIABLE_Specs_0_9;
        STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11 = next_value_of_STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_var_has_type_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Var_2,
  MR_Word Type_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeAssignSet_5 = STATE_VARIABLE_TypeAssignSet_0_4;
    else
    {
      MR_Word TypeAssign0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeAssigns0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeAssignSet_18_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;

      check_hlds__typecheck_util__type_assign_var_has_type_5_p_0(TypeAssign0_11, Var_2, Type_3, STATE_VARIABLE_TypeAssignSet_0_4, &STATE_VARIABLE_TypeAssignSet_18_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TypeAssigns0_12;
      next_value_of_STATE_VARIABLE_TypeAssignSet_0_4 = STATE_VARIABLE_TypeAssignSet_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeAssignSet_0_4 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_vars_have_arg_types_8_p_0(
  MR_Word VarVectorKind_1,
  MR_Word Context_2,
  MR_Integer CurArgNum_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ArgsTypeAssignSet_0_5,
  MR_Word * STATE_VARIABLE_ArgsTypeAssignSet_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      *STATE_VARIABLE_ArgsTypeAssignSet_6 = STATE_VARIABLE_ArgsTypeAssignSet_0_5;
    }
    else
    {
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word GoalContext_25;
      MR_Word STATE_VARIABLE_ArgsTypeAssignSet_30_30;
      MR_Word STATE_VARIABLE_Info_31_31;
      MR_Integer Var_32;
      MR_Word ArgsTypeAssignSet1_36;
      MR_Integer next_value_of_CurArgNum_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_7;

      {
        GoalContext_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, GoalContext_25, 0) = ((MR_Box) (VarVectorKind_1));
        MR_hl_field(1, GoalContext_25, 1) = ((MR_Box) (CurArgNum_3));
      }
      check_hlds__typecheck_clauses__typecheck_var_has_arg_type_in_args_type_assigns_5_p_0(CurArgNum_3, Var_21, STATE_VARIABLE_ArgsTypeAssignSet_0_5, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet1_36);
      succeeded = (ArgsTypeAssignSet1_36 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (STATE_VARIABLE_ArgsTypeAssignSet_0_5 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        MR_Word Spec_39;

        Spec_39 = check_hlds__typecheck_errors__report_error_var_has_wrong_type_arg_6_f_0(STATE_VARIABLE_Info_0_7, GoalContext_25, Context_2, CurArgNum_3, Var_21, STATE_VARIABLE_ArgsTypeAssignSet_0_5);
        STATE_VARIABLE_ArgsTypeAssignSet_30_30 = STATE_VARIABLE_ArgsTypeAssignSet_0_5;
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_39, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_31_31);
      }
      else
      {
        STATE_VARIABLE_ArgsTypeAssignSet_30_30 = ArgsTypeAssignSet1_36;
        STATE_VARIABLE_Info_31_31 = STATE_VARIABLE_Info_0_7;
      }
      Var_32 = (MR_Integer) ((MR_Unsigned) CurArgNum_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurArgNum_3 = Var_32;
      next_value_of_HeadVar__4_4 = Vars_22;
      next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_5 = STATE_VARIABLE_ArgsTypeAssignSet_30_30;
      next_value_of_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_31_31;
      CurArgNum_3 = next_value_of_CurArgNum_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_ArgsTypeAssignSet_0_5 = next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_5;
      STATE_VARIABLE_Info_0_7 = next_value_of_STATE_VARIABLE_Info_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_var_has_arg_type_in_args_type_assigns_5_p_0(
  MR_Integer ArgNum_1,
  MR_Word Var_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ArgsTypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_ArgsTypeAssignSet_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ArgsTypeAssignSet_5 = STATE_VARIABLE_ArgsTypeAssignSet_0_4;
    else
    {
      MR_Word ArgsTypeAssign_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgsTypeAssigns_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ArgsTypeAssignSet_18_18;
      MR_Word TypeAssign0_19 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_13, (MR_Integer) 0))));
      MR_Word ArgTypes_20 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_13, (MR_Integer) 1))));
      MR_Word ClassContext_21 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_13, (MR_Integer) 2))));
      MR_Word Source_22 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_13, (MR_Integer) 3))));
      MR_Word VarTypes0_23;
      MR_Word ArgType_24;
      MR_Word MaybeOldVarType_25;
      MR_Word VarTypes_26;
      MR_Box conv0_ArgType_24;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_4;

      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_19, &VarTypes0_23);
      mercury__list__det_index1_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_20, ArgNum_1, &conv0_ArgType_24);
      ArgType_24 = ((MR_Word) (conv0_ArgType_24));
      parse_tree__vartypes__search_insert_var_type_5_p_0(Var_2, ArgType_24, &MaybeOldVarType_25, VarTypes0_23, &VarTypes_26);
      if ((MaybeOldVarType_25 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeAssign_30;
        MR_Word ArgsTypeAssign_31;

        check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_26, TypeAssign0_19, &TypeAssign_30);
        {
          ArgsTypeAssign_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ArgsTypeAssign_31, 0) = ((MR_Box) (TypeAssign_30));
          MR_hl_field(0, ArgsTypeAssign_31, 1) = ((MR_Box) (ArgTypes_20));
          MR_hl_field(0, ArgsTypeAssign_31, 2) = ((MR_Box) (ClassContext_21));
          MR_hl_field(0, ArgsTypeAssign_31, 3) = ((MR_Box) (Source_22));
        }
        {
          STATE_VARIABLE_ArgsTypeAssignSet_18_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssignSet_18_18, 0) = ((MR_Box) (ArgsTypeAssign_31));
          MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_ArgsTypeAssignSet_0_4));
        }
      }
      else
      {
        MR_Word OldVarType_27 = ((MR_Word) ((MR_hl_field(1, MaybeOldVarType_25, (MR_Integer) 0))));
        MR_Word TypeAssign_28;

        succeeded = check_hlds__typecheck_util__type_assign_unify_type_4_p_0(OldVarType_27, ArgType_24, TypeAssign0_19, &TypeAssign_28);
        if (succeeded)
        {
          MR_Word ArgsTypeAssign_29;

          {
            ArgsTypeAssign_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ArgsTypeAssign_29, 0) = ((MR_Box) (TypeAssign_28));
            MR_hl_field(0, ArgsTypeAssign_29, 1) = ((MR_Box) (ArgTypes_20));
            MR_hl_field(0, ArgsTypeAssign_29, 2) = ((MR_Box) (ClassContext_21));
            MR_hl_field(0, ArgsTypeAssign_29, 3) = ((MR_Box) (Source_22));
          }
          {
            STATE_VARIABLE_ArgsTypeAssignSet_18_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssignSet_18_18, 0) = ((MR_Box) (ArgsTypeAssign_29));
            MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_ArgsTypeAssignSet_0_4));
          }
        }
        else
          STATE_VARIABLE_ArgsTypeAssignSet_18_18 = STATE_VARIABLE_ArgsTypeAssignSet_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ArgsTypeAssigns_14;
      next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_4 = STATE_VARIABLE_ArgsTypeAssignSet_18_18;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_ArgsTypeAssignSet_0_4 = next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__get_overloaded_pred_arg_types_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_ArgsTypeAssignSet_0_6,
  MR_Word * STATE_VARIABLE_ArgsTypeAssignSet_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ArgsTypeAssignSet_7 = STATE_VARIABLE_ArgsTypeAssignSet_0_6;
    else
    {
      MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word PredIds_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word PredInfo_22;
      MR_Word PredTypeVarSet_23;
      MR_Word PredExistQVars_24;
      MR_Word PredArgTypes_25;
      MR_Word PredClassContext_26;
      MR_Word TVarSet_27;
      MR_Word PredConstraints_28;
      MR_Word Var_31;
      MR_Word STATE_VARIABLE_ArgsTypeAssignSet_32_32;
      MR_Box conv0_PredInfo_22;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_6;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), HeadVar__1_1, ((MR_Box) (PredId_18)), &conv0_PredInfo_22);
      PredInfo_22 = ((MR_Word) (conv0_PredInfo_22));
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_22, &PredTypeVarSet_23, &PredExistQVars_24, &PredArgTypes_25);
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_22, &PredClassContext_26);
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_22, &TVarSet_27);
      hlds__hlds_class__make_body_hlds_constraints_5_p_0(HeadVar__2_2, TVarSet_27, HeadVar__3_3, PredClassContext_26, &PredConstraints_28);
      {
        Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_31, 0) = ((MR_Box) (PredId_18));
      }
      check_hlds__typecheck_clauses__add_renamed_apart_arg_type_assigns_8_p_0(Var_31, PredTypeVarSet_23, PredExistQVars_24, PredArgTypes_25, PredConstraints_28, HeadVar__5_5, STATE_VARIABLE_ArgsTypeAssignSet_0_6, &STATE_VARIABLE_ArgsTypeAssignSet_32_32);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = PredIds_19;
      next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_6 = STATE_VARIABLE_ArgsTypeAssignSet_32_32;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_ArgsTypeAssignSet_0_6 = next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__add_renamed_apart_arg_type_assigns_8_p_0(
  MR_Word Source_1,
  MR_Word PredTypeVarSet_2,
  MR_Word PredExistQVars_3,
  MR_Word PredArgTypes_4,
  MR_Word PredConstraints_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_ArgsTypeAssigns_0_7,
  MR_Word * STATE_VARIABLE_ArgsTypeAssigns_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ArgsTypeAssigns_8 = STATE_VARIABLE_ArgsTypeAssigns_0_7;
    else
    {
      MR_Word TypeAssign0_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
      MR_Word TypeAssigns0_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
      MR_Word TypeAssign1_25;
      MR_Word ParentArgTypes_26;
      MR_Word Renaming_27;
      MR_Word ParentExistQVars_28;
      MR_Word ParentConstraints_29;
      MR_Word ExistQTVars0_30;
      MR_Word ExistQTVars_31;
      MR_Word TypeAssign_32;
      MR_Word NewArgsTypeAssign_33;
      MR_Word STATE_VARIABLE_ArgsTypeAssigns_36_36;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_ArgsTypeAssigns_0_7;

      check_hlds__typecheck_util__type_assign_rename_apart_6_p_0(TypeAssign0_22, PredTypeVarSet_2, PredArgTypes_4, &TypeAssign1_25, &ParentArgTypes_26, &Renaming_27);
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_27, PredExistQVars_3, &ParentExistQVars_28);
      check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(Renaming_27, PredConstraints_5, &ParentConstraints_29);
      check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign1_25, &ExistQTVars0_30);
      ExistQTVars_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), ParentExistQVars_28, ExistQTVars0_30);
      check_hlds__type_assign__type_assign_set_existq_tvars_3_p_0(ExistQTVars_31, TypeAssign1_25, &TypeAssign_32);
      {
        NewArgsTypeAssign_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NewArgsTypeAssign_33, 0) = ((MR_Box) (TypeAssign_32));
        MR_hl_field(0, NewArgsTypeAssign_33, 1) = ((MR_Box) (ParentArgTypes_26));
        MR_hl_field(0, NewArgsTypeAssign_33, 2) = ((MR_Box) (ParentConstraints_29));
        MR_hl_field(0, NewArgsTypeAssign_33, 3) = ((MR_Box) (Source_1));
      }
      {
        STATE_VARIABLE_ArgsTypeAssigns_36_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssigns_36_36, 0) = ((MR_Box) (NewArgsTypeAssign_33));
        MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssigns_36_36, 1) = ((MR_Box) (STATE_VARIABLE_ArgsTypeAssigns_0_7));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = TypeAssigns0_23;
      next_value_of_STATE_VARIABLE_ArgsTypeAssigns_0_7 = STATE_VARIABLE_ArgsTypeAssigns_36_36;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_ArgsTypeAssigns_0_7 = next_value_of_STATE_VARIABLE_ArgsTypeAssigns_0_7;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_clauses__atomic_interface_list_to_var_list_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word I_3;
    MR_Word O_4;
    MR_Word Interfaces_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_7;
    MR_Word Var_8;

    I_3 = ((MR_Word) ((MR_hl_field(0, Var_6, (MR_Integer) 0))));
    O_4 = ((MR_Word) ((MR_hl_field(0, Var_6, (MR_Integer) 1))));
    Var_8 = check_hlds__typecheck_clauses__atomic_interface_list_to_var_list_1_f_0(Interfaces_5);
    {
      Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_7, 0) = ((MR_Box) (O_4));
      MR_hl_field(1, Var_7, 1) = ((MR_Box) (Var_8));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (I_3));
      MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_7));
    }
  }
  return HeadVar__2_2;
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_check_for_ambiguity_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadTypes_6;

  check_hlds__typecheck_clauses__compute_headvar_types_in_type_assign_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadTypes_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadTypes_6));
}

void MR_CALL 
check_hlds__typecheck_clauses__typecheck_check_for_ambiguity_6_p_0(
  MR_Word Context_7,
  MR_Word StuffToCheck_8,
  MR_Word HeadVars_9,
  MR_Word TypeAssignSet_10,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;

  if ((TypeAssignSet_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.typecheck_check_for_ambiguity\'/6", (MR_String) "no type-assignment");
      return;
    }
  else
  {
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, TypeAssignSet_10, (MR_Integer) 1))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, TypeAssignSet_10, (MR_Integer) 0))));

    if ((Var_35 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
    else
    {
      MR_Word TypeAssign2_14 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 0))));
      MR_Word TypeAssigns3plus_15 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 1))));
      MR_Word ErrorsSoFar_16;

      check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(STATE_VARIABLE_Info_0_23, &ErrorsSoFar_16);
      succeeded = (ErrorsSoFar_16 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        switch (StuffToCheck_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word HeadTypesInAssign1_17;
              MR_Word Var_29;
              MR_Word VarTypes_37;
              MR_Word TypeBindings_38;
              MR_Word HeadTypes0_39;
              MR_Word VarTypes_40;
              MR_Word TypeBindings_41;
              MR_Word HeadTypes0_42;
              MR_Word HeadTypes2_45;
              MR_Word HeadTypes3plus_46;

              check_hlds__type_assign__type_assign_get_var_types_2_p_0(Var_36, &VarTypes_37);
              check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(Var_36, &TypeBindings_38);
              parse_tree__vartypes__lookup_var_types_3_p_0(VarTypes_37, HeadVars_9, &HeadTypes0_39);
              parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(TypeBindings_38, HeadTypes0_39, &HeadTypesInAssign1_17);
              check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign2_14, &VarTypes_40);
              check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign2_14, &TypeBindings_41);
              parse_tree__vartypes__lookup_var_types_3_p_0(VarTypes_40, HeadVars_9, &HeadTypes0_42);
              parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(TypeBindings_41, HeadTypes0_42, &HeadTypes2_45);
              {
                Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_29, 0) = ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_3[0]));
                MR_hl_field(0, Var_29, 1) = ((MR_Box) (check_hlds__typecheck_clauses__typecheck_check_for_ambiguity_6_p_0_1));
                MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_29, 3) = ((MR_Box) (HeadVars_9));
              }
              mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[0]), Var_29, TypeAssigns3plus_15, &HeadTypes3plus_46);
              succeeded = parse_tree__prog_type_unify__identical_up_to_renaming_2_p_0(HeadTypesInAssign1_17, HeadTypes2_45);
              if (succeeded)
                succeeded = check_hlds__typecheck_clauses__all_identical_up_to_renaming_2_p_0(HeadTypesInAssign1_17, HeadTypes3plus_46);
            }
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
        }
      if (succeeded)
      {
        MR_Word ClauseContext_20;
        MR_Word OverloadedSymbolMap_21;
        MR_Word Spec_22;

        check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_23, &ClauseContext_20);
        check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(STATE_VARIABLE_Info_0_23, &OverloadedSymbolMap_21);
        Spec_22 = check_hlds__typecheck_error_overload__report_ambiguity_error_6_f_0(ClauseContext_20, Context_7, OverloadedSymbolMap_21, Var_36, TypeAssign2_14, TypeAssigns3plus_15);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_22, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
      }
      else
        *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__all_identical_up_to_renaming_2_p_0(
  MR_Word HeadTypes1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word HeadTypes2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word HeadTypes3plus_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = parse_tree__prog_type_unify__identical_up_to_renaming_2_p_0(HeadTypes1_1, HeadTypes2_5);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = HeadTypes3plus_6;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____stuff_to_check_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_clauses____Unify____stuff_to_check_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____stuff_to_check_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_clauses____Compare____stuff_to_check_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__typecheck_clauses__init(void)
{
}

void mercury__check_hlds__typecheck_clauses__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__type_ctor_info_stuff_to_check_0);
}

void mercury__check_hlds__typecheck_clauses__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck_clauses__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck_clauses.
