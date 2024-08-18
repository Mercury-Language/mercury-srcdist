/*
** Automatically generated from `typecheck_coerce.m'
** by the Mercury compiler,
** version rotd-2024-08-18
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


// :- module check_hlds.typecheck_coerce.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck_coerce__init
ENDINIT
*/

#include "check_hlds.typecheck_coerce.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.type_assign.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.typecheck_info.mih"
#include "check_hlds.typecheck_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_coerce__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_coerce__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_coerce__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_coerce__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_coerce__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_coerce__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_check_coerce_constraint_action_0_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__field_types_check_coerce_constraint_action_0_1[1];

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_check_coerce_constraint_action_0_1;

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_check_coerce_constraint_action_0_2;

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_check_coerce_constraint_action_0_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_check_coerce_constraint_action_0_1[1];

static const MR_DuPtagLayout check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_ptag_ordered_check_coerce_constraint_action_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_name_ordered_check_coerce_constraint_action_0[3];

static const MR_Integer check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__functor_number_map_check_coerce_constraint_action_0[3];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_coerce__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_functor_desc_types_comparison_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_functor_desc_types_comparison_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_ordinal_ordered_types_comparison_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_name_ordered_types_comparison_0[2];

static const MR_Integer check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__functor_number_map_types_comparison_0[2];

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____types_comparison_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____types_comparison_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____invariant_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____invariant_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____check_coerce_constraint_action_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____check_coerce_constraint_action_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__typecheck_coerce__coerce_constraint_is_satisfied_1_p_0(
  MR_Word Coercion_2);

static MR_bool MR_CALL 
check_hlds__typecheck_coerce__type_assign_has_only_satisfied_coerce_constraints_1_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__typecheck_coerce__type_assign_has_only_satisfied_coerce_constraints_1_p_0(
  MR_Word TypeAssign_2);

static void MR_CALL 
check_hlds__typecheck_coerce__set_coerce_constraint_to_not_yet_resolved_2_p_0(
  MR_Word STATE_VARIABLE_Coercion_0_4,
  MR_Word * STATE_VARIABLE_Coercion_5);

static void MR_CALL 
check_hlds__typecheck_coerce__type_assign_prune_coerce_constraints_3_p_0(
  MR_Word TypeTable_4,
  MR_Word STATE_VARIABLE_TypeAssign_0_10,
  MR_Word * STATE_VARIABLE_TypeAssign_11);

static void MR_CALL 
check_hlds__typecheck_coerce__check_pending_coerce_constraints_to_fixpoint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_coerce__check_pending_coerce_constraints_to_fixpoint_5_p_0(
  MR_Word TypeTable_6,
  MR_Word Coercions0_7,
  MR_Word * Coercions_8,
  MR_Word STATE_VARIABLE_TypeAssign_0_14,
  MR_Word * STATE_VARIABLE_TypeAssign_15);

static void MR_CALL 
check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_TypeAssign_0_5,
  MR_Word * STATE_VARIABLE_TypeAssign_6,
  MR_Word STATE_VARIABLE_MadeProgress_0_7,
  MR_Word * STATE_VARIABLE_MadeProgress_8);

static void MR_CALL 
check_hlds__typecheck_coerce__build_type_param_variance_restrictions_in_ctor_arg_6_p_0(
  MR_Word TypeTable_7,
  MR_Word CurTypeCtor_8,
  MR_Word CurTypeParams_9,
  MR_Word CtorArg_10,
  MR_Word STATE_VARIABLE_InvariantSet_0_15,
  MR_Word * STATE_VARIABLE_InvariantSet_16);

static void MR_CALL 
check_hlds__typecheck_coerce__build_type_param_variance_restrictions_in_ctor_arg_type_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_coerce__build_type_param_variance_restrictions_in_ctor_arg_type_6_p_0(
  MR_Word TypeTable_7,
  MR_Word CurTypeCtor_8,
  MR_Word CurTypeParams_9,
  MR_Word CtorArgType_10,
  MR_Word STATE_VARIABLE_InvariantSet_0_34,
  MR_Word * STATE_VARIABLE_InvariantSet_35);

static void MR_CALL 
check_hlds__typecheck_coerce__build_type_param_variance_restrictions_in_ctor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_coerce__build_type_param_variance_restrictions_in_ctor_6_p_0(
  MR_Word TypeTable_7,
  MR_Word CurTypeCtor_8,
  MR_Word CurTypeParams_9,
  MR_Word Ctor_10,
  MR_Word STATE_VARIABLE_InvariantSet_0_18,
  MR_Word * STATE_VARIABLE_InvariantSet_19);

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_2_8_p_0(
  MR_Word Context_9,
  MR_Word FromVar_10,
  MR_Word ToVar_11,
  MR_Word TypeAssign0_12,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_33,
  MR_Word * STATE_VARIABLE_TypeAssignSet_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static MR_bool MR_CALL 
check_hlds__typecheck_coerce__check_coerce_type_params_8_p_0(
  MR_Word TypeTable_9,
  MR_Word TVarSet_10,
  MR_Word InvariantSet_11,
  MR_Word TypeParams_12,
  MR_Word FromTypeArgs_13,
  MR_Word ToTypeArgs_14,
  MR_Word STATE_VARIABLE_TypeAssign_0_22,
  MR_Word * STATE_VARIABLE_TypeAssign_23);

static MR_bool MR_CALL 
check_hlds__typecheck_coerce__compare_types_7_p_0(
  MR_Word TypeTable_8,
  MR_Word TVarSet_9,
  MR_Word Comparison_10,
  MR_Word TypeA_11,
  MR_Word TypeB_12,
  MR_Word STATE_VARIABLE_TypeAssign_0_18,
  MR_Word * STATE_VARIABLE_TypeAssign_19);

static MR_bool MR_CALL 
check_hlds__typecheck_coerce__compare_types_corresponding_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_TypeAssign_0_6,
  MR_Word * STATE_VARIABLE_TypeAssign_7);

static void MR_CALL 
check_hlds__typecheck_coerce__replace_principal_type_ctor_with_base_4_p_0(
  MR_Word TypeTable_5,
  MR_Word TVarSet_6,
  MR_Word Type0_7,
  MR_Word * Type_8);

static MR_bool MR_CALL 
check_hlds__typecheck_coerce__typecheck_prune_coerce_constraints_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_prune_coerce_constraints_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____check_coerce_constraint_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____check_coerce_constraint_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____invariant_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____invariant_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____types_comparison_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____types_comparison_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_1[5][2];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_2[1][11];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_3[1][6];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_4[2][4];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_5[3][3];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_6[3][9];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_7[1][5];




