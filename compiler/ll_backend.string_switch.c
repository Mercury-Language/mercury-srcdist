/*
** Automatically generated from `string_switch.m'
** by the Mercury compiler,
** version rotd-2024-03-22
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


// :- module ll_backend.string_switch.
// :- implementation.

/*
INIT mercury__ll_backend__string_switch__init
ENDINIT
*/

#include "ll_backend.string_switch.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.lookup_switch_util.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.string_encoding.mih"
#include "backend_libs.string_switch_util.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.instmap.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.lookup_switch.mih"
#include "ll_backend.lookup_util.mih"
#include "ll_backend.switch_case.mih"
#include "ll_backend.trace_gen.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"




static const MR_FA_TypeInfo_Struct2 ll_backend__string_switch__pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__string_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__string_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__string_switch__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_binary_switch_info_0_0[10];

static const MR_ConstString ll_backend__string_switch__ll_backend__string_switch__field_names_string_binary_switch_info_0_0[10];

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_binary_switch_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_binary_switch_info_0_0[1];

static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_binary_switch_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_binary_switch_info_0[1];

static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_binary_switch_info_0[1];

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_hash_switch_info_0_0[8];

static const MR_ConstString ll_backend__string_switch__ll_backend__string_switch__field_names_string_hash_switch_info_0_0[8];

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_hash_switch_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_hash_switch_info_0_0[1];

static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_hash_switch_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_hash_switch_info_0[1];

static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_hash_switch_info_0[1];

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__915__1_2_p_0(
  MR_Word OutVars_21,
  MR_Word HeadVar__2_83);

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__421__1_2_p_0(
  MR_Word OutVars_21,
  MR_Word HeadVar__2_117);

static void MR_CALL 
ll_backend__string_switch____Compare____string_hash_switch_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_hash_switch_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__string_switch____Compare____string_binary_switch_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_binary_switch_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0(
  MR_Word VarRval_17,
  MR_Word CaseSolns_18,
  MR_Word ResumeVars_19,
  MR_Word GoalsMayModifyTrail_20,
  MR_Word OutVars_21,
  MR_Word OutTypes_22,
  MR_Word Liveness_23,
  MR_Word CanFail_24,
  MR_Word EndLabel_25,
  MR_Word StoreMap_26,
  MR_Word STATE_VARIABLE_MaybeEnd_0_64,
  MR_Word * STATE_VARIABLE_MaybeEnd_65,
  MR_Word * Code_28,
  MR_Word STATE_VARIABLE_CI_0_66,
  MR_Word * STATE_VARIABLE_CI_67,
  MR_Word STATE_VARIABLE_CLD_0_68);

static void MR_CALL 
ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevMainRows_0_3,
  MR_Word * STATE_VARIABLE_RevMainRows_4,
  MR_Integer HeadVar__5_5,
  MR_Word STATE_VARIABLE_LaterSolnArray_0_6,
  MR_Word * STATE_VARIABLE_LaterSolnArray_7,
  MR_Integer STATE_VARIABLE_OneSolnCaseCount_0_8,
  MR_Integer * STATE_VARIABLE_OneSolnCaseCount_9,
  MR_Integer HeadVar__10_10,
  MR_Integer * HeadVar__11_11);

static void MR_CALL 
ll_backend__string_switch__generate_string_binary_simple_lookup_switch_14_p_0(
  MR_Word VarRval_15,
  MR_Word CaseValues_16,
  MR_Word OutVars_17,
  MR_Word OutTypes_18,
  MR_Word Liveness_19,
  MR_Word CanFail_20,
  MR_Word EndLabel_21,
  MR_Word StoreMap_22,
  MR_Word STATE_VARIABLE_MaybeEnd_0_49,
  MR_Word * STATE_VARIABLE_MaybeEnd_50,
  MR_Word * Code_24,
  MR_Word STATE_VARIABLE_CI_0_51,
  MR_Word * STATE_VARIABLE_CI_52,
  MR_Word STATE_VARIABLE_CLD_0_53);

static void MR_CALL 
ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevRows_0_2,
  MR_Word * STATE_VARIABLE_RevRows_3);

static void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10);

static void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(
  MR_Word Info_8,
  MR_Word VarRval_9,
  MR_Word TableAddrRval_10,
  MR_Word ArrayElemType_11,
  MR_Integer TableSize_12,
  MR_Integer NumColumns_13,
  MR_Word * Code_14);

static void MR_CALL 
ll_backend__string_switch__init_string_binary_switch_info_5_p_0(
  MR_Word CanFail_6,
  MR_Word * Info_7,
  MR_Word STATE_VARIABLE_CI_0_20,
  MR_Word * STATE_VARIABLE_CI_21,
  MR_Word STATE_VARIABLE_CLD_0_22);

static void MR_CALL 
ll_backend__string_switch__gen_string_binary_jump_slots_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevTableRows_0_2,
  MR_Word * STATE_VARIABLE_RevTableRows_3,
  MR_Word STATE_VARIABLE_RevTargets_0_4,
  MR_Word * STATE_VARIABLE_RevTargets_5,
  MR_Integer STATE_VARIABLE_CurIndex_0_6,
  MR_Integer * STATE_VARIABLE_CurIndex_7);

static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0(
  MR_Word VarRval_17,
  MR_Word CaseSolns_18,
  MR_Word ResumeVars_19,
  MR_Word GoalsMayModifyTrail_20,
  MR_Word OutVars_21,
  MR_Word OutTypes_22,
  MR_Word Liveness_23,
  MR_Word CanFail_24,
  MR_Word EndLabel_25,
  MR_Word StoreMap_26,
  MR_Word STATE_VARIABLE_MaybeEnd_0_70,
  MR_Word * STATE_VARIABLE_MaybeEnd_71,
  MR_Word * Code_28,
  MR_Word STATE_VARIABLE_CI_0_72,
  MR_Word * STATE_VARIABLE_CI_73,
  MR_Word STATE_VARIABLE_CLD_0_74);

static void MR_CALL 
ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_15_p_0(
  MR_Integer Slot_16,
  MR_Integer TableSize_17,
  MR_Word HashSlotMap_18,
  MR_Word DummyOutRvals_19,
  MR_Integer NumOutVars_20,
  MR_Integer NumCollisions_21,
  MR_Word STATE_VARIABLE_RevMainRows_0_44,
  MR_Word * STATE_VARIABLE_RevMainRows_45,
  MR_Integer STATE_VARIABLE_LaterNextRow_0_46,
  MR_Word STATE_VARIABLE_LaterSolnArray_0_47,
  MR_Word * STATE_VARIABLE_LaterSolnArray_48,
  MR_Integer STATE_VARIABLE_OneSolnCaseCount_0_49,
  MR_Integer * STATE_VARIABLE_OneSolnCaseCount_50,
  MR_Integer STATE_VARIABLE_SeveralSolnsCaseCount_0_51,
  MR_Integer * STATE_VARIABLE_SeveralSolnsCaseCount_52);

static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_hash_simple_lookup_switch_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__string_switch__generate_string_hash_simple_lookup_switch_14_p_0(
  MR_Word VarRval_15,
  MR_Word CaseValues_16,
  MR_Word OutVars_17,
  MR_Word OutTypes_18,
  MR_Word Liveness_19,
  MR_Word CanFail_20,
  MR_Word EndLabel_21,
  MR_Word StoreMap_22,
  MR_Word STATE_VARIABLE_MaybeEnd_0_56,
  MR_Word * STATE_VARIABLE_MaybeEnd_57,
  MR_Word * Code_24,
  MR_Word STATE_VARIABLE_CI_0_58,
  MR_Word * STATE_VARIABLE_CI_59,
  MR_Word STATE_VARIABLE_CLD_0_60);

static void MR_CALL 
ll_backend__string_switch__construct_string_hash_simple_lookup_vector_7_p_0(
  MR_Integer Slot_8,
  MR_Integer TableSize_9,
  MR_Word HashSlotMap_10,
  MR_Integer NumCollisions_11,
  MR_Word DummyOutRvals_12,
  MR_Word STATE_VARIABLE_RevRows_0_21,
  MR_Word * STATE_VARIABLE_RevRows_22);

static void MR_CALL 
ll_backend__string_switch__generate_string_hash_switch_search_10_p_0(
  MR_Word Info_11,
  MR_Word VarRval_12,
  MR_Word TableAddrRval_13,
  MR_Word ArrayElemType_14,
  MR_Integer NumColumns_15,
  MR_Word HashOp_16,
  MR_Integer HashMask_17,
  MR_Integer NumCollisions_18,
  MR_Word MatchCode_19,
  MR_Word * Code_20);

static void MR_CALL 
ll_backend__string_switch__init_string_hash_switch_info_5_p_0(
  MR_Word CanFail_6,
  MR_Word * Info_7,
  MR_Word STATE_VARIABLE_CI_0_18,
  MR_Word * STATE_VARIABLE_CI_19,
  MR_Word STATE_VARIABLE_CLD_0_20);

static void MR_CALL 
ll_backend__string_switch__represent_tagged_cases_in_string_switch_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__string_switch__represent_tagged_cases_in_string_switch_9_p_0(
  MR_Word Params_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_4,
  MR_Word * STATE_VARIABLE_CaseLabelMap_5,
  MR_Word STATE_VARIABLE_MaybeEnd_0_6,
  MR_Word * STATE_VARIABLE_MaybeEnd_7,
  MR_Word STATE_VARIABLE_CI_0_8,
  MR_Word * STATE_VARIABLE_CI_9);

static void MR_CALL 
ll_backend__string_switch__add_to_strs_labels_4_p_0(
  MR_Word Label_5,
  MR_Word TaggedConsId_6,
  MR_Word STATE_VARIABLE_StrsLabels_0_11,
  MR_Word * STATE_VARIABLE_StrsLabels_12);

static void MR_CALL 
ll_backend__string_switch__construct_string_hash_jump_vectors_9_p_0(
  MR_Integer Slot_10,
  MR_Integer TableSize_11,
  MR_Word HashSlotMap_12,
  MR_Word FailLabel_13,
  MR_Integer NumCollisions_14,
  MR_Word STATE_VARIABLE_RevTableRows_0_25,
  MR_Word * STATE_VARIABLE_RevTableRows_26,
  MR_Word STATE_VARIABLE_RevMaybeTargets_0_27,
  MR_Word * STATE_VARIABLE_RevMaybeTargets_28);

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_binary_switch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__string_switch____Compare____string_binary_switch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_hash_switch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__string_switch____Compare____string_hash_switch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__string_switch_scalar_common_1[36][2];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_2[8][3];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_3[14][1];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_4[1][7];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_5[2][5];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_6[1][14];




static /* final */ const MR_Box ll_backend__string_switch_scalar_common_1[36][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__type_ctor_info_soln_consts_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_2[1]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_1[0]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_1[6]))
  },
  /* row   9 */
  {
    ((MR_Box) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_1[2]))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[0]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(2, &ll_backend__string_switch_scalar_common_3[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[14])))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[16])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[2]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[3])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[4])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[5])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[6])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[7]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[9]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 15U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[10]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[11]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 14U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[12]))),
    ((MR_Box) ((MR_String) "fail code in cannot_fail switch"))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_Unsigned) 10U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[13])))
  },
};

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_2[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_1[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_1[2]))
  },
  /* row   5 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_5[0])),
    ((MR_Box) (ll_backend__string_switch__generate_string_hash_simple_lookup_switch_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_5[0])),
    ((MR_Box) (ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_5[0])),
    ((MR_Box) (ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_3[14][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "string hash jump switch")) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "string binary jump switch")) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 2)) },
  /* row   4 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   5 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   6 */
  { ((MR_Box) ((MR_Integer) -2)) },
  /* row   7 */
  { ((MR_Box) ((MR_String) "string hash simple lookup switch")) },
  /* row   8 */
  { ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0))))) },
  /* row   9 */
  { ((MR_Box) ((MR_String) "string hash several soln lookup switch")) },
  /* row  10 */
  { ((MR_Box) ((MR_String) "string binary simple lookup switch")) },
  /* row  11 */
  { ((MR_Box) ((MR_String) "string binary several soln lookup switch")) },
  /* row  12 */
  { ((MR_Box) ((MR_String) "unreachable")) },
  /* row  13 */
  { ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[17]))) },
};

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&ll_backend__string_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__string_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0))
  },
};

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_5[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__string_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__string_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_6[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_represent_params_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__string_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0)),
    ((MR_Box) (&ll_backend__string_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0)),
    ((MR_Box) (&ll_backend__string_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0)),
    ((MR_Box) (&ll_backend__string_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct2 ll_backend__string_switch__pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ll_backend__string_switch__pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__string_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ll_backend__string_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__string_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_PseudoTypeInfo) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__string_switch__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0) }
};

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_binary_switch_info_0_0[10] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_position_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__string_switch__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0)
};

static const MR_ConstString ll_backend__string_switch__ll_backend__string_switch__field_names_string_binary_switch_info_0_0[10] = {
  (MR_String) "sbsi_lo_reg",
  (MR_String) "sbsi_hi_reg",
  (MR_String) "sbsi_mid_reg",
  (MR_String) "sbsi_result_reg",
  (MR_String) "sbsi_loop_start_label",
  (MR_String) "sbsi_gt_eq_label",
  (MR_String) "sbsi_eq_label",
  (MR_String) "sbsi_fail_label",
  (MR_String) "sbsi_branch_start",
  (MR_String) "sbsi_fail_code"
};

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_binary_switch_info_0_0 = {
  (MR_String) "string_binary_switch_info",
  INT16_C(10),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__string_switch__ll_backend__string_switch__field_types_string_binary_switch_info_0_0,
  ll_backend__string_switch__ll_backend__string_switch__field_names_string_binary_switch_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_binary_switch_info_0_0[1] = { &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_binary_switch_info_0_0 };

static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_binary_switch_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_binary_switch_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_binary_switch_info_0[1] = { &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_binary_switch_info_0_0 };

static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_binary_switch_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_binary_switch_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__string_switch____Unify____string_binary_switch_info_0_0_10001)),
  ((MR_Box) (ll_backend__string_switch____Compare____string_binary_switch_info_0_0_10001)),
  (MR_String) "ll_backend.string_switch",
  (MR_String) "string_binary_switch_info",
  { ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_binary_switch_info_0 },
  { ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_binary_switch_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_binary_switch_info_0,

};

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_hash_switch_info_0_0[8] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_position_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__string_switch__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0)
};

static const MR_ConstString ll_backend__string_switch__ll_backend__string_switch__field_names_string_hash_switch_info_0_0[8] = {
  (MR_String) "shsi_slot_reg",
  (MR_String) "shsi_row_start_reg",
  (MR_String) "shsi_string_reg",
  (MR_String) "shsi_loop_start_label",
  (MR_String) "shsi_no_match_label",
  (MR_String) "shsi_fail_label",
  (MR_String) "shsi_branch_start",
  (MR_String) "shsi_fail_code"
};

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_hash_switch_info_0_0 = {
  (MR_String) "string_hash_switch_info",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__string_switch__ll_backend__string_switch__field_types_string_hash_switch_info_0_0,
  ll_backend__string_switch__ll_backend__string_switch__field_names_string_hash_switch_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_hash_switch_info_0_0[1] = { &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_hash_switch_info_0_0 };

static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_hash_switch_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_hash_switch_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_hash_switch_info_0[1] = { &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_hash_switch_info_0_0 };

static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_hash_switch_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_hash_switch_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__string_switch____Unify____string_hash_switch_info_0_0_10001)),
  ((MR_Box) (ll_backend__string_switch____Compare____string_hash_switch_info_0_0_10001)),
  (MR_String) "ll_backend.string_switch",
  (MR_String) "string_hash_switch_info",
  { ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_hash_switch_info_0 },
  { ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_hash_switch_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_hash_switch_info_0,

};

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__915__1_2_p_0(
  MR_Word OutVars_21,
  MR_Word HeadVar__2_83)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[8]), ((MR_Box) (OutVars_21)), ((MR_Box) (HeadVar__2_83)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__421__1_2_p_0(
  MR_Word OutVars_21,
  MR_Word HeadVar__2_117)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[8]), ((MR_Box) (OutVars_21)), ((MR_Box) (HeadVar__2_117)));
  return succeeded;
}

