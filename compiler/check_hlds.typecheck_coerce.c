/*
** Automatically generated from `typecheck_coerce.m'
** by the Mercury compiler,
** version rotd-2026-02-03
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
#include "integer.mih"
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
#include "check_hlds.typecheck_info.mih"
#include "check_hlds.typecheck_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.file_util.mih"
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
check_hlds__typecheck_coerce____Compare____invariant_tvars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____invariant_tvars_0_0(
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
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_6_p_0(
  MR_Word TypeTable_7,
  MR_Word BaseTypeCtor_8,
  MR_Word BaseTypeParams_9,
  MR_Word CtorArg_10,
  MR_Word STATE_VARIABLE_InvariantTVars_0_15,
  MR_Word * STATE_VARIABLE_InvariantTVars_16);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_rhs_type_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_rhs_type_6_p_0(
  MR_Word TypeTable_7,
  MR_Word BaseTypeCtor_8,
  MR_Word BaseTypeParams_9,
  MR_Word RhsType_10,
  MR_Word STATE_VARIABLE_InvariantTVars_0_38,
  MR_Word * STATE_VARIABLE_InvariantTVars_39);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_6_p_0(
  MR_Word TypeTable_7,
  MR_Word BaseTypeCtor_8,
  MR_Word BaseTypeParams_9,
  MR_Word Ctor_10,
  MR_Word STATE_VARIABLE_InvariantTVars_0_18,
  MR_Word * STATE_VARIABLE_InvariantTVars_19);

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_2_7_p_0(
  MR_Word Info_8,
  MR_Word Context_9,
  MR_Word FromVar_10,
  MR_Word ToVar_11,
  MR_Word TypeAssign0_12,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_32,
  MR_Word * STATE_VARIABLE_TypeAssignSet_33);

static MR_bool MR_CALL 
check_hlds__typecheck_coerce__are_type_params_as_related_as_needed_8_p_0(
  MR_Word TypeTable_9,
  MR_Word TVarSet_10,
  MR_Word InvariantTVars_11,
  MR_Word TypeParams_12,
  MR_Word FromArgTypes_13,
  MR_Word ToArgTypes_14,
  MR_Word STATE_VARIABLE_TypeAssign_0_22,
  MR_Word * STATE_VARIABLE_TypeAssign_23);

static MR_bool MR_CALL 
check_hlds__typecheck_coerce__types_compare_as_given_7_p_0(
  MR_Word TypeTable_8,
  MR_Word TVarSet_9,
  MR_Word Comparison_10,
  MR_Word TypeA_11,
  MR_Word TypeB_12,
  MR_Word STATE_VARIABLE_TypeAssign_0_18,
  MR_Word * STATE_VARIABLE_TypeAssign_19);

static MR_bool MR_CALL 
check_hlds__typecheck_coerce__corresponding_types_compare_as_given_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_TypeAssign_0_6,
  MR_Word * STATE_VARIABLE_TypeAssign_7);

static void MR_CALL 
check_hlds__typecheck_coerce__compute_base_type_4_p_0(
  MR_Word TypeTable_5,
  MR_Word TVarSet_6,
  MR_Word Type_7,
  MR_Word * BaseType_8);

static MR_bool MR_CALL 
check_hlds__typecheck_coerce__typecheck_prune_coerce_constraints_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_prune_coerce_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
check_hlds__typecheck_coerce____Unify____invariant_tvars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____invariant_tvars_0_0_10001(
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

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_2[1][10];

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

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_2[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0))
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
    ((MR_Box) (check_hlds__typecheck_coerce__typecheck_prune_coerce_constraints_3_p_0_2)),
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

const MR_TypeCtorInfo_Struct check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__type_ctor_info_invariant_tvars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck_coerce____Unify____invariant_tvars_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_coerce____Compare____invariant_tvars_0_0_10001)),
  (MR_String) "check_hlds.typecheck_coerce",
  (MR_String) "invariant_tvars",
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
check_hlds__typecheck_coerce____Compare____invariant_tvars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____invariant_tvars_0_0(
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
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_6 == CastX_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
            succeeded = check_hlds__type_assign____Unify____coerce_constraint_0_0(ArgX1_3, ArgY1_4);
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
  MR_Word Status_7 = ((MR_Unsigned) ((MR_hl_field(0, Coercion_2, 4))) & (MR_Integer) 3);

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
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Coercion_0_4, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Coercion_0_4, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Coercion_0_4, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Coercion_0_4, 3))));

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
    MR_Word STATE_VARIABLE_TypeAssign_1_12;

    check_hlds__typecheck_coerce__check_pending_coerce_constraints_to_fixpoint_5_p_0(TypeTable_4, Coercions0_6, &Coercions_9, STATE_VARIABLE_TypeAssign_0_10, &STATE_VARIABLE_TypeAssign_1_12);
    check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(Coercions_9, STATE_VARIABLE_TypeAssign_1_12, STATE_VARIABLE_TypeAssign_11);
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
  MR_Word STATE_VARIABLE_TypeAssign_1_16;

  check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0(TypeTable_6, Coercions0_7, &KeepCoercions_10, &DelayedCoercions_11, STATE_VARIABLE_TypeAssign_0_14, &STATE_VARIABLE_TypeAssign_1_16, (MR_Integer) 0, &MadeProgress_12);
  switch (MadeProgress_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_5[1]), DelayedCoercions_11, Coercions_8);
        *STATE_VARIABLE_TypeAssign_15 = STATE_VARIABLE_TypeAssign_1_16;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Coercions2_13;

        check_hlds__typecheck_coerce__check_pending_coerce_constraints_to_fixpoint_5_p_0(TypeTable_6, DelayedCoercions_11, &Coercions2_13, STATE_VARIABLE_TypeAssign_1_16, STATE_VARIABLE_TypeAssign_15);
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
  MR_Word conv0_STATE_VARIABLE_InvariantTVars_19;

  check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantTVars_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InvariantTVars_19));
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
      MR_Word Coercion0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Coercions0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word FromType0_36 = ((MR_Word) ((MR_hl_field(0, Coercion0_17, 0))));
      MR_Word ToType0_37 = ((MR_Word) ((MR_hl_field(0, Coercion0_17, 1))));
      MR_Word Context_38 = ((MR_Word) ((MR_hl_field(0, Coercion0_17, 2))));
      MR_Word FromVar_39 = ((MR_Word) ((MR_hl_field(0, Coercion0_17, 3))));
      MR_Word Status0_40 = ((MR_Unsigned) ((MR_hl_field(0, Coercion0_17, 4))) & (MR_Integer) 3);

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
              MR_Word TypeCtorInfo_20_75;
              MR_Word TypeInfo_24_76;
              MR_Word TypeInfo_25_77;
              MR_Word FromBaseType_53;
              MR_Word ToBaseType_54;
              MR_Word FromBaseTypeArgTypes_56;
              MR_Word ToBaseTypeCtor_57;
              MR_Word ToBaseTypeArgTypes_58;
              MR_Word BaseTypeCtor_59;
              MR_Word BaseTypeDefn_60;
              MR_Word BaseTypeBody_61;
              MR_Word BaseTypeBodyDu_62;
              MR_Word BaseTypeParams_63;
              MR_Word InvariantTVars_64;
              MR_Word OoMCtors_66;
              MR_Word Ctors_72;
              MR_Word Var_73;
              MR_Word Var_74;
              MR_Box conv1_InvariantTVars_64;

              check_hlds__typecheck_coerce__compute_base_type_4_p_0(HeadVar__1_1, TVarSet_42, FromType_45, &FromBaseType_53);
              check_hlds__typecheck_coerce__compute_base_type_4_p_0(HeadVar__1_1, TVarSet_42, ToType_46, &ToBaseType_54);
              succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(FromBaseType_53, &BaseTypeCtor_59, &FromBaseTypeArgTypes_56);
              if (succeeded)
              {
                succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ToBaseType_54, &ToBaseTypeCtor_57, &ToBaseTypeArgTypes_58);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(BaseTypeCtor_59, ToBaseTypeCtor_57);
                  if (succeeded)
                  {
                    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(HeadVar__1_1, BaseTypeCtor_59, &BaseTypeDefn_60);
                    if (succeeded)
                    {
                      hlds__hlds_data__get_type_defn_body_2_p_0(BaseTypeDefn_60, &BaseTypeBody_61);
                      succeeded = ((MR_tag((MR_Word) BaseTypeBody_61)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        BaseTypeBodyDu_62 = (MR_Word) ((MR_Word) (BaseTypeBody_61));
                        hlds__hlds_data__get_type_defn_tparams_2_p_0(BaseTypeDefn_60, &BaseTypeParams_63);
                        OoMCtors_66 = ((MR_Word) ((MR_hl_field(0, BaseTypeBodyDu_62, 0))));
                        TypeCtorInfo_20_75 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0);
                        Ctors_72 = mercury__one_or_more__one_or_more_to_list_1_f_1(TypeCtorInfo_20_75, OoMCtors_66);
                        TypeInfo_24_76 = (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]);
                        {
                          Var_73 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_73, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_6[0]));
                          MR_hl_field(0, Var_73, 1) = ((MR_Box) (check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_1));
                          MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 3));
                          MR_hl_field(0, Var_73, 3) = ((MR_Box) (HeadVar__1_1));
                          MR_hl_field(0, Var_73, 4) = ((MR_Box) (BaseTypeCtor_59));
                          MR_hl_field(0, Var_73, 5) = ((MR_Box) (BaseTypeParams_63));
                        }
                        Var_74 = mercury__set__init_0_f_0(TypeInfo_24_76);
                        TypeInfo_25_77 = (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[2]);
                        mercury__list__foldl_4_p_0(TypeCtorInfo_20_75, TypeInfo_25_77, Var_73, Ctors_72, ((MR_Box) (Var_74)), &conv1_InvariantTVars_64);
                        InvariantTVars_64 = ((MR_Word) (conv1_InvariantTVars_64));
                        succeeded = check_hlds__typecheck_coerce__are_type_params_as_related_as_needed_8_p_0(HeadVar__1_1, TVarSet_42, InvariantTVars_64, BaseTypeParams_63, FromBaseTypeArgTypes_56, ToBaseTypeArgTypes_58, STATE_VARIABLE_TypeAssign_0_5, &TypeAssign1_47);
                      }
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word TypeBindings1_48;
                MR_Word TypeA_78;
                MR_Word TypeB_79;
                MR_Word Var_80;
                MR_Word Var_81;

                check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign1_47, &TypeBindings1_48);
                parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_48, FromType_45, &TypeA_78);
                parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_48, ToType_46, &TypeB_79);
                Var_80 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(TypeA_78);
                Var_81 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(TypeB_79);
                succeeded = parse_tree__prog_type_test____Unify____non_kinded_type_0_0(Var_80, Var_81);
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
                MR_Word Coercion_95;
                MR_Word TailKeepCoercions_96;

                {
                  Coercion_95 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Coercion_95, 0) = ((MR_Box) (FromType0_36));
                  MR_hl_field(0, Coercion_95, 1) = ((MR_Box) (ToType0_37));
                  MR_hl_field(0, Coercion_95, 2) = ((MR_Box) (Context_38));
                  MR_hl_field(0, Coercion_95, 3) = ((MR_Box) (FromVar_39));
                  MR_hl_field(0, Coercion_95, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                }
                check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0(HeadVar__1_1, Coercions0_18, &TailKeepCoercions_96, HeadVar__4_4, STATE_VARIABLE_TypeAssign_0_5, STATE_VARIABLE_TypeAssign_6, (MR_Integer) 1, STATE_VARIABLE_MadeProgress_8);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Coercion_95));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailKeepCoercions_96));
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
            MR_Word TailKeepCoercions_87;

            check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0(HeadVar__1_1, Coercions0_18, &TailKeepCoercions_87, HeadVar__4_4, STATE_VARIABLE_TypeAssign_0_5, STATE_VARIABLE_TypeAssign_6, (MR_Integer) 1, STATE_VARIABLE_MadeProgress_8);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Coercion0_17));
              MR_hl_field(1, base, 1) = ((MR_Box) (TailKeepCoercions_87));
            }
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_6_p_0(
  MR_Word TypeTable_7,
  MR_Word BaseTypeCtor_8,
  MR_Word BaseTypeParams_9,
  MR_Word CtorArg_10,
  MR_Word STATE_VARIABLE_InvariantTVars_0_15,
  MR_Word * STATE_VARIABLE_InvariantTVars_16)
{
  MR_Word CtorArgType_13 = ((MR_Word) ((MR_hl_field(0, CtorArg_10, 1))));

  check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_rhs_type_6_p_0(TypeTable_7, BaseTypeCtor_8, BaseTypeParams_9, CtorArgType_13, STATE_VARIABLE_InvariantTVars_0_15, STATE_VARIABLE_InvariantTVars_16);
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_rhs_type_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InvariantTVars_39;

  check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_rhs_type_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantTVars_39);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InvariantTVars_39));
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_rhs_type_6_p_0(
  MR_Word TypeTable_7,
  MR_Word BaseTypeCtor_8,
  MR_Word BaseTypeParams_9,
  MR_Word RhsType_10,
  MR_Word STATE_VARIABLE_InvariantTVars_0_38,
  MR_Word * STATE_VARIABLE_InvariantTVars_39)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) RhsType_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_InvariantTVars_39 = STATE_VARIABLE_InvariantTVars_0_38;
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(1, RhsType_10, 0))));
          MR_Word ArgTypes_16 = ((MR_Word) ((MR_hl_field(1, RhsType_10, 1))));
          MR_Integer NumArgTypes_17;
          MR_Word TypeCtor_18;
          MR_Word TypeDefn_19;

          mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_16, &NumArgTypes_17);
          {
            TypeCtor_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeCtor_18, 0) = ((MR_Box) (SymName_15));
            MR_hl_field(0, TypeCtor_18, 1) = ((MR_Box) (NumArgTypes_17));
          }
          succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_7, TypeCtor_18, &TypeDefn_19);
          if (succeeded)
          {
            MR_Word TypeBody_20;

            hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_19, &TypeBody_20);
            switch (MR_tag((MR_Word) TypeBody_20)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word TypeInfo_71_71;
                  MR_Word ArgTypeVars_22;

                  succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_18, BaseTypeCtor_8);
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(ArgTypes_16, &ArgTypeVars_22);
                    if (succeeded)
                    {
                      TypeInfo_71_71 = (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[4]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_71_71, ((MR_Box) (ArgTypeVars_22)), ((MR_Box) (BaseTypeParams_9)));
                    }
                  }
                  if (succeeded)
                    *STATE_VARIABLE_InvariantTVars_39 = STATE_VARIABLE_InvariantTVars_0_38;
                  else
                  {
                    MR_Word TypeVars_23;

                    parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_16, &TypeVars_23);
                    mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]), TypeVars_23, STATE_VARIABLE_InvariantTVars_0_38, STATE_VARIABLE_InvariantTVars_39);
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 3:
                {
                  MR_Word TypeVars_52;

                  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_16, &TypeVars_52);
                  mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]), TypeVars_52, STATE_VARIABLE_InvariantTVars_0_38, STATE_VARIABLE_InvariantTVars_39);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word EqvType0_27 = ((MR_Word) ((MR_hl_field(2, TypeBody_20, 0))));
                  MR_Word TypeParams_28;
                  MR_Word TSubst_29;
                  MR_Word EqvType_30;
                  MR_Word next_value_of_RhsType_10;

                  hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_19, &TypeParams_28);
                  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_28, ArgTypes_16, &TSubst_29);
                  parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(TSubst_29, EqvType0_27, &EqvType_30);
                  // direct tailcall eliminated
                  ;
                  next_value_of_RhsType_10 = EqvType_30;
                  RhsType_10 = next_value_of_RhsType_10;
                  continue;
                }
                break;
            }
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.acc_invariant_tvars_in_ctor_rhs_type\'/6", (MR_String) "undefined type");
              return;
            }
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_InvariantTVars_39 = STATE_VARIABLE_InvariantTVars_0_38;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, RhsType_10, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_45;
              MR_Word ArgTypes_56 = ((MR_Word) ((MR_hl_field(3, RhsType_10, 1))));
              MR_Box conv1_STATE_VARIABLE_InvariantTVars_39;

              {
                Var_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_45, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_6[2]));
                MR_hl_field(0, Var_45, 1) = ((MR_Box) (check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_rhs_type_6_p_0_1));
                MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_45, 3) = ((MR_Box) (TypeTable_7));
                MR_hl_field(0, Var_45, 4) = ((MR_Box) (BaseTypeCtor_8));
                MR_hl_field(0, Var_45, 5) = ((MR_Box) (BaseTypeParams_9));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[2]), Var_45, ArgTypes_56, ((MR_Box) (STATE_VARIABLE_InvariantTVars_0_38)), &conv1_STATE_VARIABLE_InvariantTVars_39);
              *STATE_VARIABLE_InvariantTVars_39 = ((MR_Word) (conv1_STATE_VARIABLE_InvariantTVars_39));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTypes_57 = ((MR_Word) ((MR_hl_field(3, RhsType_10, 2))));
              MR_Word TypeVars_58;

              parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_57, &TypeVars_58);
              mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]), TypeVars_58, STATE_VARIABLE_InvariantTVars_0_38, STATE_VARIABLE_InvariantTVars_39);
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.acc_invariant_tvars_in_ctor_rhs_type\'/6", (MR_String) "apply_n_type");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word CtorArgType1_37 = ((MR_Word) ((MR_hl_field(3, RhsType_10, 1))));
              MR_Word next_value_of_RhsType_10 = CtorArgType1_37;

              // direct tailcall eliminated
              ;
              RhsType_10 = next_value_of_RhsType_10;
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
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InvariantTVars_16;

  check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantTVars_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InvariantTVars_16));
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_6_p_0(
  MR_Word TypeTable_7,
  MR_Word BaseTypeCtor_8,
  MR_Word BaseTypeParams_9,
  MR_Word Ctor_10,
  MR_Word STATE_VARIABLE_InvariantTVars_0_18,
  MR_Word * STATE_VARIABLE_InvariantTVars_19)
{
  MR_Word CtorArgs_15 = ((MR_Word) ((MR_hl_field(0, Ctor_10, 3))));
  MR_Word Var_20;
  MR_Box conv1_STATE_VARIABLE_InvariantTVars_19;

  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_6[1]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_6_p_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (TypeTable_7));
    MR_hl_field(0, Var_20, 4) = ((MR_Box) (BaseTypeCtor_8));
    MR_hl_field(0, Var_20, 5) = ((MR_Box) (BaseTypeParams_9));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[2]), Var_20, CtorArgs_15, ((MR_Box) (STATE_VARIABLE_InvariantTVars_0_18)), &conv1_STATE_VARIABLE_InvariantTVars_19);
  *STATE_VARIABLE_InvariantTVars_19 = ((MR_Word) (conv1_STATE_VARIABLE_InvariantTVars_19));
}

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InvariantTVars_19;

  check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantTVars_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InvariantTVars_19));
}

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_2_7_p_0(
  MR_Word Info_8,
  MR_Word Context_9,
  MR_Word FromVar_10,
  MR_Word ToVar_11,
  MR_Word TypeAssign0_12,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_32,
  MR_Word * STATE_VARIABLE_TypeAssignSet_33)
{
  MR_bool succeeded;
  MR_Word VarTypes_14;
  MR_Word TVarSet_15;
  MR_Word ExistQTVars_16;
  MR_Word TypeBindings_17;
  MR_Word MaybeFromType_20;
  MR_Word MaybeToType_23;
  MR_Word FromType0_18;
  MR_Word ToType0_21;
  MR_Word FromType_24;
  MR_Word ToType_25;

  check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_12, &VarTypes_14);
  check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign0_12, &TVarSet_15);
  check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign0_12, &ExistQTVars_16);
  check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign0_12, &TypeBindings_17);
  succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes_14, FromVar_10, &FromType0_18);
  if (succeeded)
  {
    MR_Word FromType1_19;

    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_17, FromType0_18, &FromType1_19);
    {
      MaybeFromType_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeFromType_20, 0) = ((MR_Box) (FromType1_19));
    }
  }
  else
    MaybeFromType_20 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes_14, ToVar_11, &ToType0_21);
  if (succeeded)
  {
    MR_Word ToType1_22;

    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_17, ToType0_21, &ToType1_22);
    {
      MaybeToType_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeToType_23, 0) = ((MR_Box) (ToType1_22));
    }
  }
  else
    MaybeToType_23 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = (MaybeFromType_20 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    FromType_24 = ((MR_Word) ((MR_hl_field(1, MaybeFromType_20, 0))));
    succeeded = (MaybeToType_23 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ToType_25 = ((MR_Word) ((MR_hl_field(1, MaybeToType_23, 0))));
      succeeded = parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0(FromType_24, ExistQTVars_16);
      if (succeeded)
        succeeded = parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0(ToType_25, ExistQTVars_16);
    }
  }
  if (succeeded)
  {
    MR_Word TypeTable_26;
    MR_Word TypeAssign_30;
    MR_Word TypeAssign1_27;
    MR_Word TypeCtorInfo_20_68;
    MR_Word TypeInfo_24_69;
    MR_Word TypeInfo_25_70;
    MR_Word FromBaseType_46;
    MR_Word ToBaseType_47;
    MR_Word FromBaseTypeArgTypes_49;
    MR_Word ToBaseTypeCtor_50;
    MR_Word ToBaseTypeArgTypes_51;
    MR_Word BaseTypeCtor_52;
    MR_Word BaseTypeDefn_53;
    MR_Word BaseTypeBody_54;
    MR_Word BaseTypeBodyDu_55;
    MR_Word BaseTypeParams_56;
    MR_Word InvariantTVars_57;
    MR_Word OoMCtors_59;
    MR_Word Ctors_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Box conv1_InvariantTVars_57;

    check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(Info_8, &TypeTable_26);
    check_hlds__typecheck_coerce__compute_base_type_4_p_0(TypeTable_26, TVarSet_15, FromType_24, &FromBaseType_46);
    check_hlds__typecheck_coerce__compute_base_type_4_p_0(TypeTable_26, TVarSet_15, ToType_25, &ToBaseType_47);
    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(FromBaseType_46, &BaseTypeCtor_52, &FromBaseTypeArgTypes_49);
    if (succeeded)
    {
      succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ToBaseType_47, &ToBaseTypeCtor_50, &ToBaseTypeArgTypes_51);
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(BaseTypeCtor_52, ToBaseTypeCtor_50);
        if (succeeded)
        {
          succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_26, BaseTypeCtor_52, &BaseTypeDefn_53);
          if (succeeded)
          {
            hlds__hlds_data__get_type_defn_body_2_p_0(BaseTypeDefn_53, &BaseTypeBody_54);
            succeeded = ((MR_tag((MR_Word) BaseTypeBody_54)) == (MR_Integer) 0);
            if (succeeded)
            {
              BaseTypeBodyDu_55 = (MR_Word) ((MR_Word) (BaseTypeBody_54));
              hlds__hlds_data__get_type_defn_tparams_2_p_0(BaseTypeDefn_53, &BaseTypeParams_56);
              OoMCtors_59 = ((MR_Word) ((MR_hl_field(0, BaseTypeBodyDu_55, 0))));
              TypeCtorInfo_20_68 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0);
              Ctors_65 = mercury__one_or_more__one_or_more_to_list_1_f_1(TypeCtorInfo_20_68, OoMCtors_59);
              TypeInfo_24_69 = (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]);
              {
                Var_66 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_66, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_6[0]));
                MR_hl_field(0, Var_66, 1) = ((MR_Box) (check_hlds__typecheck_coerce__typecheck_coerce_2_7_p_0_1));
                MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_66, 3) = ((MR_Box) (TypeTable_26));
                MR_hl_field(0, Var_66, 4) = ((MR_Box) (BaseTypeCtor_52));
                MR_hl_field(0, Var_66, 5) = ((MR_Box) (BaseTypeParams_56));
              }
              Var_67 = mercury__set__init_0_f_0(TypeInfo_24_69);
              TypeInfo_25_70 = (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[2]);
              mercury__list__foldl_4_p_0(TypeCtorInfo_20_68, TypeInfo_25_70, Var_66, Ctors_65, ((MR_Box) (Var_67)), &conv1_InvariantTVars_57);
              InvariantTVars_57 = ((MR_Word) (conv1_InvariantTVars_57));
              succeeded = check_hlds__typecheck_coerce__are_type_params_as_related_as_needed_8_p_0(TypeTable_26, TVarSet_15, InvariantTVars_57, BaseTypeParams_56, FromBaseTypeArgTypes_49, ToBaseTypeArgTypes_51, TypeAssign0_12, &TypeAssign1_27);
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeBindings1_28;
      MR_Word TypeA_71;
      MR_Word TypeB_72;
      MR_Word Var_73;
      MR_Word Var_74;

      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign1_27, &TypeBindings1_28);
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_28, FromType_24, &TypeA_71);
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_28, ToType_25, &TypeB_72);
      Var_73 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(TypeA_71);
      Var_74 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(TypeB_72);
      succeeded = parse_tree__prog_type_test____Unify____non_kinded_type_0_0(Var_73, Var_74);
      if (succeeded)
      {
        MR_Word Coercion_29;
        MR_Word Coercions0_76;
        MR_Word Coercions_77;

        {
          Coercion_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Coercion_29, 0) = ((MR_Box) (FromType_24));
          MR_hl_field(0, Coercion_29, 1) = ((MR_Box) (ToType_25));
          MR_hl_field(0, Coercion_29, 2) = ((MR_Box) (Context_9));
          MR_hl_field(0, Coercion_29, 3) = ((MR_Box) (FromVar_10));
          MR_hl_field(0, Coercion_29, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
        }
        check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(TypeAssign1_27, &Coercions0_76);
        {
          Coercions_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Coercions_77, 0) = ((MR_Box) (Coercion_29));
          MR_hl_field(1, Coercions_77, 1) = ((MR_Box) (Coercions0_76));
        }
        check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(Coercions_77, TypeAssign1_27, &TypeAssign_30);
      }
      else
        TypeAssign_30 = TypeAssign1_27;
    }
    else
    {
      MR_Word Coercion_39;
      MR_Word Coercions0_78;
      MR_Word Coercions_79;

      {
        Coercion_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Coercion_39, 0) = ((MR_Box) (FromType_24));
        MR_hl_field(0, Coercion_39, 1) = ((MR_Box) (ToType_25));
        MR_hl_field(0, Coercion_39, 2) = ((MR_Box) (Context_9));
        MR_hl_field(0, Coercion_39, 3) = ((MR_Box) (FromVar_10));
        MR_hl_field(0, Coercion_39, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      }
      check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(TypeAssign0_12, &Coercions0_78);
      {
        Coercions_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Coercions_79, 0) = ((MR_Box) (Coercion_39));
        MR_hl_field(1, Coercions_79, 1) = ((MR_Box) (Coercions0_78));
      }
      check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(Coercions_79, TypeAssign0_12, &TypeAssign_30);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_TypeAssignSet_33 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypeAssign_30));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_32));
    }
  }
  else
  {
    MR_Word TypeAssign2_31;
    MR_Word FromType_40;
    MR_Word ToType_41;
    MR_Word TypeAssign1_42;
    MR_Word Coercion_43;
    MR_Word TypeAssign_44;
    MR_Word Coercions0_80;
    MR_Word Coercions_81;

    if ((MaybeFromType_20 == (MR_Word) ((MR_Unsigned) 0U)))
      check_hlds__typecheck_util__type_assign_fresh_type_var_4_p_0(FromVar_10, &FromType_40, TypeAssign0_12, &TypeAssign1_42);
    else
    {
      FromType_40 = ((MR_Word) ((MR_hl_field(1, MaybeFromType_20, 0))));
      TypeAssign1_42 = TypeAssign0_12;
    }
    if ((MaybeToType_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[3]), ((MR_Box) (ToVar_11)), ((MR_Box) (FromVar_10)));
      if (succeeded)
      {
        ToType_41 = FromType_40;
        TypeAssign2_31 = TypeAssign1_42;
      }
      else
        check_hlds__typecheck_util__type_assign_fresh_type_var_4_p_0(ToVar_11, &ToType_41, TypeAssign1_42, &TypeAssign2_31);
    }
    else
    {
      ToType_41 = ((MR_Word) ((MR_hl_field(1, MaybeToType_23, 0))));
      TypeAssign2_31 = TypeAssign1_42;
    }
    {
      Coercion_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Coercion_43, 0) = ((MR_Box) (FromType_40));
      MR_hl_field(0, Coercion_43, 1) = ((MR_Box) (ToType_41));
      MR_hl_field(0, Coercion_43, 2) = ((MR_Box) (Context_9));
      MR_hl_field(0, Coercion_43, 3) = ((MR_Box) (FromVar_10));
      MR_hl_field(0, Coercion_43, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(TypeAssign2_31, &Coercions0_80);
    {
      Coercions_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Coercions_81, 0) = ((MR_Box) (Coercion_43));
      MR_hl_field(1, Coercions_81, 1) = ((MR_Box) (Coercions0_80));
    }
    check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(Coercions_81, TypeAssign2_31, &TypeAssign_44);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_TypeAssignSet_33 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypeAssign_44));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_32));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_coerce__are_type_params_as_related_as_needed_8_p_0(
  MR_Word TypeTable_9,
  MR_Word TVarSet_10,
  MR_Word InvariantTVars_11,
  MR_Word TypeParams_12,
  MR_Word FromArgTypes_13,
  MR_Word ToArgTypes_14,
  MR_Word STATE_VARIABLE_TypeAssign_0_22,
  MR_Word * STATE_VARIABLE_TypeAssign_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (TypeParams_12 == (MR_Word) ((MR_Unsigned) 0U));

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      succeeded = (FromArgTypes_13 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (ToArgTypes_14 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      *STATE_VARIABLE_TypeAssign_23 = STATE_VARIABLE_TypeAssign_0_22;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word HeadTypeParam_16;
      MR_Word TailTypeParams_17;
      MR_Word HeadFromArgType_18;
      MR_Word TailFromArgTypes_19;
      MR_Word HeadToArgType_20;
      MR_Word TailToArgTypes_21;

      succeeded = (TypeParams_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadTypeParam_16 = ((MR_Word) ((MR_hl_field(1, TypeParams_12, 0))));
        TailTypeParams_17 = ((MR_Word) ((MR_hl_field(1, TypeParams_12, 1))));
        succeeded = (FromArgTypes_13 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadFromArgType_18 = ((MR_Word) ((MR_hl_field(1, FromArgTypes_13, 0))));
          TailFromArgTypes_19 = ((MR_Word) ((MR_hl_field(1, FromArgTypes_13, 1))));
          succeeded = (ToArgTypes_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadToArgType_20 = ((MR_Word) ((MR_hl_field(1, ToArgTypes_14, 0))));
            TailToArgTypes_21 = ((MR_Word) ((MR_hl_field(1, ToArgTypes_14, 1))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_TypeAssign_1_24;
        MR_Word next_value_of_TypeParams_12;
        MR_Word next_value_of_FromArgTypes_13;
        MR_Word next_value_of_ToArgTypes_14;
        MR_Word next_value_of_STATE_VARIABLE_TypeAssign_0_22;

        succeeded = mercury__set__contains_2_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]), InvariantTVars_11, ((MR_Box) (HeadTypeParam_16)));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) HeadFromArgType_18)) == (MR_Integer) 0);
          if (!(succeeded))
            succeeded = ((MR_tag((MR_Word) HeadToArgType_20)) == (MR_Integer) 0);
          if (succeeded)
            succeeded = check_hlds__typecheck_util__type_assign_unify_type_4_p_0(HeadFromArgType_18, HeadToArgType_20, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_1_24);
          else
            switch (MR_tag((MR_Word) HeadFromArgType_18)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String Var_60;
                  MR_String Var_61;

                  succeeded = ((MR_tag((MR_Word) HeadToArgType_20)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_60 = (MR_String) "predicate \140check_hlds.typecheck_coerce.types_compare_as_given_nonvar\'/7";
                    Var_61 = (MR_String) "type_variable";
                    mercury__require__unexpected_2_p_0(Var_60, Var_61);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word TypeCtorA_45;
                  MR_Word ArgTypesA_46;
                  MR_Word TypeCtorB_47;
                  MR_Word ArgTypesB_48;

                  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(HeadFromArgType_18, &TypeCtorA_45, &ArgTypesA_46);
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(HeadToArgType_20, &TypeCtorB_47, &ArgTypesB_48);
                    if (succeeded)
                    {
                      succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_45, TypeCtorB_47);
                      if (succeeded)
                        succeeded = check_hlds__typecheck_coerce__corresponding_types_compare_as_given_7_p_0(TypeTable_9, TVarSet_10, (MR_Integer) 0, ArgTypesA_46, ArgTypesB_48, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_1_24);
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word BuiltinType_37 = ((MR_Word) ((MR_hl_field(2, HeadFromArgType_18, 0))));
                  MR_Word Var_70;

                  succeeded = ((MR_tag((MR_Word) HeadToArgType_20)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    Var_70 = ((MR_Word) ((MR_hl_field(2, HeadToArgType_20, 0))));
                    succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_37, Var_70);
                    if (succeeded)
                    {
                      STATE_VARIABLE_TypeAssign_1_24 = STATE_VARIABLE_TypeAssign_0_22;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadFromArgType_18, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Kind_50 = ((MR_Word) ((MR_hl_field(3, HeadFromArgType_18, 2))));
                      MR_Word ArgTypesA_65 = ((MR_Word) ((MR_hl_field(3, HeadFromArgType_18, 1))));
                      MR_Word ArgTypesB_66;
                      MR_Word Var_71;

                      succeeded = ((((MR_tag((MR_Word) HeadToArgType_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadToArgType_20, 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        ArgTypesB_66 = ((MR_Word) ((MR_hl_field(3, HeadToArgType_20, 1))));
                        Var_71 = ((MR_Word) ((MR_hl_field(3, HeadToArgType_20, 2))));
                        succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_50, Var_71);
                        if (succeeded)
                          succeeded = check_hlds__typecheck_coerce__corresponding_types_compare_as_given_7_p_0(TypeTable_9, TVarSet_10, (MR_Integer) 0, ArgTypesA_65, ArgTypesB_66, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_1_24);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word PredOrFunc_51 = ((MR_Unsigned) ((MR_hl_field(3, HeadFromArgType_18, 1))) & (MR_Integer) 1);
                      MR_Word Purity_53 = ((MR_Unsigned) ((MR_hl_field(3, HeadFromArgType_18, 4))) & (MR_Integer) 3);
                      MR_Word Var_62;
                      MR_Word ArgTypesA_67 = ((MR_Word) ((MR_hl_field(3, HeadFromArgType_18, 2))));
                      MR_Word ArgTypesB_68;
                      MR_Word Var_72;
                      MR_Word Var_73;

                      succeeded = ((((MR_tag((MR_Word) HeadToArgType_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadToArgType_20, 0)))) == (MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_72 = ((MR_Unsigned) ((MR_hl_field(3, HeadToArgType_20, 1))) & (MR_Integer) 1);
                        ArgTypesB_68 = ((MR_Word) ((MR_hl_field(3, HeadToArgType_20, 2))));
                        Var_73 = ((MR_Unsigned) ((MR_hl_field(3, HeadToArgType_20, 4))) & (MR_Integer) 3);
                        succeeded = (PredOrFunc_51 == Var_72);
                        if (succeeded)
                        {
                          succeeded = (Purity_53 == Var_73);
                          if (succeeded)
                          {
                            Var_62 = (MR_Integer) 0;
                            succeeded = check_hlds__typecheck_coerce__corresponding_types_compare_as_given_7_p_0(TypeTable_9, TVarSet_10, Var_62, ArgTypesA_67, ArgTypesB_68, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_1_24);
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.types_compare_as_given_nonvar\'/7", (MR_String) "apply_n_type");
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word TypeA1_58 = ((MR_Word) ((MR_hl_field(3, HeadFromArgType_18, 1))));
                      MR_Word TypeB1_59;
                      MR_Word Kind_69 = ((MR_Word) ((MR_hl_field(3, HeadFromArgType_18, 2))));
                      MR_Word Var_74;

                      succeeded = ((((MR_tag((MR_Word) HeadToArgType_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadToArgType_20, 0)))) == (MR_Integer) 3)));
                      if (succeeded)
                      {
                        TypeB1_59 = ((MR_Word) ((MR_hl_field(3, HeadToArgType_20, 1))));
                        Var_74 = ((MR_Word) ((MR_hl_field(3, HeadToArgType_20, 2))));
                        succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_69, Var_74);
                        if (succeeded)
                          succeeded = check_hlds__typecheck_coerce__types_compare_as_given_7_p_0(TypeTable_9, TVarSet_10, (MR_Integer) 0, TypeA1_58, TypeB1_59, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_1_24);
                      }
                    }
                    break;
                }
                break;
            }
        }
        else
        {
          MR_Word STATE_VARIABLE_TypeAssign_2_30;

          succeeded = check_hlds__typecheck_coerce__types_compare_as_given_7_p_0(TypeTable_9, TVarSet_10, (MR_Integer) 1, HeadFromArgType_18, HeadToArgType_20, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_2_30);
          if (succeeded)
          {
            STATE_VARIABLE_TypeAssign_1_24 = STATE_VARIABLE_TypeAssign_2_30;
            succeeded = MR_TRUE;
          }
          else
            succeeded = check_hlds__typecheck_coerce__types_compare_as_given_7_p_0(TypeTable_9, TVarSet_10, (MR_Integer) 1, HeadToArgType_20, HeadFromArgType_18, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_1_24);
        }
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_TypeParams_12 = TailTypeParams_17;
          next_value_of_FromArgTypes_13 = TailFromArgTypes_19;
          next_value_of_ToArgTypes_14 = TailToArgTypes_21;
          next_value_of_STATE_VARIABLE_TypeAssign_0_22 = STATE_VARIABLE_TypeAssign_1_24;
          TypeParams_12 = next_value_of_TypeParams_12;
          FromArgTypes_13 = next_value_of_FromArgTypes_13;
          ToArgTypes_14 = next_value_of_ToArgTypes_14;
          STATE_VARIABLE_TypeAssign_0_22 = next_value_of_STATE_VARIABLE_TypeAssign_0_22;
          continue;
        }
      }
      else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.are_type_params_as_related_as_needed\'/8", (MR_String) "length mismatch");
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_coerce__types_compare_as_given_7_p_0(
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
    if (!(succeeded))
      succeeded = ((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 0);
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
              Var_43 = (MR_String) "predicate \140check_hlds.typecheck_coerce.types_compare_as_given_nonvar\'/7";
              Var_44 = (MR_String) "type_variable";
              mercury__require__unexpected_2_p_0(Var_43, Var_44);
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorA_28;
            MR_Word ArgTypesA_29;
            MR_Word TypeCtorB_30;
            MR_Word ArgTypesB_31;

            succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeA_11, &TypeCtorA_28, &ArgTypesA_29);
            if (succeeded)
            {
              succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeB_12, &TypeCtorB_30, &ArgTypesB_31);
              if (succeeded)
              {
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_28, TypeCtorB_30);
                if (succeeded)
                  succeeded = check_hlds__typecheck_coerce__corresponding_types_compare_as_given_7_p_0(TypeTable_8, TVarSet_9, Comparison_10, ArgTypesA_29, ArgTypesB_31, STATE_VARIABLE_TypeAssign_0_18, STATE_VARIABLE_TypeAssign_19);
                else
                {
                  MR_Word SuperTypeA_32;
                  MR_Word next_value_of_TypeA_11;

                  succeeded = (Comparison_10 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    succeeded = hlds__type_util__get_supertype_5_p_0(TypeTable_8, TVarSet_9, TypeCtorA_28, ArgTypesA_29, &SuperTypeA_32);
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
            MR_Word BuiltinType_20 = ((MR_Word) ((MR_hl_field(2, TypeA_11, 0))));
            MR_Word Var_53;

            succeeded = ((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_53 = ((MR_Word) ((MR_hl_field(2, TypeB_12, 0))));
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
          switch (((MR_Integer) ((MR_hl_field(3, TypeA_11, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Kind_33 = ((MR_Word) ((MR_hl_field(3, TypeA_11, 2))));
                MR_Word ArgTypesA_48 = ((MR_Word) ((MR_hl_field(3, TypeA_11, 1))));
                MR_Word ArgTypesB_49;
                MR_Word Var_54;

                succeeded = ((((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_12, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgTypesB_49 = ((MR_Word) ((MR_hl_field(3, TypeB_12, 1))));
                  Var_54 = ((MR_Word) ((MR_hl_field(3, TypeB_12, 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_33, Var_54);
                  if (succeeded)
                    succeeded = check_hlds__typecheck_coerce__corresponding_types_compare_as_given_7_p_0(TypeTable_8, TVarSet_9, Comparison_10, ArgTypesA_48, ArgTypesB_49, STATE_VARIABLE_TypeAssign_0_18, STATE_VARIABLE_TypeAssign_19);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word PredOrFunc_34 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_11, 1))) & (MR_Integer) 1);
                MR_Word Purity_36 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_11, 4))) & (MR_Integer) 3);
                MR_Word Var_45;
                MR_Word ArgTypesA_50 = ((MR_Word) ((MR_hl_field(3, TypeA_11, 2))));
                MR_Word ArgTypesB_51;
                MR_Word Var_55;
                MR_Word Var_56;

                succeeded = ((((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_12, 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_55 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_12, 1))) & (MR_Integer) 1);
                  ArgTypesB_51 = ((MR_Word) ((MR_hl_field(3, TypeB_12, 2))));
                  Var_56 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_12, 4))) & (MR_Integer) 3);
                  succeeded = (PredOrFunc_34 == Var_55);
                  if (succeeded)
                  {
                    succeeded = (Purity_36 == Var_56);
                    if (succeeded)
                    {
                      Var_45 = (MR_Integer) 0;
                      succeeded = check_hlds__typecheck_coerce__corresponding_types_compare_as_given_7_p_0(TypeTable_8, TVarSet_9, Var_45, ArgTypesA_50, ArgTypesB_51, STATE_VARIABLE_TypeAssign_0_18, STATE_VARIABLE_TypeAssign_19);
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.types_compare_as_given_nonvar\'/7", (MR_String) "apply_n_type");
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeA1_41 = ((MR_Word) ((MR_hl_field(3, TypeA_11, 1))));
                MR_Word TypeB1_42;
                MR_Word Kind_52 = ((MR_Word) ((MR_hl_field(3, TypeA_11, 2))));
                MR_Word Var_57;
                MR_Word next_value_of_TypeA_11;
                MR_Word next_value_of_TypeB_12;

                succeeded = ((((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_12, 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  TypeB1_42 = ((MR_Word) ((MR_hl_field(3, TypeB_12, 1))));
                  Var_57 = ((MR_Word) ((MR_hl_field(3, TypeB_12, 2))));
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
check_hlds__typecheck_coerce__corresponding_types_compare_as_given_7_p_0(
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
      MR_Word TypeA_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word TypesA_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word TypeB_19;
      MR_Word TypesB_20;
      MR_Word STATE_VARIABLE_TypeAssign_1_24;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssign_0_6;

      succeeded = (HeadVar__5_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeB_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
        TypesB_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
        succeeded = ((MR_tag((MR_Word) TypeA_17)) == (MR_Integer) 0);
        if (!(succeeded))
          succeeded = ((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 0);
        if (succeeded)
          succeeded = check_hlds__typecheck_util__type_assign_unify_type_4_p_0(TypeA_17, TypeB_19, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_1_24);
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
                  Var_52 = (MR_String) "predicate \140check_hlds.typecheck_coerce.types_compare_as_given_nonvar\'/7";
                  Var_53 = (MR_String) "type_variable";
                  mercury__require__unexpected_2_p_0(Var_52, Var_53);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeCtorA_37;
                MR_Word ArgTypesA_38;
                MR_Word TypeCtorB_39;
                MR_Word ArgTypesB_40;

                succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeA_17, &TypeCtorA_37, &ArgTypesA_38);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeB_19, &TypeCtorB_39, &ArgTypesB_40);
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_37, TypeCtorB_39);
                    if (succeeded)
                      succeeded = check_hlds__typecheck_coerce__corresponding_types_compare_as_given_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, ArgTypesA_38, ArgTypesB_40, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_1_24);
                    else
                    {
                      MR_Word SuperTypeA_41;

                      succeeded = (HeadVar__3_3 == (MR_Integer) 1);
                      if (succeeded)
                      {
                        succeeded = hlds__type_util__get_supertype_5_p_0(HeadVar__1_1, HeadVar__2_2, TypeCtorA_37, ArgTypesA_38, &SuperTypeA_41);
                        if (succeeded)
                          succeeded = check_hlds__typecheck_coerce__types_compare_as_given_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, SuperTypeA_41, TypeB_19, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_1_24);
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word BuiltinType_29 = ((MR_Word) ((MR_hl_field(2, TypeA_17, 0))));
                MR_Word Var_62;

                succeeded = ((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_62 = ((MR_Word) ((MR_hl_field(2, TypeB_19, 0))));
                  succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_29, Var_62);
                  if (succeeded)
                  {
                    STATE_VARIABLE_TypeAssign_1_24 = STATE_VARIABLE_TypeAssign_0_6;
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, TypeA_17, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Kind_42 = ((MR_Word) ((MR_hl_field(3, TypeA_17, 2))));
                    MR_Word ArgTypesA_57 = ((MR_Word) ((MR_hl_field(3, TypeA_17, 1))));
                    MR_Word ArgTypesB_58;
                    MR_Word Var_63;

                    succeeded = ((((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_19, 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      ArgTypesB_58 = ((MR_Word) ((MR_hl_field(3, TypeB_19, 1))));
                      Var_63 = ((MR_Word) ((MR_hl_field(3, TypeB_19, 2))));
                      succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_42, Var_63);
                      if (succeeded)
                        succeeded = check_hlds__typecheck_coerce__corresponding_types_compare_as_given_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, ArgTypesA_57, ArgTypesB_58, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_1_24);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word PredOrFunc_43 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_17, 1))) & (MR_Integer) 1);
                    MR_Word Purity_45 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_17, 4))) & (MR_Integer) 3);
                    MR_Word Var_54;
                    MR_Word ArgTypesA_59 = ((MR_Word) ((MR_hl_field(3, TypeA_17, 2))));
                    MR_Word ArgTypesB_60;
                    MR_Word Var_64;
                    MR_Word Var_65;

                    succeeded = ((((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_19, 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_64 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_19, 1))) & (MR_Integer) 1);
                      ArgTypesB_60 = ((MR_Word) ((MR_hl_field(3, TypeB_19, 2))));
                      Var_65 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_19, 4))) & (MR_Integer) 3);
                      succeeded = (PredOrFunc_43 == Var_64);
                      if (succeeded)
                      {
                        succeeded = (Purity_45 == Var_65);
                        if (succeeded)
                        {
                          Var_54 = (MR_Integer) 0;
                          succeeded = check_hlds__typecheck_coerce__corresponding_types_compare_as_given_7_p_0(HeadVar__1_1, HeadVar__2_2, Var_54, ArgTypesA_59, ArgTypesB_60, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_1_24);
                        }
                      }
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.types_compare_as_given_nonvar\'/7", (MR_String) "apply_n_type");
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word TypeA1_50 = ((MR_Word) ((MR_hl_field(3, TypeA_17, 1))));
                    MR_Word TypeB1_51;
                    MR_Word Kind_61 = ((MR_Word) ((MR_hl_field(3, TypeA_17, 2))));
                    MR_Word Var_66;

                    succeeded = ((((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_19, 0)))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      TypeB1_51 = ((MR_Word) ((MR_hl_field(3, TypeB_19, 1))));
                      Var_66 = ((MR_Word) ((MR_hl_field(3, TypeB_19, 2))));
                      succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_61, Var_66);
                      if (succeeded)
                        succeeded = check_hlds__typecheck_coerce__types_compare_as_given_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, TypeA1_50, TypeB1_51, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_1_24);
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
          next_value_of_STATE_VARIABLE_TypeAssign_0_6 = STATE_VARIABLE_TypeAssign_1_24;
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
check_hlds__typecheck_coerce__compute_base_type_4_p_0(
  MR_Word TypeTable_5,
  MR_Word TVarSet_6,
  MR_Word Type_7,
  MR_Word * BaseType_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word SuperType_11;
    MR_Word TypeCtor_9;
    MR_Word ArgTypes_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_7, &TypeCtor_9, &ArgTypes_10);
    if (succeeded)
      succeeded = hlds__type_util__get_supertype_5_p_0(TypeTable_5, TVarSet_6, TypeCtor_9, ArgTypes_10, &SuperType_11);
    if (succeeded)
    {
      MR_Word next_value_of_Type_7 = SuperType_11;

      // direct tailcall eliminated
      ;
      Type_7 = next_value_of_Type_7;
      continue;
    }
    else
      *BaseType_8 = Type_7;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_coerce__typecheck_prune_coerce_constraints_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_coerce__type_assign_has_only_satisfied_coerce_constraints_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_prune_coerce_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeAssign_11;

  check_hlds__typecheck_coerce__type_assign_prune_coerce_constraints_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_TypeAssign_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_TypeAssign_11));
}

void MR_CALL 
check_hlds__typecheck_coerce__typecheck_prune_coerce_constraints_3_p_0(
  MR_Word Info_4,
  MR_Word TypeAssignSet0_5,
  MR_Word * TypeAssignSet_6)
{
  MR_bool succeeded;
  MR_Word TypeTable_7;
  MR_Word TypeAssignSet1_8;
  MR_Word SatisfiedTypeAssignSet_9;
  MR_Word UnsatisfiedTypeAssignSet_10;
  MR_Word Var_13;

  check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(Info_4, &TypeTable_7);
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_3[0]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (check_hlds__typecheck_coerce__typecheck_prune_coerce_constraints_3_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (TypeTable_7));
  }
  mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), Var_13, TypeAssignSet0_5, &TypeAssignSet1_8);
  mercury__list__filter_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_5[0]), TypeAssignSet1_8, &SatisfiedTypeAssignSet_9, &UnsatisfiedTypeAssignSet_10);
  if ((SatisfiedTypeAssignSet_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *TypeAssignSet_6 = UnsatisfiedTypeAssignSet_10;
  else
    *TypeAssignSet_6 = SatisfiedTypeAssignSet_9;
}

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeAssignSet_33;

  check_hlds__typecheck_coerce__typecheck_coerce_2_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeAssignSet_33);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeAssignSet_33));
}

void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_5_p_0(
  MR_Word Info_6,
  MR_Word Context_7,
  MR_Word Args_8,
  MR_Word TypeAssignSet0_9,
  MR_Word * TypeAssignSet_10)
{
  MR_bool succeeded = (Args_8 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word FromVar_13;
  MR_Word ToVar_14;
  MR_Word TypeAssignSet1_15;
  MR_Word Var_22;
  MR_Word FromVar0_11;
  MR_Word ToVar0_12;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Box conv1_TypeAssignSet1_15;

  if (succeeded)
  {
    FromVar0_11 = ((MR_Word) ((MR_hl_field(1, Args_8, 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(1, Args_8, 1))));
    succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ToVar0_12 = ((MR_Word) ((MR_hl_field(1, Var_18, 0))));
      Var_19 = ((MR_Word) ((MR_hl_field(1, Var_18, 1))));
      succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    FromVar_13 = FromVar0_11;
    ToVar_14 = ToVar0_12;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.typecheck_coerce\'/5", (MR_String) "coerce requires two arguments");
      return;
    }
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_2[0]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (check_hlds__typecheck_coerce__typecheck_coerce_5_p_0_1));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_22, 4) = ((MR_Box) (Context_7));
    MR_hl_field(0, Var_22, 5) = ((MR_Box) (FromVar_13));
    MR_hl_field(0, Var_22, 6) = ((MR_Box) (ToVar_14));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), Var_22, TypeAssignSet0_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_TypeAssignSet1_15);
  TypeAssignSet1_15 = ((MR_Word) (conv1_TypeAssignSet1_15));
  succeeded = (TypeAssignSet1_15 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (TypeAssignSet0_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    *TypeAssignSet_10 = TypeAssignSet0_9;
  else
    *TypeAssignSet_10 = TypeAssignSet1_15;
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
check_hlds__typecheck_coerce____Unify____invariant_tvars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_coerce____Unify____invariant_tvars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____invariant_tvars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_coerce____Compare____invariant_tvars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
  MR_register_type_ctor_info(&check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__type_ctor_info_invariant_tvars_0);
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