static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_2[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_3[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_4[2][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_5[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_4[0])),
    ((MR_Box) (check_hlds__typecheck_coerce__typecheck_prune_coerce_constraints_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_7[0])),
    ((MR_Box) (check_hlds__typecheck_coerce__check_pending_coerce_constraints_to_fixpoint_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_4[1])),
    ((MR_Box) (check_hlds__typecheck_coerce__type_assign_has_only_satisfied_coerce_constraints_1_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_6[3][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_7[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_coerce__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_coerce__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_coerce__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&check_hlds__typecheck_coerce__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_coerce__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_coerce__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck_coerce__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_coerce__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck_coerce__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_check_coerce_constraint_action_0_0 = {
  (MR_String) "prune",
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

static const MR_PseudoTypeInfo check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__field_types_check_coerce_constraint_action_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0) };

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_check_coerce_constraint_action_0_1 = {
  (MR_String) "keep",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__field_types_check_coerce_constraint_action_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_check_coerce_constraint_action_0_2 = {
  (MR_String) "delay",
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

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_check_coerce_constraint_action_0_0[2] = {
  &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_check_coerce_constraint_action_0_0,
  &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_check_coerce_constraint_action_0_2
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_check_coerce_constraint_action_0_1[1] = { &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_check_coerce_constraint_action_0_1 };

static const MR_DuPtagLayout check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_ptag_ordered_check_coerce_constraint_action_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_check_coerce_constraint_action_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_check_coerce_constraint_action_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_name_ordered_check_coerce_constraint_action_0[3] = {
  &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_check_coerce_constraint_action_0_2,
  &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_check_coerce_constraint_action_0_1,
  &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_check_coerce_constraint_action_0_0
};

static const MR_Integer check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__functor_number_map_check_coerce_constraint_action_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__type_ctor_info_check_coerce_constraint_action_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_coerce____Unify____check_coerce_constraint_action_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_coerce____Compare____check_coerce_constraint_action_0_0_10001)),
  (MR_String) "check_hlds.typecheck_coerce",
  (MR_String) "check_coerce_constraint_action",
  { check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_name_ordered_check_coerce_constraint_action_0 },
  { check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_ptag_ordered_check_coerce_constraint_action_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__functor_number_map_check_coerce_constraint_action_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_coerce__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&check_hlds__typecheck_coerce__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__type_ctor_info_invariant_set_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck_coerce____Unify____invariant_set_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_coerce____Compare____invariant_set_0_0_10001)),
  (MR_String) "check_hlds.typecheck_coerce",
  (MR_String) "invariant_set",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck_coerce__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_functor_desc_types_comparison_0_0 = {
  (MR_String) "compare_equal",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_functor_desc_types_comparison_0_1 = {
  (MR_String) "compare_equal_lt",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_ordinal_ordered_types_comparison_0[2] = {
  &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_functor_desc_types_comparison_0_0,
  &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_functor_desc_types_comparison_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_name_ordered_types_comparison_0[2] = {
  &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_functor_desc_types_comparison_0_0,
  &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_functor_desc_types_comparison_0_1
};

static const MR_Integer check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__functor_number_map_types_comparison_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__type_ctor_info_types_comparison_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck_coerce____Unify____types_comparison_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_coerce____Compare____types_comparison_0_0_10001)),
  (MR_String) "check_hlds.typecheck_coerce",
  (MR_String) "types_comparison",
  { check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_name_ordered_types_comparison_0 },
  { check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_ordinal_ordered_types_comparison_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__functor_number_map_types_comparison_0,

};

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____types_comparison_0_0(
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
check_hlds__typecheck_coerce____Unify____types_comparison_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____invariant_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____invariant_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____check_coerce_constraint_action_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
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
              MR_Word ArgX1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
              MR_Word ArgY1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

              check_hlds__type_assign____Compare____coerce_constraint_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____check_coerce_constraint_action_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
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
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
            succeeded = check_hlds__type_assign____Unify____coerce_constraint_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
    }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_coerce__coerce_constraint_is_satisfied_1_p_0(
  MR_Word Coercion_2)
{
  MR_bool succeeded;
  MR_Word Status_7 = ((MR_Unsigned) ((MR_hl_field(0, Coercion_2, (MR_Integer) 4))) & (MR_Integer) 3);

  succeeded = (Status_7 == (MR_Integer) 3);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_coerce__type_assign_has_only_satisfied_coerce_constraints_1_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_coerce__coerce_constraint_is_satisfied_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_coerce__type_assign_has_only_satisfied_coerce_constraints_1_p_0(
  MR_Word TypeAssign_2)
{
  MR_bool succeeded;
  MR_Word Coercions_3;

  check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(TypeAssign_2, &Coercions_3);
  succeeded = mercury__list__all_true_2_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_5[2]), Coercions_3);
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_coerce__set_coerce_constraint_to_not_yet_resolved_2_p_0(
  MR_Word STATE_VARIABLE_Coercion_0_4,
  MR_Word * STATE_VARIABLE_Coercion_5)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Coercion_0_4, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Coercion_0_4, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Coercion_0_4, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Coercion_0_4, (MR_Integer) 3))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Coercion_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
  }
}

static void MR_CALL 
check_hlds__typecheck_coerce__type_assign_prune_coerce_constraints_3_p_0(
  MR_Word TypeTable_4,
  MR_Word STATE_VARIABLE_TypeAssign_0_10,
  MR_Word * STATE_VARIABLE_TypeAssign_11)
{
  MR_Word Coercions0_6;

  check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(STATE_VARIABLE_TypeAssign_0_10, &Coercions0_6);
  if ((Coercions0_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_TypeAssign_11 = STATE_VARIABLE_TypeAssign_0_10;
  else
  {
    MR_Word Coercions_9;
    MR_Word STATE_VARIABLE_TypeAssign_12_12;

    check_hlds__typecheck_coerce__check_pending_coerce_constraints_to_fixpoint_5_p_0(TypeTable_4, Coercions0_6, &Coercions_9, STATE_VARIABLE_TypeAssign_0_10, &STATE_VARIABLE_TypeAssign_12_12);
    check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(Coercions_9, STATE_VARIABLE_TypeAssign_12_12, STATE_VARIABLE_TypeAssign_11);
  }
}

static void MR_CALL 
check_hlds__typecheck_coerce__check_pending_coerce_constraints_to_fixpoint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Coercion_5;

  check_hlds__typecheck_coerce__set_coerce_constraint_to_not_yet_resolved_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Coercion_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Coercion_5));
}

static void MR_CALL 
check_hlds__typecheck_coerce__check_pending_coerce_constraints_to_fixpoint_5_p_0(
  MR_Word TypeTable_6,
  MR_Word Coercions0_7,
  MR_Word * Coercions_8,
  MR_Word STATE_VARIABLE_TypeAssign_0_14,
  MR_Word * STATE_VARIABLE_TypeAssign_15)
{
  MR_Word KeepCoercions_10;
  MR_Word DelayedCoercions_11;
  MR_Word MadeProgress_12;
  MR_Word STATE_VARIABLE_TypeAssign_16_16;

  check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0(TypeTable_6, Coercions0_7, &KeepCoercions_10, &DelayedCoercions_11, STATE_VARIABLE_TypeAssign_0_14, &STATE_VARIABLE_TypeAssign_16_16, (MR_Integer) 0, &MadeProgress_12);
  switch (MadeProgress_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_5[1]), DelayedCoercions_11, Coercions_8);
        *STATE_VARIABLE_TypeAssign_15 = STATE_VARIABLE_TypeAssign_16_16;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Coercions2_13;

        check_hlds__typecheck_coerce__check_pending_coerce_constraints_to_fixpoint_5_p_0(TypeTable_6, DelayedCoercions_11, &Coercions2_13, STATE_VARIABLE_TypeAssign_16_16, STATE_VARIABLE_TypeAssign_15);
        *Coercions_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0), KeepCoercions_10, Coercions2_13);
      }
      break;
  }
}

static void MR_CALL 
check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InvariantSet_19;

  check_hlds__typecheck_coerce__build_type_param_variance_restrictions_in_ctor_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantSet_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InvariantSet_19));
}