static void MR_CALL 
ll_backend__string_switch____Compare____string_hash_switch_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word SubResult1_6;

    ll_backend__llds____Compare____lval_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      ll_backend__llds____Compare____lval_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        ll_backend__llds____Compare____lval_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          ll_backend__llds____Compare____label_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            ll_backend__llds____Compare____label_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              ll_backend__llds____Compare____label_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                ll_backend__code_loc_dep____Compare____position_info_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[10]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_hash_switch_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_28_28;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));

    succeeded = ll_backend__llds____Unify____lval_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = ll_backend__llds____Unify____lval_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = ll_backend__llds____Unify____lval_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = ll_backend__llds____Unify____label_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            succeeded = ll_backend__llds____Unify____label_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              succeeded = ll_backend__llds____Unify____label_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                succeeded = ll_backend__code_loc_dep____Unify____position_info_0_0(ArgX7_15, ArgY7_16);
                if (succeeded)
                {
                  TypeInfo_28_28 = (MR_Word) (&ll_backend__string_switch_scalar_common_1[10]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__string_switch____Compare____string_binary_switch_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_33 == CastY_34);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))));
    MR_Word SubResult1_6;

    ll_backend__llds____Compare____lval_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      ll_backend__llds____Compare____lval_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        ll_backend__llds____Compare____lval_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          ll_backend__llds____Compare____lval_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            ll_backend__llds____Compare____label_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              ll_backend__llds____Compare____label_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                ll_backend__llds____Compare____label_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  ll_backend__llds____Compare____label_0_0(&SubResult8_27, ArgX8_25, ArgY8_26);
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    ll_backend__code_loc_dep____Compare____position_info_0_0(&SubResult9_30, ArgX9_28, ArgY9_29);
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[10]), HeadVar__1_1, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_binary_switch_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_23 == CastY_24);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_34_34;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));

    succeeded = ll_backend__llds____Unify____lval_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = ll_backend__llds____Unify____lval_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = ll_backend__llds____Unify____lval_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = ll_backend__llds____Unify____lval_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            succeeded = ll_backend__llds____Unify____label_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              succeeded = ll_backend__llds____Unify____label_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                succeeded = ll_backend__llds____Unify____label_0_0(ArgX7_15, ArgY7_16);
                if (succeeded)
                {
                  succeeded = ll_backend__llds____Unify____label_0_0(ArgX8_17, ArgY8_18);
                  if (succeeded)
                  {
                    succeeded = ll_backend__code_loc_dep____Unify____position_info_0_0(ArgX9_19, ArgY9_20);
                    if (succeeded)
                    {
                      TypeInfo_34_34 = (MR_Word) (&ll_backend__string_switch_scalar_common_1[10]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
ll_backend__string_switch__generate_string_binary_lookup_switch_8_p_0(
  MR_Word VarRval_9,
  MR_Word LookupSwitchInfo_10,
  MR_Word CanFail_11,
  MR_Word EndLabel_12,
  MR_Word StoreMap_13,
  MR_Word * STATE_VARIABLE_MaybeEnd_28,
  MR_Word * Code_15,
  MR_Word * STATE_VARIABLE_CI_29)
{
  MR_Word CaseConsts_17 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 0))));
  MR_Word OutVars_18 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 1))));
  MR_Word OutTypes_19 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 2))));
  MR_Word Liveness_20 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 3))));
  MR_Word CLD_21 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 6))));
  MR_Word STATE_VARIABLE_MaybeEnd_30_30 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 4))));
  MR_Word STATE_VARIABLE_CI_31_31 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 5))));

  if (((MR_tag((MR_Word) CaseConsts_17)) == (MR_Integer) 0))
  {
    MR_Word CaseValueMap_22 = ((MR_Word) ((MR_hl_field(0, CaseConsts_17, (MR_Integer) 0))));
    MR_Word CaseValues_23;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), CaseValueMap_22, &CaseValues_23);
    ll_backend__string_switch__generate_string_binary_simple_lookup_switch_14_p_0(VarRval_9, CaseValues_23, OutVars_18, OutTypes_19, Liveness_20, CanFail_11, EndLabel_12, StoreMap_13, STATE_VARIABLE_MaybeEnd_30_30, STATE_VARIABLE_MaybeEnd_28, Code_15, STATE_VARIABLE_CI_31_31, STATE_VARIABLE_CI_29, CLD_21);
  }
  else
  {
    MR_Word CaseSolnMap_24 = ((MR_Word) ((MR_hl_field(1, CaseConsts_17, (MR_Integer) 0))));
    MR_Word ResumeVars_25;
    MR_Word GoalsMayModifyTrail_26;
    MR_Word CaseSolns_27;
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, CaseConsts_17, (MR_Integer) 1))));

    ResumeVars_25 = ((MR_Word) ((MR_hl_field(0, Var_34, (MR_Integer) 0))));
    GoalsMayModifyTrail_26 = ((MR_Unsigned) ((MR_hl_field(0, Var_34, (MR_Integer) 1))) & (MR_Integer) 1);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[2]), CaseSolnMap_24, &CaseSolns_27);
    ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0(VarRval_9, CaseSolns_27, ResumeVars_25, GoalsMayModifyTrail_26, OutVars_18, OutTypes_19, Liveness_20, CanFail_11, EndLabel_12, StoreMap_13, STATE_VARIABLE_MaybeEnd_30_30, STATE_VARIABLE_MaybeEnd_28, Code_15, STATE_VARIABLE_CI_31_31, STATE_VARIABLE_CI_29, CLD_21);
  }
}

static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__string_switch__IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__915__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0(
  MR_Word VarRval_17,
  MR_Word CaseSolns_18,
  MR_Word ResumeVars_19,
  MR_Word GoalsMayModifyTrail_20,
  MR_Word OutVars_21,
  MR_Word OutTypes_22,
  MR_Word Liveness_23,
  MR_Word CanFail_24,
  MR_Word EndLabel_25,
  MR_Word StoreMap_26,
  MR_Word STATE_VARIABLE_MaybeEnd_0_64,
  MR_Word * STATE_VARIABLE_MaybeEnd_65,
  MR_Word * Code_28,
  MR_Word STATE_VARIABLE_CI_0_66,
  MR_Word * STATE_VARIABLE_CI_67,
  MR_Word STATE_VARIABLE_CLD_0_68)
{
  MR_bool succeeded;
  MR_Word BinarySwitchInfo_31;
  MR_Word CommentCode_32;
  MR_Integer MainTableSize_33;
  MR_Integer NumOutVars_34;
  MR_Word OutElemTypes_35;
  MR_Word ArrayElemTypes_36;
  MR_Word ArrayElemType_37;
  MR_Word AddTrailOps_39;
  MR_Word DummyLaterSolnRow_41;
  MR_Word LaterSolnArrayCord0_42;
  MR_Word RevMainRows_43;
  MR_Word LaterSolnArrayCord_44;
  MR_Integer OneSolnCaseCount_45;
  MR_Integer SeveralSolnsCaseCount_46;
  MR_Word MainRows_47;
  MR_Word LaterSolnArray_48;
  MR_Word AscendingSortedCountKinds_49;
  MR_Word DescendingSortedCountKinds_50;
  MR_Word DescendingSortedKinds_51;
  MR_Word MainRowTypes_52;
  MR_Integer MainNumColumns_53;
  MR_Word MainVectorAddr_54;
  MR_Word MainVectorAddrRval_55;
  MR_Word LaterVectorAddr_56;
  MR_Word LaterVectorAddrRval_57;
  MR_Word BaseReg_58;
  MR_Word MidReg_59;
  MR_Word SetBaseRegCode_60;
  MR_Word BinarySearchCode_61;
  MR_Word LookupResultsCode_62;
  MR_Word EndLabelCode_63;
  MR_Word STATE_VARIABLE_CI_69_69;
  MR_Word Var_76;
  MR_Word Var_78;
  MR_Word Var_80;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_99;
  MR_Word STATE_VARIABLE_CI_102_102;
  MR_Word Var_103;
  MR_Word STATE_VARIABLE_CI_105_105;
  MR_Word Var_106;
  MR_Word STATE_VARIABLE_CLD_109_109;
  MR_Word Var_110;
  MR_Word Var_111;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_117;
  MR_Word Var_120;
  MR_Word Var_121;
  MR_Word Var_122;
  MR_Word Var_127;
  MR_Word Var_128;
  MR_Word Var_130;
  MR_Word Var_131;
  MR_Word Var_132;

  ll_backend__string_switch__init_string_binary_switch_info_5_p_0(CanFail_24, &BinarySwitchInfo_31, STATE_VARIABLE_CI_0_66, &STATE_VARIABLE_CI_69_69, STATE_VARIABLE_CLD_0_68);
  CommentCode_32 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[30])));
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_2[4]), CaseSolns_18, &MainTableSize_33);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[6]), OutVars_21, &NumOutVars_34);
  mercury__list__duplicate_3_p_0((MR_Word) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0), NumOutVars_34, ((MR_Box) ((MR_Integer) 2)), &OutElemTypes_35);
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) (OutElemTypes_35));
  }
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_78));
  }
  {
    ArrayElemTypes_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArrayElemTypes_36, 0) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(1, ArrayElemTypes_36, 1) = ((MR_Box) (Var_76));
  }
  {
    ArrayElemType_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArrayElemType_37, 0) = ((MR_Box) (ArrayElemTypes_36));
  }
  {
    Var_80 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_80, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_5[1]));
    MR_hl_field(0, Var_80, 1) = ((MR_Box) (ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_1));
    MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_80, 3) = ((MR_Box) (OutVars_21));
    MR_hl_field(0, Var_80, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_not_3_p_0(Var_80, (MR_String) "predicate \140ll_backend.string_switch.generate_string_binary_several_soln_lookup_switch\'/16", (MR_String) "no OutVars");
  switch (GoalsMayModifyTrail_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      AddTrailOps_39 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      ll_backend__code_info__get_emit_trail_ops_2_p_0(STATE_VARIABLE_CI_69_69, &AddTrailOps_39);
      break;
  }
  DummyLaterSolnRow_41 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__string_switch_scalar_common_2[7]), OutTypes_22);
  LaterSolnArrayCord0_42 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), ((MR_Box) (DummyLaterSolnRow_41)));
  ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_p_0(CaseSolns_18, NumOutVars_34, (MR_Word) ((MR_Unsigned) 0U), &RevMainRows_43, (MR_Integer) 1, LaterSolnArrayCord0_42, &LaterSolnArrayCord_44, (MR_Integer) 0, &OneSolnCaseCount_45, (MR_Integer) 0, &SeveralSolnsCaseCount_46);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), RevMainRows_43, &MainRows_47);
  LaterSolnArray_48 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), LaterSolnArrayCord_44);
  {
    Var_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_89, 0) = ((MR_Box) (OneSolnCaseCount_45));
    MR_hl_field(0, Var_89, 1) = ((MR_Box) ((MR_Integer) 1));
  }
  {
    Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_92, 0) = ((MR_Box) (SeveralSolnsCaseCount_46));
    MR_hl_field(0, Var_92, 1) = ((MR_Box) ((MR_Integer) 2));
  }
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
    MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_91));
  }
  mercury__list__sort_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_2[2]), Var_88, &AscendingSortedCountKinds_49);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_2[2]), AscendingSortedCountKinds_49, &DescendingSortedCountKinds_50);
  mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0), DescendingSortedCountKinds_50, &DescendingSortedKinds_51);
  Var_97 = (MR_Word) (MR_mkword(2, &ll_backend__string_switch_scalar_common_3[1]));
  {
    Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_99, 0) = ((MR_Box) (Var_97));
    MR_hl_field(1, Var_99, 1) = ((MR_Box) (OutTypes_22));
  }
  {
    Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_96, 0) = ((MR_Box) (Var_97));
    MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_99));
  }
  {
    MainRowTypes_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MainRowTypes_52, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, MainRowTypes_52, 1) = ((MR_Box) (Var_96));
  }
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), MainRowTypes_52, &MainNumColumns_53);
  ll_backend__code_info__add_vector_static_cell_5_p_0(MainRowTypes_52, MainRows_47, &MainVectorAddr_54, STATE_VARIABLE_CI_69_69, &STATE_VARIABLE_CI_102_102);
  {
    Var_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_103, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_103, 1) = ((MR_Box) (MainVectorAddr_54));
    MR_hl_field(3, Var_103, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MainVectorAddrRval_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MainVectorAddrRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MainVectorAddrRval_55, 1) = ((MR_Box) (Var_103));
  }
  ll_backend__code_info__add_vector_static_cell_5_p_0(OutTypes_22, LaterSolnArray_48, &LaterVectorAddr_56, STATE_VARIABLE_CI_102_102, &STATE_VARIABLE_CI_105_105);
  {
    Var_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_106, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_106, 1) = ((MR_Box) (LaterVectorAddr_56));
    MR_hl_field(3, Var_106, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    LaterVectorAddrRval_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LaterVectorAddrRval_57, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, LaterVectorAddrRval_57, 1) = ((MR_Box) (Var_106));
  }
  ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(StoreMap_26, (MR_Integer) 0, &BaseReg_58, STATE_VARIABLE_CLD_0_68, &STATE_VARIABLE_CLD_109_109);
  MidReg_59 = ((MR_Word) ((MR_hl_field(0, BinarySwitchInfo_31, (MR_Integer) 2))));
  {
    Var_120 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_120, 0) = ((MR_Box) (MidReg_59));
  }
  {
    Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_122, 0) = ((MR_Box) (MainNumColumns_53));
  }
  {
    Var_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_121, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_121, 1) = ((MR_Box) (Var_122));
  }
  {
    Var_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_117, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_117, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[19])));
    MR_hl_field(3, Var_117, 2) = ((MR_Box) (Var_120));
    MR_hl_field(3, Var_117, 3) = ((MR_Box) (Var_121));
  }
  {
    Var_113 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_113, 0) = ((MR_Box) (MainVectorAddrRval_55));
    MR_hl_field(2, Var_113, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[8])));
    MR_hl_field(2, Var_113, 2) = ((MR_Box) (Var_117));
  }
  {
    Var_112 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_112, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_112, 1) = ((MR_Box) (Var_113));
  }
  {
    Var_111 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_111, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_111, 1) = ((MR_Box) (BaseReg_58));
    MR_hl_field(3, Var_111, 2) = ((MR_Box) (Var_112));
  }
  {
    Var_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_110, 0) = ((MR_Box) (Var_111));
    MR_hl_field(0, Var_110, 1) = ((MR_Box) ((MR_String) "set up base reg"));
  }
  SetBaseRegCode_60 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_110)));
  ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(BinarySwitchInfo_31, VarRval_17, MainVectorAddrRval_55, ArrayElemType_37, MainTableSize_33, MainNumColumns_53, &BinarySearchCode_61);
  ll_backend__lookup_switch__generate_code_for_all_kinds_16_p_0(DescendingSortedKinds_51, (MR_Integer) 1, OutVars_21, ResumeVars_19, EndLabel_25, StoreMap_26, Liveness_23, AddTrailOps_39, BaseReg_58, LaterVectorAddrRval_57, STATE_VARIABLE_MaybeEnd_0_64, STATE_VARIABLE_MaybeEnd_65, &LookupResultsCode_62, STATE_VARIABLE_CI_105_105, STATE_VARIABLE_CI_67, STATE_VARIABLE_CLD_109_109);
  {
    Var_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_128, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_128, 1) = ((MR_Box) (EndLabel_25));
  }
  {
    Var_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_127, 0) = ((MR_Box) (Var_128));
    MR_hl_field(0, Var_127, 1) = ((MR_Box) ((MR_String) "end of string binary several solns switch"));
  }
  EndLabelCode_63 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_127)));
  Var_132 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LookupResultsCode_62, EndLabelCode_63);
  Var_131 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetBaseRegCode_60, Var_132);
  Var_130 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BinarySearchCode_61, Var_131);
  *Code_28 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CommentCode_32, Var_130);
}

