/*
** Automatically generated from `typecheck_coerce.m'
** by the Mercury compiler,
** version rotd-2026-07-22
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

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_coerce__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__field_types_du_type_info_0_0[4];

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_du_type_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_du_type_info_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_ptag_ordered_du_type_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_name_ordered_du_type_info_0[1];

static const MR_Integer check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__functor_number_map_du_type_info_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_coerce__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__field_types_maybe_du_type_0_0[1];

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_maybe_du_type_0_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__field_types_maybe_du_type_0_1[1];

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_maybe_du_type_0_1;

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_maybe_du_type_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_maybe_du_type_0_1[1];

static const MR_DuPtagLayout check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_ptag_ordered_maybe_du_type_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_name_ordered_maybe_du_type_0[2];

static const MR_Integer check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__functor_number_map_maybe_du_type_0[2];

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
check_hlds__typecheck_coerce____Compare____maybe_du_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____maybe_du_type_0_0(
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
check_hlds__typecheck_coerce____Compare____du_type_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____du_type_info_0_0(
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
  MR_Word BaseTypeParams_9,
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
  MR_Word STATE_VARIABLE_TypeAssign_0_38,
  MR_Word * STATE_VARIABLE_TypeAssign_39,
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
check_hlds__typecheck_coerce__compute_base_type_of_du_type_4_p_0(
  MR_Word TypeTable_5,
  MR_Word TVarSet_6,
  MR_Word DuTypeInfo_7,
  MR_Word * BaseTypeInfo_8);

static void MR_CALL 
check_hlds__typecheck_coerce__classify_is_du_type_3_p_0(
  MR_Word TypeTable_4,
  MR_Word Type_5,
  MR_Word * MaybeDuType_6);

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
check_hlds__typecheck_coerce____Unify____du_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____du_type_info_0_0_10001(
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
check_hlds__typecheck_coerce____Unify____maybe_du_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____maybe_du_type_0_0_10001(
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

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_2[10][1];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_3[4][9];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_4[1][6];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_5[2][4];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_6[3][3];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_7[1][5];




static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_1[5][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_2[10][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "function type")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "builtin type")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "abstract type")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "equivalence type")) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "foreign type")) },
  /* row   5 */
  { ((MR_Box) ((MR_String) "solver type")) },
  /* row   6 */
  { ((MR_Box) ((MR_String) "unknown type")) },
  /* row   7 */
  { ((MR_Box) ((MR_String) "predicate type")) },
  /* row   8 */
  { ((MR_Box) ((MR_String) "tuple type")) },
  /* row   9 */
  { ((MR_Box) ((MR_String) "type variable")) },
};

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_3[4][9] = {
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

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_4[1][6] = {
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

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_5[2][4] = {
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

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_6[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_5[0])),
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
    ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_5[1])),
    ((MR_Box) (check_hlds__typecheck_coerce__type_assign_has_only_satisfied_coerce_constraints_1_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
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

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_coerce__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__field_types_du_type_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_coerce__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_type_body_du_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_du_type_info_0_0 = {
  (MR_String) "du_type_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__field_types_du_type_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_du_type_info_0_0[1] = { &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_du_type_info_0_0 };

static const MR_DuPtagLayout check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_ptag_ordered_du_type_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_du_type_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_name_ordered_du_type_info_0[1] = { &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_du_type_info_0_0 };

static const MR_Integer check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__functor_number_map_du_type_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__type_ctor_info_du_type_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_coerce____Unify____du_type_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_coerce____Compare____du_type_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_coerce",
  (MR_String) "du_type_info",
  { check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_name_ordered_du_type_info_0 },
  { check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_ptag_ordered_du_type_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__functor_number_map_du_type_info_0,

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

static const MR_PseudoTypeInfo check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__field_types_maybe_du_type_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__type_ctor_info_du_type_info_0) };

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_maybe_du_type_0_0 = {
  (MR_String) "is_du_type",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__field_types_maybe_du_type_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__field_types_maybe_du_type_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_maybe_du_type_0_1 = {
  (MR_String) "is_not_du_type",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__field_types_maybe_du_type_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_maybe_du_type_0_0[1] = { &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_maybe_du_type_0_0 };

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_maybe_du_type_0_1[1] = { &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_maybe_du_type_0_1 };

static const MR_DuPtagLayout check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_ptag_ordered_maybe_du_type_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_maybe_du_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_maybe_du_type_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_name_ordered_maybe_du_type_0[2] = {
  &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_maybe_du_type_0_0,
  &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_maybe_du_type_0_1
};

static const MR_Integer check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__functor_number_map_maybe_du_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__type_ctor_info_maybe_du_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_coerce____Unify____maybe_du_type_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_coerce____Compare____maybe_du_type_0_0_10001)),
  (MR_String) "check_hlds.typecheck_coerce",
  (MR_String) "maybe_du_type",
  { check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_name_ordered_maybe_du_type_0 },
  { check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_ptag_ordered_maybe_du_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__functor_number_map_maybe_du_type_0,

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
check_hlds__typecheck_coerce____Compare____maybe_du_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

      check_hlds__typecheck_coerce____Compare____du_type_info_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_String ArgX1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____maybe_du_type_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      succeeded = check_hlds__typecheck_coerce____Unify____du_type_info_0_0(ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
    }
  }
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
check_hlds__typecheck_coerce____Compare____du_type_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__hlds_data____Compare____hlds_type_defn_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          hlds__hlds_data____Compare____type_body_du_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____du_type_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = hlds__hlds_data____Unify____type_body_du_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
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
  MR_Word BaseTypeParams_9,
  MR_Word CtorArg_10,
  MR_Word STATE_VARIABLE_InvariantTVars_0_15,
  MR_Word * STATE_VARIABLE_InvariantTVars_16)
{
  MR_Word CtorArgType_13 = ((MR_Word) ((MR_hl_field(0, CtorArg_10, 1))));

  check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_6_p_0(TypeTable_7, BaseTypeCtor_8, BaseTypeParams_9, CtorArgType_13, STATE_VARIABLE_InvariantTVars_0_15, STATE_VARIABLE_InvariantTVars_16);
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
                    mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), TypeVars_23, STATE_VARIABLE_InvariantTVars_0_38, STATE_VARIABLE_InvariantTVars_39);
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 3:
                {
                  MR_Word TypeVars_52;

                  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_16, &TypeVars_52);
                  mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), TypeVars_52, STATE_VARIABLE_InvariantTVars_0_38, STATE_VARIABLE_InvariantTVars_39);
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
                  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_28, ArgTypes_16, &TSubst_29);
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
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.acc_invariant_tvars_in_ctor_arg_type\'/6", (MR_String) "undefined type");
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
                MR_hl_field(0, Var_45, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_3[3]));
                MR_hl_field(0, Var_45, 1) = ((MR_Box) (check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_6_p_0_1));
                MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_45, 3) = ((MR_Box) (TypeTable_7));
                MR_hl_field(0, Var_45, 4) = ((MR_Box) (BaseTypeCtor_8));
                MR_hl_field(0, Var_45, 5) = ((MR_Box) (BaseTypeParams_9));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]), Var_45, ArgTypes_56, ((MR_Box) (STATE_VARIABLE_InvariantTVars_0_38)), &conv1_STATE_VARIABLE_InvariantTVars_39);
              *STATE_VARIABLE_InvariantTVars_39 = ((MR_Word) (conv1_STATE_VARIABLE_InvariantTVars_39));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTypes_57 = ((MR_Word) ((MR_hl_field(3, RhsType_10, 2))));
              MR_Word TypeVars_58;

              parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_57, &TypeVars_58);
              mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), TypeVars_58, STATE_VARIABLE_InvariantTVars_0_38, STATE_VARIABLE_InvariantTVars_39);
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
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_3[2]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_6_p_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (TypeTable_7));
    MR_hl_field(0, Var_20, 4) = ((MR_Box) (BaseTypeCtor_8));
    MR_hl_field(0, Var_20, 5) = ((MR_Box) (BaseTypeParams_9));
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
  succeeded = mercury__list__all_true_2_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_6[2]), Coercions_3);
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
        mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_6[1]), DelayedCoercions_11, Coercions_8);
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
            MR_Word TypeAssign1_22;
            MR_Word CoerceFails_23;
            MR_Word FromMaybeDuType_37;
            MR_Word ToMaybeDuType_38;

            check_hlds__typecheck_coerce__classify_is_du_type_3_p_0(TypeTable_6, (env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__FromType_20, &FromMaybeDuType_37);
            check_hlds__typecheck_coerce__classify_is_du_type_3_p_0(TypeTable_6, ToType_21, &ToMaybeDuType_38);
            if (((MR_tag((MR_Word) FromMaybeDuType_37)) == (MR_Integer) 0))
            {
              MR_Word Var_73 = (MR_Word) ((MR_Word) (FromMaybeDuType_37));

              if (((MR_tag((MR_Word) ToMaybeDuType_38)) == (MR_Integer) 0))
              {
                MR_Word ToDuTypeInfo_45 = (MR_Word) ((MR_Word) (ToMaybeDuType_38));
                MR_Word FromBaseTypeInfo_46;
                MR_Word ToBaseTypeInfo_47;
                MR_Word FromBaseTypeCtor_48;
                MR_Word FromBaseTypeArgTypes_49;
                MR_Word FromBaseTypeDefn_50;
                MR_Word FromBaseTypeBodyDu_51;
                MR_Word ToBaseTypeCtor_52;
                MR_Word ToBaseTypeArgTypes_53;
                MR_Word _ToBaseTypeDefn_54;
                MR_Word _ToBaseTypeBodyDu_55;
                MR_Word BaseTypeCtor_56;

                check_hlds__typecheck_coerce__compute_base_type_of_du_type_4_p_0(TypeTable_6, TVarSet0_17, Var_73, &FromBaseTypeInfo_46);
                check_hlds__typecheck_coerce__compute_base_type_of_du_type_4_p_0(TypeTable_6, TVarSet0_17, ToDuTypeInfo_45, &ToBaseTypeInfo_47);
                FromBaseTypeCtor_48 = ((MR_Word) ((MR_hl_field(0, FromBaseTypeInfo_46, 0))));
                FromBaseTypeArgTypes_49 = ((MR_Word) ((MR_hl_field(0, FromBaseTypeInfo_46, 1))));
                FromBaseTypeDefn_50 = ((MR_Word) ((MR_hl_field(0, FromBaseTypeInfo_46, 2))));
                FromBaseTypeBodyDu_51 = ((MR_Word) ((MR_hl_field(0, FromBaseTypeInfo_46, 3))));
                ToBaseTypeCtor_52 = ((MR_Word) ((MR_hl_field(0, ToBaseTypeInfo_47, 0))));
                ToBaseTypeArgTypes_53 = ((MR_Word) ((MR_hl_field(0, ToBaseTypeInfo_47, 1))));
                BaseTypeCtor_56 = FromBaseTypeCtor_48;
                (env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(BaseTypeCtor_56, ToBaseTypeCtor_52);
                if ((env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__succeeded)
                {
                  MR_Word BaseTypeParams_59;
                  MR_Word InvariantTVars_60;
                  MR_Word OoMCtors_76;
                  MR_Word Ctors_82;
                  MR_Word Var_83;
                  MR_Word Var_84;
                  MR_Word _OoMAlphaSortedCtors_77;
                  MR_Word _MaybeSuperType_78;
                  MR_Word _MaybeCanon_79;
                  MR_Word _MaybeTypeRepn_80;
                  MR_Word _IsForeignType_81;
                  MR_Box conv1_InvariantTVars_60;

                  hlds__hlds_data__get_type_defn_tparams_2_p_0(FromBaseTypeDefn_50, &BaseTypeParams_59);
                  OoMCtors_76 = ((MR_Word) ((MR_hl_field(0, FromBaseTypeBodyDu_51, 0))));
                  Ctors_82 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_76);
                  {
                    Var_83 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_83, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_3[1]));
                    MR_hl_field(0, Var_83, 1) = ((MR_Box) (check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_4));
                    MR_hl_field(0, Var_83, 2) = ((MR_Box) ((MR_Integer) 3));
                    MR_hl_field(0, Var_83, 3) = ((MR_Box) (TypeTable_6));
                    MR_hl_field(0, Var_83, 4) = ((MR_Box) (BaseTypeCtor_56));
                    MR_hl_field(0, Var_83, 5) = ((MR_Box) (BaseTypeParams_59));
                  }
                  Var_84 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]));
                  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]), Var_83, Ctors_82, ((MR_Box) (Var_84)), &conv1_InvariantTVars_60);
                  InvariantTVars_60 = ((MR_Word) (conv1_InvariantTVars_60));
                  check_hlds__typecheck_coerce__are_actual_param_type_pairs_as_related_as_needed_10_p_0(TypeTable_6, TVarSet0_17, InvariantTVars_60, BaseTypeParams_59, FromBaseTypeArgTypes_49, ToBaseTypeArgTypes_53, STATE_VARIABLE_TypeAssign_0_28, &TypeAssign1_22, (MR_Word) ((MR_Unsigned) 0U), &CoerceFails_23);
                }
                else
                {
                  MR_Word CoerceFail_72;

                  {
                    CoerceFail_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, CoerceFail_72, 0) = ((MR_Box) ((env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__FromType_20));
                    MR_hl_field(0, CoerceFail_72, 1) = ((MR_Box) (FromBaseTypeCtor_48));
                    MR_hl_field(0, CoerceFail_72, 2) = ((MR_Box) (ToType_21));
                    MR_hl_field(0, CoerceFail_72, 3) = ((MR_Box) (ToBaseTypeCtor_52));
                  }
                  {
                    CoerceFails_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, CoerceFails_23, 0) = ((MR_Box) (CoerceFail_72));
                    MR_hl_field(1, CoerceFails_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  TypeAssign1_22 = STATE_VARIABLE_TypeAssign_0_28;
                }
              }
              else
              {
                MR_String ToTypeDesc_70 = ((MR_String) ((MR_hl_field(1, ToMaybeDuType_38, 0))));
                MR_Word CoerceFail_71;

                {
                  CoerceFail_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, CoerceFail_71, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, CoerceFail_71, 1) = ((MR_Box) ((env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__FromType_20));
                  MR_hl_field(3, CoerceFail_71, 2) = ((MR_Box) ((MR_String) ""));
                  MR_hl_field(3, CoerceFail_71, 3) = ((MR_Box) (ToType_21));
                  MR_hl_field(3, CoerceFail_71, 4) = ((MR_Box) (ToTypeDesc_70));
                }
                {
                  CoerceFails_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, CoerceFails_23, 0) = ((MR_Box) (CoerceFail_71));
                  MR_hl_field(1, CoerceFails_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                TypeAssign1_22 = STATE_VARIABLE_TypeAssign_0_28;
              }
            }
            else
            {
              MR_String Var_74 = ((MR_String) ((MR_hl_field(1, FromMaybeDuType_37, 0))));

              if (((MR_tag((MR_Word) ToMaybeDuType_38)) == (MR_Integer) 0))
              {
                MR_Word CoerceFail_69;

                {
                  CoerceFail_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, CoerceFail_69, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, CoerceFail_69, 1) = ((MR_Box) ((env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__FromType_20));
                  MR_hl_field(3, CoerceFail_69, 2) = ((MR_Box) (Var_74));
                  MR_hl_field(3, CoerceFail_69, 3) = ((MR_Box) (ToType_21));
                  MR_hl_field(3, CoerceFail_69, 4) = ((MR_Box) ((MR_String) ""));
                }
                {
                  CoerceFails_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, CoerceFails_23, 0) = ((MR_Box) (CoerceFail_69));
                  MR_hl_field(1, CoerceFails_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                TypeAssign1_22 = STATE_VARIABLE_TypeAssign_0_28;
              }
              else
              {
                MR_String ToTypeDesc_40 = ((MR_String) ((MR_hl_field(1, ToMaybeDuType_38, 0))));
                MR_Word CoerceFail_41;

                {
                  CoerceFail_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, CoerceFail_41, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, CoerceFail_41, 1) = ((MR_Box) ((env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__FromType_20));
                  MR_hl_field(3, CoerceFail_41, 2) = ((MR_Box) (Var_74));
                  MR_hl_field(3, CoerceFail_41, 3) = ((MR_Box) (ToType_21));
                  MR_hl_field(3, CoerceFail_41, 4) = ((MR_Box) (ToTypeDesc_40));
                }
                {
                  CoerceFails_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, CoerceFails_23, 0) = ((MR_Box) (CoerceFail_41));
                  MR_hl_field(1, CoerceFails_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                TypeAssign1_22 = STATE_VARIABLE_TypeAssign_0_28;
              }
            }
            if ((CoerceFails_23 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word TypeBindings1_24;
              MR_Word TypeA_88;
              MR_Word TypeB_89;
              MR_Word Var_90;
              MR_Word Var_91;

              check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign1_22, &TypeBindings1_24);
              parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_24, (env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__FromType_20, &TypeA_88);
              parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_24, ToType_21, &TypeB_89);
              Var_90 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(TypeA_88);
              Var_91 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(TypeB_89);
              (env).check_hlds__typecheck_coerce__check_coerce_constraint_if_ready_5_p_0_env_0__succeeded = parse_tree__prog_type_test____Unify____non_kinded_type_0_0(Var_90, Var_91);
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
              *STATE_VARIABLE_TypeAssign_29 = TypeAssign1_22;
            }
            else
            {
              MR_Word Coercion_34;

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
        (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[3]), ((MR_Box) (ToVar_10)), ((MR_Box) (FromVar_9)));
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
  MR_Word STATE_VARIABLE_TypeAssign_0_38,
  MR_Word * STATE_VARIABLE_TypeAssign_39,
  MR_Word * CoerceFails_13)
{
  MR_bool succeeded;
  MR_Word FromMaybeDuType_14;
  MR_Word ToMaybeDuType_15;

  check_hlds__typecheck_coerce__classify_is_du_type_3_p_0(TypeTable_8, FromType_10, &FromMaybeDuType_14);
  check_hlds__typecheck_coerce__classify_is_du_type_3_p_0(TypeTable_8, ToType_11, &ToMaybeDuType_15);
  if (((MR_tag((MR_Word) FromMaybeDuType_14)) == (MR_Integer) 0))
  {
    MR_Word Var_53 = (MR_Word) ((MR_Word) (FromMaybeDuType_14));

    if (((MR_tag((MR_Word) ToMaybeDuType_15)) == (MR_Integer) 0))
    {
      MR_Word ToDuTypeInfo_22 = (MR_Word) ((MR_Word) (ToMaybeDuType_15));
      MR_Word FromBaseTypeInfo_23;
      MR_Word ToBaseTypeInfo_24;
      MR_Word FromBaseTypeCtor_25;
      MR_Word FromBaseTypeArgTypes_26;
      MR_Word FromBaseTypeDefn_27;
      MR_Word FromBaseTypeBodyDu_28;
      MR_Word ToBaseTypeCtor_29;
      MR_Word ToBaseTypeArgTypes_30;
      MR_Word BaseTypeCtor_33;

      check_hlds__typecheck_coerce__compute_base_type_of_du_type_4_p_0(TypeTable_8, TVarSet_9, Var_53, &FromBaseTypeInfo_23);
      check_hlds__typecheck_coerce__compute_base_type_of_du_type_4_p_0(TypeTable_8, TVarSet_9, ToDuTypeInfo_22, &ToBaseTypeInfo_24);
      FromBaseTypeCtor_25 = ((MR_Word) ((MR_hl_field(0, FromBaseTypeInfo_23, 0))));
      FromBaseTypeArgTypes_26 = ((MR_Word) ((MR_hl_field(0, FromBaseTypeInfo_23, 1))));
      FromBaseTypeDefn_27 = ((MR_Word) ((MR_hl_field(0, FromBaseTypeInfo_23, 2))));
      FromBaseTypeBodyDu_28 = ((MR_Word) ((MR_hl_field(0, FromBaseTypeInfo_23, 3))));
      ToBaseTypeCtor_29 = ((MR_Word) ((MR_hl_field(0, ToBaseTypeInfo_24, 0))));
      ToBaseTypeArgTypes_30 = ((MR_Word) ((MR_hl_field(0, ToBaseTypeInfo_24, 1))));
      BaseTypeCtor_33 = FromBaseTypeCtor_25;
      succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(BaseTypeCtor_33, ToBaseTypeCtor_29);
      if (succeeded)
      {
        MR_Word BaseTypeParams_36;
        MR_Word InvariantTVars_37;
        MR_Word OoMCtors_56;
        MR_Word Ctors_62;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Box conv1_InvariantTVars_37;

        hlds__hlds_data__get_type_defn_tparams_2_p_0(FromBaseTypeDefn_27, &BaseTypeParams_36);
        OoMCtors_56 = ((MR_Word) ((MR_hl_field(0, FromBaseTypeBodyDu_28, 0))));
        Ctors_62 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_56);
        {
          Var_63 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_63, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_3[1]));
          MR_hl_field(0, Var_63, 1) = ((MR_Box) (check_hlds__typecheck_coerce__typecheck_coerce_between_types_7_p_0_1));
          MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_63, 3) = ((MR_Box) (TypeTable_8));
          MR_hl_field(0, Var_63, 4) = ((MR_Box) (BaseTypeCtor_33));
          MR_hl_field(0, Var_63, 5) = ((MR_Box) (BaseTypeParams_36));
        }
        Var_64 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]));
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]), Var_63, Ctors_62, ((MR_Box) (Var_64)), &conv1_InvariantTVars_37);
        InvariantTVars_37 = ((MR_Word) (conv1_InvariantTVars_37));
        check_hlds__typecheck_coerce__are_actual_param_type_pairs_as_related_as_needed_10_p_0(TypeTable_8, TVarSet_9, InvariantTVars_37, BaseTypeParams_36, FromBaseTypeArgTypes_26, ToBaseTypeArgTypes_30, STATE_VARIABLE_TypeAssign_0_38, STATE_VARIABLE_TypeAssign_39, (MR_Word) ((MR_Unsigned) 0U), CoerceFails_13);
      }
      else
      {
        MR_Word CoerceFail_52;

        {
          CoerceFail_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CoerceFail_52, 0) = ((MR_Box) (FromType_10));
          MR_hl_field(0, CoerceFail_52, 1) = ((MR_Box) (FromBaseTypeCtor_25));
          MR_hl_field(0, CoerceFail_52, 2) = ((MR_Box) (ToType_11));
          MR_hl_field(0, CoerceFail_52, 3) = ((MR_Box) (ToBaseTypeCtor_29));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *CoerceFails_13 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_52));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *STATE_VARIABLE_TypeAssign_39 = STATE_VARIABLE_TypeAssign_0_38;
      }
    }
    else
    {
      MR_String ToTypeDesc_50 = ((MR_String) ((MR_hl_field(1, ToMaybeDuType_15, 0))));
      MR_Word CoerceFail_51;

      {
        CoerceFail_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, CoerceFail_51, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, CoerceFail_51, 1) = ((MR_Box) (FromType_10));
        MR_hl_field(3, CoerceFail_51, 2) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(3, CoerceFail_51, 3) = ((MR_Box) (ToType_11));
        MR_hl_field(3, CoerceFail_51, 4) = ((MR_Box) (ToTypeDesc_50));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *CoerceFails_13 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_51));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_TypeAssign_39 = STATE_VARIABLE_TypeAssign_0_38;
    }
  }
  else
  {
    MR_String Var_54 = ((MR_String) ((MR_hl_field(1, FromMaybeDuType_14, 0))));

    if (((MR_tag((MR_Word) ToMaybeDuType_15)) == (MR_Integer) 0))
    {
      MR_Word CoerceFail_49;

      {
        CoerceFail_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, CoerceFail_49, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, CoerceFail_49, 1) = ((MR_Box) (FromType_10));
        MR_hl_field(3, CoerceFail_49, 2) = ((MR_Box) (Var_54));
        MR_hl_field(3, CoerceFail_49, 3) = ((MR_Box) (ToType_11));
        MR_hl_field(3, CoerceFail_49, 4) = ((MR_Box) ((MR_String) ""));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *CoerceFails_13 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_49));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_TypeAssign_39 = STATE_VARIABLE_TypeAssign_0_38;
    }
    else
    {
      MR_String ToTypeDesc_17 = ((MR_String) ((MR_hl_field(1, ToMaybeDuType_15, 0))));
      MR_Word CoerceFail_18;

      {
        CoerceFail_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, CoerceFail_18, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, CoerceFail_18, 1) = ((MR_Box) (FromType_10));
        MR_hl_field(3, CoerceFail_18, 2) = ((MR_Box) (Var_54));
        MR_hl_field(3, CoerceFail_18, 3) = ((MR_Box) (ToType_11));
        MR_hl_field(3, CoerceFail_18, 4) = ((MR_Box) (ToTypeDesc_17));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *CoerceFails_13 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_18));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_TypeAssign_39 = STATE_VARIABLE_TypeAssign_0_38;
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
        {
          succeeded = ((MR_tag((MR_Word) HeadFromArgType_21)) == (MR_Integer) 0);
          if (!(succeeded))
            succeeded = ((MR_tag((MR_Word) HeadToArgType_23)) == (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_TypeAssign_1_49;

            succeeded = check_hlds__typecheck_util__type_assign_unify_type_4_p_0(HeadFromArgType_21, HeadToArgType_23, STATE_VARIABLE_TypeAssign_0_25, &STATE_VARIABLE_TypeAssign_1_49);
            if (succeeded)
            {
              STATE_VARIABLE_TypeAssign_1_29 = STATE_VARIABLE_TypeAssign_1_49;
              STATE_VARIABLE_CoerceFails_1_30 = STATE_VARIABLE_CoerceFails_0_27;
            }
            else
            {
              MR_Word CoerceFail_48;

              {
                CoerceFail_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, CoerceFail_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, CoerceFail_48, 1) = ((MR_Box) (HeadFromArgType_21));
                MR_hl_field(3, CoerceFail_48, 2) = ((MR_Box) (HeadToArgType_23));
              }
              {
                STATE_VARIABLE_CoerceFails_1_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_CoerceFails_1_30, 0) = ((MR_Box) (CoerceFail_48));
                MR_hl_field(1, STATE_VARIABLE_CoerceFails_1_30, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_27));
              }
              STATE_VARIABLE_TypeAssign_1_29 = STATE_VARIABLE_TypeAssign_0_25;
            }
          }
          else
            switch (MR_tag((MR_Word) HeadFromArgType_21)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.types_compare_as_given_nonvar\'/9", (MR_String) "type_variable");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  succeeded = ((MR_tag((MR_Word) HeadToArgType_23)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    MR_Word TypeCtorA_60;
                    MR_Word ArgTypesA_61;
                    MR_Word TypeCtorB_62;
                    MR_Word ArgTypesB_63;

                    parse_tree__prog_type__defined_type_to_ctor_and_args_3_p_0(HeadFromArgType_21, &TypeCtorA_60, &ArgTypesA_61);
                    parse_tree__prog_type__defined_type_to_ctor_and_args_3_p_0(HeadToArgType_23, &TypeCtorB_62, &ArgTypesB_63);
                    succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_60, TypeCtorB_62);
                    if (succeeded)
                      check_hlds__typecheck_coerce__corresponding_types_compare_as_given_9_p_0(TypeTable_11, TVarSet_12, (MR_Integer) 0, ArgTypesA_61, ArgTypesB_63, STATE_VARIABLE_TypeAssign_0_25, &STATE_VARIABLE_TypeAssign_1_29, STATE_VARIABLE_CoerceFails_0_27, &STATE_VARIABLE_CoerceFails_1_30);
                    else
                    {
                      MR_Word CoerceFail_80;

                      {
                        CoerceFail_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, CoerceFail_80, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(3, CoerceFail_80, 1) = ((MR_Box) (HeadFromArgType_21));
                        MR_hl_field(3, CoerceFail_80, 2) = ((MR_Box) (HeadToArgType_23));
                      }
                      {
                        STATE_VARIABLE_CoerceFails_1_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_CoerceFails_1_30, 0) = ((MR_Box) (CoerceFail_80));
                        MR_hl_field(1, STATE_VARIABLE_CoerceFails_1_30, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_27));
                      }
                      STATE_VARIABLE_TypeAssign_1_29 = STATE_VARIABLE_TypeAssign_0_25;
                    }
                  }
                  else
                  {
                    MR_Word CoerceFail_82;

                    {
                      CoerceFail_82 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, CoerceFail_82, 0) = ((MR_Box) (HeadFromArgType_21));
                      MR_hl_field(2, CoerceFail_82, 1) = ((MR_Box) (HeadToArgType_23));
                    }
                    {
                      STATE_VARIABLE_CoerceFails_1_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, STATE_VARIABLE_CoerceFails_1_30, 0) = ((MR_Box) (CoerceFail_82));
                      MR_hl_field(1, STATE_VARIABLE_CoerceFails_1_30, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_27));
                    }
                    STATE_VARIABLE_TypeAssign_1_29 = STATE_VARIABLE_TypeAssign_0_25;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word BuiltinType_50 = ((MR_Word) ((MR_hl_field(2, HeadFromArgType_21, 0))));
                  MR_Word Var_91;

                  succeeded = ((MR_tag((MR_Word) HeadToArgType_23)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    Var_91 = ((MR_Word) ((MR_hl_field(2, HeadToArgType_23, 0))));
                    succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_50, Var_91);
                  }
                  if (succeeded)
                    STATE_VARIABLE_CoerceFails_1_30 = STATE_VARIABLE_CoerceFails_0_27;
                  else
                  {
                    MR_Word CoerceFail_51;

                    {
                      CoerceFail_51 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, CoerceFail_51, 0) = ((MR_Box) (HeadFromArgType_21));
                      MR_hl_field(2, CoerceFail_51, 1) = ((MR_Box) (HeadToArgType_23));
                    }
                    {
                      STATE_VARIABLE_CoerceFails_1_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, STATE_VARIABLE_CoerceFails_1_30, 0) = ((MR_Box) (CoerceFail_51));
                      MR_hl_field(1, STATE_VARIABLE_CoerceFails_1_30, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_27));
                    }
                  }
                  STATE_VARIABLE_TypeAssign_1_29 = STATE_VARIABLE_TypeAssign_0_25;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadFromArgType_21, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Kind_65 = ((MR_Word) ((MR_hl_field(3, HeadFromArgType_21, 2))));
                      MR_Word ArgTypesA_85 = ((MR_Word) ((MR_hl_field(3, HeadFromArgType_21, 1))));
                      MR_Word ArgTypesB_84;
                      MR_Word Var_92;

                      succeeded = ((((MR_tag((MR_Word) HeadToArgType_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadToArgType_23, 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        ArgTypesB_84 = ((MR_Word) ((MR_hl_field(3, HeadToArgType_23, 1))));
                        Var_92 = ((MR_Word) ((MR_hl_field(3, HeadToArgType_23, 2))));
                        succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_65, Var_92);
                      }
                      if (succeeded)
                        check_hlds__typecheck_coerce__corresponding_types_compare_as_given_9_p_0(TypeTable_11, TVarSet_12, (MR_Integer) 0, ArgTypesA_85, ArgTypesB_84, STATE_VARIABLE_TypeAssign_0_25, &STATE_VARIABLE_TypeAssign_1_29, STATE_VARIABLE_CoerceFails_0_27, &STATE_VARIABLE_CoerceFails_1_30);
                      else
                      {
                        MR_Word CoerceFail_83;

                        {
                          CoerceFail_83 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, CoerceFail_83, 0) = ((MR_Box) (HeadFromArgType_21));
                          MR_hl_field(2, CoerceFail_83, 1) = ((MR_Box) (HeadToArgType_23));
                        }
                        {
                          STATE_VARIABLE_CoerceFails_1_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, STATE_VARIABLE_CoerceFails_1_30, 0) = ((MR_Box) (CoerceFail_83));
                          MR_hl_field(1, STATE_VARIABLE_CoerceFails_1_30, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_27));
                        }
                        STATE_VARIABLE_TypeAssign_1_29 = STATE_VARIABLE_TypeAssign_0_25;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word PredOrFunc_66 = ((MR_Unsigned) ((MR_hl_field(3, HeadFromArgType_21, 1))) & (MR_Integer) 1);
                      MR_Word Purity_68 = ((MR_Unsigned) ((MR_hl_field(3, HeadFromArgType_21, 4))) & (MR_Integer) 3);
                      MR_Word ArgTypesA_88 = ((MR_Word) ((MR_hl_field(3, HeadFromArgType_21, 2))));
                      MR_Word ArgTypesB_87;
                      MR_Word Var_93;
                      MR_Word Var_94;

                      succeeded = ((((MR_tag((MR_Word) HeadToArgType_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadToArgType_23, 0)))) == (MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_93 = ((MR_Unsigned) ((MR_hl_field(3, HeadToArgType_23, 1))) & (MR_Integer) 1);
                        ArgTypesB_87 = ((MR_Word) ((MR_hl_field(3, HeadToArgType_23, 2))));
                        Var_94 = ((MR_Unsigned) ((MR_hl_field(3, HeadToArgType_23, 4))) & (MR_Integer) 3);
                        succeeded = (PredOrFunc_66 == Var_93);
                        if (succeeded)
                          succeeded = (Purity_68 == Var_94);
                      }
                      if (succeeded)
                        check_hlds__typecheck_coerce__corresponding_types_compare_as_given_9_p_0(TypeTable_11, TVarSet_12, (MR_Integer) 0, ArgTypesA_88, ArgTypesB_87, STATE_VARIABLE_TypeAssign_0_25, &STATE_VARIABLE_TypeAssign_1_29, STATE_VARIABLE_CoerceFails_0_27, &STATE_VARIABLE_CoerceFails_1_30);
                      else
                      {
                        MR_Word CoerceFail_86;

                        {
                          CoerceFail_86 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, CoerceFail_86, 0) = ((MR_Box) (HeadFromArgType_21));
                          MR_hl_field(2, CoerceFail_86, 1) = ((MR_Box) (HeadToArgType_23));
                        }
                        {
                          STATE_VARIABLE_CoerceFails_1_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, STATE_VARIABLE_CoerceFails_1_30, 0) = ((MR_Box) (CoerceFail_86));
                          MR_hl_field(1, STATE_VARIABLE_CoerceFails_1_30, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_27));
                        }
                        STATE_VARIABLE_TypeAssign_1_29 = STATE_VARIABLE_TypeAssign_0_25;
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
                      MR_Word TypeA1_74 = ((MR_Word) ((MR_hl_field(3, HeadFromArgType_21, 1))));
                      MR_Word Kind_90 = ((MR_Word) ((MR_hl_field(3, HeadFromArgType_21, 2))));
                      MR_Word TypeB1_75;
                      MR_Word Var_95;

                      succeeded = ((((MR_tag((MR_Word) HeadToArgType_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadToArgType_23, 0)))) == (MR_Integer) 3)));
                      if (succeeded)
                      {
                        TypeB1_75 = ((MR_Word) ((MR_hl_field(3, HeadToArgType_23, 1))));
                        Var_95 = ((MR_Word) ((MR_hl_field(3, HeadToArgType_23, 2))));
                        succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_90, Var_95);
                      }
                      if (succeeded)
                        check_hlds__typecheck_coerce__types_compare_as_given_9_p_0(TypeTable_11, TVarSet_12, (MR_Integer) 0, TypeA1_74, TypeB1_75, STATE_VARIABLE_TypeAssign_0_25, &STATE_VARIABLE_TypeAssign_1_29, STATE_VARIABLE_CoerceFails_0_27, &STATE_VARIABLE_CoerceFails_1_30);
                      else
                      {
                        MR_Word CoerceFail_89;

                        {
                          CoerceFail_89 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, CoerceFail_89, 0) = ((MR_Box) (HeadFromArgType_21));
                          MR_hl_field(2, CoerceFail_89, 1) = ((MR_Box) (HeadToArgType_23));
                        }
                        {
                          STATE_VARIABLE_CoerceFails_1_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, STATE_VARIABLE_CoerceFails_1_30, 0) = ((MR_Box) (CoerceFail_89));
                          MR_hl_field(1, STATE_VARIABLE_CoerceFails_1_30, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_27));
                        }
                        STATE_VARIABLE_TypeAssign_1_29 = STATE_VARIABLE_TypeAssign_0_25;
                      }
                    }
                    break;
                }
                break;
            }
        }
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
            check_hlds__typecheck_coerce__types_compare_as_given_9_p_0(TypeTable_11, TVarSet_12, (MR_Integer) 1, HeadToArgType_23, HeadFromArgType_21, STATE_VARIABLE_TypeAssign_0_25, &STATE_VARIABLE_TypeAssign_1_29, STATE_VARIABLE_CoerceFails_0_27, &STATE_VARIABLE_CoerceFails_1_30);
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
          MR_hl_field(3, CoerceFail_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
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
              MR_Word TypeCtorA_37;
              MR_Word ArgTypesA_38;
              MR_Word TypeCtorB_39;
              MR_Word ArgTypesB_40;

              parse_tree__prog_type__defined_type_to_ctor_and_args_3_p_0(TypeA_13, &TypeCtorA_37, &ArgTypesA_38);
              parse_tree__prog_type__defined_type_to_ctor_and_args_3_p_0(TypeB_14, &TypeCtorB_39, &ArgTypesB_40);
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_37, TypeCtorB_39);
              if (succeeded)
                check_hlds__typecheck_coerce__corresponding_types_compare_as_given_9_p_0(TypeTable_10, TVarSet_11, Comparison_12, ArgTypesA_38, ArgTypesB_40, STATE_VARIABLE_TypeAssign_0_22, STATE_VARIABLE_TypeAssign_23, STATE_VARIABLE_CoerceFails_0_24, STATE_VARIABLE_CoerceFails_25);
              else
                switch (Comparison_12) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word CoerceFail_57;

                      {
                        CoerceFail_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, CoerceFail_57, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(3, CoerceFail_57, 1) = ((MR_Box) (TypeA_13));
                        MR_hl_field(3, CoerceFail_57, 2) = ((MR_Box) (TypeB_14));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *STATE_VARIABLE_CoerceFails_25 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_57));
                        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_24));
                      }
                      *STATE_VARIABLE_TypeAssign_23 = STATE_VARIABLE_TypeAssign_0_22;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word SuperTypeA_41;

                      succeeded = hlds__type_util__get_supertype_5_p_0(TypeTable_10, TVarSet_11, TypeCtorA_37, ArgTypesA_38, &SuperTypeA_41);
                      if (succeeded)
                      {
                        MR_Word next_value_of_TypeA_13 = SuperTypeA_41;

                        // direct tailcall eliminated
                        ;
                        TypeA_13 = next_value_of_TypeA_13;
                        continue;
                      }
                      else
                      {
                        MR_Word CoerceFail_58;

                        {
                          CoerceFail_58 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, CoerceFail_58, 0) = ((MR_Box) (TypeA_13));
                          MR_hl_field(2, CoerceFail_58, 1) = ((MR_Box) (TypeB_14));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *STATE_VARIABLE_CoerceFails_25 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_58));
                          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_24));
                        }
                        *STATE_VARIABLE_TypeAssign_23 = STATE_VARIABLE_TypeAssign_0_22;
                      }
                    }
                    break;
                }
            }
            else
            {
              MR_Word CoerceFail_59;

              {
                CoerceFail_59 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, CoerceFail_59, 0) = ((MR_Box) (TypeA_13));
                MR_hl_field(2, CoerceFail_59, 1) = ((MR_Box) (TypeB_14));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_CoerceFails_25 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_59));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_24));
              }
              *STATE_VARIABLE_TypeAssign_23 = STATE_VARIABLE_TypeAssign_0_22;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BuiltinType_27 = ((MR_Word) ((MR_hl_field(2, TypeA_13, 0))));
            MR_Word Var_68;

            succeeded = ((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_68 = ((MR_Word) ((MR_hl_field(2, TypeB_14, 0))));
              succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_27, Var_68);
            }
            if (succeeded)
              *STATE_VARIABLE_CoerceFails_25 = STATE_VARIABLE_CoerceFails_0_24;
            else
            {
              MR_Word CoerceFail_28;

              {
                CoerceFail_28 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, CoerceFail_28, 0) = ((MR_Box) (TypeA_13));
                MR_hl_field(2, CoerceFail_28, 1) = ((MR_Box) (TypeB_14));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_CoerceFails_25 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_28));
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
                MR_Word Kind_42 = ((MR_Word) ((MR_hl_field(3, TypeA_13, 2))));
                MR_Word ArgTypesA_62 = ((MR_Word) ((MR_hl_field(3, TypeA_13, 1))));
                MR_Word ArgTypesB_61;
                MR_Word Var_69;

                succeeded = ((((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_14, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgTypesB_61 = ((MR_Word) ((MR_hl_field(3, TypeB_14, 1))));
                  Var_69 = ((MR_Word) ((MR_hl_field(3, TypeB_14, 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_42, Var_69);
                }
                if (succeeded)
                  check_hlds__typecheck_coerce__corresponding_types_compare_as_given_9_p_0(TypeTable_10, TVarSet_11, Comparison_12, ArgTypesA_62, ArgTypesB_61, STATE_VARIABLE_TypeAssign_0_22, STATE_VARIABLE_TypeAssign_23, STATE_VARIABLE_CoerceFails_0_24, STATE_VARIABLE_CoerceFails_25);
                else
                {
                  MR_Word CoerceFail_60;

                  {
                    CoerceFail_60 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, CoerceFail_60, 0) = ((MR_Box) (TypeA_13));
                    MR_hl_field(2, CoerceFail_60, 1) = ((MR_Box) (TypeB_14));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_CoerceFails_25 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_60));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_24));
                  }
                  *STATE_VARIABLE_TypeAssign_23 = STATE_VARIABLE_TypeAssign_0_22;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word PredOrFunc_43 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_13, 1))) & (MR_Integer) 1);
                MR_Word Purity_45 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_13, 4))) & (MR_Integer) 3);
                MR_Word ArgTypesA_65 = ((MR_Word) ((MR_hl_field(3, TypeA_13, 2))));
                MR_Word ArgTypesB_64;
                MR_Word Var_70;
                MR_Word Var_71;

                succeeded = ((((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_14, 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_70 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_14, 1))) & (MR_Integer) 1);
                  ArgTypesB_64 = ((MR_Word) ((MR_hl_field(3, TypeB_14, 2))));
                  Var_71 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_14, 4))) & (MR_Integer) 3);
                  succeeded = (PredOrFunc_43 == Var_70);
                  if (succeeded)
                    succeeded = (Purity_45 == Var_71);
                }
                if (succeeded)
                  check_hlds__typecheck_coerce__corresponding_types_compare_as_given_9_p_0(TypeTable_10, TVarSet_11, (MR_Integer) 0, ArgTypesA_65, ArgTypesB_64, STATE_VARIABLE_TypeAssign_0_22, STATE_VARIABLE_TypeAssign_23, STATE_VARIABLE_CoerceFails_0_24, STATE_VARIABLE_CoerceFails_25);
                else
                {
                  MR_Word CoerceFail_63;

                  {
                    CoerceFail_63 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, CoerceFail_63, 0) = ((MR_Box) (TypeA_13));
                    MR_hl_field(2, CoerceFail_63, 1) = ((MR_Box) (TypeB_14));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_CoerceFails_25 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_63));
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
                MR_Word TypeA1_51 = ((MR_Word) ((MR_hl_field(3, TypeA_13, 1))));
                MR_Word Kind_67 = ((MR_Word) ((MR_hl_field(3, TypeA_13, 2))));
                MR_Word TypeB1_52;
                MR_Word Var_72;

                succeeded = ((((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_14, 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  TypeB1_52 = ((MR_Word) ((MR_hl_field(3, TypeB_14, 1))));
                  Var_72 = ((MR_Word) ((MR_hl_field(3, TypeB_14, 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_67, Var_72);
                }
                if (succeeded)
                {
                  MR_Word next_value_of_TypeA_13 = TypeA1_51;
                  MR_Word next_value_of_TypeB_14 = TypeB1_52;

                  // direct tailcall eliminated
                  ;
                  TypeA_13 = next_value_of_TypeA_13;
                  TypeB_14 = next_value_of_TypeB_14;
                  continue;
                }
                else
                {
                  MR_Word CoerceFail_66;

                  {
                    CoerceFail_66 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, CoerceFail_66, 0) = ((MR_Box) (TypeA_13));
                    MR_hl_field(2, CoerceFail_66, 1) = ((MR_Box) (TypeB_14));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_CoerceFails_25 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_66));
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
check_hlds__typecheck_coerce__compute_base_type_of_du_type_4_p_0(
  MR_Word TypeTable_5,
  MR_Word TVarSet_6,
  MR_Word DuTypeInfo_7,
  MR_Word * BaseTypeInfo_8)
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
      *BaseTypeInfo_8 = DuTypeInfo_7;
    else
    {
      MR_Word SuperType0_14 = ((MR_Word) ((MR_hl_field(1, MaybeSuperType_13, 0))));
      MR_Word SuperType_15;
      MR_Word MaybeSuperDuType_16;
      MR_Word SuperDuTypeInfo_17;
      MR_Word next_value_of_DuTypeInfo_7;

      hlds__type_util__get_supertype_of_subtype_6_p_0(TVarSet_6, TypeCtor_9, ArgTypes_10, TypeDefn_11, SuperType0_14, &SuperType_15);
      check_hlds__typecheck_coerce__classify_is_du_type_3_p_0(TypeTable_5, SuperType_15, &MaybeSuperDuType_16);
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

static void MR_CALL 
check_hlds__typecheck_coerce__classify_is_du_type_3_p_0(
  MR_Word TypeTable_4,
  MR_Word Type_5,
  MR_Word * MaybeDuType_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *MaybeDuType_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_coerce_scalar_common_2[9]));
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(1, Type_5, 0))));
          MR_Word ArgTypes_10 = ((MR_Word) ((MR_hl_field(1, Type_5, 1))));
          MR_Integer Arity_12;
          MR_Word TypeCtor_13;
          MR_Word TypeDefn_14;

          mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_10, &Arity_12);
          {
            TypeCtor_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeCtor_13, 0) = ((MR_Box) (SymName_9));
            MR_hl_field(0, TypeCtor_13, 1) = ((MR_Box) (Arity_12));
          }
          succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_4, TypeCtor_13, &TypeDefn_14);
          if (succeeded)
          {
            MR_Word TypeBody_15;

            hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_14, &TypeBody_15);
            switch (MR_tag((MR_Word) TypeBody_15)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word TypeBodyDu_16 = (MR_Word) ((MR_Word) (TypeBody_15));
                  MR_Word DuType_17;

                  {
                    DuType_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, DuType_17, 0) = ((MR_Box) (TypeCtor_13));
                    MR_hl_field(0, DuType_17, 1) = ((MR_Box) (ArgTypes_10));
                    MR_hl_field(0, DuType_17, 2) = ((MR_Box) (TypeDefn_14));
                    MR_hl_field(0, DuType_17, 3) = ((MR_Box) (TypeBodyDu_16));
                  }
                  *MaybeDuType_6 = (MR_Word) ((MR_Word) (DuType_17));
                }
                break;
              case (MR_Integer) 1:
                *MaybeDuType_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_coerce_scalar_common_2[4]));
                break;
              case (MR_Integer) 2:
                *MaybeDuType_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_coerce_scalar_common_2[3]));
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, TypeBody_15, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *MaybeDuType_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_coerce_scalar_common_2[5]));
                    break;
                  case (MR_Integer) 1:
                    *MaybeDuType_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_coerce_scalar_common_2[2]));
                    break;
                }
                break;
            }
          }
          else
            *MaybeDuType_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_coerce_scalar_common_2[6]));
        }
        break;
      case (MR_Integer) 2:
        *MaybeDuType_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_coerce_scalar_common_2[1]));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type_5, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *MaybeDuType_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_coerce_scalar_common_2[8]));
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_25 = ((MR_Unsigned) ((MR_hl_field(3, Type_5, 1))) & (MR_Integer) 1);

              switch (PorF_25) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *MaybeDuType_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_coerce_scalar_common_2[0]));
                  break;
                case (MR_Integer) 0:
                  *MaybeDuType_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_coerce_scalar_common_2[7]));
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            *MaybeDuType_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_coerce_scalar_common_2[0]));
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubType_32 = ((MR_Word) ((MR_hl_field(3, Type_5, 1))));
              MR_Word next_value_of_Type_5 = SubType_32;

              // direct tailcall eliminated
              ;
              Type_5 = next_value_of_Type_5;
              continue;
            }
            break;
        }
        break;
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
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_4[0]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (check_hlds__typecheck_coerce__typecheck_prune_coerce_constraints_3_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (TypeTable_7));
  }
  mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), Var_13, TypeAssignSet0_5, &TypeAssignSet1_8);
  mercury__list__filter_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_6[0]), TypeAssignSet1_8, &SatisfiedTypeAssignSet_9, &UnsatisfiedTypeAssignSet_10);
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
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_3[0]));
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
check_hlds__typecheck_coerce____Unify____du_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_coerce____Unify____du_type_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____du_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_coerce____Compare____du_type_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
check_hlds__typecheck_coerce____Unify____maybe_du_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_coerce____Unify____maybe_du_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____maybe_du_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_coerce____Compare____maybe_du_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
  MR_register_type_ctor_info(&check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__type_ctor_info_du_type_info_0);
  MR_register_type_ctor_info(&check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__type_ctor_info_invariant_tvars_0);
  MR_register_type_ctor_info(&check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__type_ctor_info_maybe_du_type_0);
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