static void MR_CALL 
check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_TypeAssign_0_5,
  MR_Word * STATE_VARIABLE_TypeAssign_6,
  MR_Word STATE_VARIABLE_MadeProgress_0_7,
  MR_Word * STATE_VARIABLE_MadeProgress_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_MadeProgress_8 = STATE_VARIABLE_MadeProgress_0_7;
      *STATE_VARIABLE_TypeAssign_6 = STATE_VARIABLE_TypeAssign_0_5;
    }
    else
    {
      MR_Word Coercion0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Coercions0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word FromType0_36 = ((MR_Word) ((MR_hl_field(0, Coercion0_17, (MR_Integer) 0))));
      MR_Word ToType0_37 = ((MR_Word) ((MR_hl_field(0, Coercion0_17, (MR_Integer) 1))));
      MR_Word Context_38 = ((MR_Word) ((MR_hl_field(0, Coercion0_17, (MR_Integer) 2))));
      MR_Word FromVar_39 = ((MR_Word) ((MR_hl_field(0, Coercion0_17, (MR_Integer) 3))));
      MR_Word Status0_40 = ((MR_Unsigned) ((MR_hl_field(0, Coercion0_17, (MR_Integer) 4))) & (MR_Integer) 3);

      switch (Status0_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TVarSet_42;
            MR_Word ExistQTVars_43;
            MR_Word TypeBindings0_44;
            MR_Word FromType_45;
            MR_Word ToType_46;

            check_hlds__type_assign__type_assign_get_typevarset_2_p_0(STATE_VARIABLE_TypeAssign_0_5, &TVarSet_42);
            check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(STATE_VARIABLE_TypeAssign_0_5, &ExistQTVars_43);
            check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(STATE_VARIABLE_TypeAssign_0_5, &TypeBindings0_44);
            parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings0_44, FromType0_36, &FromType_45);
            parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings0_44, ToType0_37, &ToType_46);
            succeeded = parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0(FromType_45, ExistQTVars_43);
            if (succeeded)
            {
              MR_Word TypeAssign1_47;
              MR_Word FromBaseType_53;
              MR_Word ToBaseType_54;
              MR_Word FromBaseTypeArgs_56;
              MR_Word ToBaseTypeCtor_57;
              MR_Word ToBaseTypeArgs_58;
              MR_Word BaseTypeCtor_59;
              MR_Word BaseTypeDefn_60;
              MR_Word BaseTypeParams_61;
              MR_Word InvariantSet_62;
              MR_Word TypeParams_65;
              MR_Word OoMCtors_68;
              MR_Word TypeDefn_64;
              MR_Word TypeBody_66;
              MR_Word TypeBodyDu_67;

              check_hlds__typecheck_coerce__replace_principal_type_ctor_with_base_4_p_0(HeadVar__1_1, TVarSet_42, FromType_45, &FromBaseType_53);
              check_hlds__typecheck_coerce__replace_principal_type_ctor_with_base_4_p_0(HeadVar__1_1, TVarSet_42, ToType_46, &ToBaseType_54);
              succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(FromBaseType_53, &BaseTypeCtor_59, &FromBaseTypeArgs_56);
              if (succeeded)
              {
                succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ToBaseType_54, &ToBaseTypeCtor_57, &ToBaseTypeArgs_58);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(BaseTypeCtor_59, ToBaseTypeCtor_57);
                  if (succeeded)
                  {
                    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(HeadVar__1_1, BaseTypeCtor_59, &BaseTypeDefn_60);
                    if (succeeded)
                    {
                      hlds__hlds_data__get_type_defn_tparams_2_p_0(BaseTypeDefn_60, &BaseTypeParams_61);
                      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(HeadVar__1_1, BaseTypeCtor_59, &TypeDefn_64);
                      if (succeeded)
                      {
                        hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_64, &TypeParams_65);
                        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_64, &TypeBody_66);
                        succeeded = ((MR_tag((MR_Word) TypeBody_66)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          TypeBodyDu_67 = (MR_Word) ((MR_Word) (TypeBody_66));
                          OoMCtors_68 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_67, (MR_Integer) 0))));
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                      {
                        MR_Word Ctors_73;
                        MR_Word Var_74;
                        MR_Word Var_75;
                        MR_Box conv1_InvariantSet_62;

                        Ctors_73 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_68);
                        {
                          Var_74 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_74, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_6[0]));
                          MR_hl_field(0, Var_74, 1) = ((MR_Box) (check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_1));
                          MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 3));
                          MR_hl_field(0, Var_74, 3) = ((MR_Box) (HeadVar__1_1));
                          MR_hl_field(0, Var_74, 4) = ((MR_Box) (BaseTypeCtor_59));
                          MR_hl_field(0, Var_74, 5) = ((MR_Box) (TypeParams_65));
                        }
                        Var_75 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]));
                        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[2]), Var_74, Ctors_73, ((MR_Box) (Var_75)), &conv1_InvariantSet_62);
                        InvariantSet_62 = ((MR_Word) (conv1_InvariantSet_62));
                      }
                      else
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.build_type_param_variance_restrictions\'/3", (MR_String) "not du type");
                          return;
                        }
                      succeeded = check_hlds__typecheck_coerce__check_coerce_type_params_8_p_0(HeadVar__1_1, TVarSet_42, InvariantSet_62, BaseTypeParams_61, FromBaseTypeArgs_56, ToBaseTypeArgs_58, STATE_VARIABLE_TypeAssign_0_5, &TypeAssign1_47);
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word TypeBindings1_48;
                MR_Word TypeA_81;
                MR_Word TypeB_82;
                MR_Word Var_83;
                MR_Word Var_84;

                check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign1_47, &TypeBindings1_48);
                parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_48, FromType_45, &TypeA_81);
                parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_48, ToType_46, &TypeB_82);
                Var_83 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(TypeA_81);
                Var_84 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(TypeB_82);
                succeeded = parse_tree__prog_type_test____Unify____non_kinded_type_0_0(Var_83, Var_84);
                if (succeeded)
                {
                  MR_Word Coercion_24;
                  MR_Word TailKeepCoercions_25;

                  {
                    Coercion_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Coercion_24, 0) = ((MR_Box) (FromType_45));
                    MR_hl_field(0, Coercion_24, 1) = ((MR_Box) (ToType_46));
                    MR_hl_field(0, Coercion_24, 2) = ((MR_Box) (Context_38));
                    MR_hl_field(0, Coercion_24, 3) = ((MR_Box) (FromVar_39));
                    MR_hl_field(0, Coercion_24, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                  }
                  check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0(HeadVar__1_1, Coercions0_18, &TailKeepCoercions_25, HeadVar__4_4, TypeAssign1_47, STATE_VARIABLE_TypeAssign_6, (MR_Integer) 1, STATE_VARIABLE_MadeProgress_8);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__3_3 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Coercion_24));
                    MR_hl_field(1, base, 1) = ((MR_Box) (TailKeepCoercions_25));
                  }
                }
                else
                {
                  MR_Word next_value_of_HeadVar__2_2 = Coercions0_18;
                  MR_Word next_value_of_STATE_VARIABLE_TypeAssign_0_5 = TypeAssign1_47;

                  // direct tailcall eliminated
                  ;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  STATE_VARIABLE_TypeAssign_0_5 = next_value_of_STATE_VARIABLE_TypeAssign_0_5;
                  STATE_VARIABLE_MadeProgress_0_7 = (MR_Integer) 1;
                  continue;
                }
              }
              else
              {
                MR_Word Coercion_98;
                MR_Word TailKeepCoercions_99;

                {
                  Coercion_98 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Coercion_98, 0) = ((MR_Box) (FromType0_36));
                  MR_hl_field(0, Coercion_98, 1) = ((MR_Box) (ToType0_37));
                  MR_hl_field(0, Coercion_98, 2) = ((MR_Box) (Context_38));
                  MR_hl_field(0, Coercion_98, 3) = ((MR_Box) (FromVar_39));
                  MR_hl_field(0, Coercion_98, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                }
                check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0(HeadVar__1_1, Coercions0_18, &TailKeepCoercions_99, HeadVar__4_4, STATE_VARIABLE_TypeAssign_0_5, STATE_VARIABLE_TypeAssign_6, (MR_Integer) 1, STATE_VARIABLE_MadeProgress_8);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Coercion_98));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailKeepCoercions_99));
                }
              }
            }
            else
            {
              MR_Word TailDelayedCoercions_26;

              check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0(HeadVar__1_1, Coercions0_18, HeadVar__3_3, &TailDelayedCoercions_26, STATE_VARIABLE_TypeAssign_0_5, STATE_VARIABLE_TypeAssign_6, STATE_VARIABLE_MadeProgress_0_7, STATE_VARIABLE_MadeProgress_8);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Coercion0_17));
                MR_hl_field(1, base, 1) = ((MR_Box) (TailDelayedCoercions_26));
              }
            }
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 1:
          {
            MR_Word TailKeepCoercions_90;

            check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0(HeadVar__1_1, Coercions0_18, &TailKeepCoercions_90, HeadVar__4_4, STATE_VARIABLE_TypeAssign_0_5, STATE_VARIABLE_TypeAssign_6, (MR_Integer) 1, STATE_VARIABLE_MadeProgress_8);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Coercion0_17));
              MR_hl_field(1, base, 1) = ((MR_Box) (TailKeepCoercions_90));
            }
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_coerce__build_type_param_variance_restrictions_in_ctor_arg_6_p_0(
  MR_Word TypeTable_7,
  MR_Word CurTypeCtor_8,
  MR_Word CurTypeParams_9,
  MR_Word CtorArg_10,
  MR_Word STATE_VARIABLE_InvariantSet_0_15,
  MR_Word * STATE_VARIABLE_InvariantSet_16)
{
  MR_Word CtorArgType_13 = ((MR_Word) ((MR_hl_field(0, CtorArg_10, (MR_Integer) 1))));

  check_hlds__typecheck_coerce__build_type_param_variance_restrictions_in_ctor_arg_type_6_p_0(TypeTable_7, CurTypeCtor_8, CurTypeParams_9, CtorArgType_13, STATE_VARIABLE_InvariantSet_0_15, STATE_VARIABLE_InvariantSet_16);
}

static void MR_CALL 
check_hlds__typecheck_coerce__build_type_param_variance_restrictions_in_ctor_arg_type_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InvariantSet_35;

  check_hlds__typecheck_coerce__build_type_param_variance_restrictions_in_ctor_arg_type_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantSet_35);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InvariantSet_35));
}