static void MR_CALL 
ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevMainRows_0_3,
  MR_Word * STATE_VARIABLE_RevMainRows_4,
  MR_Integer HeadVar__5_5,
  MR_Word STATE_VARIABLE_LaterSolnArray_0_6,
  MR_Word * STATE_VARIABLE_LaterSolnArray_7,
  MR_Integer STATE_VARIABLE_OneSolnCaseCount_0_8,
  MR_Integer * STATE_VARIABLE_OneSolnCaseCount_9,
  MR_Integer HeadVar__10_10,
  MR_Integer * HeadVar__11_11)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__11_11 = HeadVar__10_10;
      *STATE_VARIABLE_OneSolnCaseCount_9 = STATE_VARIABLE_OneSolnCaseCount_0_8;
      *STATE_VARIABLE_LaterSolnArray_7 = STATE_VARIABLE_LaterSolnArray_0_6;
      *STATE_VARIABLE_RevMainRows_4 = STATE_VARIABLE_RevMainRows_0_3;
    }
    else
    {
      MR_String Str_26;
      MR_Word Soln_27;
      MR_Word StrSolns_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word StrRval_35;
      MR_Word MainRow_38;
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_56;
      MR_Integer STATE_VARIABLE_OneSolnCaseCount_57_57;
      MR_Integer STATE_VARIABLE_SeveralSolnsCaseCount_63_63;
      MR_Integer STATE_VARIABLE_LaterNextRow_72_72;
      MR_Word STATE_VARIABLE_LaterSolnArray_73_73;
      MR_Word STATE_VARIABLE_RevMainRows_75_75;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevMainRows_0_3;
      MR_Integer next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_LaterSolnArray_0_6;
      MR_Integer next_value_of_STATE_VARIABLE_OneSolnCaseCount_0_8;
      MR_Integer next_value_of_HeadVar__10_10;

      Str_26 = ((MR_String) ((MR_hl_field(0, Var_55, (MR_Integer) 0))));
      Soln_27 = ((MR_Word) ((MR_hl_field(0, Var_55, (MR_Integer) 1))));
      {
        Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(3, Var_56, 1) = ((MR_Box) (Str_26));
      }
      {
        StrRval_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, StrRval_35, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, StrRval_35, 1) = ((MR_Box) (Var_56));
      }
      if (((MR_tag((MR_Word) Soln_27)) == (MR_Integer) 0))
      {
        MR_Word OutRvals_36 = ((MR_Word) ((MR_hl_field(0, Soln_27, (MR_Integer) 0))));
        MR_Word ZeroRval_37;
        MR_Word Var_61;
        MR_Word Var_62;

        STATE_VARIABLE_OneSolnCaseCount_57_57 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_OneSolnCaseCount_0_8 + (MR_Unsigned) 1);
        ZeroRval_37 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[22]));
        {
          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_62, 0) = ((MR_Box) (ZeroRval_37));
          MR_hl_field(1, Var_62, 1) = ((MR_Box) (OutRvals_36));
        }
        {
          Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_61, 0) = ((MR_Box) (ZeroRval_37));
          MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
        }
        {
          MainRow_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MainRow_38, 0) = ((MR_Box) (StrRval_35));
          MR_hl_field(1, MainRow_38, 1) = ((MR_Box) (Var_61));
        }
        STATE_VARIABLE_LaterNextRow_72_72 = HeadVar__5_5;
        STATE_VARIABLE_LaterSolnArray_73_73 = STATE_VARIABLE_LaterSolnArray_0_6;
        STATE_VARIABLE_SeveralSolnsCaseCount_63_63 = HeadVar__10_10;
      }
      else
      {
        MR_Word FirstSolnRvals_39 = ((MR_Word) ((MR_hl_field(1, Soln_27, (MR_Integer) 0))));
        MR_Word LaterSolns_40 = ((MR_Word) ((MR_hl_field(1, Soln_27, (MR_Integer) 1))));
        MR_Integer NumLaterSolns_41;
        MR_Integer FirstRowOffset_42;
        MR_Integer LastRowOffset_43;
        MR_Word FirstRowRval_44;
        MR_Word LastRowRval_45;
        MR_Integer Var_65;
        MR_Integer Var_66;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_74;

        STATE_VARIABLE_SeveralSolnsCaseCount_63_63 = (MR_Integer) ((MR_Unsigned) HeadVar__10_10 + (MR_Unsigned) 1);
        mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), LaterSolns_40, &NumLaterSolns_41);
        FirstRowOffset_42 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 * (MR_Unsigned) HeadVar__2_2);
        Var_66 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) NumLaterSolns_41);
        Var_65 = (MR_Integer) ((MR_Unsigned) Var_66 - (MR_Unsigned) 1);
        LastRowOffset_43 = (MR_Integer) ((MR_Unsigned) Var_65 * (MR_Unsigned) HeadVar__2_2);
        {
          Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_68, 0) = ((MR_Box) (FirstRowOffset_42));
        }
        {
          FirstRowRval_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, FirstRowRval_44, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, FirstRowRval_44, 1) = ((MR_Box) (Var_68));
        }
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) (LastRowOffset_43));
        }
        {
          LastRowRval_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, LastRowRval_45, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, LastRowRval_45, 1) = ((MR_Box) (Var_69));
        }
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (LastRowRval_45));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) (FirstSolnRvals_39));
        }
        {
          Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_70, 0) = ((MR_Box) (FirstRowRval_44));
          MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_71));
        }
        {
          MainRow_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MainRow_38, 0) = ((MR_Box) (StrRval_35));
          MR_hl_field(1, MainRow_38, 1) = ((MR_Box) (Var_70));
        }
        STATE_VARIABLE_LaterNextRow_72_72 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) NumLaterSolns_41);
        Var_74 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), LaterSolns_40);
        STATE_VARIABLE_LaterSolnArray_73_73 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), STATE_VARIABLE_LaterSolnArray_0_6, Var_74);
        STATE_VARIABLE_OneSolnCaseCount_57_57 = STATE_VARIABLE_OneSolnCaseCount_0_8;
      }
      {
        STATE_VARIABLE_RevMainRows_75_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevMainRows_75_75, 0) = ((MR_Box) (MainRow_38));
        MR_hl_field(1, STATE_VARIABLE_RevMainRows_75_75, 1) = ((MR_Box) (STATE_VARIABLE_RevMainRows_0_3));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = StrSolns_28;
      next_value_of_STATE_VARIABLE_RevMainRows_0_3 = STATE_VARIABLE_RevMainRows_75_75;
      next_value_of_HeadVar__5_5 = STATE_VARIABLE_LaterNextRow_72_72;
      next_value_of_STATE_VARIABLE_LaterSolnArray_0_6 = STATE_VARIABLE_LaterSolnArray_73_73;
      next_value_of_STATE_VARIABLE_OneSolnCaseCount_0_8 = STATE_VARIABLE_OneSolnCaseCount_57_57;
      next_value_of_HeadVar__10_10 = STATE_VARIABLE_SeveralSolnsCaseCount_63_63;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevMainRows_0_3 = next_value_of_STATE_VARIABLE_RevMainRows_0_3;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_LaterSolnArray_0_6 = next_value_of_STATE_VARIABLE_LaterSolnArray_0_6;
      STATE_VARIABLE_OneSolnCaseCount_0_8 = next_value_of_STATE_VARIABLE_OneSolnCaseCount_0_8;
      HeadVar__10_10 = next_value_of_HeadVar__10_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__string_switch__generate_string_binary_simple_lookup_switch_14_p_0(
  MR_Word VarRval_15,
  MR_Word CaseValues_16,
  MR_Word OutVars_17,
  MR_Word OutTypes_18,
  MR_Word Liveness_19,
  MR_Word CanFail_20,
  MR_Word EndLabel_21,
  MR_Word StoreMap_22,
  MR_Word STATE_VARIABLE_MaybeEnd_0_49,
  MR_Word * STATE_VARIABLE_MaybeEnd_50,
  MR_Word * Code_24,
  MR_Word STATE_VARIABLE_CI_0_51,
  MR_Word * STATE_VARIABLE_CI_52,
  MR_Word STATE_VARIABLE_CLD_0_53)
{
  MR_Word BinarySwitchInfo_27;
  MR_Word CommentCode_28;
  MR_Integer TableSize_29;
  MR_Integer NumOutVars_30;
  MR_Integer NumColumns_31;
  MR_Word OutElemTypes_32;
  MR_Word ArrayElemTypes_33;
  MR_Word ArrayElemType_34;
  MR_Word RevVectorRvals_35;
  MR_Word VectorRvals_36;
  MR_Word RowElemTypes_37;
  MR_Word VectorAddr_38;
  MR_Word VectorAddrRval_39;
  MR_Word SetBaseRegCode_40;
  MR_Word BinarySearchCode_45;
  MR_Word BranchEndCode_47;
  MR_Word EndLabelCode_48;
  MR_Word STATE_VARIABLE_CI_54_54;
  MR_Word Var_65;
  MR_Word STATE_VARIABLE_CLD_84_84;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word _MaybeEnd_46;

  ll_backend__string_switch__init_string_binary_switch_info_5_p_0(CanFail_20, &BinarySwitchInfo_27, STATE_VARIABLE_CI_0_51, &STATE_VARIABLE_CI_54_54, STATE_VARIABLE_CLD_0_53);
  CommentCode_28 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[29])));
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_2[3]), CaseValues_16, &TableSize_29);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[6]), OutVars_17, &NumOutVars_30);
  NumColumns_31 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) NumOutVars_30);
  mercury__list__duplicate_3_p_0((MR_Word) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0), NumOutVars_30, ((MR_Box) ((MR_Integer) 2)), &OutElemTypes_32);
  {
    ArrayElemTypes_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArrayElemTypes_33, 0) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(1, ArrayElemTypes_33, 1) = ((MR_Box) (OutElemTypes_32));
  }
  {
    ArrayElemType_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArrayElemType_34, 0) = ((MR_Box) (ArrayElemTypes_33));
  }
  ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_p_0(CaseValues_16, (MR_Word) ((MR_Unsigned) 0U), &RevVectorRvals_35);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), RevVectorRvals_35, &VectorRvals_36);
  {
    RowElemTypes_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RowElemTypes_37, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, RowElemTypes_37, 1) = ((MR_Box) (OutTypes_18));
  }
  ll_backend__code_info__add_vector_static_cell_5_p_0(RowElemTypes_37, VectorRvals_36, &VectorAddr_38, STATE_VARIABLE_CI_54_54, STATE_VARIABLE_CI_52);
  {
    Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_65, 1) = ((MR_Box) (VectorAddr_38));
    MR_hl_field(3, Var_65, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    VectorAddrRval_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, VectorAddrRval_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, VectorAddrRval_39, 1) = ((MR_Box) (Var_65));
  }
  if ((OutVars_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    SetBaseRegCode_40 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    STATE_VARIABLE_CLD_84_84 = STATE_VARIABLE_CLD_0_53;
  }
  else
  {
    MR_Word BaseReg_43;
    MR_Word MidReg_44;
    MR_Word STATE_VARIABLE_CLD_68_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_76;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;

    ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(StoreMap_22, (MR_Integer) 0, &BaseReg_43, STATE_VARIABLE_CLD_0_53, &STATE_VARIABLE_CLD_68_68);
    MidReg_44 = ((MR_Word) ((MR_hl_field(0, BinarySwitchInfo_27, (MR_Integer) 2))));
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_79, 0) = ((MR_Box) (MidReg_44));
    }
    {
      Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_81, 0) = ((MR_Box) (NumColumns_31));
    }
    {
      Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_80, 1) = ((MR_Box) (Var_81));
    }
    {
      Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_76, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[19])));
      MR_hl_field(3, Var_76, 2) = ((MR_Box) (Var_79));
      MR_hl_field(3, Var_76, 3) = ((MR_Box) (Var_80));
    }
    {
      Var_72 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_72, 0) = ((MR_Box) (VectorAddrRval_39));
      MR_hl_field(2, Var_72, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[8])));
      MR_hl_field(2, Var_72, 2) = ((MR_Box) (Var_76));
    }
    {
      Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_71, 1) = ((MR_Box) (Var_72));
    }
    {
      Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_70, 1) = ((MR_Box) (BaseReg_43));
      MR_hl_field(3, Var_70, 2) = ((MR_Box) (Var_71));
    }
    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_69, 0) = ((MR_Box) (Var_70));
      MR_hl_field(0, Var_69, 1) = ((MR_Box) ((MR_String) "set up base reg"));
    }
    SetBaseRegCode_40 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_69)));
    ll_backend__lookup_util__generate_offset_assigns_6_p_0(OutVars_17, (MR_Integer) 1, BaseReg_43, *STATE_VARIABLE_CI_52, STATE_VARIABLE_CLD_68_68, &STATE_VARIABLE_CLD_84_84);
  }
  ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(BinarySwitchInfo_27, VarRval_15, VectorAddrRval_39, ArrayElemType_34, TableSize_29, NumColumns_31, &BinarySearchCode_45);
  ll_backend__lookup_util__set_liveness_and_end_branch_6_p_0(StoreMap_22, Liveness_19, (MR_Word) ((MR_Unsigned) 0U), &_MaybeEnd_46, &BranchEndCode_47, STATE_VARIABLE_CLD_84_84);
  {
    Var_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_87, 1) = ((MR_Box) (EndLabel_21));
  }
  {
    Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_86, 0) = ((MR_Box) (Var_87));
    MR_hl_field(0, Var_86, 1) = ((MR_Box) ((MR_String) "end of binary string switch"));
  }
  EndLabelCode_48 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_86)));
  Var_91 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BranchEndCode_47, EndLabelCode_48);
  Var_90 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetBaseRegCode_40, Var_91);
  Var_89 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BinarySearchCode_45, Var_90);
  *Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CommentCode_28, Var_89);
  *STATE_VARIABLE_MaybeEnd_50 = STATE_VARIABLE_MaybeEnd_0_49;
}

static void MR_CALL 
ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevRows_0_2,
  MR_Word * STATE_VARIABLE_RevRows_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevRows_3 = STATE_VARIABLE_RevRows_0_2;
    else
    {
      MR_String Str_7;
      MR_Word OutRvals_8;
      MR_Word Rest_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word RowRvals_11;
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_15;
      MR_Word Var_16;
      MR_Word STATE_VARIABLE_RevRows_17_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevRows_0_2;

      Str_7 = ((MR_String) ((MR_hl_field(0, Var_14, (MR_Integer) 0))));
      OutRvals_8 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 1))));
      {
        Var_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_16, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(3, Var_16, 1) = ((MR_Box) (Str_7));
      }
      {
        Var_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_15, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_15, 1) = ((MR_Box) (Var_16));
      }
      {
        RowRvals_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, RowRvals_11, 0) = ((MR_Box) (Var_15));
        MR_hl_field(1, RowRvals_11, 1) = ((MR_Box) (OutRvals_8));
      }
      {
        STATE_VARIABLE_RevRows_17_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevRows_17_17, 0) = ((MR_Box) (RowRvals_11));
        MR_hl_field(1, STATE_VARIABLE_RevRows_17_17, 1) = ((MR_Box) (STATE_VARIABLE_RevRows_0_2));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Rest_9;
      next_value_of_STATE_VARIABLE_RevRows_0_2 = STATE_VARIABLE_RevRows_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevRows_0_2 = next_value_of_STATE_VARIABLE_RevRows_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__3_3;
  MR_Word conv2_HeadVar__5_5;
  MR_Word conv1_HeadVar__7_7;
  MR_Word conv0_HeadVar__9_9;

  ll_backend__switch_case__represent_tagged_case_for_llds_11_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv2_HeadVar__5_5, ((MR_Word) (wrapper_arg_5)), &conv1_HeadVar__7_7, ((MR_Word) (wrapper_arg_7)), &conv0_HeadVar__9_9);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__5_5));
  *wrapper_arg_6 = ((MR_Box) (conv1_HeadVar__7_7));
  *wrapper_arg_8 = ((MR_Box) (conv0_HeadVar__9_9));
}

void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_12_p_0(
  MR_Word Cases_13,
  MR_Word VarRval_14,
  MR_String VarName_15,
  MR_Word CodeModel_16,
  MR_Word CanFail_17,
  MR_Word SwitchGoalInfo_18,
  MR_Word EndLabel_19,
  MR_Word * MaybeEnd_20,
  MR_Word * Code_21,
  MR_Word STATE_VARIABLE_CI_0_49,
  MR_Word * STATE_VARIABLE_CI_50,
  MR_Word CLD_23)
{
  MR_Word BinarySwitchInfo_24;
  MR_Word BranchStart_25;
  MR_Word Params_26;
  MR_Word CommentCode_27;
  MR_Word CaseLabelMap0_28;
  MR_Word CaseLabelMap_29;
  MR_Word SortedTable_31;
  MR_Word RevTableRows_32;
  MR_Word RevTargets_33;
  MR_Integer TableSize_34;
  MR_Word TableRows_35;
  MR_Word Targets_36;
  MR_Word TableAddr_39;
  MR_Word TableAddrRval_42;
  MR_Word BinarySearchCode_43;
  MR_Word MidReg_44;
  MR_Word ComputedGotoCode_45;
  MR_Word CasesCode_46;
  MR_Word EndLabelCode_48;
  MR_Word STATE_VARIABLE_CI_51_51;
  MR_Word Var_56;
  MR_Word STATE_VARIABLE_CI_58_58;
  MR_Word Var_73;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_79;
  MR_Word Var_82;
  MR_Word Var_85;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Box conv7_CaseLabelMap_29;
  MR_Box conv6_MaybeEnd_20;
  MR_Box conv5_STATE_VARIABLE_CI_58_58;
  MR_Box conv4_Var_30;
  MR_Word Var_47;

  ll_backend__string_switch__init_string_binary_switch_info_5_p_0(CanFail_17, &BinarySwitchInfo_24, STATE_VARIABLE_CI_0_49, &STATE_VARIABLE_CI_51_51, CLD_23);
  BranchStart_25 = ((MR_Word) ((MR_hl_field(0, BinarySwitchInfo_24, (MR_Integer) 8))));
  {
    Params_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_26, 0) = ((MR_Box) (VarName_15));
    MR_hl_field(0, Params_26, 1) = ((MR_Box) (SwitchGoalInfo_18));
    MR_hl_field(0, Params_26, 2) = (MR_Box) ((MR_Unsigned) (CodeModel_16));
    MR_hl_field(0, Params_26, 3) = ((MR_Box) (BranchStart_25));
    MR_hl_field(0, Params_26, 4) = ((MR_Box) (EndLabel_19));
  }
  CommentCode_27 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[18])));
  mercury__map__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0), &CaseLabelMap0_28);
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_6[0]));
    MR_hl_field(0, Var_56, 1) = ((MR_Box) (ll_backend__string_switch__generate_string_binary_switch_12_p_0_1));
    MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_56, 3) = ((MR_Box) (Params_26));
  }
  backend_libs__string_switch_util__string_binary_cases_11_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__string_switch_scalar_common_2[0]), (MR_Word) (&ll_backend__string_switch_scalar_common_1[3]), (MR_Word) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), Cases_13, Var_56, ((MR_Box) (CaseLabelMap0_28)), &conv7_CaseLabelMap_29, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_MaybeEnd_20, ((MR_Box) (STATE_VARIABLE_CI_51_51)), &conv5_STATE_VARIABLE_CI_58_58, ((MR_Box) ((MR_Integer) 0)), &conv4_Var_30, &SortedTable_31);
  CaseLabelMap_29 = ((MR_Word) (conv7_CaseLabelMap_29));
  *MaybeEnd_20 = ((MR_Word) (conv6_MaybeEnd_20));
  STATE_VARIABLE_CI_58_58 = ((MR_Word) (conv5_STATE_VARIABLE_CI_58_58));
  ll_backend__string_switch__gen_string_binary_jump_slots_7_p_0(SortedTable_31, (MR_Word) ((MR_Unsigned) 0U), &RevTableRows_32, (MR_Word) ((MR_Unsigned) 0U), &RevTargets_33, (MR_Integer) 0, &TableSize_34);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), RevTableRows_32, &TableRows_35);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[1]), RevTargets_33, &Targets_36);
  ll_backend__code_info__add_vector_static_cell_5_p_0((MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[15])), TableRows_35, &TableAddr_39, STATE_VARIABLE_CI_58_58, STATE_VARIABLE_CI_50);
  {
    Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_73, 1) = ((MR_Box) (TableAddr_39));
    MR_hl_field(3, Var_73, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    TableAddrRval_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, TableAddrRval_42, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, TableAddrRval_42, 1) = ((MR_Box) (Var_73));
  }
  ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(BinarySwitchInfo_24, VarRval_14, TableAddrRval_42, (MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[13])), TableSize_34, (MR_Integer) 2, &BinarySearchCode_43);
  MidReg_44 = ((MR_Word) ((MR_hl_field(0, BinarySwitchInfo_24, (MR_Integer) 2))));
  {
    Var_85 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_85, 0) = ((MR_Box) (MidReg_44));
  }
  {
    Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_82, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[19])));
    MR_hl_field(3, Var_82, 2) = ((MR_Box) (Var_85));
    MR_hl_field(3, Var_82, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[20])));
  }
  {
    Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_79, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[1])));
    MR_hl_field(3, Var_79, 2) = ((MR_Box) (Var_82));
    MR_hl_field(3, Var_79, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[21])));
  }
  {
    Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_77, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[35])));
    MR_hl_field(3, Var_77, 2) = ((MR_Box) (TableAddrRval_42));
    MR_hl_field(3, Var_77, 3) = ((MR_Box) (Var_79));
  }
  {
    Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, Var_76, 1) = ((MR_Box) (Var_77));
    MR_hl_field(3, Var_76, 2) = ((MR_Box) (Targets_36));
  }
  {
    Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_75, 0) = ((MR_Box) (Var_76));
    MR_hl_field(0, Var_75, 1) = ((MR_Box) ((MR_String) "jump to the matching case"));
  }
  ComputedGotoCode_45 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_75)));
  ll_backend__switch_case__add_not_yet_included_cases_3_p_0(&CasesCode_46, CaseLabelMap_29, &Var_47);
  {
    Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_93, 1) = ((MR_Box) (EndLabel_19));
  }
  {
    Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_92, 0) = ((MR_Box) (Var_93));
    MR_hl_field(0, Var_92, 1) = ((MR_Box) ((MR_String) "end of binary string switch"));
  }
  EndLabelCode_48 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_92)));
  Var_97 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CasesCode_46, EndLabelCode_48);
  Var_96 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ComputedGotoCode_45, Var_97);
  Var_95 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BinarySearchCode_43, Var_96);
  *Code_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CommentCode_27, Var_95);
}

