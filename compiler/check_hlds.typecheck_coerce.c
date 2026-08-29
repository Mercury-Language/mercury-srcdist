/*
** Automatically generated from `typecheck_coerce.m'
** by the Mercury compiler,
** version rotd-2026-08-29
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
#include "hlds.hlds_proc.mih"
#include "hlds.pred_proc_id.mih"
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
#include "parse_tree.prog_item_pragma.mih"
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
  MR_Word check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__TVar_60;
};

struct check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0_s {
  MR_bool check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded;
  MR_Word check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ExistQTVars0_15;
  MR_Word check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_18;
  MR_Word check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_21;
  jmp_buf check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__commit_0;
  MR_Word check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__TVar_42;
  jmp_buf check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__commit_1;
  MR_Word check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__TVar_44;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_coerce__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_coerce__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_coerce__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_coerce__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_coerce__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_coerce__one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_coerce__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_coerce__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_coerce__list__ti_list_1parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_check_coerce_constraint_action_0_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__field_types_check_coerce_constraint_action_0_1[1];

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_check_coerce_constraint_action_0_1;

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_check_coerce_constraint_action_0_2;

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_check_coerce_constraint_action_0_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_check_coerce_constraint_action_0_1[1];

static const MR_DuPtagLayout check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_ptag_ordered_check_coerce_constraint_action_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_name_ordered_check_coerce_constraint_action_0[3];

static const MR_Integer check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__functor_number_map_check_coerce_constraint_action_0[3];

static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_coerce__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_functor_desc_maybe_invariant_params_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_functor_desc_maybe_invariant_params_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_ordinal_ordered_maybe_invariant_params_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_name_ordered_maybe_invariant_params_0[2];

static const MR_Integer check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__functor_number_map_maybe_invariant_params_0[2];

static const MR_PseudoTypeInfo check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__field_types_types_comparison_0_0[1];

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_types_comparison_0_0;

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_types_comparison_0_1;

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_types_comparison_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_stag_ordered_types_comparison_0_1[1];

static const MR_DuPtagLayout check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_ptag_ordered_types_comparison_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_name_ordered_types_comparison_0[2];

static const MR_Integer check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__functor_number_map_types_comparison_0[2];

static void MR_CALL 
check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__638__1_4_p_0(
  MR_Word CtorArgPosn_86,
  MR_Word HeadVar__2_116,
  MR_Word HeadVar__3_117,
  MR_Word * HeadVar__4_118);

static void MR_CALL 
check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__589__1_4_p_0(
  MR_Word CtorArgPosn_35,
  MR_Word HeadVar__2_90,
  MR_Word HeadVar__3_91,
  MR_Word * HeadVar__4_92);

static void MR_CALL 
check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__600__3_4_p_0(
  MR_Word CtorArgPosn_149,
  MR_Word HeadVar__2_140,
  MR_Word HeadVar__3_141,
  MR_Word * HeadVar__4_142);

static void MR_CALL 
check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__600__2_4_p_0(
  MR_Word CtorArgPosn_134,
  MR_Word HeadVar__2_125,
  MR_Word HeadVar__3_126,
  MR_Word * HeadVar__4_127);

static void MR_CALL 
check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__600__1_4_p_0(
  MR_Word CtorArgPosn_79,
  MR_Word HeadVar__2_97,
  MR_Word HeadVar__3_98,
  MR_Word * HeadVar__4_99);

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
check_hlds__typecheck_coerce____Compare____maybe_invariant_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____maybe_invariant_params_0_0(
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
check_hlds__typecheck_coerce____Compare____invariant_tparams_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____invariant_tparams_map_0_0(
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
check_hlds__typecheck_coerce____Compare____active_type_ctors_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____active_type_ctors_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_12_p_0(
  MR_Word TypeTable_13,
  MR_Word ActiveTypeCtors_14,
  MR_Word BaseTypeCtor_15,
  MR_Word BaseTypeCtorParams_16,
  MR_Word DuCtor_17,
  MR_Word CtorArg_18,
  MR_Unsigned STATE_VARIABLE_ArgNum_0_25,
  MR_Unsigned * STATE_VARIABLE_ArgNum_26,
  MR_Word STATE_VARIABLE_InvariantTVars_0_27,
  MR_Word * STATE_VARIABLE_InvariantTVars_28,
  MR_Word STATE_VARIABLE_InvariantTParamsMap_0_29,
  MR_Word * STATE_VARIABLE_InvariantTParamsMap_30);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0(
  MR_Word TypeTable_13,
  MR_Word ActiveTypeCtors_14,
  MR_Word BaseTypeCtor_15,
  MR_Word BaseTypeCtorParams_16,
  MR_Word ConsId_17,
  MR_Word CtorArgType_18,
  MR_Unsigned STATE_VARIABLE_ArgNum_0_52,
  MR_Unsigned * STATE_VARIABLE_ArgNum_53,
  MR_Word STATE_VARIABLE_InvariantTVars_0_54,
  MR_Word * STATE_VARIABLE_InvariantTVars_55,
  MR_Word STATE_VARIABLE_InvariantTParamsMap_0_56,
  MR_Word * STATE_VARIABLE_InvariantTParamsMap_57);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_9_p_0(
  MR_Word TypeTable_10,
  MR_Word ActiveTypeCtors_11,
  MR_Word BaseTypeCtor_12,
  MR_Word BaseTypeCtorParams_13,
  MR_Word Ctor_14,
  MR_Word STATE_VARIABLE_InvariantTVars_0_26,
  MR_Word * STATE_VARIABLE_InvariantTVars_27,
  MR_Word STATE_VARIABLE_InvariantTParamsMap_0_28,
  MR_Word * STATE_VARIABLE_InvariantTParamsMap_29);

static void MR_CALL 
check_hlds__typecheck_coerce__compute_which_type_params_must_be_invariant_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__typecheck_coerce__compute_which_type_params_must_be_invariant_8_p_0(
  MR_Word TypeTable_9,
  MR_Word ActiveTypeCtors_10,
  MR_Word BaseTypeCtor_11,
  MR_Word BaseTypeCtorParams_12,
  MR_Word BaseTypeBodyDu_13,
  MR_Word * InvariantTVars_14,
  MR_Word STATE_VARIABLE_InvariantTParamsMap_0_25,
  MR_Word * STATE_VARIABLE_InvariantTParamsMap_26);

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
check_hlds__typecheck_coerce__typecheck_coerce_between_types_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_between_types_9_p_0(
  MR_Word TypeTable_10,
  MR_Word TVarSet_11,
  MR_Word FromType_12,
  MR_Word ToType_13,
  MR_Word STATE_VARIABLE_TypeAssign_0_39,
  MR_Word * STATE_VARIABLE_TypeAssign_40,
  MR_Word STATE_VARIABLE_InvariantTParamsMap_0_41,
  MR_Word * STATE_VARIABLE_InvariantTParamsMap_42,
  MR_Word * CoerceFails_16);

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
  MR_Word TypeTable_12,
  MR_Word TVarSet_13,
  MR_Word BaseTypeCtor_14,
  MR_Unsigned ArgNum_15,
  MR_Word Comparison_16,
  MR_Word TypeA_17,
  MR_Word TypeB_18,
  MR_Word STATE_VARIABLE_TypeAssign_0_107,
  MR_Word * STATE_VARIABLE_TypeAssign_108,
  MR_Word STATE_VARIABLE_CoerceFails_0_109,
  MR_Word * STATE_VARIABLE_CoerceFails_110);

static void MR_CALL 
check_hlds__typecheck_coerce__defined_types_compare_as_given_11_p_0(
  MR_Word TypeTable_12,
  MR_Word TVarSet_13,
  MR_Word BaseTypeCtor_14,
  MR_Unsigned ArgNum_15,
  MR_Word Comparison_16,
  MR_Word TypeA_17,
  MR_Word TypeB_18,
  MR_Word STATE_VARIABLE_TypeAssign_0_31,
  MR_Word * STATE_VARIABLE_TypeAssign_32,
  MR_Word STATE_VARIABLE_CoerceFails_0_33,
  MR_Word * STATE_VARIABLE_CoerceFails_34);

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
check_hlds__typecheck_coerce__compute_base_type_of_du_type_4_p_0(
  MR_Word TypeTable_5,
  MR_Word TVarSet_6,
  MR_Word DuTypeInfo_7,
  MR_Word * BaseDuTypeInfo_8);

static void MR_CALL 
check_hlds__typecheck_coerce__try_to_unify_types_6_p_0(
  MR_Word TypeA_7,
  MR_Word TypeB_8,
  MR_Word STATE_VARIABLE_TypeAssign_0_12,
  MR_Word * STATE_VARIABLE_TypeAssign_13,
  MR_Word STATE_VARIABLE_CoerceFails_0_14,
  MR_Word * STATE_VARIABLE_CoerceFails_15);

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
check_hlds__typecheck_coerce____Unify____active_type_ctors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____active_type_ctors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

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
check_hlds__typecheck_coerce____Unify____invariant_tparams_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____invariant_tparams_map_0_0_10001(
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
check_hlds__typecheck_coerce____Unify____maybe_invariant_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____maybe_invariant_params_0_0_10001(
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

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_3[1][1];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_4[1][9];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_5[1][6];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_6[2][4];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_7[1][12];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_8[1][5];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_9[2][15];

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_10[1][7];




static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_1[5][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
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

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_2[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_6[0])),
    ((MR_Box) (check_hlds__typecheck_coerce__typecheck_prune_coerce_constraints_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_8[0])),
    ((MR_Box) (check_hlds__typecheck_coerce__check_pending_coerce_constraints_to_fixpoint_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
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

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_4[1][9] = {
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

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_7[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_8[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_9[2][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_du_or_tuple_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_du_or_tuple_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0)),
    ((MR_Box) (&check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_coerce_scalar_common_10[1][7] = {
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

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_coerce__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0) }
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

static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_coerce__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__typecheck_coerce__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&check_hlds__typecheck_coerce__one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_coerce__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&check_hlds__typecheck_coerce__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_coerce__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_coerce__list__ti_list_1parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__type_ctor_info_active_type_ctors_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck_coerce____Unify____active_type_ctors_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_coerce____Compare____active_type_ctors_0_0_10001)),
  (MR_String) "check_hlds.typecheck_coerce",
  (MR_String) "active_type_ctors",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck_coerce__list__ti_list_1parse_tree__prog_data__type_ctor_info_type_ctor_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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

static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_coerce__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&check_hlds__typecheck_coerce__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__type_ctor_info_invariant_tparams_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck_coerce____Unify____invariant_tparams_map_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_coerce____Compare____invariant_tparams_map_0_0_10001)),
  (MR_String) "check_hlds.typecheck_coerce",
  (MR_String) "invariant_tparams_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck_coerce__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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

static const MR_EnumFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_functor_desc_maybe_invariant_params_0_0 = {
  (MR_String) "known_no_invariant_params",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_functor_desc_maybe_invariant_params_0_1 = {
  (MR_String) "may_have_invariant_params",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_ordinal_ordered_maybe_invariant_params_0[2] = {
  &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_functor_desc_maybe_invariant_params_0_0,
  &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_functor_desc_maybe_invariant_params_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_name_ordered_maybe_invariant_params_0[2] = {
  &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_functor_desc_maybe_invariant_params_0_0,
  &check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_functor_desc_maybe_invariant_params_0_1
};

static const MR_Integer check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__functor_number_map_maybe_invariant_params_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__type_ctor_info_maybe_invariant_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck_coerce____Unify____maybe_invariant_params_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_coerce____Compare____maybe_invariant_params_0_0_10001)),
  (MR_String) "check_hlds.typecheck_coerce",
  (MR_String) "maybe_invariant_params",
  { check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_name_ordered_maybe_invariant_params_0 },
  { check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__enum_ordinal_ordered_maybe_invariant_params_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__functor_number_map_maybe_invariant_params_0,

};

static const MR_PseudoTypeInfo check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__field_types_types_comparison_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_invariant_reason_0) };

static const MR_DuFunctorDesc check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__du_functor_desc_types_comparison_0_0 = {
  (MR_String) "must_be_invariant",
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
  (MR_String) "need_not_be_invariant",
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
check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__638__1_4_p_0(
  MR_Word CtorArgPosn_86,
  MR_Word HeadVar__2_116,
  MR_Word HeadVar__3_117,
  MR_Word * HeadVar__4_118)
{
  mercury__one_or_more_map__reverse_add_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), ((MR_Box) (CtorArgPosn_86)), ((MR_Box) (HeadVar__2_116)), HeadVar__3_117, HeadVar__4_118);
}

static void MR_CALL 
check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__589__1_4_p_0(
  MR_Word CtorArgPosn_35,
  MR_Word HeadVar__2_90,
  MR_Word HeadVar__3_91,
  MR_Word * HeadVar__4_92)
{
  mercury__one_or_more_map__reverse_add_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), ((MR_Box) (CtorArgPosn_35)), ((MR_Box) (HeadVar__2_90)), HeadVar__3_91, HeadVar__4_92);
}

static void MR_CALL 
check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__600__3_4_p_0(
  MR_Word CtorArgPosn_149,
  MR_Word HeadVar__2_140,
  MR_Word HeadVar__3_141,
  MR_Word * HeadVar__4_142)
{
  mercury__one_or_more_map__reverse_add_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), ((MR_Box) (CtorArgPosn_149)), ((MR_Box) (HeadVar__2_140)), HeadVar__3_141, HeadVar__4_142);
}

static void MR_CALL 
check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__600__2_4_p_0(
  MR_Word CtorArgPosn_134,
  MR_Word HeadVar__2_125,
  MR_Word HeadVar__3_126,
  MR_Word * HeadVar__4_127)
{
  mercury__one_or_more_map__reverse_add_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), ((MR_Box) (CtorArgPosn_134)), ((MR_Box) (HeadVar__2_125)), HeadVar__3_126, HeadVar__4_127);
}

static void MR_CALL 
check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__600__1_4_p_0(
  MR_Word CtorArgPosn_79,
  MR_Word HeadVar__2_97,
  MR_Word HeadVar__3_98,
  MR_Word * HeadVar__4_99)
{
  mercury__one_or_more_map__reverse_add_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), ((MR_Box) (CtorArgPosn_79)), ((MR_Box) (HeadVar__2_97)), HeadVar__3_98, HeadVar__4_99);
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
check_hlds__typecheck_coerce____Compare____maybe_invariant_params_0_0(
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
check_hlds__typecheck_coerce____Unify____maybe_invariant_params_0_0(
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
check_hlds__typecheck_coerce____Compare____invariant_tparams_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____invariant_tparams_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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
check_hlds__typecheck_coerce____Compare____active_type_ctors_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__typecheck_coerce____Unify____active_type_ctors_0_0(
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
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_12_p_0(
  MR_Word TypeTable_13,
  MR_Word ActiveTypeCtors_14,
  MR_Word BaseTypeCtor_15,
  MR_Word BaseTypeCtorParams_16,
  MR_Word DuCtor_17,
  MR_Word CtorArg_18,
  MR_Unsigned STATE_VARIABLE_ArgNum_0_25,
  MR_Unsigned * STATE_VARIABLE_ArgNum_26,
  MR_Word STATE_VARIABLE_InvariantTVars_0_27,
  MR_Word * STATE_VARIABLE_InvariantTVars_28,
  MR_Word STATE_VARIABLE_InvariantTParamsMap_0_29,
  MR_Word * STATE_VARIABLE_InvariantTParamsMap_30)
{
  MR_Word CtorArgType_23 = ((MR_Word) ((MR_hl_field(0, CtorArg_18, 1))));

  check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0(TypeTable_13, ActiveTypeCtors_14, BaseTypeCtor_15, BaseTypeCtorParams_16, DuCtor_17, CtorArgType_23, STATE_VARIABLE_ArgNum_0_25, STATE_VARIABLE_ArgNum_26, STATE_VARIABLE_InvariantTVars_0_27, STATE_VARIABLE_InvariantTVars_28, STATE_VARIABLE_InvariantTParamsMap_0_29, STATE_VARIABLE_InvariantTParamsMap_30);
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Unsigned conv15_STATE_VARIABLE_ArgNum_53;
  MR_Word conv14_STATE_VARIABLE_InvariantTVars_55;
  MR_Word conv13_STATE_VARIABLE_InvariantTParamsMap_57;

  check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Unsigned) (wrapper_arg_2)), &conv15_STATE_VARIABLE_ArgNum_53, ((MR_Word) (wrapper_arg_4)), &conv14_STATE_VARIABLE_InvariantTVars_55, ((MR_Word) (wrapper_arg_6)), &conv13_STATE_VARIABLE_InvariantTParamsMap_57);
  *wrapper_arg_3 = ((MR_Box) (conv15_STATE_VARIABLE_ArgNum_53));
  *wrapper_arg_5 = ((MR_Box) (conv14_STATE_VARIABLE_InvariantTVars_55));
  *wrapper_arg_7 = ((MR_Box) (conv13_STATE_VARIABLE_InvariantTParamsMap_57));
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_HeadVar__4_118;

  check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__638__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_HeadVar__4_118);
  *wrapper_arg_3 = ((MR_Box) (conv11_HeadVar__4_118));
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_HeadVar__4_92;

  check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__589__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_HeadVar__4_92);
  *wrapper_arg_3 = ((MR_Box) (conv9_HeadVar__4_92));
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__4_92;

  check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__589__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__4_92);
  *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__4_92));
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__4_142;

  check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__600__3_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__4_142);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__4_142));
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__4_127;

  check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__600__2_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__4_127);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_127));
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_99;

  check_hlds__typecheck_coerce__IntroducedFrom__pred__acc_invariant_tvars_in_ctor_arg_type__600__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_99);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_99));
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0(
  MR_Word TypeTable_13,
  MR_Word ActiveTypeCtors_14,
  MR_Word BaseTypeCtor_15,
  MR_Word BaseTypeCtorParams_16,
  MR_Word ConsId_17,
  MR_Word CtorArgType_18,
  MR_Unsigned STATE_VARIABLE_ArgNum_0_52,
  MR_Unsigned * STATE_VARIABLE_ArgNum_53,
  MR_Word STATE_VARIABLE_InvariantTVars_0_54,
  MR_Word * STATE_VARIABLE_InvariantTVars_55,
  MR_Word STATE_VARIABLE_InvariantTParamsMap_0_56,
  MR_Word * STATE_VARIABLE_InvariantTParamsMap_57)
{
  MR_bool succeeded;
  MR_Unsigned STATE_VARIABLE_ArgNum_1_72;

  switch (MR_tag((MR_Word) CtorArgType_18)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_ArgNum_1_72 = STATE_VARIABLE_ArgNum_0_52;
        *STATE_VARIABLE_InvariantTVars_55 = STATE_VARIABLE_InvariantTVars_0_54;
        *STATE_VARIABLE_InvariantTParamsMap_57 = STATE_VARIABLE_InvariantTParamsMap_0_56;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName_25 = ((MR_Word) ((MR_hl_field(1, CtorArgType_18, 0))));
        MR_Word ArgTypes_26 = ((MR_Word) ((MR_hl_field(1, CtorArgType_18, 1))));
        MR_Integer NumArgTypes_27;
        MR_Word TypeCtor_28;
        MR_Word TypeDefn_29;
        MR_Word TypeBody_30;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_26, &NumArgTypes_27);
        {
          TypeCtor_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtor_28, 0) = ((MR_Box) (SymName_25));
          MR_hl_field(0, TypeCtor_28, 1) = ((MR_Box) (NumArgTypes_27));
        }
        hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_13, TypeCtor_28, &TypeDefn_29);
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_29, &TypeBody_30);
        switch (MR_tag((MR_Word) TypeBody_30)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeBodyDu_31 = (MR_Word) ((MR_Word) (TypeBody_30));
              MR_Word TypeInfo_124_124;
              MR_Word ArgTypeVars_32;

              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_28, BaseTypeCtor_15);
              if (succeeded)
              {
                succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(ArgTypes_26, &ArgTypeVars_32);
                if (succeeded)
                {
                  TypeInfo_124_124 = (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[4]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_124_124, ((MR_Box) (ArgTypeVars_32)), ((MR_Box) (BaseTypeCtorParams_16)));
                }
              }
              if (succeeded)
              {
                *STATE_VARIABLE_InvariantTParamsMap_57 = STATE_VARIABLE_InvariantTParamsMap_0_56;
                *STATE_VARIABLE_InvariantTVars_55 = STATE_VARIABLE_InvariantTVars_0_54;
              }
              else
              {
                succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_28)), ActiveTypeCtors_14);
                if (succeeded)
                {
                  MR_Word PosnReason_34;
                  MR_Word CtorArgPosn_35;
                  MR_Word TypeVars_36;
                  MR_Word Var_59;
                  MR_Box conv7_STATE_VARIABLE_InvariantTVars_55;

                  *STATE_VARIABLE_InvariantTParamsMap_57 = STATE_VARIABLE_InvariantTParamsMap_0_56;
                  {
                    PosnReason_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, PosnReason_34, 0) = ((MR_Box) (BaseTypeCtor_15));
                    MR_hl_field(1, PosnReason_34, 1) = ((MR_Box) (TypeCtor_28));
                  }
                  {
                    CtorArgPosn_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, CtorArgPosn_35, 0) = ((MR_Box) (ConsId_17));
                    MR_hl_field(0, CtorArgPosn_35, 1) = ((MR_Box) (STATE_VARIABLE_ArgNum_0_52));
                    MR_hl_field(0, CtorArgPosn_35, 2) = ((MR_Box) (PosnReason_34));
                  }
                  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_26, &TypeVars_36);
                  {
                    Var_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_59, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_10[0]));
                    MR_hl_field(0, Var_59, 1) = ((MR_Box) (check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0_4));
                    MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_59, 3) = ((MR_Box) (CtorArgPosn_35));
                  }
                  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]), Var_59, TypeVars_36, ((MR_Box) (STATE_VARIABLE_InvariantTVars_0_54)), &conv7_STATE_VARIABLE_InvariantTVars_55);
                  *STATE_VARIABLE_InvariantTVars_55 = ((MR_Word) (conv7_STATE_VARIABLE_InvariantTVars_55));
                }
                else
                {
                  MR_Word InvariantTVars_156;
                  MR_Word InvariantTVarsPrime_155;
                  MR_Box conv8_InvariantTVarsPrime_155;

                  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]), STATE_VARIABLE_InvariantTParamsMap_0_56, ((MR_Box) (TypeCtor_28)), &conv8_InvariantTVarsPrime_155);
                  if (succeeded)
                  {
                    InvariantTVarsPrime_155 = ((MR_Word) (conv8_InvariantTVarsPrime_155));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    InvariantTVars_156 = InvariantTVarsPrime_155;
                    *STATE_VARIABLE_InvariantTParamsMap_57 = STATE_VARIABLE_InvariantTParamsMap_0_56;
                  }
                  else
                  {
                    MR_Word ActiveTypeCtors1_157;
                    MR_Word TypeCtorParams_158;
                    MR_Word STATE_VARIABLE_InvariantTParamsMap_1_159;

                    {
                      ActiveTypeCtors1_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ActiveTypeCtors1_157, 0) = ((MR_Box) (TypeCtor_28));
                      MR_hl_field(1, ActiveTypeCtors1_157, 1) = ((MR_Box) (ActiveTypeCtors_14));
                    }
                    hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_29, &TypeCtorParams_158);
                    check_hlds__typecheck_coerce__compute_which_type_params_must_be_invariant_8_p_0(TypeTable_13, ActiveTypeCtors1_157, TypeCtor_28, TypeCtorParams_158, TypeBodyDu_31, &InvariantTVars_156, STATE_VARIABLE_InvariantTParamsMap_0_56, &STATE_VARIABLE_InvariantTParamsMap_1_159);
                    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]), ((MR_Box) (TypeCtor_28)), ((MR_Box) (InvariantTVars_156)), STATE_VARIABLE_InvariantTParamsMap_1_159, STATE_VARIABLE_InvariantTParamsMap_57);
                  }
                  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[1]), InvariantTVars_156);
                  if (succeeded)
                    *STATE_VARIABLE_InvariantTVars_55 = STATE_VARIABLE_InvariantTVars_0_54;
                  else
                  {
                    MR_Word PosnReason_167;
                    MR_Word CtorArgPosn_168;
                    MR_Word TypeVars_169;
                    MR_Word Var_170;
                    MR_Box conv10_STATE_VARIABLE_InvariantTVars_55;

                    {
                      PosnReason_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, PosnReason_167, 0) = ((MR_Box) (BaseTypeCtor_15));
                      MR_hl_field(1, PosnReason_167, 1) = ((MR_Box) (TypeCtor_28));
                    }
                    {
                      CtorArgPosn_168 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, CtorArgPosn_168, 0) = ((MR_Box) (ConsId_17));
                      MR_hl_field(0, CtorArgPosn_168, 1) = ((MR_Box) (STATE_VARIABLE_ArgNum_0_52));
                      MR_hl_field(0, CtorArgPosn_168, 2) = ((MR_Box) (PosnReason_167));
                    }
                    parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_26, &TypeVars_169);
                    {
                      Var_170 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_170, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_10[0]));
                      MR_hl_field(0, Var_170, 1) = ((MR_Box) (check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0_5));
                      MR_hl_field(0, Var_170, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(0, Var_170, 3) = ((MR_Box) (CtorArgPosn_168));
                    }
                    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]), Var_170, TypeVars_169, ((MR_Box) (STATE_VARIABLE_InvariantTVars_0_54)), &conv10_STATE_VARIABLE_InvariantTVars_55);
                    *STATE_VARIABLE_InvariantTVars_55 = ((MR_Word) (conv10_STATE_VARIABLE_InvariantTVars_55));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_132;
              MR_Word CtorArgPosn_134;
              MR_Word TypeVars_135;
              MR_Box conv3_STATE_VARIABLE_InvariantTVars_55;

              {
                CtorArgPosn_134 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, CtorArgPosn_134, 0) = ((MR_Box) (ConsId_17));
                MR_hl_field(0, CtorArgPosn_134, 1) = ((MR_Box) (STATE_VARIABLE_ArgNum_0_52));
                MR_hl_field(0, CtorArgPosn_134, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_26, &TypeVars_135);
              {
                Var_132 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_132, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_10[0]));
                MR_hl_field(0, Var_132, 1) = ((MR_Box) (check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0_2));
                MR_hl_field(0, Var_132, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_132, 3) = ((MR_Box) (CtorArgPosn_134));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]), Var_132, TypeVars_135, ((MR_Box) (STATE_VARIABLE_InvariantTVars_0_54)), &conv3_STATE_VARIABLE_InvariantTVars_55);
              *STATE_VARIABLE_InvariantTVars_55 = ((MR_Word) (conv3_STATE_VARIABLE_InvariantTVars_55));
              *STATE_VARIABLE_InvariantTParamsMap_57 = STATE_VARIABLE_InvariantTParamsMap_0_56;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word EqvType0_40 = ((MR_Word) ((MR_hl_field(2, TypeBody_30, 0))));
              MR_Word TypeParams_41;
              MR_Word TSubst_42;
              MR_Word EqvType_43;
              MR_Unsigned Var_44;

              hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_29, &TypeParams_41);
              mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_41, ArgTypes_26, &TSubst_42);
              parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(TSubst_42, EqvType0_40, &EqvType_43);
              check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0(TypeTable_13, ActiveTypeCtors_14, BaseTypeCtor_15, BaseTypeCtorParams_16, ConsId_17, EqvType_43, STATE_VARIABLE_ArgNum_0_52, &Var_44, STATE_VARIABLE_InvariantTVars_0_54, STATE_VARIABLE_InvariantTVars_55, STATE_VARIABLE_InvariantTParamsMap_0_56, STATE_VARIABLE_InvariantTParamsMap_57);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, TypeBody_30, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_147;
                  MR_Word CtorArgPosn_149;
                  MR_Word TypeVars_150;
                  MR_Box conv5_STATE_VARIABLE_InvariantTVars_55;

                  {
                    CtorArgPosn_149 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, CtorArgPosn_149, 0) = ((MR_Box) (ConsId_17));
                    MR_hl_field(0, CtorArgPosn_149, 1) = ((MR_Box) (STATE_VARIABLE_ArgNum_0_52));
                    MR_hl_field(0, CtorArgPosn_149, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                  }
                  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_26, &TypeVars_150);
                  {
                    Var_147 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_147, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_10[0]));
                    MR_hl_field(0, Var_147, 1) = ((MR_Box) (check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0_3));
                    MR_hl_field(0, Var_147, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_147, 3) = ((MR_Box) (CtorArgPosn_149));
                  }
                  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]), Var_147, TypeVars_150, ((MR_Box) (STATE_VARIABLE_InvariantTVars_0_54)), &conv5_STATE_VARIABLE_InvariantTVars_55);
                  *STATE_VARIABLE_InvariantTVars_55 = ((MR_Word) (conv5_STATE_VARIABLE_InvariantTVars_55));
                  *STATE_VARIABLE_InvariantTParamsMap_57 = STATE_VARIABLE_InvariantTParamsMap_0_56;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_61;
                  MR_Word CtorArgPosn_79;
                  MR_Word TypeVars_80;
                  MR_Box conv1_STATE_VARIABLE_InvariantTVars_55;

                  {
                    CtorArgPosn_79 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, CtorArgPosn_79, 0) = ((MR_Box) (ConsId_17));
                    MR_hl_field(0, CtorArgPosn_79, 1) = ((MR_Box) (STATE_VARIABLE_ArgNum_0_52));
                    MR_hl_field(0, CtorArgPosn_79, 2) = ((MR_Box) ((MR_Unsigned) 8U));
                  }
                  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_26, &TypeVars_80);
                  {
                    Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_61, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_10[0]));
                    MR_hl_field(0, Var_61, 1) = ((MR_Box) (check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0_1));
                    MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_61, 3) = ((MR_Box) (CtorArgPosn_79));
                  }
                  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]), Var_61, TypeVars_80, ((MR_Box) (STATE_VARIABLE_InvariantTVars_0_54)), &conv1_STATE_VARIABLE_InvariantTVars_55);
                  *STATE_VARIABLE_InvariantTVars_55 = ((MR_Word) (conv1_STATE_VARIABLE_InvariantTVars_55));
                  *STATE_VARIABLE_InvariantTParamsMap_57 = STATE_VARIABLE_InvariantTParamsMap_0_56;
                }
                break;
            }
            break;
        }
        STATE_VARIABLE_ArgNum_1_72 = STATE_VARIABLE_ArgNum_0_52;
      }
      break;
    case (MR_Integer) 2:
      {
        STATE_VARIABLE_ArgNum_1_72 = STATE_VARIABLE_ArgNum_0_52;
        *STATE_VARIABLE_InvariantTVars_55 = STATE_VARIABLE_InvariantTVars_0_54;
        *STATE_VARIABLE_InvariantTParamsMap_57 = STATE_VARIABLE_InvariantTParamsMap_0_56;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, CtorArgType_18, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Arity_45;
            MR_Word TupleCtor_46;
            MR_Word Var_65;
            MR_Word ArgTypes_84 = ((MR_Word) ((MR_hl_field(3, CtorArgType_18, 1))));
            MR_Box conv18_Var_47;
            MR_Box conv17_STATE_VARIABLE_InvariantTVars_55;
            MR_Box conv16_STATE_VARIABLE_InvariantTParamsMap_57;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_84, &Arity_45);
            {
              TupleCtor_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, TupleCtor_46, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, TupleCtor_46, 1) = ((MR_Box) (Arity_45));
            }
            {
              Var_65 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_65, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_9[1]));
              MR_hl_field(0, Var_65, 1) = ((MR_Box) (check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0_7));
              MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 5));
              MR_hl_field(0, Var_65, 3) = ((MR_Box) (TypeTable_13));
              MR_hl_field(0, Var_65, 4) = ((MR_Box) (ActiveTypeCtors_14));
              MR_hl_field(0, Var_65, 5) = ((MR_Box) (BaseTypeCtor_15));
              MR_hl_field(0, Var_65, 6) = ((MR_Box) (BaseTypeCtorParams_16));
              MR_hl_field(0, Var_65, 7) = ((MR_Box) (TupleCtor_46));
            }
            mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[1]), Var_65, ArgTypes_84, ((MR_Box) ((MR_Unsigned) 1U)), &conv18_Var_47, ((MR_Box) (STATE_VARIABLE_InvariantTVars_0_54)), &conv17_STATE_VARIABLE_InvariantTVars_55, ((MR_Box) (STATE_VARIABLE_InvariantTParamsMap_0_56)), &conv16_STATE_VARIABLE_InvariantTParamsMap_57);
            *STATE_VARIABLE_InvariantTVars_55 = ((MR_Word) (conv17_STATE_VARIABLE_InvariantTVars_55));
            *STATE_VARIABLE_InvariantTParamsMap_57 = ((MR_Word) (conv16_STATE_VARIABLE_InvariantTParamsMap_57));
            STATE_VARIABLE_ArgNum_1_72 = STATE_VARIABLE_ArgNum_0_52;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_70;
            MR_Word ArgTypes_85 = ((MR_Word) ((MR_hl_field(3, CtorArgType_18, 2))));
            MR_Word CtorArgPosn_86;
            MR_Word TypeVars_87;
            MR_Box conv12_STATE_VARIABLE_InvariantTVars_55;

            {
              CtorArgPosn_86 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, CtorArgPosn_86, 0) = ((MR_Box) (ConsId_17));
              MR_hl_field(0, CtorArgPosn_86, 1) = ((MR_Box) (STATE_VARIABLE_ArgNum_0_52));
              MR_hl_field(0, CtorArgPosn_86, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            }
            parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_85, &TypeVars_87);
            {
              Var_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_70, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_10[0]));
              MR_hl_field(0, Var_70, 1) = ((MR_Box) (check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0_6));
              MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_70, 3) = ((MR_Box) (CtorArgPosn_86));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]), Var_70, TypeVars_87, ((MR_Box) (STATE_VARIABLE_InvariantTVars_0_54)), &conv12_STATE_VARIABLE_InvariantTVars_55);
            *STATE_VARIABLE_InvariantTVars_55 = ((MR_Word) (conv12_STATE_VARIABLE_InvariantTVars_55));
            STATE_VARIABLE_ArgNum_1_72 = STATE_VARIABLE_ArgNum_0_52;
            *STATE_VARIABLE_InvariantTParamsMap_57 = STATE_VARIABLE_InvariantTParamsMap_0_56;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubCtorArgType_51 = ((MR_Word) ((MR_hl_field(3, CtorArgType_18, 1))));

            check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_type_12_p_0(TypeTable_13, ActiveTypeCtors_14, BaseTypeCtor_15, BaseTypeCtorParams_16, ConsId_17, SubCtorArgType_51, STATE_VARIABLE_ArgNum_0_52, &STATE_VARIABLE_ArgNum_1_72, STATE_VARIABLE_InvariantTVars_0_54, STATE_VARIABLE_InvariantTVars_55, STATE_VARIABLE_InvariantTParamsMap_0_56, STATE_VARIABLE_InvariantTParamsMap_57);
          }
          break;
      }
      break;
  }
  *STATE_VARIABLE_ArgNum_53 = (STATE_VARIABLE_ArgNum_1_72 + (MR_Unsigned) 1U);
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Unsigned conv2_STATE_VARIABLE_ArgNum_26;
  MR_Word conv1_STATE_VARIABLE_InvariantTVars_28;
  MR_Word conv0_STATE_VARIABLE_InvariantTParamsMap_30;

  check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_arg_12_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Unsigned) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ArgNum_26, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_InvariantTVars_28, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_InvariantTParamsMap_30);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ArgNum_26));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_InvariantTVars_28));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_InvariantTParamsMap_30));
}

static void MR_CALL 
check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_9_p_0(
  MR_Word TypeTable_10,
  MR_Word ActiveTypeCtors_11,
  MR_Word BaseTypeCtor_12,
  MR_Word BaseTypeCtorParams_13,
  MR_Word Ctor_14,
  MR_Word STATE_VARIABLE_InvariantTVars_0_26,
  MR_Word * STATE_VARIABLE_InvariantTVars_27,
  MR_Word STATE_VARIABLE_InvariantTParamsMap_0_28,
  MR_Word * STATE_VARIABLE_InvariantTParamsMap_29)
{
  MR_Word CtorSymName_19 = ((MR_Word) ((MR_hl_field(0, Ctor_14, 2))));
  MR_Word CtorArgs_20 = ((MR_Word) ((MR_hl_field(0, Ctor_14, 3))));
  MR_Integer Arity_21 = ((MR_Integer) ((MR_hl_field(0, Ctor_14, 4))));
  MR_Word DuCtor_23;
  MR_Word ConsId_24;
  MR_Word Var_30;
  MR_Box conv5_Var_25;
  MR_Box conv4_STATE_VARIABLE_InvariantTVars_27;
  MR_Box conv3_STATE_VARIABLE_InvariantTParamsMap_29;

  {
    DuCtor_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DuCtor_23, 0) = ((MR_Box) (CtorSymName_19));
    MR_hl_field(0, DuCtor_23, 1) = ((MR_Box) (Arity_21));
    MR_hl_field(0, DuCtor_23, 2) = ((MR_Box) (BaseTypeCtor_12));
  }
  ConsId_24 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_23)));
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_9[0]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_9_p_0_1));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) (TypeTable_10));
    MR_hl_field(0, Var_30, 4) = ((MR_Box) (ActiveTypeCtors_11));
    MR_hl_field(0, Var_30, 5) = ((MR_Box) (BaseTypeCtor_12));
    MR_hl_field(0, Var_30, 6) = ((MR_Box) (BaseTypeCtorParams_13));
    MR_hl_field(0, Var_30, 7) = ((MR_Box) (ConsId_24));
  }
  mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[1]), Var_30, CtorArgs_20, ((MR_Box) ((MR_Unsigned) 1U)), &conv5_Var_25, ((MR_Box) (STATE_VARIABLE_InvariantTVars_0_26)), &conv4_STATE_VARIABLE_InvariantTVars_27, ((MR_Box) (STATE_VARIABLE_InvariantTParamsMap_0_28)), &conv3_STATE_VARIABLE_InvariantTParamsMap_29);
  *STATE_VARIABLE_InvariantTVars_27 = ((MR_Word) (conv4_STATE_VARIABLE_InvariantTVars_27));
  *STATE_VARIABLE_InvariantTParamsMap_29 = ((MR_Word) (conv3_STATE_VARIABLE_InvariantTParamsMap_29));
}

static void MR_CALL 
check_hlds__typecheck_coerce__compute_which_type_params_must_be_invariant_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_InvariantTVars_27;
  MR_Word conv0_STATE_VARIABLE_InvariantTParamsMap_29;

  check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_InvariantTVars_27, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_InvariantTParamsMap_29);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_InvariantTVars_27));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_InvariantTParamsMap_29));
}

static void MR_CALL 
check_hlds__typecheck_coerce__compute_which_type_params_must_be_invariant_8_p_0(
  MR_Word TypeTable_9,
  MR_Word ActiveTypeCtors_10,
  MR_Word BaseTypeCtor_11,
  MR_Word BaseTypeCtorParams_12,
  MR_Word BaseTypeBodyDu_13,
  MR_Word * InvariantTVars_14,
  MR_Word STATE_VARIABLE_InvariantTParamsMap_0_25,
  MR_Word * STATE_VARIABLE_InvariantTParamsMap_26)
{
  if ((BaseTypeCtorParams_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__one_or_more_map__init_1_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0), InvariantTVars_14);
    *STATE_VARIABLE_InvariantTParamsMap_26 = STATE_VARIABLE_InvariantTParamsMap_0_25;
  }
  else
  {
    MR_Word OoMCtors_18 = ((MR_Word) ((MR_hl_field(0, BaseTypeBodyDu_13, 0))));
    MR_Word Ctors_24;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Box conv3_InvariantTVars_14;
    MR_Box conv2_STATE_VARIABLE_InvariantTParamsMap_26;

    Ctors_24 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_18);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_27, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_7[0]));
      MR_hl_field(0, Var_27, 1) = ((MR_Box) (check_hlds__typecheck_coerce__compute_which_type_params_must_be_invariant_8_p_0_1));
      MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_27, 3) = ((MR_Box) (TypeTable_9));
      MR_hl_field(0, Var_27, 4) = ((MR_Box) (ActiveTypeCtors_10));
      MR_hl_field(0, Var_27, 5) = ((MR_Box) (BaseTypeCtor_11));
      MR_hl_field(0, Var_27, 6) = ((MR_Box) (BaseTypeCtorParams_12));
    }
    Var_28 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[1]), Var_27, Ctors_24, ((MR_Box) (Var_28)), &conv3_InvariantTVars_14, ((MR_Box) (STATE_VARIABLE_InvariantTParamsMap_0_25)), &conv2_STATE_VARIABLE_InvariantTParamsMap_26);
    *InvariantTVars_14 = ((MR_Word) (conv3_InvariantTVars_14));
    *STATE_VARIABLE_InvariantTParamsMap_26 = ((MR_Word) (conv2_STATE_VARIABLE_InvariantTParamsMap_26));
  }
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
  succeeded = mercury__list__all_true_2_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[4]), Coercions_3);
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
        mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[3]), DelayedCoercions_11, Coercions_8);
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
    (env_ptr)->check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__succeeded = mercury__list__contains_2_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (env_ptr)->check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__ExistQTVars0_44, ((MR_Box) ((env_ptr)->check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__TVar_60)));
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
      parse_tree__prog_type_scan__type_contains_var_2_p_0((env_ptr)->check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__FromType_46, &(env_ptr)->check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__TVar_60, check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_2, env_ptr);
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
              MR_Word CoerceFails_50;
              MR_Word Var_55;
              MR_Word _InvariantTParamsMap_49;

              Var_55 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]));
              check_hlds__typecheck_coerce__typecheck_coerce_between_types_9_p_0(HeadVar__1_1, TVarSet0_43, (env).check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__FromType_46, ToType_47, STATE_VARIABLE_TypeAssign_0_5, &TypeAssign1_48, Var_55, &_InvariantTParamsMap_49, &CoerceFails_50);
              if ((CoerceFails_50 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word TypeBindings1_51;
                MR_Word TypeA_64;
                MR_Word TypeB_65;
                MR_Word Var_66;
                MR_Word Var_67;

                check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign1_48, &TypeBindings1_51);
                parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_51, (env).check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__FromType_46, &TypeA_64);
                parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_51, ToType_47, &TypeB_65);
                Var_66 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(TypeA_64);
                Var_67 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(TypeB_65);
                (env).check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0_env_0__succeeded = parse_tree__prog_type_test____Unify____non_kinded_type_0_0(Var_66, Var_67);
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
                MR_Word Coercion_81;
                MR_Word TailKeepCoercions_82;

                {
                  Coercion_81 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Coercion_81, 0) = ((MR_Box) (FromType0_36));
                  MR_hl_field(0, Coercion_81, 1) = ((MR_Box) (ToType0_37));
                  MR_hl_field(0, Coercion_81, 2) = ((MR_Box) (Context_38));
                  MR_hl_field(0, Coercion_81, 3) = ((MR_Box) (FromVar_39));
                  MR_hl_field(0, Coercion_81, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(0, Coercion_81, 5) = ((MR_Box) (CoerceFails_50));
                }
                check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0(HeadVar__1_1, Coercions0_18, &TailKeepCoercions_82, HeadVar__4_4, STATE_VARIABLE_TypeAssign_0_5, STATE_VARIABLE_TypeAssign_6, (MR_Integer) 1, STATE_VARIABLE_MadeProgress_8);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Coercion_81));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailKeepCoercions_82));
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
            MR_Word TailKeepCoercions_73;

            check_hlds__typecheck_coerce__check_pending_coerce_constraints_loop_8_p_0(HeadVar__1_1, Coercions0_18, &TailKeepCoercions_73, HeadVar__4_4, STATE_VARIABLE_TypeAssign_0_5, STATE_VARIABLE_TypeAssign_6, (MR_Integer) 1, STATE_VARIABLE_MadeProgress_8);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Coercion0_17));
              MR_hl_field(1, base, 1) = ((MR_Box) (TailKeepCoercions_73));
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
    (env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = mercury__list__contains_2_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ExistQTVars0_15, ((MR_Box) ((env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__TVar_42)));
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
      parse_tree__prog_type_scan__type_contains_var_2_p_0((env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_18, &(env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__TVar_42, check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_2, env_ptr);
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
    (env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = mercury__list__contains_2_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ExistQTVars0_15, ((MR_Box) ((env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__TVar_44)));
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
      parse_tree__prog_type_scan__type_contains_var_2_p_0((env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_21, &(env_ptr)->check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__TVar_44, check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_5, env_ptr);
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
      (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[3]), ((MR_Box) (ToVar_10)), ((MR_Box) (FromVar_9)));
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
      MR_Word CoerceFails_26;
      MR_Word Var_32;
      MR_Word _InvariantTParamsMap_25;

      check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(Info_7, &TypeTable_23);
      Var_32 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]));
      check_hlds__typecheck_coerce__typecheck_coerce_between_types_9_p_0(TypeTable_23, TVarSet0_14, (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_18, (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_21, TypeAssign2_22, &TypeAssign3_24, Var_32, &_InvariantTParamsMap_25, &CoerceFails_26);
      if ((CoerceFails_26 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeBindings1_27;
        MR_Word TypeA_48;
        MR_Word TypeB_49;
        MR_Word Var_50;
        MR_Word Var_51;

        check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign3_24, &TypeBindings1_27);
        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_27, (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_18, &TypeA_48);
        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_27, (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_21, &TypeB_49);
        Var_50 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(TypeA_48);
        Var_51 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(TypeB_49);
        (env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded = parse_tree__prog_type_test____Unify____non_kinded_type_0_0(Var_50, Var_51);
        if ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__succeeded)
        {
          MR_Word Coercion_28;
          MR_Word Coercions0_53;
          MR_Word Coercions_54;

          {
            Coercion_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Coercion_28, 0) = ((MR_Box) ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_18));
            MR_hl_field(0, Coercion_28, 1) = ((MR_Box) ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_21));
            MR_hl_field(0, Coercion_28, 2) = ((MR_Box) (Context_8));
            MR_hl_field(0, Coercion_28, 3) = ((MR_Box) (FromVar_9));
            MR_hl_field(0, Coercion_28, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
            MR_hl_field(0, Coercion_28, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(TypeAssign3_24, &Coercions0_53);
          {
            Coercions_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Coercions_54, 0) = ((MR_Box) (Coercion_28));
            MR_hl_field(1, Coercions_54, 1) = ((MR_Box) (Coercions0_53));
          }
          check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(Coercions_54, TypeAssign3_24, TypeAssign_12);
        }
        else
          *TypeAssign_12 = TypeAssign3_24;
      }
      else
      {
        MR_Word Coercion_39;
        MR_Word Coercions0_55;
        MR_Word Coercions_56;

        {
          Coercion_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Coercion_39, 0) = ((MR_Box) ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_18));
          MR_hl_field(0, Coercion_39, 1) = ((MR_Box) ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_21));
          MR_hl_field(0, Coercion_39, 2) = ((MR_Box) (Context_8));
          MR_hl_field(0, Coercion_39, 3) = ((MR_Box) (FromVar_9));
          MR_hl_field(0, Coercion_39, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(0, Coercion_39, 5) = ((MR_Box) (CoerceFails_26));
        }
        check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(TypeAssign2_22, &Coercions0_55);
        {
          Coercions_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Coercions_56, 0) = ((MR_Box) (Coercion_39));
          MR_hl_field(1, Coercions_56, 1) = ((MR_Box) (Coercions0_55));
        }
        check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(Coercions_56, TypeAssign2_22, TypeAssign_12);
      }
    }
    else
    {
      MR_Word CoerceFail_31;
      MR_Word Var_37;
      MR_Word Coercion_40;
      MR_Word Coercions0_57;
      MR_Word Coercions_58;

      {
        CoerceFail_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, CoerceFail_31, 0) = ((MR_Box) ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ExistQTVars0_15));
        MR_hl_field(1, CoerceFail_31, 1) = ((MR_Box) ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_18));
        MR_hl_field(1, CoerceFail_31, 2) = ((MR_Box) ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_21));
      }
      {
        Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_37, 0) = ((MR_Box) (CoerceFail_31));
        MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Coercion_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Coercion_40, 0) = ((MR_Box) ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__FromType_18));
        MR_hl_field(0, Coercion_40, 1) = ((MR_Box) ((env).check_hlds__typecheck_coerce__typecheck_coerce_in_type_assign_6_p_0_env_0__ToType_21));
        MR_hl_field(0, Coercion_40, 2) = ((MR_Box) (Context_8));
        MR_hl_field(0, Coercion_40, 3) = ((MR_Box) (FromVar_9));
        MR_hl_field(0, Coercion_40, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(0, Coercion_40, 5) = ((MR_Box) (Var_37));
      }
      check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(TypeAssign2_22, &Coercions0_57);
      {
        Coercions_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Coercions_58, 0) = ((MR_Box) (Coercion_40));
        MR_hl_field(1, Coercions_58, 1) = ((MR_Box) (Coercions0_57));
      }
      check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(Coercions_58, TypeAssign2_22, TypeAssign_12);
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_between_types_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_InvariantTVars_27;
  MR_Word conv0_STATE_VARIABLE_InvariantTParamsMap_29;

  check_hlds__typecheck_coerce__acc_invariant_tvars_in_ctor_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_InvariantTVars_27, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_InvariantTParamsMap_29);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_InvariantTVars_27));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_InvariantTParamsMap_29));
}

static void MR_CALL 
check_hlds__typecheck_coerce__typecheck_coerce_between_types_9_p_0(
  MR_Word TypeTable_10,
  MR_Word TVarSet_11,
  MR_Word FromType_12,
  MR_Word ToType_13,
  MR_Word STATE_VARIABLE_TypeAssign_0_39,
  MR_Word * STATE_VARIABLE_TypeAssign_40,
  MR_Word STATE_VARIABLE_InvariantTParamsMap_0_41,
  MR_Word * STATE_VARIABLE_InvariantTParamsMap_42,
  MR_Word * CoerceFails_16)
{
  MR_bool succeeded;
  MR_Word FromMaybeDuType_17;
  MR_Word ToMaybeDuType_18;
  MR_Word MaybeBoth_19;

  check_hlds__typecheck_util__classify_is_du_type_3_p_0(TypeTable_10, FromType_12, &FromMaybeDuType_17);
  check_hlds__typecheck_util__classify_is_du_type_3_p_0(TypeTable_10, ToType_13, &ToMaybeDuType_18);
  if (((MR_tag((MR_Word) FromMaybeDuType_17)) == (MR_Integer) 0))
  {
    MR_Word Var_65 = (MR_Word) ((MR_Word) (FromMaybeDuType_17));

    if (((MR_tag((MR_Word) ToMaybeDuType_18)) == (MR_Integer) 0))
    {
      MR_Word ToDuTypeInfo_58 = (MR_Word) ((MR_Word) (ToMaybeDuType_18));

      {
        MaybeBoth_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeBoth_19, 0) = ((MR_Box) (Var_65));
        MR_hl_field(1, MaybeBoth_19, 1) = ((MR_Box) (ToDuTypeInfo_58));
      }
    }
    else
    {
      MR_String ToTypeDesc_63 = ((MR_String) ((MR_hl_field(1, ToMaybeDuType_18, 0))));
      MR_Word CoerceFail_64;

      {
        CoerceFail_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, CoerceFail_64, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, CoerceFail_64, 1) = ((MR_Box) (FromType_12));
        MR_hl_field(3, CoerceFail_64, 2) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(3, CoerceFail_64, 3) = ((MR_Box) (ToType_13));
        MR_hl_field(3, CoerceFail_64, 4) = ((MR_Box) (ToTypeDesc_63));
      }
      {
        MaybeBoth_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeBoth_19, 0) = ((MR_Box) (CoerceFail_64));
      }
    }
  }
  else
  {
    MR_String Var_66 = ((MR_String) ((MR_hl_field(1, FromMaybeDuType_17, 0))));

    if (((MR_tag((MR_Word) ToMaybeDuType_18)) == (MR_Integer) 0))
    {
      MR_Word CoerceFail_62;

      {
        CoerceFail_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, CoerceFail_62, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, CoerceFail_62, 1) = ((MR_Box) (FromType_12));
        MR_hl_field(3, CoerceFail_62, 2) = ((MR_Box) (Var_66));
        MR_hl_field(3, CoerceFail_62, 3) = ((MR_Box) (ToType_13));
        MR_hl_field(3, CoerceFail_62, 4) = ((MR_Box) ((MR_String) ""));
      }
      {
        MaybeBoth_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeBoth_19, 0) = ((MR_Box) (CoerceFail_62));
      }
    }
    else
    {
      MR_String ToTypeDesc_53 = ((MR_String) ((MR_hl_field(1, ToMaybeDuType_18, 0))));
      MR_Word CoerceFail_54;

      {
        CoerceFail_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, CoerceFail_54, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, CoerceFail_54, 1) = ((MR_Box) (FromType_12));
        MR_hl_field(3, CoerceFail_54, 2) = ((MR_Box) (Var_66));
        MR_hl_field(3, CoerceFail_54, 3) = ((MR_Box) (ToType_13));
        MR_hl_field(3, CoerceFail_54, 4) = ((MR_Box) (ToTypeDesc_53));
      }
      {
        MaybeBoth_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeBoth_19, 0) = ((MR_Box) (CoerceFail_54));
      }
    }
  }
  if (((MR_tag((MR_Word) MaybeBoth_19)) == (MR_Integer) 0))
  {
    MR_Word CoerceFail_20 = ((MR_Word) ((MR_hl_field(0, MaybeBoth_19, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *CoerceFails_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_20));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_TypeAssign_40 = STATE_VARIABLE_TypeAssign_0_39;
    *STATE_VARIABLE_InvariantTParamsMap_42 = STATE_VARIABLE_InvariantTParamsMap_0_41;
  }
  else
  {
    MR_Word FromDuTypeInfo_21 = ((MR_Word) ((MR_hl_field(1, MaybeBoth_19, 0))));
    MR_Word ToDuTypeInfo_22 = ((MR_Word) ((MR_hl_field(1, MaybeBoth_19, 1))));
    MR_Word FromBaseDuTypeInfo_23;
    MR_Word ToBaseDuTypeInfo_24;
    MR_Word FromBaseTypeCtor_25;
    MR_Word FromBaseTypeArgTypes_26;
    MR_Word FromBaseTypeDefn_27;
    MR_Word FromBaseTypeBodyDu_28;
    MR_Word ToBaseTypeCtor_29;
    MR_Word ToBaseTypeArgTypes_30;

    check_hlds__typecheck_coerce__compute_base_type_of_du_type_4_p_0(TypeTable_10, TVarSet_11, FromDuTypeInfo_21, &FromBaseDuTypeInfo_23);
    check_hlds__typecheck_coerce__compute_base_type_of_du_type_4_p_0(TypeTable_10, TVarSet_11, ToDuTypeInfo_22, &ToBaseDuTypeInfo_24);
    FromBaseTypeCtor_25 = ((MR_Word) ((MR_hl_field(0, FromBaseDuTypeInfo_23, 0))));
    FromBaseTypeArgTypes_26 = ((MR_Word) ((MR_hl_field(0, FromBaseDuTypeInfo_23, 1))));
    FromBaseTypeDefn_27 = ((MR_Word) ((MR_hl_field(0, FromBaseDuTypeInfo_23, 2))));
    FromBaseTypeBodyDu_28 = ((MR_Word) ((MR_hl_field(0, FromBaseDuTypeInfo_23, 3))));
    ToBaseTypeCtor_29 = ((MR_Word) ((MR_hl_field(0, ToBaseDuTypeInfo_24, 0))));
    ToBaseTypeArgTypes_30 = ((MR_Word) ((MR_hl_field(0, ToBaseDuTypeInfo_24, 1))));
    succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(FromBaseTypeCtor_25, ToBaseTypeCtor_29);
    if (succeeded)
    {
      MR_Word BaseTypeCtorParams_36;
      MR_Word InvariantTVars_37;
      MR_Unsigned Var_38;

      hlds__hlds_data__get_type_defn_tparams_2_p_0(FromBaseTypeDefn_27, &BaseTypeCtorParams_36);
      if ((BaseTypeCtorParams_36 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__one_or_more_map__init_1_p_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0), &InvariantTVars_37);
        *STATE_VARIABLE_InvariantTParamsMap_42 = STATE_VARIABLE_InvariantTParamsMap_0_41;
      }
      else
      {
        MR_Word OoMCtors_67 = ((MR_Word) ((MR_hl_field(0, FromBaseTypeBodyDu_28, 0))));
        MR_Word Ctors_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Box conv3_InvariantTVars_37;
        MR_Box conv2_STATE_VARIABLE_InvariantTParamsMap_42;

        Ctors_73 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_67);
        {
          Var_74 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_74, 0) = ((MR_Box) (&check_hlds__typecheck_coerce_scalar_common_7[0]));
          MR_hl_field(0, Var_74, 1) = ((MR_Box) (check_hlds__typecheck_coerce__typecheck_coerce_between_types_9_p_0_1));
          MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_74, 3) = ((MR_Box) (TypeTable_10));
          MR_hl_field(0, Var_74, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_74, 5) = ((MR_Box) (FromBaseTypeCtor_25));
          MR_hl_field(0, Var_74, 6) = ((MR_Box) (BaseTypeCtorParams_36));
        }
        Var_75 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&check_hlds__typecheck_coerce_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0));
        mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[0]), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[1]), Var_74, Ctors_73, ((MR_Box) (Var_75)), &conv3_InvariantTVars_37, ((MR_Box) (STATE_VARIABLE_InvariantTParamsMap_0_41)), &conv2_STATE_VARIABLE_InvariantTParamsMap_42);
        InvariantTVars_37 = ((MR_Word) (conv3_InvariantTVars_37));
        *STATE_VARIABLE_InvariantTParamsMap_42 = ((MR_Word) (conv2_STATE_VARIABLE_InvariantTParamsMap_42));
      }
      check_hlds__typecheck_coerce__are_actual_param_type_pairs_as_related_as_needed_13_p_0(TypeTable_10, TVarSet_11, InvariantTVars_37, FromBaseTypeCtor_25, BaseTypeCtorParams_36, FromBaseTypeArgTypes_26, ToBaseTypeArgTypes_30, (MR_Unsigned) 1U, &Var_38, STATE_VARIABLE_TypeAssign_0_39, STATE_VARIABLE_TypeAssign_40, (MR_Word) ((MR_Unsigned) 0U), CoerceFails_16);
    }
    else
    {
      MR_Word CoerceFail_50;

      {
        CoerceFail_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CoerceFail_50, 0) = ((MR_Box) (FromType_12));
        MR_hl_field(0, CoerceFail_50, 1) = ((MR_Box) (FromBaseTypeCtor_25));
        MR_hl_field(0, CoerceFail_50, 2) = ((MR_Box) (ToType_13));
        MR_hl_field(0, CoerceFail_50, 3) = ((MR_Box) (ToBaseTypeCtor_29));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *CoerceFails_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_50));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_InvariantTParamsMap_42 = STATE_VARIABLE_InvariantTParamsMap_0_41;
      *STATE_VARIABLE_TypeAssign_40 = STATE_VARIABLE_TypeAssign_0_39;
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
        MR_Word Comparison_45;
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
          MR_Word Var_46;

          {
            Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_46, 0) = ((MR_Box) (OoMCtorArgPosn_44));
          }
          {
            Comparison_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Comparison_45, 0) = ((MR_Box) (Var_46));
          }
        }
        else
          Comparison_45 = (MR_Word) ((MR_Unsigned) 0U);
        check_hlds__typecheck_coerce__types_compare_as_given_11_p_0(TypeTable_14, TVarSet_15, BaseTypeCtor_17, STATE_VARIABLE_ArgNum_0_30, Comparison_45, HeadFromArgType_26, HeadToArgType_28, STATE_VARIABLE_TypeAssign_0_32, &STATE_VARIABLE_TypeAssign_1_37, STATE_VARIABLE_CoerceFails_0_34, &STATE_VARIABLE_CoerceFails_1_38);
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
  MR_Word TypeTable_12,
  MR_Word TVarSet_13,
  MR_Word BaseTypeCtor_14,
  MR_Unsigned ArgNum_15,
  MR_Word Comparison_16,
  MR_Word TypeA_17,
  MR_Word TypeB_18,
  MR_Word STATE_VARIABLE_TypeAssign_0_107,
  MR_Word * STATE_VARIABLE_TypeAssign_108,
  MR_Word STATE_VARIABLE_CoerceFails_0_109,
  MR_Word * STATE_VARIABLE_CoerceFails_110)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TypeA_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__typecheck_coerce__try_to_unify_types_6_p_0(TypeA_17, TypeB_18, STATE_VARIABLE_TypeAssign_0_107, STATE_VARIABLE_TypeAssign_108, STATE_VARIABLE_CoerceFails_0_109, STATE_VARIABLE_CoerceFails_110);
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) TypeB_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__typecheck_coerce__try_to_unify_types_6_p_0(TypeA_17, TypeB_18, STATE_VARIABLE_TypeAssign_0_107, STATE_VARIABLE_TypeAssign_108, STATE_VARIABLE_CoerceFails_0_109, STATE_VARIABLE_CoerceFails_110);
            break;
          case (MR_Integer) 1:
            check_hlds__typecheck_coerce__defined_types_compare_as_given_11_p_0(TypeTable_12, TVarSet_13, BaseTypeCtor_14, ArgNum_15, Comparison_16, TypeA_17, TypeB_18, STATE_VARIABLE_TypeAssign_0_107, STATE_VARIABLE_TypeAssign_108, STATE_VARIABLE_CoerceFails_0_109, STATE_VARIABLE_CoerceFails_110);
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            {
              MR_Word CoerceFail_142;

              {
                CoerceFail_142 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, CoerceFail_142, 0) = ((MR_Box) (TypeTable_12));
                MR_hl_field(2, CoerceFail_142, 1) = ((MR_Box) (TypeA_17));
                MR_hl_field(2, CoerceFail_142, 2) = ((MR_Box) (TypeB_18));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_CoerceFails_110 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_142));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_109));
              }
              *STATE_VARIABLE_TypeAssign_108 = STATE_VARIABLE_TypeAssign_0_107;
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinTypeA_21 = ((MR_Word) ((MR_hl_field(2, TypeA_17, 0))));

          switch (MR_tag((MR_Word) TypeB_18)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              check_hlds__typecheck_coerce__try_to_unify_types_6_p_0(TypeA_17, TypeB_18, STATE_VARIABLE_TypeAssign_0_107, STATE_VARIABLE_TypeAssign_108, STATE_VARIABLE_CoerceFails_0_109, STATE_VARIABLE_CoerceFails_110);
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 3:
              {
                MR_Word CoerceFail_141;

                {
                  CoerceFail_141 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, CoerceFail_141, 0) = ((MR_Box) (TypeTable_12));
                  MR_hl_field(2, CoerceFail_141, 1) = ((MR_Box) (TypeA_17));
                  MR_hl_field(2, CoerceFail_141, 2) = ((MR_Box) (TypeB_18));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_CoerceFails_110 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_141));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_109));
                }
                *STATE_VARIABLE_TypeAssign_108 = STATE_VARIABLE_TypeAssign_0_107;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word BuiltinTypeB_22 = ((MR_Word) ((MR_hl_field(2, TypeB_18, 0))));

                succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinTypeA_21, BuiltinTypeB_22);
                if (succeeded)
                  *STATE_VARIABLE_CoerceFails_110 = STATE_VARIABLE_CoerceFails_0_109;
                else
                {
                  MR_Word CoerceFail_23;

                  {
                    CoerceFail_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, CoerceFail_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, CoerceFail_23, 1) = ((MR_Box) (BuiltinTypeA_21));
                    MR_hl_field(3, CoerceFail_23, 2) = ((MR_Box) (BuiltinTypeB_22));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_CoerceFails_110 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_23));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_109));
                  }
                }
                *STATE_VARIABLE_TypeAssign_108 = STATE_VARIABLE_TypeAssign_0_107;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TypeA_17, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypesA_56 = ((MR_Word) ((MR_hl_field(3, TypeA_17, 1))));

              switch (MR_tag((MR_Word) TypeB_18)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  check_hlds__typecheck_coerce__try_to_unify_types_6_p_0(TypeA_17, TypeB_18, STATE_VARIABLE_TypeAssign_0_107, STATE_VARIABLE_TypeAssign_108, STATE_VARIABLE_CoerceFails_0_109, STATE_VARIABLE_CoerceFails_110);
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word CoerceFail_148;

                    {
                      CoerceFail_148 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, CoerceFail_148, 0) = ((MR_Box) (TypeTable_12));
                      MR_hl_field(2, CoerceFail_148, 1) = ((MR_Box) (TypeA_17));
                      MR_hl_field(2, CoerceFail_148, 2) = ((MR_Box) (TypeB_18));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_CoerceFails_110 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_148));
                      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_109));
                    }
                    *STATE_VARIABLE_TypeAssign_108 = STATE_VARIABLE_TypeAssign_0_107;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, TypeB_18, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ArgTypesB_58 = ((MR_Word) ((MR_hl_field(3, TypeB_18, 1))));
                        MR_Integer NumArgTypesA_60;
                        MR_Integer NumArgTypesB_61;

                        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesA_56, &NumArgTypesA_60);
                        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesB_58, &NumArgTypesB_61);
                        succeeded = (NumArgTypesA_60 == NumArgTypesB_61);
                        if (succeeded)
                          check_hlds__typecheck_coerce__corresponding_types_compare_as_given_11_p_0(TypeTable_12, TVarSet_13, BaseTypeCtor_14, ArgNum_15, Comparison_16, ArgTypesA_56, ArgTypesB_58, STATE_VARIABLE_TypeAssign_0_107, STATE_VARIABLE_TypeAssign_108, STATE_VARIABLE_CoerceFails_0_109, STATE_VARIABLE_CoerceFails_110);
                        else
                        {
                          MR_Word CoerceFail_145;

                          {
                            CoerceFail_145 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, CoerceFail_145, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                            MR_hl_field(3, CoerceFail_145, 1) = ((MR_Box) (NumArgTypesA_60));
                            MR_hl_field(3, CoerceFail_145, 2) = ((MR_Box) (NumArgTypesB_61));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            *STATE_VARIABLE_CoerceFails_110 = base;
                            MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_145));
                            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_109));
                          }
                          *STATE_VARIABLE_TypeAssign_108 = STATE_VARIABLE_TypeAssign_0_107;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      {
                        MR_Word CoerceFail_148;

                        {
                          CoerceFail_148 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, CoerceFail_148, 0) = ((MR_Box) (TypeTable_12));
                          MR_hl_field(2, CoerceFail_148, 1) = ((MR_Box) (TypeA_17));
                          MR_hl_field(2, CoerceFail_148, 2) = ((MR_Box) (TypeB_18));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *STATE_VARIABLE_CoerceFails_110 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_148));
                          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_109));
                        }
                        *STATE_VARIABLE_TypeAssign_108 = STATE_VARIABLE_TypeAssign_0_107;
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredOrFuncA_74 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_17, 1))) & (MR_Integer) 1);
              MR_Word PurityA_76 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_17, 4))) & (MR_Integer) 3);
              MR_Word ArgTypesA_159 = ((MR_Word) ((MR_hl_field(3, TypeA_17, 2))));

              switch (MR_tag((MR_Word) TypeB_18)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  check_hlds__typecheck_coerce__try_to_unify_types_6_p_0(TypeA_17, TypeB_18, STATE_VARIABLE_TypeAssign_0_107, STATE_VARIABLE_TypeAssign_108, STATE_VARIABLE_CoerceFails_0_109, STATE_VARIABLE_CoerceFails_110);
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word CoerceFail_155;

                    {
                      CoerceFail_155 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, CoerceFail_155, 0) = ((MR_Box) (TypeTable_12));
                      MR_hl_field(2, CoerceFail_155, 1) = ((MR_Box) (TypeA_17));
                      MR_hl_field(2, CoerceFail_155, 2) = ((MR_Box) (TypeB_18));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_CoerceFails_110 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_155));
                      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_109));
                    }
                    *STATE_VARIABLE_TypeAssign_108 = STATE_VARIABLE_TypeAssign_0_107;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, TypeB_18, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 2:
                      {
                        MR_Word CoerceFail_155;

                        {
                          CoerceFail_155 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, CoerceFail_155, 0) = ((MR_Box) (TypeTable_12));
                          MR_hl_field(2, CoerceFail_155, 1) = ((MR_Box) (TypeA_17));
                          MR_hl_field(2, CoerceFail_155, 2) = ((MR_Box) (TypeB_18));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *STATE_VARIABLE_CoerceFails_110 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_155));
                          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_109));
                        }
                        *STATE_VARIABLE_TypeAssign_108 = STATE_VARIABLE_TypeAssign_0_107;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word PredOrFuncB_77 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_18, 1))) & (MR_Integer) 1);
                        MR_Word PurityB_79 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_18, 4))) & (MR_Integer) 3);
                        MR_Word ArgTypesB_154 = ((MR_Word) ((MR_hl_field(3, TypeB_18, 2))));

                        succeeded = (PredOrFuncA_74 == PredOrFuncB_77);
                        if (succeeded)
                          succeeded = (PurityA_76 == PurityB_79);
                        if (succeeded)
                          check_hlds__typecheck_coerce__corresponding_types_compare_as_given_11_p_0(TypeTable_12, TVarSet_13, BaseTypeCtor_14, ArgNum_15, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_coerce_scalar_common_3[0])), ArgTypesA_159, ArgTypesB_154, STATE_VARIABLE_TypeAssign_0_107, STATE_VARIABLE_TypeAssign_108, STATE_VARIABLE_CoerceFails_0_109, STATE_VARIABLE_CoerceFails_110);
                        else
                        {
                          MR_Word CoerceFail_151;

                          {
                            CoerceFail_151 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, CoerceFail_151, 0) = ((MR_Box) (TypeTable_12));
                            MR_hl_field(2, CoerceFail_151, 1) = ((MR_Box) (TypeA_17));
                            MR_hl_field(2, CoerceFail_151, 2) = ((MR_Box) (TypeB_18));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            *STATE_VARIABLE_CoerceFails_110 = base;
                            MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_151));
                            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_109));
                          }
                          *STATE_VARIABLE_TypeAssign_108 = STATE_VARIABLE_TypeAssign_0_107;
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubTypeA_91 = ((MR_Word) ((MR_hl_field(3, TypeA_17, 1))));
              MR_Word KindA_92 = ((MR_Word) ((MR_hl_field(3, TypeA_17, 2))));

              switch (MR_tag((MR_Word) TypeB_18)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  check_hlds__typecheck_coerce__try_to_unify_types_6_p_0(TypeA_17, TypeB_18, STATE_VARIABLE_TypeAssign_0_107, STATE_VARIABLE_TypeAssign_108, STATE_VARIABLE_CoerceFails_0_109, STATE_VARIABLE_CoerceFails_110);
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word CoerceFail_164;

                    {
                      CoerceFail_164 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, CoerceFail_164, 0) = ((MR_Box) (TypeTable_12));
                      MR_hl_field(2, CoerceFail_164, 1) = ((MR_Box) (TypeA_17));
                      MR_hl_field(2, CoerceFail_164, 2) = ((MR_Box) (TypeB_18));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_CoerceFails_110 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_164));
                      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_109));
                    }
                    *STATE_VARIABLE_TypeAssign_108 = STATE_VARIABLE_TypeAssign_0_107;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, TypeB_18, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                      {
                        MR_Word CoerceFail_164;

                        {
                          CoerceFail_164 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, CoerceFail_164, 0) = ((MR_Box) (TypeTable_12));
                          MR_hl_field(2, CoerceFail_164, 1) = ((MR_Box) (TypeA_17));
                          MR_hl_field(2, CoerceFail_164, 2) = ((MR_Box) (TypeB_18));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *STATE_VARIABLE_CoerceFails_110 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_164));
                          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_109));
                        }
                        *STATE_VARIABLE_TypeAssign_108 = STATE_VARIABLE_TypeAssign_0_107;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word SubTypeB_93 = ((MR_Word) ((MR_hl_field(3, TypeB_18, 1))));
                        MR_Word KindB_94 = ((MR_Word) ((MR_hl_field(3, TypeB_18, 2))));

                        succeeded = parse_tree__prog_data____Unify____kind_0_0(KindA_92, KindB_94);
                        if (succeeded)
                        {
                          MR_Word next_value_of_TypeA_17 = SubTypeA_91;
                          MR_Word next_value_of_TypeB_18 = SubTypeB_93;

                          // direct tailcall eliminated
                          ;
                          TypeA_17 = next_value_of_TypeA_17;
                          TypeB_18 = next_value_of_TypeB_18;
                          continue;
                        }
                        else
                        {
                          MR_Word CoerceFail_161;

                          {
                            CoerceFail_161 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, CoerceFail_161, 0) = ((MR_Box) (TypeTable_12));
                            MR_hl_field(2, CoerceFail_161, 1) = ((MR_Box) (TypeA_17));
                            MR_hl_field(2, CoerceFail_161, 2) = ((MR_Box) (TypeB_18));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            *STATE_VARIABLE_CoerceFails_110 = base;
                            MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_161));
                            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_109));
                          }
                          *STATE_VARIABLE_TypeAssign_108 = STATE_VARIABLE_TypeAssign_0_107;
                        }
                      }
                      break;
                  }
                  break;
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
check_hlds__typecheck_coerce__defined_types_compare_as_given_11_p_0(
  MR_Word TypeTable_12,
  MR_Word TVarSet_13,
  MR_Word BaseTypeCtor_14,
  MR_Unsigned ArgNum_15,
  MR_Word Comparison_16,
  MR_Word TypeA_17,
  MR_Word TypeB_18,
  MR_Word STATE_VARIABLE_TypeAssign_0_31,
  MR_Word * STATE_VARIABLE_TypeAssign_32,
  MR_Word STATE_VARIABLE_CoerceFails_0_33,
  MR_Word * STATE_VARIABLE_CoerceFails_34)
{
  MR_bool succeeded;
  MR_Word TypeCtorA_21;
  MR_Word ArgTypesA_22;
  MR_Word TypeCtorB_23;
  MR_Word ArgTypesB_24;

  parse_tree__prog_type__defined_type_to_ctor_and_args_3_p_0(TypeA_17, &TypeCtorA_21, &ArgTypesA_22);
  parse_tree__prog_type__defined_type_to_ctor_and_args_3_p_0(TypeB_18, &TypeCtorB_23, &ArgTypesB_24);
  succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_21, TypeCtorB_23);
  if (succeeded)
    check_hlds__typecheck_coerce__corresponding_types_compare_as_given_11_p_0(TypeTable_12, TVarSet_13, BaseTypeCtor_14, ArgNum_15, Comparison_16, ArgTypesA_22, ArgTypesB_24, STATE_VARIABLE_TypeAssign_0_31, STATE_VARIABLE_TypeAssign_32, STATE_VARIABLE_CoerceFails_0_33, STATE_VARIABLE_CoerceFails_34);
  else
  {
    MR_Word MaybeDuTypeA_25;
    MR_Word MaybeDuTypeB_26;
    MR_Word MaybeBoth_27;

    check_hlds__typecheck_util__classify_defined_type_is_du_type_4_p_0(TypeTable_12, TypeCtorA_21, ArgTypesA_22, &MaybeDuTypeA_25);
    check_hlds__typecheck_util__classify_defined_type_is_du_type_4_p_0(TypeTable_12, TypeCtorB_23, ArgTypesB_24, &MaybeDuTypeB_26);
    if (((MR_tag((MR_Word) MaybeDuTypeA_25)) == (MR_Integer) 0))
    {
      MR_Word Var_49 = (MR_Word) ((MR_Word) (MaybeDuTypeA_25));

      if (((MR_tag((MR_Word) MaybeDuTypeB_26)) == (MR_Integer) 0))
      {
        MR_Word ToDuTypeInfo_42 = (MR_Word) ((MR_Word) (MaybeDuTypeB_26));

        {
          MaybeBoth_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeBoth_27, 0) = ((MR_Box) (Var_49));
          MR_hl_field(1, MaybeBoth_27, 1) = ((MR_Box) (ToDuTypeInfo_42));
        }
      }
      else
      {
        MR_String ToTypeDesc_47 = ((MR_String) ((MR_hl_field(1, MaybeDuTypeB_26, 0))));
        MR_Word CoerceFail_48;

        {
          CoerceFail_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CoerceFail_48, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, CoerceFail_48, 1) = ((MR_Box) (TypeA_17));
          MR_hl_field(3, CoerceFail_48, 2) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(3, CoerceFail_48, 3) = ((MR_Box) (TypeB_18));
          MR_hl_field(3, CoerceFail_48, 4) = ((MR_Box) (ToTypeDesc_47));
        }
        {
          MaybeBoth_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeBoth_27, 0) = ((MR_Box) (CoerceFail_48));
        }
      }
    }
    else
    {
      MR_String Var_50 = ((MR_String) ((MR_hl_field(1, MaybeDuTypeA_25, 0))));

      if (((MR_tag((MR_Word) MaybeDuTypeB_26)) == (MR_Integer) 0))
      {
        MR_Word CoerceFail_46;

        {
          CoerceFail_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CoerceFail_46, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, CoerceFail_46, 1) = ((MR_Box) (TypeA_17));
          MR_hl_field(3, CoerceFail_46, 2) = ((MR_Box) (Var_50));
          MR_hl_field(3, CoerceFail_46, 3) = ((MR_Box) (TypeB_18));
          MR_hl_field(3, CoerceFail_46, 4) = ((MR_Box) ((MR_String) ""));
        }
        {
          MaybeBoth_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeBoth_27, 0) = ((MR_Box) (CoerceFail_46));
        }
      }
      else
      {
        MR_String ToTypeDesc_37 = ((MR_String) ((MR_hl_field(1, MaybeDuTypeB_26, 0))));
        MR_Word CoerceFail_38;

        {
          CoerceFail_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CoerceFail_38, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, CoerceFail_38, 1) = ((MR_Box) (TypeA_17));
          MR_hl_field(3, CoerceFail_38, 2) = ((MR_Box) (Var_50));
          MR_hl_field(3, CoerceFail_38, 3) = ((MR_Box) (TypeB_18));
          MR_hl_field(3, CoerceFail_38, 4) = ((MR_Box) (ToTypeDesc_37));
        }
        {
          MaybeBoth_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeBoth_27, 0) = ((MR_Box) (CoerceFail_38));
        }
      }
    }
    if (((MR_tag((MR_Word) MaybeBoth_27)) == (MR_Integer) 0))
    {
      MR_Word CoerceFail_28 = ((MR_Word) ((MR_hl_field(0, MaybeBoth_27, 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_CoerceFails_34 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_28));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_33));
      }
      *STATE_VARIABLE_TypeAssign_32 = STATE_VARIABLE_TypeAssign_0_31;
    }
    else
    {
      MR_Word DuTypenfoA_29 = ((MR_Word) ((MR_hl_field(1, MaybeBoth_27, 0))));
      MR_Word DuTypenfoB_30 = ((MR_Word) ((MR_hl_field(1, MaybeBoth_27, 1))));

      if ((Comparison_16 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word BaseDuTypeInfoA_53;
        MR_Word BaseDuTypeInfoB_54;
        MR_Word BaseTypeCtorA_55;
        MR_Word BaseTypeArgTypesA_56;
        MR_Word BaseTypeCtorB_59;
        MR_Word BaseTypeArgTypesB_60;

        check_hlds__typecheck_coerce__compute_base_type_of_du_type_4_p_0(TypeTable_12, TVarSet_13, DuTypenfoA_29, &BaseDuTypeInfoA_53);
        check_hlds__typecheck_coerce__compute_base_type_of_du_type_4_p_0(TypeTable_12, TVarSet_13, DuTypenfoB_30, &BaseDuTypeInfoB_54);
        BaseTypeCtorA_55 = ((MR_Word) ((MR_hl_field(0, BaseDuTypeInfoA_53, 0))));
        BaseTypeArgTypesA_56 = ((MR_Word) ((MR_hl_field(0, BaseDuTypeInfoA_53, 1))));
        BaseTypeCtorB_59 = ((MR_Word) ((MR_hl_field(0, BaseDuTypeInfoB_54, 0))));
        BaseTypeArgTypesB_60 = ((MR_Word) ((MR_hl_field(0, BaseDuTypeInfoB_54, 1))));
        succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(BaseTypeCtorA_55, BaseTypeCtorB_59);
        if (succeeded)
          check_hlds__typecheck_coerce__corresponding_types_compare_as_given_11_p_0(TypeTable_12, TVarSet_13, BaseTypeCtor_14, ArgNum_15, Comparison_16, BaseTypeArgTypesA_56, BaseTypeArgTypesB_60, STATE_VARIABLE_TypeAssign_0_31, STATE_VARIABLE_TypeAssign_32, STATE_VARIABLE_CoerceFails_0_33, STATE_VARIABLE_CoerceFails_34);
        else
        {
          MR_Word CoerceFail_63;

          {
            CoerceFail_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, CoerceFail_63, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, CoerceFail_63, 1) = ((MR_Box) (BaseTypeCtor_14));
            MR_hl_field(3, CoerceFail_63, 2) = ((MR_Box) (ArgNum_15));
            MR_hl_field(3, CoerceFail_63, 3) = ((MR_Box) (TypeA_17));
            MR_hl_field(3, CoerceFail_63, 4) = ((MR_Box) (TypeB_18));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_CoerceFails_34 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_63));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_33));
          }
          *STATE_VARIABLE_TypeAssign_32 = STATE_VARIABLE_TypeAssign_0_31;
        }
      }
      else
      {
        MR_Word Reason_51 = ((MR_Word) ((MR_hl_field(1, Comparison_16, 0))));
        MR_Word CoerceFail_52;

        {
          CoerceFail_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CoerceFail_52, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, CoerceFail_52, 1) = ((MR_Box) (BaseTypeCtor_14));
          MR_hl_field(3, CoerceFail_52, 2) = ((MR_Box) (ArgNum_15));
          MR_hl_field(3, CoerceFail_52, 3) = ((MR_Box) (Reason_51));
          MR_hl_field(3, CoerceFail_52, 4) = ((MR_Box) (TypeA_17));
          MR_hl_field(3, CoerceFail_52, 5) = ((MR_Box) (TypeB_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_CoerceFails_34 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_52));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_33));
        }
        *STATE_VARIABLE_TypeAssign_32 = STATE_VARIABLE_TypeAssign_0_31;
      }
    }
  }
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

        check_hlds__typecheck_coerce__types_compare_as_given_11_p_0(TypeTable_1, TVarSet_2, BaseTypeCtor_3, ArgNum_4, Comparison_5, Var_73, TypeB_30, STATE_VARIABLE_TypeAssign_0_8, &STATE_VARIABLE_TypeAssign_1_38, STATE_VARIABLE_CoerceFails_0_10, &STATE_VARIABLE_CoerceFails_1_39);
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

static void MR_CALL 
check_hlds__typecheck_coerce__try_to_unify_types_6_p_0(
  MR_Word TypeA_7,
  MR_Word TypeB_8,
  MR_Word STATE_VARIABLE_TypeAssign_0_12,
  MR_Word * STATE_VARIABLE_TypeAssign_13,
  MR_Word STATE_VARIABLE_CoerceFails_0_14,
  MR_Word * STATE_VARIABLE_CoerceFails_15)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_TypeAssign_1_16;

  succeeded = check_hlds__typecheck_util__type_assign_unify_type_4_p_0(TypeA_7, TypeB_8, STATE_VARIABLE_TypeAssign_0_12, &STATE_VARIABLE_TypeAssign_1_16);
  if (succeeded)
  {
    *STATE_VARIABLE_TypeAssign_13 = STATE_VARIABLE_TypeAssign_1_16;
    *STATE_VARIABLE_CoerceFails_15 = STATE_VARIABLE_CoerceFails_0_14;
  }
  else
  {
    MR_Word CoerceFail_11;

    {
      CoerceFail_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, CoerceFail_11, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, CoerceFail_11, 1) = ((MR_Box) (TypeA_7));
      MR_hl_field(3, CoerceFail_11, 2) = ((MR_Box) (TypeB_8));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_CoerceFails_15 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (CoerceFail_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_CoerceFails_0_14));
    }
    *STATE_VARIABLE_TypeAssign_13 = STATE_VARIABLE_TypeAssign_0_12;
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
  mercury__list__filter_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_coerce_scalar_common_2[2]), TypeAssignSet1_8, &SatisfiedTypeAssignSet_9, &UnsatisfiedTypeAssignSet_10);
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
check_hlds__typecheck_coerce____Unify____active_type_ctors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_coerce____Unify____active_type_ctors_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____active_type_ctors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_coerce____Compare____active_type_ctors_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
check_hlds__typecheck_coerce____Unify____invariant_tparams_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_coerce____Unify____invariant_tparams_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____invariant_tparams_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_coerce____Compare____invariant_tparams_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
check_hlds__typecheck_coerce____Unify____maybe_invariant_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_coerce____Unify____maybe_invariant_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_coerce____Compare____maybe_invariant_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_coerce____Compare____maybe_invariant_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

  MR_register_type_ctor_info(&check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__type_ctor_info_active_type_ctors_0);
  MR_register_type_ctor_info(&check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__type_ctor_info_check_coerce_constraint_action_0);
  MR_register_type_ctor_info(&check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__type_ctor_info_invariant_tparams_map_0);
  MR_register_type_ctor_info(&check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__type_ctor_info_invariant_tvars_0);
  MR_register_type_ctor_info(&check_hlds__typecheck_coerce__check_hlds__typecheck_coerce__type_ctor_info_maybe_invariant_params_0);
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