static void MR_CALL 
check_hlds__typecheck_coerce__build_type_param_variance_restrictions_in_ctor_arg_type_6_p_0(
  MR_Word TypeTable_7,
  MR_Word CurTypeCtor_8,
  MR_Word CurTypeParams_9,
  MR_Word CtorArgType_10,
  MR_Word STATE_VARIABLE_InvariantSet_0_34,
  MR_Word * STATE_VARIABLE_InvariantSet_35)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) CtorArgType_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_InvariantSet_35 = STATE_VARIABLE_InvariantSet_0_34;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgTypes_16 = ((MR_Word) ((MR_hl_field(1, CtorArgType_10, (MR_Integer) 1))));
          MR_Word TypeCtor_17;
          MR_Word TypeArgs_18;
          MR_Word TypeDefn_19;

          succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(CtorArgType_10, &TypeCtor_17, &TypeArgs_18);
          if (succeeded)
            succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_7, TypeCtor_17, &TypeDefn_19);
          if (succeeded)
          {
            MR_Word TypeBody_20;

            hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_19, &TypeBody_20);
            switch (MR_tag((MR_Word) TypeBody_20)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word TypeInfo_67_67;
                  MR_Word Var_65;

                  succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_17, CurTypeCtor_8);
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(TypeArgs_18, &Var_65);
                    if (succeeded)
                    {
                      TypeInfo_67_67 = (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[4]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_67_67, ((MR_Box) (CurTypeParams_9)), ((MR_Box) (Var_65)));
                    }
                  }
                  if (succeeded)
                    *STATE_VARIABLE_InvariantSet_35 = STATE_VARIABLE_InvariantSet_0_34;
                  else
                  {
                    MR_Word TypeVars_22;

                    parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_16, &TypeVars_22);
                    mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]), TypeVars_22, STATE_VARIABLE_InvariantSet_0_34, STATE_VARIABLE_InvariantSet_35);
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 3:
                {
                  MR_Word TypeVars_49;

                  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_16, &TypeVars_49);
                  mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]), TypeVars_49, STATE_VARIABLE_InvariantSet_0_34, STATE_VARIABLE_InvariantSet_35);
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.build_type_param_variance_restrictions_in_ctor_arg_type\'/6", (MR_String) "hlds_eqv_type");
                  return;
                }
                break;
            }
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.build_type_param_variance_restrictions_in_ctor_arg_type\'/6", (MR_String) "undefined type");
              return;
            }
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_InvariantSet_35 = STATE_VARIABLE_InvariantSet_0_34;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, CtorArgType_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_42;
              MR_Word ArgTypes_53 = ((MR_Word) ((MR_hl_field(3, CtorArgType_10, (MR_Integer) 1))));
              MR_Box conv1_STATE_VARIABLE_InvariantSet_35;

              {
                Var_42 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_42, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_6[2]));
                MR_hl_field(0, Var_42, 1) = ((MR_Box) (check_hlds__typecheck_coerce__build_type_param_variance_restrictions_in_ctor_arg_type_6_p_0_1));
                MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_42, 3) = ((MR_Box) (TypeTable_7));
                MR_hl_field(0, Var_42, 4) = ((MR_Box) (CurTypeCtor_8));
                MR_hl_field(0, Var_42, 5) = ((MR_Box) (CurTypeParams_9));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[2]), Var_42, ArgTypes_53, ((MR_Box) (STATE_VARIABLE_InvariantSet_0_34)), &conv1_STATE_VARIABLE_InvariantSet_35);
              *STATE_VARIABLE_InvariantSet_35 = ((MR_Word) (conv1_STATE_VARIABLE_InvariantSet_35));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTypes_54 = ((MR_Word) ((MR_hl_field(3, CtorArgType_10, (MR_Integer) 2))));
              MR_Word TypeVars_55;

              parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_54, &TypeVars_55);
              mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]), TypeVars_55, STATE_VARIABLE_InvariantSet_0_34, STATE_VARIABLE_InvariantSet_35);
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.build_type_param_variance_restrictions_in_ctor_arg_type\'/6", (MR_String) "apply_n_type");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word CtorArgType1_33 = ((MR_Word) ((MR_hl_field(3, CtorArgType_10, (MR_Integer) 1))));
              MR_Word next_value_of_CtorArgType_10 = CtorArgType1_33;

              // direct tailcall eliminated
              ;
              CtorArgType_10 = next_value_of_CtorArgType_10;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_coerce__build_type_param_variance_restrictions_in_ctor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InvariantSet_16;

  check_hlds__typecheck_coerce__build_type_param_variance_restrictions_in_ctor_arg_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantSet_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InvariantSet_16));
}