static void MR_CALL 
ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(
  MR_Word Info_8,
  MR_Word VarRval_9,
  MR_Word TableAddrRval_10,
  MR_Word ArrayElemType_11,
  MR_Integer TableSize_12,
  MR_Integer NumColumns_13,
  MR_Word * Code_14)
{
  MR_Word LoReg_15 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
  MR_Word HiReg_16 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
  MR_Word MidReg_17 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 2))));
  MR_Word ResultReg_18 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 3))));
  MR_Word LoopStartLabel_19 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 4))));
  MR_Word GtEqLabel_20 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 5))));
  MR_Word EqLabel_21 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 6))));
  MR_Word FailLabel_22 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 7))));
  MR_Word FailCode_24 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 9))));
  MR_Integer MaxIndex_25 = (MR_Integer) ((MR_Unsigned) TableSize_12 - (MR_Unsigned) 1);
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[22]));
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_90;
  MR_Word Var_94;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_103;
  MR_Word Var_107;
  MR_Word Var_108;
  MR_Word Var_109;
  MR_Word Var_110;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word Var_116;
  MR_Word Var_117;
  MR_Word Var_118;
  MR_Word Var_119;
  MR_Word Var_126;
  MR_Word Var_128;
  MR_Word Var_129;
  MR_Word Var_130;
  MR_Word Var_131;
  MR_Word Var_139;
  MR_Word Var_140;
  MR_Word Var_144;
  MR_Word Var_145;
  MR_Word Var_146;
  MR_Word Var_149;
  MR_Word Var_150;
  MR_Word Var_151;
  MR_Word Var_152;

  {
    Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_30, 1) = ((MR_Box) (LoReg_15));
    MR_hl_field(3, Var_30, 2) = ((MR_Box) (Var_31));
  }
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) ((MR_String) ""));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (MaxIndex_25));
  }
  {
    Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_38, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_37, 1) = ((MR_Box) (HiReg_16));
    MR_hl_field(3, Var_37, 2) = ((MR_Box) (Var_38));
  }
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) ((MR_String) ""));
  }
  {
    Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_43, 1) = ((MR_Box) (LoopStartLabel_19));
  }
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_42, 0) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_42, 1) = ((MR_Box) ((MR_String) "begin table search loop, nofulljump"));
  }
  {
    Var_51 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_51, 0) = ((MR_Box) (LoReg_15));
  }
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (HiReg_16));
  }
  {
    Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_48, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[31])));
    MR_hl_field(3, Var_48, 2) = ((MR_Box) (Var_51));
    MR_hl_field(3, Var_48, 3) = ((MR_Box) (Var_52));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (FailLabel_22));
  }
  {
    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_47, 1) = ((MR_Box) (Var_48));
    MR_hl_field(3, Var_47, 2) = ((MR_Box) (Var_53));
  }
  {
    Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_46, 0) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_46, 1) = ((MR_Box) ((MR_String) "have we searched all of the table\?"));
  }
  Var_62 = (MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[1]));
  {
    Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_61, 1) = ((MR_Box) (Var_62));
    MR_hl_field(3, Var_61, 2) = ((MR_Box) (Var_51));
    MR_hl_field(3, Var_61, 3) = ((MR_Box) (Var_52));
  }
  {
    Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_58, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[32])));
    MR_hl_field(3, Var_58, 2) = ((MR_Box) (Var_61));
    MR_hl_field(3, Var_58, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[20])));
  }
  {
    Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_57, 1) = ((MR_Box) (MidReg_17));
    MR_hl_field(3, Var_57, 2) = ((MR_Box) (Var_58));
  }
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_56, 1) = ((MR_Box) ((MR_String) ""));
  }
  {
    Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 10U));
    MR_hl_field(3, Var_76, 1) = ((MR_Box) (ArrayElemType_11));
  }
  {
    Var_80 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_80, 0) = ((MR_Box) (MidReg_17));
  }
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (NumColumns_13));
  }
  {
    Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_81, 1) = ((MR_Box) (Var_82));
  }
  {
    Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_77, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[19])));
    MR_hl_field(3, Var_77, 2) = ((MR_Box) (Var_80));
    MR_hl_field(3, Var_77, 3) = ((MR_Box) (Var_81));
  }
  {
    Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_75, 1) = ((MR_Box) (Var_76));
    MR_hl_field(3, Var_75, 2) = ((MR_Box) (TableAddrRval_10));
    MR_hl_field(3, Var_75, 3) = ((MR_Box) (Var_77));
  }
  {
    Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(3, Var_73, 2) = ((MR_Box) (VarRval_9));
    MR_hl_field(3, Var_73, 3) = ((MR_Box) (Var_75));
  }
  {
    Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_72, 1) = ((MR_Box) (ResultReg_18));
    MR_hl_field(3, Var_72, 2) = ((MR_Box) (Var_73));
  }
  {
    Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_71, 0) = ((MR_Box) (Var_72));
    MR_hl_field(0, Var_71, 1) = ((MR_Box) ((MR_String) "compare with the middle element"));
  }
  {
    Var_90 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_90, 0) = ((MR_Box) (ResultReg_18));
  }
  {
    Var_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_87, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[28])));
    MR_hl_field(3, Var_87, 2) = ((MR_Box) (Var_90));
    MR_hl_field(3, Var_87, 3) = ((MR_Box) (Var_31));
  }
  {
    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_94, 0) = ((MR_Box) (GtEqLabel_20));
  }
  {
    Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_86, 1) = ((MR_Box) (Var_87));
    MR_hl_field(3, Var_86, 2) = ((MR_Box) (Var_94));
  }
  {
    Var_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_85, 0) = ((MR_Box) (Var_86));
    MR_hl_field(0, Var_85, 1) = ((MR_Box) ((MR_String) "branch away unless key is in lo half"));
  }
  Var_103 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[21]));
  {
    Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_99, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__string_switch_scalar_common_3[1])));
    MR_hl_field(3, Var_99, 2) = ((MR_Box) (Var_80));
    MR_hl_field(3, Var_99, 3) = ((MR_Box) (Var_103));
  }
  {
    Var_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_98, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_98, 1) = ((MR_Box) (HiReg_16));
    MR_hl_field(3, Var_98, 2) = ((MR_Box) (Var_99));
  }
  {
    Var_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_97, 0) = ((MR_Box) (Var_98));
    MR_hl_field(0, Var_97, 1) = ((MR_Box) ((MR_String) ""));
  }
  {
    Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_110, 0) = ((MR_Box) (LoopStartLabel_19));
  }
  {
    Var_109 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_109, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_109, 1) = ((MR_Box) (Var_110));
  }
  {
    Var_108 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_108, 0) = ((MR_Box) (Var_109));
    MR_hl_field(0, Var_108, 1) = ((MR_Box) ((MR_String) "go back to search the remaining lo half"));
  }
  {
    Var_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_114, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_114, 1) = ((MR_Box) (GtEqLabel_20));
  }
  {
    Var_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_113, 0) = ((MR_Box) (Var_114));
    MR_hl_field(0, Var_113, 1) = ((MR_Box) ((MR_String) "nofulljump"));
  }
  {
    Var_119 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_119, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_119, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[33])));
    MR_hl_field(3, Var_119, 2) = ((MR_Box) (Var_90));
    MR_hl_field(3, Var_119, 3) = ((MR_Box) (Var_31));
  }
  {
    Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_126, 0) = ((MR_Box) (EqLabel_21));
  }
  {
    Var_118 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_118, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_118, 1) = ((MR_Box) (Var_119));
    MR_hl_field(3, Var_118, 2) = ((MR_Box) (Var_126));
  }
  {
    Var_117 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_117, 0) = ((MR_Box) (Var_118));
    MR_hl_field(0, Var_117, 1) = ((MR_Box) ((MR_String) "branch away unless key is in hi half"));
  }
  {
    Var_131 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_131, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_131, 1) = ((MR_Box) (Var_62));
    MR_hl_field(3, Var_131, 2) = ((MR_Box) (Var_80));
    MR_hl_field(3, Var_131, 3) = ((MR_Box) (Var_103));
  }
  {
    Var_130 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_130, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_130, 1) = ((MR_Box) (LoReg_15));
    MR_hl_field(3, Var_130, 2) = ((MR_Box) (Var_131));
  }
  {
    Var_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_129, 0) = ((MR_Box) (Var_130));
    MR_hl_field(0, Var_129, 1) = ((MR_Box) ((MR_String) ""));
  }
  {
    Var_140 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_140, 0) = ((MR_Box) (Var_109));
    MR_hl_field(0, Var_140, 1) = ((MR_Box) ((MR_String) "go back to search the remaining hi half"));
  }
  {
    Var_146 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_146, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_146, 1) = ((MR_Box) (FailLabel_22));
  }
  {
    Var_145 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_145, 0) = ((MR_Box) (Var_146));
    MR_hl_field(0, Var_145, 1) = ((MR_Box) ((MR_String) "handle the failure of the table search"));
  }
  {
    Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_144, 0) = ((MR_Box) (Var_145));
    MR_hl_field(1, Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_139, 0) = ((MR_Box) (Var_140));
    MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_144));
  }
  {
    Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_128, 0) = ((MR_Box) (Var_129));
    MR_hl_field(1, Var_128, 1) = ((MR_Box) (Var_139));
  }
  {
    Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_116, 0) = ((MR_Box) (Var_117));
    MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_128));
  }
  {
    Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_112, 0) = ((MR_Box) (Var_113));
    MR_hl_field(1, Var_112, 1) = ((MR_Box) (Var_116));
  }
  {
    Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_107, 0) = ((MR_Box) (Var_108));
    MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_112));
  }
  {
    Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_96, 0) = ((MR_Box) (Var_97));
    MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_107));
  }
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_96));
  }
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_84));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_70));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_45));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_41));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_35));
  }
  Var_27 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_28);
  {
    Var_152 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_152, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_152, 1) = ((MR_Box) (EqLabel_21));
  }
  {
    Var_151 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_151, 0) = ((MR_Box) (Var_152));
    MR_hl_field(0, Var_151, 1) = ((MR_Box) ((MR_String) "we found the key"));
  }
  Var_150 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_151)));
  Var_149 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_24, Var_150);
  *Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_27, Var_149);
}

static void MR_CALL 
ll_backend__string_switch__init_string_binary_switch_info_5_p_0(
  MR_Word CanFail_6,
  MR_Word * Info_7,
  MR_Word STATE_VARIABLE_CI_0_20,
  MR_Word * STATE_VARIABLE_CI_21,
  MR_Word STATE_VARIABLE_CLD_0_22)
{
  MR_Word LoReg_10;
  MR_Word HiReg_11;
  MR_Word MidReg_12;
  MR_Word ResultReg_13;
  MR_Word LoopStartLabel_14;
  MR_Word GtEqLabel_15;
  MR_Word EqLabel_16;
  MR_Word FailLabel_17;
  MR_Word BranchStart_18;
  MR_Word FailCode_19;
  MR_Word STATE_VARIABLE_CLD_24_24;
  MR_Word STATE_VARIABLE_CLD_26_26;
  MR_Word STATE_VARIABLE_CLD_28_28;
  MR_Word STATE_VARIABLE_CLD_30_30;
  MR_Word STATE_VARIABLE_CLD_31_31;
  MR_Word STATE_VARIABLE_CLD_32_32;
  MR_Word STATE_VARIABLE_CLD_33_33;
  MR_Word STATE_VARIABLE_CLD_34_34;
  MR_Word STATE_VARIABLE_CI_35_35;
  MR_Word STATE_VARIABLE_CI_36_36;
  MR_Word STATE_VARIABLE_CI_37_37;
  MR_Word STATE_VARIABLE_CI_38_38;

  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &LoReg_10, STATE_VARIABLE_CLD_0_22, &STATE_VARIABLE_CLD_24_24);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &HiReg_11, STATE_VARIABLE_CLD_24_24, &STATE_VARIABLE_CLD_26_26);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &MidReg_12, STATE_VARIABLE_CLD_26_26, &STATE_VARIABLE_CLD_28_28);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ResultReg_13, STATE_VARIABLE_CLD_28_28, &STATE_VARIABLE_CLD_30_30);
  ll_backend__code_loc_dep__release_reg_3_p_0(LoReg_10, STATE_VARIABLE_CLD_30_30, &STATE_VARIABLE_CLD_31_31);
  ll_backend__code_loc_dep__release_reg_3_p_0(HiReg_11, STATE_VARIABLE_CLD_31_31, &STATE_VARIABLE_CLD_32_32);
  ll_backend__code_loc_dep__release_reg_3_p_0(MidReg_12, STATE_VARIABLE_CLD_32_32, &STATE_VARIABLE_CLD_33_33);
  ll_backend__code_loc_dep__release_reg_3_p_0(ResultReg_13, STATE_VARIABLE_CLD_33_33, &STATE_VARIABLE_CLD_34_34);
  ll_backend__code_info__get_next_label_3_p_0(&LoopStartLabel_14, STATE_VARIABLE_CI_0_20, &STATE_VARIABLE_CI_35_35);
  ll_backend__code_info__get_next_label_3_p_0(&GtEqLabel_15, STATE_VARIABLE_CI_35_35, &STATE_VARIABLE_CI_36_36);
  ll_backend__code_info__get_next_label_3_p_0(&EqLabel_16, STATE_VARIABLE_CI_36_36, &STATE_VARIABLE_CI_37_37);
  ll_backend__code_info__get_next_label_3_p_0(&FailLabel_17, STATE_VARIABLE_CI_37_37, &STATE_VARIABLE_CI_38_38);
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_34_34, &BranchStart_18);
  switch (CanFail_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_19, STATE_VARIABLE_CI_38_38, STATE_VARIABLE_CI_21, STATE_VARIABLE_CLD_34_34);
      break;
    case (MR_Integer) 1:
      {
        FailCode_19 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[34])));
        *STATE_VARIABLE_CI_21 = STATE_VARIABLE_CI_38_38;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (LoReg_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (HiReg_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (MidReg_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (ResultReg_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (LoopStartLabel_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (GtEqLabel_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (EqLabel_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (FailLabel_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (BranchStart_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (FailCode_19));
  }
}

static void MR_CALL 
ll_backend__string_switch__gen_string_binary_jump_slots_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevTableRows_0_2,
  MR_Word * STATE_VARIABLE_RevTableRows_3,
  MR_Word STATE_VARIABLE_RevTargets_0_4,
  MR_Word * STATE_VARIABLE_RevTargets_5,
  MR_Integer STATE_VARIABLE_CurIndex_0_6,
  MR_Integer * STATE_VARIABLE_CurIndex_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CurIndex_7 = STATE_VARIABLE_CurIndex_0_6;
      *STATE_VARIABLE_RevTargets_5 = STATE_VARIABLE_RevTargets_0_4;
      *STATE_VARIABLE_RevTableRows_3 = STATE_VARIABLE_RevTableRows_0_2;
    }
    else
    {
      MR_String Str_17;
      MR_Word Label_18;
      MR_Word StrLabels_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Row_23;
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word STATE_VARIABLE_RevTableRows_37_37;
      MR_Word STATE_VARIABLE_RevTargets_38_38;
      MR_Word Var_39;
      MR_Integer STATE_VARIABLE_CurIndex_40_40;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevTableRows_0_2;
      MR_Word next_value_of_STATE_VARIABLE_RevTargets_0_4;
      MR_Integer next_value_of_STATE_VARIABLE_CurIndex_0_6;

      Str_17 = ((MR_String) ((MR_hl_field(0, Var_30, (MR_Integer) 0))));
      Label_18 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 1))));
      {
        Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(3, Var_32, 1) = ((MR_Box) (Str_17));
      }
      {
        Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_31, 1) = ((MR_Box) (Var_32));
      }
      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (STATE_VARIABLE_CurIndex_0_6));
      }
      {
        Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_34, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Row_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Row_23, 0) = ((MR_Box) (Var_31));
        MR_hl_field(1, Row_23, 1) = ((MR_Box) (Var_33));
      }
      {
        STATE_VARIABLE_RevTableRows_37_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevTableRows_37_37, 0) = ((MR_Box) (Row_23));
        MR_hl_field(1, STATE_VARIABLE_RevTableRows_37_37, 1) = ((MR_Box) (STATE_VARIABLE_RevTableRows_0_2));
      }
      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (Label_18));
      }
      {
        STATE_VARIABLE_RevTargets_38_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevTargets_38_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(1, STATE_VARIABLE_RevTargets_38_38, 1) = ((MR_Box) (STATE_VARIABLE_RevTargets_0_4));
      }
      STATE_VARIABLE_CurIndex_40_40 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurIndex_0_6 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = StrLabels_19;
      next_value_of_STATE_VARIABLE_RevTableRows_0_2 = STATE_VARIABLE_RevTableRows_37_37;
      next_value_of_STATE_VARIABLE_RevTargets_0_4 = STATE_VARIABLE_RevTargets_38_38;
      next_value_of_STATE_VARIABLE_CurIndex_0_6 = STATE_VARIABLE_CurIndex_40_40;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevTableRows_0_2 = next_value_of_STATE_VARIABLE_RevTableRows_0_2;
      STATE_VARIABLE_RevTargets_0_4 = next_value_of_STATE_VARIABLE_RevTargets_0_4;
      STATE_VARIABLE_CurIndex_0_6 = next_value_of_STATE_VARIABLE_CurIndex_0_6;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__string_switch__generate_string_hash_lookup_switch_8_p_0(
  MR_Word VarRval_9,
  MR_Word LookupSwitchInfo_10,
  MR_Word CanFail_11,
  MR_Word EndLabel_12,
  MR_Word StoreMap_13,
  MR_Word * STATE_VARIABLE_MaybeEnd_28,
  MR_Word * Code_15,
  MR_Word * STATE_VARIABLE_CI_29)
{
  MR_Word CaseConsts_17 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 0))));
  MR_Word OutVars_18 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 1))));
  MR_Word OutTypes_19 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 2))));
  MR_Word Liveness_20 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 3))));
  MR_Word CLD_21 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 6))));
  MR_Word STATE_VARIABLE_MaybeEnd_30_30 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 4))));
  MR_Word STATE_VARIABLE_CI_31_31 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 5))));

  if (((MR_tag((MR_Word) CaseConsts_17)) == (MR_Integer) 0))
  {
    MR_Word CaseValueMap_22 = ((MR_Word) ((MR_hl_field(0, CaseConsts_17, (MR_Integer) 0))));
    MR_Word CaseValues_23;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), CaseValueMap_22, &CaseValues_23);
    ll_backend__string_switch__generate_string_hash_simple_lookup_switch_14_p_0(VarRval_9, CaseValues_23, OutVars_18, OutTypes_19, Liveness_20, CanFail_11, EndLabel_12, StoreMap_13, STATE_VARIABLE_MaybeEnd_30_30, STATE_VARIABLE_MaybeEnd_28, Code_15, STATE_VARIABLE_CI_31_31, STATE_VARIABLE_CI_29, CLD_21);
  }
  else
  {
    MR_Word CaseSolnMap_24 = ((MR_Word) ((MR_hl_field(1, CaseConsts_17, (MR_Integer) 0))));
    MR_Word ResumeVars_25;
    MR_Word GoalsMayModifyTrail_26;
    MR_Word CaseSolns_27;
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, CaseConsts_17, (MR_Integer) 1))));

    ResumeVars_25 = ((MR_Word) ((MR_hl_field(0, Var_34, (MR_Integer) 0))));
    GoalsMayModifyTrail_26 = ((MR_Unsigned) ((MR_hl_field(0, Var_34, (MR_Integer) 1))) & (MR_Integer) 1);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[2]), CaseSolnMap_24, &CaseSolns_27);
    ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0(VarRval_9, CaseSolns_27, ResumeVars_25, GoalsMayModifyTrail_26, OutVars_18, OutTypes_19, Liveness_20, CanFail_11, EndLabel_12, StoreMap_13, STATE_VARIABLE_MaybeEnd_30_30, STATE_VARIABLE_MaybeEnd_28, Code_15, STATE_VARIABLE_CI_31_31, STATE_VARIABLE_CI_29, CLD_21);
  }
}

