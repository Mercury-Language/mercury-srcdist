/*
** Automatically generated from `typecheck_coerce.m'
** by the Mercury compiler,
** version rotd-2026-07-27
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
#include "parse_tree.maybe_error.mih"
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



struct check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0_s {
  MR_bool check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__succeeded;
  MR_Word check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__ExistQTVars0_18;
  MR_Word check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__FromType_20;
  jmp_buf check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__commit_0;
  MR_Word check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__TVar_35;
};

struct check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0_s {
  MR_bool check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded;
  MR_Word check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ExistQTVars0_15;
  MR_Word check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_23;
  MR_Word check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_24;
  jmp_buf check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__commit_0;
  MR_Word check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__TVar_46;
  jmp_buf check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__commit_1;
  MR_Word check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__TVar_48;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_coerce__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_6_p_0(
  MR_Word TypeTable_7,
  MR_Word BaseTypeCtor_8,
  MR_Word BaseTypeCtorParams_9,
  MR_Word CtorArg_10,
  MR_Word STATE_VARIABLE_InvariantTVars_0_15,
  MR_Word * STATE_VARIABLE_InvariantTVars_16);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_6_p_0(
  MR_Word TypeTable_7,
  MR_Word BaseTypeCtor_8,
  MR_Word BaseTypeCtorParams_9,
  MR_Word CtorArgType_10,
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
  MR_Word BaseTypeCtorParams_9,
  MR_Word Ctor_10,
  MR_Word STATE_VARIABLE_InvariantTVars_0_18,
  MR_Word * STATE_VARIABLE_InvariantTVars_19);

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
check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0(
  MR_Word TypeTable_6,
  MR_Word Coercion0_7,
  MR_Word * Action_8,
  MR_Word STATE_VARIABLE_TypeAssign_0_28,
  MR_Word * STATE_VARIABLE_TypeAssign_29);

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0(
  MR_Word Info_7,
  MR_Word Context_8,
  MR_Word FromVar_9,
  MR_Word ToVar_10,
  MR_Word TypeAssign0_11,
  MR_Word * TypeAssign_12);

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_between_types_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_between_types_7_p_0(
  MR_Word TypeTable_8,
  MR_Word TVarSet_9,
  MR_Word FromType_10,
  MR_Word ToType_11,
  MR_Word STATE_VARIABLE_TypeAssign_0_35,
  MR_Word * STATE_VARIABLE_TypeAssign_36,
  MR_Word * CoerceFails_13);

static void MR_CALL 
check_hlds__typecheck_coerce__are_actual_param_type_pairs_as_related_as_needed_10_p_0(
  MR_Word TypeTable_11,
  MR_Word TVarSet_12,
  MR_Word InvariantTVars_13,
  MR_Word TypeParams_14,
  MR_Word FromArgTypes_15,
  MR_Word ToArgTypes_16,
  MR_Word STATE_VARIABLE_TypeAssign_0_25,
  MR_Word * STATE_VARIABLE_TypeAssign_26,
  MR_Word STATE_VARIABLE_CoerceFails_0_27,
  MR_Word * STATE_VARIABLE_CoerceFails_28);

static void MR_CALL 
check_hlds__typecheck_coerce__types_compare_as_given_9_p_0(
  MR_Word TypeTable_10,
  MR_Word TVarSet_11,
  MR_Word Comparison_12,
  MR_Word TypeA_13,
  MR_Word TypeB_14,
  MR_Word STATE_VARIABLE_TypeAssign_0_22,
  MR_Word * STATE_VARIABLE_TypeAssign_23,
  MR_Word STATE_VARIABLE_CoerceFails_0_24,
  MR_Word * STATE_VARIABLE_CoerceFails_25);

static void MR_CALL 
check_hlds__typecheck_coerce__corresponding_types_compare_as_given_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_TypeAssign_0_6,
  MR_Word * STATE_VARIABLE_TypeAssign_7,
  MR_Word STATE_VARIABLE_CoerceFails_0_8,
  MR_Word * STATE_VARIABLE_CoerceFails_9);

static void MR_CALL 
check_hlds__typecheck_coerce__are_both_types_du_5_p_0(
  MR_Word FromType_6,
  MR_Word ToType_7,
  MR_Word FromMaybeDuType_8,
  MR_Word ToMaybeDuType_9,
  MR_Word * MaybeBoth_10);

static void MR_CALL 
check_hlds__typecheck_coerce__compute_base_type_of_du_type_4_p_0(
  MR_Word TypeTable_5,
  MR_Word TVarSet_6,
  MR_Word DuTypeInfo_7,
  MR_Word * BaseDuTypeInfo_8);

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
  MR_Box * wrapper_arg_2);

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


static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_1[4][2];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_2[4][9];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_3[1][6];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_4[2][4];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_5[3][3];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_6[1][5];




static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_2[4][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row   1 */
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
  /* row   2 */
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
  /* row   3 */
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
    ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_6[0])),
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

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_6[1][5] = {
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

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____invariant_tvars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_6_p_0(
  MR_Word TypeTable_7,
  MR_Word BaseTypeCtor_8,
  MR_Word BaseTypeCtorParams_9,
  MR_Word CtorArg_10,
  MR_Word STATE_VARIABLE_InvariantTVars_0_15,
  MR_Word * STATE_VARIABLE_InvariantTVars_16)
{
  MR_Word CtorArgType_13 = ((MR_Word) ((MR_hl_field(0, CtorArg_10, 1))));

  check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_6_p_0(TypeTable_7, BaseTypeCtor_8, BaseTypeCtorParams_9, CtorArgType_13, STATE_VARIABLE_InvariantTVars_0_15, STATE_VARIABLE_InvariantTVars_16);
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InvariantTVars_39;

  check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantTVars_39);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InvariantTVars_39));
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_6_p_0(
  MR_Word TypeTable_7,
  MR_Word BaseTypeCtor_8,
  MR_Word BaseTypeCtorParams_9,
  MR_Word CtorArgType_10,
  MR_Word STATE_VARIABLE_InvariantTVars_0_38,
  MR_Word * STATE_VARIABLE_InvariantTVars_39)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) CtorArgType_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_InvariantTVars_39 = STATE_VARIABLE_InvariantTVars_0_38;
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(1, CtorArgType_10, 0))));
          MR_Word ArgTypes_16 = ((MR_Word) ((MR_hl_field(1, CtorArgType_10, 1))));
          MR_Integer NumArgTypes_17;
          MR_Word TypeCtor_18;
          MR_Word TypeDefn_19;
          MR_Word TypeBody_20;

          mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_16, &NumArgTypes_17);
          {
            TypeCtor_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeCtor_18, 0) = ((MR_Box) (SymName_15));
            MR_hl_field(0, TypeCtor_18, 1) = ((MR_Box) (NumArgTypes_17));
          }
          hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_7, TypeCtor_18, &TypeDefn_19);
          hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_19, &TypeBody_20);
          switch (MR_tag((MR_Word) TypeBody_20)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word TypeInfo_69_69;
                MR_Word ArgTypeVars_22;

                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_18, BaseTypeCtor_8);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(ArgTypes_16, &ArgTypeVars_22);
                  if (succeeded)
                  {
                    TypeInfo_69_69 = (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[3]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_69_69, ((MR_Box) (ArgTypeVars_22)), ((MR_Box) (BaseTypeCtorParams_9)));
                  }
                }
                if (succeeded)
                  *STATE_VARIABLE_InvariantTVars_39 = STATE_VARIABLE_InvariantTVars_0_38;
                else
                {
                  MR_Word TypeVars_23;

                  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_16, &TypeVars_23);
                  mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), TypeVars_23, STATE_VARIABLE_InvariantTVars_0_38, STATE_VARIABLE_InvariantTVars_39);
                }
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 3:
              {
                MR_Word TypeVars_50;

                parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_16, &TypeVars_50);
                mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), TypeVars_50, STATE_VARIABLE_InvariantTVars_0_38, STATE_VARIABLE_InvariantTVars_39);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word EqvType0_27 = ((MR_Word) ((MR_hl_field(2, TypeBody_20, 0))));
                MR_Word TypeParams_28;
                MR_Word TSubst_29;
                MR_Word EqvType_30;
                MR_Word next_value_of_CtorArgType_10;

                hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_19, &TypeParams_28);
                mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_28, ArgTypes_16, &TSubst_29);
                parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(TSubst_29, EqvType0_27, &EqvType_30);
                // direct tailcall eliminated
                ;
                next_value_of_CtorArgType_10 = EqvType_30;
                CtorArgType_10 = next_value_of_CtorArgType_10;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_InvariantTVars_39 = STATE_VARIABLE_InvariantTVars_0_38;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, CtorArgType_10, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_43;
              MR_Word ArgTypes_54 = ((MR_Word) ((MR_hl_field(3, CtorArgType_10, 1))));
              MR_Box conv1_STATE_VARIABLE_InvariantTVars_39;

              {
                Var_43 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_43, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_2[3]));
                MR_hl_field(0, Var_43, 1) = ((MR_Box) (check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_6_p_0_1));
                MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_43, 3) = ((MR_Box) (TypeTable_7));
                MR_hl_field(0, Var_43, 4) = ((MR_Box) (BaseTypeCtor_8));
                MR_hl_field(0, Var_43, 5) = ((MR_Box) (BaseTypeCtorParams_9));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]), Var_43, ArgTypes_54, ((MR_Box) (STATE_VARIABLE_InvariantTVars_0_38)), &conv1_STATE_VARIABLE_InvariantTVars_39);
              *STATE_VARIABLE_InvariantTVars_39 = ((MR_Word) (conv1_STATE_VARIABLE_InvariantTVars_39));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTypes_55 = ((MR_Word) ((MR_hl_field(3, CtorArgType_10, 2))));
              MR_Word TypeVars_56;

              parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_55, &TypeVars_56);
              mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), TypeVars_56, STATE_VARIABLE_InvariantTVars_0_38, STATE_VARIABLE_InvariantTVars_39);
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.acc_invariant_tvars_in_ctor_arg_type\'/6", (MR_String) "apply_n_type");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubCtorArgType_37 = ((MR_Word) ((MR_hl_field(3, CtorArgType_10, 1))));
              MR_Word next_value_of_CtorArgType_10 = SubCtorArgType_37;

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
  MR_Word BaseTypeCtorParams_9,
  MR_Word Ctor_10,
  MR_Word STATE_VARIABLE_InvariantTVars_0_18,
  MR_Word * STATE_VARIABLE_InvariantTVars_19)
{
  MR_Word CtorArgs_15 = ((MR_Word) ((MR_hl_field(0, Ctor_10, 3))));
  MR_Word Var_20;
  MR_Box conv1_STATE_VARIABLE_InvariantTVars_19;

  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_2[2]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_6_p_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (TypeTable_7));
    MR_hl_field(0, Var_20, 4) = ((MR_Box) (BaseTypeCtor_8));
    MR_hl_field(0, Var_20, 5) = ((MR_Box) (BaseTypeCtorParams_9));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]), Var_20, CtorArgs_15, ((MR_Box) (STATE_VARIABLE_InvariantTVars_0_18)), &conv1_STATE_VARIABLE_InvariantTVars_19);
  *STATE_VARIABLE_InvariantTVars_19 = ((MR_Word) (conv1_STATE_VARIABLE_InvariantTVars_19));
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
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Coercion_0_4, 5))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Coercion_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
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
        MR_Word Coercions1_13;

        check_hlds__typecheck_coerce__check_pending_coerce_constraints_to_fixpoint_5_p_0(TypeTable_6, DelayedCoercions_11, &Coercions1_13, STATE_VARIABLE_TypeAssign_1_16, STATE_VARIABLE_TypeAssign_15);
        *Coercions_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0), KeepCoercions_10, Coercions1_13);
      }
      break;
  }
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
      MR_Word CheckResult_23;
      MR_Word STATE_VARIABLE_TypeAssign_1_31;

      check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0(HeadVar__1_1, Coercion0_17, &CheckResult_23, STATE_VARIABLE_TypeAssign_0_5, &STATE_VARIABLE_TypeAssign_1_31);
      switch (MR_tag((MR_Word) CheckResult_23)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(CheckResult_23)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word next_value_of_HeadVar__2_2 = Coercions0_18;
                MR_Word next_value_of_STATE_VARIABLE_TypeAssign_0_5 = STATE_VARIABLE_TypeAssign_1_31;

                // direct tailcall eliminated
                ;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                STATE_VARIABLE_TypeAssign_0_5 = next_value_of_STATE_VARIABLE_TypeAssign_0_5;
                STATE_VARIABLE_MadeProgress_0_7 = (MR_Integer) 1;
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TailDelayedCoercions_26;

                check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0(HeadVar__1_1, Coercions0_18, HeadVar__3_3, &TailDelayedCoercions_26, STATE_VARIABLE_TypeAssign_1_31, STATE_VARIABLE_TypeAssign_6, STATE_VARIABLE_MadeProgress_0_7, STATE_VARIABLE_MadeProgress_8);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Coercion0_17));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailDelayedCoercions_26));
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Coercion_24 = (MR_Word) (MR_body((MR_Word) (CheckResult_23), (MR_Integer) 1));
            MR_Word TailKeepCoercions_25;

            check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0(HeadVar__1_1, Coercions0_18, &TailKeepCoercions_25, HeadVar__4_4, STATE_VARIABLE_TypeAssign_1_31, STATE_VARIABLE_TypeAssign_6, (MR_Integer) 1, STATE_VARIABLE_MadeProgress_8);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Coercion_24));
              MR_hl_field(1, base, 1) = ((MR_Box) (TailKeepCoercions_25));
            }
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_4(
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
check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0_s *) (env_ptr_arg);

  {
    (env_ptr)->check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__succeeded = mercury__list__contains_2_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (env_ptr)->check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__ExistQTVars0_18, ((MR_Box) ((env_ptr)->check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__TVar_35)));
    (env_ptr)->check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__succeeded = !((env_ptr)->check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__succeeded);
    if ((env_ptr)->check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__succeeded)
      check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__commit_0) == 0)
    {
      parse_tree__prog_type_scan__type_contains_var_2_p_0((env_ptr)->check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__FromType_20, &(env_ptr)->check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__TVar_35, check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_2, env_ptr);
      (env_ptr)->check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0(
  MR_Word TypeTable_6,
  MR_Word Coercion0_7,
  MR_Word * Action_8,
  MR_Word STATE_VARIABLE_TypeAssign_0_28,
  MR_Word * STATE_VARIABLE_TypeAssign_29)
{
  struct check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0_s env;

  {
    MR_Word FromType0_10 = ((MR_Word) ((MR_hl_field(0, Coercion0_7, 0))));
    MR_Word ToType0_11 = ((MR_Word) ((MR_hl_field(0, Coercion0_7, 1))));
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(0, Coercion0_7, 2))));
    MR_Word FromVar_13 = ((MR_Word) ((MR_hl_field(0, Coercion0_7, 3))));
    MR_Word Status0_14 = ((MR_Unsigned) ((MR_hl_field(0, Coercion0_7, 4))) & (MR_Integer) 3);
    MR_Word _CoerceFails0_15;
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Coercion0_7, 4)));

    switch (Status0_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TVarSet0_17;
          MR_Word TypeBindings0_19;
          MR_Word ToType_21;

          check_hlds__type_assign__type_assign_get_typevarset_2_p_0(STATE_VARIABLE_TypeAssign_0_28, &TVarSet0_17);
          check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(STATE_VARIABLE_TypeAssign_0_28, &(env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__ExistQTVars0_18);
          check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(STATE_VARIABLE_TypeAssign_0_28, &TypeBindings0_19);
          parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings0_19, FromType0_10, &(env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__FromType_20);
          parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings0_19, ToType0_11, &ToType_21);
          check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_3(&env);
          (env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__succeeded = !((env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__succeeded);
          if ((env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__succeeded)
          {
            MR_Word FromMaybeDuType_37;
            MR_Word ToMaybeDuType_38;
            MR_Word MaybeBoth_39;

            check_hlds__typecheck_util__classify_is_du_type_3_p_0(TypeTable_6, (env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__FromType_20, &FromMaybeDuType_37);
            check_hlds__typecheck_util__classify_is_du_type_3_p_0(TypeTable_6, ToType_21, &ToMaybeDuType_38);
            if (((MR_tag((MR_Word) FromMaybeDuType_37)) == (MR_Integer) 0))
            {
              MR_Word Var_76 = (MR_Word) ((MR_Word) (FromMaybeDuType_37));

              if (((MR_tag((MR_Word) ToMaybeDuType_38)) == (MR_Integer) 0))
              {
                MR_Word ToDuTypeInfo_69 = (MR_Word) ((MR_Word) (ToMaybeDuType_38));

                {
                  MaybeBoth_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeBoth_39, 0) = ((MR_Box) (Var_76));
                  MR_hl_field(1, MaybeBoth_39, 1) = ((MR_Box) (ToDuTypeInfo_69));
                }
              }
              else
              {
                MR_String ToTypeDesc_74 = ((MR_String) ((MR_hl_field(1, ToMaybeDuType_38, 0))));
                MR_Word CoerceFail_75;

                {
                  CoerceFail_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, CoerceFail_75, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, CoerceFail_75, 1) = ((MR_Box) ((env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__FromType_20));
                  MR_hl_field(3, CoerceFail_75, 2) = ((MR_Box) ((MR_String) ""));
                  MR_hl_field(3, CoerceFail_75, 3) = ((MR_Box) (ToType_21));
                  MR_hl_field(3, CoerceFail_75, 4) = ((MR_Box) (ToTypeDesc_74));
                }
                {
                  MaybeBoth_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, MaybeBoth_39, 0) = ((MR_Box) (CoerceFail_75));
                }
              }
            }
            else
            {
              MR_String Var_77 = ((MR_String) ((MR_hl_field(1, FromMaybeDuType_37, 0))));

              if (((MR_tag((MR_Word) ToMaybeDuType_38)) == (MR_Integer) 0))
              {
                MR_Word CoerceFail_73;

                {
                  CoerceFail_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, CoerceFail_73, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, CoerceFail_73, 1) = ((MR_Box) ((env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__FromType_20));
                  MR_hl_field(3, CoerceFail_73, 2) = ((MR_Box) (Var_77));
                  MR_hl_field(3, CoerceFail_73, 3) = ((MR_Box) (ToType_21));
                  MR_hl_field(3, CoerceFail_73, 4) = ((MR_Box) ((MR_String) ""));
                }
                {
                  MaybeBoth_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, MaybeBoth_39, 0) = ((MR_Box) (CoerceFail_73));
                }
              }
              else
              {
                MR_String ToTypeDesc_64 = ((MR_String) ((MR_hl_field(1, ToMaybeDuType_38, 0))));
                MR_Word CoerceFail_65;

                {
                  CoerceFail_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, CoerceFail_65, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, CoerceFail_65, 1) = ((MR_Box) ((env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__FromType_20));
                  MR_hl_field(3, CoerceFail_65, 2) = ((MR_Box) (Var_77));
                  MR_hl_field(3, CoerceFail_65, 3) = ((MR_Box) (ToType_21));
                  MR_hl_field(3, CoerceFail_65, 4) = ((MR_Box) (ToTypeDesc_64));
                }
                {
                  MaybeBoth_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, MaybeBoth_39, 0) = ((MR_Box) (CoerceFail_65));
                }
              }
            }
            if (((MR_tag((MR_Word) MaybeBoth_39)) == (MR_Integer) 0))
            {
              MR_Word CoerceFails_23;
              MR_Word Coercion_34;
              MR_Word CoerceFail_40 = ((MR_Word) ((MR_hl_field(0, MaybeBoth_39, 0))));

              {
                CoerceFails_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, CoerceFails_23, 0) = ((MR_Box) (CoerceFail_40));
                MR_hl_field(1, CoerceFails_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Coercion_34 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Coercion_34, 0) = ((MR_Box) (FromType0_10));
                MR_hl_field(0, Coercion_34, 1) = ((MR_Box) (ToType0_11));
                MR_hl_field(0, Coercion_34, 2) = ((MR_Box) (Context_12));
                MR_hl_field(0, Coercion_34, 3) = ((MR_Box) (FromVar_13));
                MR_hl_field(0, Coercion_34, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                MR_hl_field(0, Coercion_34, 5) = ((MR_Box) (CoerceFails_23));
              }
              *Action_8 = (MR_Word) (MR_mkword(1, (MR_Word) (Coercion_34)));
              *STATE_VARIABLE_TypeAssign_29 = STATE_VARIABLE_TypeAssign_0_28;
            }
            else
            {
              MR_Word FromDuTypeInfo_41 = ((MR_Word) ((MR_hl_field(1, MaybeBoth_39, 0))));
              MR_Word ToDuTypeInfo_42 = ((MR_Word) ((MR_hl_field(1, MaybeBoth_39, 1))));
              MR_Word FromBaseTypeInfo_43;
              MR_Word ToBaseTypeInfo_44;
              MR_Word FromBaseTypeCtor_45;
              MR_Word FromBaseTypeArgTypes_46;
              MR_Word FromBaseTypeDefn_47;
              MR_Word FromBaseTypeBodyDu_48;
              MR_Word ToBaseTypeCtor_49;
              MR_Word ToBaseTypeArgTypes_50;
              MR_Word TypeAssign1_99;
              MR_Word CoerceFails_100;
              MR_Word _ToBaseTypeDefn_51;
              MR_Word _ToBaseTypeBodyDu_52;

              check_hlds__typecheck_coerce__compute_base_type_of_du_type_4_p_0(TypeTable_6, TVarSet0_17, FromDuTypeInfo_41, &FromBaseTypeInfo_43);
              check_hlds__typecheck_coerce__compute_base_type_of_du_type_4_p_0(TypeTable_6, TVarSet0_17, ToDuTypeInfo_42, &ToBaseTypeInfo_44);
              FromBaseTypeCtor_45 = ((MR_Word) ((MR_hl_field(0, FromBaseTypeInfo_43, 0))));
              FromBaseTypeArgTypes_46 = ((MR_Word) ((MR_hl_field(0, FromBaseTypeInfo_43, 1))));
              FromBaseTypeDefn_47 = ((MR_Word) ((MR_hl_field(0, FromBaseTypeInfo_43, 2))));
              FromBaseTypeBodyDu_48 = ((MR_Word) ((MR_hl_field(0, FromBaseTypeInfo_43, 3))));
              ToBaseTypeCtor_49 = ((MR_Word) ((MR_hl_field(0, ToBaseTypeInfo_44, 0))));
              ToBaseTypeArgTypes_50 = ((MR_Word) ((MR_hl_field(0, ToBaseTypeInfo_44, 1))));
              (env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(FromBaseTypeCtor_45, ToBaseTypeCtor_49);
              if ((env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__succeeded)
              {
                MR_Word BaseTypeCtorParams_56;
                MR_Word InvariantTVars_57;
                MR_Word OoMCtors_78;
                MR_Word Ctors_84;
                MR_Word Var_85;
                MR_Word Var_86;
                MR_Word _OoMAlphaSortedCtors_79;
                MR_Word _MaybeSuperType_80;
                MR_Word _MaybeCanon_81;
                MR_Word _MaybeTypeRepn_82;
                MR_Word _IsForeignType_83;
                MR_Box conv1_InvariantTVars_57;

                hlds__hlds_data__get_type_defn_tparams_2_p_0(FromBaseTypeDefn_47, &BaseTypeCtorParams_56);
                OoMCtors_78 = ((MR_Word) ((MR_hl_field(0, FromBaseTypeBodyDu_48, 0))));
                Ctors_84 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_78);
                {
                  Var_85 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_85, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_2[1]));
                  MR_hl_field(0, Var_85, 1) = ((MR_Box) (check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_4));
                  MR_hl_field(0, Var_85, 2) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(0, Var_85, 3) = ((MR_Box) (TypeTable_6));
                  MR_hl_field(0, Var_85, 4) = ((MR_Box) (FromBaseTypeCtor_45));
                  MR_hl_field(0, Var_85, 5) = ((MR_Box) (BaseTypeCtorParams_56));
                }
                Var_86 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]));
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]), Var_85, Ctors_84, ((MR_Box) (Var_86)), &conv1_InvariantTVars_57);
                InvariantTVars_57 = ((MR_Word) (conv1_InvariantTVars_57));
                check_hlds__typecheck_coerce__are_actual_param_type_pairs_as_related_as_needed_10_p_0(TypeTable_6, TVarSet0_17, InvariantTVars_57, BaseTypeCtorParams_56, FromBaseTypeArgTypes_46, ToBaseTypeArgTypes_50, STATE_VARIABLE_TypeAssign_0_28, &TypeAssign1_99, (MR_Word) ((MR_Unsigned) 0U), &CoerceFails_100);
              }
              else
              {
                MR_Word CoerceFail_61;

                {
                  CoerceFail_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, CoerceFail_61, 0) = ((MR_Box) ((env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__FromType_20));
                  MR_hl_field(0, CoerceFail_61, 1) = ((MR_Box) (FromBaseTypeCtor_45));
                  MR_hl_field(0, CoerceFail_61, 2) = ((MR_Box) (ToType_21));
                  MR_hl_field(0, CoerceFail_61, 3) = ((MR_Box) (ToBaseTypeCtor_49));
                }
                {
                  CoerceFails_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, CoerceFails_100, 0) = ((MR_Box) (CoerceFail_61));
                  MR_hl_field(1, CoerceFails_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                TypeAssign1_99 = STATE_VARIABLE_TypeAssign_0_28;
              }
              if ((CoerceFails_100 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word TypeBindings1_24;
                MR_Word TypeA_90;
                MR_Word TypeB_91;
                MR_Word Var_92;
                MR_Word Var_93;

                check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign1_99, &TypeBindings1_24);
                parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_24, (env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__FromType_20, &TypeA_90);
                parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_24, ToType_21, &TypeB_91);
                Var_92 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(TypeA_90);
                Var_93 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(TypeB_91);
                (env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__succeeded = parse_tree__prog_type_test____Unify____non_kinded_type_0_0(Var_92, Var_93);
                if ((env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__succeeded)
                {
                  MR_Word Coercion_25;

                  {
                    Coercion_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Coercion_25, 0) = ((MR_Box) ((env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__FromType_20));
                    MR_hl_field(0, Coercion_25, 1) = ((MR_Box) (ToType_21));
                    MR_hl_field(0, Coercion_25, 2) = ((MR_Box) (Context_12));
                    MR_hl_field(0, Coercion_25, 3) = ((MR_Box) (FromVar_13));
                    MR_hl_field(0, Coercion_25, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                    MR_hl_field(0, Coercion_25, 5) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  *Action_8 = (MR_Word) (MR_mkword(1, (MR_Word) (Coercion_25)));
                }
                else
                  *Action_8 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_TypeAssign_29 = TypeAssign1_99;
              }
              else
              {
                MR_Word Coercion_96;

                {
                  Coercion_96 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Coercion_96, 0) = ((MR_Box) (FromType0_10));
                  MR_hl_field(0, Coercion_96, 1) = ((MR_Box) (ToType0_11));
                  MR_hl_field(0, Coercion_96, 2) = ((MR_Box) (Context_12));
                  MR_hl_field(0, Coercion_96, 3) = ((MR_Box) (FromVar_13));
                  MR_hl_field(0, Coercion_96, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(0, Coercion_96, 5) = ((MR_Box) (CoerceFails_100));
                }
                *Action_8 = (MR_Word) (MR_mkword(1, (MR_Word) (Coercion_96)));
                *STATE_VARIABLE_TypeAssign_29 = STATE_VARIABLE_TypeAssign_0_28;
              }
            }
          }
          else
          {
            *Action_8 = (MR_Word) ((MR_Unsigned) 4U);
            *STATE_VARIABLE_TypeAssign_29 = STATE_VARIABLE_TypeAssign_0_28;
          }
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 3:
      case (MR_Integer) 1:
        {
          *Action_8 = (MR_Word) (MR_mkword(1, (MR_Word) (Coercion0_7)));
          *STATE_VARIABLE_TypeAssign_29 = STATE_VARIABLE_TypeAssign_0_28;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0_s *) (env_ptr_arg);

  {
    (env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = mercury__list__contains_2_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ExistQTVars0_15, ((MR_Box) ((env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__TVar_46)));
    (env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = !((env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded);
    if ((env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded)
      check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__commit_0) == 0)
    {
      parse_tree__prog_type_scan__type_contains_var_2_p_0((env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_23, &(env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__TVar_46, check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_2, env_ptr);
      (env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_4(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__commit_1, 1);
}

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_5(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0_s *) (env_ptr_arg);

  {
    (env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = mercury__list__contains_2_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ExistQTVars0_15, ((MR_Box) ((env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__TVar_48)));
    (env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = !((env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded);
    if ((env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded)
      check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_4(env_ptr);
  }
}

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_6(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__commit_1) == 0)
    {
      parse_tree__prog_type_scan__type_contains_var_2_p_0((env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_24, &(env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__TVar_48, check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_5, env_ptr);
      (env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0(
  MR_Word Info_7,
  MR_Word Context_8,
  MR_Word FromVar_9,
  MR_Word ToVar_10,
  MR_Word TypeAssign0_11,
  MR_Word * TypeAssign_12)
{
  struct check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0_s env;

  {
    MR_Word VarTypes0_13;
    MR_Word TVarSet0_14;
    MR_Word TypeBindings0_16;
    MR_Word MaybeFromType_19;
    MR_Word MaybeToType_22;
    MR_Word FromType0_17;
    MR_Word ToType0_20;

    check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_11, &VarTypes0_13);
    check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign0_11, &TVarSet0_14);
    check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign0_11, &(env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ExistQTVars0_15);
    check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign0_11, &TypeBindings0_16);
    (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes0_13, FromVar_9, &FromType0_17);
    if ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded)
    {
      MR_Word FromType1_18;

      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings0_16, FromType0_17, &FromType1_18);
      {
        MaybeFromType_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeFromType_19, 0) = ((MR_Box) (FromType1_18));
      }
    }
    else
      MaybeFromType_19 = (MR_Word) ((MR_Unsigned) 0U);
    (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes0_13, ToVar_10, &ToType0_20);
    if ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded)
    {
      MR_Word ToType1_21;

      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings0_16, ToType0_20, &ToType1_21);
      {
        MaybeToType_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeToType_22, 0) = ((MR_Box) (ToType1_21));
      }
    }
    else
      MaybeToType_22 = (MR_Word) ((MR_Unsigned) 0U);
    (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = (MaybeFromType_19 != (MR_Word) ((MR_Unsigned) 0U));
    if ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded)
    {
      (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_23 = ((MR_Word) ((MR_hl_field(1, MaybeFromType_19, 0))));
      (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = (MaybeToType_22 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded)
      {
        (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_24 = ((MR_Word) ((MR_hl_field(1, MaybeToType_22, 0))));
        check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_3(&env);
        (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = !((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded);
        if ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded)
        {
          check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_6(&env);
          (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = !((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded);
        }
      }
    }
    if ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded)
    {
      MR_Word TypeTable_25;
      MR_Word TypeAssign1_26;
      MR_Word CoerceFails_27;

      check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(Info_7, &TypeTable_25);
      check_hlds__typecheck_coerce__typecheck_coerce_between_types_7_p_0(TypeTable_25, TVarSet0_14, (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_23, (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_24, TypeAssign0_11, &TypeAssign1_26, &CoerceFails_27);
      if ((CoerceFails_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeBindings1_28;
        MR_Word TypeA_50;
        MR_Word TypeB_51;
        MR_Word Var_52;
        MR_Word Var_53;

        check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign1_26, &TypeBindings1_28);
        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_28, (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_23, &TypeA_50);
        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_28, (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_24, &TypeB_51);
        Var_52 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(TypeA_50);
        Var_53 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(TypeB_51);
        (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = parse_tree__prog_type_test____Unify____non_kinded_type_0_0(Var_52, Var_53);
        if ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded)
        {
          MR_Word Coercion_29;
          MR_Word Coercions0_55;
          MR_Word Coercions_56;

          {
            Coercion_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Coercion_29, 0) = ((MR_Box) ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_23));
            MR_hl_field(0, Coercion_29, 1) = ((MR_Box) ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_24));
            MR_hl_field(0, Coercion_29, 2) = ((MR_Box) (Context_8));
            MR_hl_field(0, Coercion_29, 3) = ((MR_Box) (FromVar_9));
            MR_hl_field(0, Coercion_29, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
            MR_hl_field(0, Coercion_29, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(TypeAssign1_26, &Coercions0_55);
          {
            Coercions_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Coercions_56, 0) = ((MR_Box) (Coercion_29));
            MR_hl_field(1, Coercions_56, 1) = ((MR_Box) (Coercions0_55));
          }
          check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(Coercions_56, TypeAssign1_26, TypeAssign_12);
        }
        else
          *TypeAssign_12 = TypeAssign1_26;
      }
      else
      {
        MR_Word Coercion_40;
        MR_Word Coercions0_57;
        MR_Word Coercions_58;

        {
          Coercion_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Coercion_40, 0) = ((MR_Box) ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_23));
          MR_hl_field(0, Coercion_40, 1) = ((MR_Box) ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_24));
          MR_hl_field(0, Coercion_40, 2) = ((MR_Box) (Context_8));
          MR_hl_field(0, Coercion_40, 3) = ((MR_Box) (FromVar_9));
          MR_hl_field(0, Coercion_40, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(0, Coercion_40, 5) = ((MR_Box) (CoerceFails_27));
        }
        check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(TypeAssign0_11, &Coercions0_57);
        {
          Coercions_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Coercions_58, 0) = ((MR_Box) (Coercion_40));
          MR_hl_field(1, Coercions_58, 1) = ((MR_Box) (Coercions0_57));
        }
        check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(Coercions_58, TypeAssign0_11, TypeAssign_12);
      }
    }
    else
    {
      MR_Word TypeAssign2_32;
      MR_Word CoerceFail_33;
      MR_Word Var_38;
      MR_Word FromType_41;
      MR_Word ToType_42;
      MR_Word TypeAssign1_43;
      MR_Word Coercion_44;
      MR_Word Coercions0_59;
      MR_Word Coercions_60;

      if ((MaybeFromType_19 == (MR_Word) ((MR_Unsigned) 0U)))
        check_hlds__typecheck_util__type_assign_fresh_type_var_4_p_0(FromVar_9, &FromType_41, TypeAssign0_11, &TypeAssign1_43);
      else
      {
        FromType_41 = ((MR_Word) ((MR_hl_field(1, MaybeFromType_19, 0))));
        TypeAssign1_43 = TypeAssign0_11;
      }
      if ((MaybeToType_22 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[2]), ((MR_Box) (ToVar_10)), ((MR_Box) (FromVar_9)));
        if ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded)
        {
          ToType_42 = FromType_41;
          TypeAssign2_32 = TypeAssign1_43;
        }
        else
          check_hlds__typecheck_util__type_assign_fresh_type_var_4_p_0(ToVar_10, &ToType_42, TypeAssign1_43, &TypeAssign2_32);
      }
      else
      {
        ToType_42 = ((MR_Word) ((MR_hl_field(1, MaybeToType_22, 0))));
        TypeAssign2_32 = TypeAssign1_43;
      }
      {
        CoerceFail_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, CoerceFail_33, 0) = ((MR_Box) ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ExistQTVars0_15));
        MR_hl_field(1, CoerceFail_33, 1) = ((MR_Box) (MaybeFromType_19));
        MR_hl_field(1, CoerceFail_33, 2) = ((MR_Box) (MaybeToType_22));
      }
      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (CoerceFail_33));
        MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Coercion_44 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Coercion_44, 0) = ((MR_Box) (FromType_41));
        MR_hl_field(0, Coercion_44, 1) = ((MR_Box) (ToType_42));
        MR_hl_field(0, Coercion_44, 2) = ((MR_Box) (Context_8));
        MR_hl_field(0, Coercion_44, 3) = ((MR_Box) (FromVar_9));
        MR_hl_field(0, Coercion_44, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(0, Coercion_44, 5) = ((MR_Box) (Var_38));
      }
      check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(TypeAssign2_32, &Coercions0_59);
      {
        Coercions_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Coercions_60, 0) = ((MR_Box) (Coercion_44));
        MR_hl_field(1, Coercions_60, 1) = ((MR_Box) (Coercions0_59));
      }
      check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(Coercions_60, TypeAssign2_32, TypeAssign_12);
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_between_types_7_p_0_1(
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
check_hlds__typecheck_coerce__typecheck_coerce_between_types_7_p_0(
  MR_Word TypeTable_8,
  MR_Word TVarSet_9,
  MR_Word FromType_10,
  MR_Word ToType_11,
  MR_Word STATE_VARIABLE_TypeAssign_0_35,
  MR_Word * STATE_VARIABLE_TypeAssign_36,
  MR_Word * CoerceFails_13)
{
  MR_bool succeeded;
  MR_Word FromMaybeDuType_14;
  MR_Word ToMaybeDuType_15;
  MR_Word MaybeBoth_16;

  check_hlds__typecheck_util__classify_is_du_type_3_p_0(TypeTable_8, FromType_10, &FromMaybeDuType_14);
  check_hlds__typecheck_util__classify_is_du_type_3_p_0(TypeTable_8, ToType_11, &ToMaybeDuType_15);
  if (((MR_tag((MR_Word) FromMaybeDuType_14)) == (MR_Integer) 0))
  {
    MR_Word Var_56 = (MR_Word) ((MR_Word) (FromMaybeDuType_14));

    if (((MR_tag((MR_Word) ToMaybeDuType_15)) == (MR_Integer) 0))
    {
      MR_Word ToDuTypeInfo_49 = (MR_Word) ((MR_Word) (ToMaybeDuType_15));

      {
        MaybeBoth_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeBoth_16, 0) = ((MR_Box) (Var_56));
        MR_hl_field(1, MaybeBoth_16, 1) = ((MR_Box) (ToDuTypeInfo_49));
      }
    }
    else
    {
      MR_String ToTypeDesc_54 = ((MR_String) ((MR_hl_field(1, ToMaybeDuType_15, 0))));
      MR_Word CoerceFail_55;

      {
        CoerceFail_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, CoerceFail_55, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, CoerceFail_55, 1) = ((MR_Box) (FromType_10));
        MR_hl_field(3, CoerceFail_55, 2) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(3, CoerceFail_55, 3) = ((MR_Box) (ToType_11));
        MR_hl_field(3, CoerceFail_55, 4) = ((MR_Box) (ToTypeDesc_54));
      }
      {
        MaybeBoth_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeBoth_16, 0) = ((MR_Box) (CoerceFail_55));
      }
    }
  }
  else
  {
    MR_String Var_57 = ((MR_String) ((MR_hl_field(1, FromMaybeDuType_14, 0))));

    if (((MR_tag((MR_Word) ToMaybeDuType_15)) == (MR_Integer) 0))
    {
      MR_Word CoerceFail_53;

      {
        CoerceFail_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, CoerceFail_53, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, CoerceFail_53, 1) = ((MR_Box) (FromType_10));
        MR_hl_field(3, CoerceFail_53, 2) = ((MR_Box) (Var_57));
        MR_hl_field(3, CoerceFail_53, 3) = ((MR_Box) (ToType_11));
        MR_hl_field(3, CoerceFail_53, 4) = ((MR_Box) ((MR_String) ""));
      }
      {
        MaybeBoth_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeBoth_16, 0) = ((MR_Box) (CoerceFail_53));
      }
    }
    else
    {
      MR_String ToTypeDesc_44 = ((MR_String) ((MR_hl_field(1, ToMaybeDuType_15, 0))));
      MR_Word CoerceFail_45;

      {
        CoerceFail_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, CoerceFail_45, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, CoerceFail_45, 1) = ((MR_Box) (FromType_10));
        MR_hl_field(3, CoerceFail_45, 2) = ((MR_Box) (Var_57));
        MR_hl_field(3, CoerceFail_45, 3) = ((MR_Box) (ToType_11));
        MR_hl_field(3, CoerceFail_45, 4) = ((MR_Box) (ToTypeDesc_44));
      }
      {
        MaybeBoth_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeBoth_16, 0) = ((MR_Box) (CoerceFail_45));
      }
    }
  }
  if (((MR_tag((MR_Word) MaybeBoth_16)) == (MR_Integer) 0))
  {
    MR_Word CoerceFail_17 = ((MR_Word) ((MR_hl_field(0, MaybeBoth_16, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *CoerceFails_13 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_17));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_TypeAssign_36 = STATE_VARIABLE_TypeAssign_0_35;
  }
  else
  {
    MR_Word FromDuTypeInfo_18 = ((MR_Word) ((MR_hl_field(1, MaybeBoth_16, 0))));
    MR_Word ToDuTypeInfo_19 = ((MR_Word) ((MR_hl_field(1, MaybeBoth_16, 1))));
    MR_Word FromBaseTypeInfo_20;
    MR_Word ToBaseTypeInfo_21;
    MR_Word FromBaseTypeCtor_22;
    MR_Word FromBaseTypeArgTypes_23;
    MR_Word FromBaseTypeDefn_24;
    MR_Word FromBaseTypeBodyDu_25;
    MR_Word ToBaseTypeCtor_26;
    MR_Word ToBaseTypeArgTypes_27;
    MR_Word BaseTypeCtor_30;

    check_hlds__typecheck_coerce__compute_base_type_of_du_type_4_p_0(TypeTable_8, TVarSet_9, FromDuTypeInfo_18, &FromBaseTypeInfo_20);
    check_hlds__typecheck_coerce__compute_base_type_of_du_type_4_p_0(TypeTable_8, TVarSet_9, ToDuTypeInfo_19, &ToBaseTypeInfo_21);
    FromBaseTypeCtor_22 = ((MR_Word) ((MR_hl_field(0, FromBaseTypeInfo_20, 0))));
    FromBaseTypeArgTypes_23 = ((MR_Word) ((MR_hl_field(0, FromBaseTypeInfo_20, 1))));
    FromBaseTypeDefn_24 = ((MR_Word) ((MR_hl_field(0, FromBaseTypeInfo_20, 2))));
    FromBaseTypeBodyDu_25 = ((MR_Word) ((MR_hl_field(0, FromBaseTypeInfo_20, 3))));
    ToBaseTypeCtor_26 = ((MR_Word) ((MR_hl_field(0, ToBaseTypeInfo_21, 0))));
    ToBaseTypeArgTypes_27 = ((MR_Word) ((MR_hl_field(0, ToBaseTypeInfo_21, 1))));
    BaseTypeCtor_30 = FromBaseTypeCtor_22;
    succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(BaseTypeCtor_30, ToBaseTypeCtor_26);
    if (succeeded)
    {
      MR_Word BaseTypeCtorParams_33;
      MR_Word InvariantTVars_34;
      MR_Word OoMCtors_58;
      MR_Word Ctors_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Box conv1_InvariantTVars_34;

      hlds__hlds_data__get_type_defn_tparams_2_p_0(FromBaseTypeDefn_24, &BaseTypeCtorParams_33);
      OoMCtors_58 = ((MR_Word) ((MR_hl_field(0, FromBaseTypeBodyDu_25, 0))));
      Ctors_64 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_58);
      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_65, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_2[1]));
        MR_hl_field(0, Var_65, 1) = ((MR_Box) (check_hlds__typecheck_coerce__typecheck_coerce_between_types_7_p_0_1));
        MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_65, 3) = ((MR_Box) (TypeTable_8));
        MR_hl_field(0, Var_65, 4) = ((MR_Box) (BaseTypeCtor_30));
        MR_hl_field(0, Var_65, 5) = ((MR_Box) (BaseTypeCtorParams_33));
      }
      Var_66 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]));
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]), Var_65, Ctors_64, ((MR_Box) (Var_66)), &conv1_InvariantTVars_34);
      InvariantTVars_34 = ((MR_Word) (conv1_InvariantTVars_34));
      check_hlds__typecheck_coerce__are_actual_param_type_pairs_as_related_as_needed_10_p_0(TypeTable_8, TVarSet_9, InvariantTVars_34, BaseTypeCtorParams_33, FromBaseTypeArgTypes_23, ToBaseTypeArgTypes_27, STATE_VARIABLE_TypeAssign_0_35, STATE_VARIABLE_TypeAssign_36, (MR_Word) ((MR_Unsigned) 0U), CoerceFails_13);
    }
    else
    {
      MR_Word CoerceFail_41;

      {
        CoerceFail_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CoerceFail_41, 0) = ((MR_Box) (FromType_10));
        MR_hl_field(0, CoerceFail_41, 1) = ((MR_Box) (FromBaseTypeCtor_22));
        MR_hl_field(0, CoerceFail_41, 2) = ((MR_Box) (ToType_11));
        MR_hl_field(0, CoerceFail_41, 3) = ((MR_Box) (ToBaseTypeCtor_26));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *CoerceFails_13 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_41));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_TypeAssign_36 = STATE_VARIABLE_TypeAssign_0_35;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_coerce__are_actual_param_type_pairs_as_related_as_needed_10_p_0(
  MR_Word TypeTable_11,
  MR_Word TVarSet_12,
  MR_Word InvariantTVars_13,
  MR_Word TypeParams_14,
  MR_Word FromArgTypes_15,
  MR_Word ToArgTypes_16,
  MR_Word STATE_VARIABLE_TypeAssign_0_25,
  MR_Word * STATE_VARIABLE_TypeAssign_26,
  MR_Word STATE_VARIABLE_CoerceFails_0_27,
  MR_Word * STATE_VARIABLE_CoerceFails_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (TypeParams_14 == (MR_Word) ((MR_Unsigned) 0U));

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      succeeded = (FromArgTypes_15 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (ToArgTypes_16 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      *STATE_VARIABLE_CoerceFails_28 = STATE_VARIABLE_CoerceFails_0_27;
      *STATE_VARIABLE_TypeAssign_26 = STATE_VARIABLE_TypeAssign_0_25;
    }
    else
    {
      MR_Word HeadTypeParam_19;
      MR_Word TailTypeParams_20;
      MR_Word HeadFromArgType_21;
      MR_Word TailFromArgTypes_22;
      MR_Word HeadToArgType_23;
      MR_Word TailToArgTypes_24;

      succeeded = (TypeParams_14 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadTypeParam_19 = ((MR_Word) ((MR_hl_field(1, TypeParams_14, 0))));
        TailTypeParams_20 = ((MR_Word) ((MR_hl_field(1, TypeParams_14, 1))));
        succeeded = (FromArgTypes_15 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadFromArgType_21 = ((MR_Word) ((MR_hl_field(1, FromArgTypes_15, 0))));
          TailFromArgTypes_22 = ((MR_Word) ((MR_hl_field(1, FromArgTypes_15, 1))));
          succeeded = (ToArgTypes_16 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadToArgType_23 = ((MR_Word) ((MR_hl_field(1, ToArgTypes_16, 0))));
            TailToArgTypes_24 = ((MR_Word) ((MR_hl_field(1, ToArgTypes_16, 1))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_TypeAssign_1_29;
        MR_Word STATE_VARIABLE_CoerceFails_1_30;
        MR_Word next_value_of_TypeParams_14;
        MR_Word next_value_of_FromArgTypes_15;
        MR_Word next_value_of_ToArgTypes_16;
        MR_Word next_value_of_STATE_VARIABLE_TypeAssign_0_25;
        MR_Word next_value_of_STATE_VARIABLE_CoerceFails_0_27;

        succeeded = mercury__set__contains_2_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), InvariantTVars_13, ((MR_Box) (HeadTypeParam_19)));
        if (succeeded)
          check_hlds__typecheck_coerce__types_compare_as_given_9_p_0(TypeTable_11, TVarSet_12, (MR_Integer) 0, HeadFromArgType_21, HeadToArgType_23, STATE_VARIABLE_TypeAssign_0_25, &STATE_VARIABLE_TypeAssign_1_29, STATE_VARIABLE_CoerceFails_0_27, &STATE_VARIABLE_CoerceFails_1_30);
        else
        {
          MR_Word FromToTypeAssign_35;
          MR_Word FromToCoerceFails_36;

          check_hlds__typecheck_coerce__types_compare_as_given_9_p_0(TypeTable_11, TVarSet_12, (MR_Integer) 1, HeadFromArgType_21, HeadToArgType_23, STATE_VARIABLE_TypeAssign_0_25, &FromToTypeAssign_35, (MR_Word) ((MR_Unsigned) 0U), &FromToCoerceFails_36);
          if ((FromToCoerceFails_36 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_TypeAssign_1_29 = FromToTypeAssign_35;
            STATE_VARIABLE_CoerceFails_1_30 = STATE_VARIABLE_CoerceFails_0_27;
          }
          else
          {
            MR_Word ToFromTypeAssign_39;
            MR_Word ToFromCoerceFails_40;

            check_hlds__typecheck_coerce__types_compare_as_given_9_p_0(TypeTable_11, TVarSet_12, (MR_Integer) 1, HeadToArgType_23, HeadFromArgType_21, STATE_VARIABLE_TypeAssign_0_25, &ToFromTypeAssign_39, (MR_Word) ((MR_Unsigned) 0U), &ToFromCoerceFails_40);
            if ((ToFromCoerceFails_40 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              STATE_VARIABLE_TypeAssign_1_29 = ToFromTypeAssign_39;
              STATE_VARIABLE_CoerceFails_1_30 = STATE_VARIABLE_CoerceFails_0_27;
            }
            else
            {
              MR_Word Var_48;

              Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_fail_0), ToFromCoerceFails_40, STATE_VARIABLE_CoerceFails_0_27);
              STATE_VARIABLE_CoerceFails_1_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_fail_0), FromToCoerceFails_36, Var_48);
              STATE_VARIABLE_TypeAssign_1_29 = STATE_VARIABLE_TypeAssign_0_25;
            }
          }
        }
        // direct tailcall eliminated
        ;
        next_value_of_TypeParams_14 = TailTypeParams_20;
        next_value_of_FromArgTypes_15 = TailFromArgTypes_22;
        next_value_of_ToArgTypes_16 = TailToArgTypes_24;
        next_value_of_STATE_VARIABLE_TypeAssign_0_25 = STATE_VARIABLE_TypeAssign_1_29;
        next_value_of_STATE_VARIABLE_CoerceFails_0_27 = STATE_VARIABLE_CoerceFails_1_30;
        TypeParams_14 = next_value_of_TypeParams_14;
        FromArgTypes_15 = next_value_of_FromArgTypes_15;
        ToArgTypes_16 = next_value_of_ToArgTypes_16;
        STATE_VARIABLE_TypeAssign_0_25 = next_value_of_STATE_VARIABLE_TypeAssign_0_25;
        STATE_VARIABLE_CoerceFails_0_27 = next_value_of_STATE_VARIABLE_CoerceFails_0_27;
        continue;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.are_actual_param_type_pairs_as_related_as_needed\'/10", (MR_String) "length mismatch");
          return;
        }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_coerce__types_compare_as_given_9_p_0(
  MR_Word TypeTable_10,
  MR_Word TVarSet_11,
  MR_Word Comparison_12,
  MR_Word TypeA_13,
  MR_Word TypeB_14,
  MR_Word STATE_VARIABLE_TypeAssign_0_22,
  MR_Word * STATE_VARIABLE_TypeAssign_23,
  MR_Word STATE_VARIABLE_CoerceFails_0_24,
  MR_Word * STATE_VARIABLE_CoerceFails_25)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) TypeA_13)) == (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!(succeeded))
      succeeded = ((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_TypeAssign_1_26;

      succeeded = check_hlds__typecheck_util__type_assign_unify_type_4_p_0(TypeA_13, TypeB_14, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_1_26);
      if (succeeded)
      {
        *STATE_VARIABLE_TypeAssign_23 = STATE_VARIABLE_TypeAssign_1_26;
        *STATE_VARIABLE_CoerceFails_25 = STATE_VARIABLE_CoerceFails_0_24;
      }
      else
      {
        MR_Word CoerceFail_21;

        {
          CoerceFail_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CoerceFail_21, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, CoerceFail_21, 1) = ((MR_Box) (TypeA_13));
          MR_hl_field(3, CoerceFail_21, 2) = ((MR_Box) (TypeB_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_CoerceFails_25 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_21));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_24));
        }
        *STATE_VARIABLE_TypeAssign_23 = STATE_VARIABLE_TypeAssign_0_22;
      }
    }
    else
      switch (MR_tag((MR_Word) TypeA_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.types_compare_as_given_nonvar\'/9", (MR_String) "type_variable");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            succeeded = ((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 1);
            if (succeeded)
            {
              MR_Word TypeCtorA_38;
              MR_Word ArgTypesA_39;
              MR_Word TypeCtorB_40;
              MR_Word ArgTypesB_41;

              parse_tree__prog_type__defined_type_to_ctor_and_args_3_p_0(TypeA_13, &TypeCtorA_38, &ArgTypesA_39);
              parse_tree__prog_type__defined_type_to_ctor_and_args_3_p_0(TypeB_14, &TypeCtorB_40, &ArgTypesB_41);
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_38, TypeCtorB_40);
              if (succeeded)
                check_hlds__typecheck_coerce__corresponding_types_compare_as_given_9_p_0(TypeTable_10, TVarSet_11, Comparison_12, ArgTypesA_39, ArgTypesB_41, STATE_VARIABLE_TypeAssign_0_22, STATE_VARIABLE_TypeAssign_23, STATE_VARIABLE_CoerceFails_0_24, STATE_VARIABLE_CoerceFails_25);
              else
              {
                MR_Word MaybeDuTypeA_42;
                MR_Word MaybeDuTypeB_43;
                MR_Word MaybeBoth_44;

                check_hlds__typecheck_util__classify_defined_type_is_du_type_4_p_0(TypeTable_10, TypeCtorA_38, ArgTypesA_39, &MaybeDuTypeA_42);
                check_hlds__typecheck_util__classify_defined_type_is_du_type_4_p_0(TypeTable_10, TypeCtorB_40, ArgTypesB_41, &MaybeDuTypeB_43);
                check_hlds__typecheck_coerce__are_both_types_du_5_p_0(TypeA_13, TypeB_14, MaybeDuTypeA_42, MaybeDuTypeB_43, &MaybeBoth_44);
                if (((MR_tag((MR_Word) MaybeBoth_44)) == (MR_Integer) 0))
                {
                  MR_Word CoerceFail_71 = ((MR_Word) ((MR_hl_field(0, MaybeBoth_44, 0))));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_CoerceFails_25 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_71));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_24));
                  }
                  *STATE_VARIABLE_TypeAssign_23 = STATE_VARIABLE_TypeAssign_0_22;
                }
                else
                {
                  MR_Word DuTypeInfoA_45 = ((MR_Word) ((MR_hl_field(1, MaybeBoth_44, 0))));

                  switch (Comparison_12) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word CoerceFail_72;

                        {
                          CoerceFail_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, CoerceFail_72, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(3, CoerceFail_72, 1) = ((MR_Box) (TypeA_13));
                          MR_hl_field(3, CoerceFail_72, 2) = ((MR_Box) (TypeB_14));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *STATE_VARIABLE_CoerceFails_25 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_72));
                          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_24));
                        }
                        *STATE_VARIABLE_TypeAssign_23 = STATE_VARIABLE_TypeAssign_0_22;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word TypeDefnA_49 = ((MR_Word) ((MR_hl_field(0, DuTypeInfoA_45, 2))));
                        MR_Word TypeBodyDuA_50 = ((MR_Word) ((MR_hl_field(0, DuTypeInfoA_45, 3))));
                        MR_Word MaybeSuperTypeA_51 = ((MR_Word) ((MR_hl_field(0, TypeBodyDuA_50, 2))));

                        if ((MaybeSuperTypeA_51 == (MR_Word) ((MR_Unsigned) 0U)))
                        {
                          MR_Word CoerceFail_73;

                          {
                            CoerceFail_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, CoerceFail_73, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(3, CoerceFail_73, 1) = ((MR_Box) (TypeCtorA_38));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            *STATE_VARIABLE_CoerceFails_25 = base;
                            MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_73));
                            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_24));
                          }
                          *STATE_VARIABLE_TypeAssign_23 = STATE_VARIABLE_TypeAssign_0_22;
                        }
                        else
                        {
                          MR_Word SuperTypeA0_52 = ((MR_Word) ((MR_hl_field(1, MaybeSuperTypeA_51, 0))));
                          MR_Word SuperTypeA_53;
                          MR_Word next_value_of_TypeA_13;

                          hlds__type_util__get_supertype_of_subtype_6_p_0(TVarSet_11, TypeCtorA_38, ArgTypesA_39, TypeDefnA_49, SuperTypeA0_52, &SuperTypeA_53);
                          // direct tailcall eliminated
                          ;
                          next_value_of_TypeA_13 = SuperTypeA_53;
                          TypeA_13 = next_value_of_TypeA_13;
                          continue;
                        }
                      }
                      break;
                  }
                }
              }
            }
            else
            {
              MR_Word CoerceFail_74;

              {
                CoerceFail_74 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, CoerceFail_74, 0) = ((MR_Box) (TypeTable_10));
                MR_hl_field(2, CoerceFail_74, 1) = ((MR_Box) (TypeA_13));
                MR_hl_field(2, CoerceFail_74, 2) = ((MR_Box) (TypeB_14));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_CoerceFails_25 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_74));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_24));
              }
              *STATE_VARIABLE_TypeAssign_23 = STATE_VARIABLE_TypeAssign_0_22;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BuiltinTypeA_27 = ((MR_Word) ((MR_hl_field(2, TypeA_13, 0))));
            MR_Word Var_90;

            succeeded = ((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_90 = ((MR_Word) ((MR_hl_field(2, TypeB_14, 0))));
              succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinTypeA_27, Var_90);
            }
            if (succeeded)
              *STATE_VARIABLE_CoerceFails_25 = STATE_VARIABLE_CoerceFails_0_24;
            else
            {
              MR_Word CoerceFail_29;
              MR_Word BuiltinTypeB_28;

              succeeded = ((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 2);
              if (succeeded)
              {
                BuiltinTypeB_28 = ((MR_Word) ((MR_hl_field(2, TypeB_14, 0))));
                {
                  CoerceFail_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, CoerceFail_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, CoerceFail_29, 1) = ((MR_Box) (BuiltinTypeA_27));
                  MR_hl_field(3, CoerceFail_29, 2) = ((MR_Box) (BuiltinTypeB_28));
                }
              }
              else
                {
                  CoerceFail_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, CoerceFail_29, 0) = ((MR_Box) (TypeTable_10));
                  MR_hl_field(2, CoerceFail_29, 1) = ((MR_Box) (TypeA_13));
                  MR_hl_field(2, CoerceFail_29, 2) = ((MR_Box) (TypeB_14));
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_CoerceFails_25 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_29));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_24));
              }
            }
            *STATE_VARIABLE_TypeAssign_23 = STATE_VARIABLE_TypeAssign_0_22;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, TypeA_13, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Kind_54 = ((MR_Word) ((MR_hl_field(3, TypeA_13, 2))));
                MR_Word ArgTypesA_78 = ((MR_Word) ((MR_hl_field(3, TypeA_13, 1))));
                MR_Word ArgTypesB_77;
                MR_Word Var_91;

                succeeded = ((((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_14, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgTypesB_77 = ((MR_Word) ((MR_hl_field(3, TypeB_14, 1))));
                  Var_91 = ((MR_Word) ((MR_hl_field(3, TypeB_14, 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_54, Var_91);
                }
                if (succeeded)
                {
                  MR_Integer NumArgTypesA_55;
                  MR_Integer NumArgTypesB_56;

                  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesA_78, &NumArgTypesA_55);
                  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesB_77, &NumArgTypesB_56);
                  succeeded = (NumArgTypesA_55 == NumArgTypesB_56);
                  if (succeeded)
                    check_hlds__typecheck_coerce__corresponding_types_compare_as_given_9_p_0(TypeTable_10, TVarSet_11, Comparison_12, ArgTypesA_78, ArgTypesB_77, STATE_VARIABLE_TypeAssign_0_22, STATE_VARIABLE_TypeAssign_23, STATE_VARIABLE_CoerceFails_0_24, STATE_VARIABLE_CoerceFails_25);
                  else
                  {
                    MR_Word CoerceFail_75;

                    {
                      CoerceFail_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, CoerceFail_75, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, CoerceFail_75, 1) = ((MR_Box) (NumArgTypesA_55));
                      MR_hl_field(3, CoerceFail_75, 2) = ((MR_Box) (NumArgTypesB_56));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_CoerceFails_25 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_75));
                      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_24));
                    }
                    *STATE_VARIABLE_TypeAssign_23 = STATE_VARIABLE_TypeAssign_0_22;
                  }
                }
                else
                {
                  MR_Word CoerceFail_76;

                  {
                    CoerceFail_76 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, CoerceFail_76, 0) = ((MR_Box) (TypeTable_10));
                    MR_hl_field(2, CoerceFail_76, 1) = ((MR_Box) (TypeA_13));
                    MR_hl_field(2, CoerceFail_76, 2) = ((MR_Box) (TypeB_14));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_CoerceFails_25 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_76));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_24));
                  }
                  *STATE_VARIABLE_TypeAssign_23 = STATE_VARIABLE_TypeAssign_0_22;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word PredOrFunc_57 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_13, 1))) & (MR_Integer) 1);
                MR_Word Purity_59 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_13, 4))) & (MR_Integer) 3);
                MR_Word ArgTypesA_81 = ((MR_Word) ((MR_hl_field(3, TypeA_13, 2))));
                MR_Word ArgTypesB_80;
                MR_Word Var_92;
                MR_Word Var_93;

                succeeded = ((((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_14, 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_92 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_14, 1))) & (MR_Integer) 1);
                  ArgTypesB_80 = ((MR_Word) ((MR_hl_field(3, TypeB_14, 2))));
                  Var_93 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_14, 4))) & (MR_Integer) 3);
                  succeeded = (PredOrFunc_57 == Var_92);
                  if (succeeded)
                    succeeded = (Purity_59 == Var_93);
                }
                if (succeeded)
                  check_hlds__typecheck_coerce__corresponding_types_compare_as_given_9_p_0(TypeTable_10, TVarSet_11, (MR_Integer) 0, ArgTypesA_81, ArgTypesB_80, STATE_VARIABLE_TypeAssign_0_22, STATE_VARIABLE_TypeAssign_23, STATE_VARIABLE_CoerceFails_0_24, STATE_VARIABLE_CoerceFails_25);
                else
                {
                  MR_Word CoerceFail_79;

                  {
                    CoerceFail_79 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, CoerceFail_79, 0) = ((MR_Box) (TypeTable_10));
                    MR_hl_field(2, CoerceFail_79, 1) = ((MR_Box) (TypeA_13));
                    MR_hl_field(2, CoerceFail_79, 2) = ((MR_Box) (TypeB_14));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_CoerceFails_25 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_79));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_24));
                  }
                  *STATE_VARIABLE_TypeAssign_23 = STATE_VARIABLE_TypeAssign_0_22;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.types_compare_as_given_nonvar\'/9", (MR_String) "apply_n_type");
                return;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeA1_65 = ((MR_Word) ((MR_hl_field(3, TypeA_13, 1))));
                MR_Word Kind_83 = ((MR_Word) ((MR_hl_field(3, TypeA_13, 2))));
                MR_Word TypeB1_66;
                MR_Word Var_94;

                succeeded = ((((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_14, 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  TypeB1_66 = ((MR_Word) ((MR_hl_field(3, TypeB_14, 1))));
                  Var_94 = ((MR_Word) ((MR_hl_field(3, TypeB_14, 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_83, Var_94);
                }
                if (succeeded)
                {
                  MR_Word next_value_of_TypeA_13 = TypeA1_65;
                  MR_Word next_value_of_TypeB_14 = TypeB1_66;

                  // direct tailcall eliminated
                  ;
                  TypeA_13 = next_value_of_TypeA_13;
                  TypeB_14 = next_value_of_TypeB_14;
                  continue;
                }
                else
                {
                  MR_Word CoerceFail_82;

                  {
                    CoerceFail_82 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, CoerceFail_82, 0) = ((MR_Box) (TypeTable_10));
                    MR_hl_field(2, CoerceFail_82, 1) = ((MR_Box) (TypeA_13));
                    MR_hl_field(2, CoerceFail_82, 2) = ((MR_Box) (TypeB_14));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_CoerceFails_25 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_82));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_24));
                  }
                  *STATE_VARIABLE_TypeAssign_23 = STATE_VARIABLE_TypeAssign_0_22;
                }
              }
              break;
          }
          break;
      }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_coerce__corresponding_types_compare_as_given_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_TypeAssign_0_6,
  MR_Word * STATE_VARIABLE_TypeAssign_7,
  MR_Word STATE_VARIABLE_CoerceFails_0_8,
  MR_Word * STATE_VARIABLE_CoerceFails_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_CoerceFails_9 = STATE_VARIABLE_CoerceFails_0_8;
        *STATE_VARIABLE_TypeAssign_7 = STATE_VARIABLE_TypeAssign_0_6;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.corresponding_types_compare_as_given\'/9", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));

      if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.corresponding_types_compare_as_given\'/9", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word TypeB_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
        MR_Word TypesB_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
        MR_Word STATE_VARIABLE_TypeAssign_1_32;
        MR_Word STATE_VARIABLE_CoerceFails_1_33;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_HeadVar__5_5;
        MR_Word next_value_of_STATE_VARIABLE_TypeAssign_0_6;
        MR_Word next_value_of_STATE_VARIABLE_CoerceFails_0_8;

        check_hlds__typecheck_coerce__types_compare_as_given_9_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Var_63, TypeB_24, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_1_32, STATE_VARIABLE_CoerceFails_0_8, &STATE_VARIABLE_CoerceFails_1_33);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = Var_62;
        next_value_of_HeadVar__5_5 = TypesB_25;
        next_value_of_STATE_VARIABLE_TypeAssign_0_6 = STATE_VARIABLE_TypeAssign_1_32;
        next_value_of_STATE_VARIABLE_CoerceFails_0_8 = STATE_VARIABLE_CoerceFails_1_33;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        STATE_VARIABLE_TypeAssign_0_6 = next_value_of_STATE_VARIABLE_TypeAssign_0_6;
        STATE_VARIABLE_CoerceFails_0_8 = next_value_of_STATE_VARIABLE_CoerceFails_0_8;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_coerce__are_both_types_du_5_p_0(
  MR_Word FromType_6,
  MR_Word ToType_7,
  MR_Word FromMaybeDuType_8,
  MR_Word ToMaybeDuType_9,
  MR_Word * MaybeBoth_10)
{
  if (((MR_tag((MR_Word) FromMaybeDuType_8)) == (MR_Integer) 0))
  {
    MR_Word Var_24 = (MR_Word) ((MR_Word) (FromMaybeDuType_8));

    if (((MR_tag((MR_Word) ToMaybeDuType_9)) == (MR_Integer) 0))
    {
      MR_Word ToDuTypeInfo_17 = (MR_Word) ((MR_Word) (ToMaybeDuType_9));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeBoth_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_24));
        MR_hl_field(1, base, 1) = ((MR_Box) (ToDuTypeInfo_17));
      }
    }
    else
    {
      MR_String ToTypeDesc_22 = ((MR_String) ((MR_hl_field(1, ToMaybeDuType_9, 0))));
      MR_Word CoerceFail_23;

      {
        CoerceFail_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, CoerceFail_23, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, CoerceFail_23, 1) = ((MR_Box) (FromType_6));
        MR_hl_field(3, CoerceFail_23, 2) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(3, CoerceFail_23, 3) = ((MR_Box) (ToType_7));
        MR_hl_field(3, CoerceFail_23, 4) = ((MR_Box) (ToTypeDesc_22));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeBoth_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (CoerceFail_23));
      }
    }
  }
  else
  {
    MR_String Var_25 = ((MR_String) ((MR_hl_field(1, FromMaybeDuType_8, 0))));

    if (((MR_tag((MR_Word) ToMaybeDuType_9)) == (MR_Integer) 0))
    {
      MR_Word CoerceFail_21;

      {
        CoerceFail_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, CoerceFail_21, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, CoerceFail_21, 1) = ((MR_Box) (FromType_6));
        MR_hl_field(3, CoerceFail_21, 2) = ((MR_Box) (Var_25));
        MR_hl_field(3, CoerceFail_21, 3) = ((MR_Box) (ToType_7));
        MR_hl_field(3, CoerceFail_21, 4) = ((MR_Box) ((MR_String) ""));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeBoth_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (CoerceFail_21));
      }
    }
    else
    {
      MR_String ToTypeDesc_12 = ((MR_String) ((MR_hl_field(1, ToMaybeDuType_9, 0))));
      MR_Word CoerceFail_13;

      {
        CoerceFail_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, CoerceFail_13, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, CoerceFail_13, 1) = ((MR_Box) (FromType_6));
        MR_hl_field(3, CoerceFail_13, 2) = ((MR_Box) (Var_25));
        MR_hl_field(3, CoerceFail_13, 3) = ((MR_Box) (ToType_7));
        MR_hl_field(3, CoerceFail_13, 4) = ((MR_Box) (ToTypeDesc_12));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeBoth_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (CoerceFail_13));
      }
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_coerce__compute_base_type_of_du_type_4_p_0(
  MR_Word TypeTable_5,
  MR_Word TVarSet_6,
  MR_Word DuTypeInfo_7,
  MR_Word * BaseDuTypeInfo_8)
{
  while (MR_TRUE)
  {
    MR_Word TypeCtor_9 = ((MR_Word) ((MR_hl_field(0, DuTypeInfo_7, 0))));
    MR_Word ArgTypes_10 = ((MR_Word) ((MR_hl_field(0, DuTypeInfo_7, 1))));
    MR_Word TypeDefn_11 = ((MR_Word) ((MR_hl_field(0, DuTypeInfo_7, 2))));
    MR_Word TypeBodyDu_12 = ((MR_Word) ((MR_hl_field(0, DuTypeInfo_7, 3))));
    MR_Word MaybeSuperType_13 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_12, 2))));

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((MaybeSuperType_13 == (MR_Word) ((MR_Unsigned) 0U)))
      *BaseDuTypeInfo_8 = DuTypeInfo_7;
    else
    {
      MR_Word SuperType0_14 = ((MR_Word) ((MR_hl_field(1, MaybeSuperType_13, 0))));
      MR_Word SuperType_15;
      MR_Word MaybeSuperDuType_16;
      MR_Word SuperDuTypeInfo_17;
      MR_Word next_value_of_DuTypeInfo_7;

      hlds__type_util__get_supertype_of_subtype_6_p_0(TVarSet_6, TypeCtor_9, ArgTypes_10, TypeDefn_11, SuperType0_14, &SuperType_15);
      check_hlds__typecheck_util__classify_is_du_type_3_p_0(TypeTable_5, SuperType_15, &MaybeSuperDuType_16);
      if (((MR_tag((MR_Word) MaybeSuperDuType_16)) == (MR_Integer) 0))
        SuperDuTypeInfo_17 = (MR_Word) ((MR_Word) (MaybeSuperDuType_16));
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.compute_base_type_of_du_type\'/4", (MR_String) "MaybeSuperDuType != is_du_type");
          return;
        }
      // direct tailcall eliminated
      ;
      next_value_of_DuTypeInfo_7 = SuperDuTypeInfo_17;
      DuTypeInfo_7 = next_value_of_DuTypeInfo_7;
      continue;
    }
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
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_TypeAssign_12;

  check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv0_TypeAssign_12);
  *wrapper_arg_2 = ((MR_Box) (conv0_TypeAssign_12));
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
  MR_Word Var_19;
  MR_Word FromVar0_11;
  MR_Word ToVar0_12;
  MR_Word Var_15;
  MR_Word Var_16;

  if (succeeded)
  {
    FromVar0_11 = ((MR_Word) ((MR_hl_field(1, Args_8, 0))));
    Var_15 = ((MR_Word) ((MR_hl_field(1, Args_8, 1))));
    succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ToVar0_12 = ((MR_Word) ((MR_hl_field(1, Var_15, 0))));
      Var_16 = ((MR_Word) ((MR_hl_field(1, Var_15, 1))));
      succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
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
    Var_19 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_2[0]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (check_hlds__typecheck_coerce__typecheck_coerce_5_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) (Context_7));
    MR_hl_field(0, Var_19, 5) = ((MR_Box) (FromVar_13));
    MR_hl_field(0, Var_19, 6) = ((MR_Box) (ToVar_14));
  }
  mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), Var_19, TypeAssignSet0_9, TypeAssignSet_10);
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