static void MR_CALL 
check_hlds__typecheck_coerce__build_type_param_variance_restrictions_in_ctor_6_p_0(
  MR_Word TypeTable_7,
  MR_Word CurTypeCtor_8,
  MR_Word CurTypeParams_9,
  MR_Word Ctor_10,
  MR_Word STATE_VARIABLE_InvariantSet_0_18,
  MR_Word * STATE_VARIABLE_InvariantSet_19)
{
  MR_Word CtorArgs_15 = ((MR_Word) ((MR_hl_field(0, Ctor_10, (MR_Integer) 3))));
  MR_Word Var_20;
  MR_Box conv1_STATE_VARIABLE_InvariantSet_19;

  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_6[1]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (check_hlds__typecheck_coerce__build_type_param_variance_restrictions_in_ctor_6_p_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (TypeTable_7));
    MR_hl_field(0, Var_20, 4) = ((MR_Box) (CurTypeCtor_8));
    MR_hl_field(0, Var_20, 5) = ((MR_Box) (CurTypeParams_9));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[2]), Var_20, CtorArgs_15, ((MR_Box) (STATE_VARIABLE_InvariantSet_0_18)), &conv1_STATE_VARIABLE_InvariantSet_19);
  *STATE_VARIABLE_InvariantSet_19 = ((MR_Word) (conv1_STATE_VARIABLE_InvariantSet_19));
}

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InvariantSet_19;

  check_hlds__typecheck_coerce__build_type_param_variance_restrictions_in_ctor_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantSet_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InvariantSet_19));
}

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_2_8_p_0(
  MR_Word Context_9,
  MR_Word FromVar_10,
  MR_Word ToVar_11,
  MR_Word TypeAssign0_12,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_33,
  MR_Word * STATE_VARIABLE_TypeAssignSet_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  MR_bool succeeded;
  MR_Word VarTypes_15;
  MR_Word TVarSet_16;
  MR_Word ExistQTVars_17;
  MR_Word TypeBindings_18;
  MR_Word MaybeFromType_21;
  MR_Word MaybeToType_24;
  MR_Word FromType0_19;
  MR_Word ToType0_22;
  MR_Word FromType_25;
  MR_Word ToType_26;

  check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_12, &VarTypes_15);
  check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign0_12, &TVarSet_16);
  check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign0_12, &ExistQTVars_17);
  check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign0_12, &TypeBindings_18);
  succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes_15, FromVar_10, &FromType0_19);
  if (succeeded)
  {
    MR_Word FromType1_20;

    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_18, FromType0_19, &FromType1_20);
    {
      MaybeFromType_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeFromType_21, 0) = ((MR_Box) (FromType1_20));
    }
  }
  else
    MaybeFromType_21 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes_15, ToVar_11, &ToType0_22);
  if (succeeded)
  {
    MR_Word ToType1_23;

    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_18, ToType0_22, &ToType1_23);
    {
      MaybeToType_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeToType_24, 0) = ((MR_Box) (ToType1_23));
    }
  }
  else
    MaybeToType_24 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = (MaybeFromType_21 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    FromType_25 = ((MR_Word) ((MR_hl_field(1, MaybeFromType_21, (MR_Integer) 0))));
    succeeded = (MaybeToType_24 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ToType_26 = ((MR_Word) ((MR_hl_field(1, MaybeToType_24, (MR_Integer) 0))));
      succeeded = parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0(FromType_25, ExistQTVars_17);
      if (succeeded)
        succeeded = parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0(ToType_26, ExistQTVars_17);
    }
  }
  if (succeeded)
  {
    MR_Word TypeTable_27;
    MR_Word TypeAssign_31;
    MR_Word TypeAssign1_28;
    MR_Word FromBaseType_49;
    MR_Word ToBaseType_50;
    MR_Word FromBaseTypeArgs_52;
    MR_Word ToBaseTypeCtor_53;
    MR_Word ToBaseTypeArgs_54;
    MR_Word BaseTypeCtor_55;
    MR_Word BaseTypeDefn_56;
    MR_Word BaseTypeParams_57;
    MR_Word InvariantSet_58;
    MR_Word TypeParams_61;
    MR_Word OoMCtors_64;
    MR_Word TypeDefn_60;
    MR_Word TypeBody_62;
    MR_Word TypeBodyDu_63;

    check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(STATE_VARIABLE_Info_0_35, &TypeTable_27);
    check_hlds__typecheck_coerce__replace_principal_type_ctor_with_base_4_p_0(TypeTable_27, TVarSet_16, FromType_25, &FromBaseType_49);
    check_hlds__typecheck_coerce__replace_principal_type_ctor_with_base_4_p_0(TypeTable_27, TVarSet_16, ToType_26, &ToBaseType_50);
    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(FromBaseType_49, &BaseTypeCtor_55, &FromBaseTypeArgs_52);
    if (succeeded)
    {
      succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ToBaseType_50, &ToBaseTypeCtor_53, &ToBaseTypeArgs_54);
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(BaseTypeCtor_55, ToBaseTypeCtor_53);
        if (succeeded)
        {
          succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_27, BaseTypeCtor_55, &BaseTypeDefn_56);
          if (succeeded)
          {
            hlds__hlds_data__get_type_defn_tparams_2_p_0(BaseTypeDefn_56, &BaseTypeParams_57);
            succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_27, BaseTypeCtor_55, &TypeDefn_60);
            if (succeeded)
            {
              hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_60, &TypeParams_61);
              hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_60, &TypeBody_62);
              succeeded = ((MR_tag((MR_Word) TypeBody_62)) == (MR_Integer) 0);
              if (succeeded)
              {
                TypeBodyDu_63 = (MR_Word) ((MR_Word) (TypeBody_62));
                OoMCtors_64 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_63, (MR_Integer) 0))));
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
            {
              MR_Word Ctors_69;
              MR_Word Var_70;
              MR_Word Var_71;
              MR_Box conv1_InvariantSet_58;

              Ctors_69 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_64);
              {
                Var_70 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_70, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_6[0]));
                MR_hl_field(0, Var_70, 1) = ((MR_Box) (check_hlds__typecheck_coerce__typecheck_coerce_2_8_p_0_1));
                MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_70, 3) = ((MR_Box) (TypeTable_27));
                MR_hl_field(0, Var_70, 4) = ((MR_Box) (BaseTypeCtor_55));
                MR_hl_field(0, Var_70, 5) = ((MR_Box) (TypeParams_61));
              }
              Var_71 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]));
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[2]), Var_70, Ctors_69, ((MR_Box) (Var_71)), &conv1_InvariantSet_58);
              InvariantSet_58 = ((MR_Word) (conv1_InvariantSet_58));
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.build_type_param_variance_restrictions\'/3", (MR_String) "not du type");
                return;
              }
            succeeded = check_hlds__typecheck_coerce__check_coerce_type_params_8_p_0(TypeTable_27, TVarSet_16, InvariantSet_58, BaseTypeParams_57, FromBaseTypeArgs_52, ToBaseTypeArgs_54, TypeAssign0_12, &TypeAssign1_28);
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeBindings1_29;
      MR_Word TypeA_77;
      MR_Word TypeB_78;
      MR_Word Var_79;
      MR_Word Var_80;

      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign1_28, &TypeBindings1_29);
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_29, FromType_25, &TypeA_77);
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_29, ToType_26, &TypeB_78);
      Var_79 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(TypeA_77);
      Var_80 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(TypeB_78);
      succeeded = parse_tree__prog_type_test____Unify____non_kinded_type_0_0(Var_79, Var_80);
      if (succeeded)
      {
        MR_Word Coercion_30;
        MR_Word Coercions0_82;
        MR_Word Coercions_83;

        {
          Coercion_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Coercion_30, 0) = ((MR_Box) (FromType_25));
          MR_hl_field(0, Coercion_30, 1) = ((MR_Box) (ToType_26));
          MR_hl_field(0, Coercion_30, 2) = ((MR_Box) (Context_9));
          MR_hl_field(0, Coercion_30, 3) = ((MR_Box) (FromVar_10));
          MR_hl_field(0, Coercion_30, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
        }
        check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(TypeAssign1_28, &Coercions0_82);
        {
          Coercions_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Coercions_83, 0) = ((MR_Box) (Coercion_30));
          MR_hl_field(1, Coercions_83, 1) = ((MR_Box) (Coercions0_82));
        }
        check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(Coercions_83, TypeAssign1_28, &TypeAssign_31);
      }
      else
        TypeAssign_31 = TypeAssign1_28;
    }
    else
    {
      MR_Word Coercion_42;
      MR_Word Coercions0_84;
      MR_Word Coercions_85;

      {
        Coercion_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Coercion_42, 0) = ((MR_Box) (FromType_25));
        MR_hl_field(0, Coercion_42, 1) = ((MR_Box) (ToType_26));
        MR_hl_field(0, Coercion_42, 2) = ((MR_Box) (Context_9));
        MR_hl_field(0, Coercion_42, 3) = ((MR_Box) (FromVar_10));
        MR_hl_field(0, Coercion_42, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      }
      check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(TypeAssign0_12, &Coercions0_84);
      {
        Coercions_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Coercions_85, 0) = ((MR_Box) (Coercion_42));
        MR_hl_field(1, Coercions_85, 1) = ((MR_Box) (Coercions0_84));
      }
      check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(Coercions_85, TypeAssign0_12, &TypeAssign_31);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_TypeAssignSet_34 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypeAssign_31));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_33));
    }
  }
  else
  {
    MR_Word TypeAssign2_32;
    MR_Word FromType_43;
    MR_Word ToType_44;
    MR_Word TypeAssign1_45;
    MR_Word Coercion_46;
    MR_Word TypeAssign_47;
    MR_Word Coercions0_86;
    MR_Word Coercions_87;

    if ((MaybeFromType_21 == (MR_Word) ((MR_Unsigned) 0U)))
      check_hlds__typecheck_util__type_assign_fresh_type_var_4_p_0(FromVar_10, &FromType_43, TypeAssign0_12, &TypeAssign1_45);
    else
    {
      FromType_43 = ((MR_Word) ((MR_hl_field(1, MaybeFromType_21, (MR_Integer) 0))));
      TypeAssign1_45 = TypeAssign0_12;
    }
    if ((MaybeToType_24 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[3]), ((MR_Box) (ToVar_11)), ((MR_Box) (FromVar_10)));
      if (succeeded)
      {
        ToType_44 = FromType_43;
        TypeAssign2_32 = TypeAssign1_45;
      }
      else
        check_hlds__typecheck_util__type_assign_fresh_type_var_4_p_0(ToVar_11, &ToType_44, TypeAssign1_45, &TypeAssign2_32);
    }
    else
    {
      ToType_44 = ((MR_Word) ((MR_hl_field(1, MaybeToType_24, (MR_Integer) 0))));
      TypeAssign2_32 = TypeAssign1_45;
    }
    {
      Coercion_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Coercion_46, 0) = ((MR_Box) (FromType_43));
      MR_hl_field(0, Coercion_46, 1) = ((MR_Box) (ToType_44));
      MR_hl_field(0, Coercion_46, 2) = ((MR_Box) (Context_9));
      MR_hl_field(0, Coercion_46, 3) = ((MR_Box) (FromVar_10));
      MR_hl_field(0, Coercion_46, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(TypeAssign2_32, &Coercions0_86);
    {
      Coercions_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Coercions_87, 0) = ((MR_Box) (Coercion_46));
      MR_hl_field(1, Coercions_87, 1) = ((MR_Box) (Coercions0_86));
    }
    check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(Coercions_87, TypeAssign2_32, &TypeAssign_47);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_TypeAssignSet_34 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypeAssign_47));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_33));
    }
  }
  *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
}