static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__string_switch__IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__421__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0(
  MR_Word VarRval_17,
  MR_Word CaseSolns_18,
  MR_Word ResumeVars_19,
  MR_Word GoalsMayModifyTrail_20,
  MR_Word OutVars_21,
  MR_Word OutTypes_22,
  MR_Word Liveness_23,
  MR_Word CanFail_24,
  MR_Word EndLabel_25,
  MR_Word StoreMap_26,
  MR_Word STATE_VARIABLE_MaybeEnd_0_70,
  MR_Word * STATE_VARIABLE_MaybeEnd_71,
  MR_Word * Code_28,
  MR_Word STATE_VARIABLE_CI_0_72,
  MR_Word * STATE_VARIABLE_CI_73,
  MR_Word STATE_VARIABLE_CLD_0_74)
{
  MR_bool succeeded;
  MR_Word HashSwitchInfo_31;
  MR_Word CommentCode_32;
  MR_Integer TableSize_33;
  MR_Word HashSlotsMap_34;
  MR_Word HashOp_35;
  MR_Integer NumCollisions_36;
  MR_Integer HashMask_37;
  MR_Integer NumOutVars_38;
  MR_Word OutElemTypes_39;
  MR_Integer NumColumns_40;
  MR_Integer NumPrevColumns_41;
  MR_Word ArrayElemTypes_42;
  MR_Word MainRowTypes_43;
  MR_Word ArrayElemType_44;
  MR_Word AddTrailOps_46;
  MR_Word DummyOutRvals_48;
  MR_Word LaterSolnArrayCord0_49;
  MR_Word RevMainRows_50;
  MR_Word LaterSolnArrayCord_51;
  MR_Integer OneSolnCaseCount_52;
  MR_Integer SeveralSolnsCaseCount_53;
  MR_Word MainRows_54;
  MR_Word LaterSolnArray_55;
  MR_Word AscendingSortedCountKinds_56;
  MR_Word DescendingSortedCountKinds_57;
  MR_Word DescendingSortedKinds_58;
  MR_Word MainVectorAddr_59;
  MR_Word MainVectorAddrRval_60;
  MR_Word LaterVectorAddr_61;
  MR_Word LaterVectorAddrRval_62;
  MR_Word BaseReg_63;
  MR_Word RowStartReg_64;
  MR_Word SetBaseRegCode_65;
  MR_Word LookupResultsCode_66;
  MR_Word MatchCode_67;
  MR_Word HashSearchCode_68;
  MR_Word EndLabelCode_69;
  MR_Word STATE_VARIABLE_CI_75_75;
  MR_Word Var_114;
  MR_Word Var_123;
  MR_Word Var_124;
  MR_Word Var_126;
  MR_Word Var_127;
  MR_Word STATE_VARIABLE_CI_130_130;
  MR_Word Var_131;
  MR_Word STATE_VARIABLE_CI_133_133;
  MR_Word Var_134;
  MR_Word STATE_VARIABLE_CLD_137_137;
  MR_Word Var_138;
  MR_Word Var_139;
  MR_Word Var_140;
  MR_Word Var_141;
  MR_Word Var_145;
  MR_Word Var_149;
  MR_Word Var_150;
  MR_Word Var_152;

  ll_backend__string_switch__init_string_hash_switch_info_5_p_0(CanFail_24, &HashSwitchInfo_31, STATE_VARIABLE_CI_0_72, &STATE_VARIABLE_CI_75_75, STATE_VARIABLE_CLD_0_74);
  CommentCode_32 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[25])));
  backend_libs__string_switch_util__construct_string_hash_cases_6_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[2]), CaseSolns_18, (MR_Integer) 1, &TableSize_33, &HashSlotsMap_34, &HashOp_35, &NumCollisions_36);
  HashMask_37 = (MR_Integer) ((MR_Unsigned) TableSize_33 - (MR_Unsigned) 1);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[6]), OutVars_21, &NumOutVars_38);
  mercury__list__duplicate_3_p_0((MR_Word) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0), NumOutVars_38, ((MR_Box) ((MR_Integer) 2)), &OutElemTypes_39);
  succeeded = (NumCollisions_36 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Var_85;
    MR_Word Var_87;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_93;

    NumColumns_40 = (MR_Integer) ((MR_Unsigned) 3 + (MR_Unsigned) NumOutVars_38);
    NumPrevColumns_41 = (MR_Integer) 1;
    {
      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_87, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, Var_87, 1) = ((MR_Box) (OutElemTypes_39));
    }
    {
      Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_85, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_87));
    }
    {
      ArrayElemTypes_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArrayElemTypes_42, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, ArrayElemTypes_42, 1) = ((MR_Box) (Var_85));
    }
    Var_91 = (MR_Word) (MR_mkword(2, &ll_backend__string_switch_scalar_common_3[1]));
    {
      Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_93, 0) = ((MR_Box) (Var_91));
      MR_hl_field(1, Var_93, 1) = ((MR_Box) (OutTypes_22));
    }
    {
      Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
      MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_93));
    }
    {
      MainRowTypes_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MainRowTypes_43, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, MainRowTypes_43, 1) = ((MR_Box) (Var_90));
    }
  }
  else
  {
    MR_Word Var_98;
    MR_Word Var_100;
    MR_Word Var_102;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_108;
    MR_Word Var_111;

    NumColumns_40 = (MR_Integer) ((MR_Unsigned) 4 + (MR_Unsigned) NumOutVars_38);
    NumPrevColumns_41 = (MR_Integer) 2;
    {
      Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_102, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, Var_102, 1) = ((MR_Box) (OutElemTypes_39));
    }
    {
      Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_100, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_102));
    }
    {
      Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_98, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_100));
    }
    {
      ArrayElemTypes_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArrayElemTypes_42, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, ArrayElemTypes_42, 1) = ((MR_Box) (Var_98));
    }
    Var_106 = (MR_Word) (MR_mkword(2, &ll_backend__string_switch_scalar_common_3[1]));
    {
      Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_111, 0) = ((MR_Box) (Var_106));
      MR_hl_field(1, Var_111, 1) = ((MR_Box) (OutTypes_22));
    }
    {
      Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_108, 0) = ((MR_Box) (Var_106));
      MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_111));
    }
    {
      Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_105, 0) = ((MR_Box) (Var_106));
      MR_hl_field(1, Var_105, 1) = ((MR_Box) (Var_108));
    }
    {
      MainRowTypes_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MainRowTypes_43, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, MainRowTypes_43, 1) = ((MR_Box) (Var_105));
    }
  }
  {
    ArrayElemType_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArrayElemType_44, 0) = ((MR_Box) (ArrayElemTypes_42));
  }
  {
    Var_114 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_114, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_5[1]));
    MR_hl_field(0, Var_114, 1) = ((MR_Box) (ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_1));
    MR_hl_field(0, Var_114, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_114, 3) = ((MR_Box) (OutVars_21));
    MR_hl_field(0, Var_114, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_not_3_p_0(Var_114, (MR_String) "predicate \140ll_backend.string_switch.generate_string_hash_several_soln_lookup_switch\'/16", (MR_String) "no OutVars");
  switch (GoalsMayModifyTrail_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      AddTrailOps_46 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      ll_backend__code_info__get_emit_trail_ops_2_p_0(STATE_VARIABLE_CI_75_75, &AddTrailOps_46);
      break;
  }
  DummyOutRvals_48 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__string_switch_scalar_common_2[6]), OutTypes_22);
  LaterSolnArrayCord0_49 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), ((MR_Box) (DummyOutRvals_48)));
  ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_15_p_0((MR_Integer) 0, TableSize_33, HashSlotsMap_34, DummyOutRvals_48, NumOutVars_38, NumCollisions_36, (MR_Word) ((MR_Unsigned) 0U), &RevMainRows_50, (MR_Integer) 1, LaterSolnArrayCord0_49, &LaterSolnArrayCord_51, (MR_Integer) 0, &OneSolnCaseCount_52, (MR_Integer) 0, &SeveralSolnsCaseCount_53);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), RevMainRows_50, &MainRows_54);
  LaterSolnArray_55 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), LaterSolnArrayCord_51);
  {
    Var_124 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_124, 0) = ((MR_Box) (OneSolnCaseCount_52));
    MR_hl_field(0, Var_124, 1) = ((MR_Box) ((MR_Integer) 1));
  }
  {
    Var_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_127, 0) = ((MR_Box) (SeveralSolnsCaseCount_53));
    MR_hl_field(0, Var_127, 1) = ((MR_Box) ((MR_Integer) 2));
  }
  {
    Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_126, 0) = ((MR_Box) (Var_127));
    MR_hl_field(1, Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_123, 0) = ((MR_Box) (Var_124));
    MR_hl_field(1, Var_123, 1) = ((MR_Box) (Var_126));
  }
  mercury__list__sort_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_2[2]), Var_123, &AscendingSortedCountKinds_56);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_2[2]), AscendingSortedCountKinds_56, &DescendingSortedCountKinds_57);
  mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0), DescendingSortedCountKinds_57, &DescendingSortedKinds_58);
  ll_backend__code_info__add_vector_static_cell_5_p_0(MainRowTypes_43, MainRows_54, &MainVectorAddr_59, STATE_VARIABLE_CI_75_75, &STATE_VARIABLE_CI_130_130);
  {
    Var_131 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_131, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_131, 1) = ((MR_Box) (MainVectorAddr_59));
    MR_hl_field(3, Var_131, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MainVectorAddrRval_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MainVectorAddrRval_60, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MainVectorAddrRval_60, 1) = ((MR_Box) (Var_131));
  }
  ll_backend__code_info__add_vector_static_cell_5_p_0(OutTypes_22, LaterSolnArray_55, &LaterVectorAddr_61, STATE_VARIABLE_CI_130_130, &STATE_VARIABLE_CI_133_133);
  {
    Var_134 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_134, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_134, 1) = ((MR_Box) (LaterVectorAddr_61));
    MR_hl_field(3, Var_134, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    LaterVectorAddrRval_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LaterVectorAddrRval_62, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, LaterVectorAddrRval_62, 1) = ((MR_Box) (Var_134));
  }
  ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(StoreMap_26, (MR_Integer) 0, &BaseReg_63, STATE_VARIABLE_CLD_0_74, &STATE_VARIABLE_CLD_137_137);
  RowStartReg_64 = ((MR_Word) ((MR_hl_field(0, HashSwitchInfo_31, (MR_Integer) 1))));
  {
    Var_145 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_145, 0) = ((MR_Box) (RowStartReg_64));
  }
  {
    Var_141 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_141, 0) = ((MR_Box) (MainVectorAddrRval_60));
    MR_hl_field(2, Var_141, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[8])));
    MR_hl_field(2, Var_141, 2) = ((MR_Box) (Var_145));
  }
  {
    Var_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_140, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_140, 1) = ((MR_Box) (Var_141));
  }
  {
    Var_139 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_139, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_139, 1) = ((MR_Box) (BaseReg_63));
    MR_hl_field(3, Var_139, 2) = ((MR_Box) (Var_140));
  }
  {
    Var_138 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_138, 0) = ((MR_Box) (Var_139));
    MR_hl_field(0, Var_138, 1) = ((MR_Box) ((MR_String) "set up base reg"));
  }
  SetBaseRegCode_65 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_138)));
  ll_backend__lookup_switch__generate_code_for_all_kinds_16_p_0(DescendingSortedKinds_58, NumPrevColumns_41, OutVars_21, ResumeVars_19, EndLabel_25, StoreMap_26, Liveness_23, AddTrailOps_46, BaseReg_63, LaterVectorAddrRval_62, STATE_VARIABLE_MaybeEnd_0_70, STATE_VARIABLE_MaybeEnd_71, &LookupResultsCode_66, STATE_VARIABLE_CI_133_133, STATE_VARIABLE_CI_73, STATE_VARIABLE_CLD_137_137);
  MatchCode_67 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetBaseRegCode_65, LookupResultsCode_66);
  ll_backend__string_switch__generate_string_hash_switch_search_10_p_0(HashSwitchInfo_31, VarRval_17, MainVectorAddrRval_60, ArrayElemType_44, NumColumns_40, HashOp_35, HashMask_37, NumCollisions_36, MatchCode_67, &HashSearchCode_68);
  {
    Var_150 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_150, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_150, 1) = ((MR_Box) (EndLabel_25));
  }
  {
    Var_149 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_149, 0) = ((MR_Box) (Var_150));
    MR_hl_field(0, Var_149, 1) = ((MR_Box) ((MR_String) "end of simple hash string lookup switch"));
  }
  EndLabelCode_69 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_149)));
  Var_152 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HashSearchCode_68, EndLabelCode_69);
  *Code_28 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CommentCode_32, Var_152);
}

