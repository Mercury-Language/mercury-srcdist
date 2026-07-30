/*
** Automatically generated from `typecheck_coerce.m'
** by the Mercury compiler,
** version rotd-2026-07-30
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
#include "uint.mih"
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



struct check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0_s {
  MR_bool check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__succeeded;
  MR_Word check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__ExistQTVars0_44;
  MR_Word check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__FromType_46;
  jmp_buf check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__commit_0;
  MR_Word check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__TVar_58;
};

struct check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0_s {
  MR_bool check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded;
  MR_Word check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ExistQTVars0_15;
  MR_Word check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_18;
  MR_Word check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_21;
  jmp_buf check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__commit_0;
  MR_Word check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__TVar_40;
  jmp_buf check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__commit_1;
  MR_Word check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__TVar_42;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_coerce__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_coerce__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_coerce__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_coerce__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_coerce__one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_coerce__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_check_coerce_constraint_action_0_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__field_types_check_coerce_constraint_action_0_1[1];

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_check_coerce_constraint_action_0_1;

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_check_coerce_constraint_action_0_2;

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_check_coerce_constraint_action_0_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_check_coerce_constraint_action_0_1[1];

static const MR_DuPtagLayout check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_ptag_ordered_check_coerce_constraint_action_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_name_ordered_check_coerce_constraint_action_0[3];

static const MR_Integer check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__functor_number_map_check_coerce_constraint_action_0[3];

static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_coerce__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__field_types_types_comparison_0_0[1];

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_types_comparison_0_0;

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_types_comparison_0_1;

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_types_comparison_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_types_comparison_0_1[1];

static const MR_DuPtagLayout check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_ptag_ordered_types_comparison_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_name_ordered_types_comparison_0[2];

static const MR_Integer check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__functor_number_map_types_comparison_0[2];

static void MR_CALL 
check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__649__1_4_p_0(
  MR_Word CtorArgPosn_79,
  MR_Word HeadVar__2_106,
  MR_Word HeadVar__3_107,
  MR_Word * HeadVar__4_108);

static void MR_CALL 
check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__601__1_4_p_0(
  MR_Word CtorArgPosn_29,
  MR_Word HeadVar__2_83,
  MR_Word HeadVar__3_84,
  MR_Word * HeadVar__4_85);

static void MR_CALL 
check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__611__3_4_p_0(
  MR_Word CtorArgPosn_139,
  MR_Word HeadVar__2_130,
  MR_Word HeadVar__3_131,
  MR_Word * HeadVar__4_132);

static void MR_CALL 
check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__611__2_4_p_0(
  MR_Word CtorArgPosn_124,
  MR_Word HeadVar__2_115,
  MR_Word HeadVar__3_116,
  MR_Word * HeadVar__4_117);

static void MR_CALL 
check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__611__1_4_p_0(
  MR_Word CtorArgPosn_72,
  MR_Word HeadVar__2_90,
  MR_Word HeadVar__3_91,
  MR_Word * HeadVar__4_92);

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
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_9_p_0(
  MR_Word TypeTable_10,
  MR_Word BaseTypeCtor_11,
  MR_Word BaseTypeCtorParams_12,
  MR_Word DuCtor_13,
  MR_Word CtorArg_14,
  MR_Unsigned STATE_VARIABLE_ArgNum_0_20,
  MR_Unsigned * STATE_VARIABLE_ArgNum_21,
  MR_Word STATE_VARIABLE_InvariantTVars_0_22,
  MR_Word * STATE_VARIABLE_InvariantTVars_23);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0(
  MR_Word TypeTable_10,
  MR_Word BaseTypeCtor_11,
  MR_Word BaseTypeCtorParams_12,
  MR_Word ConsId_13,
  MR_Word CtorArgType_14,
  MR_Unsigned STATE_VARIABLE_ArgNum_0_49,
  MR_Unsigned * STATE_VARIABLE_ArgNum_50,
  MR_Word STATE_VARIABLE_InvariantTVars_0_51,
  MR_Word * STATE_VARIABLE_InvariantTVars_52);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_6_p_0(
  MR_Word TypeTable_7,
  MR_Word BaseTypeCtor_8,
  MR_Word BaseTypeCtorParams_9,
  MR_Word Ctor_10,
  MR_Word STATE_VARIABLE_InvariantTVars_0_21,
  MR_Word * STATE_VARIABLE_InvariantTVars_22);

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
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_3(
  void * env_ptr_arg);

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
  MR_Word STATE_VARIABLE_TypeAssign_0_36,
  MR_Word * STATE_VARIABLE_TypeAssign_37,
  MR_Word * CoerceFails_13);

static void MR_CALL 
check_hlds__typecheck_coerce__are_actual_param_type_pairs_as_related_as_needed_13_p_0(
  MR_Word TypeTable_14,
  MR_Word TVarSet_15,
  MR_Word InvariantTVars_16,
  MR_Word BaseTypeCtor_17,
  MR_Word BaseTypeCtorParams_18,
  MR_Word FromArgTypes_19,
  MR_Word ToArgTypes_20,
  MR_Unsigned STATE_VARIABLE_ArgNum_0_30,
  MR_Unsigned * STATE_VARIABLE_ArgNum_31,
  MR_Word STATE_VARIABLE_TypeAssign_0_32,
  MR_Word * STATE_VARIABLE_TypeAssign_33,
  MR_Word STATE_VARIABLE_CoerceFails_0_34,
  MR_Word * STATE_VARIABLE_CoerceFails_35);

static void MR_CALL 
check_hlds__typecheck_coerce__types_compare_as_given_11_p_0(
  MR_Word tscc_proc_1_input_1_TypeTable_12,
  MR_Word tscc_proc_1_input_2_TVarSet_13,
  MR_Word tscc_proc_1_input_3_BaseTypeCtor_14,
  MR_Unsigned tscc_proc_1_input_4_ArgNum_15,
  MR_Word tscc_proc_1_input_5_Comparison_16,
  MR_Word tscc_proc_1_input_6_TypeA_17,
  MR_Word tscc_proc_1_input_7_TypeB_18,
  MR_Word tscc_proc_1_input_8_STATE_VARIABLE_TypeAssign_0_26,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_TypeAssign_27,
  MR_Word tscc_proc_1_input_9_STATE_VARIABLE_CoerceFails_0_28,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_CoerceFails_29);

static void MR_CALL 
check_hlds__typecheck_coerce__types_compare_as_given_nonvar_11_p_0(
  MR_Word tscc_proc_2_input_1_TypeTable_12,
  MR_Word tscc_proc_2_input_2_TVarSet_13,
  MR_Word tscc_proc_2_input_3_BaseTypeCtor_14,
  MR_Unsigned tscc_proc_2_input_4_ArgNum_15,
  MR_Word tscc_proc_2_input_5_Comparison_16,
  MR_Word tscc_proc_2_input_6_TypeA_17,
  MR_Word tscc_proc_2_input_7_TypeB_18,
  MR_Word tscc_proc_2_input_8_STATE_VARIABLE_TypeAssign_0_62,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_TypeAssign_27,
  MR_Word tscc_proc_2_input_9_STATE_VARIABLE_CoerceFails_0_64,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_CoerceFails_29);

static void MR_CALL 
check_hlds__typecheck_coerce__corresponding_types_compare_as_given_11_p_0(
  MR_Word TypeTable_1,
  MR_Word TVarSet_2,
  MR_Word BaseTypeCtor_3,
  MR_Unsigned ArgNum_4,
  MR_Word Comparison_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_TypeAssign_0_8,
  MR_Word * STATE_VARIABLE_TypeAssign_9,
  MR_Word STATE_VARIABLE_CoerceFails_0_10,
  MR_Word * STATE_VARIABLE_CoerceFails_11);

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

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_2[4][3];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_3[1][1];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_4[2][9];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_5[1][6];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_6[2][4];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_7[1][5];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_8[2][12];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_9[1][7];




static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0))
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

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_2[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_6[0])),
    ((MR_Box) (check_hlds__typecheck_coerce__typecheck_prune_coerce_constraints_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_7[0])),
    ((MR_Box) (check_hlds__typecheck_coerce__check_pending_coerce_constraints_to_fixpoint_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_6[1])),
    ((MR_Box) (check_hlds__typecheck_coerce__type_assign_has_only_satisfied_coerce_constraints_1_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_3[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_4[2][9] = {
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
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_5[1][6] = {
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

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_6[2][4] = {
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

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_8[2][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_du_or_tuple_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_du_or_tuple_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_9[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0))
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

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_coerce__one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__typecheck_coerce__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__typecheck_coerce__one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_coerce__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
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

static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_coerce__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__typecheck_coerce__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&check_hlds__typecheck_coerce__one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0)
  }
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
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck_coerce__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__field_types_types_comparison_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_invariant_reason_0) };

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_types_comparison_0_0 = {
  (MR_String) "compare_equal",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__field_types_types_comparison_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_types_comparison_0_1 = {
  (MR_String) "compare_equal_lt",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_types_comparison_0_0[1] = { &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_types_comparison_0_1 };

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_types_comparison_0_1[1] = { &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_types_comparison_0_0 };

static const MR_DuPtagLayout check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_ptag_ordered_types_comparison_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_types_comparison_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_types_comparison_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_name_ordered_types_comparison_0[2] = {
  &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_types_comparison_0_0,
  &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_types_comparison_0_1
};

static const MR_Integer check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__functor_number_map_types_comparison_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__type_ctor_info_types_comparison_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_coerce____Unify____types_comparison_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_coerce____Compare____types_comparison_0_0_10001)),
  (MR_String) "check_hlds.typecheck_coerce",
  (MR_String) "types_comparison",
  { check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_name_ordered_types_comparison_0 },
  { check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_ptag_ordered_types_comparison_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__functor_number_map_types_comparison_0,

};

static void MR_CALL 
check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__649__1_4_p_0(
  MR_Word CtorArgPosn_79,
  MR_Word HeadVar__2_106,
  MR_Word HeadVar__3_107,
  MR_Word * HeadVar__4_108)
{
  mercury__one_or_more_map__reverse_add_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), ((MR_Box) (CtorArgPosn_79)), ((MR_Box) (HeadVar__2_106)), HeadVar__3_107, HeadVar__4_108);
}

static void MR_CALL 
check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__601__1_4_p_0(
  MR_Word CtorArgPosn_29,
  MR_Word HeadVar__2_83,
  MR_Word HeadVar__3_84,
  MR_Word * HeadVar__4_85)
{
  mercury__one_or_more_map__reverse_add_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), ((MR_Box) (CtorArgPosn_29)), ((MR_Box) (HeadVar__2_83)), HeadVar__3_84, HeadVar__4_85);
}

static void MR_CALL 
check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__611__3_4_p_0(
  MR_Word CtorArgPosn_139,
  MR_Word HeadVar__2_130,
  MR_Word HeadVar__3_131,
  MR_Word * HeadVar__4_132)
{
  mercury__one_or_more_map__reverse_add_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), ((MR_Box) (CtorArgPosn_139)), ((MR_Box) (HeadVar__2_130)), HeadVar__3_131, HeadVar__4_132);
}

static void MR_CALL 
check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__611__2_4_p_0(
  MR_Word CtorArgPosn_124,
  MR_Word HeadVar__2_115,
  MR_Word HeadVar__3_116,
  MR_Word * HeadVar__4_117)
{
  mercury__one_or_more_map__reverse_add_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), ((MR_Box) (CtorArgPosn_124)), ((MR_Box) (HeadVar__2_115)), HeadVar__3_116, HeadVar__4_117);
}

static void MR_CALL 
check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__611__1_4_p_0(
  MR_Word CtorArgPosn_72,
  MR_Word HeadVar__2_90,
  MR_Word HeadVar__3_91,
  MR_Word * HeadVar__4_92)
{
  mercury__one_or_more_map__reverse_add_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), ((MR_Box) (CtorArgPosn_72)), ((MR_Box) (HeadVar__2_90)), HeadVar__3_91, HeadVar__4_92);
}

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____types_comparison_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    check_hlds__type_assign____Compare____invariant_reason_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____types_comparison_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = check_hlds__type_assign____Unify____invariant_reason_0_0(ArgX1_3, ArgY1_4);
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

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____invariant_tvars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_9_p_0(
  MR_Word TypeTable_10,
  MR_Word BaseTypeCtor_11,
  MR_Word BaseTypeCtorParams_12,
  MR_Word DuCtor_13,
  MR_Word CtorArg_14,
  MR_Unsigned STATE_VARIABLE_ArgNum_0_20,
  MR_Unsigned * STATE_VARIABLE_ArgNum_21,
  MR_Word STATE_VARIABLE_InvariantTVars_0_22,
  MR_Word * STATE_VARIABLE_InvariantTVars_23)
{
  MR_Word CtorArgType_18 = ((MR_Word) ((MR_hl_field(0, CtorArg_14, 1))));

  check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0(TypeTable_10, BaseTypeCtor_11, BaseTypeCtorParams_12, DuCtor_13, CtorArgType_18, STATE_VARIABLE_ArgNum_0_20, STATE_VARIABLE_ArgNum_21, STATE_VARIABLE_InvariantTVars_0_22, STATE_VARIABLE_InvariantTVars_23);
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Unsigned conv11_STATE_VARIABLE_ArgNum_50;
  MR_Word conv10_STATE_VARIABLE_InvariantTVars_52;

  check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Unsigned) (wrapper_arg_2)), &conv11_STATE_VARIABLE_ArgNum_50, ((MR_Word) (wrapper_arg_4)), &conv10_STATE_VARIABLE_InvariantTVars_52);
  *wrapper_arg_3 = ((MR_Box) (conv11_STATE_VARIABLE_ArgNum_50));
  *wrapper_arg_5 = ((MR_Box) (conv10_STATE_VARIABLE_InvariantTVars_52));
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__4_108;

  check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__649__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_HeadVar__4_108);
  *wrapper_arg_3 = ((MR_Box) (conv8_HeadVar__4_108));
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__4_85;

  check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__601__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__4_85);
  *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__4_85));
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__4_132;

  check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__611__3_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__4_132);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__4_132));
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__4_117;

  check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__611__2_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__4_117);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_117));
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_92;

  check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__611__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_92);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_92));
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0(
  MR_Word TypeTable_10,
  MR_Word BaseTypeCtor_11,
  MR_Word BaseTypeCtorParams_12,
  MR_Word ConsId_13,
  MR_Word CtorArgType_14,
  MR_Unsigned STATE_VARIABLE_ArgNum_0_49,
  MR_Unsigned * STATE_VARIABLE_ArgNum_50,
  MR_Word STATE_VARIABLE_InvariantTVars_0_51,
  MR_Word * STATE_VARIABLE_InvariantTVars_52)
{
  MR_bool succeeded;
  MR_Unsigned STATE_VARIABLE_ArgNum_1_66;

  switch (MR_tag((MR_Word) CtorArgType_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_ArgNum_1_66 = STATE_VARIABLE_ArgNum_0_49;
        *STATE_VARIABLE_InvariantTVars_52 = STATE_VARIABLE_InvariantTVars_0_51;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName_20 = ((MR_Word) ((MR_hl_field(1, CtorArgType_14, 0))));
        MR_Word ArgTypes_21 = ((MR_Word) ((MR_hl_field(1, CtorArgType_14, 1))));
        MR_Integer NumArgTypes_22;
        MR_Word TypeCtor_23;
        MR_Word TypeDefn_24;
        MR_Word TypeBody_25;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_21, &NumArgTypes_22);
        {
          TypeCtor_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtor_23, 0) = ((MR_Box) (SymName_20));
          MR_hl_field(0, TypeCtor_23, 1) = ((MR_Box) (NumArgTypes_22));
        }
        hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_10, TypeCtor_23, &TypeDefn_24);
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_24, &TypeBody_25);
        switch (MR_tag((MR_Word) TypeBody_25)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_114_114;
              MR_Word ArgTypeVars_27;

              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_23, BaseTypeCtor_11);
              if (succeeded)
              {
                succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(ArgTypes_21, &ArgTypeVars_27);
                if (succeeded)
                {
                  TypeInfo_114_114 = (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_114_114, ((MR_Box) (ArgTypeVars_27)), ((MR_Box) (BaseTypeCtorParams_12)));
                }
              }
              if (succeeded)
                *STATE_VARIABLE_InvariantTVars_52 = STATE_VARIABLE_InvariantTVars_0_51;
              else
              {
                MR_Word PosnReason_28;
                MR_Word CtorArgPosn_29;
                MR_Word TypeVars_30;
                MR_Word Var_53;
                MR_Box conv7_STATE_VARIABLE_InvariantTVars_52;

                {
                  PosnReason_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, PosnReason_28, 0) = ((MR_Box) (BaseTypeCtor_11));
                  MR_hl_field(1, PosnReason_28, 1) = ((MR_Box) (TypeCtor_23));
                }
                {
                  CtorArgPosn_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, CtorArgPosn_29, 0) = ((MR_Box) (ConsId_13));
                  MR_hl_field(0, CtorArgPosn_29, 1) = ((MR_Box) (STATE_VARIABLE_ArgNum_0_49));
                  MR_hl_field(0, CtorArgPosn_29, 2) = ((MR_Box) (PosnReason_28));
                }
                parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_21, &TypeVars_30);
                {
                  Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_53, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_9[0]));
                  MR_hl_field(0, Var_53, 1) = ((MR_Box) (check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0_4));
                  MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_53, 3) = ((MR_Box) (CtorArgPosn_29));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]), Var_53, TypeVars_30, ((MR_Box) (STATE_VARIABLE_InvariantTVars_0_51)), &conv7_STATE_VARIABLE_InvariantTVars_52);
                *STATE_VARIABLE_InvariantTVars_52 = ((MR_Word) (conv7_STATE_VARIABLE_InvariantTVars_52));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_122;
              MR_Word CtorArgPosn_124;
              MR_Word TypeVars_125;
              MR_Box conv3_STATE_VARIABLE_InvariantTVars_52;

              {
                CtorArgPosn_124 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, CtorArgPosn_124, 0) = ((MR_Box) (ConsId_13));
                MR_hl_field(0, CtorArgPosn_124, 1) = ((MR_Box) (STATE_VARIABLE_ArgNum_0_49));
                MR_hl_field(0, CtorArgPosn_124, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_21, &TypeVars_125);
              {
                Var_122 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_122, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_9[0]));
                MR_hl_field(0, Var_122, 1) = ((MR_Box) (check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0_2));
                MR_hl_field(0, Var_122, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_122, 3) = ((MR_Box) (CtorArgPosn_124));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]), Var_122, TypeVars_125, ((MR_Box) (STATE_VARIABLE_InvariantTVars_0_51)), &conv3_STATE_VARIABLE_InvariantTVars_52);
              *STATE_VARIABLE_InvariantTVars_52 = ((MR_Word) (conv3_STATE_VARIABLE_InvariantTVars_52));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word EqvType0_34 = ((MR_Word) ((MR_hl_field(2, TypeBody_25, 0))));
              MR_Word TypeParams_35;
              MR_Word TSubst_36;
              MR_Word EqvType_37;
              MR_Unsigned Var_38;

              hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_24, &TypeParams_35);
              mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_35, ArgTypes_21, &TSubst_36);
              parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(TSubst_36, EqvType0_34, &EqvType_37);
              check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0(TypeTable_10, BaseTypeCtor_11, BaseTypeCtorParams_12, ConsId_13, EqvType_37, STATE_VARIABLE_ArgNum_0_49, &Var_38, STATE_VARIABLE_InvariantTVars_0_51, STATE_VARIABLE_InvariantTVars_52);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, TypeBody_25, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_137;
                  MR_Word CtorArgPosn_139;
                  MR_Word TypeVars_140;
                  MR_Box conv5_STATE_VARIABLE_InvariantTVars_52;

                  {
                    CtorArgPosn_139 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, CtorArgPosn_139, 0) = ((MR_Box) (ConsId_13));
                    MR_hl_field(0, CtorArgPosn_139, 1) = ((MR_Box) (STATE_VARIABLE_ArgNum_0_49));
                    MR_hl_field(0, CtorArgPosn_139, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                  }
                  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_21, &TypeVars_140);
                  {
                    Var_137 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_137, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_9[0]));
                    MR_hl_field(0, Var_137, 1) = ((MR_Box) (check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0_3));
                    MR_hl_field(0, Var_137, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_137, 3) = ((MR_Box) (CtorArgPosn_139));
                  }
                  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]), Var_137, TypeVars_140, ((MR_Box) (STATE_VARIABLE_InvariantTVars_0_51)), &conv5_STATE_VARIABLE_InvariantTVars_52);
                  *STATE_VARIABLE_InvariantTVars_52 = ((MR_Word) (conv5_STATE_VARIABLE_InvariantTVars_52));
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_55;
                  MR_Word CtorArgPosn_72;
                  MR_Word TypeVars_73;
                  MR_Box conv1_STATE_VARIABLE_InvariantTVars_52;

                  {
                    CtorArgPosn_72 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, CtorArgPosn_72, 0) = ((MR_Box) (ConsId_13));
                    MR_hl_field(0, CtorArgPosn_72, 1) = ((MR_Box) (STATE_VARIABLE_ArgNum_0_49));
                    MR_hl_field(0, CtorArgPosn_72, 2) = ((MR_Box) ((MR_Unsigned) 8U));
                  }
                  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_21, &TypeVars_73);
                  {
                    Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_55, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_9[0]));
                    MR_hl_field(0, Var_55, 1) = ((MR_Box) (check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0_1));
                    MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_55, 3) = ((MR_Box) (CtorArgPosn_72));
                  }
                  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]), Var_55, TypeVars_73, ((MR_Box) (STATE_VARIABLE_InvariantTVars_0_51)), &conv1_STATE_VARIABLE_InvariantTVars_52);
                  *STATE_VARIABLE_InvariantTVars_52 = ((MR_Word) (conv1_STATE_VARIABLE_InvariantTVars_52));
                }
                break;
            }
            break;
        }
        STATE_VARIABLE_ArgNum_1_66 = STATE_VARIABLE_ArgNum_0_49;
      }
      break;
    case (MR_Integer) 2:
      {
        STATE_VARIABLE_ArgNum_1_66 = STATE_VARIABLE_ArgNum_0_49;
        *STATE_VARIABLE_InvariantTVars_52 = STATE_VARIABLE_InvariantTVars_0_51;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, CtorArgType_14, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Arity_39;
            MR_Word TupleCtor_40;
            MR_Word Var_58;
            MR_Word ArgTypes_77 = ((MR_Word) ((MR_hl_field(3, CtorArgType_14, 1))));
            MR_Box conv13_Var_41;
            MR_Box conv12_STATE_VARIABLE_InvariantTVars_52;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_77, &Arity_39);
            {
              TupleCtor_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, TupleCtor_40, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, TupleCtor_40, 1) = ((MR_Box) (Arity_39));
            }
            {
              Var_58 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_58, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_8[1]));
              MR_hl_field(0, Var_58, 1) = ((MR_Box) (check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0_6));
              MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(0, Var_58, 3) = ((MR_Box) (TypeTable_10));
              MR_hl_field(0, Var_58, 4) = ((MR_Box) (BaseTypeCtor_11));
              MR_hl_field(0, Var_58, 5) = ((MR_Box) (BaseTypeCtorParams_12));
              MR_hl_field(0, Var_58, 6) = ((MR_Box) (TupleCtor_40));
            }
            mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]), Var_58, ArgTypes_77, ((MR_Box) ((MR_Unsigned) 1U)), &conv13_Var_41, ((MR_Box) (STATE_VARIABLE_InvariantTVars_0_51)), &conv12_STATE_VARIABLE_InvariantTVars_52);
            *STATE_VARIABLE_InvariantTVars_52 = ((MR_Word) (conv12_STATE_VARIABLE_InvariantTVars_52));
            STATE_VARIABLE_ArgNum_1_66 = STATE_VARIABLE_ArgNum_0_49;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_62;
            MR_Word ArgTypes_78 = ((MR_Word) ((MR_hl_field(3, CtorArgType_14, 2))));
            MR_Word CtorArgPosn_79;
            MR_Word TypeVars_80;
            MR_Box conv9_STATE_VARIABLE_InvariantTVars_52;

            {
              CtorArgPosn_79 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, CtorArgPosn_79, 0) = ((MR_Box) (ConsId_13));
              MR_hl_field(0, CtorArgPosn_79, 1) = ((MR_Box) (STATE_VARIABLE_ArgNum_0_49));
              MR_hl_field(0, CtorArgPosn_79, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            }
            parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_78, &TypeVars_80);
            {
              Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_62, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_9[0]));
              MR_hl_field(0, Var_62, 1) = ((MR_Box) (check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0_5));
              MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_62, 3) = ((MR_Box) (CtorArgPosn_79));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]), Var_62, TypeVars_80, ((MR_Box) (STATE_VARIABLE_InvariantTVars_0_51)), &conv9_STATE_VARIABLE_InvariantTVars_52);
            *STATE_VARIABLE_InvariantTVars_52 = ((MR_Word) (conv9_STATE_VARIABLE_InvariantTVars_52));
            STATE_VARIABLE_ArgNum_1_66 = STATE_VARIABLE_ArgNum_0_49;
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.acc_invariant_tvars_in_ctor_arg_type\'/9", (MR_String) "apply_n_type");
            return;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubCtorArgType_48 = ((MR_Word) ((MR_hl_field(3, CtorArgType_14, 1))));

            check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_9_p_0(TypeTable_10, BaseTypeCtor_11, BaseTypeCtorParams_12, ConsId_13, SubCtorArgType_48, STATE_VARIABLE_ArgNum_0_49, &STATE_VARIABLE_ArgNum_1_66, STATE_VARIABLE_InvariantTVars_0_51, STATE_VARIABLE_InvariantTVars_52);
          }
          break;
      }
      break;
  }
  *STATE_VARIABLE_ArgNum_50 = (STATE_VARIABLE_ArgNum_1_66 + (MR_Unsigned) 1U);
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Unsigned conv1_STATE_VARIABLE_ArgNum_21;
  MR_Word conv0_STATE_VARIABLE_InvariantTVars_23;

  check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Unsigned) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ArgNum_21, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_InvariantTVars_23);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ArgNum_21));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_InvariantTVars_23));
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_6_p_0(
  MR_Word TypeTable_7,
  MR_Word BaseTypeCtor_8,
  MR_Word BaseTypeCtorParams_9,
  MR_Word Ctor_10,
  MR_Word STATE_VARIABLE_InvariantTVars_0_21,
  MR_Word * STATE_VARIABLE_InvariantTVars_22)
{
  MR_Word CtorSymName_14 = ((MR_Word) ((MR_hl_field(0, Ctor_10, 2))));
  MR_Word CtorArgs_15 = ((MR_Word) ((MR_hl_field(0, Ctor_10, 3))));
  MR_Integer Arity_16 = ((MR_Integer) ((MR_hl_field(0, Ctor_10, 4))));
  MR_Word DuCtor_18;
  MR_Word ConsId_19;
  MR_Word Var_23;
  MR_Box conv3_Var_20;
  MR_Box conv2_STATE_VARIABLE_InvariantTVars_22;

  {
    DuCtor_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DuCtor_18, 0) = ((MR_Box) (CtorSymName_14));
    MR_hl_field(0, DuCtor_18, 1) = ((MR_Box) (Arity_16));
    MR_hl_field(0, DuCtor_18, 2) = ((MR_Box) (BaseTypeCtor_8));
  }
  ConsId_19 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_18)));
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_8[0]));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_6_p_0_1));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (TypeTable_7));
    MR_hl_field(0, Var_23, 4) = ((MR_Box) (BaseTypeCtor_8));
    MR_hl_field(0, Var_23, 5) = ((MR_Box) (BaseTypeCtorParams_9));
    MR_hl_field(0, Var_23, 6) = ((MR_Box) (ConsId_19));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]), Var_23, CtorArgs_15, ((MR_Box) ((MR_Unsigned) 1U)), &conv3_Var_20, ((MR_Box) (STATE_VARIABLE_InvariantTVars_0_21)), &conv2_STATE_VARIABLE_InvariantTVars_22);
  *STATE_VARIABLE_InvariantTVars_22 = ((MR_Word) (conv2_STATE_VARIABLE_InvariantTVars_22));
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
  succeeded = mercury__list__all_true_2_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[3]), Coercions_3);
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
        mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[2]), DelayedCoercions_11, Coercions_8);
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
check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0_s *) (env_ptr_arg);

  {
    (env_ptr)->check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__succeeded = mercury__list__contains_2_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (env_ptr)->check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__ExistQTVars0_44, ((MR_Box) ((env_ptr)->check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__TVar_58)));
    (env_ptr)->check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__succeeded = !((env_ptr)->check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__succeeded);
    if ((env_ptr)->check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__succeeded)
      check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__commit_0) == 0)
    {
      parse_tree__prog_type_scan__type_contains_var_2_p_0((env_ptr)->check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__FromType_46, &(env_ptr)->check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__TVar_58, check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_2, env_ptr);
      (env_ptr)->check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__succeeded = MR_TRUE;
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
  struct check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0_s env;

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
      MR_Word FromType0_36 = ((MR_Word) ((MR_hl_field(0, Coercion0_17, 0))));
      MR_Word ToType0_37 = ((MR_Word) ((MR_hl_field(0, Coercion0_17, 1))));
      MR_Word Context_38 = ((MR_Word) ((MR_hl_field(0, Coercion0_17, 2))));
      MR_Word FromVar_39 = ((MR_Word) ((MR_hl_field(0, Coercion0_17, 3))));
      MR_Word Status0_40 = ((MR_Unsigned) ((MR_hl_field(0, Coercion0_17, 4))) & (MR_Integer) 3);
      MR_Word _CoerceFails0_41;
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Coercion0_17, 4)));

      switch (Status0_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TVarSet0_43;
            MR_Word TypeBindings0_45;
            MR_Word ToType_47;

            check_hlds__type_assign__type_assign_get_typevarset_2_p_0(STATE_VARIABLE_TypeAssign_0_5, &TVarSet0_43);
            check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(STATE_VARIABLE_TypeAssign_0_5, &(env).check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__ExistQTVars0_44);
            check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(STATE_VARIABLE_TypeAssign_0_5, &TypeBindings0_45);
            parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings0_45, FromType0_36, &(env).check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__FromType_46);
            parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings0_45, ToType0_37, &ToType_47);
            check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_3(&env);
            (env).check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__succeeded = !((env).check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__succeeded);
            if ((env).check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__succeeded)
            {
              MR_Word TypeAssign1_48;
              MR_Word CoerceFails_49;

              check_hlds__typecheck_coerce__typecheck_coerce_between_types_7_p_0(HeadVar__1_1, TVarSet0_43, (env).check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__FromType_46, ToType_47, STATE_VARIABLE_TypeAssign_0_5, &TypeAssign1_48, &CoerceFails_49);
              if ((CoerceFails_49 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word TypeBindings1_50;
                MR_Word TypeA_60;
                MR_Word TypeB_61;
                MR_Word Var_62;
                MR_Word Var_63;

                check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign1_48, &TypeBindings1_50);
                parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_50, (env).check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__FromType_46, &TypeA_60);
                parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_50, ToType_47, &TypeB_61);
                Var_62 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(TypeA_60);
                Var_63 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(TypeB_61);
                (env).check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__succeeded = parse_tree__prog_type_test____Unify____non_kinded_type_0_0(Var_62, Var_63);
                if ((env).check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__succeeded)
                {
                  MR_Word Coercion_24;
                  MR_Word TailKeepCoercions_25;

                  {
                    Coercion_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Coercion_24, 0) = ((MR_Box) ((env).check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__FromType_46));
                    MR_hl_field(0, Coercion_24, 1) = ((MR_Box) (ToType_47));
                    MR_hl_field(0, Coercion_24, 2) = ((MR_Box) (Context_38));
                    MR_hl_field(0, Coercion_24, 3) = ((MR_Box) (FromVar_39));
                    MR_hl_field(0, Coercion_24, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                    MR_hl_field(0, Coercion_24, 5) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0(HeadVar__1_1, Coercions0_18, &TailKeepCoercions_25, HeadVar__4_4, TypeAssign1_48, STATE_VARIABLE_TypeAssign_6, (MR_Integer) 1, STATE_VARIABLE_MadeProgress_8);
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
                  MR_Word next_value_of_STATE_VARIABLE_TypeAssign_0_5 = TypeAssign1_48;

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
                MR_Word Coercion_77;
                MR_Word TailKeepCoercions_78;

                {
                  Coercion_77 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Coercion_77, 0) = ((MR_Box) (FromType0_36));
                  MR_hl_field(0, Coercion_77, 1) = ((MR_Box) (ToType0_37));
                  MR_hl_field(0, Coercion_77, 2) = ((MR_Box) (Context_38));
                  MR_hl_field(0, Coercion_77, 3) = ((MR_Box) (FromVar_39));
                  MR_hl_field(0, Coercion_77, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(0, Coercion_77, 5) = ((MR_Box) (CoerceFails_49));
                }
                check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0(HeadVar__1_1, Coercions0_18, &TailKeepCoercions_78, HeadVar__4_4, STATE_VARIABLE_TypeAssign_0_5, STATE_VARIABLE_TypeAssign_6, (MR_Integer) 1, STATE_VARIABLE_MadeProgress_8);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Coercion_77));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailKeepCoercions_78));
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
            MR_Word TailKeepCoercions_69;

            check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0(HeadVar__1_1, Coercions0_18, &TailKeepCoercions_69, HeadVar__4_4, STATE_VARIABLE_TypeAssign_0_5, STATE_VARIABLE_TypeAssign_6, (MR_Integer) 1, STATE_VARIABLE_MadeProgress_8);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Coercion0_17));
              MR_hl_field(1, base, 1) = ((MR_Box) (TailKeepCoercions_69));
            }
          }
          break;
      }
    }
    break;
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
    (env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = mercury__list__contains_2_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ExistQTVars0_15, ((MR_Box) ((env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__TVar_40)));
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
      parse_tree__prog_type_scan__type_contains_var_2_p_0((env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_18, &(env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__TVar_40, check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_2, env_ptr);
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
    (env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = mercury__list__contains_2_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ExistQTVars0_15, ((MR_Box) ((env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__TVar_42)));
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
      parse_tree__prog_type_scan__type_contains_var_2_p_0((env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_21, &(env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__TVar_42, check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_5, env_ptr);
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
    MR_Word TypeAssign1_19;
    MR_Word TypeAssign2_22;
    MR_Word FromType0_17;
    MR_Word ToType0_20;

    check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_11, &VarTypes0_13);
    check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign0_11, &TVarSet0_14);
    check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign0_11, &(env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ExistQTVars0_15);
    check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign0_11, &TypeBindings0_16);
    (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes0_13, FromVar_9, &FromType0_17);
    if ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded)
    {
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings0_16, FromType0_17, &(env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_18);
      TypeAssign1_19 = TypeAssign0_11;
    }
    else
      check_hlds__typecheck_util__type_assign_fresh_type_var_4_p_0(FromVar_9, &(env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_18, TypeAssign0_11, &TypeAssign1_19);
    (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes0_13, ToVar_10, &ToType0_20);
    if ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded)
    {
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings0_16, ToType0_20, &(env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_21);
      TypeAssign2_22 = TypeAssign1_19;
    }
    else
    {
      (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[2]), ((MR_Box) (ToVar_10)), ((MR_Box) (FromVar_9)));
      if ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded)
      {
        (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_21 = (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_18;
        TypeAssign2_22 = TypeAssign1_19;
      }
      else
        check_hlds__typecheck_util__type_assign_fresh_type_var_4_p_0(ToVar_10, &(env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_21, TypeAssign1_19, &TypeAssign2_22);
    }
    check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_3(&env);
    (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = !((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded);
    if ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded)
    {
      check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_6(&env);
      (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = !((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded);
    }
    if ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded)
    {
      MR_Word TypeTable_23;
      MR_Word TypeAssign3_24;
      MR_Word CoerceFails_25;

      check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(Info_7, &TypeTable_23);
      check_hlds__typecheck_coerce__typecheck_coerce_between_types_7_p_0(TypeTable_23, TVarSet0_14, (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_18, (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_21, TypeAssign2_22, &TypeAssign3_24, &CoerceFails_25);
      if ((CoerceFails_25 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeBindings1_26;
        MR_Word TypeA_44;
        MR_Word TypeB_45;
        MR_Word Var_46;
        MR_Word Var_47;

        check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign3_24, &TypeBindings1_26);
        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_26, (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_18, &TypeA_44);
        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_26, (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_21, &TypeB_45);
        Var_46 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(TypeA_44);
        Var_47 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(TypeB_45);
        (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = parse_tree__prog_type_test____Unify____non_kinded_type_0_0(Var_46, Var_47);
        if ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded)
        {
          MR_Word Coercion_27;
          MR_Word Coercions0_49;
          MR_Word Coercions_50;

          {
            Coercion_27 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Coercion_27, 0) = ((MR_Box) ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_18));
            MR_hl_field(0, Coercion_27, 1) = ((MR_Box) ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_21));
            MR_hl_field(0, Coercion_27, 2) = ((MR_Box) (Context_8));
            MR_hl_field(0, Coercion_27, 3) = ((MR_Box) (FromVar_9));
            MR_hl_field(0, Coercion_27, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
            MR_hl_field(0, Coercion_27, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(TypeAssign3_24, &Coercions0_49);
          {
            Coercions_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Coercions_50, 0) = ((MR_Box) (Coercion_27));
            MR_hl_field(1, Coercions_50, 1) = ((MR_Box) (Coercions0_49));
          }
          check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(Coercions_50, TypeAssign3_24, TypeAssign_12);
        }
        else
          *TypeAssign_12 = TypeAssign3_24;
      }
      else
      {
        MR_Word Coercion_37;
        MR_Word Coercions0_51;
        MR_Word Coercions_52;

        {
          Coercion_37 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Coercion_37, 0) = ((MR_Box) ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_18));
          MR_hl_field(0, Coercion_37, 1) = ((MR_Box) ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_21));
          MR_hl_field(0, Coercion_37, 2) = ((MR_Box) (Context_8));
          MR_hl_field(0, Coercion_37, 3) = ((MR_Box) (FromVar_9));
          MR_hl_field(0, Coercion_37, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(0, Coercion_37, 5) = ((MR_Box) (CoerceFails_25));
        }
        check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(TypeAssign2_22, &Coercions0_51);
        {
          Coercions_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Coercions_52, 0) = ((MR_Box) (Coercion_37));
          MR_hl_field(1, Coercions_52, 1) = ((MR_Box) (Coercions0_51));
        }
        check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(Coercions_52, TypeAssign2_22, TypeAssign_12);
      }
    }
    else
    {
      MR_Word CoerceFail_30;
      MR_Word Var_35;
      MR_Word Coercion_38;
      MR_Word Coercions0_53;
      MR_Word Coercions_54;

      {
        CoerceFail_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, CoerceFail_30, 0) = ((MR_Box) ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ExistQTVars0_15));
        MR_hl_field(1, CoerceFail_30, 1) = ((MR_Box) ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_18));
        MR_hl_field(1, CoerceFail_30, 2) = ((MR_Box) ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_21));
      }
      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (CoerceFail_30));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Coercion_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Coercion_38, 0) = ((MR_Box) ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_18));
        MR_hl_field(0, Coercion_38, 1) = ((MR_Box) ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_21));
        MR_hl_field(0, Coercion_38, 2) = ((MR_Box) (Context_8));
        MR_hl_field(0, Coercion_38, 3) = ((MR_Box) (FromVar_9));
        MR_hl_field(0, Coercion_38, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(0, Coercion_38, 5) = ((MR_Box) (Var_35));
      }
      check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(TypeAssign2_22, &Coercions0_53);
      {
        Coercions_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Coercions_54, 0) = ((MR_Box) (Coercion_38));
        MR_hl_field(1, Coercions_54, 1) = ((MR_Box) (Coercions0_53));
      }
      check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(Coercions_54, TypeAssign2_22, TypeAssign_12);
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
  MR_Word conv0_STATE_VARIABLE_InvariantTVars_22;

  check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantTVars_22);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InvariantTVars_22));
}

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_between_types_7_p_0(
  MR_Word TypeTable_8,
  MR_Word TVarSet_9,
  MR_Word FromType_10,
  MR_Word ToType_11,
  MR_Word STATE_VARIABLE_TypeAssign_0_36,
  MR_Word * STATE_VARIABLE_TypeAssign_37,
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
    MR_Word Var_58 = (MR_Word) ((MR_Word) (FromMaybeDuType_14));

    if (((MR_tag((MR_Word) ToMaybeDuType_15)) == (MR_Integer) 0))
    {
      MR_Word ToDuTypeInfo_51 = (MR_Word) ((MR_Word) (ToMaybeDuType_15));

      {
        MaybeBoth_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeBoth_16, 0) = ((MR_Box) (Var_58));
        MR_hl_field(1, MaybeBoth_16, 1) = ((MR_Box) (ToDuTypeInfo_51));
      }
    }
    else
    {
      MR_String ToTypeDesc_56 = ((MR_String) ((MR_hl_field(1, ToMaybeDuType_15, 0))));
      MR_Word CoerceFail_57;

      {
        CoerceFail_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, CoerceFail_57, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, CoerceFail_57, 1) = ((MR_Box) (FromType_10));
        MR_hl_field(3, CoerceFail_57, 2) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(3, CoerceFail_57, 3) = ((MR_Box) (ToType_11));
        MR_hl_field(3, CoerceFail_57, 4) = ((MR_Box) (ToTypeDesc_56));
      }
      {
        MaybeBoth_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeBoth_16, 0) = ((MR_Box) (CoerceFail_57));
      }
    }
  }
  else
  {
    MR_String Var_59 = ((MR_String) ((MR_hl_field(1, FromMaybeDuType_14, 0))));

    if (((MR_tag((MR_Word) ToMaybeDuType_15)) == (MR_Integer) 0))
    {
      MR_Word CoerceFail_55;

      {
        CoerceFail_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, CoerceFail_55, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, CoerceFail_55, 1) = ((MR_Box) (FromType_10));
        MR_hl_field(3, CoerceFail_55, 2) = ((MR_Box) (Var_59));
        MR_hl_field(3, CoerceFail_55, 3) = ((MR_Box) (ToType_11));
        MR_hl_field(3, CoerceFail_55, 4) = ((MR_Box) ((MR_String) ""));
      }
      {
        MaybeBoth_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeBoth_16, 0) = ((MR_Box) (CoerceFail_55));
      }
    }
    else
    {
      MR_String ToTypeDesc_46 = ((MR_String) ((MR_hl_field(1, ToMaybeDuType_15, 0))));
      MR_Word CoerceFail_47;

      {
        CoerceFail_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, CoerceFail_47, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, CoerceFail_47, 1) = ((MR_Box) (FromType_10));
        MR_hl_field(3, CoerceFail_47, 2) = ((MR_Box) (Var_59));
        MR_hl_field(3, CoerceFail_47, 3) = ((MR_Box) (ToType_11));
        MR_hl_field(3, CoerceFail_47, 4) = ((MR_Box) (ToTypeDesc_46));
      }
      {
        MaybeBoth_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeBoth_16, 0) = ((MR_Box) (CoerceFail_47));
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
    *STATE_VARIABLE_TypeAssign_37 = STATE_VARIABLE_TypeAssign_0_36;
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
      MR_Unsigned Var_35;

      hlds__hlds_data__get_type_defn_tparams_2_p_0(FromBaseTypeDefn_24, &BaseTypeCtorParams_33);
      if ((BaseTypeCtorParams_33 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__one_or_more_map__init_1_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0), &InvariantTVars_34);
      else
      {
        MR_Word OoMCtors_60 = ((MR_Word) ((MR_hl_field(0, FromBaseTypeBodyDu_25, 0))));
        MR_Word Ctors_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Box conv1_InvariantTVars_34;

        Ctors_66 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_60);
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_67, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_4[1]));
          MR_hl_field(0, Var_67, 1) = ((MR_Box) (check_hlds__typecheck_coerce__typecheck_coerce_between_types_7_p_0_1));
          MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_67, 3) = ((MR_Box) (TypeTable_8));
          MR_hl_field(0, Var_67, 4) = ((MR_Box) (BaseTypeCtor_30));
          MR_hl_field(0, Var_67, 5) = ((MR_Box) (BaseTypeCtorParams_33));
        }
        Var_68 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0));
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]), Var_67, Ctors_66, ((MR_Box) (Var_68)), &conv1_InvariantTVars_34);
        InvariantTVars_34 = ((MR_Word) (conv1_InvariantTVars_34));
      }
      check_hlds__typecheck_coerce__are_actual_param_type_pairs_as_related_as_needed_13_p_0(TypeTable_8, TVarSet_9, InvariantTVars_34, BaseTypeCtor_30, BaseTypeCtorParams_33, FromBaseTypeArgTypes_23, ToBaseTypeArgTypes_27, (MR_Unsigned) 1U, &Var_35, STATE_VARIABLE_TypeAssign_0_36, STATE_VARIABLE_TypeAssign_37, (MR_Word) ((MR_Unsigned) 0U), CoerceFails_13);
    }
    else
    {
      MR_Word CoerceFail_43;

      {
        CoerceFail_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CoerceFail_43, 0) = ((MR_Box) (FromType_10));
        MR_hl_field(0, CoerceFail_43, 1) = ((MR_Box) (FromBaseTypeCtor_22));
        MR_hl_field(0, CoerceFail_43, 2) = ((MR_Box) (ToType_11));
        MR_hl_field(0, CoerceFail_43, 3) = ((MR_Box) (ToBaseTypeCtor_26));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *CoerceFails_13 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_43));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_TypeAssign_37 = STATE_VARIABLE_TypeAssign_0_36;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_coerce__are_actual_param_type_pairs_as_related_as_needed_13_p_0(
  MR_Word TypeTable_14,
  MR_Word TVarSet_15,
  MR_Word InvariantTVars_16,
  MR_Word BaseTypeCtor_17,
  MR_Word BaseTypeCtorParams_18,
  MR_Word FromArgTypes_19,
  MR_Word ToArgTypes_20,
  MR_Unsigned STATE_VARIABLE_ArgNum_0_30,
  MR_Unsigned * STATE_VARIABLE_ArgNum_31,
  MR_Word STATE_VARIABLE_TypeAssign_0_32,
  MR_Word * STATE_VARIABLE_TypeAssign_33,
  MR_Word STATE_VARIABLE_CoerceFails_0_34,
  MR_Word * STATE_VARIABLE_CoerceFails_35)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (BaseTypeCtorParams_18 == (MR_Word) ((MR_Unsigned) 0U));

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      succeeded = (FromArgTypes_19 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (ToArgTypes_20 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      *STATE_VARIABLE_CoerceFails_35 = STATE_VARIABLE_CoerceFails_0_34;
      *STATE_VARIABLE_TypeAssign_33 = STATE_VARIABLE_TypeAssign_0_32;
      *STATE_VARIABLE_ArgNum_31 = STATE_VARIABLE_ArgNum_0_30;
    }
    else
    {
      MR_Word HeadBaseTypeCtorParam_24;
      MR_Word TailBaseTypeCtorParams_25;
      MR_Word HeadFromArgType_26;
      MR_Word TailFromArgTypes_27;
      MR_Word HeadToArgType_28;
      MR_Word TailToArgTypes_29;

      succeeded = (BaseTypeCtorParams_18 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadBaseTypeCtorParam_24 = ((MR_Word) ((MR_hl_field(1, BaseTypeCtorParams_18, 0))));
        TailBaseTypeCtorParams_25 = ((MR_Word) ((MR_hl_field(1, BaseTypeCtorParams_18, 1))));
        succeeded = (FromArgTypes_19 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadFromArgType_26 = ((MR_Word) ((MR_hl_field(1, FromArgTypes_19, 0))));
          TailFromArgTypes_27 = ((MR_Word) ((MR_hl_field(1, FromArgTypes_19, 1))));
          succeeded = (ToArgTypes_20 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadToArgType_28 = ((MR_Word) ((MR_hl_field(1, ToArgTypes_20, 0))));
            TailToArgTypes_29 = ((MR_Word) ((MR_hl_field(1, ToArgTypes_20, 1))));
          }
        }
      }
      if (succeeded)
      {
        MR_Unsigned STATE_VARIABLE_ArgNum_1_36;
        MR_Word STATE_VARIABLE_TypeAssign_1_37;
        MR_Word STATE_VARIABLE_CoerceFails_1_38;
        MR_Word OoMCtorArgPosn_44;
        MR_Box conv0_OoMCtorArgPosn_44;
        MR_Word next_value_of_BaseTypeCtorParams_18;
        MR_Word next_value_of_FromArgTypes_19;
        MR_Word next_value_of_ToArgTypes_20;
        MR_Unsigned next_value_of_STATE_VARIABLE_ArgNum_0_30;
        MR_Word next_value_of_STATE_VARIABLE_TypeAssign_0_32;
        MR_Word next_value_of_STATE_VARIABLE_CoerceFails_0_34;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]), InvariantTVars_16, ((MR_Box) (HeadBaseTypeCtorParam_24)), &conv0_OoMCtorArgPosn_44);
        if (succeeded)
        {
          OoMCtorArgPosn_44 = ((MR_Word) (conv0_OoMCtorArgPosn_44));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Comparison_45;
          MR_Word Var_54;

          {
            Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_54, 0) = ((MR_Box) (OoMCtorArgPosn_44));
          }
          {
            Comparison_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Comparison_45, 0) = ((MR_Box) (Var_54));
          }
          succeeded = ((MR_tag((MR_Word) HeadFromArgType_26)) == (MR_Integer) 0);
          if (!(succeeded))
            succeeded = ((MR_tag((MR_Word) HeadToArgType_28)) == (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_TypeAssign_1_69;

            succeeded = check_hlds__typecheck_util__type_assign_unify_type_4_p_0(HeadFromArgType_26, HeadToArgType_28, STATE_VARIABLE_TypeAssign_0_32, &STATE_VARIABLE_TypeAssign_1_69);
            if (succeeded)
            {
              STATE_VARIABLE_TypeAssign_1_37 = STATE_VARIABLE_TypeAssign_1_69;
              STATE_VARIABLE_CoerceFails_1_38 = STATE_VARIABLE_CoerceFails_0_34;
            }
            else
            {
              MR_Word CoerceFail_68;

              {
                CoerceFail_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, CoerceFail_68, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, CoerceFail_68, 1) = ((MR_Box) (HeadFromArgType_26));
                MR_hl_field(3, CoerceFail_68, 2) = ((MR_Box) (HeadToArgType_28));
              }
              {
                STATE_VARIABLE_CoerceFails_1_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_CoerceFails_1_38, 0) = ((MR_Box) (CoerceFail_68));
                MR_hl_field(1, STATE_VARIABLE_CoerceFails_1_38, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_34));
              }
              STATE_VARIABLE_TypeAssign_1_37 = STATE_VARIABLE_TypeAssign_0_32;
            }
          }
          else
            check_hlds__typecheck_coerce__types_compare_as_given_nonvar_11_p_0(TypeTable_14, TVarSet_15, BaseTypeCtor_17, STATE_VARIABLE_ArgNum_0_30, Comparison_45, HeadFromArgType_26, HeadToArgType_28, STATE_VARIABLE_TypeAssign_0_32, &STATE_VARIABLE_TypeAssign_1_37, STATE_VARIABLE_CoerceFails_0_34, &STATE_VARIABLE_CoerceFails_1_38);
        }
        else
        {
          MR_Word FromToTypeAssign_46;
          MR_Word FromToCoerceFails_47;

          succeeded = ((MR_tag((MR_Word) HeadFromArgType_26)) == (MR_Integer) 0);
          if (!(succeeded))
            succeeded = ((MR_tag((MR_Word) HeadToArgType_28)) == (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_TypeAssign_1_75;

            succeeded = check_hlds__typecheck_util__type_assign_unify_type_4_p_0(HeadFromArgType_26, HeadToArgType_28, STATE_VARIABLE_TypeAssign_0_32, &STATE_VARIABLE_TypeAssign_1_75);
            if (succeeded)
            {
              FromToTypeAssign_46 = STATE_VARIABLE_TypeAssign_1_75;
              FromToCoerceFails_47 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              MR_Word CoerceFail_74;

              {
                CoerceFail_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, CoerceFail_74, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, CoerceFail_74, 1) = ((MR_Box) (HeadFromArgType_26));
                MR_hl_field(3, CoerceFail_74, 2) = ((MR_Box) (HeadToArgType_28));
              }
              {
                FromToCoerceFails_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, FromToCoerceFails_47, 0) = ((MR_Box) (CoerceFail_74));
                MR_hl_field(1, FromToCoerceFails_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              FromToTypeAssign_46 = STATE_VARIABLE_TypeAssign_0_32;
            }
          }
          else
            check_hlds__typecheck_coerce__types_compare_as_given_nonvar_11_p_0(TypeTable_14, TVarSet_15, BaseTypeCtor_17, STATE_VARIABLE_ArgNum_0_30, (MR_Word) ((MR_Unsigned) 0U), HeadFromArgType_26, HeadToArgType_28, STATE_VARIABLE_TypeAssign_0_32, &FromToTypeAssign_46, (MR_Word) ((MR_Unsigned) 0U), &FromToCoerceFails_47);
          if ((FromToCoerceFails_47 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_TypeAssign_1_37 = FromToTypeAssign_46;
            STATE_VARIABLE_CoerceFails_1_38 = STATE_VARIABLE_CoerceFails_0_34;
          }
          else
          {
            succeeded = ((MR_tag((MR_Word) HeadToArgType_28)) == (MR_Integer) 0);
            if (!(succeeded))
              succeeded = ((MR_tag((MR_Word) HeadFromArgType_26)) == (MR_Integer) 0);
            if (succeeded)
            {
              MR_Word STATE_VARIABLE_TypeAssign_1_81;

              succeeded = check_hlds__typecheck_util__type_assign_unify_type_4_p_0(HeadToArgType_28, HeadFromArgType_26, STATE_VARIABLE_TypeAssign_0_32, &STATE_VARIABLE_TypeAssign_1_81);
              if (succeeded)
              {
                STATE_VARIABLE_TypeAssign_1_37 = STATE_VARIABLE_TypeAssign_1_81;
                STATE_VARIABLE_CoerceFails_1_38 = STATE_VARIABLE_CoerceFails_0_34;
              }
              else
              {
                MR_Word CoerceFail_80;
                MR_Word ToFromCoerceFails_92;
                MR_Word Var_93;

                {
                  CoerceFail_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, CoerceFail_80, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(3, CoerceFail_80, 1) = ((MR_Box) (HeadToArgType_28));
                  MR_hl_field(3, CoerceFail_80, 2) = ((MR_Box) (HeadFromArgType_26));
                }
                {
                  ToFromCoerceFails_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ToFromCoerceFails_92, 0) = ((MR_Box) (CoerceFail_80));
                  MR_hl_field(1, ToFromCoerceFails_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_fail_0), ToFromCoerceFails_92, STATE_VARIABLE_CoerceFails_0_34);
                STATE_VARIABLE_CoerceFails_1_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_fail_0), FromToCoerceFails_47, Var_93);
                STATE_VARIABLE_TypeAssign_1_37 = STATE_VARIABLE_TypeAssign_0_32;
              }
            }
            else
            {
              MR_Word ToFromTypeAssign_86;
              MR_Word ToFromCoerceFails_87;

              check_hlds__typecheck_coerce__types_compare_as_given_nonvar_11_p_0(TypeTable_14, TVarSet_15, BaseTypeCtor_17, STATE_VARIABLE_ArgNum_0_30, (MR_Word) ((MR_Unsigned) 0U), HeadToArgType_28, HeadFromArgType_26, STATE_VARIABLE_TypeAssign_0_32, &ToFromTypeAssign_86, (MR_Word) ((MR_Unsigned) 0U), &ToFromCoerceFails_87);
              if ((ToFromCoerceFails_87 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                STATE_VARIABLE_TypeAssign_1_37 = ToFromTypeAssign_86;
                STATE_VARIABLE_CoerceFails_1_38 = STATE_VARIABLE_CoerceFails_0_34;
              }
              else
              {
                MR_Word Var_82;

                Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_fail_0), ToFromCoerceFails_87, STATE_VARIABLE_CoerceFails_0_34);
                STATE_VARIABLE_CoerceFails_1_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_fail_0), FromToCoerceFails_47, Var_82);
                STATE_VARIABLE_TypeAssign_1_37 = STATE_VARIABLE_TypeAssign_0_32;
              }
            }
          }
        }
        STATE_VARIABLE_ArgNum_1_36 = (STATE_VARIABLE_ArgNum_0_30 + (MR_Unsigned) 1U);
        // direct tailcall eliminated
        ;
        next_value_of_BaseTypeCtorParams_18 = TailBaseTypeCtorParams_25;
        next_value_of_FromArgTypes_19 = TailFromArgTypes_27;
        next_value_of_ToArgTypes_20 = TailToArgTypes_29;
        next_value_of_STATE_VARIABLE_ArgNum_0_30 = STATE_VARIABLE_ArgNum_1_36;
        next_value_of_STATE_VARIABLE_TypeAssign_0_32 = STATE_VARIABLE_TypeAssign_1_37;
        next_value_of_STATE_VARIABLE_CoerceFails_0_34 = STATE_VARIABLE_CoerceFails_1_38;
        BaseTypeCtorParams_18 = next_value_of_BaseTypeCtorParams_18;
        FromArgTypes_19 = next_value_of_FromArgTypes_19;
        ToArgTypes_20 = next_value_of_ToArgTypes_20;
        STATE_VARIABLE_ArgNum_0_30 = next_value_of_STATE_VARIABLE_ArgNum_0_30;
        STATE_VARIABLE_TypeAssign_0_32 = next_value_of_STATE_VARIABLE_TypeAssign_0_32;
        STATE_VARIABLE_CoerceFails_0_34 = next_value_of_STATE_VARIABLE_CoerceFails_0_34;
        continue;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.are_actual_param_type_pairs_as_related_as_needed\'/13", (MR_String) "length mismatch");
          return;
        }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_coerce__types_compare_as_given_11_p_0(
  MR_Word tscc_proc_1_input_1_TypeTable_12,
  MR_Word tscc_proc_1_input_2_TVarSet_13,
  MR_Word tscc_proc_1_input_3_BaseTypeCtor_14,
  MR_Unsigned tscc_proc_1_input_4_ArgNum_15,
  MR_Word tscc_proc_1_input_5_Comparison_16,
  MR_Word tscc_proc_1_input_6_TypeA_17,
  MR_Word tscc_proc_1_input_7_TypeB_18,
  MR_Word tscc_proc_1_input_8_STATE_VARIABLE_TypeAssign_0_26,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_TypeAssign_27,
  MR_Word tscc_proc_1_input_9_STATE_VARIABLE_CoerceFails_0_28,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_CoerceFails_29)
{
  MR_Word tscc_proc_2_input_1_TypeTable_12;
  MR_Word tscc_proc_2_input_2_TVarSet_13;
  MR_Word tscc_proc_2_input_3_BaseTypeCtor_14;
  MR_Unsigned tscc_proc_2_input_4_ArgNum_15;
  MR_Word tscc_proc_2_input_5_Comparison_16;
  MR_Word tscc_proc_2_input_6_TypeA_17;
  MR_Word tscc_proc_2_input_7_TypeB_18;
  MR_Word tscc_proc_2_input_8_STATE_VARIABLE_TypeAssign_0_62;
  MR_Word tscc_proc_2_input_9_STATE_VARIABLE_CoerceFails_0_64;
  MR_Word tscc_output_1_STATE_VARIABLE_TypeAssign_27;
  MR_Word tscc_output_2_STATE_VARIABLE_CoerceFails_29;

  // The code for TSCC PROC 1: pred check_hlds.typecheck_coerce.types_compare_as_given/11-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred check_hlds.typecheck_coerce.types_compare_as_given/11-0
  ;
  // proc 2 in TSCC: pred check_hlds.typecheck_coerce.types_compare_as_given_nonvar/11-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word TypeTable_12 = tscc_proc_1_input_1_TypeTable_12;
    MR_Word TVarSet_13 = tscc_proc_1_input_2_TVarSet_13;
    MR_Word BaseTypeCtor_14 = tscc_proc_1_input_3_BaseTypeCtor_14;
    MR_Unsigned ArgNum_15 = tscc_proc_1_input_4_ArgNum_15;
    MR_Word Comparison_16 = tscc_proc_1_input_5_Comparison_16;
    MR_Word TypeA_17 = tscc_proc_1_input_6_TypeA_17;
    MR_Word TypeB_18 = tscc_proc_1_input_7_TypeB_18;
    MR_Word STATE_VARIABLE_TypeAssign_0_26 = tscc_proc_1_input_8_STATE_VARIABLE_TypeAssign_0_26;
    MR_Word STATE_VARIABLE_TypeAssign_27;
    MR_Word STATE_VARIABLE_CoerceFails_0_28 = tscc_proc_1_input_9_STATE_VARIABLE_CoerceFails_0_28;
    MR_Word STATE_VARIABLE_CoerceFails_29;
    MR_bool succeeded = ((MR_tag((MR_Word) TypeA_17)) == (MR_Integer) 0);

    if (!(succeeded))
      succeeded = ((MR_tag((MR_Word) TypeB_18)) == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_TypeAssign_1_30;

      succeeded = check_hlds__typecheck_util__type_assign_unify_type_4_p_0(TypeA_17, TypeB_18, STATE_VARIABLE_TypeAssign_0_26, &STATE_VARIABLE_TypeAssign_1_30);
      if (succeeded)
      {
        STATE_VARIABLE_TypeAssign_27 = STATE_VARIABLE_TypeAssign_1_30;
        STATE_VARIABLE_CoerceFails_29 = STATE_VARIABLE_CoerceFails_0_28;
      }
      else
      {
        MR_Word CoerceFail_25;

        {
          CoerceFail_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CoerceFail_25, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, CoerceFail_25, 1) = ((MR_Box) (TypeA_17));
          MR_hl_field(3, CoerceFail_25, 2) = ((MR_Box) (TypeB_18));
        }
        {
          STATE_VARIABLE_CoerceFails_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_CoerceFails_29, 0) = ((MR_Box) (CoerceFail_25));
          MR_hl_field(1, STATE_VARIABLE_CoerceFails_29, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_28));
        }
        STATE_VARIABLE_TypeAssign_27 = STATE_VARIABLE_TypeAssign_0_26;
      }
    }
    else
    {
      MR_Word next_value_of_tscc_proc_2_input_1_TypeTable_12 = TypeTable_12;
      MR_Word next_value_of_tscc_proc_2_input_2_TVarSet_13 = TVarSet_13;
      MR_Word next_value_of_tscc_proc_2_input_3_BaseTypeCtor_14 = BaseTypeCtor_14;
      MR_Unsigned next_value_of_tscc_proc_2_input_4_ArgNum_15 = ArgNum_15;
      MR_Word next_value_of_tscc_proc_2_input_5_Comparison_16 = Comparison_16;
      MR_Word next_value_of_tscc_proc_2_input_6_TypeA_17 = TypeA_17;
      MR_Word next_value_of_tscc_proc_2_input_7_TypeB_18 = TypeB_18;
      MR_Word next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_TypeAssign_0_62 = STATE_VARIABLE_TypeAssign_0_26;
      MR_Word next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_CoerceFails_0_64 = STATE_VARIABLE_CoerceFails_0_28;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_TypeTable_12 = next_value_of_tscc_proc_2_input_1_TypeTable_12;
      tscc_proc_2_input_2_TVarSet_13 = next_value_of_tscc_proc_2_input_2_TVarSet_13;
      tscc_proc_2_input_3_BaseTypeCtor_14 = next_value_of_tscc_proc_2_input_3_BaseTypeCtor_14;
      tscc_proc_2_input_4_ArgNum_15 = next_value_of_tscc_proc_2_input_4_ArgNum_15;
      tscc_proc_2_input_5_Comparison_16 = next_value_of_tscc_proc_2_input_5_Comparison_16;
      tscc_proc_2_input_6_TypeA_17 = next_value_of_tscc_proc_2_input_6_TypeA_17;
      tscc_proc_2_input_7_TypeB_18 = next_value_of_tscc_proc_2_input_7_TypeB_18;
      tscc_proc_2_input_8_STATE_VARIABLE_TypeAssign_0_62 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_TypeAssign_0_62;
      tscc_proc_2_input_9_STATE_VARIABLE_CoerceFails_0_64 = next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_CoerceFails_0_64;
      goto top_of_proc_2;
    }
    tscc_output_1_STATE_VARIABLE_TypeAssign_27 = STATE_VARIABLE_TypeAssign_27;
    tscc_output_2_STATE_VARIABLE_CoerceFails_29 = STATE_VARIABLE_CoerceFails_29;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeTable_12 = tscc_proc_2_input_1_TypeTable_12;
    MR_Word TVarSet_13 = tscc_proc_2_input_2_TVarSet_13;
    MR_Word BaseTypeCtor_14 = tscc_proc_2_input_3_BaseTypeCtor_14;
    MR_Unsigned ArgNum_15 = tscc_proc_2_input_4_ArgNum_15;
    MR_Word Comparison_16 = tscc_proc_2_input_5_Comparison_16;
    MR_Word TypeA_17 = tscc_proc_2_input_6_TypeA_17;
    MR_Word TypeB_18 = tscc_proc_2_input_7_TypeB_18;
    MR_Word STATE_VARIABLE_TypeAssign_0_62 = tscc_proc_2_input_8_STATE_VARIABLE_TypeAssign_0_62;
    MR_Word STATE_VARIABLE_TypeAssign_63;
    MR_Word STATE_VARIABLE_CoerceFails_0_64 = tscc_proc_2_input_9_STATE_VARIABLE_CoerceFails_0_64;
    MR_Word STATE_VARIABLE_CoerceFails_65;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) TypeA_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.types_compare_as_given_nonvar\'/11", (MR_String) "type_variable");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          succeeded = ((MR_tag((MR_Word) TypeB_18)) == (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word TypeCtorA_32;
            MR_Word ArgTypesA_33;
            MR_Word TypeCtorB_34;
            MR_Word ArgTypesB_35;

            parse_tree__prog_type__defined_type_to_ctor_and_args_3_p_0(TypeA_17, &TypeCtorA_32, &ArgTypesA_33);
            parse_tree__prog_type__defined_type_to_ctor_and_args_3_p_0(TypeB_18, &TypeCtorB_34, &ArgTypesB_35);
            succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_32, TypeCtorB_34);
            if (succeeded)
              check_hlds__typecheck_coerce__corresponding_types_compare_as_given_11_p_0(TypeTable_12, TVarSet_13, BaseTypeCtor_14, ArgNum_15, Comparison_16, ArgTypesA_33, ArgTypesB_35, STATE_VARIABLE_TypeAssign_0_62, &STATE_VARIABLE_TypeAssign_63, STATE_VARIABLE_CoerceFails_0_64, &STATE_VARIABLE_CoerceFails_65);
            else
            {
              MR_Word MaybeDuTypeA_36;
              MR_Word MaybeDuTypeB_37;
              MR_Word MaybeBoth_38;

              check_hlds__typecheck_util__classify_defined_type_is_du_type_4_p_0(TypeTable_12, TypeCtorA_32, ArgTypesA_33, &MaybeDuTypeA_36);
              check_hlds__typecheck_util__classify_defined_type_is_du_type_4_p_0(TypeTable_12, TypeCtorB_34, ArgTypesB_35, &MaybeDuTypeB_37);
              check_hlds__typecheck_coerce__are_both_types_du_5_p_0(TypeA_17, TypeB_18, MaybeDuTypeA_36, MaybeDuTypeB_37, &MaybeBoth_38);
              if (((MR_tag((MR_Word) MaybeBoth_38)) == (MR_Integer) 0))
              {
                MR_Word CoerceFail_90 = ((MR_Word) ((MR_hl_field(0, MaybeBoth_38, 0))));

                {
                  STATE_VARIABLE_CoerceFails_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 0) = ((MR_Box) (CoerceFail_90));
                  MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_64));
                }
                STATE_VARIABLE_TypeAssign_63 = STATE_VARIABLE_TypeAssign_0_62;
              }
              else
              {
                MR_Word DuTypeInfoA_39 = ((MR_Word) ((MR_hl_field(1, MaybeBoth_38, 0))));

                if ((Comparison_16 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word TypeDefnA_44 = ((MR_Word) ((MR_hl_field(0, DuTypeInfoA_39, 2))));
                  MR_Word TypeBodyDuA_45 = ((MR_Word) ((MR_hl_field(0, DuTypeInfoA_39, 3))));
                  MR_Word MaybeSuperTypeA_46 = ((MR_Word) ((MR_hl_field(0, TypeBodyDuA_45, 2))));

                  if ((MaybeSuperTypeA_46 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word CoerceFail_92;

                    {
                      CoerceFail_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, CoerceFail_92, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, CoerceFail_92, 1) = ((MR_Box) (TypeCtorA_32));
                    }
                    {
                      STATE_VARIABLE_CoerceFails_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 0) = ((MR_Box) (CoerceFail_92));
                      MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_64));
                    }
                    STATE_VARIABLE_TypeAssign_63 = STATE_VARIABLE_TypeAssign_0_62;
                  }
                  else
                  {
                    MR_Word SuperTypeA0_47 = ((MR_Word) ((MR_hl_field(1, MaybeSuperTypeA_46, 0))));
                    MR_Word SuperTypeA_48;
                    MR_Word next_value_of_tscc_proc_1_input_1_TypeTable_12;
                    MR_Word next_value_of_tscc_proc_1_input_2_TVarSet_13;
                    MR_Word next_value_of_tscc_proc_1_input_3_BaseTypeCtor_14;
                    MR_Unsigned next_value_of_tscc_proc_1_input_4_ArgNum_15;
                    MR_Word next_value_of_tscc_proc_1_input_5_Comparison_16;
                    MR_Word next_value_of_tscc_proc_1_input_6_TypeA_17;
                    MR_Word next_value_of_tscc_proc_1_input_7_TypeB_18;
                    MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_TypeAssign_0_26;
                    MR_Word next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_CoerceFails_0_28;

                    hlds__type_util__get_supertype_of_subtype_6_p_0(TVarSet_13, TypeCtorA_32, ArgTypesA_33, TypeDefnA_44, SuperTypeA0_47, &SuperTypeA_48);
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_TypeTable_12 = TypeTable_12;
                    next_value_of_tscc_proc_1_input_2_TVarSet_13 = TVarSet_13;
                    next_value_of_tscc_proc_1_input_3_BaseTypeCtor_14 = BaseTypeCtor_14;
                    next_value_of_tscc_proc_1_input_4_ArgNum_15 = ArgNum_15;
                    next_value_of_tscc_proc_1_input_5_Comparison_16 = Comparison_16;
                    next_value_of_tscc_proc_1_input_6_TypeA_17 = SuperTypeA_48;
                    next_value_of_tscc_proc_1_input_7_TypeB_18 = TypeB_18;
                    next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_TypeAssign_0_26 = STATE_VARIABLE_TypeAssign_0_62;
                    next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_CoerceFails_0_28 = STATE_VARIABLE_CoerceFails_0_64;
                    tscc_proc_1_input_1_TypeTable_12 = next_value_of_tscc_proc_1_input_1_TypeTable_12;
                    tscc_proc_1_input_2_TVarSet_13 = next_value_of_tscc_proc_1_input_2_TVarSet_13;
                    tscc_proc_1_input_3_BaseTypeCtor_14 = next_value_of_tscc_proc_1_input_3_BaseTypeCtor_14;
                    tscc_proc_1_input_4_ArgNum_15 = next_value_of_tscc_proc_1_input_4_ArgNum_15;
                    tscc_proc_1_input_5_Comparison_16 = next_value_of_tscc_proc_1_input_5_Comparison_16;
                    tscc_proc_1_input_6_TypeA_17 = next_value_of_tscc_proc_1_input_6_TypeA_17;
                    tscc_proc_1_input_7_TypeB_18 = next_value_of_tscc_proc_1_input_7_TypeB_18;
                    tscc_proc_1_input_8_STATE_VARIABLE_TypeAssign_0_26 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_TypeAssign_0_26;
                    tscc_proc_1_input_9_STATE_VARIABLE_CoerceFails_0_28 = next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_CoerceFails_0_28;
                    goto top_of_proc_1;
                  }
                }
                else
                {
                  MR_Word Reason_41 = ((MR_Word) ((MR_hl_field(1, Comparison_16, 0))));
                  MR_Word CoerceFail_91;

                  {
                    CoerceFail_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, CoerceFail_91, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, CoerceFail_91, 1) = ((MR_Box) (BaseTypeCtor_14));
                    MR_hl_field(3, CoerceFail_91, 2) = ((MR_Box) (ArgNum_15));
                    MR_hl_field(3, CoerceFail_91, 3) = ((MR_Box) (Reason_41));
                    MR_hl_field(3, CoerceFail_91, 4) = ((MR_Box) (TypeA_17));
                    MR_hl_field(3, CoerceFail_91, 5) = ((MR_Box) (TypeB_18));
                  }
                  {
                    STATE_VARIABLE_CoerceFails_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 0) = ((MR_Box) (CoerceFail_91));
                    MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_64));
                  }
                  STATE_VARIABLE_TypeAssign_63 = STATE_VARIABLE_TypeAssign_0_62;
                }
              }
            }
          }
          else
          {
            MR_Word CoerceFail_101;

            {
              CoerceFail_101 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, CoerceFail_101, 0) = ((MR_Box) (TypeTable_12));
              MR_hl_field(2, CoerceFail_101, 1) = ((MR_Box) (TypeA_17));
              MR_hl_field(2, CoerceFail_101, 2) = ((MR_Box) (TypeB_18));
            }
            {
              STATE_VARIABLE_CoerceFails_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 0) = ((MR_Box) (CoerceFail_101));
              MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_64));
            }
            STATE_VARIABLE_TypeAssign_63 = STATE_VARIABLE_TypeAssign_0_62;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinTypeA_21 = ((MR_Word) ((MR_hl_field(2, TypeA_17, 0))));
          MR_Word Var_129;

          succeeded = ((MR_tag((MR_Word) TypeB_18)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_129 = ((MR_Word) ((MR_hl_field(2, TypeB_18, 0))));
            succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinTypeA_21, Var_129);
          }
          if (succeeded)
            STATE_VARIABLE_CoerceFails_65 = STATE_VARIABLE_CoerceFails_0_64;
          else
          {
            MR_Word CoerceFail_23;
            MR_Word BuiltinTypeB_22;

            succeeded = ((MR_tag((MR_Word) TypeB_18)) == (MR_Integer) 2);
            if (succeeded)
            {
              BuiltinTypeB_22 = ((MR_Word) ((MR_hl_field(2, TypeB_18, 0))));
              {
                CoerceFail_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, CoerceFail_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, CoerceFail_23, 1) = ((MR_Box) (BuiltinTypeA_21));
                MR_hl_field(3, CoerceFail_23, 2) = ((MR_Box) (BuiltinTypeB_22));
              }
            }
            else
              {
                CoerceFail_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, CoerceFail_23, 0) = ((MR_Box) (TypeTable_12));
                MR_hl_field(2, CoerceFail_23, 1) = ((MR_Box) (TypeA_17));
                MR_hl_field(2, CoerceFail_23, 2) = ((MR_Box) (TypeB_18));
              }
            {
              STATE_VARIABLE_CoerceFails_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 0) = ((MR_Box) (CoerceFail_23));
              MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_64));
            }
          }
          STATE_VARIABLE_TypeAssign_63 = STATE_VARIABLE_TypeAssign_0_62;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TypeA_17, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Kind_49 = ((MR_Word) ((MR_hl_field(3, TypeA_17, 2))));
              MR_Word ArgTypesA_111 = ((MR_Word) ((MR_hl_field(3, TypeA_17, 1))));
              MR_Word ArgTypesB_109;
              MR_Word Var_130;

              succeeded = ((((MR_tag((MR_Word) TypeB_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_18, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgTypesB_109 = ((MR_Word) ((MR_hl_field(3, TypeB_18, 1))));
                Var_130 = ((MR_Word) ((MR_hl_field(3, TypeB_18, 2))));
                succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_49, Var_130);
              }
              if (succeeded)
              {
                MR_Integer NumArgTypesA_50;
                MR_Integer NumArgTypesB_51;

                mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesA_111, &NumArgTypesA_50);
                mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesB_109, &NumArgTypesB_51);
                succeeded = (NumArgTypesA_50 == NumArgTypesB_51);
                if (succeeded)
                  check_hlds__typecheck_coerce__corresponding_types_compare_as_given_11_p_0(TypeTable_12, TVarSet_13, BaseTypeCtor_14, ArgNum_15, Comparison_16, ArgTypesA_111, ArgTypesB_109, STATE_VARIABLE_TypeAssign_0_62, &STATE_VARIABLE_TypeAssign_63, STATE_VARIABLE_CoerceFails_0_64, &STATE_VARIABLE_CoerceFails_65);
                else
                {
                  MR_Word CoerceFail_104;

                  {
                    CoerceFail_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, CoerceFail_104, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, CoerceFail_104, 1) = ((MR_Box) (NumArgTypesA_50));
                    MR_hl_field(3, CoerceFail_104, 2) = ((MR_Box) (NumArgTypesB_51));
                  }
                  {
                    STATE_VARIABLE_CoerceFails_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 0) = ((MR_Box) (CoerceFail_104));
                    MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_64));
                  }
                  STATE_VARIABLE_TypeAssign_63 = STATE_VARIABLE_TypeAssign_0_62;
                }
              }
              else
              {
                MR_Word CoerceFail_107;

                {
                  CoerceFail_107 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, CoerceFail_107, 0) = ((MR_Box) (TypeTable_12));
                  MR_hl_field(2, CoerceFail_107, 1) = ((MR_Box) (TypeA_17));
                  MR_hl_field(2, CoerceFail_107, 2) = ((MR_Box) (TypeB_18));
                }
                {
                  STATE_VARIABLE_CoerceFails_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 0) = ((MR_Box) (CoerceFail_107));
                  MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_64));
                }
                STATE_VARIABLE_TypeAssign_63 = STATE_VARIABLE_TypeAssign_0_62;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredOrFunc_52 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_17, 1))) & (MR_Integer) 1);
              MR_Word Purity_54 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_17, 4))) & (MR_Integer) 3);
              MR_Word ArgTypesA_117 = ((MR_Word) ((MR_hl_field(3, TypeA_17, 2))));
              MR_Word ArgTypesB_115;
              MR_Word Var_131;
              MR_Word Var_132;

              succeeded = ((((MR_tag((MR_Word) TypeB_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_18, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_131 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_18, 1))) & (MR_Integer) 1);
                ArgTypesB_115 = ((MR_Word) ((MR_hl_field(3, TypeB_18, 2))));
                Var_132 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_18, 4))) & (MR_Integer) 3);
                succeeded = (PredOrFunc_52 == Var_131);
                if (succeeded)
                  succeeded = (Purity_54 == Var_132);
              }
              if (succeeded)
                check_hlds__typecheck_coerce__corresponding_types_compare_as_given_11_p_0(TypeTable_12, TVarSet_13, BaseTypeCtor_14, ArgNum_15, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_coerce_scalar_common_3[0])), ArgTypesA_117, ArgTypesB_115, STATE_VARIABLE_TypeAssign_0_62, &STATE_VARIABLE_TypeAssign_63, STATE_VARIABLE_CoerceFails_0_64, &STATE_VARIABLE_CoerceFails_65);
              else
              {
                MR_Word CoerceFail_113;

                {
                  CoerceFail_113 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, CoerceFail_113, 0) = ((MR_Box) (TypeTable_12));
                  MR_hl_field(2, CoerceFail_113, 1) = ((MR_Box) (TypeA_17));
                  MR_hl_field(2, CoerceFail_113, 2) = ((MR_Box) (TypeB_18));
                }
                {
                  STATE_VARIABLE_CoerceFails_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 0) = ((MR_Box) (CoerceFail_113));
                  MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_64));
                }
                STATE_VARIABLE_TypeAssign_63 = STATE_VARIABLE_TypeAssign_0_62;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.types_compare_as_given_nonvar\'/11", (MR_String) "apply_n_type");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeA1_60 = ((MR_Word) ((MR_hl_field(3, TypeA_17, 1))));
              MR_Word Kind_122 = ((MR_Word) ((MR_hl_field(3, TypeA_17, 2))));
              MR_Word TypeB1_61;
              MR_Word Var_133;

              succeeded = ((((MR_tag((MR_Word) TypeB_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_18, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                TypeB1_61 = ((MR_Word) ((MR_hl_field(3, TypeB_18, 1))));
                Var_133 = ((MR_Word) ((MR_hl_field(3, TypeB_18, 2))));
                succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_122, Var_133);
              }
              if (succeeded)
              {
                MR_Word next_value_of_tscc_proc_1_input_1_TypeTable_12 = TypeTable_12;
                MR_Word next_value_of_tscc_proc_1_input_2_TVarSet_13 = TVarSet_13;
                MR_Word next_value_of_tscc_proc_1_input_3_BaseTypeCtor_14 = BaseTypeCtor_14;
                MR_Unsigned next_value_of_tscc_proc_1_input_4_ArgNum_15 = ArgNum_15;
                MR_Word next_value_of_tscc_proc_1_input_5_Comparison_16 = Comparison_16;
                MR_Word next_value_of_tscc_proc_1_input_6_TypeA_17 = TypeA1_60;
                MR_Word next_value_of_tscc_proc_1_input_7_TypeB_18 = TypeB1_61;
                MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_TypeAssign_0_26 = STATE_VARIABLE_TypeAssign_0_62;
                MR_Word next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_CoerceFails_0_28 = STATE_VARIABLE_CoerceFails_0_64;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_TypeTable_12 = next_value_of_tscc_proc_1_input_1_TypeTable_12;
                tscc_proc_1_input_2_TVarSet_13 = next_value_of_tscc_proc_1_input_2_TVarSet_13;
                tscc_proc_1_input_3_BaseTypeCtor_14 = next_value_of_tscc_proc_1_input_3_BaseTypeCtor_14;
                tscc_proc_1_input_4_ArgNum_15 = next_value_of_tscc_proc_1_input_4_ArgNum_15;
                tscc_proc_1_input_5_Comparison_16 = next_value_of_tscc_proc_1_input_5_Comparison_16;
                tscc_proc_1_input_6_TypeA_17 = next_value_of_tscc_proc_1_input_6_TypeA_17;
                tscc_proc_1_input_7_TypeB_18 = next_value_of_tscc_proc_1_input_7_TypeB_18;
                tscc_proc_1_input_8_STATE_VARIABLE_TypeAssign_0_26 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_TypeAssign_0_26;
                tscc_proc_1_input_9_STATE_VARIABLE_CoerceFails_0_28 = next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_CoerceFails_0_28;
                goto top_of_proc_1;
              }
              else
              {
                MR_Word CoerceFail_119;

                {
                  CoerceFail_119 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, CoerceFail_119, 0) = ((MR_Box) (TypeTable_12));
                  MR_hl_field(2, CoerceFail_119, 1) = ((MR_Box) (TypeA_17));
                  MR_hl_field(2, CoerceFail_119, 2) = ((MR_Box) (TypeB_18));
                }
                {
                  STATE_VARIABLE_CoerceFails_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 0) = ((MR_Box) (CoerceFail_119));
                  MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_64));
                }
                STATE_VARIABLE_TypeAssign_63 = STATE_VARIABLE_TypeAssign_0_62;
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_TypeAssign_27 = STATE_VARIABLE_TypeAssign_63;
    tscc_output_2_STATE_VARIABLE_CoerceFails_29 = STATE_VARIABLE_CoerceFails_65;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_TypeAssign_27 = tscc_output_1_STATE_VARIABLE_TypeAssign_27;
  *tscc_output_ptr_2_STATE_VARIABLE_CoerceFails_29 = tscc_output_2_STATE_VARIABLE_CoerceFails_29;
  return;
}

static void MR_CALL 
check_hlds__typecheck_coerce__types_compare_as_given_nonvar_11_p_0(
  MR_Word tscc_proc_2_input_1_TypeTable_12,
  MR_Word tscc_proc_2_input_2_TVarSet_13,
  MR_Word tscc_proc_2_input_3_BaseTypeCtor_14,
  MR_Unsigned tscc_proc_2_input_4_ArgNum_15,
  MR_Word tscc_proc_2_input_5_Comparison_16,
  MR_Word tscc_proc_2_input_6_TypeA_17,
  MR_Word tscc_proc_2_input_7_TypeB_18,
  MR_Word tscc_proc_2_input_8_STATE_VARIABLE_TypeAssign_0_62,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_TypeAssign_27,
  MR_Word tscc_proc_2_input_9_STATE_VARIABLE_CoerceFails_0_64,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_CoerceFails_29)
{
  MR_Word tscc_proc_1_input_1_TypeTable_12;
  MR_Word tscc_proc_1_input_2_TVarSet_13;
  MR_Word tscc_proc_1_input_3_BaseTypeCtor_14;
  MR_Unsigned tscc_proc_1_input_4_ArgNum_15;
  MR_Word tscc_proc_1_input_5_Comparison_16;
  MR_Word tscc_proc_1_input_6_TypeA_17;
  MR_Word tscc_proc_1_input_7_TypeB_18;
  MR_Word tscc_proc_1_input_8_STATE_VARIABLE_TypeAssign_0_26;
  MR_Word tscc_proc_1_input_9_STATE_VARIABLE_CoerceFails_0_28;
  MR_Word tscc_output_1_STATE_VARIABLE_TypeAssign_27;
  MR_Word tscc_output_2_STATE_VARIABLE_CoerceFails_29;

  // The code for TSCC PROC 2: pred check_hlds.typecheck_coerce.types_compare_as_given_nonvar/11-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred check_hlds.typecheck_coerce.types_compare_as_given/11-0
  ;
  // proc 2 in TSCC: pred check_hlds.typecheck_coerce.types_compare_as_given_nonvar/11-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word TypeTable_12 = tscc_proc_1_input_1_TypeTable_12;
    MR_Word TVarSet_13 = tscc_proc_1_input_2_TVarSet_13;
    MR_Word BaseTypeCtor_14 = tscc_proc_1_input_3_BaseTypeCtor_14;
    MR_Unsigned ArgNum_15 = tscc_proc_1_input_4_ArgNum_15;
    MR_Word Comparison_16 = tscc_proc_1_input_5_Comparison_16;
    MR_Word TypeA_17 = tscc_proc_1_input_6_TypeA_17;
    MR_Word TypeB_18 = tscc_proc_1_input_7_TypeB_18;
    MR_Word STATE_VARIABLE_TypeAssign_0_26 = tscc_proc_1_input_8_STATE_VARIABLE_TypeAssign_0_26;
    MR_Word STATE_VARIABLE_TypeAssign_27;
    MR_Word STATE_VARIABLE_CoerceFails_0_28 = tscc_proc_1_input_9_STATE_VARIABLE_CoerceFails_0_28;
    MR_Word STATE_VARIABLE_CoerceFails_29;
    MR_bool succeeded = ((MR_tag((MR_Word) TypeA_17)) == (MR_Integer) 0);

    if (!(succeeded))
      succeeded = ((MR_tag((MR_Word) TypeB_18)) == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_TypeAssign_1_30;

      succeeded = check_hlds__typecheck_util__type_assign_unify_type_4_p_0(TypeA_17, TypeB_18, STATE_VARIABLE_TypeAssign_0_26, &STATE_VARIABLE_TypeAssign_1_30);
      if (succeeded)
      {
        STATE_VARIABLE_TypeAssign_27 = STATE_VARIABLE_TypeAssign_1_30;
        STATE_VARIABLE_CoerceFails_29 = STATE_VARIABLE_CoerceFails_0_28;
      }
      else
      {
        MR_Word CoerceFail_25;

        {
          CoerceFail_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CoerceFail_25, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, CoerceFail_25, 1) = ((MR_Box) (TypeA_17));
          MR_hl_field(3, CoerceFail_25, 2) = ((MR_Box) (TypeB_18));
        }
        {
          STATE_VARIABLE_CoerceFails_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_CoerceFails_29, 0) = ((MR_Box) (CoerceFail_25));
          MR_hl_field(1, STATE_VARIABLE_CoerceFails_29, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_28));
        }
        STATE_VARIABLE_TypeAssign_27 = STATE_VARIABLE_TypeAssign_0_26;
      }
    }
    else
    {
      MR_Word next_value_of_tscc_proc_2_input_1_TypeTable_12 = TypeTable_12;
      MR_Word next_value_of_tscc_proc_2_input_2_TVarSet_13 = TVarSet_13;
      MR_Word next_value_of_tscc_proc_2_input_3_BaseTypeCtor_14 = BaseTypeCtor_14;
      MR_Unsigned next_value_of_tscc_proc_2_input_4_ArgNum_15 = ArgNum_15;
      MR_Word next_value_of_tscc_proc_2_input_5_Comparison_16 = Comparison_16;
      MR_Word next_value_of_tscc_proc_2_input_6_TypeA_17 = TypeA_17;
      MR_Word next_value_of_tscc_proc_2_input_7_TypeB_18 = TypeB_18;
      MR_Word next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_TypeAssign_0_62 = STATE_VARIABLE_TypeAssign_0_26;
      MR_Word next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_CoerceFails_0_64 = STATE_VARIABLE_CoerceFails_0_28;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_TypeTable_12 = next_value_of_tscc_proc_2_input_1_TypeTable_12;
      tscc_proc_2_input_2_TVarSet_13 = next_value_of_tscc_proc_2_input_2_TVarSet_13;
      tscc_proc_2_input_3_BaseTypeCtor_14 = next_value_of_tscc_proc_2_input_3_BaseTypeCtor_14;
      tscc_proc_2_input_4_ArgNum_15 = next_value_of_tscc_proc_2_input_4_ArgNum_15;
      tscc_proc_2_input_5_Comparison_16 = next_value_of_tscc_proc_2_input_5_Comparison_16;
      tscc_proc_2_input_6_TypeA_17 = next_value_of_tscc_proc_2_input_6_TypeA_17;
      tscc_proc_2_input_7_TypeB_18 = next_value_of_tscc_proc_2_input_7_TypeB_18;
      tscc_proc_2_input_8_STATE_VARIABLE_TypeAssign_0_62 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_TypeAssign_0_62;
      tscc_proc_2_input_9_STATE_VARIABLE_CoerceFails_0_64 = next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_CoerceFails_0_64;
      goto top_of_proc_2;
    }
    tscc_output_1_STATE_VARIABLE_TypeAssign_27 = STATE_VARIABLE_TypeAssign_27;
    tscc_output_2_STATE_VARIABLE_CoerceFails_29 = STATE_VARIABLE_CoerceFails_29;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeTable_12 = tscc_proc_2_input_1_TypeTable_12;
    MR_Word TVarSet_13 = tscc_proc_2_input_2_TVarSet_13;
    MR_Word BaseTypeCtor_14 = tscc_proc_2_input_3_BaseTypeCtor_14;
    MR_Unsigned ArgNum_15 = tscc_proc_2_input_4_ArgNum_15;
    MR_Word Comparison_16 = tscc_proc_2_input_5_Comparison_16;
    MR_Word TypeA_17 = tscc_proc_2_input_6_TypeA_17;
    MR_Word TypeB_18 = tscc_proc_2_input_7_TypeB_18;
    MR_Word STATE_VARIABLE_TypeAssign_0_62 = tscc_proc_2_input_8_STATE_VARIABLE_TypeAssign_0_62;
    MR_Word STATE_VARIABLE_TypeAssign_63;
    MR_Word STATE_VARIABLE_CoerceFails_0_64 = tscc_proc_2_input_9_STATE_VARIABLE_CoerceFails_0_64;
    MR_Word STATE_VARIABLE_CoerceFails_65;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) TypeA_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.types_compare_as_given_nonvar\'/11", (MR_String) "type_variable");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          succeeded = ((MR_tag((MR_Word) TypeB_18)) == (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word TypeCtorA_32;
            MR_Word ArgTypesA_33;
            MR_Word TypeCtorB_34;
            MR_Word ArgTypesB_35;

            parse_tree__prog_type__defined_type_to_ctor_and_args_3_p_0(TypeA_17, &TypeCtorA_32, &ArgTypesA_33);
            parse_tree__prog_type__defined_type_to_ctor_and_args_3_p_0(TypeB_18, &TypeCtorB_34, &ArgTypesB_35);
            succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_32, TypeCtorB_34);
            if (succeeded)
              check_hlds__typecheck_coerce__corresponding_types_compare_as_given_11_p_0(TypeTable_12, TVarSet_13, BaseTypeCtor_14, ArgNum_15, Comparison_16, ArgTypesA_33, ArgTypesB_35, STATE_VARIABLE_TypeAssign_0_62, &STATE_VARIABLE_TypeAssign_63, STATE_VARIABLE_CoerceFails_0_64, &STATE_VARIABLE_CoerceFails_65);
            else
            {
              MR_Word MaybeDuTypeA_36;
              MR_Word MaybeDuTypeB_37;
              MR_Word MaybeBoth_38;

              check_hlds__typecheck_util__classify_defined_type_is_du_type_4_p_0(TypeTable_12, TypeCtorA_32, ArgTypesA_33, &MaybeDuTypeA_36);
              check_hlds__typecheck_util__classify_defined_type_is_du_type_4_p_0(TypeTable_12, TypeCtorB_34, ArgTypesB_35, &MaybeDuTypeB_37);
              check_hlds__typecheck_coerce__are_both_types_du_5_p_0(TypeA_17, TypeB_18, MaybeDuTypeA_36, MaybeDuTypeB_37, &MaybeBoth_38);
              if (((MR_tag((MR_Word) MaybeBoth_38)) == (MR_Integer) 0))
              {
                MR_Word CoerceFail_90 = ((MR_Word) ((MR_hl_field(0, MaybeBoth_38, 0))));

                {
                  STATE_VARIABLE_CoerceFails_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 0) = ((MR_Box) (CoerceFail_90));
                  MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_64));
                }
                STATE_VARIABLE_TypeAssign_63 = STATE_VARIABLE_TypeAssign_0_62;
              }
              else
              {
                MR_Word DuTypeInfoA_39 = ((MR_Word) ((MR_hl_field(1, MaybeBoth_38, 0))));

                if ((Comparison_16 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word TypeDefnA_44 = ((MR_Word) ((MR_hl_field(0, DuTypeInfoA_39, 2))));
                  MR_Word TypeBodyDuA_45 = ((MR_Word) ((MR_hl_field(0, DuTypeInfoA_39, 3))));
                  MR_Word MaybeSuperTypeA_46 = ((MR_Word) ((MR_hl_field(0, TypeBodyDuA_45, 2))));

                  if ((MaybeSuperTypeA_46 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word CoerceFail_92;

                    {
                      CoerceFail_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, CoerceFail_92, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, CoerceFail_92, 1) = ((MR_Box) (TypeCtorA_32));
                    }
                    {
                      STATE_VARIABLE_CoerceFails_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 0) = ((MR_Box) (CoerceFail_92));
                      MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_64));
                    }
                    STATE_VARIABLE_TypeAssign_63 = STATE_VARIABLE_TypeAssign_0_62;
                  }
                  else
                  {
                    MR_Word SuperTypeA0_47 = ((MR_Word) ((MR_hl_field(1, MaybeSuperTypeA_46, 0))));
                    MR_Word SuperTypeA_48;
                    MR_Word next_value_of_tscc_proc_1_input_1_TypeTable_12;
                    MR_Word next_value_of_tscc_proc_1_input_2_TVarSet_13;
                    MR_Word next_value_of_tscc_proc_1_input_3_BaseTypeCtor_14;
                    MR_Unsigned next_value_of_tscc_proc_1_input_4_ArgNum_15;
                    MR_Word next_value_of_tscc_proc_1_input_5_Comparison_16;
                    MR_Word next_value_of_tscc_proc_1_input_6_TypeA_17;
                    MR_Word next_value_of_tscc_proc_1_input_7_TypeB_18;
                    MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_TypeAssign_0_26;
                    MR_Word next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_CoerceFails_0_28;

                    hlds__type_util__get_supertype_of_subtype_6_p_0(TVarSet_13, TypeCtorA_32, ArgTypesA_33, TypeDefnA_44, SuperTypeA0_47, &SuperTypeA_48);
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_TypeTable_12 = TypeTable_12;
                    next_value_of_tscc_proc_1_input_2_TVarSet_13 = TVarSet_13;
                    next_value_of_tscc_proc_1_input_3_BaseTypeCtor_14 = BaseTypeCtor_14;
                    next_value_of_tscc_proc_1_input_4_ArgNum_15 = ArgNum_15;
                    next_value_of_tscc_proc_1_input_5_Comparison_16 = Comparison_16;
                    next_value_of_tscc_proc_1_input_6_TypeA_17 = SuperTypeA_48;
                    next_value_of_tscc_proc_1_input_7_TypeB_18 = TypeB_18;
                    next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_TypeAssign_0_26 = STATE_VARIABLE_TypeAssign_0_62;
                    next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_CoerceFails_0_28 = STATE_VARIABLE_CoerceFails_0_64;
                    tscc_proc_1_input_1_TypeTable_12 = next_value_of_tscc_proc_1_input_1_TypeTable_12;
                    tscc_proc_1_input_2_TVarSet_13 = next_value_of_tscc_proc_1_input_2_TVarSet_13;
                    tscc_proc_1_input_3_BaseTypeCtor_14 = next_value_of_tscc_proc_1_input_3_BaseTypeCtor_14;
                    tscc_proc_1_input_4_ArgNum_15 = next_value_of_tscc_proc_1_input_4_ArgNum_15;
                    tscc_proc_1_input_5_Comparison_16 = next_value_of_tscc_proc_1_input_5_Comparison_16;
                    tscc_proc_1_input_6_TypeA_17 = next_value_of_tscc_proc_1_input_6_TypeA_17;
                    tscc_proc_1_input_7_TypeB_18 = next_value_of_tscc_proc_1_input_7_TypeB_18;
                    tscc_proc_1_input_8_STATE_VARIABLE_TypeAssign_0_26 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_TypeAssign_0_26;
                    tscc_proc_1_input_9_STATE_VARIABLE_CoerceFails_0_28 = next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_CoerceFails_0_28;
                    goto top_of_proc_1;
                  }
                }
                else
                {
                  MR_Word Reason_41 = ((MR_Word) ((MR_hl_field(1, Comparison_16, 0))));
                  MR_Word CoerceFail_91;

                  {
                    CoerceFail_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, CoerceFail_91, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, CoerceFail_91, 1) = ((MR_Box) (BaseTypeCtor_14));
                    MR_hl_field(3, CoerceFail_91, 2) = ((MR_Box) (ArgNum_15));
                    MR_hl_field(3, CoerceFail_91, 3) = ((MR_Box) (Reason_41));
                    MR_hl_field(3, CoerceFail_91, 4) = ((MR_Box) (TypeA_17));
                    MR_hl_field(3, CoerceFail_91, 5) = ((MR_Box) (TypeB_18));
                  }
                  {
                    STATE_VARIABLE_CoerceFails_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 0) = ((MR_Box) (CoerceFail_91));
                    MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_64));
                  }
                  STATE_VARIABLE_TypeAssign_63 = STATE_VARIABLE_TypeAssign_0_62;
                }
              }
            }
          }
          else
          {
            MR_Word CoerceFail_101;

            {
              CoerceFail_101 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, CoerceFail_101, 0) = ((MR_Box) (TypeTable_12));
              MR_hl_field(2, CoerceFail_101, 1) = ((MR_Box) (TypeA_17));
              MR_hl_field(2, CoerceFail_101, 2) = ((MR_Box) (TypeB_18));
            }
            {
              STATE_VARIABLE_CoerceFails_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 0) = ((MR_Box) (CoerceFail_101));
              MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_64));
            }
            STATE_VARIABLE_TypeAssign_63 = STATE_VARIABLE_TypeAssign_0_62;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinTypeA_21 = ((MR_Word) ((MR_hl_field(2, TypeA_17, 0))));
          MR_Word Var_129;

          succeeded = ((MR_tag((MR_Word) TypeB_18)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_129 = ((MR_Word) ((MR_hl_field(2, TypeB_18, 0))));
            succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinTypeA_21, Var_129);
          }
          if (succeeded)
            STATE_VARIABLE_CoerceFails_65 = STATE_VARIABLE_CoerceFails_0_64;
          else
          {
            MR_Word CoerceFail_23;
            MR_Word BuiltinTypeB_22;

            succeeded = ((MR_tag((MR_Word) TypeB_18)) == (MR_Integer) 2);
            if (succeeded)
            {
              BuiltinTypeB_22 = ((MR_Word) ((MR_hl_field(2, TypeB_18, 0))));
              {
                CoerceFail_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, CoerceFail_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, CoerceFail_23, 1) = ((MR_Box) (BuiltinTypeA_21));
                MR_hl_field(3, CoerceFail_23, 2) = ((MR_Box) (BuiltinTypeB_22));
              }
            }
            else
              {
                CoerceFail_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, CoerceFail_23, 0) = ((MR_Box) (TypeTable_12));
                MR_hl_field(2, CoerceFail_23, 1) = ((MR_Box) (TypeA_17));
                MR_hl_field(2, CoerceFail_23, 2) = ((MR_Box) (TypeB_18));
              }
            {
              STATE_VARIABLE_CoerceFails_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 0) = ((MR_Box) (CoerceFail_23));
              MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_64));
            }
          }
          STATE_VARIABLE_TypeAssign_63 = STATE_VARIABLE_TypeAssign_0_62;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TypeA_17, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Kind_49 = ((MR_Word) ((MR_hl_field(3, TypeA_17, 2))));
              MR_Word ArgTypesA_111 = ((MR_Word) ((MR_hl_field(3, TypeA_17, 1))));
              MR_Word ArgTypesB_109;
              MR_Word Var_130;

              succeeded = ((((MR_tag((MR_Word) TypeB_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_18, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgTypesB_109 = ((MR_Word) ((MR_hl_field(3, TypeB_18, 1))));
                Var_130 = ((MR_Word) ((MR_hl_field(3, TypeB_18, 2))));
                succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_49, Var_130);
              }
              if (succeeded)
              {
                MR_Integer NumArgTypesA_50;
                MR_Integer NumArgTypesB_51;

                mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesA_111, &NumArgTypesA_50);
                mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesB_109, &NumArgTypesB_51);
                succeeded = (NumArgTypesA_50 == NumArgTypesB_51);
                if (succeeded)
                  check_hlds__typecheck_coerce__corresponding_types_compare_as_given_11_p_0(TypeTable_12, TVarSet_13, BaseTypeCtor_14, ArgNum_15, Comparison_16, ArgTypesA_111, ArgTypesB_109, STATE_VARIABLE_TypeAssign_0_62, &STATE_VARIABLE_TypeAssign_63, STATE_VARIABLE_CoerceFails_0_64, &STATE_VARIABLE_CoerceFails_65);
                else
                {
                  MR_Word CoerceFail_104;

                  {
                    CoerceFail_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, CoerceFail_104, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, CoerceFail_104, 1) = ((MR_Box) (NumArgTypesA_50));
                    MR_hl_field(3, CoerceFail_104, 2) = ((MR_Box) (NumArgTypesB_51));
                  }
                  {
                    STATE_VARIABLE_CoerceFails_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 0) = ((MR_Box) (CoerceFail_104));
                    MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_64));
                  }
                  STATE_VARIABLE_TypeAssign_63 = STATE_VARIABLE_TypeAssign_0_62;
                }
              }
              else
              {
                MR_Word CoerceFail_107;

                {
                  CoerceFail_107 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, CoerceFail_107, 0) = ((MR_Box) (TypeTable_12));
                  MR_hl_field(2, CoerceFail_107, 1) = ((MR_Box) (TypeA_17));
                  MR_hl_field(2, CoerceFail_107, 2) = ((MR_Box) (TypeB_18));
                }
                {
                  STATE_VARIABLE_CoerceFails_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 0) = ((MR_Box) (CoerceFail_107));
                  MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_64));
                }
                STATE_VARIABLE_TypeAssign_63 = STATE_VARIABLE_TypeAssign_0_62;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredOrFunc_52 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_17, 1))) & (MR_Integer) 1);
              MR_Word Purity_54 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_17, 4))) & (MR_Integer) 3);
              MR_Word ArgTypesA_117 = ((MR_Word) ((MR_hl_field(3, TypeA_17, 2))));
              MR_Word ArgTypesB_115;
              MR_Word Var_131;
              MR_Word Var_132;

              succeeded = ((((MR_tag((MR_Word) TypeB_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_18, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_131 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_18, 1))) & (MR_Integer) 1);
                ArgTypesB_115 = ((MR_Word) ((MR_hl_field(3, TypeB_18, 2))));
                Var_132 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_18, 4))) & (MR_Integer) 3);
                succeeded = (PredOrFunc_52 == Var_131);
                if (succeeded)
                  succeeded = (Purity_54 == Var_132);
              }
              if (succeeded)
                check_hlds__typecheck_coerce__corresponding_types_compare_as_given_11_p_0(TypeTable_12, TVarSet_13, BaseTypeCtor_14, ArgNum_15, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_coerce_scalar_common_3[0])), ArgTypesA_117, ArgTypesB_115, STATE_VARIABLE_TypeAssign_0_62, &STATE_VARIABLE_TypeAssign_63, STATE_VARIABLE_CoerceFails_0_64, &STATE_VARIABLE_CoerceFails_65);
              else
              {
                MR_Word CoerceFail_113;

                {
                  CoerceFail_113 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, CoerceFail_113, 0) = ((MR_Box) (TypeTable_12));
                  MR_hl_field(2, CoerceFail_113, 1) = ((MR_Box) (TypeA_17));
                  MR_hl_field(2, CoerceFail_113, 2) = ((MR_Box) (TypeB_18));
                }
                {
                  STATE_VARIABLE_CoerceFails_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 0) = ((MR_Box) (CoerceFail_113));
                  MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_64));
                }
                STATE_VARIABLE_TypeAssign_63 = STATE_VARIABLE_TypeAssign_0_62;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.types_compare_as_given_nonvar\'/11", (MR_String) "apply_n_type");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeA1_60 = ((MR_Word) ((MR_hl_field(3, TypeA_17, 1))));
              MR_Word Kind_122 = ((MR_Word) ((MR_hl_field(3, TypeA_17, 2))));
              MR_Word TypeB1_61;
              MR_Word Var_133;

              succeeded = ((((MR_tag((MR_Word) TypeB_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_18, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                TypeB1_61 = ((MR_Word) ((MR_hl_field(3, TypeB_18, 1))));
                Var_133 = ((MR_Word) ((MR_hl_field(3, TypeB_18, 2))));
                succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_122, Var_133);
              }
              if (succeeded)
              {
                MR_Word next_value_of_tscc_proc_1_input_1_TypeTable_12 = TypeTable_12;
                MR_Word next_value_of_tscc_proc_1_input_2_TVarSet_13 = TVarSet_13;
                MR_Word next_value_of_tscc_proc_1_input_3_BaseTypeCtor_14 = BaseTypeCtor_14;
                MR_Unsigned next_value_of_tscc_proc_1_input_4_ArgNum_15 = ArgNum_15;
                MR_Word next_value_of_tscc_proc_1_input_5_Comparison_16 = Comparison_16;
                MR_Word next_value_of_tscc_proc_1_input_6_TypeA_17 = TypeA1_60;
                MR_Word next_value_of_tscc_proc_1_input_7_TypeB_18 = TypeB1_61;
                MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_TypeAssign_0_26 = STATE_VARIABLE_TypeAssign_0_62;
                MR_Word next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_CoerceFails_0_28 = STATE_VARIABLE_CoerceFails_0_64;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_TypeTable_12 = next_value_of_tscc_proc_1_input_1_TypeTable_12;
                tscc_proc_1_input_2_TVarSet_13 = next_value_of_tscc_proc_1_input_2_TVarSet_13;
                tscc_proc_1_input_3_BaseTypeCtor_14 = next_value_of_tscc_proc_1_input_3_BaseTypeCtor_14;
                tscc_proc_1_input_4_ArgNum_15 = next_value_of_tscc_proc_1_input_4_ArgNum_15;
                tscc_proc_1_input_5_Comparison_16 = next_value_of_tscc_proc_1_input_5_Comparison_16;
                tscc_proc_1_input_6_TypeA_17 = next_value_of_tscc_proc_1_input_6_TypeA_17;
                tscc_proc_1_input_7_TypeB_18 = next_value_of_tscc_proc_1_input_7_TypeB_18;
                tscc_proc_1_input_8_STATE_VARIABLE_TypeAssign_0_26 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_TypeAssign_0_26;
                tscc_proc_1_input_9_STATE_VARIABLE_CoerceFails_0_28 = next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_CoerceFails_0_28;
                goto top_of_proc_1;
              }
              else
              {
                MR_Word CoerceFail_119;

                {
                  CoerceFail_119 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, CoerceFail_119, 0) = ((MR_Box) (TypeTable_12));
                  MR_hl_field(2, CoerceFail_119, 1) = ((MR_Box) (TypeA_17));
                  MR_hl_field(2, CoerceFail_119, 2) = ((MR_Box) (TypeB_18));
                }
                {
                  STATE_VARIABLE_CoerceFails_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 0) = ((MR_Box) (CoerceFail_119));
                  MR_hl_field(1, STATE_VARIABLE_CoerceFails_65, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_64));
                }
                STATE_VARIABLE_TypeAssign_63 = STATE_VARIABLE_TypeAssign_0_62;
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_TypeAssign_27 = STATE_VARIABLE_TypeAssign_63;
    tscc_output_2_STATE_VARIABLE_CoerceFails_29 = STATE_VARIABLE_CoerceFails_65;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_TypeAssign_27 = tscc_output_1_STATE_VARIABLE_TypeAssign_27;
  *tscc_output_ptr_2_STATE_VARIABLE_CoerceFails_29 = tscc_output_2_STATE_VARIABLE_CoerceFails_29;
  return;
}

static void MR_CALL 
check_hlds__typecheck_coerce__corresponding_types_compare_as_given_11_p_0(
  MR_Word TypeTable_1,
  MR_Word TVarSet_2,
  MR_Word BaseTypeCtor_3,
  MR_Unsigned ArgNum_4,
  MR_Word Comparison_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_TypeAssign_0_8,
  MR_Word * STATE_VARIABLE_TypeAssign_9,
  MR_Word STATE_VARIABLE_CoerceFails_0_10,
  MR_Word * STATE_VARIABLE_CoerceFails_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_CoerceFails_11 = STATE_VARIABLE_CoerceFails_0_10;
        *STATE_VARIABLE_TypeAssign_9 = STATE_VARIABLE_TypeAssign_0_8;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.corresponding_types_compare_as_given\'/11", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_72 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word Var_73 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));

      if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_coerce.corresponding_types_compare_as_given\'/11", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word TypeB_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 0))));
        MR_Word TypesB_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 1))));
        MR_Word STATE_VARIABLE_TypeAssign_1_38;
        MR_Word STATE_VARIABLE_CoerceFails_1_39;
        MR_Word next_value_of_HeadVar__6_6;
        MR_Word next_value_of_HeadVar__7_7;
        MR_Word next_value_of_STATE_VARIABLE_TypeAssign_0_8;
        MR_Word next_value_of_STATE_VARIABLE_CoerceFails_0_10;

        succeeded = ((MR_tag((MR_Word) Var_73)) == (MR_Integer) 0);
        if (!(succeeded))
          succeeded = ((MR_tag((MR_Word) TypeB_30)) == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_TypeAssign_1_79;

          succeeded = check_hlds__typecheck_util__type_assign_unify_type_4_p_0(Var_73, TypeB_30, STATE_VARIABLE_TypeAssign_0_8, &STATE_VARIABLE_TypeAssign_1_79);
          if (succeeded)
          {
            STATE_VARIABLE_TypeAssign_1_38 = STATE_VARIABLE_TypeAssign_1_79;
            STATE_VARIABLE_CoerceFails_1_39 = STATE_VARIABLE_CoerceFails_0_10;
          }
          else
          {
            MR_Word CoerceFail_78;

            {
              CoerceFail_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, CoerceFail_78, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, CoerceFail_78, 1) = ((MR_Box) (Var_73));
              MR_hl_field(3, CoerceFail_78, 2) = ((MR_Box) (TypeB_30));
            }
            {
              STATE_VARIABLE_CoerceFails_1_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_CoerceFails_1_39, 0) = ((MR_Box) (CoerceFail_78));
              MR_hl_field(1, STATE_VARIABLE_CoerceFails_1_39, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_10));
            }
            STATE_VARIABLE_TypeAssign_1_38 = STATE_VARIABLE_TypeAssign_0_8;
          }
        }
        else
          check_hlds__typecheck_coerce__types_compare_as_given_nonvar_11_p_0(TypeTable_1, TVarSet_2, BaseTypeCtor_3, ArgNum_4, Comparison_5, Var_73, TypeB_30, STATE_VARIABLE_TypeAssign_0_8, &STATE_VARIABLE_TypeAssign_1_38, STATE_VARIABLE_CoerceFails_0_10, &STATE_VARIABLE_CoerceFails_1_39);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__6_6 = Var_72;
        next_value_of_HeadVar__7_7 = TypesB_31;
        next_value_of_STATE_VARIABLE_TypeAssign_0_8 = STATE_VARIABLE_TypeAssign_1_38;
        next_value_of_STATE_VARIABLE_CoerceFails_0_10 = STATE_VARIABLE_CoerceFails_1_39;
        HeadVar__6_6 = next_value_of_HeadVar__6_6;
        HeadVar__7_7 = next_value_of_HeadVar__7_7;
        STATE_VARIABLE_TypeAssign_0_8 = next_value_of_STATE_VARIABLE_TypeAssign_0_8;
        STATE_VARIABLE_CoerceFails_0_10 = next_value_of_STATE_VARIABLE_CoerceFails_0_10;
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
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_5[0]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (check_hlds__typecheck_coerce__typecheck_prune_coerce_constraints_3_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (TypeTable_7));
  }
  mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), Var_13, TypeAssignSet0_5, &TypeAssignSet1_8);
  mercury__list__filter_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[1]), TypeAssignSet1_8, &SatisfiedTypeAssignSet_9, &UnsatisfiedTypeAssignSet_10);
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
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_4[0]));
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