static MR_bool MR_CALL 
check_hlds__typecheck_coerce__check_coerce_type_params_8_p_0(
  MR_Word TypeTable_9,
  MR_Word TVarSet_10,
  MR_Word InvariantSet_11,
  MR_Word TypeParams_12,
  MR_Word FromTypeArgs_13,
  MR_Word ToTypeArgs_14,
  MR_Word STATE_VARIABLE_TypeAssign_0_22,
  MR_Word * STATE_VARIABLE_TypeAssign_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((TypeParams_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (FromTypeArgs_13 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (ToTypeArgs_14 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *STATE_VARIABLE_TypeAssign_23 = STATE_VARIABLE_TypeAssign_0_22;
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word TypeVar_16 = ((MR_Word) ((MR_hl_field(1, TypeParams_12, (MR_Integer) 0))));
      MR_Word TailTypeParams_17 = ((MR_Word) ((MR_hl_field(1, TypeParams_12, (MR_Integer) 1))));
      MR_Word FromType_18;
      MR_Word TailFromTypes_19;
      MR_Word ToType_20;
      MR_Word TailToTypes_21;
      MR_Word STATE_VARIABLE_TypeAssign_24_24;
      MR_Word TypeInfo_23_29;
      MR_Word next_value_of_TypeParams_12;
      MR_Word next_value_of_FromTypeArgs_13;
      MR_Word next_value_of_ToTypeArgs_14;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssign_0_22;

      succeeded = (FromTypeArgs_13 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        FromType_18 = ((MR_Word) ((MR_hl_field(1, FromTypeArgs_13, (MR_Integer) 0))));
        TailFromTypes_19 = ((MR_Word) ((MR_hl_field(1, FromTypeArgs_13, (MR_Integer) 1))));
        succeeded = (ToTypeArgs_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ToType_20 = ((MR_Word) ((MR_hl_field(1, ToTypeArgs_14, (MR_Integer) 0))));
          TailToTypes_21 = ((MR_Word) ((MR_hl_field(1, ToTypeArgs_14, (MR_Integer) 1))));
          TypeInfo_23_29 = (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]);
          succeeded = mercury__set__contains_2_p_0(TypeInfo_23_29, InvariantSet_11, ((MR_Box) (TypeVar_16)));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) FromType_18)) == (MR_Integer) 0);
            if (succeeded)
            {
            }
            if (!(succeeded))
            {
              succeeded = ((MR_tag((MR_Word) ToType_20)) == (MR_Integer) 0);
              if (succeeded)
              {
              }
            }
            if (succeeded)
              succeeded = check_hlds__typecheck_util__type_assign_unify_type_4_p_0(FromType_18, ToType_20, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_24_24);
            else
              switch (MR_tag((MR_Word) FromType_18)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_String Var_57;
                    MR_String Var_58;

                    succeeded = ((MR_tag((MR_Word) ToType_20)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_57 = (MR_String) "predicate \140check_hlds.typecheck_coerce.compare_types_nonvar\'/7";
                      Var_58 = (MR_String) "type_variable";
                      mercury__require__unexpected_2_p_0(Var_57, Var_58);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word TypeCtorA_42;
                    MR_Word ArgsA_43;
                    MR_Word TypeCtorB_44;
                    MR_Word ArgsB_45;

                    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(FromType_18, &TypeCtorA_42, &ArgsA_43);
                    if (succeeded)
                    {
                      succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ToType_20, &TypeCtorB_44, &ArgsB_45);
                      if (succeeded)
                      {
                        succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_42, TypeCtorB_44);
                        if (succeeded)
                          succeeded = check_hlds__typecheck_coerce__compare_types_corresponding_7_p_0(TypeTable_9, TVarSet_10, (MR_Integer) 0, ArgsA_43, ArgsB_45, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_24_24);
                      }
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word BuiltinType_34 = ((MR_Word) ((MR_hl_field(2, FromType_18, (MR_Integer) 0))));
                    MR_Word Var_67;

                    succeeded = ((MR_tag((MR_Word) ToType_20)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      Var_67 = ((MR_Word) ((MR_hl_field(2, ToType_20, (MR_Integer) 0))));
                      succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_34, Var_67);
                      if (succeeded)
                      {
                        STATE_VARIABLE_TypeAssign_24_24 = STATE_VARIABLE_TypeAssign_0_22;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, FromType_18, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Kind_47 = ((MR_Word) ((MR_hl_field(3, FromType_18, (MR_Integer) 2))));
                        MR_Word ArgsA_62 = ((MR_Word) ((MR_hl_field(3, FromType_18, (MR_Integer) 1))));
                        MR_Word ArgsB_63;
                        MR_Word Var_68;

                        succeeded = ((((MR_tag((MR_Word) ToType_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ToType_20, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          ArgsB_63 = ((MR_Word) ((MR_hl_field(3, ToType_20, (MR_Integer) 1))));
                          Var_68 = ((MR_Word) ((MR_hl_field(3, ToType_20, (MR_Integer) 2))));
                          succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_47, Var_68);
                          if (succeeded)
                            succeeded = check_hlds__typecheck_coerce__compare_types_corresponding_7_p_0(TypeTable_9, TVarSet_10, (MR_Integer) 0, ArgsA_62, ArgsB_63, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_24_24);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word PredOrFunc_48 = ((MR_Unsigned) ((MR_hl_field(3, FromType_18, (MR_Integer) 1))) & (MR_Integer) 1);
                        MR_Word Purity_50 = ((MR_Unsigned) ((MR_hl_field(3, FromType_18, (MR_Integer) 4))) & (MR_Integer) 3);
                        MR_Word Var_59;
                        MR_Word ArgsA_64 = ((MR_Word) ((MR_hl_field(3, FromType_18, (MR_Integer) 2))));
                        MR_Word ArgsB_65;
                        MR_Word Var_69;
                        MR_Word Var_70;

                        succeeded = ((((MR_tag((MR_Word) ToType_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ToType_20, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_69 = ((MR_Unsigned) ((MR_hl_field(3, ToType_20, (MR_Integer) 1))) & (MR_Integer) 1);
                          ArgsB_65 = ((MR_Word) ((MR_hl_field(3, ToType_20, (MR_Integer) 2))));
                          Var_70 = ((MR_Unsigned) ((MR_hl_field(3, ToType_20, (MR_Integer) 4))) & (MR_Integer) 3);
                          succeeded = (PredOrFunc_48 == Var_69);
                          if (succeeded)
                          {
                            succeeded = (Purity_50 == Var_70);
                            if (succeeded)
                            {
                              Var_59 = (MR_Integer) 0;
                              succeeded = check_hlds__typecheck_coerce__compare_types_corresponding_7_p_0(TypeTable_9, TVarSet_10, Var_59, ArgsA_64, ArgsB_65, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_24_24);
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.compare_types_nonvar\'/7", (MR_String) "apply_n_type");
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word TypeA1_55 = ((MR_Word) ((MR_hl_field(3, FromType_18, (MR_Integer) 1))));
                        MR_Word TypeB1_56;
                        MR_Word Kind_66 = ((MR_Word) ((MR_hl_field(3, FromType_18, (MR_Integer) 2))));
                        MR_Word Var_71;

                        succeeded = ((((MR_tag((MR_Word) ToType_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ToType_20, (MR_Integer) 0)))) == (MR_Integer) 3)));
                        if (succeeded)
                        {
                          TypeB1_56 = ((MR_Word) ((MR_hl_field(3, ToType_20, (MR_Integer) 1))));
                          Var_71 = ((MR_Word) ((MR_hl_field(3, ToType_20, (MR_Integer) 2))));
                          succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_66, Var_71);
                          if (succeeded)
                            succeeded = check_hlds__typecheck_coerce__compare_types_7_p_0(TypeTable_9, TVarSet_10, (MR_Integer) 0, TypeA1_55, TypeB1_56, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_24_24);
                        }
                      }
                      break;
                  }
                  break;
              }
          }
          else
          {
            MR_Word STATE_VARIABLE_TypeAssign_21_27;

            succeeded = check_hlds__typecheck_coerce__compare_types_7_p_0(TypeTable_9, TVarSet_10, (MR_Integer) 1, FromType_18, ToType_20, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_21_27);
            if (succeeded)
            {
              STATE_VARIABLE_TypeAssign_24_24 = STATE_VARIABLE_TypeAssign_21_27;
              succeeded = MR_TRUE;
            }
            else
              succeeded = check_hlds__typecheck_coerce__compare_types_7_p_0(TypeTable_9, TVarSet_10, (MR_Integer) 1, ToType_20, FromType_18, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_24_24);
          }
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_TypeParams_12 = TailTypeParams_17;
            next_value_of_FromTypeArgs_13 = TailFromTypes_19;
            next_value_of_ToTypeArgs_14 = TailToTypes_21;
            next_value_of_STATE_VARIABLE_TypeAssign_0_22 = STATE_VARIABLE_TypeAssign_24_24;
            TypeParams_12 = next_value_of_TypeParams_12;
            FromTypeArgs_13 = next_value_of_FromTypeArgs_13;
            ToTypeArgs_14 = next_value_of_ToTypeArgs_14;
            STATE_VARIABLE_TypeAssign_0_22 = next_value_of_STATE_VARIABLE_TypeAssign_0_22;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_coerce__compare_types_7_p_0(
  MR_Word TypeTable_8,
  MR_Word TVarSet_9,
  MR_Word Comparison_10,
  MR_Word TypeA_11,
  MR_Word TypeB_12,
  MR_Word STATE_VARIABLE_TypeAssign_0_18,
  MR_Word * STATE_VARIABLE_TypeAssign_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) TypeA_11)) == (MR_Integer) 0);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = ((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 0);
      if (succeeded)
      {
      }
    }
    if (succeeded)
      succeeded = check_hlds__typecheck_util__type_assign_unify_type_4_p_0(TypeA_11, TypeB_12, STATE_VARIABLE_TypeAssign_0_18, STATE_VARIABLE_TypeAssign_19);
    else
      switch (MR_tag((MR_Word) TypeA_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_43;
            MR_String Var_44;

            succeeded = ((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_43 = (MR_String) "predicate \140check_hlds.typecheck_coerce.compare_types_nonvar\'/7";
              Var_44 = (MR_String) "type_variable";
              mercury__require__unexpected_2_p_0(Var_43, Var_44);
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorA_28;
            MR_Word ArgsA_29;
            MR_Word TypeCtorB_30;
            MR_Word ArgsB_31;

            succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeA_11, &TypeCtorA_28, &ArgsA_29);
            if (succeeded)
            {
              succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeB_12, &TypeCtorB_30, &ArgsB_31);
              if (succeeded)
              {
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_28, TypeCtorB_30);
                if (succeeded)
                  succeeded = check_hlds__typecheck_coerce__compare_types_corresponding_7_p_0(TypeTable_8, TVarSet_9, Comparison_10, ArgsA_29, ArgsB_31, STATE_VARIABLE_TypeAssign_0_18, STATE_VARIABLE_TypeAssign_19);
                else
                {
                  MR_Word SuperTypeA_32;
                  MR_Word next_value_of_TypeA_11;

                  succeeded = (Comparison_10 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    succeeded = check_hlds__type_util__get_supertype_5_p_0(TypeTable_8, TVarSet_9, TypeCtorA_28, ArgsA_29, &SuperTypeA_32);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_TypeA_11 = SuperTypeA_32;
                      TypeA_11 = next_value_of_TypeA_11;
                      continue;
                    }
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BuiltinType_20 = ((MR_Word) ((MR_hl_field(2, TypeA_11, (MR_Integer) 0))));
            MR_Word Var_53;

            succeeded = ((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_53 = ((MR_Word) ((MR_hl_field(2, TypeB_12, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_20, Var_53);
              if (succeeded)
              {
                *STATE_VARIABLE_TypeAssign_19 = STATE_VARIABLE_TypeAssign_0_18;
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, TypeA_11, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Kind_33 = ((MR_Word) ((MR_hl_field(3, TypeA_11, (MR_Integer) 2))));
                MR_Word ArgsA_48 = ((MR_Word) ((MR_hl_field(3, TypeA_11, (MR_Integer) 1))));
                MR_Word ArgsB_49;
                MR_Word Var_54;

                succeeded = ((((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgsB_49 = ((MR_Word) ((MR_hl_field(3, TypeB_12, (MR_Integer) 1))));
                  Var_54 = ((MR_Word) ((MR_hl_field(3, TypeB_12, (MR_Integer) 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_33, Var_54);
                  if (succeeded)
                    succeeded = check_hlds__typecheck_coerce__compare_types_corresponding_7_p_0(TypeTable_8, TVarSet_9, Comparison_10, ArgsA_48, ArgsB_49, STATE_VARIABLE_TypeAssign_0_18, STATE_VARIABLE_TypeAssign_19);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word PredOrFunc_34 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_11, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Purity_36 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_11, (MR_Integer) 4))) & (MR_Integer) 3);
                MR_Word Var_45;
                MR_Word ArgsA_50 = ((MR_Word) ((MR_hl_field(3, TypeA_11, (MR_Integer) 2))));
                MR_Word ArgsB_51;
                MR_Word Var_55;
                MR_Word Var_56;

                succeeded = ((((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_55 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_12, (MR_Integer) 1))) & (MR_Integer) 1);
                  ArgsB_51 = ((MR_Word) ((MR_hl_field(3, TypeB_12, (MR_Integer) 2))));
                  Var_56 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_12, (MR_Integer) 4))) & (MR_Integer) 3);
                  succeeded = (PredOrFunc_34 == Var_55);
                  if (succeeded)
                  {
                    succeeded = (Purity_36 == Var_56);
                    if (succeeded)
                    {
                      Var_45 = (MR_Integer) 0;
                      succeeded = check_hlds__typecheck_coerce__compare_types_corresponding_7_p_0(TypeTable_8, TVarSet_9, Var_45, ArgsA_50, ArgsB_51, STATE_VARIABLE_TypeAssign_0_18, STATE_VARIABLE_TypeAssign_19);
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.compare_types_nonvar\'/7", (MR_String) "apply_n_type");
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeA1_41 = ((MR_Word) ((MR_hl_field(3, TypeA_11, (MR_Integer) 1))));
                MR_Word TypeB1_42;
                MR_Word Kind_52 = ((MR_Word) ((MR_hl_field(3, TypeA_11, (MR_Integer) 2))));
                MR_Word Var_57;
                MR_Word next_value_of_TypeA_11;
                MR_Word next_value_of_TypeB_12;

                succeeded = ((((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_12, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  TypeB1_42 = ((MR_Word) ((MR_hl_field(3, TypeB_12, (MR_Integer) 1))));
                  Var_57 = ((MR_Word) ((MR_hl_field(3, TypeB_12, (MR_Integer) 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_52, Var_57);
                  if (succeeded)
                  {
                    // direct tailcall eliminated
                    ;
                    next_value_of_TypeA_11 = TypeA1_41;
                    next_value_of_TypeB_12 = TypeB1_42;
                    TypeA_11 = next_value_of_TypeA_11;
                    TypeB_12 = next_value_of_TypeB_12;
                    continue;
                  }
                }
              }
              break;
          }
          break;
      }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_coerce__compare_types_corresponding_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_TypeAssign_0_6,
  MR_Word * STATE_VARIABLE_TypeAssign_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *STATE_VARIABLE_TypeAssign_7 = STATE_VARIABLE_TypeAssign_0_6;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word TypeA_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word TypesA_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word TypeB_19;
      MR_Word TypesB_20;
      MR_Word STATE_VARIABLE_TypeAssign_24_24;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssign_0_6;

      succeeded = (HeadVar__5_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeB_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
        TypesB_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) TypeA_17)) == (MR_Integer) 0);
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          succeeded = ((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 0);
          if (succeeded)
          {
          }
        }
        if (succeeded)
          succeeded = check_hlds__typecheck_util__type_assign_unify_type_4_p_0(TypeA_17, TypeB_19, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_24_24);
        else
          switch (MR_tag((MR_Word) TypeA_17)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_52;
                MR_String Var_53;

                succeeded = ((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_52 = (MR_String) "predicate \140check_hlds.typecheck_coerce.compare_types_nonvar\'/7";
                  Var_53 = (MR_String) "type_variable";
                  mercury__require__unexpected_2_p_0(Var_52, Var_53);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeCtorA_37;
                MR_Word ArgsA_38;
                MR_Word TypeCtorB_39;
                MR_Word ArgsB_40;

                succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeA_17, &TypeCtorA_37, &ArgsA_38);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeB_19, &TypeCtorB_39, &ArgsB_40);
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_37, TypeCtorB_39);
                    if (succeeded)
                      succeeded = check_hlds__typecheck_coerce__compare_types_corresponding_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, ArgsA_38, ArgsB_40, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_24_24);
                    else
                    {
                      MR_Word SuperTypeA_41;

                      succeeded = (HeadVar__3_3 == (MR_Integer) 1);
                      if (succeeded)
                      {
                        succeeded = check_hlds__type_util__get_supertype_5_p_0(HeadVar__1_1, HeadVar__2_2, TypeCtorA_37, ArgsA_38, &SuperTypeA_41);
                        if (succeeded)
                          succeeded = check_hlds__typecheck_coerce__compare_types_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, SuperTypeA_41, TypeB_19, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_24_24);
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word BuiltinType_29 = ((MR_Word) ((MR_hl_field(2, TypeA_17, (MR_Integer) 0))));
                MR_Word Var_62;

                succeeded = ((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_62 = ((MR_Word) ((MR_hl_field(2, TypeB_19, (MR_Integer) 0))));
                  succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_29, Var_62);
                  if (succeeded)
                  {
                    STATE_VARIABLE_TypeAssign_24_24 = STATE_VARIABLE_TypeAssign_0_6;
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, TypeA_17, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Kind_42 = ((MR_Word) ((MR_hl_field(3, TypeA_17, (MR_Integer) 2))));
                    MR_Word ArgsA_57 = ((MR_Word) ((MR_hl_field(3, TypeA_17, (MR_Integer) 1))));
                    MR_Word ArgsB_58;
                    MR_Word Var_63;

                    succeeded = ((((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_19, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      ArgsB_58 = ((MR_Word) ((MR_hl_field(3, TypeB_19, (MR_Integer) 1))));
                      Var_63 = ((MR_Word) ((MR_hl_field(3, TypeB_19, (MR_Integer) 2))));
                      succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_42, Var_63);
                      if (succeeded)
                        succeeded = check_hlds__typecheck_coerce__compare_types_corresponding_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, ArgsA_57, ArgsB_58, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_24_24);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word PredOrFunc_43 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_17, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word Purity_45 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_17, (MR_Integer) 4))) & (MR_Integer) 3);
                    MR_Word Var_54;
                    MR_Word ArgsA_59 = ((MR_Word) ((MR_hl_field(3, TypeA_17, (MR_Integer) 2))));
                    MR_Word ArgsB_60;
                    MR_Word Var_64;
                    MR_Word Var_65;

                    succeeded = ((((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_19, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_64 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_19, (MR_Integer) 1))) & (MR_Integer) 1);
                      ArgsB_60 = ((MR_Word) ((MR_hl_field(3, TypeB_19, (MR_Integer) 2))));
                      Var_65 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_19, (MR_Integer) 4))) & (MR_Integer) 3);
                      succeeded = (PredOrFunc_43 == Var_64);
                      if (succeeded)
                      {
                        succeeded = (Purity_45 == Var_65);
                        if (succeeded)
                        {
                          Var_54 = (MR_Integer) 0;
                          succeeded = check_hlds__typecheck_coerce__compare_types_corresponding_7_p_0(HeadVar__1_1, HeadVar__2_2, Var_54, ArgsA_59, ArgsB_60, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_24_24);
                        }
                      }
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.compare_types_nonvar\'/7", (MR_String) "apply_n_type");
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word TypeA1_50 = ((MR_Word) ((MR_hl_field(3, TypeA_17, (MR_Integer) 1))));
                    MR_Word TypeB1_51;
                    MR_Word Kind_61 = ((MR_Word) ((MR_hl_field(3, TypeA_17, (MR_Integer) 2))));
                    MR_Word Var_66;

                    succeeded = ((((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_19, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      TypeB1_51 = ((MR_Word) ((MR_hl_field(3, TypeB_19, (MR_Integer) 1))));
                      Var_66 = ((MR_Word) ((MR_hl_field(3, TypeB_19, (MR_Integer) 2))));
                      succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_61, Var_66);
                      if (succeeded)
                        succeeded = check_hlds__typecheck_coerce__compare_types_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, TypeA1_50, TypeB1_51, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_24_24);
                    }
                  }
                  break;
              }
              break;
          }
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__4_4 = TypesA_18;
          next_value_of_HeadVar__5_5 = TypesB_20;
          next_value_of_STATE_VARIABLE_TypeAssign_0_6 = STATE_VARIABLE_TypeAssign_24_24;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          HeadVar__5_5 = next_value_of_HeadVar__5_5;
          STATE_VARIABLE_TypeAssign_0_6 = next_value_of_STATE_VARIABLE_TypeAssign_0_6;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_coerce__replace_principal_type_ctor_with_base_4_p_0(
  MR_Word TypeTable_5,
  MR_Word TVarSet_6,
  MR_Word Type0_7,
  MR_Word * Type_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word SuperType_11;
    MR_Word TypeCtor_9;
    MR_Word Args_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type0_7, &TypeCtor_9, &Args_10);
    if (succeeded)
      succeeded = check_hlds__type_util__get_supertype_5_p_0(TypeTable_5, TVarSet_6, TypeCtor_9, Args_10, &SuperType_11);
    if (succeeded)
    {
      MR_Word next_value_of_Type0_7 = SuperType_11;

      // direct tailcall eliminated
      ;
      Type0_7 = next_value_of_Type0_7;
      continue;
    }
    else
      *Type_8 = Type0_7;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_coerce__typecheck_prune_coerce_constraints_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_coerce__type_assign_has_only_satisfied_coerce_constraints_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_prune_coerce_constraints_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeAssign_11;

  check_hlds__typecheck_coerce__type_assign_prune_coerce_constraints_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_TypeAssign_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_TypeAssign_11));
}

void MR_CALL 
check_hlds__typecheck_coerce__typecheck_prune_coerce_constraints_4_p_0(
  MR_Word TypeAssignSet0_5,
  MR_Word * TypeAssignSet_6,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_bool succeeded;
  MR_Word TypeTable_8;
  MR_Word TypeAssignSet1_9;
  MR_Word SatisfiedTypeAssignSet_10;
  MR_Word UnsatisfiedTypeAssignSet_11;
  MR_Word Var_16;

  check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(STATE_VARIABLE_Info_0_14, &TypeTable_8);
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_3[0]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (check_hlds__typecheck_coerce__typecheck_prune_coerce_constraints_4_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (TypeTable_8));
  }
  mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), Var_16, TypeAssignSet0_5, &TypeAssignSet1_9);
  mercury__list__filter_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_5[0]), TypeAssignSet1_9, &SatisfiedTypeAssignSet_10, &UnsatisfiedTypeAssignSet_11);
  if ((SatisfiedTypeAssignSet_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *TypeAssignSet_6 = UnsatisfiedTypeAssignSet_11;
  else
    *TypeAssignSet_6 = SatisfiedTypeAssignSet_10;
  *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
}

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_TypeAssignSet_34;
  MR_Word conv0_STATE_VARIABLE_Info_36;

  check_hlds__typecheck_coerce__typecheck_coerce_2_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TypeAssignSet_34, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_36);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TypeAssignSet_34));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_36));
}