static void MR_CALL 
ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_15_p_0(
  MR_Integer Slot_16,
  MR_Integer TableSize_17,
  MR_Word HashSlotMap_18,
  MR_Word DummyOutRvals_19,
  MR_Integer NumOutVars_20,
  MR_Integer NumCollisions_21,
  MR_Word STATE_VARIABLE_RevMainRows_0_44,
  MR_Word * STATE_VARIABLE_RevMainRows_45,
  MR_Integer STATE_VARIABLE_LaterNextRow_0_46,
  MR_Word STATE_VARIABLE_LaterSolnArray_0_47,
  MR_Word * STATE_VARIABLE_LaterSolnArray_48,
  MR_Integer STATE_VARIABLE_OneSolnCaseCount_0_49,
  MR_Integer * STATE_VARIABLE_OneSolnCaseCount_50,
  MR_Integer STATE_VARIABLE_SeveralSolnsCaseCount_0_51,
  MR_Integer * STATE_VARIABLE_SeveralSolnsCaseCount_52)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Slot_16 == TableSize_17);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_SeveralSolnsCaseCount_52 = STATE_VARIABLE_SeveralSolnsCaseCount_0_51;
      *STATE_VARIABLE_OneSolnCaseCount_50 = STATE_VARIABLE_OneSolnCaseCount_0_49;
      *STATE_VARIABLE_LaterSolnArray_48 = STATE_VARIABLE_LaterSolnArray_0_47;
      *STATE_VARIABLE_RevMainRows_45 = STATE_VARIABLE_RevMainRows_0_44;
    }
    else
    {
      MR_Word MainRow_36;
      MR_Integer STATE_VARIABLE_OneSolnCaseCount_55_55;
      MR_Integer STATE_VARIABLE_SeveralSolnsCaseCount_61_61;
      MR_Integer STATE_VARIABLE_LaterNextRow_70_70;
      MR_Word STATE_VARIABLE_LaterSolnArray_71_71;
      MR_Word STATE_VARIABLE_RevMainRows_81_81;
      MR_Integer Var_82;
      MR_Word SlotInfo_27;
      MR_Box conv0_SlotInfo_27;
      MR_Integer next_value_of_Slot_16;
      MR_Word next_value_of_STATE_VARIABLE_RevMainRows_0_44;
      MR_Integer next_value_of_STATE_VARIABLE_LaterNextRow_0_46;
      MR_Word next_value_of_STATE_VARIABLE_LaterSolnArray_0_47;
      MR_Integer next_value_of_STATE_VARIABLE_OneSolnCaseCount_0_49;
      MR_Integer next_value_of_STATE_VARIABLE_SeveralSolnsCaseCount_0_51;

      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[9]), HashSlotMap_18, Slot_16, &conv0_SlotInfo_27);
      if (succeeded)
      {
        SlotInfo_27 = ((MR_Word) (conv0_SlotInfo_27));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_String String_28 = ((MR_String) ((MR_hl_field(0, SlotInfo_27, (MR_Integer) 0))));
        MR_Integer Next_29 = ((MR_Integer) ((MR_hl_field(0, SlotInfo_27, (MR_Integer) 1))));
        MR_Word Soln_30 = ((MR_Word) ((MR_hl_field(0, SlotInfo_27, (MR_Integer) 2))));
        MR_Word StringRval_31;
        MR_Word NextSlotRval_32;
        MR_Word Var_53;
        MR_Word Var_54;

        {
          Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(3, Var_53, 1) = ((MR_Box) (String_28));
        }
        {
          StringRval_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, StringRval_31, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, StringRval_31, 1) = ((MR_Box) (Var_53));
        }
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (Next_29));
        }
        {
          NextSlotRval_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, NextSlotRval_32, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, NextSlotRval_32, 1) = ((MR_Box) (Var_54));
        }
        if (((MR_tag((MR_Word) Soln_30)) == (MR_Integer) 0))
        {
          MR_Word OutVarRvals_33 = ((MR_Word) ((MR_hl_field(0, Soln_30, (MR_Integer) 0))));
          MR_Word ZeroRval_34;
          MR_Word MainRowTail_35;
          MR_Word Var_59;

          STATE_VARIABLE_OneSolnCaseCount_55_55 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_OneSolnCaseCount_0_49 + (MR_Unsigned) 1);
          ZeroRval_34 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[22]));
          {
            Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_59, 0) = ((MR_Box) (ZeroRval_34));
            MR_hl_field(1, Var_59, 1) = ((MR_Box) (OutVarRvals_33));
          }
          {
            MainRowTail_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MainRowTail_35, 0) = ((MR_Box) (ZeroRval_34));
            MR_hl_field(1, MainRowTail_35, 1) = ((MR_Box) (Var_59));
          }
          succeeded = (NumCollisions_21 == (MR_Integer) 0);
          if (succeeded)
            {
              MainRow_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MainRow_36, 0) = ((MR_Box) (StringRval_31));
              MR_hl_field(1, MainRow_36, 1) = ((MR_Box) (MainRowTail_35));
            }
          else
          {
            MR_Word Var_60;

            {
              Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_60, 0) = ((MR_Box) (NextSlotRval_32));
              MR_hl_field(1, Var_60, 1) = ((MR_Box) (MainRowTail_35));
            }
            {
              MainRow_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MainRow_36, 0) = ((MR_Box) (StringRval_31));
              MR_hl_field(1, MainRow_36, 1) = ((MR_Box) (Var_60));
            }
          }
          STATE_VARIABLE_LaterNextRow_70_70 = STATE_VARIABLE_LaterNextRow_0_46;
          STATE_VARIABLE_LaterSolnArray_71_71 = STATE_VARIABLE_LaterSolnArray_0_47;
          STATE_VARIABLE_SeveralSolnsCaseCount_61_61 = STATE_VARIABLE_SeveralSolnsCaseCount_0_51;
        }
        else
        {
          MR_Word FirstSolnRvals_37 = ((MR_Word) ((MR_hl_field(1, Soln_30, (MR_Integer) 0))));
          MR_Word LaterSolns_38 = ((MR_Word) ((MR_hl_field(1, Soln_30, (MR_Integer) 1))));
          MR_Integer NumLaterSolns_39;
          MR_Integer FirstRowOffset_40;
          MR_Integer LastRowOffset_41;
          MR_Word FirstRowRval_42;
          MR_Word LastRowRval_43;
          MR_Integer Var_63;
          MR_Integer Var_64;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_72;
          MR_Word MainRowTail_88;

          STATE_VARIABLE_SeveralSolnsCaseCount_61_61 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SeveralSolnsCaseCount_0_51 + (MR_Unsigned) 1);
          mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), LaterSolns_38, &NumLaterSolns_39);
          FirstRowOffset_40 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LaterNextRow_0_46 * (MR_Unsigned) NumOutVars_20);
          Var_64 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LaterNextRow_0_46 + (MR_Unsigned) NumLaterSolns_39);
          Var_63 = (MR_Integer) ((MR_Unsigned) Var_64 - (MR_Unsigned) 1);
          LastRowOffset_41 = (MR_Integer) ((MR_Unsigned) Var_63 * (MR_Unsigned) NumOutVars_20);
          {
            Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_66, 0) = ((MR_Box) (FirstRowOffset_40));
          }
          {
            FirstRowRval_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, FirstRowRval_42, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, FirstRowRval_42, 1) = ((MR_Box) (Var_66));
          }
          {
            Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_67, 0) = ((MR_Box) (LastRowOffset_41));
          }
          {
            LastRowRval_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, LastRowRval_43, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, LastRowRval_43, 1) = ((MR_Box) (Var_67));
          }
          {
            Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_68, 0) = ((MR_Box) (LastRowRval_43));
            MR_hl_field(1, Var_68, 1) = ((MR_Box) (FirstSolnRvals_37));
          }
          {
            MainRowTail_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MainRowTail_88, 0) = ((MR_Box) (FirstRowRval_42));
            MR_hl_field(1, MainRowTail_88, 1) = ((MR_Box) (Var_68));
          }
          succeeded = (NumCollisions_21 == (MR_Integer) 0);
          if (succeeded)
            {
              MainRow_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MainRow_36, 0) = ((MR_Box) (StringRval_31));
              MR_hl_field(1, MainRow_36, 1) = ((MR_Box) (MainRowTail_88));
            }
          else
          {
            MR_Word Var_69;

            {
              Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_69, 0) = ((MR_Box) (NextSlotRval_32));
              MR_hl_field(1, Var_69, 1) = ((MR_Box) (MainRowTail_88));
            }
            {
              MainRow_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MainRow_36, 0) = ((MR_Box) (StringRval_31));
              MR_hl_field(1, MainRow_36, 1) = ((MR_Box) (Var_69));
            }
          }
          STATE_VARIABLE_LaterNextRow_70_70 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LaterNextRow_0_46 + (MR_Unsigned) NumLaterSolns_39);
          Var_72 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), LaterSolns_38);
          STATE_VARIABLE_LaterSolnArray_71_71 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), STATE_VARIABLE_LaterSolnArray_0_47, Var_72);
          STATE_VARIABLE_OneSolnCaseCount_55_55 = STATE_VARIABLE_OneSolnCaseCount_0_49;
        }
      }
      else
      {
        MR_Word Var_79;
        MR_Word StringRval_89 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[22]));
        MR_Word MainRowTail_92;

        {
          Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_79, 0) = ((MR_Box) (StringRval_89));
          MR_hl_field(1, Var_79, 1) = ((MR_Box) (DummyOutRvals_19));
        }
        {
          MainRowTail_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MainRowTail_92, 0) = ((MR_Box) (StringRval_89));
          MR_hl_field(1, MainRowTail_92, 1) = ((MR_Box) (Var_79));
        }
        succeeded = (NumCollisions_21 == (MR_Integer) 0);
        if (succeeded)
          {
            MainRow_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MainRow_36, 0) = ((MR_Box) (StringRval_89));
            MR_hl_field(1, MainRow_36, 1) = ((MR_Box) (MainRowTail_92));
          }
        else
        {
          MR_Word Var_80;

          {
            Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_80, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[23])));
            MR_hl_field(1, Var_80, 1) = ((MR_Box) (MainRowTail_92));
          }
          {
            MainRow_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MainRow_36, 0) = ((MR_Box) (StringRval_89));
            MR_hl_field(1, MainRow_36, 1) = ((MR_Box) (Var_80));
          }
        }
        STATE_VARIABLE_SeveralSolnsCaseCount_61_61 = STATE_VARIABLE_SeveralSolnsCaseCount_0_51;
        STATE_VARIABLE_OneSolnCaseCount_55_55 = STATE_VARIABLE_OneSolnCaseCount_0_49;
        STATE_VARIABLE_LaterSolnArray_71_71 = STATE_VARIABLE_LaterSolnArray_0_47;
        STATE_VARIABLE_LaterNextRow_70_70 = STATE_VARIABLE_LaterNextRow_0_46;
      }
      {
        STATE_VARIABLE_RevMainRows_81_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevMainRows_81_81, 0) = ((MR_Box) (MainRow_36));
        MR_hl_field(1, STATE_VARIABLE_RevMainRows_81_81, 1) = ((MR_Box) (STATE_VARIABLE_RevMainRows_0_44));
      }
      Var_82 = (MR_Integer) ((MR_Unsigned) Slot_16 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Slot_16 = Var_82;
      next_value_of_STATE_VARIABLE_RevMainRows_0_44 = STATE_VARIABLE_RevMainRows_81_81;
      next_value_of_STATE_VARIABLE_LaterNextRow_0_46 = STATE_VARIABLE_LaterNextRow_70_70;
      next_value_of_STATE_VARIABLE_LaterSolnArray_0_47 = STATE_VARIABLE_LaterSolnArray_71_71;
      next_value_of_STATE_VARIABLE_OneSolnCaseCount_0_49 = STATE_VARIABLE_OneSolnCaseCount_55_55;
      next_value_of_STATE_VARIABLE_SeveralSolnsCaseCount_0_51 = STATE_VARIABLE_SeveralSolnsCaseCount_61_61;
      Slot_16 = next_value_of_Slot_16;
      STATE_VARIABLE_RevMainRows_0_44 = next_value_of_STATE_VARIABLE_RevMainRows_0_44;
      STATE_VARIABLE_LaterNextRow_0_46 = next_value_of_STATE_VARIABLE_LaterNextRow_0_46;
      STATE_VARIABLE_LaterSolnArray_0_47 = next_value_of_STATE_VARIABLE_LaterSolnArray_0_47;
      STATE_VARIABLE_OneSolnCaseCount_0_49 = next_value_of_STATE_VARIABLE_OneSolnCaseCount_0_49;
      STATE_VARIABLE_SeveralSolnsCaseCount_0_51 = next_value_of_STATE_VARIABLE_SeveralSolnsCaseCount_0_51;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_hash_simple_lookup_switch_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ll_backend__lookup_switch__default_value_for_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__string_switch__generate_string_hash_simple_lookup_switch_14_p_0(
  MR_Word VarRval_15,
  MR_Word CaseValues_16,
  MR_Word OutVars_17,
  MR_Word OutTypes_18,
  MR_Word Liveness_19,
  MR_Word CanFail_20,
  MR_Word EndLabel_21,
  MR_Word StoreMap_22,
  MR_Word STATE_VARIABLE_MaybeEnd_0_56,
  MR_Word * STATE_VARIABLE_MaybeEnd_57,
  MR_Word * Code_24,
  MR_Word STATE_VARIABLE_CI_0_58,
  MR_Word * STATE_VARIABLE_CI_59,
  MR_Word STATE_VARIABLE_CLD_0_60)
{
  MR_bool succeeded;
  MR_Word HashSwitchInfo_27;
  MR_Word CommentCode_28;
  MR_Integer TableSize_29;
  MR_Word HashSlotsMap_30;
  MR_Word HashOp_31;
  MR_Integer NumCollisions_32;
  MR_Integer HashMask_33;
  MR_Integer NumOutVars_34;
  MR_Word OutElemTypes_35;
  MR_Word DummyOutRvals_36;
  MR_Integer NumPrevColumns_37;
  MR_Integer NumColumns_38;
  MR_Word ArrayElemTypes_39;
  MR_Word RowElemTypes_40;
  MR_Word ArrayElemType_41;
  MR_Word RevVectorRvals_42;
  MR_Word VectorRvals_43;
  MR_Word VectorAddr_44;
  MR_Word VectorAddrRval_45;
  MR_Word SetBaseRegCode_46;
  MR_Word BranchEndCode_51;
  MR_Word GotoEndLabelCode_52;
  MR_Word MatchCode_53;
  MR_Word HashSearchCode_54;
  MR_Word EndLabelCode_55;
  MR_Word STATE_VARIABLE_CI_61_61;
  MR_Word Var_84;
  MR_Word STATE_VARIABLE_CLD_97_97;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_103;
  MR_Word Var_104;
  MR_Word Var_105;
  MR_Word Var_107;

  ll_backend__string_switch__init_string_hash_switch_info_5_p_0(CanFail_20, &HashSwitchInfo_27, STATE_VARIABLE_CI_0_58, &STATE_VARIABLE_CI_61_61, STATE_VARIABLE_CLD_0_60);
  CommentCode_28 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[24])));
  backend_libs__string_switch_util__construct_string_hash_cases_6_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), CaseValues_16, (MR_Integer) 1, &TableSize_29, &HashSlotsMap_30, &HashOp_31, &NumCollisions_32);
  HashMask_33 = (MR_Integer) ((MR_Unsigned) TableSize_29 - (MR_Unsigned) 1);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[6]), OutVars_17, &NumOutVars_34);
  mercury__list__duplicate_3_p_0((MR_Word) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0), NumOutVars_34, ((MR_Box) ((MR_Integer) 2)), &OutElemTypes_35);
  DummyOutRvals_36 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__string_switch_scalar_common_2[5]), OutTypes_18);
  succeeded = (NumCollisions_32 == (MR_Integer) 0);
  if (succeeded)
  {
    NumPrevColumns_37 = (MR_Integer) 1;
    NumColumns_38 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) NumOutVars_34);
    {
      ArrayElemTypes_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArrayElemTypes_39, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, ArrayElemTypes_39, 1) = ((MR_Box) (OutElemTypes_35));
    }
    {
      RowElemTypes_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RowElemTypes_40, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, RowElemTypes_40, 1) = ((MR_Box) (OutTypes_18));
    }
  }
  else
  {
    MR_Word Var_75;
    MR_Word Var_78;

    NumPrevColumns_37 = (MR_Integer) 2;
    NumColumns_38 = (MR_Integer) ((MR_Unsigned) 2 + (MR_Unsigned) NumOutVars_34);
    {
      Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_75, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, Var_75, 1) = ((MR_Box) (OutElemTypes_35));
    }
    {
      ArrayElemTypes_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArrayElemTypes_39, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, ArrayElemTypes_39, 1) = ((MR_Box) (Var_75));
    }
    {
      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_78, 0) = ((MR_Box) (MR_mkword(2, &ll_backend__string_switch_scalar_common_3[1])));
      MR_hl_field(1, Var_78, 1) = ((MR_Box) (OutTypes_18));
    }
    {
      RowElemTypes_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RowElemTypes_40, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, RowElemTypes_40, 1) = ((MR_Box) (Var_78));
    }
  }
  {
    ArrayElemType_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArrayElemType_41, 0) = ((MR_Box) (ArrayElemTypes_39));
  }
  ll_backend__string_switch__construct_string_hash_simple_lookup_vector_7_p_0((MR_Integer) 0, TableSize_29, HashSlotsMap_30, NumCollisions_32, DummyOutRvals_36, (MR_Word) ((MR_Unsigned) 0U), &RevVectorRvals_42);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), RevVectorRvals_42, &VectorRvals_43);
  ll_backend__code_info__add_vector_static_cell_5_p_0(RowElemTypes_40, VectorRvals_43, &VectorAddr_44, STATE_VARIABLE_CI_61_61, STATE_VARIABLE_CI_59);
  {
    Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_84, 1) = ((MR_Box) (VectorAddr_44));
    MR_hl_field(3, Var_84, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    VectorAddrRval_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, VectorAddrRval_45, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, VectorAddrRval_45, 1) = ((MR_Box) (Var_84));
  }
  if ((OutVars_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    SetBaseRegCode_46 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    STATE_VARIABLE_CLD_97_97 = STATE_VARIABLE_CLD_0_60;
  }
  else
  {
    MR_Word BaseReg_49;
    MR_Word RowStartReg_50;
    MR_Word STATE_VARIABLE_CLD_87_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_95;

    ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(StoreMap_22, (MR_Integer) 0, &BaseReg_49, STATE_VARIABLE_CLD_0_60, &STATE_VARIABLE_CLD_87_87);
    RowStartReg_50 = ((MR_Word) ((MR_hl_field(0, HashSwitchInfo_27, (MR_Integer) 1))));
    {
      Var_95 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_95, 0) = ((MR_Box) (RowStartReg_50));
    }
    {
      Var_91 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_91, 0) = ((MR_Box) (VectorAddrRval_45));
      MR_hl_field(2, Var_91, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[8])));
      MR_hl_field(2, Var_91, 2) = ((MR_Box) (Var_95));
    }
    {
      Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_90, 1) = ((MR_Box) (Var_91));
    }
    {
      Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_89, 1) = ((MR_Box) (BaseReg_49));
      MR_hl_field(3, Var_89, 2) = ((MR_Box) (Var_90));
    }
    {
      Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_88, 0) = ((MR_Box) (Var_89));
      MR_hl_field(0, Var_88, 1) = ((MR_Box) ((MR_String) "set up base reg"));
    }
    SetBaseRegCode_46 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_88)));
    ll_backend__lookup_util__generate_offset_assigns_6_p_0(OutVars_17, NumPrevColumns_37, BaseReg_49, *STATE_VARIABLE_CI_59, STATE_VARIABLE_CLD_87_87, &STATE_VARIABLE_CLD_97_97);
  }
  ll_backend__lookup_util__set_liveness_and_end_branch_6_p_0(StoreMap_22, Liveness_19, STATE_VARIABLE_MaybeEnd_0_56, STATE_VARIABLE_MaybeEnd_57, &BranchEndCode_51, STATE_VARIABLE_CLD_97_97);
  {
    Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_101, 0) = ((MR_Box) (EndLabel_21));
  }
  {
    Var_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_100, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_100, 1) = ((MR_Box) (Var_101));
  }
  {
    Var_99 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_99, 0) = ((MR_Box) (Var_100));
    MR_hl_field(0, Var_99, 1) = ((MR_Box) ((MR_String) "go to end of simple hash string lookup switch"));
  }
  GotoEndLabelCode_52 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_99)));
  Var_103 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BranchEndCode_51, GotoEndLabelCode_52);
  MatchCode_53 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetBaseRegCode_46, Var_103);
  ll_backend__string_switch__generate_string_hash_switch_search_10_p_0(HashSwitchInfo_27, VarRval_15, VectorAddrRval_45, ArrayElemType_41, NumColumns_38, HashOp_31, HashMask_33, NumCollisions_32, MatchCode_53, &HashSearchCode_54);
  {
    Var_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_105, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_105, 1) = ((MR_Box) (EndLabel_21));
  }
  {
    Var_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_104, 0) = ((MR_Box) (Var_105));
    MR_hl_field(0, Var_104, 1) = ((MR_Box) ((MR_String) "end of simple hash string lookup switch"));
  }
  EndLabelCode_55 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_104)));
  Var_107 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HashSearchCode_54, EndLabelCode_55);
  *Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CommentCode_28, Var_107);
}

static void MR_CALL 
ll_backend__string_switch__construct_string_hash_simple_lookup_vector_7_p_0(
  MR_Integer Slot_8,
  MR_Integer TableSize_9,
  MR_Word HashSlotMap_10,
  MR_Integer NumCollisions_11,
  MR_Word DummyOutRvals_12,
  MR_Word STATE_VARIABLE_RevRows_0_21,
  MR_Word * STATE_VARIABLE_RevRows_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Slot_8 == TableSize_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_RevRows_22 = STATE_VARIABLE_RevRows_0_21;
    else
    {
      MR_Word OutVarRvals_17;
      MR_Word NextSlotRval_18;
      MR_Word StringRval_19;
      MR_Word Row_20;
      MR_Word STATE_VARIABLE_RevRows_30_30;
      MR_Integer Var_31;
      MR_Word SlotInfo_14;
      MR_Box conv0_SlotInfo_14;
      MR_Integer next_value_of_Slot_8;
      MR_Word next_value_of_STATE_VARIABLE_RevRows_0_21;

      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[7]), HashSlotMap_10, Slot_8, &conv0_SlotInfo_14);
      if (succeeded)
      {
        SlotInfo_14 = ((MR_Word) (conv0_SlotInfo_14));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_String String_15 = ((MR_String) ((MR_hl_field(0, SlotInfo_14, (MR_Integer) 0))));
        MR_Integer Next_16 = ((MR_Integer) ((MR_hl_field(0, SlotInfo_14, (MR_Integer) 1))));
        MR_Word Var_23;
        MR_Word Var_24;

        OutVarRvals_17 = ((MR_Word) ((MR_hl_field(0, SlotInfo_14, (MR_Integer) 2))));
        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (Next_16));
        }
        {
          NextSlotRval_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, NextSlotRval_18, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, NextSlotRval_18, 1) = ((MR_Box) (Var_23));
        }
        {
          Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(3, Var_24, 1) = ((MR_Box) (String_15));
        }
        {
          StringRval_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, StringRval_19, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, StringRval_19, 1) = ((MR_Box) (Var_24));
        }
      }
      else
      {
        StringRval_19 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[22]));
        NextSlotRval_18 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[23]));
        OutVarRvals_17 = DummyOutRvals_12;
      }
      succeeded = (NumCollisions_11 == (MR_Integer) 0);
      if (succeeded)
        {
          Row_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Row_20, 0) = ((MR_Box) (StringRval_19));
          MR_hl_field(1, Row_20, 1) = ((MR_Box) (OutVarRvals_17));
        }
      else
      {
        MR_Word Var_29;

        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (NextSlotRval_18));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) (OutVarRvals_17));
        }
        {
          Row_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Row_20, 0) = ((MR_Box) (StringRval_19));
          MR_hl_field(1, Row_20, 1) = ((MR_Box) (Var_29));
        }
      }
      {
        STATE_VARIABLE_RevRows_30_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevRows_30_30, 0) = ((MR_Box) (Row_20));
        MR_hl_field(1, STATE_VARIABLE_RevRows_30_30, 1) = ((MR_Box) (STATE_VARIABLE_RevRows_0_21));
      }
      Var_31 = (MR_Integer) ((MR_Unsigned) Slot_8 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Slot_8 = Var_31;
      next_value_of_STATE_VARIABLE_RevRows_0_21 = STATE_VARIABLE_RevRows_30_30;
      Slot_8 = next_value_of_Slot_8;
      STATE_VARIABLE_RevRows_0_21 = next_value_of_STATE_VARIABLE_RevRows_0_21;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__string_switch__generate_string_hash_switch_12_p_0(
  MR_Word Cases_13,
  MR_Word VarRval_14,
  MR_String VarName_15,
  MR_Word CodeModel_16,
  MR_Word CanFail_17,
  MR_Word SwitchGoalInfo_18,
  MR_Word EndLabel_19,
  MR_Word * MaybeEnd_20,
  MR_Word * Code_21,
  MR_Word STATE_VARIABLE_CI_0_53,
  MR_Word * STATE_VARIABLE_CI_54,
  MR_Word CLD_23)
{
  MR_bool succeeded;
  MR_Word HashSwitchInfo_24;
  MR_Word BranchStart_25;
  MR_Word Params_26;
  MR_Word CommentCode_27;
  MR_Word CaseLabelMap0_28;
  MR_Word StrsLabels_29;
  MR_Word CaseLabelMap_30;
  MR_Integer TableSize_31;
  MR_Word HashSlotsMap_32;
  MR_Word HashOp_33;
  MR_Integer NumCollisions_34;
  MR_Integer HashMask_35;
  MR_Word FailLabel_36;
  MR_Word RevTableRows_37;
  MR_Word RevTargets_38;
  MR_Word TableRows_39;
  MR_Word Targets_40;
  MR_Integer NumColumns_41;
  MR_Word RowElemTypes_42;
  MR_Word ArrayElemTypes_43;
  MR_Word TableAddr_44;
  MR_Word ArrayElemType_45;
  MR_Word TableAddrRval_46;
  MR_Word SlotReg_47;
  MR_Word MatchCode_48;
  MR_Word HashLookupCode_49;
  MR_Word CasesCode_50;
  MR_Word EndLabelCode_52;
  MR_Word STATE_VARIABLE_CI_55_55;
  MR_Word STATE_VARIABLE_CI_61_61;
  MR_Word Var_81;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_51;

  ll_backend__string_switch__init_string_hash_switch_info_5_p_0(CanFail_17, &HashSwitchInfo_24, STATE_VARIABLE_CI_0_53, &STATE_VARIABLE_CI_55_55, CLD_23);
  BranchStart_25 = ((MR_Word) ((MR_hl_field(0, HashSwitchInfo_24, (MR_Integer) 6))));
  {
    Params_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_26, 0) = ((MR_Box) (VarName_15));
    MR_hl_field(0, Params_26, 1) = ((MR_Box) (SwitchGoalInfo_18));
    MR_hl_field(0, Params_26, 2) = (MR_Box) ((MR_Unsigned) (CodeModel_16));
    MR_hl_field(0, Params_26, 3) = ((MR_Box) (BranchStart_25));
    MR_hl_field(0, Params_26, 4) = ((MR_Box) (EndLabel_19));
  }
  CommentCode_27 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[11])));
  mercury__map__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0), &CaseLabelMap0_28);
  ll_backend__string_switch__represent_tagged_cases_in_string_switch_9_p_0(Params_26, Cases_13, &StrsLabels_29, CaseLabelMap0_28, &CaseLabelMap_30, (MR_Word) ((MR_Unsigned) 0U), MaybeEnd_20, STATE_VARIABLE_CI_55_55, &STATE_VARIABLE_CI_61_61);
  backend_libs__string_switch_util__construct_string_hash_cases_6_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), StrsLabels_29, (MR_Integer) 1, &TableSize_31, &HashSlotsMap_32, &HashOp_33, &NumCollisions_34);
  HashMask_35 = (MR_Integer) ((MR_Unsigned) TableSize_31 - (MR_Unsigned) 1);
  FailLabel_36 = ((MR_Word) ((MR_hl_field(0, HashSwitchInfo_24, (MR_Integer) 5))));
  ll_backend__string_switch__construct_string_hash_jump_vectors_9_p_0((MR_Integer) 0, TableSize_31, HashSlotsMap_32, FailLabel_36, NumCollisions_34, (MR_Word) ((MR_Unsigned) 0U), &RevTableRows_37, (MR_Word) ((MR_Unsigned) 0U), &RevTargets_38);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), RevTableRows_37, &TableRows_39);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[1]), RevTargets_38, &Targets_40);
  succeeded = (NumCollisions_34 == (MR_Integer) 0);
  if (succeeded)
  {
    NumColumns_41 = (MR_Integer) 1;
    RowElemTypes_42 = (MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[12]));
    ArrayElemTypes_43 = (MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[13]));
  }
  else
  {
    NumColumns_41 = (MR_Integer) 2;
    RowElemTypes_42 = (MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[15]));
    ArrayElemTypes_43 = (MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[17]));
  }
  ll_backend__code_info__add_vector_static_cell_5_p_0(RowElemTypes_42, TableRows_39, &TableAddr_44, STATE_VARIABLE_CI_61_61, STATE_VARIABLE_CI_54);
  {
    ArrayElemType_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArrayElemType_45, 0) = ((MR_Box) (ArrayElemTypes_43));
  }
  {
    Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_81, 1) = ((MR_Box) (TableAddr_44));
    MR_hl_field(3, Var_81, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    TableAddrRval_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, TableAddrRval_46, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, TableAddrRval_46, 1) = ((MR_Box) (Var_81));
  }
  SlotReg_47 = ((MR_Word) ((MR_hl_field(0, HashSwitchInfo_24, (MR_Integer) 0))));
  {
    Var_86 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_86, 0) = ((MR_Box) (SlotReg_47));
  }
  {
    Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, Var_85, 1) = ((MR_Box) (Var_86));
    MR_hl_field(3, Var_85, 2) = ((MR_Box) (Targets_40));
  }
  {
    Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_84, 0) = ((MR_Box) (Var_85));
    MR_hl_field(0, Var_84, 1) = ((MR_Box) ((MR_String) "jump to the corresponding code"));
  }
  {
    Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
    MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  MatchCode_48 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_83);
  ll_backend__string_switch__generate_string_hash_switch_search_10_p_0(HashSwitchInfo_24, VarRval_14, TableAddrRval_46, ArrayElemType_45, NumColumns_41, HashOp_33, HashMask_35, NumCollisions_34, MatchCode_48, &HashLookupCode_49);
  ll_backend__switch_case__add_not_yet_included_cases_3_p_0(&CasesCode_50, CaseLabelMap_30, &Var_51);
  {
    Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_90, 1) = ((MR_Box) (EndLabel_19));
  }
  {
    Var_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_89, 0) = ((MR_Box) (Var_90));
    MR_hl_field(0, Var_89, 1) = ((MR_Box) ((MR_String) "end of hashed string switch"));
  }
  EndLabelCode_52 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_89)));
  Var_93 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CasesCode_50, EndLabelCode_52);
  Var_92 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HashLookupCode_49, Var_93);
  *Code_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CommentCode_27, Var_92);
}

static void MR_CALL 
ll_backend__string_switch__generate_string_hash_switch_search_10_p_0(
  MR_Word Info_11,
  MR_Word VarRval_12,
  MR_Word TableAddrRval_13,
  MR_Word ArrayElemType_14,
  MR_Integer NumColumns_15,
  MR_Word HashOp_16,
  MR_Integer HashMask_17,
  MR_Integer NumCollisions_18,
  MR_Word MatchCode_19,
  MR_Word * Code_20)
{
  MR_bool succeeded = (NumCollisions_18 == (MR_Integer) 0);
  MR_Word SlotReg_21 = ((MR_Word) ((MR_hl_field(0, Info_11, (MR_Integer) 0))));
  MR_Word RowStartReg_22 = ((MR_Word) ((MR_hl_field(0, Info_11, (MR_Integer) 1))));
  MR_Word StringReg_23 = ((MR_Word) ((MR_hl_field(0, Info_11, (MR_Integer) 2))));
  MR_Word LoopStartLabel_24 = ((MR_Word) ((MR_hl_field(0, Info_11, (MR_Integer) 3))));
  MR_Word NoMatchLabel_25 = ((MR_Word) ((MR_hl_field(0, Info_11, (MR_Integer) 4))));
  MR_Word FailLabel_26 = ((MR_Word) ((MR_hl_field(0, Info_11, (MR_Integer) 5))));
  MR_Word FailCode_27 = ((MR_Word) ((MR_hl_field(0, Info_11, (MR_Integer) 7))));

  if (succeeded)
  {
    MR_Word BaseReg_28;
    MR_Word MultiplyInstrs_29;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_65;
    MR_Word Var_68;
    MR_Word Var_72;
    MR_Word Var_75;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;

    succeeded = (NumColumns_15 == (MR_Integer) 1);
    if (succeeded)
    {
      BaseReg_28 = SlotReg_21;
      MultiplyInstrs_29 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;

      BaseReg_28 = RowStartReg_22;
      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_35, 0) = ((MR_Box) (SlotReg_21));
      }
      {
        Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_37, 0) = ((MR_Box) (NumColumns_15));
      }
      {
        Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_36, 1) = ((MR_Box) (Var_37));
      }
      {
        Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, Var_32, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[19])));
        MR_hl_field(3, Var_32, 2) = ((MR_Box) (Var_35));
        MR_hl_field(3, Var_32, 3) = ((MR_Box) (Var_36));
      }
      {
        Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_31, 1) = ((MR_Box) (RowStartReg_22));
        MR_hl_field(3, Var_31, 2) = ((MR_Box) (Var_32));
      }
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(0, Var_30, 1) = ((MR_Box) ((MR_String) "find the start of the row"));
      }
      {
        MultiplyInstrs_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MultiplyInstrs_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(1, MultiplyInstrs_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    {
      Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_47, 1) = ((MR_Box) (HashOp_16));
      MR_hl_field(3, Var_47, 2) = ((MR_Box) (VarRval_12));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (HashMask_17));
    }
    {
      Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_48, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_44, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[26])));
      MR_hl_field(3, Var_44, 2) = ((MR_Box) (Var_47));
      MR_hl_field(3, Var_44, 3) = ((MR_Box) (Var_48));
    }
    {
      Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_43, 1) = ((MR_Box) (SlotReg_21));
      MR_hl_field(3, Var_43, 2) = ((MR_Box) (Var_44));
    }
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(0, Var_42, 1) = ((MR_Box) ((MR_String) "compute the hash value of the input string"));
    }
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(1, Var_41, 1) = ((MR_Box) (MultiplyInstrs_29));
    }
    Var_40 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_41);
    {
      Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(3, Var_57, 1) = ((MR_Box) (ArrayElemType_14));
    }
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_58, 0) = ((MR_Box) (BaseReg_28));
    }
    {
      Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_56, 1) = ((MR_Box) (Var_57));
      MR_hl_field(3, Var_56, 2) = ((MR_Box) (TableAddrRval_13));
      MR_hl_field(3, Var_56, 3) = ((MR_Box) (Var_58));
    }
    {
      Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_55, 1) = ((MR_Box) (StringReg_23));
      MR_hl_field(3, Var_55, 2) = ((MR_Box) (Var_56));
    }
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(0, Var_54, 1) = ((MR_Box) ((MR_String) "lookup the string for this hash slot"));
    }
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_68, 0) = ((MR_Box) (StringReg_23));
    }
    {
      Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_65, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[27])));
      MR_hl_field(3, Var_65, 2) = ((MR_Box) (Var_68));
      MR_hl_field(3, Var_65, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[22])));
    }
    {
      Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(3, Var_72, 2) = ((MR_Box) (Var_68));
      MR_hl_field(3, Var_72, 3) = ((MR_Box) (VarRval_12));
    }
    {
      Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_63, 2) = ((MR_Box) (Var_65));
      MR_hl_field(3, Var_63, 3) = ((MR_Box) (Var_72));
    }
    {
      Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_75, 0) = ((MR_Box) (FailLabel_26));
    }
    {
      Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_62, 1) = ((MR_Box) (Var_63));
      MR_hl_field(3, Var_62, 2) = ((MR_Box) (Var_75));
    }
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(0, Var_61, 1) = ((MR_Box) ((MR_String) "did we find a match\? nofulljump"));
    }
    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
      MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_60));
    }
    Var_52 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_53);
    {
      Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_83, 1) = ((MR_Box) (FailLabel_26));
    }
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_82, 0) = ((MR_Box) (Var_83));
      MR_hl_field(0, Var_82, 1) = ((MR_Box) ((MR_String) "handle the failure of the table search"));
    }
    {
      Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
      MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_80 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_81);
    Var_79 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_80, FailCode_27);
    Var_78 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MatchCode_19, Var_79);
    Var_51 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_52, Var_78);
    *Code_20 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_40, Var_51);
  }
  else
  {
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_123;
    MR_Word Var_126;
    MR_Word Var_130;
    MR_Word Var_133;
    MR_Word Var_136;
    MR_Word Var_137;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_140;
    MR_Word Var_141;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Word Var_145;
    MR_Word Var_146;
    MR_Word Var_148;
    MR_Word Var_156;
    MR_Word Var_157;
    MR_Word Var_158;
    MR_Word Var_159;
    MR_Word Var_166;
    MR_Word Var_168;
    MR_Word Var_169;
    MR_Word Var_170;

    {
      Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_93, 1) = ((MR_Box) (HashOp_16));
      MR_hl_field(3, Var_93, 2) = ((MR_Box) (VarRval_12));
    }
    {
      Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_95, 0) = ((MR_Box) (HashMask_17));
    }
    {
      Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_94, 1) = ((MR_Box) (Var_95));
    }
    {
      Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_90, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[26])));
      MR_hl_field(3, Var_90, 2) = ((MR_Box) (Var_93));
      MR_hl_field(3, Var_90, 3) = ((MR_Box) (Var_94));
    }
    {
      Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_89, 1) = ((MR_Box) (SlotReg_21));
      MR_hl_field(3, Var_89, 2) = ((MR_Box) (Var_90));
    }
    {
      Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_88, 0) = ((MR_Box) (Var_89));
      MR_hl_field(0, Var_88, 1) = ((MR_Box) ((MR_String) "compute the hash value of the input string"));
    }
    {
      Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_99, 1) = ((MR_Box) (LoopStartLabel_24));
    }
    {
      Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_98, 0) = ((MR_Box) (Var_99));
      MR_hl_field(0, Var_98, 1) = ((MR_Box) ((MR_String) "begin hash chain loop, nofulljump"));
    }
    {
      Var_107 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_107, 0) = ((MR_Box) (SlotReg_21));
    }
    {
      Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_109, 0) = ((MR_Box) (NumColumns_15));
    }
    {
      Var_108 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_108, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_108, 1) = ((MR_Box) (Var_109));
    }
    {
      Var_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_104, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_104, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[19])));
      MR_hl_field(3, Var_104, 2) = ((MR_Box) (Var_107));
      MR_hl_field(3, Var_104, 3) = ((MR_Box) (Var_108));
    }
    {
      Var_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_103, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_103, 1) = ((MR_Box) (RowStartReg_22));
      MR_hl_field(3, Var_103, 2) = ((MR_Box) (Var_104));
    }
    {
      Var_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_102, 0) = ((MR_Box) (Var_103));
      MR_hl_field(0, Var_102, 1) = ((MR_Box) ((MR_String) "find the start of the row"));
    }
    {
      Var_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_115, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(3, Var_115, 1) = ((MR_Box) (ArrayElemType_14));
    }
    {
      Var_116 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_116, 0) = ((MR_Box) (RowStartReg_22));
    }
    {
      Var_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_114, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_114, 1) = ((MR_Box) (Var_115));
      MR_hl_field(3, Var_114, 2) = ((MR_Box) (TableAddrRval_13));
      MR_hl_field(3, Var_114, 3) = ((MR_Box) (Var_116));
    }
    {
      Var_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_113, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_113, 1) = ((MR_Box) (StringReg_23));
      MR_hl_field(3, Var_113, 2) = ((MR_Box) (Var_114));
    }
    {
      Var_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_112, 0) = ((MR_Box) (Var_113));
      MR_hl_field(0, Var_112, 1) = ((MR_Box) ((MR_String) "lookup the string for this hash slot"));
    }
    {
      Var_126 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_126, 0) = ((MR_Box) (StringReg_23));
    }
    {
      Var_123 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_123, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_123, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[27])));
      MR_hl_field(3, Var_123, 2) = ((MR_Box) (Var_126));
      MR_hl_field(3, Var_123, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[22])));
    }
    {
      Var_130 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_130, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_130, 1) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(3, Var_130, 2) = ((MR_Box) (Var_126));
      MR_hl_field(3, Var_130, 3) = ((MR_Box) (VarRval_12));
    }
    {
      Var_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_121, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_121, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_121, 2) = ((MR_Box) (Var_123));
      MR_hl_field(3, Var_121, 3) = ((MR_Box) (Var_130));
    }
    {
      Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_133, 0) = ((MR_Box) (NoMatchLabel_25));
    }
    {
      Var_120 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_120, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_120, 1) = ((MR_Box) (Var_121));
      MR_hl_field(3, Var_120, 2) = ((MR_Box) (Var_133));
    }
    {
      Var_119 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_119, 0) = ((MR_Box) (Var_120));
      MR_hl_field(0, Var_119, 1) = ((MR_Box) ((MR_String) "did we find a match\? nofulljump"));
    }
    {
      Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_118, 0) = ((MR_Box) (Var_119));
      MR_hl_field(1, Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_111, 0) = ((MR_Box) (Var_112));
      MR_hl_field(1, Var_111, 1) = ((MR_Box) (Var_118));
    }
    {
      Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
      MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_111));
    }
    {
      Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
      MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_101));
    }
    {
      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
      MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_97));
    }
    Var_86 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_87);
    {
      Var_141 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_141, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_141, 1) = ((MR_Box) (NoMatchLabel_25));
    }
    {
      Var_140 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_140, 0) = ((MR_Box) (Var_141));
      MR_hl_field(0, Var_140, 1) = ((MR_Box) ((MR_String) "no match yet, nofulljump"));
    }
    {
      Var_148 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_148, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_148, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[1])));
      MR_hl_field(3, Var_148, 2) = ((MR_Box) (Var_116));
      MR_hl_field(3, Var_148, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[21])));
    }
    {
      Var_146 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_146, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_146, 1) = ((MR_Box) (Var_115));
      MR_hl_field(3, Var_146, 2) = ((MR_Box) (TableAddrRval_13));
      MR_hl_field(3, Var_146, 3) = ((MR_Box) (Var_148));
    }
    {
      Var_145 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_145, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_145, 1) = ((MR_Box) (SlotReg_21));
      MR_hl_field(3, Var_145, 2) = ((MR_Box) (Var_146));
    }
    {
      Var_144 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_144, 0) = ((MR_Box) (Var_145));
      MR_hl_field(0, Var_144, 1) = ((MR_Box) ((MR_String) "get next slot in hash chain"));
    }
    {
      Var_159 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_159, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_159, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[28])));
      MR_hl_field(3, Var_159, 2) = ((MR_Box) (Var_107));
      MR_hl_field(3, Var_159, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[22])));
    }
    {
      Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_166, 0) = ((MR_Box) (LoopStartLabel_24));
    }
    {
      Var_158 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_158, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_158, 1) = ((MR_Box) (Var_159));
      MR_hl_field(3, Var_158, 2) = ((MR_Box) (Var_166));
    }
    {
      Var_157 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_157, 0) = ((MR_Box) (Var_158));
      MR_hl_field(0, Var_157, 1) = ((MR_Box) ((MR_String) "if we have not reached the end of the chain, keep searching"));
    }
    {
      Var_170 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_170, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_170, 1) = ((MR_Box) (FailLabel_26));
    }
    {
      Var_169 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_169, 0) = ((MR_Box) (Var_170));
      MR_hl_field(0, Var_169, 1) = ((MR_Box) ((MR_String) "handle the failure of the table search"));
    }
    {
      Var_168 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_168, 0) = ((MR_Box) (Var_169));
      MR_hl_field(1, Var_168, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_156, 0) = ((MR_Box) (Var_157));
      MR_hl_field(1, Var_156, 1) = ((MR_Box) (Var_168));
    }
    {
      Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_143, 0) = ((MR_Box) (Var_144));
      MR_hl_field(1, Var_143, 1) = ((MR_Box) (Var_156));
    }
    {
      Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_139, 0) = ((MR_Box) (Var_140));
      MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_143));
    }
    Var_138 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_139);
    Var_137 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_138, FailCode_27);
    Var_136 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MatchCode_19, Var_137);
    *Code_20 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_86, Var_136);
  }
}