void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_6_p_0(
  MR_Word Context_7,
  MR_Word Args_8,
  MR_Word TypeAssignSet0_9,
  MR_Word * TypeAssignSet_10,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_bool succeeded = (Args_8 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word FromVar_14;
  MR_Word ToVar_15;
  MR_Word TypeAssignSet1_16;
  MR_Word Var_25;
  MR_Word FromVar0_12;
  MR_Word ToVar0_13;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Box conv3_TypeAssignSet1_16;
  MR_Box conv2_STATE_VARIABLE_Info_20;

  if (succeeded)
  {
    FromVar0_12 = ((MR_Word) ((MR_hl_field(1, Args_8, (MR_Integer) 0))));
    Var_21 = ((MR_Word) ((MR_hl_field(1, Args_8, (MR_Integer) 1))));
    succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ToVar0_13 = ((MR_Word) ((MR_hl_field(1, Var_21, (MR_Integer) 0))));
      Var_22 = ((MR_Word) ((MR_hl_field(1, Var_21, (MR_Integer) 1))));
      succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    FromVar_14 = FromVar0_12;
    ToVar_15 = ToVar0_13;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.typecheck_coerce\'/6", (MR_String) "coerce requires two arguments");
      return;
    }
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_2[0]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (check_hlds__typecheck_coerce__typecheck_coerce_6_p_0_1));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (Context_7));
    MR_hl_field(0, Var_25, 4) = ((MR_Box) (FromVar_14));
    MR_hl_field(0, Var_25, 5) = ((MR_Box) (ToVar_15));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), Var_25, TypeAssignSet0_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_TypeAssignSet1_16, ((MR_Box) (STATE_VARIABLE_Info_0_19)), &conv2_STATE_VARIABLE_Info_20);
  TypeAssignSet1_16 = ((MR_Word) (conv3_TypeAssignSet1_16));
  *STATE_VARIABLE_Info_20 = ((MR_Word) (conv2_STATE_VARIABLE_Info_20));
  succeeded = (TypeAssignSet1_16 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = (TypeAssignSet0_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
    *TypeAssignSet_10 = TypeAssignSet0_9;
  else
    *TypeAssignSet_10 = TypeAssignSet1_16;
}

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____check_coerce_constraint_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_coerce____Unify____check_coerce_constraint_action_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____check_coerce_constraint_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_coerce____Compare____check_coerce_constraint_action_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____invariant_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_coerce____Unify____invariant_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____invariant_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_coerce____Compare____invariant_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____types_comparison_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_coerce____Unify____types_comparison_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____types_comparison_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_coerce____Compare____types_comparison_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__typecheck_coerce__init(void)
{
}

void mercury__check_hlds__typecheck_coerce__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__type_ctor_info_check_coerce_constraint_action_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__type_ctor_info_invariant_set_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__type_ctor_info_types_comparison_0);
}

void mercury__check_hlds__typecheck_coerce__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck_coerce__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck_coerce.