static void MR_CALL 
ll_backend__string_switch__init_string_hash_switch_info_5_p_0(
  MR_Word CanFail_6,
  MR_Word * Info_7,
  MR_Word STATE_VARIABLE_CI_0_18,
  MR_Word * STATE_VARIABLE_CI_19,
  MR_Word STATE_VARIABLE_CLD_0_20)
{
  MR_Word SlotReg_10;
  MR_Word RowStartReg_11;
  MR_Word StringReg_12;
  MR_Word LoopStartLabel_13;
  MR_Word FailLabel_14;
  MR_Word NoMatchLabel_15;
  MR_Word BranchStart_16;
  MR_Word FailCode_17;
  MR_Word STATE_VARIABLE_CLD_22_22;
  MR_Word STATE_VARIABLE_CLD_24_24;
  MR_Word STATE_VARIABLE_CLD_26_26;
  MR_Word STATE_VARIABLE_CLD_27_27;
  MR_Word STATE_VARIABLE_CLD_28_28;
  MR_Word STATE_VARIABLE_CLD_29_29;
  MR_Word STATE_VARIABLE_CI_30_30;
  MR_Word STATE_VARIABLE_CI_31_31;
  MR_Word STATE_VARIABLE_CI_32_32;

  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &SlotReg_10, STATE_VARIABLE_CLD_0_20, &STATE_VARIABLE_CLD_22_22);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &RowStartReg_11, STATE_VARIABLE_CLD_22_22, &STATE_VARIABLE_CLD_24_24);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &StringReg_12, STATE_VARIABLE_CLD_24_24, &STATE_VARIABLE_CLD_26_26);
  ll_backend__code_loc_dep__release_reg_3_p_0(SlotReg_10, STATE_VARIABLE_CLD_26_26, &STATE_VARIABLE_CLD_27_27);
  ll_backend__code_loc_dep__release_reg_3_p_0(RowStartReg_11, STATE_VARIABLE_CLD_27_27, &STATE_VARIABLE_CLD_28_28);
  ll_backend__code_loc_dep__release_reg_3_p_0(StringReg_12, STATE_VARIABLE_CLD_28_28, &STATE_VARIABLE_CLD_29_29);
  ll_backend__code_info__get_next_label_3_p_0(&LoopStartLabel_13, STATE_VARIABLE_CI_0_18, &STATE_VARIABLE_CI_30_30);
  ll_backend__code_info__get_next_label_3_p_0(&FailLabel_14, STATE_VARIABLE_CI_30_30, &STATE_VARIABLE_CI_31_31);
  ll_backend__code_info__get_next_label_3_p_0(&NoMatchLabel_15, STATE_VARIABLE_CI_31_31, &STATE_VARIABLE_CI_32_32);
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_29_29, &BranchStart_16);
  switch (CanFail_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_17, STATE_VARIABLE_CI_32_32, STATE_VARIABLE_CI_19, STATE_VARIABLE_CLD_29_29);
      break;
    case (MR_Integer) 1:
      {
        FailCode_17 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[34])));
        *STATE_VARIABLE_CI_19 = STATE_VARIABLE_CI_32_32;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SlotReg_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (RowStartReg_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (StringReg_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (LoopStartLabel_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (NoMatchLabel_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (FailLabel_14));
    MR_hl_field(0, base, 6) = ((MR_Box) (BranchStart_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (FailCode_17));
  }
}

static void MR_CALL 
ll_backend__string_switch__represent_tagged_cases_in_string_switch_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_StrsLabels_12;

  ll_backend__string_switch__add_to_strs_labels_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_StrsLabels_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_StrsLabels_12));
}

static void MR_CALL 
ll_backend__string_switch__represent_tagged_cases_in_string_switch_9_p_0(
  MR_Word Params_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_4,
  MR_Word * STATE_VARIABLE_CaseLabelMap_5,
  MR_Word STATE_VARIABLE_MaybeEnd_0_6,
  MR_Word * STATE_VARIABLE_MaybeEnd_7,
  MR_Word STATE_VARIABLE_CI_0_8,
  MR_Word * STATE_VARIABLE_CI_9)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CI_9 = STATE_VARIABLE_CI_0_8;
    *STATE_VARIABLE_MaybeEnd_7 = STATE_VARIABLE_MaybeEnd_0_6;
    *STATE_VARIABLE_CaseLabelMap_5 = STATE_VARIABLE_CaseLabelMap_0_4;
  }
  else
  {
    MR_Word Case_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cases_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Label_27;
    MR_Word MainTaggedConsId_29;
    MR_Word OtherTaggedConsIds_30;
    MR_Word STATE_VARIABLE_CaseLabelMap_40_40;
    MR_Word STATE_VARIABLE_MaybeEnd_41_41;
    MR_Word STATE_VARIABLE_CI_42_42;
    MR_Word STATE_VARIABLE_StrsLabels_44_44;
    MR_Word STATE_VARIABLE_StrsLabels_48_48;
    MR_Word Var_49;
    MR_Box conv1_HeadVar__3_3;

    ll_backend__switch_case__represent_tagged_case_for_llds_11_p_0(Params_1, Case_21, &Label_27, STATE_VARIABLE_CaseLabelMap_0_4, &STATE_VARIABLE_CaseLabelMap_40_40, STATE_VARIABLE_MaybeEnd_0_6, &STATE_VARIABLE_MaybeEnd_41_41, STATE_VARIABLE_CI_0_8, &STATE_VARIABLE_CI_42_42);
    ll_backend__string_switch__represent_tagged_cases_in_string_switch_9_p_0(Params_1, Cases_22, &STATE_VARIABLE_StrsLabels_44_44, STATE_VARIABLE_CaseLabelMap_40_40, STATE_VARIABLE_CaseLabelMap_5, STATE_VARIABLE_MaybeEnd_41_41, STATE_VARIABLE_MaybeEnd_7, STATE_VARIABLE_CI_42_42, STATE_VARIABLE_CI_9);
    MainTaggedConsId_29 = ((MR_Word) ((MR_hl_field(0, Case_21, (MR_Integer) 0))));
    OtherTaggedConsIds_30 = ((MR_Word) ((MR_hl_field(0, Case_21, (MR_Integer) 1))));
    ll_backend__string_switch__add_to_strs_labels_4_p_0(Label_27, MainTaggedConsId_29, STATE_VARIABLE_StrsLabels_44_44, &STATE_VARIABLE_StrsLabels_48_48);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_49, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_4[0]));
      MR_hl_field(0, Var_49, 1) = ((MR_Box) (ll_backend__string_switch__represent_tagged_cases_in_string_switch_9_p_0_1));
      MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_49, 3) = ((MR_Box) (Label_27));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[5]), Var_49, OtherTaggedConsIds_30, ((MR_Box) (STATE_VARIABLE_StrsLabels_48_48)), &conv1_HeadVar__3_3);
    *HeadVar__3_3 = ((MR_Word) (conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
ll_backend__string_switch__add_to_strs_labels_4_p_0(
  MR_Word Label_5,
  MR_Word TaggedConsId_6,
  MR_Word STATE_VARIABLE_StrsLabels_0_11,
  MR_Word * STATE_VARIABLE_StrsLabels_12)
{
  MR_bool succeeded;
  MR_Word Tag_9 = ((MR_Word) ((MR_hl_field(0, TaggedConsId_6, (MR_Integer) 1))));
  MR_String String_10;

  succeeded = ((((MR_tag((MR_Word) Tag_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Tag_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
  if (succeeded)
  {
    String_10 = ((MR_String) ((MR_hl_field(3, Tag_9, (MR_Integer) 1))));
    {
      MR_Word Var_14;

      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_14, 0) = ((MR_Box) (String_10));
        MR_hl_field(0, Var_14, 1) = ((MR_Box) (Label_5));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_StrsLabels_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_14));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_StrsLabels_0_11));
      }
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.string_switch.add_to_strs_labels\'/4", (MR_String) "non-string tag");
      return;
    }
}

static void MR_CALL 
ll_backend__string_switch__construct_string_hash_jump_vectors_9_p_0(
  MR_Integer Slot_10,
  MR_Integer TableSize_11,
  MR_Word HashSlotMap_12,
  MR_Word FailLabel_13,
  MR_Integer NumCollisions_14,
  MR_Word STATE_VARIABLE_RevTableRows_0_25,
  MR_Word * STATE_VARIABLE_RevTableRows_26,
  MR_Word STATE_VARIABLE_RevMaybeTargets_0_27,
  MR_Word * STATE_VARIABLE_RevMaybeTargets_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Slot_10 == TableSize_11);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_RevMaybeTargets_28 = STATE_VARIABLE_RevMaybeTargets_0_27;
      *STATE_VARIABLE_RevTableRows_26 = STATE_VARIABLE_RevTableRows_0_25;
    }
    else
    {
      MR_Word NextSlotRval_21;
      MR_Word StringRval_22;
      MR_Word Target_23;
      MR_Word TableRow_24;
      MR_Word STATE_VARIABLE_RevTableRows_38_38;
      MR_Word STATE_VARIABLE_RevMaybeTargets_39_39;
      MR_Word Var_40;
      MR_Integer Var_41;
      MR_Word SlotInfo_17;
      MR_Box conv0_SlotInfo_17;
      MR_Integer next_value_of_Slot_10;
      MR_Word next_value_of_STATE_VARIABLE_RevTableRows_0_25;
      MR_Word next_value_of_STATE_VARIABLE_RevMaybeTargets_0_27;

      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[4]), HashSlotMap_12, Slot_10, &conv0_SlotInfo_17);
      if (succeeded)
      {
        SlotInfo_17 = ((MR_Word) (conv0_SlotInfo_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_String String_18 = ((MR_String) ((MR_hl_field(0, SlotInfo_17, (MR_Integer) 0))));
        MR_Integer Next_19 = ((MR_Integer) ((MR_hl_field(0, SlotInfo_17, (MR_Integer) 1))));
        MR_Word Var_29;
        MR_Word Var_30;

        Target_23 = ((MR_Word) ((MR_hl_field(0, SlotInfo_17, (MR_Integer) 2))));
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (Next_19));
        }
        {
          NextSlotRval_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, NextSlotRval_21, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, NextSlotRval_21, 1) = ((MR_Box) (Var_29));
        }
        {
          Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(3, Var_30, 1) = ((MR_Box) (String_18));
        }
        {
          StringRval_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, StringRval_22, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, StringRval_22, 1) = ((MR_Box) (Var_30));
        }
      }
      else
      {
        StringRval_22 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[22]));
        NextSlotRval_21 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[23]));
        Target_23 = FailLabel_13;
      }
      succeeded = (NumCollisions_14 == (MR_Integer) 0);
      if (succeeded)
        {
          TableRow_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TableRow_24, 0) = ((MR_Box) (StringRval_22));
          MR_hl_field(1, TableRow_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      else
      {
        MR_Word Var_36;

        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (NextSlotRval_21));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          TableRow_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TableRow_24, 0) = ((MR_Box) (StringRval_22));
          MR_hl_field(1, TableRow_24, 1) = ((MR_Box) (Var_36));
        }
      }
      {
        STATE_VARIABLE_RevTableRows_38_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevTableRows_38_38, 0) = ((MR_Box) (TableRow_24));
        MR_hl_field(1, STATE_VARIABLE_RevTableRows_38_38, 1) = ((MR_Box) (STATE_VARIABLE_RevTableRows_0_25));
      }
      {
        Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_40, 0) = ((MR_Box) (Target_23));
      }
      {
        STATE_VARIABLE_RevMaybeTargets_39_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevMaybeTargets_39_39, 0) = ((MR_Box) (Var_40));
        MR_hl_field(1, STATE_VARIABLE_RevMaybeTargets_39_39, 1) = ((MR_Box) (STATE_VARIABLE_RevMaybeTargets_0_27));
      }
      Var_41 = (MR_Integer) ((MR_Unsigned) Slot_10 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Slot_10 = Var_41;
      next_value_of_STATE_VARIABLE_RevTableRows_0_25 = STATE_VARIABLE_RevTableRows_38_38;
      next_value_of_STATE_VARIABLE_RevMaybeTargets_0_27 = STATE_VARIABLE_RevMaybeTargets_39_39;
      Slot_10 = next_value_of_Slot_10;
      STATE_VARIABLE_RevTableRows_0_25 = next_value_of_STATE_VARIABLE_RevTableRows_0_25;
      STATE_VARIABLE_RevMaybeTargets_0_27 = next_value_of_STATE_VARIABLE_RevMaybeTargets_0_27;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_binary_switch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__string_switch____Unify____string_binary_switch_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__string_switch____Compare____string_binary_switch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__string_switch____Compare____string_binary_switch_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_hash_switch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__string_switch____Unify____string_hash_switch_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__string_switch____Compare____string_hash_switch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__string_switch____Compare____string_hash_switch_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__string_switch__init(void)
{
}

void mercury__ll_backend__string_switch__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_binary_switch_info_0);
	MR_register_type_ctor_info(&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_hash_switch_info_0);
}

void mercury__ll_backend__string_switch__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__string_switch__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.string_switch.
