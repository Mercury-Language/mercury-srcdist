/*
** Automatically generated from `string_switch.m'
** by the Mercury compiler,
** version rotd-2025-05-28
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
#include "ops.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.status.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.lookup_switch.mih"
#include "ll_backend.lookup_util.mih"
#include "ll_backend.switch_case.mih"
#include "ll_backend.trace_gen.mih"
#include "mdbcomp.feedback.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct2 ll_backend__string_switch__pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__string_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0;

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_code_unit_action_0_0[1];

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_code_unit_action_0_0;

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_code_unit_action_0_1[1];

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_code_unit_action_0_1;

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_code_unit_action_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_code_unit_action_0_1[1];

static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_code_unit_action_0[2];

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_code_unit_action_0[2];

static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_code_unit_action_0[2];

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_code_unit_to_action_0_0[2];

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_code_unit_to_action_0_0;

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_code_unit_to_action_0_0[1];

static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_code_unit_to_action_0[1];

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_code_unit_to_action_0[1];

static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_code_unit_to_action_0[1];

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

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_trie_switch_info_0_0[1];

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_trie_switch_info_0_0;

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_trie_switch_info_0_1[1];

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_trie_switch_info_0_1;

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_trie_switch_info_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_trie_switch_info_0_1[1];

static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_trie_switch_info_0[2];

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_trie_switch_info_0[2];

static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_trie_switch_info_0[2];

static const MR_FA_TypeInfo_Struct2 ll_backend__string_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ll_backend__llds__type_ctor_info_label_0;

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_trie_switch_info_jump_0_0[7];

static const MR_ConstString ll_backend__string_switch__ll_backend__string_switch__field_names_string_trie_switch_info_jump_0_0[7];

static const MR_DuArgLocn ll_backend__string_switch__ll_backend__string_switch__field_locns_string_trie_switch_info_jump_0_0[7];

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_trie_switch_info_jump_0_0;

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_trie_switch_info_jump_0_0[1];

static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_trie_switch_info_jump_0[1];

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_trie_switch_info_jump_0[1];

static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_trie_switch_info_jump_0[1];

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_trie_switch_info_lookup_0_0[8];

static const MR_ConstString ll_backend__string_switch__ll_backend__string_switch__field_names_string_trie_switch_info_lookup_0_0[8];

static const MR_DuArgLocn ll_backend__string_switch__ll_backend__string_switch__field_locns_string_trie_switch_info_lookup_0_0[8];

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_trie_switch_info_lookup_0_0;

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_trie_switch_info_lookup_0_0[1];

static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_trie_switch_info_lookup_0[1];

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_trie_switch_info_lookup_0[1];

static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_trie_switch_info_lookup_0[1];

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__construct_string_trie_several_soln_lookup_vector__623__1_2_p_0(
  MR_Integer MainRowNum_3,
  MR_Integer CaseIdNum_39);

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__construct_string_trie_simple_lookup_vector__552__1_2_p_0(
  MR_Integer RowNum_2,
  MR_Integer CaseIdNum_15);

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__224__1_2_p_0(
  MR_Integer NumMatched_11,
  MR_Integer NumMatchedCodeUnits_21);

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__242__1_2_p_0(
  MR_Integer NumMatched_11,
  MR_Integer NumRevMatchedCodeUnits_31);

static void MR_CALL 
ll_backend__string_switch____Compare____string_trie_switch_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__string_switch____Compare____string_trie_switch_info_lookup_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__string_switch____Compare____string_trie_switch_info_jump_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_trie_switch_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_trie_switch_info_lookup_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_trie_switch_info_jump_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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

static void MR_CALL 
ll_backend__string_switch____Compare____code_unit_to_action_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____code_unit_to_action_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__string_switch____Compare____code_unit_action_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____code_unit_action_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_14_p_0(
  MR_Word CaseConstsSeveralLlds_15,
  MR_Word VarRval_16,
  MR_Word CaseSolns_17,
  MR_Word OutVars_18,
  MR_Word OutTypes_19,
  MR_Word CanFail_20,
  MR_Word EndLabel_21,
  MR_Word EndBranch_22,
  MR_Word * Code_23,
  MR_Word STATE_VARIABLE_MaybeEnd_0_57,
  MR_Word * STATE_VARIABLE_MaybeEnd_58,
  MR_Word STATE_VARIABLE_CI_0_59,
  MR_Word * STATE_VARIABLE_CI_60,
  MR_Word STATE_VARIABLE_CLD_0_61);

static void MR_CALL 
ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word STATE_VARIABLE_MainRvalsCord_0_3,
  MR_Word * STATE_VARIABLE_MainRvalsCord_4,
  MR_Integer HeadVar__5_5,
  MR_Word STATE_VARIABLE_LaterSolnArray_0_6,
  MR_Word * STATE_VARIABLE_LaterSolnArray_7,
  MR_Integer STATE_VARIABLE_OneSolnCaseCount_0_8,
  MR_Integer * STATE_VARIABLE_OneSolnCaseCount_9,
  MR_Integer HeadVar__10_10,
  MR_Integer * HeadVar__11_11);

static void MR_CALL 
ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_p_0(
  MR_Word VarRval_14,
  MR_Word CaseValues_15,
  MR_Word OutVars_16,
  MR_Word OutTypes_17,
  MR_Word CanFail_18,
  MR_Word EndLabel_19,
  MR_Word EndBranch_20,
  MR_Word * Code_21,
  MR_Word STATE_VARIABLE_MaybeEnd_0_46,
  MR_Word * STATE_VARIABLE_MaybeEnd_47,
  MR_Word STATE_VARIABLE_CI_0_48,
  MR_Word * STATE_VARIABLE_CI_49,
  MR_Word CLD_24);

static void MR_CALL 
ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RvalsCord_0_2,
  MR_Word * STATE_VARIABLE_RvalsCord_3);

static void MR_CALL 
ll_backend__string_switch__generate_string_binary_jump_switch_12_p_0_1(
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
  MR_Word STATE_VARIABLE_TableRvalsCord_0_2,
  MR_Word * STATE_VARIABLE_TableRvalsCord_3,
  MR_Word STATE_VARIABLE_MaybeTargetsCord_0_4,
  MR_Word * STATE_VARIABLE_MaybeTargetsCord_5,
  MR_Integer STATE_VARIABLE_CurIndex_0_6,
  MR_Integer * STATE_VARIABLE_CurIndex_7);

static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_14_p_0(
  MR_Word CaseConstsSeveralLlds_15,
  MR_Word VarRval_16,
  MR_Word CaseSolns_17,
  MR_Word OutVars_18,
  MR_Word OutTypes_19,
  MR_Word CanFail_20,
  MR_Word EndLabel_21,
  MR_Word EndBranch_22,
  MR_Word * Code_23,
  MR_Word STATE_VARIABLE_MaybeEnd_0_59,
  MR_Word * STATE_VARIABLE_MaybeEnd_60,
  MR_Word STATE_VARIABLE_CI_0_61,
  MR_Word * STATE_VARIABLE_CI_62,
  MR_Word STATE_VARIABLE_CLD_0_63);

static void MR_CALL 
ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_15_p_0(
  MR_Integer Slot_16,
  MR_Integer TableSize_17,
  MR_Word HashSlotMap_18,
  MR_Word DummyOutRvals_19,
  MR_Integer NumOutVars_20,
  MR_Integer NumCollisions_21,
  MR_Word STATE_VARIABLE_MainRvalsCord_0_44,
  MR_Word * STATE_VARIABLE_MainRvalsCord_45,
  MR_Integer STATE_VARIABLE_LaterNextRow_0_46,
  MR_Word STATE_VARIABLE_LaterSolnRowsCord_0_47,
  MR_Word * STATE_VARIABLE_LaterSolnRowsCord_48,
  MR_Integer STATE_VARIABLE_OneSolnCaseCount_0_49,
  MR_Integer * STATE_VARIABLE_OneSolnCaseCount_50,
  MR_Integer STATE_VARIABLE_SeveralSolnsCaseCount_0_51,
  MR_Integer * STATE_VARIABLE_SeveralSolnsCaseCount_52);

static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_p_0(
  MR_Word VarRval_14,
  MR_Word CaseValues_15,
  MR_Word OutVars_16,
  MR_Word OutTypes_17,
  MR_Word CanFail_18,
  MR_Word EndLabel_19,
  MR_Word EndBranch_20,
  MR_Word * Code_21,
  MR_Word STATE_VARIABLE_MaybeEnd_0_49,
  MR_Word * STATE_VARIABLE_MaybeEnd_50,
  MR_Word STATE_VARIABLE_CI_0_51,
  MR_Word * STATE_VARIABLE_CI_52,
  MR_Word CLD_24);

static void MR_CALL 
ll_backend__string_switch__construct_string_hash_simple_lookup_vector_7_p_0(
  MR_Integer Slot_8,
  MR_Integer TableSize_9,
  MR_Word HashSlotMap_10,
  MR_Integer NumCollisions_11,
  MR_Word DummyOutRvals_12,
  MR_Word STATE_VARIABLE_RvalsCord_0_21,
  MR_Word * STATE_VARIABLE_RvalsCord_22);

static void MR_CALL 
ll_backend__string_switch__generate_string_hash_switch_search_13_p_0(
  MR_Word Info_14,
  MR_Word VarRval_15,
  MR_Word TableAddrRval_16,
  MR_Word ArrayElemType_17,
  MR_Integer NumColumns_18,
  MR_Word HashOp_19,
  MR_Integer HashMask_20,
  MR_Integer NumCollisions_21,
  MR_Word EndLabel_22,
  MR_String KindStr_23,
  MR_Word CasesCode_24,
  MR_Word MatchCode_25,
  MR_Word * Code_26);

static void MR_CALL 
ll_backend__string_switch__init_string_hash_switch_info_5_p_0(
  MR_Word CanFail_6,
  MR_Word * Info_7,
  MR_Word STATE_VARIABLE_CI_0_18,
  MR_Word * STATE_VARIABLE_CI_19,
  MR_Word STATE_VARIABLE_CLD_0_20);

static void MR_CALL 
ll_backend__string_switch__represent_tagged_cases_in_string_hash_switch_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__string_switch__represent_tagged_cases_in_string_hash_switch_10_p_0(
  MR_Word Params_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_StrsLabels_0_3,
  MR_Word * STATE_VARIABLE_StrsLabels_4,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_5,
  MR_Word * STATE_VARIABLE_CaseLabelMap_6,
  MR_Word STATE_VARIABLE_MaybeEnd_0_7,
  MR_Word * STATE_VARIABLE_MaybeEnd_8,
  MR_Word STATE_VARIABLE_CI_0_9,
  MR_Word * STATE_VARIABLE_CI_10);

static void MR_CALL 
ll_backend__string_switch__record_label_for_string_4_p_0(
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
  MR_Word STATE_VARIABLE_TableRvalsCord_0_25,
  MR_Word * STATE_VARIABLE_TableRvalsCord_26,
  MR_Word STATE_VARIABLE_MaybeTargetsCord_0_27,
  MR_Word * STATE_VARIABLE_MaybeTargetsCord_28);

static void MR_CALL 
ll_backend__string_switch__init_string_trie_switch_info_lookup_5_p_0(
  MR_Word CanFail_6,
  MR_Word * Info_7,
  MR_Word STATE_VARIABLE_CI_0_18,
  MR_Word * STATE_VARIABLE_CI_19,
  MR_Word STATE_VARIABLE_CLD_0_20);

static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_trie_several_soln_lookup_switch_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__string_switch__generate_string_trie_several_soln_lookup_switch_14_p_0(
  MR_Word LookupInfo_15,
  MR_Word CaseConstsSeveralLlds_16,
  MR_Word CaseIdToValuesListAL_17,
  MR_Word OutVars_18,
  MR_Word OutTypes_19,
  MR_Word EndLabel_20,
  MR_Word EndBranch_21,
  MR_Word SetAndCheckCaseNumCode_22,
  MR_Word * Code_23,
  MR_Word STATE_VARIABLE_MaybeEnd_0_50,
  MR_Word * STATE_VARIABLE_MaybeEnd_51,
  MR_Word STATE_VARIABLE_CI_0_52,
  MR_Word * STATE_VARIABLE_CI_53,
  MR_Word STATE_VARIABLE_CLD_0_54);

static MR_bool MR_CALL 
ll_backend__string_switch__construct_string_trie_several_soln_lookup_vector_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__string_switch__construct_string_trie_several_soln_lookup_vector_12_p_0(
  MR_Integer NumLaterColumns_1,
  MR_Word HeadVar__2_2,
  MR_Integer MainRowNum_3,
  MR_Word STATE_VARIABLE_MainRvalsCord_0_4,
  MR_Word * STATE_VARIABLE_MainRvalsCord_5,
  MR_Integer STATE_VARIABLE_LaterNextRowNum_0_6,
  MR_Word STATE_VARIABLE_LaterSolnsRowsCord_0_7,
  MR_Word * STATE_VARIABLE_LaterSolnsRowsCord_8,
  MR_Integer STATE_VARIABLE_OneSolnCaseCount_0_9,
  MR_Integer * STATE_VARIABLE_OneSolnCaseCount_10,
  MR_Integer STATE_VARIABLE_SeveralSolnsCaseCount_0_11,
  MR_Integer * STATE_VARIABLE_SeveralSolnsCaseCount_12);

static void MR_CALL 
ll_backend__string_switch__generate_string_trie_simple_lookup_switch_13_p_0(
  MR_Word LookupInfo_14,
  MR_Word CaseValues_15,
  MR_Word OutVars_16,
  MR_Word OutTypes_17,
  MR_Word EndLabel_18,
  MR_Word EndBranch_19,
  MR_Word SetAndCheckCaseNumCode_20,
  MR_Word * Code_21,
  MR_Word STATE_VARIABLE_MaybeEnd_0_37,
  MR_Word * STATE_VARIABLE_MaybeEnd_38,
  MR_Word STATE_VARIABLE_CI_0_39,
  MR_Word * STATE_VARIABLE_CI_40,
  MR_Word CLD_24);

static MR_bool MR_CALL 
ll_backend__string_switch__construct_string_trie_simple_lookup_vector_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__string_switch__construct_string_trie_simple_lookup_vector_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer RowNum_2,
  MR_Word STATE_VARIABLE_RvalsCord_0_3,
  MR_Word * STATE_VARIABLE_RvalsCord_4);

static void MR_CALL 
ll_backend__string_switch__create_nested_trie_switch_6_p_0(
  MR_Word Info_7,
  MR_Word VarRval_8,
  MR_Word StrsCaseIds_9,
  MR_Word * TrieCode_10,
  MR_Word STATE_VARIABLE_CI_0_19,
  MR_Word * STATE_VARIABLE_CI_20);

static void MR_CALL 
ll_backend__string_switch__convert_trie_choices_to_nested_switches_12_p_0(
  MR_Word Info_1,
  MR_Word VarRval_2,
  MR_Integer NumMatched_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_CodeUnitToActionsCord_0_5,
  MR_Word * STATE_VARIABLE_CodeUnitToActionsCord_6,
  MR_Integer STATE_VARIABLE_NumActions_0_7,
  MR_Integer * STATE_VARIABLE_NumActions_8,
  MR_Word STATE_VARIABLE_NestedTrieCode_0_9,
  MR_Word * STATE_VARIABLE_NestedTrieCode_10,
  MR_Word STATE_VARIABLE_CI_0_11,
  MR_Word * STATE_VARIABLE_CI_12);

static MR_bool MR_CALL 
ll_backend__string_switch__convert_trie_to_nested_switches_8_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__string_switch__convert_trie_to_nested_switches_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__string_switch__convert_trie_to_nested_switches_8_p_0(
  MR_Word Info_9,
  MR_Word VarRval_10,
  MR_Integer NumMatched_11,
  MR_Word TrieNode_12,
  MR_Word * TrieNodeLabel_13,
  MR_Word * Code_14,
  MR_Word STATE_VARIABLE_CI_0_63,
  MR_Word * STATE_VARIABLE_CI_64);

static void MR_CALL 
ll_backend__string_switch__get_code_unit_reg_2_p_0(
  MR_Word Info_3,
  MR_Word * CodeUnitReg_4);

static void MR_CALL 
ll_backend__string_switch__get_encoding_2_p_0(
  MR_Word Info_3,
  MR_Word * Encoding_4);

static void MR_CALL 
ll_backend__string_switch__generate_trie_goto_fail_code_2_p_0(
  MR_Word Info_3,
  MR_Word * GotoFailCode_4);

static void MR_CALL 
ll_backend__string_switch__generate_nested_trie_binary_search_7_p_0(
  MR_Word Info_8,
  MR_Word CodeUnitRval_9,
  MR_Integer NumActions_10,
  MR_Word CodeUnitToActions_11,
  MR_Word * TestCode_12,
  MR_Word STATE_VARIABLE_CI_0_28,
  MR_Word * STATE_VARIABLE_CI_29);

static void MR_CALL 
ll_backend__string_switch__generate_nested_trie_try_chain_7_p_0(
  MR_Word Info_1,
  MR_Word CodeUnitRval_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_TryChainCode_0_4,
  MR_Word * STATE_VARIABLE_TryChainCode_5,
  MR_Word STATE_VARIABLE_CI_0_6,
  MR_Word * STATE_VARIABLE_CI_7);

static void MR_CALL 
ll_backend__string_switch__generate_trie_case_or_fall_through_6_p_0(
  MR_Word Info_7,
  MR_Word CondRval_8,
  MR_Word CaseId_9,
  MR_Word * CaseCode_10,
  MR_Word STATE_VARIABLE_CI_0_29,
  MR_Word * STATE_VARIABLE_CI_30);

static void MR_CALL 
ll_backend__string_switch__represent_tagged_cases_in_string_trie_switch_10_p_0(
  MR_Word Params_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CaseIdToLabelMap_0_3,
  MR_Word * STATE_VARIABLE_CaseIdToLabelMap_4,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_5,
  MR_Word * STATE_VARIABLE_CaseLabelMap_6,
  MR_Word STATE_VARIABLE_MaybeEnd_0_7,
  MR_Word * STATE_VARIABLE_MaybeEnd_8,
  MR_Word STATE_VARIABLE_CI_0_9,
  MR_Word * STATE_VARIABLE_CI_10);

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____code_unit_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__string_switch____Compare____code_unit_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____code_unit_to_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__string_switch____Compare____code_unit_to_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

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

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_trie_switch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__string_switch____Compare____string_trie_switch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_trie_switch_info_jump_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__string_switch____Compare____string_trie_switch_info_jump_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_trie_switch_info_lookup_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__string_switch____Compare____string_trie_switch_info_lookup_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__string_switch_scalar_common_1[30][2];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_2[9][3];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_3[12][1];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_4[2][5];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_5[1][7];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_6[1][14];




static /* final */ const MR_Box ll_backend__string_switch_scalar_common_1[30][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__type_ctor_info_soln_consts_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_2[1]))
  },
  /* row   8 */
  {
    ((MR_Box) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_1[0]))
  },
  /* row   9 */
  {
    ((MR_Box) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_1[1]))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[0])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 0U << 3)) | (MR_Unsigned) 5U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[1])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(2, &ll_backend__string_switch_scalar_common_3[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[16])))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[18])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[5])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[6])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((MR_Unsigned) 0U << 3))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[7])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 0U << 3)) | (MR_Unsigned) 4U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 0U << 3)) | (MR_Unsigned) 3U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[10]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[11])))
  },
};

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_2[9][3] = {
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_1[1]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_4[1])),
    ((MR_Box) (ll_backend__string_switch__generate_string_trie_several_soln_lookup_switch_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_4[1])),
    ((MR_Box) (ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_4[1])),
    ((MR_Box) (ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_4[1])),
    ((MR_Box) (ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_3[12][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) -1)) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   3 */
  { (MR_Box) (((MR_Unsigned) 0U << 3)) },
  /* row   4 */
  { (MR_Box) (((((MR_Unsigned) 0U << 3)) | (MR_Unsigned) 2U)) },
  /* row   5 */
  { ((MR_Box) ((MR_Integer) 2)) },
  /* row   6 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   7 */
  { ((MR_Box) ((MR_Integer) -2)) },
  /* row   8 */
  { (MR_Box) (((((MR_Unsigned) 0U << 3)) | (MR_Unsigned) 3U)) },
  /* row   9 */
  { (MR_Box) (((((MR_Unsigned) 0U << 3)) | (MR_Unsigned) 1U)) },
  /* row  10 */
  { ((MR_Box) ((MR_String) "unreachable; fail code in cannot_fail switch")) },
  /* row  11 */
  { ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[19]))) },
};

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_4[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
};

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_5[1][7] = {
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

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_code_unit_action_0_0[1] = { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0) };

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_code_unit_action_0_0 = {
  (MR_String) "action_nested_trie",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__string_switch__ll_backend__string_switch__field_types_code_unit_action_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_code_unit_action_0_1[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0) };

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_code_unit_action_0_1 = {
  (MR_String) "action_case",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__string_switch__ll_backend__string_switch__field_types_code_unit_action_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_code_unit_action_0_0[1] = { &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_code_unit_action_0_0 };

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_code_unit_action_0_1[1] = { &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_code_unit_action_0_1 };

static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_code_unit_action_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_code_unit_action_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_code_unit_action_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_code_unit_action_0[2] = {
  &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_code_unit_action_0_1,
  &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_code_unit_action_0_0
};

static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_code_unit_action_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_code_unit_action_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__string_switch____Unify____code_unit_action_0_0_10001)),
  ((MR_Box) (ll_backend__string_switch____Compare____code_unit_action_0_0_10001)),
  (MR_String) "ll_backend.string_switch",
  (MR_String) "code_unit_action",
  { ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_code_unit_action_0 },
  { ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_code_unit_action_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__string_switch__ll_backend__string_switch__functor_number_map_code_unit_action_0,

};

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_code_unit_to_action_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_code_unit_action_0)
};

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_code_unit_to_action_0_0 = {
  (MR_String) "code_unit_to_action",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__string_switch__ll_backend__string_switch__field_types_code_unit_to_action_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_code_unit_to_action_0_0[1] = { &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_code_unit_to_action_0_0 };

static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_code_unit_to_action_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_code_unit_to_action_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_code_unit_to_action_0[1] = { &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_code_unit_to_action_0_0 };

static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_code_unit_to_action_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_code_unit_to_action_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__string_switch____Unify____code_unit_to_action_0_0_10001)),
  ((MR_Box) (ll_backend__string_switch____Compare____code_unit_to_action_0_0_10001)),
  (MR_String) "ll_backend.string_switch",
  (MR_String) "code_unit_to_action",
  { ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_code_unit_to_action_0 },
  { ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_code_unit_to_action_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__string_switch__ll_backend__string_switch__functor_number_map_code_unit_to_action_0,

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

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_trie_switch_info_0_0[1] = { (MR_PseudoTypeInfo) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_trie_switch_info_jump_0) };

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_trie_switch_info_0_0 = {
  (MR_String) "stsi_jump",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__string_switch__ll_backend__string_switch__field_types_string_trie_switch_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_trie_switch_info_0_1[1] = { (MR_PseudoTypeInfo) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_trie_switch_info_lookup_0) };

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_trie_switch_info_0_1 = {
  (MR_String) "stsi_lookup",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__string_switch__ll_backend__string_switch__field_types_string_trie_switch_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_trie_switch_info_0_0[1] = { &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_trie_switch_info_0_0 };

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_trie_switch_info_0_1[1] = { &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_trie_switch_info_0_1 };

static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_trie_switch_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_trie_switch_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_trie_switch_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_trie_switch_info_0[2] = {
  &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_trie_switch_info_0_0,
  &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_trie_switch_info_0_1
};

static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_trie_switch_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_trie_switch_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__string_switch____Unify____string_trie_switch_info_0_0_10001)),
  ((MR_Box) (ll_backend__string_switch____Compare____string_trie_switch_info_0_0_10001)),
  (MR_String) "ll_backend.string_switch",
  (MR_String) "string_trie_switch_info",
  { ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_trie_switch_info_0 },
  { ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_trie_switch_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_trie_switch_info_0,

};

static const MR_FA_TypeInfo_Struct2 ll_backend__string_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0),
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_trie_switch_info_jump_0_0[7] = {
  (MR_PseudoTypeInfo) (&mercury__string__string__type_ctor_info_string_encoding_0),
  (MR_PseudoTypeInfo) (&ll_backend__string_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_position_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__string_switch__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__string_switch__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0)
};

static const MR_ConstString ll_backend__string_switch__ll_backend__string_switch__field_names_string_trie_switch_info_jump_0_0[7] = {
  (MR_String) "stsij_encoding",
  (MR_String) "stsij_case_id_to_label_map",
  (MR_String) "stsij_branch_start",
  (MR_String) "stsij_code_unit_reg",
  (MR_String) "stsij_fail_label",
  (MR_String) "stsij_fail_code",
  (MR_String) "stsij_goto_fail_code"
};

static const MR_DuArgLocn ll_backend__string_switch__ll_backend__string_switch__field_locns_string_trie_switch_info_jump_0_0[7] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_trie_switch_info_jump_0_0 = {
  (MR_String) "string_trie_switch_info_jump",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__string_switch__ll_backend__string_switch__field_types_string_trie_switch_info_jump_0_0,
  ll_backend__string_switch__ll_backend__string_switch__field_names_string_trie_switch_info_jump_0_0,
  ll_backend__string_switch__ll_backend__string_switch__field_locns_string_trie_switch_info_jump_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_trie_switch_info_jump_0_0[1] = { &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_trie_switch_info_jump_0_0 };

static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_trie_switch_info_jump_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_trie_switch_info_jump_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_trie_switch_info_jump_0[1] = { &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_trie_switch_info_jump_0_0 };

static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_trie_switch_info_jump_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_trie_switch_info_jump_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__string_switch____Unify____string_trie_switch_info_jump_0_0_10001)),
  ((MR_Box) (ll_backend__string_switch____Compare____string_trie_switch_info_jump_0_0_10001)),
  (MR_String) "ll_backend.string_switch",
  (MR_String) "string_trie_switch_info_jump",
  { ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_trie_switch_info_jump_0 },
  { ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_trie_switch_info_jump_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_trie_switch_info_jump_0,

};

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_trie_switch_info_lookup_0_0[8] = {
  (MR_PseudoTypeInfo) (&mercury__string__string__type_ctor_info_string_encoding_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_position_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0),
  (MR_PseudoTypeInfo) (&ll_backend__string_switch__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__string_switch__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0)
};

static const MR_ConstString ll_backend__string_switch__ll_backend__string_switch__field_names_string_trie_switch_info_lookup_0_0[8] = {
  (MR_String) "stsil_encoding",
  (MR_String) "stsil_branch_start",
  (MR_String) "stsil_code_unit_reg",
  (MR_String) "stsil_case_id_reg",
  (MR_String) "stsil_after_label",
  (MR_String) "stsil_after_code_addr",
  (MR_String) "stsil_goto_after_code",
  (MR_String) "stsil_fail_code"
};

static const MR_DuArgLocn ll_backend__string_switch__ll_backend__string_switch__field_locns_string_trie_switch_info_lookup_0_0[8] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_trie_switch_info_lookup_0_0 = {
  (MR_String) "string_trie_switch_info_lookup",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__string_switch__ll_backend__string_switch__field_types_string_trie_switch_info_lookup_0_0,
  ll_backend__string_switch__ll_backend__string_switch__field_names_string_trie_switch_info_lookup_0_0,
  ll_backend__string_switch__ll_backend__string_switch__field_locns_string_trie_switch_info_lookup_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_trie_switch_info_lookup_0_0[1] = { &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_trie_switch_info_lookup_0_0 };

static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_trie_switch_info_lookup_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_trie_switch_info_lookup_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_trie_switch_info_lookup_0[1] = { &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_trie_switch_info_lookup_0_0 };

static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_trie_switch_info_lookup_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_trie_switch_info_lookup_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__string_switch____Unify____string_trie_switch_info_lookup_0_0_10001)),
  ((MR_Box) (ll_backend__string_switch____Compare____string_trie_switch_info_lookup_0_0_10001)),
  (MR_String) "ll_backend.string_switch",
  (MR_String) "string_trie_switch_info_lookup",
  { ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_trie_switch_info_lookup_0 },
  { ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_trie_switch_info_lookup_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_trie_switch_info_lookup_0,

};

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__construct_string_trie_several_soln_lookup_vector__623__1_2_p_0(
  MR_Integer MainRowNum_3,
  MR_Integer CaseIdNum_39)
{
  MR_bool succeeded = (MainRowNum_3 == CaseIdNum_39);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__construct_string_trie_simple_lookup_vector__552__1_2_p_0(
  MR_Integer RowNum_2,
  MR_Integer CaseIdNum_15)
{
  MR_bool succeeded = (RowNum_2 == CaseIdNum_15);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__224__1_2_p_0(
  MR_Integer NumMatched_11,
  MR_Integer NumMatchedCodeUnits_21)
{
  MR_bool succeeded = (NumMatchedCodeUnits_21 == NumMatched_11);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__242__1_2_p_0(
  MR_Integer NumMatched_11,
  MR_Integer NumRevMatchedCodeUnits_31)
{
  MR_bool succeeded = (NumRevMatchedCodeUnits_31 == NumMatched_11);

  return succeeded;
}

static void MR_CALL 
ll_backend__string_switch____Compare____string_trie_switch_info_0_0(
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

      ll_backend__string_switch____Compare____string_trie_switch_info_jump_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
    MR_Word ArgY1_7 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

    ll_backend__string_switch____Compare____string_trie_switch_info_lookup_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
  }
}

static void MR_CALL 
ll_backend__string_switch____Compare____string_trie_switch_info_lookup_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word SubResult1_6;
    MR_Integer Var_37 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_38 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_37 < Var_38);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_37 > Var_38);
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

      ll_backend__code_loc_dep____Compare____position_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
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

              ll_backend__llds____Compare____code_addr_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[10]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
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

static void MR_CALL 
ll_backend__string_switch____Compare____string_trie_switch_info_jump_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word SubResult1_6;
    MR_Integer Var_33 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_34 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_33 < Var_34);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_33 > Var_34);
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

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_2[4]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        ll_backend__code_loc_dep____Compare____position_info_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
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

              mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[10]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[10]), HeadVar__1_1, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_trie_switch_info_0_0(
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
      succeeded = ll_backend__string_switch____Unify____string_trie_switch_info_jump_0_0(ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Word ArgX1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
      succeeded = ll_backend__string_switch____Unify____string_trie_switch_info_lookup_0_0(ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_trie_switch_info_lookup_0_0(
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
    MR_Word TypeInfo_26_26;
    MR_Word TypeInfo_27_27;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = ll_backend__code_loc_dep____Unify____position_info_0_0(ArgX2_5, ArgY2_6);
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
              succeeded = ll_backend__llds____Unify____code_addr_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                TypeInfo_26_26 = (MR_Word) (&ll_backend__string_switch_scalar_common_1[10]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_27_27 = (MR_Word) (&ll_backend__string_switch_scalar_common_1[10]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
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

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_trie_switch_info_jump_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_19_19 = (MR_Word) (&ll_backend__string_switch_scalar_common_2[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = ll_backend__code_loc_dep____Unify____position_info_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = ll_backend__llds____Unify____lval_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            succeeded = ll_backend__llds____Unify____label_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              TypeInfo_23_23 = (MR_Word) (&ll_backend__string_switch_scalar_common_1[10]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_24_24 = (MR_Word) (&ll_backend__string_switch_scalar_common_1[10]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));

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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 9))));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));

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

static void MR_CALL 
ll_backend__string_switch____Compare____code_unit_to_action_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
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
      ll_backend__string_switch____Compare____code_unit_action_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____code_unit_to_action_0_0(
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
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = ll_backend__string_switch____Unify____code_unit_action_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__string_switch____Compare____code_unit_action_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Integer Var_12 = (MR_Integer) (ArgX1_6);
      MR_Integer Var_13 = (MR_Integer) (ArgY1_7);

      succeeded = (Var_12 < Var_13);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_12 > Var_13);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

    ll_backend__llds____Compare____label_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____code_unit_action_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;
    MR_Integer Var_11;
    MR_Integer Var_12;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      Var_11 = (MR_Integer) (ArgX1_5);
      Var_12 = (MR_Integer) (ArgY1_6);
      succeeded = (Var_11 == Var_12);
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      succeeded = ll_backend__llds____Unify____label_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
ll_backend__string_switch__generate_string_binary_lookup_switch_7_p_0(
  MR_Word VarRval_8,
  MR_Word LookupSwitchInfo_9,
  MR_Word CanFail_10,
  MR_Word EndLabel_11,
  MR_Word * STATE_VARIABLE_MaybeEnd_28,
  MR_Word * Code_13,
  MR_Word * STATE_VARIABLE_CI_29)
{
  MR_Word KeyToCaseIdMap_15 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 0))));
  MR_Word CaseConsts_16 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 1))));
  MR_Word OutVars_17 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 2))));
  MR_Word OutTypes_18 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 3))));
  MR_Word EndBranch_19 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 4))));
  MR_Word CLD_20 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 7))));
  MR_Word STATE_VARIABLE_MaybeEnd_1_30 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 5))));
  MR_Word STATE_VARIABLE_CI_1_31 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 6))));

  if (((MR_tag((MR_Word) CaseConsts_16)) == (MR_Integer) 0))
  {
    MR_Word CaseIdToValuesMap_21 = ((MR_Word) ((MR_hl_field(0, CaseConsts_16, 0))));
    MR_Word KeyToValuesMap_22;
    MR_Word KeyValuesAL_23;

    mercury__map__compose_maps_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), KeyToCaseIdMap_15, CaseIdToValuesMap_21, &KeyToValuesMap_22);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), KeyToValuesMap_22, &KeyValuesAL_23);
    ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_p_0(VarRval_8, KeyValuesAL_23, OutVars_17, OutTypes_18, CanFail_10, EndLabel_11, EndBranch_19, Code_13, STATE_VARIABLE_MaybeEnd_1_30, STATE_VARIABLE_MaybeEnd_28, STATE_VARIABLE_CI_1_31, STATE_VARIABLE_CI_29, CLD_20);
  }
  else
  {
    MR_Word CaseIdToSolnsMap_24 = ((MR_Word) ((MR_hl_field(1, CaseConsts_16, 0))));
    MR_Word CaseConstsSeveralLlds_25 = ((MR_Word) ((MR_hl_field(1, CaseConsts_16, 1))));
    MR_Word KeyToSolnsMap_26;
    MR_Word KeySolnsAL_27;

    mercury__map__compose_maps_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[1]), KeyToCaseIdMap_15, CaseIdToSolnsMap_24, &KeyToSolnsMap_26);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[1]), KeyToSolnsMap_26, &KeySolnsAL_27);
    ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_14_p_0(CaseConstsSeveralLlds_25, VarRval_8, KeySolnsAL_27, OutVars_17, OutTypes_18, CanFail_10, EndLabel_11, EndBranch_19, Code_13, STATE_VARIABLE_MaybeEnd_1_30, STATE_VARIABLE_MaybeEnd_28, STATE_VARIABLE_CI_1_31, STATE_VARIABLE_CI_29, CLD_20);
  }
}

static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_14_p_0_1(
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
ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_14_p_0(
  MR_Word CaseConstsSeveralLlds_15,
  MR_Word VarRval_16,
  MR_Word CaseSolns_17,
  MR_Word OutVars_18,
  MR_Word OutTypes_19,
  MR_Word CanFail_20,
  MR_Word EndLabel_21,
  MR_Word EndBranch_22,
  MR_Word * Code_23,
  MR_Word STATE_VARIABLE_MaybeEnd_0_57,
  MR_Word * STATE_VARIABLE_MaybeEnd_58,
  MR_Word STATE_VARIABLE_CI_0_59,
  MR_Word * STATE_VARIABLE_CI_60,
  MR_Word STATE_VARIABLE_CLD_0_61)
{
  MR_Word BinarySwitchInfo_27;
  MR_Integer MainTableSize_28;
  MR_Integer NumOutVars_29;
  MR_Word OutElemTypes_30;
  MR_Word ArrayElemTypes_31;
  MR_Word ArrayElemType_32;
  MR_Word DummyLaterSolnRow_34;
  MR_Word LaterSolnArrayCord0_35;
  MR_Word MainRvalsCord_36;
  MR_Word LaterSolnArrayCord_37;
  MR_Integer OneSolnCaseCount_38;
  MR_Integer SeveralSolnsCaseCount_39;
  MR_Word MainRvals_40;
  MR_Word LaterSolnArray_41;
  MR_Word MainRowTypes_42;
  MR_Integer MainNumColumns_43;
  MR_Word MainTableDataId_44;
  MR_Word MainTableAddrRval_45;
  MR_Word LaterTableDataId_46;
  MR_Word LaterTableAddrRval_47;
  MR_Word BinarySearchCode_48;
  MR_Word MidRegLval_49;
  MR_Word MainRowSelect_50;
  MR_Word BaseRegLval_51;
  MR_Word SetBaseRegCode_52;
  MR_Word LookupResultsCode_54;
  MR_Word MainCode_55;
  MR_Word STATE_VARIABLE_CI_1_62;
  MR_Word Var_65;
  MR_Word Var_67;
  MR_Word Var_70;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_77;
  MR_Word STATE_VARIABLE_CI_2_80;
  MR_Word Var_81;
  MR_Word STATE_VARIABLE_CI_3_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word STATE_VARIABLE_CLD_1_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_91;
  MR_Word Var_94;

  ll_backend__string_switch__init_string_binary_switch_info_5_p_0(CanFail_20, &BinarySwitchInfo_27, STATE_VARIABLE_CI_0_59, &STATE_VARIABLE_CI_1_62, STATE_VARIABLE_CLD_0_61);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_2[3]), CaseSolns_17, &MainTableSize_28);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[5]), OutVars_18, &NumOutVars_29);
  mercury__list__duplicate_3_p_0((MR_Word) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0), NumOutVars_29, ((MR_Box) ((MR_Integer) 2)), &OutElemTypes_30);
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) (OutElemTypes_30));
  }
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_67));
  }
  {
    ArrayElemTypes_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArrayElemTypes_31, 0) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(1, ArrayElemTypes_31, 1) = ((MR_Box) (Var_65));
  }
  {
    ArrayElemType_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArrayElemType_32, 0) = ((MR_Box) (ArrayElemTypes_31));
  }
  DummyLaterSolnRow_34 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__string_switch_scalar_common_2[8]), OutTypes_19);
  LaterSolnArrayCord0_35 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), ((MR_Box) (DummyLaterSolnRow_34)));
  Var_70 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]));
  ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_p_0(CaseSolns_17, NumOutVars_29, Var_70, &MainRvalsCord_36, (MR_Integer) 1, LaterSolnArrayCord0_35, &LaterSolnArrayCord_37, (MR_Integer) 0, &OneSolnCaseCount_38, (MR_Integer) 0, &SeveralSolnsCaseCount_39);
  MainRvals_40 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), MainRvalsCord_36);
  LaterSolnArray_41 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), LaterSolnArrayCord_37);
  Var_75 = (MR_Word) (MR_mkword(2, &ll_backend__string_switch_scalar_common_3[2]));
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_75));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) (OutTypes_19));
  }
  {
    Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
    MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_77));
  }
  {
    MainRowTypes_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MainRowTypes_42, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, MainRowTypes_42, 1) = ((MR_Box) (Var_74));
  }
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), MainRowTypes_42, &MainNumColumns_43);
  ll_backend__code_info__add_vector_static_cell_5_p_0(MainRowTypes_42, MainRvals_40, &MainTableDataId_44, STATE_VARIABLE_CI_1_62, &STATE_VARIABLE_CI_2_80);
  {
    Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_81, 1) = ((MR_Box) (MainTableDataId_44));
  }
  {
    MainTableAddrRval_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MainTableAddrRval_45, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MainTableAddrRval_45, 1) = ((MR_Box) (Var_81));
  }
  ll_backend__code_info__add_vector_static_cell_5_p_0(OutTypes_19, LaterSolnArray_41, &LaterTableDataId_46, STATE_VARIABLE_CI_2_80, &STATE_VARIABLE_CI_3_82);
  {
    Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_83, 1) = ((MR_Box) (LaterTableDataId_46));
  }
  {
    LaterTableAddrRval_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LaterTableAddrRval_47, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, LaterTableAddrRval_47, 1) = ((MR_Box) (Var_83));
  }
  ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(BinarySwitchInfo_27, VarRval_16, MainTableAddrRval_45, ArrayElemType_32, MainTableSize_28, MainNumColumns_43, &BinarySearchCode_48);
  MidRegLval_49 = ((MR_Word) ((MR_hl_field(0, BinarySwitchInfo_27, 2))));
  {
    Var_84 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_84, 0) = ((MR_Box) (MidRegLval_49));
  }
  {
    MainRowSelect_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MainRowSelect_50, 0) = ((MR_Box) (Var_84));
    MR_hl_field(0, MainRowSelect_50, 1) = ((MR_Box) (MainRowTypes_42));
  }
  ll_backend__lookup_switch__acquire_and_setup_lookup_base_reg_7_p_0(MainTableDataId_44, EndBranch_22, MainRowSelect_50, &BaseRegLval_51, &SetBaseRegCode_52, STATE_VARIABLE_CLD_0_61, &STATE_VARIABLE_CLD_1_85);
  {
    Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_86, 0) = ((MR_Box) (OneSolnCaseCount_38));
    MR_hl_field(0, Var_86, 1) = ((MR_Box) ((MR_Integer) 1));
  }
  {
    Var_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_91, 0) = ((MR_Box) (SeveralSolnsCaseCount_39));
    MR_hl_field(0, Var_91, 1) = ((MR_Box) ((MR_Integer) 2));
  }
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_91));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ll_backend__lookup_switch__generate_multi_soln_table_lookup_code_15_p_0(CaseConstsSeveralLlds_15, Var_86, Var_87, (MR_Integer) 1, OutVars_18, EndLabel_21, BaseRegLval_51, LaterTableAddrRval_47, EndBranch_22, &LookupResultsCode_54, STATE_VARIABLE_MaybeEnd_0_57, STATE_VARIABLE_MaybeEnd_58, STATE_VARIABLE_CI_3_82, STATE_VARIABLE_CI_60, STATE_VARIABLE_CLD_1_85);
  Var_94 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetBaseRegCode_52, LookupResultsCode_54);
  MainCode_55 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BinarySearchCode_48, Var_94);
  ll_backend__code_util__add_switch_kind_comment_and_end_label_4_p_0((MR_String) "string binary multi soln lookup switch", EndLabel_21, MainCode_55, Code_23);
}

static void MR_CALL 
ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word STATE_VARIABLE_MainRvalsCord_0_3,
  MR_Word * STATE_VARIABLE_MainRvalsCord_4,
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
      *STATE_VARIABLE_MainRvalsCord_4 = STATE_VARIABLE_MainRvalsCord_0_3;
    }
    else
    {
      MR_String Str_26;
      MR_Word Soln_27;
      MR_Word StrSolns_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word StrRval_35;
      MR_Word MainRow_38;
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Var_56;
      MR_Integer STATE_VARIABLE_OneSolnCaseCount_1_57;
      MR_Integer STATE_VARIABLE_SeveralSolnsCaseCount_1_63;
      MR_Integer STATE_VARIABLE_LaterNextRow_1_72;
      MR_Word STATE_VARIABLE_LaterSolnArray_1_73;
      MR_Word STATE_VARIABLE_MainRvalsCord_1_75;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MainRvalsCord_0_3;
      MR_Integer next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_LaterSolnArray_0_6;
      MR_Integer next_value_of_STATE_VARIABLE_OneSolnCaseCount_0_8;
      MR_Integer next_value_of_HeadVar__10_10;

      Str_26 = ((MR_String) ((MR_hl_field(0, Var_55, 0))));
      Soln_27 = ((MR_Word) ((MR_hl_field(0, Var_55, 1))));
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
        MR_Word OutRvals_36 = ((MR_Word) ((MR_hl_field(0, Soln_27, 0))));
        MR_Word ZeroRval_37;
        MR_Word Var_61;
        MR_Word Var_62;

        STATE_VARIABLE_OneSolnCaseCount_1_57 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_OneSolnCaseCount_0_8 + (MR_Unsigned) 1);
        ZeroRval_37 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[13]));
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
        STATE_VARIABLE_LaterNextRow_1_72 = HeadVar__5_5;
        STATE_VARIABLE_LaterSolnArray_1_73 = STATE_VARIABLE_LaterSolnArray_0_6;
        STATE_VARIABLE_SeveralSolnsCaseCount_1_63 = HeadVar__10_10;
      }
      else
      {
        MR_Word FirstSolnRvals_39 = ((MR_Word) ((MR_hl_field(1, Soln_27, 0))));
        MR_Word LaterSolns_40 = ((MR_Word) ((MR_hl_field(1, Soln_27, 1))));
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

        STATE_VARIABLE_SeveralSolnsCaseCount_1_63 = (MR_Integer) ((MR_Unsigned) HeadVar__10_10 + (MR_Unsigned) 1);
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
        STATE_VARIABLE_LaterNextRow_1_72 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) NumLaterSolns_41);
        Var_74 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), LaterSolns_40);
        STATE_VARIABLE_LaterSolnArray_1_73 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), STATE_VARIABLE_LaterSolnArray_0_6, Var_74);
        STATE_VARIABLE_OneSolnCaseCount_1_57 = STATE_VARIABLE_OneSolnCaseCount_0_8;
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), ((MR_Box) (MainRow_38)), STATE_VARIABLE_MainRvalsCord_0_3, &STATE_VARIABLE_MainRvalsCord_1_75);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = StrSolns_28;
      next_value_of_STATE_VARIABLE_MainRvalsCord_0_3 = STATE_VARIABLE_MainRvalsCord_1_75;
      next_value_of_HeadVar__5_5 = STATE_VARIABLE_LaterNextRow_1_72;
      next_value_of_STATE_VARIABLE_LaterSolnArray_0_6 = STATE_VARIABLE_LaterSolnArray_1_73;
      next_value_of_STATE_VARIABLE_OneSolnCaseCount_0_8 = STATE_VARIABLE_OneSolnCaseCount_1_57;
      next_value_of_HeadVar__10_10 = STATE_VARIABLE_SeveralSolnsCaseCount_1_63;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MainRvalsCord_0_3 = next_value_of_STATE_VARIABLE_MainRvalsCord_0_3;
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
ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_p_0(
  MR_Word VarRval_14,
  MR_Word CaseValues_15,
  MR_Word OutVars_16,
  MR_Word OutTypes_17,
  MR_Word CanFail_18,
  MR_Word EndLabel_19,
  MR_Word EndBranch_20,
  MR_Word * Code_21,
  MR_Word STATE_VARIABLE_MaybeEnd_0_46,
  MR_Word * STATE_VARIABLE_MaybeEnd_47,
  MR_Word STATE_VARIABLE_CI_0_48,
  MR_Word * STATE_VARIABLE_CI_49,
  MR_Word CLD_24)
{
  MR_Word BinarySwitchInfo_25;
  MR_Integer TableSize_26;
  MR_Integer NumOutVars_27;
  MR_Word OutElemTypes_28;
  MR_Word ArrayElemTypes_29;
  MR_Word ArrayElemType_30;
  MR_Integer NumColumns_32;
  MR_Word MainTableRvalsCord_33;
  MR_Word MainTableRvals_34;
  MR_Word MainRowTypes_35;
  MR_Word MainTableDataId_36;
  MR_Word MainTableAddrRval_37;
  MR_Word BinarySearchCode_38;
  MR_Word LookupCode_39;
  MR_Word MainCode_44;
  MR_Word STATE_VARIABLE_CI_1_50;
  MR_Word Var_53;
  MR_Word Var_56;
  MR_Word LoReg_73;
  MR_Word HiReg_74;
  MR_Word MidReg_75;
  MR_Word ResultReg_76;
  MR_Word LoopStartLabel_77;
  MR_Word GtEqLabel_78;
  MR_Word EqLabel_79;
  MR_Word FailLabel_80;
  MR_Word BranchStart_81;
  MR_Word FailCode_82;
  MR_Word STATE_VARIABLE_CLD_1_84;
  MR_Word STATE_VARIABLE_CLD_2_86;
  MR_Word STATE_VARIABLE_CLD_3_88;
  MR_Word STATE_VARIABLE_CLD_4_90;
  MR_Word STATE_VARIABLE_CLD_5_91;
  MR_Word STATE_VARIABLE_CLD_6_92;
  MR_Word STATE_VARIABLE_CLD_7_93;
  MR_Word STATE_VARIABLE_CLD_8_94;
  MR_Word STATE_VARIABLE_CI_1_95;
  MR_Word STATE_VARIABLE_CI_2_96;
  MR_Word STATE_VARIABLE_CI_3_97;

  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &LoReg_73, CLD_24, &STATE_VARIABLE_CLD_1_84);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &HiReg_74, STATE_VARIABLE_CLD_1_84, &STATE_VARIABLE_CLD_2_86);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &MidReg_75, STATE_VARIABLE_CLD_2_86, &STATE_VARIABLE_CLD_3_88);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ResultReg_76, STATE_VARIABLE_CLD_3_88, &STATE_VARIABLE_CLD_4_90);
  ll_backend__code_loc_dep__release_reg_3_p_0(LoReg_73, STATE_VARIABLE_CLD_4_90, &STATE_VARIABLE_CLD_5_91);
  ll_backend__code_loc_dep__release_reg_3_p_0(HiReg_74, STATE_VARIABLE_CLD_5_91, &STATE_VARIABLE_CLD_6_92);
  ll_backend__code_loc_dep__release_reg_3_p_0(MidReg_75, STATE_VARIABLE_CLD_6_92, &STATE_VARIABLE_CLD_7_93);
  ll_backend__code_loc_dep__release_reg_3_p_0(ResultReg_76, STATE_VARIABLE_CLD_7_93, &STATE_VARIABLE_CLD_8_94);
  ll_backend__code_info__get_next_label_3_p_0(&LoopStartLabel_77, STATE_VARIABLE_CI_0_48, &STATE_VARIABLE_CI_1_95);
  ll_backend__code_info__get_next_label_3_p_0(&GtEqLabel_78, STATE_VARIABLE_CI_1_95, &STATE_VARIABLE_CI_2_96);
  ll_backend__code_info__get_next_label_3_p_0(&EqLabel_79, STATE_VARIABLE_CI_2_96, &STATE_VARIABLE_CI_3_97);
  ll_backend__code_info__get_next_label_3_p_0(&FailLabel_80, STATE_VARIABLE_CI_3_97, &STATE_VARIABLE_CI_1_50);
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_8_94, &BranchStart_81);
  switch (CanFail_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ll_backend__code_loc_dep__generate_failure_3_p_0(&FailCode_82, STATE_VARIABLE_CI_1_50, STATE_VARIABLE_CLD_8_94);
      break;
    case (MR_Integer) 1:
      FailCode_82 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[28])));
      break;
  }
  {
    BinarySwitchInfo_25 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, BinarySwitchInfo_25, 0) = ((MR_Box) (LoReg_73));
    MR_hl_field(0, BinarySwitchInfo_25, 1) = ((MR_Box) (HiReg_74));
    MR_hl_field(0, BinarySwitchInfo_25, 2) = ((MR_Box) (MidReg_75));
    MR_hl_field(0, BinarySwitchInfo_25, 3) = ((MR_Box) (ResultReg_76));
    MR_hl_field(0, BinarySwitchInfo_25, 4) = ((MR_Box) (LoopStartLabel_77));
    MR_hl_field(0, BinarySwitchInfo_25, 5) = ((MR_Box) (GtEqLabel_78));
    MR_hl_field(0, BinarySwitchInfo_25, 6) = ((MR_Box) (EqLabel_79));
    MR_hl_field(0, BinarySwitchInfo_25, 7) = ((MR_Box) (FailLabel_80));
    MR_hl_field(0, BinarySwitchInfo_25, 8) = ((MR_Box) (BranchStart_81));
    MR_hl_field(0, BinarySwitchInfo_25, 9) = ((MR_Box) (FailCode_82));
  }
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_2[2]), CaseValues_15, &TableSize_26);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[5]), OutVars_16, &NumOutVars_27);
  mercury__list__duplicate_3_p_0((MR_Word) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0), NumOutVars_27, ((MR_Box) ((MR_Integer) 2)), &OutElemTypes_28);
  {
    ArrayElemTypes_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArrayElemTypes_29, 0) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(1, ArrayElemTypes_29, 1) = ((MR_Box) (OutElemTypes_28));
  }
  {
    ArrayElemType_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArrayElemType_30, 0) = ((MR_Box) (ArrayElemTypes_29));
  }
  NumColumns_32 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) NumOutVars_27);
  Var_53 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]));
  ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_p_0(CaseValues_15, Var_53, &MainTableRvalsCord_33);
  MainTableRvals_34 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), MainTableRvalsCord_33);
  {
    MainRowTypes_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MainRowTypes_35, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, MainRowTypes_35, 1) = ((MR_Box) (OutTypes_17));
  }
  ll_backend__code_info__add_vector_static_cell_5_p_0(MainRowTypes_35, MainTableRvals_34, &MainTableDataId_36, STATE_VARIABLE_CI_1_50, STATE_VARIABLE_CI_49);
  {
    Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_56, 1) = ((MR_Box) (MainTableDataId_36));
  }
  {
    MainTableAddrRval_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MainTableAddrRval_37, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MainTableAddrRval_37, 1) = ((MR_Box) (Var_56));
  }
  ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(BinarySwitchInfo_25, VarRval_14, MainTableAddrRval_37, ArrayElemType_30, TableSize_26, NumColumns_32, &BinarySearchCode_38);
  if ((OutVars_16 == (MR_Word) ((MR_Unsigned) 0U)))
    ll_backend__lookup_switch__generate_single_soln_table_lookup_code_no_vars_5_p_0(EndBranch_20, &LookupCode_39, STATE_VARIABLE_MaybeEnd_0_46, STATE_VARIABLE_MaybeEnd_47, CLD_24);
  else
  {
    MR_Word MidRegLval_42 = ((MR_Word) ((MR_hl_field(0, BinarySwitchInfo_25, 2))));
    MR_Word MainRowSelect_43;
    MR_Word Var_58;

    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_58, 0) = ((MR_Box) (MidRegLval_42));
    }
    {
      MainRowSelect_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MainRowSelect_43, 0) = ((MR_Box) (Var_58));
      MR_hl_field(0, MainRowSelect_43, 1) = ((MR_Box) (MainRowTypes_35));
    }
    ll_backend__lookup_switch__generate_single_soln_table_lookup_code_some_vars_10_p_0(MainTableDataId_36, MainRowSelect_43, (MR_Integer) 1, OutVars_16, EndBranch_20, &LookupCode_39, STATE_VARIABLE_MaybeEnd_0_46, STATE_VARIABLE_MaybeEnd_47, *STATE_VARIABLE_CI_49, CLD_24);
  }
  MainCode_44 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BinarySearchCode_38, LookupCode_39);
  ll_backend__code_util__add_switch_kind_comment_and_end_label_4_p_0((MR_String) "string binary single soln lookup switch", EndLabel_19, MainCode_44, Code_21);
}

static void MR_CALL 
ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RvalsCord_0_2,
  MR_Word * STATE_VARIABLE_RvalsCord_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RvalsCord_3 = STATE_VARIABLE_RvalsCord_0_2;
    else
    {
      MR_String Str_7;
      MR_Word OutRvals_8;
      MR_Word StrsOutRvals_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word RowRvals_11;
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Var_15;
      MR_Word Var_16;
      MR_Word STATE_VARIABLE_RvalsCord_1_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RvalsCord_0_2;

      Str_7 = ((MR_String) ((MR_hl_field(0, Var_14, 0))));
      OutRvals_8 = ((MR_Word) ((MR_hl_field(0, Var_14, 1))));
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
      mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), ((MR_Box) (RowRvals_11)), STATE_VARIABLE_RvalsCord_0_2, &STATE_VARIABLE_RvalsCord_1_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = StrsOutRvals_9;
      next_value_of_STATE_VARIABLE_RvalsCord_0_2 = STATE_VARIABLE_RvalsCord_1_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RvalsCord_0_2 = next_value_of_STATE_VARIABLE_RvalsCord_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__string_switch__generate_string_binary_jump_switch_12_p_0_1(
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

  ll_backend__switch_case__represent_tagged_case_for_llds_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv2_HeadVar__5_5, ((MR_Word) (wrapper_arg_5)), &conv1_HeadVar__7_7, ((MR_Word) (wrapper_arg_7)), &conv0_HeadVar__9_9);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__5_5));
  *wrapper_arg_6 = ((MR_Box) (conv1_HeadVar__7_7));
  *wrapper_arg_8 = ((MR_Box) (conv0_HeadVar__9_9));
}

void MR_CALL 
ll_backend__string_switch__generate_string_binary_jump_switch_12_p_0(
  MR_Word VarRval_13,
  MR_String VarName_14,
  MR_Word TaggedCases_15,
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
  MR_Word CaseLabelMap0_27;
  MR_Word CaseLabelMap_28;
  MR_Word SortedTable_30;
  MR_Word MainTableRvalsCord_31;
  MR_Word TargetsCord_32;
  MR_Integer TableSize_33;
  MR_Word MainTableRvals_34;
  MR_Word Targets_35;
  MR_Word TableAddr_38;
  MR_Word TableAddrRval_41;
  MR_Word BinarySearchCode_42;
  MR_Word MidReg_43;
  MR_Word ComputedGotoCode_44;
  MR_Word CasesCode_45;
  MR_Word MainCode_47;
  MR_Word STATE_VARIABLE_CI_1_51;
  MR_Word Var_52;
  MR_Word STATE_VARIABLE_CI_2_54;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_74;
  MR_Word Var_78;
  MR_Word Var_82;
  MR_Word Var_88;
  MR_Word Var_90;
  MR_Box conv7_CaseLabelMap_28;
  MR_Box conv6_MaybeEnd_20;
  MR_Box conv5_STATE_VARIABLE_CI_2_54;
  MR_Box conv4_Var_29;
  MR_Word Var_46;

  ll_backend__string_switch__init_string_binary_switch_info_5_p_0(CanFail_17, &BinarySwitchInfo_24, STATE_VARIABLE_CI_0_49, &STATE_VARIABLE_CI_1_51, CLD_23);
  BranchStart_25 = ((MR_Word) ((MR_hl_field(0, BinarySwitchInfo_24, 8))));
  {
    Params_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_26, 0) = ((MR_Box) (VarName_14));
    MR_hl_field(0, Params_26, 1) = ((MR_Box) (SwitchGoalInfo_18));
    MR_hl_field(0, Params_26, 2) = (MR_Box) ((MR_Unsigned) (CodeModel_16));
    MR_hl_field(0, Params_26, 3) = ((MR_Box) (BranchStart_25));
    MR_hl_field(0, Params_26, 4) = ((MR_Box) (EndLabel_19));
  }
  mercury__map__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0), &CaseLabelMap0_27);
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_6[0]));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) (ll_backend__string_switch__generate_string_binary_jump_switch_12_p_0_1));
    MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_52, 3) = ((MR_Box) (Params_26));
  }
  backend_libs__string_switch_util__string_binary_cases_11_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__string_switch_scalar_common_2[0]), (MR_Word) (&ll_backend__string_switch_scalar_common_1[3]), (MR_Word) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), TaggedCases_15, Var_52, ((MR_Box) (CaseLabelMap0_27)), &conv7_CaseLabelMap_28, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_MaybeEnd_20, ((MR_Box) (STATE_VARIABLE_CI_1_51)), &conv5_STATE_VARIABLE_CI_2_54, ((MR_Box) ((MR_Integer) 0)), &conv4_Var_29, &SortedTable_30);
  CaseLabelMap_28 = ((MR_Word) (conv7_CaseLabelMap_28));
  *MaybeEnd_20 = ((MR_Word) (conv6_MaybeEnd_20));
  STATE_VARIABLE_CI_2_54 = ((MR_Word) (conv5_STATE_VARIABLE_CI_2_54));
  Var_56 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]));
  Var_57 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[2]));
  ll_backend__string_switch__gen_string_binary_jump_slots_7_p_0(SortedTable_30, Var_56, &MainTableRvalsCord_31, Var_57, &TargetsCord_32, (MR_Integer) 0, &TableSize_33);
  MainTableRvals_34 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), MainTableRvalsCord_31);
  Targets_35 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[2]), TargetsCord_32);
  ll_backend__code_info__add_vector_static_cell_5_p_0((MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[17])), MainTableRvals_34, &TableAddr_38, STATE_VARIABLE_CI_2_54, STATE_VARIABLE_CI_50);
  {
    Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_69, 1) = ((MR_Box) (TableAddr_38));
  }
  {
    TableAddrRval_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, TableAddrRval_41, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, TableAddrRval_41, 1) = ((MR_Box) (Var_69));
  }
  ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(BinarySwitchInfo_24, VarRval_13, TableAddrRval_41, (MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[11])), TableSize_33, (MR_Integer) 2, &BinarySearchCode_42);
  MidReg_43 = ((MR_Word) ((MR_hl_field(0, BinarySwitchInfo_24, 2))));
  {
    Var_82 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_82, 0) = ((MR_Box) (MidReg_43));
  }
  {
    Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_78, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[4])));
    MR_hl_field(3, Var_78, 2) = ((MR_Box) (Var_82));
    MR_hl_field(3, Var_78, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[20])));
  }
  {
    Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_74, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[3])));
    MR_hl_field(3, Var_74, 2) = ((MR_Box) (Var_78));
    MR_hl_field(3, Var_74, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[21])));
  }
  {
    Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_72, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[29])));
    MR_hl_field(3, Var_72, 2) = ((MR_Box) (TableAddrRval_41));
    MR_hl_field(3, Var_72, 3) = ((MR_Box) (Var_74));
  }
  {
    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_88, 0) = ((MR_Box) (TableSize_33));
  }
  {
    Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, Var_71, 1) = ((MR_Box) (Var_72));
    MR_hl_field(3, Var_71, 2) = ((MR_Box) (Var_88));
    MR_hl_field(3, Var_71, 3) = ((MR_Box) (Targets_35));
  }
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (Var_71));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) ((MR_String) "jump to the matching case"));
  }
  ComputedGotoCode_44 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_70)));
  ll_backend__switch_case__add_not_yet_included_cases_3_p_0(&CasesCode_45, CaseLabelMap_28, &Var_46);
  Var_90 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ComputedGotoCode_44, CasesCode_45);
  MainCode_47 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BinarySearchCode_42, Var_90);
  ll_backend__code_util__add_switch_kind_comment_and_end_label_4_p_0((MR_String) "string binary jump switch", EndLabel_19, MainCode_47, Code_21);
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
  MR_Word LoReg_15 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
  MR_Word HiReg_16 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
  MR_Word MidReg_17 = ((MR_Word) ((MR_hl_field(0, Info_8, 2))));
  MR_Word ResultReg_18 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
  MR_Word LoopStartLabel_19 = ((MR_Word) ((MR_hl_field(0, Info_8, 4))));
  MR_Word GtEqLabel_20 = ((MR_Word) ((MR_hl_field(0, Info_8, 5))));
  MR_Word EqLabel_21 = ((MR_Word) ((MR_hl_field(0, Info_8, 6))));
  MR_Word FailLabel_22 = ((MR_Word) ((MR_hl_field(0, Info_8, 7))));
  MR_Word FailCode_24 = ((MR_Word) ((MR_hl_field(0, Info_8, 9))));
  MR_Integer MaxIndex_25 = (MR_Integer) ((MR_Unsigned) TableSize_12 - (MR_Unsigned) 1);
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[13]));
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
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_95;
  MR_Word Var_99;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word Var_104;
  MR_Word Var_109;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_118;
  MR_Word Var_119;
  MR_Word Var_120;
  MR_Word Var_122;
  MR_Word Var_123;
  MR_Word Var_124;
  MR_Word Var_125;
  MR_Word Var_133;
  MR_Word Var_135;
  MR_Word Var_136;
  MR_Word Var_137;
  MR_Word Var_138;
  MR_Word Var_147;
  MR_Word Var_148;
  MR_Word Var_152;
  MR_Word Var_153;
  MR_Word Var_154;
  MR_Word Var_157;
  MR_Word Var_158;
  MR_Word Var_159;
  MR_Word Var_160;

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
    Var_52 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (LoReg_15));
  }
  {
    Var_53 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_53, 0) = ((MR_Box) (HiReg_16));
  }
  {
    Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_48, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[26])));
    MR_hl_field(3, Var_48, 2) = ((MR_Box) (Var_52));
    MR_hl_field(3, Var_48, 3) = ((MR_Box) (Var_53));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (FailLabel_22));
  }
  {
    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_47, 1) = ((MR_Box) (Var_48));
    MR_hl_field(3, Var_47, 2) = ((MR_Box) (Var_54));
  }
  {
    Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_46, 0) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_46, 1) = ((MR_Box) ((MR_String) "have we searched all of the table\?"));
  }
  Var_64 = (MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[3]));
  {
    Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_63, 1) = ((MR_Box) (Var_64));
    MR_hl_field(3, Var_63, 2) = ((MR_Box) (Var_52));
    MR_hl_field(3, Var_63, 3) = ((MR_Box) (Var_53));
  }
  {
    Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_59, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[8])));
    MR_hl_field(3, Var_59, 2) = ((MR_Box) (Var_63));
    MR_hl_field(3, Var_59, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[20])));
  }
  {
    Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_58, 1) = ((MR_Box) (MidReg_17));
    MR_hl_field(3, Var_58, 2) = ((MR_Box) (Var_59));
  }
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) ((MR_String) ""));
  }
  {
    Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_79, 1) = ((MR_Box) (ArrayElemType_11));
  }
  {
    Var_84 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_84, 0) = ((MR_Box) (MidReg_17));
  }
  {
    Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_86, 0) = ((MR_Box) (NumColumns_13));
  }
  {
    Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_85, 1) = ((MR_Box) (Var_86));
  }
  {
    Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_80, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[4])));
    MR_hl_field(3, Var_80, 2) = ((MR_Box) (Var_84));
    MR_hl_field(3, Var_80, 3) = ((MR_Box) (Var_85));
  }
  {
    Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_78, 1) = ((MR_Box) (Var_79));
    MR_hl_field(3, Var_78, 2) = ((MR_Box) (TableAddrRval_10));
    MR_hl_field(3, Var_78, 3) = ((MR_Box) (Var_80));
  }
  {
    Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(3, Var_76, 2) = ((MR_Box) (VarRval_9));
    MR_hl_field(3, Var_76, 3) = ((MR_Box) (Var_78));
  }
  {
    Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_75, 1) = ((MR_Box) (ResultReg_18));
    MR_hl_field(3, Var_75, 2) = ((MR_Box) (Var_76));
  }
  {
    Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_74, 0) = ((MR_Box) (Var_75));
    MR_hl_field(0, Var_74, 1) = ((MR_Box) ((MR_String) "compare with the middle element"));
  }
  {
    Var_95 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_95, 0) = ((MR_Box) (ResultReg_18));
  }
  {
    Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_91, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[12])));
    MR_hl_field(3, Var_91, 2) = ((MR_Box) (Var_95));
    MR_hl_field(3, Var_91, 3) = ((MR_Box) (Var_31));
  }
  {
    Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_99, 0) = ((MR_Box) (GtEqLabel_20));
  }
  {
    Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_90, 1) = ((MR_Box) (Var_91));
    MR_hl_field(3, Var_90, 2) = ((MR_Box) (Var_99));
  }
  {
    Var_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_89, 0) = ((MR_Box) (Var_90));
    MR_hl_field(0, Var_89, 1) = ((MR_Box) ((MR_String) "branch away unless key is in lo half"));
  }
  Var_109 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[21]));
  {
    Var_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_104, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_104, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[9])));
    MR_hl_field(3, Var_104, 2) = ((MR_Box) (Var_84));
    MR_hl_field(3, Var_104, 3) = ((MR_Box) (Var_109));
  }
  {
    Var_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_103, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_103, 1) = ((MR_Box) (HiReg_16));
    MR_hl_field(3, Var_103, 2) = ((MR_Box) (Var_104));
  }
  {
    Var_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_102, 0) = ((MR_Box) (Var_103));
    MR_hl_field(0, Var_102, 1) = ((MR_Box) ((MR_String) ""));
  }
  {
    Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_116, 0) = ((MR_Box) (LoopStartLabel_19));
  }
  {
    Var_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_115, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_115, 1) = ((MR_Box) (Var_116));
  }
  {
    Var_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_114, 0) = ((MR_Box) (Var_115));
    MR_hl_field(0, Var_114, 1) = ((MR_Box) ((MR_String) "go back to search the remaining lo half"));
  }
  {
    Var_120 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_120, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_120, 1) = ((MR_Box) (GtEqLabel_20));
  }
  {
    Var_119 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_119, 0) = ((MR_Box) (Var_120));
    MR_hl_field(0, Var_119, 1) = ((MR_Box) ((MR_String) "nofulljump"));
  }
  {
    Var_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_125, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_125, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[27])));
    MR_hl_field(3, Var_125, 2) = ((MR_Box) (Var_95));
    MR_hl_field(3, Var_125, 3) = ((MR_Box) (Var_31));
  }
  {
    Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_133, 0) = ((MR_Box) (EqLabel_21));
  }
  {
    Var_124 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_124, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_124, 1) = ((MR_Box) (Var_125));
    MR_hl_field(3, Var_124, 2) = ((MR_Box) (Var_133));
  }
  {
    Var_123 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_123, 0) = ((MR_Box) (Var_124));
    MR_hl_field(0, Var_123, 1) = ((MR_Box) ((MR_String) "branch away unless key is in hi half"));
  }
  {
    Var_138 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_138, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_138, 1) = ((MR_Box) (Var_64));
    MR_hl_field(3, Var_138, 2) = ((MR_Box) (Var_84));
    MR_hl_field(3, Var_138, 3) = ((MR_Box) (Var_109));
  }
  {
    Var_137 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_137, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_137, 1) = ((MR_Box) (LoReg_15));
    MR_hl_field(3, Var_137, 2) = ((MR_Box) (Var_138));
  }
  {
    Var_136 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_136, 0) = ((MR_Box) (Var_137));
    MR_hl_field(0, Var_136, 1) = ((MR_Box) ((MR_String) ""));
  }
  {
    Var_148 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_148, 0) = ((MR_Box) (Var_115));
    MR_hl_field(0, Var_148, 1) = ((MR_Box) ((MR_String) "go back to search the remaining hi half"));
  }
  {
    Var_154 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_154, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_154, 1) = ((MR_Box) (FailLabel_22));
  }
  {
    Var_153 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_153, 0) = ((MR_Box) (Var_154));
    MR_hl_field(0, Var_153, 1) = ((MR_Box) ((MR_String) "handle the failure of the table search"));
  }
  {
    Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_152, 0) = ((MR_Box) (Var_153));
    MR_hl_field(1, Var_152, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_147, 0) = ((MR_Box) (Var_148));
    MR_hl_field(1, Var_147, 1) = ((MR_Box) (Var_152));
  }
  {
    Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_135, 0) = ((MR_Box) (Var_136));
    MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_147));
  }
  {
    Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_122, 0) = ((MR_Box) (Var_123));
    MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_135));
  }
  {
    Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_118, 0) = ((MR_Box) (Var_119));
    MR_hl_field(1, Var_118, 1) = ((MR_Box) (Var_122));
  }
  {
    Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_113, 0) = ((MR_Box) (Var_114));
    MR_hl_field(1, Var_113, 1) = ((MR_Box) (Var_118));
  }
  {
    Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
    MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_113));
  }
  {
    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
    MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_101));
  }
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_88));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_73));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_56));
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
    Var_160 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_160, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_160, 1) = ((MR_Box) (EqLabel_21));
  }
  {
    Var_159 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_159, 0) = ((MR_Box) (Var_160));
    MR_hl_field(0, Var_159, 1) = ((MR_Box) ((MR_String) "we found the key"));
  }
  Var_158 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_159)));
  Var_157 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_24, Var_158);
  *Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_27, Var_157);
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
  MR_Word STATE_VARIABLE_CLD_1_24;
  MR_Word STATE_VARIABLE_CLD_2_26;
  MR_Word STATE_VARIABLE_CLD_3_28;
  MR_Word STATE_VARIABLE_CLD_4_30;
  MR_Word STATE_VARIABLE_CLD_5_31;
  MR_Word STATE_VARIABLE_CLD_6_32;
  MR_Word STATE_VARIABLE_CLD_7_33;
  MR_Word STATE_VARIABLE_CLD_8_34;
  MR_Word STATE_VARIABLE_CI_1_35;
  MR_Word STATE_VARIABLE_CI_2_36;
  MR_Word STATE_VARIABLE_CI_3_37;

  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &LoReg_10, STATE_VARIABLE_CLD_0_22, &STATE_VARIABLE_CLD_1_24);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &HiReg_11, STATE_VARIABLE_CLD_1_24, &STATE_VARIABLE_CLD_2_26);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &MidReg_12, STATE_VARIABLE_CLD_2_26, &STATE_VARIABLE_CLD_3_28);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ResultReg_13, STATE_VARIABLE_CLD_3_28, &STATE_VARIABLE_CLD_4_30);
  ll_backend__code_loc_dep__release_reg_3_p_0(LoReg_10, STATE_VARIABLE_CLD_4_30, &STATE_VARIABLE_CLD_5_31);
  ll_backend__code_loc_dep__release_reg_3_p_0(HiReg_11, STATE_VARIABLE_CLD_5_31, &STATE_VARIABLE_CLD_6_32);
  ll_backend__code_loc_dep__release_reg_3_p_0(MidReg_12, STATE_VARIABLE_CLD_6_32, &STATE_VARIABLE_CLD_7_33);
  ll_backend__code_loc_dep__release_reg_3_p_0(ResultReg_13, STATE_VARIABLE_CLD_7_33, &STATE_VARIABLE_CLD_8_34);
  ll_backend__code_info__get_next_label_3_p_0(&LoopStartLabel_14, STATE_VARIABLE_CI_0_20, &STATE_VARIABLE_CI_1_35);
  ll_backend__code_info__get_next_label_3_p_0(&GtEqLabel_15, STATE_VARIABLE_CI_1_35, &STATE_VARIABLE_CI_2_36);
  ll_backend__code_info__get_next_label_3_p_0(&EqLabel_16, STATE_VARIABLE_CI_2_36, &STATE_VARIABLE_CI_3_37);
  ll_backend__code_info__get_next_label_3_p_0(&FailLabel_17, STATE_VARIABLE_CI_3_37, STATE_VARIABLE_CI_21);
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_8_34, &BranchStart_18);
  switch (CanFail_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ll_backend__code_loc_dep__generate_failure_3_p_0(&FailCode_19, *STATE_VARIABLE_CI_21, STATE_VARIABLE_CLD_8_34);
      break;
    case (MR_Integer) 1:
      FailCode_19 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[28])));
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
  MR_Word STATE_VARIABLE_TableRvalsCord_0_2,
  MR_Word * STATE_VARIABLE_TableRvalsCord_3,
  MR_Word STATE_VARIABLE_MaybeTargetsCord_0_4,
  MR_Word * STATE_VARIABLE_MaybeTargetsCord_5,
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
      *STATE_VARIABLE_MaybeTargetsCord_5 = STATE_VARIABLE_MaybeTargetsCord_0_4;
      *STATE_VARIABLE_TableRvalsCord_3 = STATE_VARIABLE_TableRvalsCord_0_2;
    }
    else
    {
      MR_String Str_17;
      MR_Word Label_18;
      MR_Word StrLabels_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Row_23;
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word STATE_VARIABLE_TableRvalsCord_1_37;
      MR_Word Var_38;
      MR_Word STATE_VARIABLE_MaybeTargetsCord_1_39;
      MR_Integer STATE_VARIABLE_CurIndex_1_40;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TableRvalsCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_MaybeTargetsCord_0_4;
      MR_Integer next_value_of_STATE_VARIABLE_CurIndex_0_6;

      Str_17 = ((MR_String) ((MR_hl_field(0, Var_30, 0))));
      Label_18 = ((MR_Word) ((MR_hl_field(0, Var_30, 1))));
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
      mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), ((MR_Box) (Row_23)), STATE_VARIABLE_TableRvalsCord_0_2, &STATE_VARIABLE_TableRvalsCord_1_37);
      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (Label_18));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[2]), ((MR_Box) (Var_38)), STATE_VARIABLE_MaybeTargetsCord_0_4, &STATE_VARIABLE_MaybeTargetsCord_1_39);
      STATE_VARIABLE_CurIndex_1_40 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurIndex_0_6 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = StrLabels_19;
      next_value_of_STATE_VARIABLE_TableRvalsCord_0_2 = STATE_VARIABLE_TableRvalsCord_1_37;
      next_value_of_STATE_VARIABLE_MaybeTargetsCord_0_4 = STATE_VARIABLE_MaybeTargetsCord_1_39;
      next_value_of_STATE_VARIABLE_CurIndex_0_6 = STATE_VARIABLE_CurIndex_1_40;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TableRvalsCord_0_2 = next_value_of_STATE_VARIABLE_TableRvalsCord_0_2;
      STATE_VARIABLE_MaybeTargetsCord_0_4 = next_value_of_STATE_VARIABLE_MaybeTargetsCord_0_4;
      STATE_VARIABLE_CurIndex_0_6 = next_value_of_STATE_VARIABLE_CurIndex_0_6;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__string_switch__generate_string_hash_lookup_switch_7_p_0(
  MR_Word VarRval_8,
  MR_Word LookupSwitchInfo_9,
  MR_Word CanFail_10,
  MR_Word EndLabel_11,
  MR_Word * STATE_VARIABLE_MaybeEnd_28,
  MR_Word * Code_13,
  MR_Word * STATE_VARIABLE_CI_29)
{
  MR_Word KeyToCaseIdMap_15 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 0))));
  MR_Word CaseConsts_16 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 1))));
  MR_Word OutVars_17 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 2))));
  MR_Word OutTypes_18 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 3))));
  MR_Word EndBranch_19 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 4))));
  MR_Word CLD_20 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 7))));
  MR_Word STATE_VARIABLE_MaybeEnd_1_30 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 5))));
  MR_Word STATE_VARIABLE_CI_1_31 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 6))));

  if (((MR_tag((MR_Word) CaseConsts_16)) == (MR_Integer) 0))
  {
    MR_Word CaseIdToValuesMap_21 = ((MR_Word) ((MR_hl_field(0, CaseConsts_16, 0))));
    MR_Word KeyToValuesMap_22;
    MR_Word KeyValuesAL_23;

    mercury__map__compose_maps_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), KeyToCaseIdMap_15, CaseIdToValuesMap_21, &KeyToValuesMap_22);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), KeyToValuesMap_22, &KeyValuesAL_23);
    ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_p_0(VarRval_8, KeyValuesAL_23, OutVars_17, OutTypes_18, CanFail_10, EndLabel_11, EndBranch_19, Code_13, STATE_VARIABLE_MaybeEnd_1_30, STATE_VARIABLE_MaybeEnd_28, STATE_VARIABLE_CI_1_31, STATE_VARIABLE_CI_29, CLD_20);
  }
  else
  {
    MR_Word CaseIdToSolnsMap_24 = ((MR_Word) ((MR_hl_field(1, CaseConsts_16, 0))));
    MR_Word CaseConstsSeveralLlds_25 = ((MR_Word) ((MR_hl_field(1, CaseConsts_16, 1))));
    MR_Word KeyToSolnsMap_26;
    MR_Word KeySolnsAL_27;

    mercury__map__compose_maps_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[1]), KeyToCaseIdMap_15, CaseIdToSolnsMap_24, &KeyToSolnsMap_26);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[1]), KeyToSolnsMap_26, &KeySolnsAL_27);
    ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_14_p_0(CaseConstsSeveralLlds_25, VarRval_8, KeySolnsAL_27, OutVars_17, OutTypes_18, CanFail_10, EndLabel_11, EndBranch_19, Code_13, STATE_VARIABLE_MaybeEnd_1_30, STATE_VARIABLE_MaybeEnd_28, STATE_VARIABLE_CI_1_31, STATE_VARIABLE_CI_29, CLD_20);
  }
}

static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_14_p_0_1(
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
ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_14_p_0(
  MR_Word CaseConstsSeveralLlds_15,
  MR_Word VarRval_16,
  MR_Word CaseSolns_17,
  MR_Word OutVars_18,
  MR_Word OutTypes_19,
  MR_Word CanFail_20,
  MR_Word EndLabel_21,
  MR_Word EndBranch_22,
  MR_Word * Code_23,
  MR_Word STATE_VARIABLE_MaybeEnd_0_59,
  MR_Word * STATE_VARIABLE_MaybeEnd_60,
  MR_Word STATE_VARIABLE_CI_0_61,
  MR_Word * STATE_VARIABLE_CI_62,
  MR_Word STATE_VARIABLE_CLD_0_63)
{
  MR_bool succeeded;
  MR_Word HashSwitchInfo_27;
  MR_Integer TableSize_28;
  MR_Word HashSlotsMap_29;
  MR_Word HashOp_30;
  MR_Integer NumCollisions_31;
  MR_Integer HashMask_32;
  MR_Integer NumOutVars_33;
  MR_Word OutElemTypes_34;
  MR_Integer NumColumns_35;
  MR_Integer NumPrevColumns_36;
  MR_Word ArrayElemTypes_37;
  MR_Word MainRowTypes_38;
  MR_Word ArrayElemType_39;
  MR_Word DummyOutRvals_41;
  MR_Word LaterSolnsRowsCord0_42;
  MR_Word MainTableRvalsCord_43;
  MR_Word LaterSolnsRowsCord_44;
  MR_Integer OneSolnCaseCount_45;
  MR_Integer SeveralSolnsCaseCount_46;
  MR_Word MainTableRvals_47;
  MR_Word LaterSolnsRows_48;
  MR_Word MainTableDataId_49;
  MR_Word LaterTableDataId_50;
  MR_Word MainTableAddrRval_51;
  MR_Word LaterTableAddrRval_52;
  MR_Word RowStartRegLval_53;
  MR_Word MainRowSelect_54;
  MR_Word BaseRegLval_55;
  MR_Word SetBaseRegCode_56;
  MR_Word LookupResultsCode_57;
  MR_Word MatchCode_58;
  MR_Word STATE_VARIABLE_CI_1_64;
  MR_Word Var_101;
  MR_Word STATE_VARIABLE_CI_2_104;
  MR_Word STATE_VARIABLE_CI_3_105;
  MR_Word Var_106;
  MR_Word Var_107;
  MR_Word Var_108;
  MR_Word STATE_VARIABLE_CLD_1_109;
  MR_Word Var_110;
  MR_Word Var_111;
  MR_Word Var_115;
  MR_Word Var_119;

  ll_backend__string_switch__init_string_hash_switch_info_5_p_0(CanFail_20, &HashSwitchInfo_27, STATE_VARIABLE_CI_0_61, &STATE_VARIABLE_CI_1_64, STATE_VARIABLE_CLD_0_63);
  backend_libs__string_switch_util__construct_string_hash_cases_6_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[1]), CaseSolns_17, (MR_Integer) 1, &TableSize_28, &HashSlotsMap_29, &HashOp_30, &NumCollisions_31);
  HashMask_32 = (MR_Integer) ((MR_Unsigned) TableSize_28 - (MR_Unsigned) 1);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[5]), OutVars_18, &NumOutVars_33);
  mercury__list__duplicate_3_p_0((MR_Word) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0), NumOutVars_33, ((MR_Box) ((MR_Integer) 2)), &OutElemTypes_34);
  succeeded = (NumCollisions_31 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Var_70;
    MR_Word Var_72;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_78;

    NumColumns_35 = (MR_Integer) ((MR_Unsigned) 3 + (MR_Unsigned) NumOutVars_33);
    NumPrevColumns_36 = (MR_Integer) 1;
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) (OutElemTypes_34));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_72));
    }
    {
      ArrayElemTypes_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArrayElemTypes_37, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, ArrayElemTypes_37, 1) = ((MR_Box) (Var_70));
    }
    Var_76 = (MR_Word) (MR_mkword(2, &ll_backend__string_switch_scalar_common_3[2]));
    {
      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_76));
      MR_hl_field(1, Var_78, 1) = ((MR_Box) (OutTypes_19));
    }
    {
      Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
      MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_78));
    }
    {
      MainRowTypes_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MainRowTypes_38, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, MainRowTypes_38, 1) = ((MR_Box) (Var_75));
    }
  }
  else
  {
    MR_Word Var_83;
    MR_Word Var_85;
    MR_Word Var_87;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_93;
    MR_Word Var_96;

    NumColumns_35 = (MR_Integer) ((MR_Unsigned) 4 + (MR_Unsigned) NumOutVars_33);
    NumPrevColumns_36 = (MR_Integer) 2;
    {
      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_87, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, Var_87, 1) = ((MR_Box) (OutElemTypes_34));
    }
    {
      Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_85, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_87));
    }
    {
      Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_83, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_85));
    }
    {
      ArrayElemTypes_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArrayElemTypes_37, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, ArrayElemTypes_37, 1) = ((MR_Box) (Var_83));
    }
    Var_91 = (MR_Word) (MR_mkword(2, &ll_backend__string_switch_scalar_common_3[2]));
    {
      Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_96, 0) = ((MR_Box) (Var_91));
      MR_hl_field(1, Var_96, 1) = ((MR_Box) (OutTypes_19));
    }
    {
      Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_93, 0) = ((MR_Box) (Var_91));
      MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_96));
    }
    {
      Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
      MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_93));
    }
    {
      MainRowTypes_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MainRowTypes_38, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, MainRowTypes_38, 1) = ((MR_Box) (Var_90));
    }
  }
  {
    ArrayElemType_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArrayElemType_39, 0) = ((MR_Box) (ArrayElemTypes_37));
  }
  DummyOutRvals_41 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__string_switch_scalar_common_2[7]), OutTypes_19);
  LaterSolnsRowsCord0_42 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), ((MR_Box) (DummyOutRvals_41)));
  Var_101 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]));
  ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_15_p_0((MR_Integer) 0, TableSize_28, HashSlotsMap_29, DummyOutRvals_41, NumOutVars_33, NumCollisions_31, Var_101, &MainTableRvalsCord_43, (MR_Integer) 1, LaterSolnsRowsCord0_42, &LaterSolnsRowsCord_44, (MR_Integer) 0, &OneSolnCaseCount_45, (MR_Integer) 0, &SeveralSolnsCaseCount_46);
  MainTableRvals_47 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), MainTableRvalsCord_43);
  LaterSolnsRows_48 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), LaterSolnsRowsCord_44);
  ll_backend__code_info__add_vector_static_cell_5_p_0(MainRowTypes_38, MainTableRvals_47, &MainTableDataId_49, STATE_VARIABLE_CI_1_64, &STATE_VARIABLE_CI_2_104);
  ll_backend__code_info__add_vector_static_cell_5_p_0(OutTypes_19, LaterSolnsRows_48, &LaterTableDataId_50, STATE_VARIABLE_CI_2_104, &STATE_VARIABLE_CI_3_105);
  {
    Var_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_106, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_106, 1) = ((MR_Box) (MainTableDataId_49));
  }
  {
    MainTableAddrRval_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MainTableAddrRval_51, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MainTableAddrRval_51, 1) = ((MR_Box) (Var_106));
  }
  {
    Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_107, 1) = ((MR_Box) (LaterTableDataId_50));
  }
  {
    LaterTableAddrRval_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LaterTableAddrRval_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, LaterTableAddrRval_52, 1) = ((MR_Box) (Var_107));
  }
  RowStartRegLval_53 = ((MR_Word) ((MR_hl_field(0, HashSwitchInfo_27, 1))));
  {
    Var_108 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_108, 0) = ((MR_Box) (RowStartRegLval_53));
  }
  {
    MainRowSelect_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MainRowSelect_54, 0) = ((MR_Box) (Var_108));
  }
  ll_backend__lookup_switch__acquire_and_setup_lookup_base_reg_7_p_0(MainTableDataId_49, EndBranch_22, MainRowSelect_54, &BaseRegLval_55, &SetBaseRegCode_56, STATE_VARIABLE_CLD_0_63, &STATE_VARIABLE_CLD_1_109);
  {
    Var_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_110, 0) = ((MR_Box) (OneSolnCaseCount_45));
    MR_hl_field(0, Var_110, 1) = ((MR_Box) ((MR_Integer) 1));
  }
  {
    Var_115 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_115, 0) = ((MR_Box) (SeveralSolnsCaseCount_46));
    MR_hl_field(0, Var_115, 1) = ((MR_Box) ((MR_Integer) 2));
  }
  {
    Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_111, 0) = ((MR_Box) (Var_115));
    MR_hl_field(1, Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ll_backend__lookup_switch__generate_multi_soln_table_lookup_code_15_p_0(CaseConstsSeveralLlds_15, Var_110, Var_111, NumPrevColumns_36, OutVars_18, EndLabel_21, BaseRegLval_55, LaterTableAddrRval_52, EndBranch_22, &LookupResultsCode_57, STATE_VARIABLE_MaybeEnd_0_59, STATE_VARIABLE_MaybeEnd_60, STATE_VARIABLE_CI_3_105, STATE_VARIABLE_CI_62, STATE_VARIABLE_CLD_1_109);
  MatchCode_58 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetBaseRegCode_56, LookupResultsCode_57);
  Var_119 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
  ll_backend__string_switch__generate_string_hash_switch_search_13_p_0(HashSwitchInfo_27, VarRval_16, MainTableAddrRval_51, ArrayElemType_39, NumColumns_35, HashOp_30, HashMask_32, NumCollisions_31, EndLabel_21, (MR_String) "multi soln lookup", Var_119, MatchCode_58, Code_23);
}

static void MR_CALL 
ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_15_p_0(
  MR_Integer Slot_16,
  MR_Integer TableSize_17,
  MR_Word HashSlotMap_18,
  MR_Word DummyOutRvals_19,
  MR_Integer NumOutVars_20,
  MR_Integer NumCollisions_21,
  MR_Word STATE_VARIABLE_MainRvalsCord_0_44,
  MR_Word * STATE_VARIABLE_MainRvalsCord_45,
  MR_Integer STATE_VARIABLE_LaterNextRow_0_46,
  MR_Word STATE_VARIABLE_LaterSolnRowsCord_0_47,
  MR_Word * STATE_VARIABLE_LaterSolnRowsCord_48,
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
      *STATE_VARIABLE_LaterSolnRowsCord_48 = STATE_VARIABLE_LaterSolnRowsCord_0_47;
      *STATE_VARIABLE_MainRvalsCord_45 = STATE_VARIABLE_MainRvalsCord_0_44;
    }
    else
    {
      MR_Word MainRowRvals_36;
      MR_Integer STATE_VARIABLE_OneSolnCaseCount_1_55;
      MR_Integer STATE_VARIABLE_SeveralSolnsCaseCount_1_61;
      MR_Integer STATE_VARIABLE_LaterNextRow_1_70;
      MR_Word STATE_VARIABLE_LaterSolnRowsCord_1_71;
      MR_Word STATE_VARIABLE_MainRvalsCord_1_81;
      MR_Integer Var_82;
      MR_Word SlotInfo_27;
      MR_Box conv0_SlotInfo_27;
      MR_Integer next_value_of_Slot_16;
      MR_Word next_value_of_STATE_VARIABLE_MainRvalsCord_0_44;
      MR_Integer next_value_of_STATE_VARIABLE_LaterNextRow_0_46;
      MR_Word next_value_of_STATE_VARIABLE_LaterSolnRowsCord_0_47;
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
        MR_String String_28 = ((MR_String) ((MR_hl_field(0, SlotInfo_27, 0))));
        MR_Integer Next_29 = ((MR_Integer) ((MR_hl_field(0, SlotInfo_27, 1))));
        MR_Word Soln_30 = ((MR_Word) ((MR_hl_field(0, SlotInfo_27, 2))));
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
          MR_Word OutVarRvals_33 = ((MR_Word) ((MR_hl_field(0, Soln_30, 0))));
          MR_Word ZeroRval_34;
          MR_Word MainRowTail_35;
          MR_Word Var_59;

          STATE_VARIABLE_OneSolnCaseCount_1_55 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_OneSolnCaseCount_0_49 + (MR_Unsigned) 1);
          ZeroRval_34 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[13]));
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
              MainRowRvals_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MainRowRvals_36, 0) = ((MR_Box) (StringRval_31));
              MR_hl_field(1, MainRowRvals_36, 1) = ((MR_Box) (MainRowTail_35));
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
              MainRowRvals_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MainRowRvals_36, 0) = ((MR_Box) (StringRval_31));
              MR_hl_field(1, MainRowRvals_36, 1) = ((MR_Box) (Var_60));
            }
          }
          STATE_VARIABLE_LaterNextRow_1_70 = STATE_VARIABLE_LaterNextRow_0_46;
          STATE_VARIABLE_LaterSolnRowsCord_1_71 = STATE_VARIABLE_LaterSolnRowsCord_0_47;
          STATE_VARIABLE_SeveralSolnsCaseCount_1_61 = STATE_VARIABLE_SeveralSolnsCaseCount_0_51;
        }
        else
        {
          MR_Word FirstSolnRvals_37 = ((MR_Word) ((MR_hl_field(1, Soln_30, 0))));
          MR_Word LaterSolns_38 = ((MR_Word) ((MR_hl_field(1, Soln_30, 1))));
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

          STATE_VARIABLE_SeveralSolnsCaseCount_1_61 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SeveralSolnsCaseCount_0_51 + (MR_Unsigned) 1);
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
              MainRowRvals_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MainRowRvals_36, 0) = ((MR_Box) (StringRval_31));
              MR_hl_field(1, MainRowRvals_36, 1) = ((MR_Box) (MainRowTail_88));
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
              MainRowRvals_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MainRowRvals_36, 0) = ((MR_Box) (StringRval_31));
              MR_hl_field(1, MainRowRvals_36, 1) = ((MR_Box) (Var_69));
            }
          }
          STATE_VARIABLE_LaterNextRow_1_70 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LaterNextRow_0_46 + (MR_Unsigned) NumLaterSolns_39);
          Var_72 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), LaterSolns_38);
          STATE_VARIABLE_LaterSolnRowsCord_1_71 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), STATE_VARIABLE_LaterSolnRowsCord_0_47, Var_72);
          STATE_VARIABLE_OneSolnCaseCount_1_55 = STATE_VARIABLE_OneSolnCaseCount_0_49;
        }
      }
      else
      {
        MR_Word Var_79;
        MR_Word StringRval_89 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[13]));
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
            MainRowRvals_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MainRowRvals_36, 0) = ((MR_Box) (StringRval_89));
            MR_hl_field(1, MainRowRvals_36, 1) = ((MR_Box) (MainRowTail_92));
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
            MainRowRvals_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MainRowRvals_36, 0) = ((MR_Box) (StringRval_89));
            MR_hl_field(1, MainRowRvals_36, 1) = ((MR_Box) (Var_80));
          }
        }
        STATE_VARIABLE_SeveralSolnsCaseCount_1_61 = STATE_VARIABLE_SeveralSolnsCaseCount_0_51;
        STATE_VARIABLE_OneSolnCaseCount_1_55 = STATE_VARIABLE_OneSolnCaseCount_0_49;
        STATE_VARIABLE_LaterSolnRowsCord_1_71 = STATE_VARIABLE_LaterSolnRowsCord_0_47;
        STATE_VARIABLE_LaterNextRow_1_70 = STATE_VARIABLE_LaterNextRow_0_46;
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), ((MR_Box) (MainRowRvals_36)), STATE_VARIABLE_MainRvalsCord_0_44, &STATE_VARIABLE_MainRvalsCord_1_81);
      Var_82 = (MR_Integer) ((MR_Unsigned) Slot_16 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Slot_16 = Var_82;
      next_value_of_STATE_VARIABLE_MainRvalsCord_0_44 = STATE_VARIABLE_MainRvalsCord_1_81;
      next_value_of_STATE_VARIABLE_LaterNextRow_0_46 = STATE_VARIABLE_LaterNextRow_1_70;
      next_value_of_STATE_VARIABLE_LaterSolnRowsCord_0_47 = STATE_VARIABLE_LaterSolnRowsCord_1_71;
      next_value_of_STATE_VARIABLE_OneSolnCaseCount_0_49 = STATE_VARIABLE_OneSolnCaseCount_1_55;
      next_value_of_STATE_VARIABLE_SeveralSolnsCaseCount_0_51 = STATE_VARIABLE_SeveralSolnsCaseCount_1_61;
      Slot_16 = next_value_of_Slot_16;
      STATE_VARIABLE_MainRvalsCord_0_44 = next_value_of_STATE_VARIABLE_MainRvalsCord_0_44;
      STATE_VARIABLE_LaterNextRow_0_46 = next_value_of_STATE_VARIABLE_LaterNextRow_0_46;
      STATE_VARIABLE_LaterSolnRowsCord_0_47 = next_value_of_STATE_VARIABLE_LaterSolnRowsCord_0_47;
      STATE_VARIABLE_OneSolnCaseCount_0_49 = next_value_of_STATE_VARIABLE_OneSolnCaseCount_0_49;
      STATE_VARIABLE_SeveralSolnsCaseCount_0_51 = next_value_of_STATE_VARIABLE_SeveralSolnsCaseCount_0_51;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_p_0_1(
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
ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_p_0(
  MR_Word VarRval_14,
  MR_Word CaseValues_15,
  MR_Word OutVars_16,
  MR_Word OutTypes_17,
  MR_Word CanFail_18,
  MR_Word EndLabel_19,
  MR_Word EndBranch_20,
  MR_Word * Code_21,
  MR_Word STATE_VARIABLE_MaybeEnd_0_49,
  MR_Word * STATE_VARIABLE_MaybeEnd_50,
  MR_Word STATE_VARIABLE_CI_0_51,
  MR_Word * STATE_VARIABLE_CI_52,
  MR_Word CLD_24)
{
  MR_bool succeeded;
  MR_Word HashSwitchInfo_25;
  MR_Integer TableSize_26;
  MR_Word HashSlotsMap_27;
  MR_Word HashOp_28;
  MR_Integer NumCollisions_29;
  MR_Integer HashMask_30;
  MR_Integer NumOutVars_31;
  MR_Word OutElemTypes_32;
  MR_Word DummyOutRvals_33;
  MR_Integer NumPrevColumns_34;
  MR_Integer NumColumns_35;
  MR_Word ArrayElemTypes_36;
  MR_Word MainRowTypes_37;
  MR_Word ArrayElemType_38;
  MR_Word MainTableRvalsCord_39;
  MR_Word MainTableRvals_40;
  MR_Word MainTableDataId_41;
  MR_Word MainTableAddrRval_42;
  MR_Word LookupCode_43;
  MR_Word LookupGotoEndCode_48;
  MR_Word STATE_VARIABLE_CI_1_53;
  MR_Word Var_70;
  MR_Word Var_72;
  MR_Word Var_77;
  MR_Word SlotReg_93;
  MR_Word RowStartReg_94;
  MR_Word StringReg_95;
  MR_Word LoopStartLabel_96;
  MR_Word FailLabel_97;
  MR_Word NoMatchLabel_98;
  MR_Word BranchStart_99;
  MR_Word FailCode_100;
  MR_Word STATE_VARIABLE_CLD_1_102;
  MR_Word STATE_VARIABLE_CLD_2_104;
  MR_Word STATE_VARIABLE_CLD_3_106;
  MR_Word STATE_VARIABLE_CLD_4_107;
  MR_Word STATE_VARIABLE_CLD_5_108;
  MR_Word STATE_VARIABLE_CLD_6_109;
  MR_Word STATE_VARIABLE_CI_1_110;
  MR_Word STATE_VARIABLE_CI_2_111;

  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &SlotReg_93, CLD_24, &STATE_VARIABLE_CLD_1_102);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &RowStartReg_94, STATE_VARIABLE_CLD_1_102, &STATE_VARIABLE_CLD_2_104);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &StringReg_95, STATE_VARIABLE_CLD_2_104, &STATE_VARIABLE_CLD_3_106);
  ll_backend__code_loc_dep__release_reg_3_p_0(SlotReg_93, STATE_VARIABLE_CLD_3_106, &STATE_VARIABLE_CLD_4_107);
  ll_backend__code_loc_dep__release_reg_3_p_0(RowStartReg_94, STATE_VARIABLE_CLD_4_107, &STATE_VARIABLE_CLD_5_108);
  ll_backend__code_loc_dep__release_reg_3_p_0(StringReg_95, STATE_VARIABLE_CLD_5_108, &STATE_VARIABLE_CLD_6_109);
  ll_backend__code_info__get_next_label_3_p_0(&LoopStartLabel_96, STATE_VARIABLE_CI_0_51, &STATE_VARIABLE_CI_1_110);
  ll_backend__code_info__get_next_label_3_p_0(&FailLabel_97, STATE_VARIABLE_CI_1_110, &STATE_VARIABLE_CI_2_111);
  ll_backend__code_info__get_next_label_3_p_0(&NoMatchLabel_98, STATE_VARIABLE_CI_2_111, &STATE_VARIABLE_CI_1_53);
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_6_109, &BranchStart_99);
  switch (CanFail_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ll_backend__code_loc_dep__generate_failure_3_p_0(&FailCode_100, STATE_VARIABLE_CI_1_53, STATE_VARIABLE_CLD_6_109);
      break;
    case (MR_Integer) 1:
      FailCode_100 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[28])));
      break;
  }
  {
    HashSwitchInfo_25 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HashSwitchInfo_25, 0) = ((MR_Box) (SlotReg_93));
    MR_hl_field(0, HashSwitchInfo_25, 1) = ((MR_Box) (RowStartReg_94));
    MR_hl_field(0, HashSwitchInfo_25, 2) = ((MR_Box) (StringReg_95));
    MR_hl_field(0, HashSwitchInfo_25, 3) = ((MR_Box) (LoopStartLabel_96));
    MR_hl_field(0, HashSwitchInfo_25, 4) = ((MR_Box) (NoMatchLabel_98));
    MR_hl_field(0, HashSwitchInfo_25, 5) = ((MR_Box) (FailLabel_97));
    MR_hl_field(0, HashSwitchInfo_25, 6) = ((MR_Box) (BranchStart_99));
    MR_hl_field(0, HashSwitchInfo_25, 7) = ((MR_Box) (FailCode_100));
  }
  backend_libs__string_switch_util__construct_string_hash_cases_6_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), CaseValues_15, (MR_Integer) 1, &TableSize_26, &HashSlotsMap_27, &HashOp_28, &NumCollisions_29);
  HashMask_30 = (MR_Integer) ((MR_Unsigned) TableSize_26 - (MR_Unsigned) 1);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[5]), OutVars_16, &NumOutVars_31);
  mercury__list__duplicate_3_p_0((MR_Word) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0), NumOutVars_31, ((MR_Box) ((MR_Integer) 2)), &OutElemTypes_32);
  DummyOutRvals_33 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__string_switch_scalar_common_2[6]), OutTypes_17);
  succeeded = (NumCollisions_29 == (MR_Integer) 0);
  if (succeeded)
  {
    NumPrevColumns_34 = (MR_Integer) 1;
    NumColumns_35 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) NumOutVars_31);
    {
      ArrayElemTypes_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArrayElemTypes_36, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, ArrayElemTypes_36, 1) = ((MR_Box) (OutElemTypes_32));
    }
    {
      MainRowTypes_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MainRowTypes_37, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, MainRowTypes_37, 1) = ((MR_Box) (OutTypes_17));
    }
  }
  else
  {
    MR_Word Var_63;
    MR_Word Var_66;

    NumPrevColumns_34 = (MR_Integer) 2;
    NumColumns_35 = (MR_Integer) ((MR_Unsigned) 2 + (MR_Unsigned) NumOutVars_31);
    {
      Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_63, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, Var_63, 1) = ((MR_Box) (OutElemTypes_32));
    }
    {
      ArrayElemTypes_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArrayElemTypes_36, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, ArrayElemTypes_36, 1) = ((MR_Box) (Var_63));
    }
    {
      Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(2, &ll_backend__string_switch_scalar_common_3[2])));
      MR_hl_field(1, Var_66, 1) = ((MR_Box) (OutTypes_17));
    }
    {
      MainRowTypes_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MainRowTypes_37, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, MainRowTypes_37, 1) = ((MR_Box) (Var_66));
    }
  }
  {
    ArrayElemType_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArrayElemType_38, 0) = ((MR_Box) (ArrayElemTypes_36));
  }
  Var_70 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]));
  ll_backend__string_switch__construct_string_hash_simple_lookup_vector_7_p_0((MR_Integer) 0, TableSize_26, HashSlotsMap_27, NumCollisions_29, DummyOutRvals_33, Var_70, &MainTableRvalsCord_39);
  MainTableRvals_40 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), MainTableRvalsCord_39);
  ll_backend__code_info__add_vector_static_cell_5_p_0(MainRowTypes_37, MainTableRvals_40, &MainTableDataId_41, STATE_VARIABLE_CI_1_53, STATE_VARIABLE_CI_52);
  {
    Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_72, 1) = ((MR_Box) (MainTableDataId_41));
  }
  {
    MainTableAddrRval_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MainTableAddrRval_42, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MainTableAddrRval_42, 1) = ((MR_Box) (Var_72));
  }
  if ((OutVars_16 == (MR_Word) ((MR_Unsigned) 0U)))
    ll_backend__lookup_switch__generate_single_soln_table_lookup_code_no_vars_5_p_0(EndBranch_20, &LookupCode_43, STATE_VARIABLE_MaybeEnd_0_49, STATE_VARIABLE_MaybeEnd_50, CLD_24);
  else
  {
    MR_Word RowStartRegLval_46 = ((MR_Word) ((MR_hl_field(0, HashSwitchInfo_25, 1))));
    MR_Word MainRowSelect_47;
    MR_Word Var_74;

    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_74, 0) = ((MR_Box) (RowStartRegLval_46));
    }
    {
      MainRowSelect_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MainRowSelect_47, 0) = ((MR_Box) (Var_74));
    }
    ll_backend__lookup_switch__generate_single_soln_table_lookup_code_some_vars_10_p_0(MainTableDataId_41, MainRowSelect_47, NumPrevColumns_34, OutVars_16, EndBranch_20, &LookupCode_43, STATE_VARIABLE_MaybeEnd_0_49, STATE_VARIABLE_MaybeEnd_50, *STATE_VARIABLE_CI_52, CLD_24);
  }
  ll_backend__lookup_switch__append_goto_end_3_p_0(EndLabel_19, LookupCode_43, &LookupGotoEndCode_48);
  Var_77 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
  ll_backend__string_switch__generate_string_hash_switch_search_13_p_0(HashSwitchInfo_25, VarRval_14, MainTableAddrRval_42, ArrayElemType_38, NumColumns_35, HashOp_28, HashMask_30, NumCollisions_29, EndLabel_19, (MR_String) "single soln lookup", Var_77, LookupGotoEndCode_48, Code_21);
}

static void MR_CALL 
ll_backend__string_switch__construct_string_hash_simple_lookup_vector_7_p_0(
  MR_Integer Slot_8,
  MR_Integer TableSize_9,
  MR_Word HashSlotMap_10,
  MR_Integer NumCollisions_11,
  MR_Word DummyOutRvals_12,
  MR_Word STATE_VARIABLE_RvalsCord_0_21,
  MR_Word * STATE_VARIABLE_RvalsCord_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Slot_8 == TableSize_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_RvalsCord_22 = STATE_VARIABLE_RvalsCord_0_21;
    else
    {
      MR_Word OutVarRvals_17;
      MR_Word NextSlotRval_18;
      MR_Word StringRval_19;
      MR_Word RowRvals_20;
      MR_Word STATE_VARIABLE_RvalsCord_1_30;
      MR_Integer Var_31;
      MR_Word SlotInfo_14;
      MR_Box conv0_SlotInfo_14;
      MR_Integer next_value_of_Slot_8;
      MR_Word next_value_of_STATE_VARIABLE_RvalsCord_0_21;

      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[8]), HashSlotMap_10, Slot_8, &conv0_SlotInfo_14);
      if (succeeded)
      {
        SlotInfo_14 = ((MR_Word) (conv0_SlotInfo_14));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_String String_15 = ((MR_String) ((MR_hl_field(0, SlotInfo_14, 0))));
        MR_Integer Next_16 = ((MR_Integer) ((MR_hl_field(0, SlotInfo_14, 1))));
        MR_Word Var_23;
        MR_Word Var_24;

        OutVarRvals_17 = ((MR_Word) ((MR_hl_field(0, SlotInfo_14, 2))));
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
        StringRval_19 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[13]));
        NextSlotRval_18 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[23]));
        OutVarRvals_17 = DummyOutRvals_12;
      }
      succeeded = (NumCollisions_11 == (MR_Integer) 0);
      if (succeeded)
        {
          RowRvals_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RowRvals_20, 0) = ((MR_Box) (StringRval_19));
          MR_hl_field(1, RowRvals_20, 1) = ((MR_Box) (OutVarRvals_17));
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
          RowRvals_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RowRvals_20, 0) = ((MR_Box) (StringRval_19));
          MR_hl_field(1, RowRvals_20, 1) = ((MR_Box) (Var_29));
        }
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), ((MR_Box) (RowRvals_20)), STATE_VARIABLE_RvalsCord_0_21, &STATE_VARIABLE_RvalsCord_1_30);
      Var_31 = (MR_Integer) ((MR_Unsigned) Slot_8 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Slot_8 = Var_31;
      next_value_of_STATE_VARIABLE_RvalsCord_0_21 = STATE_VARIABLE_RvalsCord_1_30;
      Slot_8 = next_value_of_Slot_8;
      STATE_VARIABLE_RvalsCord_0_21 = next_value_of_STATE_VARIABLE_RvalsCord_0_21;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__string_switch__generate_string_hash_jump_switch_12_p_0(
  MR_Word VarRval_13,
  MR_String VarName_14,
  MR_Word TaggedCases_15,
  MR_Word CodeModel_16,
  MR_Word CanFail_17,
  MR_Word SwitchGoalInfo_18,
  MR_Word EndLabel_19,
  MR_Word * MaybeEnd_20,
  MR_Word * Code_21,
  MR_Word STATE_VARIABLE_CI_0_51,
  MR_Word * STATE_VARIABLE_CI_52,
  MR_Word CLD_23)
{
  MR_bool succeeded;
  MR_Word HashSwitchInfo_24;
  MR_Word BranchStart_25;
  MR_Word Params_26;
  MR_Word CaseLabelMap0_27;
  MR_Word StrsLabels_28;
  MR_Word CaseLabelMap_29;
  MR_Integer TableSize_30;
  MR_Word HashSlotsMap_31;
  MR_Word HashOp_32;
  MR_Integer NumCollisions_33;
  MR_Integer HashMask_34;
  MR_Word FailLabel_35;
  MR_Word MainTableRvalsCord_36;
  MR_Word MaybeTargetsCord_37;
  MR_Word MainTableRvals_38;
  MR_Word MaybeTargets_39;
  MR_Integer NumColumns_40;
  MR_Word MainRowTypes_41;
  MR_Word ArrayElemTypes_42;
  MR_Word MainTableDataId_43;
  MR_Word MainTableAddrRval_44;
  MR_Word ArrayElemType_45;
  MR_Word SlotReg_46;
  MR_Integer MaxIndex_47;
  MR_Word MatchCode_48;
  MR_Word CasesCode_49;
  MR_Word STATE_VARIABLE_CI_1_53;
  MR_Word STATE_VARIABLE_CI_2_56;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_76;
  MR_Integer Var_77;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_50;

  ll_backend__string_switch__init_string_hash_switch_info_5_p_0(CanFail_17, &HashSwitchInfo_24, STATE_VARIABLE_CI_0_51, &STATE_VARIABLE_CI_1_53, CLD_23);
  BranchStart_25 = ((MR_Word) ((MR_hl_field(0, HashSwitchInfo_24, 6))));
  {
    Params_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_26, 0) = ((MR_Box) (VarName_14));
    MR_hl_field(0, Params_26, 1) = ((MR_Box) (SwitchGoalInfo_18));
    MR_hl_field(0, Params_26, 2) = (MR_Box) ((MR_Unsigned) (CodeModel_16));
    MR_hl_field(0, Params_26, 3) = ((MR_Box) (BranchStart_25));
    MR_hl_field(0, Params_26, 4) = ((MR_Box) (EndLabel_19));
  }
  mercury__map__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0), &CaseLabelMap0_27);
  ll_backend__string_switch__represent_tagged_cases_in_string_hash_switch_10_p_0(Params_26, TaggedCases_15, (MR_Word) ((MR_Unsigned) 0U), &StrsLabels_28, CaseLabelMap0_27, &CaseLabelMap_29, (MR_Word) ((MR_Unsigned) 0U), MaybeEnd_20, STATE_VARIABLE_CI_1_53, &STATE_VARIABLE_CI_2_56);
  backend_libs__string_switch_util__construct_string_hash_cases_6_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), StrsLabels_28, (MR_Integer) 1, &TableSize_30, &HashSlotsMap_31, &HashOp_32, &NumCollisions_33);
  HashMask_34 = (MR_Integer) ((MR_Unsigned) TableSize_30 - (MR_Unsigned) 1);
  FailLabel_35 = ((MR_Word) ((MR_hl_field(0, HashSwitchInfo_24, 5))));
  Var_60 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]));
  Var_61 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[2]));
  ll_backend__string_switch__construct_string_hash_jump_vectors_9_p_0((MR_Integer) 0, TableSize_30, HashSlotsMap_31, FailLabel_35, NumCollisions_33, Var_60, &MainTableRvalsCord_36, Var_61, &MaybeTargetsCord_37);
  MainTableRvals_38 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), MainTableRvalsCord_36);
  MaybeTargets_39 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[2]), MaybeTargetsCord_37);
  succeeded = (NumCollisions_33 == (MR_Integer) 0);
  if (succeeded)
  {
    NumColumns_40 = (MR_Integer) 1;
    MainRowTypes_41 = (MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[14]));
    ArrayElemTypes_42 = (MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[15]));
  }
  else
  {
    NumColumns_40 = (MR_Integer) 2;
    MainRowTypes_41 = (MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[17]));
    ArrayElemTypes_42 = (MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[19]));
  }
  ll_backend__code_info__add_vector_static_cell_5_p_0(MainRowTypes_41, MainTableRvals_38, &MainTableDataId_43, STATE_VARIABLE_CI_2_56, STATE_VARIABLE_CI_52);
  {
    Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_76, 1) = ((MR_Box) (MainTableDataId_43));
  }
  {
    MainTableAddrRval_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MainTableAddrRval_44, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MainTableAddrRval_44, 1) = ((MR_Box) (Var_76));
  }
  {
    ArrayElemType_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArrayElemType_45, 0) = ((MR_Box) (ArrayElemTypes_42));
  }
  SlotReg_46 = ((MR_Word) ((MR_hl_field(0, HashSwitchInfo_24, 0))));
  Var_77 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[2]), MaybeTargets_39);
  MaxIndex_47 = (MR_Integer) ((MR_Unsigned) Var_77 - (MR_Unsigned) 1);
  {
    Var_82 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_82, 0) = ((MR_Box) (SlotReg_46));
  }
  {
    Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_83, 0) = ((MR_Box) (MaxIndex_47));
  }
  {
    Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, Var_81, 1) = ((MR_Box) (Var_82));
    MR_hl_field(3, Var_81, 2) = ((MR_Box) (Var_83));
    MR_hl_field(3, Var_81, 3) = ((MR_Box) (MaybeTargets_39));
  }
  {
    Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_80, 0) = ((MR_Box) (Var_81));
    MR_hl_field(0, Var_80, 1) = ((MR_Box) ((MR_String) "jump to the corresponding code"));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  MatchCode_48 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_79);
  ll_backend__switch_case__add_not_yet_included_cases_3_p_0(&CasesCode_49, CaseLabelMap_29, &Var_50);
  ll_backend__string_switch__generate_string_hash_switch_search_13_p_0(HashSwitchInfo_24, VarRval_13, MainTableAddrRval_44, ArrayElemType_45, NumColumns_40, HashOp_32, HashMask_34, NumCollisions_33, EndLabel_19, (MR_String) "jump", CasesCode_49, MatchCode_48, Code_21);
}

static void MR_CALL 
ll_backend__string_switch__generate_string_hash_switch_search_13_p_0(
  MR_Word Info_14,
  MR_Word VarRval_15,
  MR_Word TableAddrRval_16,
  MR_Word ArrayElemType_17,
  MR_Integer NumColumns_18,
  MR_Word HashOp_19,
  MR_Integer HashMask_20,
  MR_Integer NumCollisions_21,
  MR_Word EndLabel_22,
  MR_String KindStr_23,
  MR_Word CasesCode_24,
  MR_Word MatchCode_25,
  MR_Word * Code_26)
{
  MR_bool succeeded = (NumCollisions_21 == (MR_Integer) 0);
  MR_Word SlotReg_27 = ((MR_Word) ((MR_hl_field(0, Info_14, 0))));
  MR_Word RowStartReg_28 = ((MR_Word) ((MR_hl_field(0, Info_14, 1))));
  MR_Word StringReg_29 = ((MR_Word) ((MR_hl_field(0, Info_14, 2))));
  MR_Word LoopStartLabel_30 = ((MR_Word) ((MR_hl_field(0, Info_14, 3))));
  MR_Word NoMatchLabel_31 = ((MR_Word) ((MR_hl_field(0, Info_14, 4))));
  MR_Word FailLabel_32 = ((MR_Word) ((MR_hl_field(0, Info_14, 5))));
  MR_Word FailCode_33 = ((MR_Word) ((MR_hl_field(0, Info_14, 7))));
  MR_Word HashSearchCode_36;
  MR_Word MainCode_37;
  MR_String SwitchKindStr_38;
  MR_Word Var_188;
  MR_String Var_246;

  if (succeeded)
  {
    MR_Word BaseReg_34;
    MR_Word MultiplyInstrs_35;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_75;
    MR_Word Var_79;
    MR_Word Var_83;
    MR_Word Var_87;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;

    succeeded = (NumColumns_18 == (MR_Integer) 1);
    if (succeeded)
    {
      BaseReg_34 = SlotReg_27;
      MultiplyInstrs_35 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;

      BaseReg_34 = RowStartReg_28;
      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_45, 0) = ((MR_Box) (SlotReg_27));
      }
      {
        Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_47, 0) = ((MR_Box) (NumColumns_18));
      }
      {
        Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_46, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, Var_41, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[4])));
        MR_hl_field(3, Var_41, 2) = ((MR_Box) (Var_45));
        MR_hl_field(3, Var_41, 3) = ((MR_Box) (Var_46));
      }
      {
        Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_40, 1) = ((MR_Box) (RowStartReg_28));
        MR_hl_field(3, Var_40, 2) = ((MR_Box) (Var_41));
      }
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_39, 0) = ((MR_Box) (Var_40));
        MR_hl_field(0, Var_39, 1) = ((MR_Box) ((MR_String) "find the start of the row"));
      }
      {
        MultiplyInstrs_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MultiplyInstrs_35, 0) = ((MR_Box) (Var_39));
        MR_hl_field(1, MultiplyInstrs_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    {
      Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_57, 1) = ((MR_Box) (HashOp_19));
      MR_hl_field(3, Var_57, 2) = ((MR_Box) (VarRval_15));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (HashMask_20));
    }
    {
      Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_58, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_54, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[24])));
      MR_hl_field(3, Var_54, 2) = ((MR_Box) (Var_57));
      MR_hl_field(3, Var_54, 3) = ((MR_Box) (Var_58));
    }
    {
      Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_53, 1) = ((MR_Box) (SlotReg_27));
      MR_hl_field(3, Var_53, 2) = ((MR_Box) (Var_54));
    }
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(0, Var_52, 1) = ((MR_Box) ((MR_String) "compute the hash value of the input string"));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) (MultiplyInstrs_35));
    }
    Var_50 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_51);
    {
      Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_67, 1) = ((MR_Box) (ArrayElemType_17));
    }
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_68, 0) = ((MR_Box) (BaseReg_34));
    }
    {
      Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_66, 1) = ((MR_Box) (Var_67));
      MR_hl_field(3, Var_66, 2) = ((MR_Box) (TableAddrRval_16));
      MR_hl_field(3, Var_66, 3) = ((MR_Box) (Var_68));
    }
    {
      Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_65, 1) = ((MR_Box) (StringReg_29));
      MR_hl_field(3, Var_65, 2) = ((MR_Box) (Var_66));
    }
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_64, 0) = ((MR_Box) (Var_65));
      MR_hl_field(0, Var_64, 1) = ((MR_Box) ((MR_String) "lookup the string for this hash slot"));
    }
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_79, 0) = ((MR_Box) (StringReg_29));
    }
    {
      Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_75, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[22])));
      MR_hl_field(3, Var_75, 2) = ((MR_Box) (Var_79));
      MR_hl_field(3, Var_75, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[13])));
    }
    {
      Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_83, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[25])));
      MR_hl_field(3, Var_83, 2) = ((MR_Box) (Var_79));
      MR_hl_field(3, Var_83, 3) = ((MR_Box) (VarRval_15));
    }
    {
      Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_73, 2) = ((MR_Box) (Var_75));
      MR_hl_field(3, Var_73, 3) = ((MR_Box) (Var_83));
    }
    {
      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_87, 0) = ((MR_Box) (FailLabel_32));
    }
    {
      Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_72, 1) = ((MR_Box) (Var_73));
      MR_hl_field(3, Var_72, 2) = ((MR_Box) (Var_87));
    }
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_71, 0) = ((MR_Box) (Var_72));
      MR_hl_field(0, Var_71, 1) = ((MR_Box) ((MR_String) "did we find a match\? nofulljump"));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
      MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_70));
    }
    Var_62 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_63);
    {
      Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_94, 1) = ((MR_Box) (FailLabel_32));
    }
    {
      Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_93, 0) = ((MR_Box) (Var_94));
      MR_hl_field(0, Var_93, 1) = ((MR_Box) ((MR_String) "handle the failure of the table search"));
    }
    {
      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
      MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_91 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_92);
    Var_90 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MatchCode_25, Var_91);
    Var_61 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_62, Var_90);
    HashSearchCode_36 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_50, Var_61);
  }
  else
  {
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word Var_135;
    MR_Word Var_139;
    MR_Word Var_143;
    MR_Word Var_147;
    MR_Word Var_150;
    MR_Word Var_151;
    MR_Word Var_152;
    MR_Word Var_153;
    MR_Word Var_154;
    MR_Word Var_156;
    MR_Word Var_157;
    MR_Word Var_158;
    MR_Word Var_159;
    MR_Word Var_161;
    MR_Word Var_170;
    MR_Word Var_171;
    MR_Word Var_172;
    MR_Word Var_173;
    MR_Word Var_181;
    MR_Word Var_183;
    MR_Word Var_184;
    MR_Word Var_185;

    {
      Var_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_104, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_104, 1) = ((MR_Box) (HashOp_19));
      MR_hl_field(3, Var_104, 2) = ((MR_Box) (VarRval_15));
    }
    {
      Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_106, 0) = ((MR_Box) (HashMask_20));
    }
    {
      Var_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_105, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_105, 1) = ((MR_Box) (Var_106));
    }
    {
      Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_101, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[24])));
      MR_hl_field(3, Var_101, 2) = ((MR_Box) (Var_104));
      MR_hl_field(3, Var_101, 3) = ((MR_Box) (Var_105));
    }
    {
      Var_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_100, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_100, 1) = ((MR_Box) (SlotReg_27));
      MR_hl_field(3, Var_100, 2) = ((MR_Box) (Var_101));
    }
    {
      Var_99 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_99, 0) = ((MR_Box) (Var_100));
      MR_hl_field(0, Var_99, 1) = ((MR_Box) ((MR_String) "compute the hash value of the input string"));
    }
    {
      Var_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_110, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_110, 1) = ((MR_Box) (LoopStartLabel_30));
    }
    {
      Var_109 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_109, 0) = ((MR_Box) (Var_110));
      MR_hl_field(0, Var_109, 1) = ((MR_Box) ((MR_String) "begin hash chain loop, nofulljump"));
    }
    {
      Var_119 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_119, 0) = ((MR_Box) (SlotReg_27));
    }
    {
      Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_121, 0) = ((MR_Box) (NumColumns_18));
    }
    {
      Var_120 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_120, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_120, 1) = ((MR_Box) (Var_121));
    }
    {
      Var_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_115, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_115, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[4])));
      MR_hl_field(3, Var_115, 2) = ((MR_Box) (Var_119));
      MR_hl_field(3, Var_115, 3) = ((MR_Box) (Var_120));
    }
    {
      Var_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_114, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_114, 1) = ((MR_Box) (RowStartReg_28));
      MR_hl_field(3, Var_114, 2) = ((MR_Box) (Var_115));
    }
    {
      Var_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_113, 0) = ((MR_Box) (Var_114));
      MR_hl_field(0, Var_113, 1) = ((MR_Box) ((MR_String) "find the start of the row"));
    }
    {
      Var_127 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_127, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_127, 1) = ((MR_Box) (ArrayElemType_17));
    }
    {
      Var_128 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_128, 0) = ((MR_Box) (RowStartReg_28));
    }
    {
      Var_126 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_126, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_126, 1) = ((MR_Box) (Var_127));
      MR_hl_field(3, Var_126, 2) = ((MR_Box) (TableAddrRval_16));
      MR_hl_field(3, Var_126, 3) = ((MR_Box) (Var_128));
    }
    {
      Var_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_125, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_125, 1) = ((MR_Box) (StringReg_29));
      MR_hl_field(3, Var_125, 2) = ((MR_Box) (Var_126));
    }
    {
      Var_124 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_124, 0) = ((MR_Box) (Var_125));
      MR_hl_field(0, Var_124, 1) = ((MR_Box) ((MR_String) "lookup the string for this hash slot"));
    }
    {
      Var_139 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_139, 0) = ((MR_Box) (StringReg_29));
    }
    {
      Var_135 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_135, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_135, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[22])));
      MR_hl_field(3, Var_135, 2) = ((MR_Box) (Var_139));
      MR_hl_field(3, Var_135, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[13])));
    }
    {
      Var_143 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_143, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_143, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[25])));
      MR_hl_field(3, Var_143, 2) = ((MR_Box) (Var_139));
      MR_hl_field(3, Var_143, 3) = ((MR_Box) (VarRval_15));
    }
    {
      Var_133 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_133, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_133, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_133, 2) = ((MR_Box) (Var_135));
      MR_hl_field(3, Var_133, 3) = ((MR_Box) (Var_143));
    }
    {
      Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_147, 0) = ((MR_Box) (NoMatchLabel_31));
    }
    {
      Var_132 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_132, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_132, 1) = ((MR_Box) (Var_133));
      MR_hl_field(3, Var_132, 2) = ((MR_Box) (Var_147));
    }
    {
      Var_131 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_131, 0) = ((MR_Box) (Var_132));
      MR_hl_field(0, Var_131, 1) = ((MR_Box) ((MR_String) "did we find a match\? nofulljump"));
    }
    {
      Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_130, 0) = ((MR_Box) (Var_131));
      MR_hl_field(1, Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_123, 0) = ((MR_Box) (Var_124));
      MR_hl_field(1, Var_123, 1) = ((MR_Box) (Var_130));
    }
    {
      Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_112, 0) = ((MR_Box) (Var_113));
      MR_hl_field(1, Var_112, 1) = ((MR_Box) (Var_123));
    }
    {
      Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_108, 0) = ((MR_Box) (Var_109));
      MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_112));
    }
    {
      Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
      MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_108));
    }
    Var_97 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_98);
    {
      Var_154 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_154, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_154, 1) = ((MR_Box) (NoMatchLabel_31));
    }
    {
      Var_153 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_153, 0) = ((MR_Box) (Var_154));
      MR_hl_field(0, Var_153, 1) = ((MR_Box) ((MR_String) "no match yet, nofulljump"));
    }
    {
      Var_161 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_161, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_161, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[3])));
      MR_hl_field(3, Var_161, 2) = ((MR_Box) (Var_128));
      MR_hl_field(3, Var_161, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[21])));
    }
    {
      Var_159 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_159, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_159, 1) = ((MR_Box) (Var_127));
      MR_hl_field(3, Var_159, 2) = ((MR_Box) (TableAddrRval_16));
      MR_hl_field(3, Var_159, 3) = ((MR_Box) (Var_161));
    }
    {
      Var_158 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_158, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_158, 1) = ((MR_Box) (SlotReg_27));
      MR_hl_field(3, Var_158, 2) = ((MR_Box) (Var_159));
    }
    {
      Var_157 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_157, 0) = ((MR_Box) (Var_158));
      MR_hl_field(0, Var_157, 1) = ((MR_Box) ((MR_String) "get next slot in hash chain"));
    }
    {
      Var_173 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_173, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_173, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[12])));
      MR_hl_field(3, Var_173, 2) = ((MR_Box) (Var_119));
      MR_hl_field(3, Var_173, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[13])));
    }
    {
      Var_181 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_181, 0) = ((MR_Box) (LoopStartLabel_30));
    }
    {
      Var_172 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_172, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_172, 1) = ((MR_Box) (Var_173));
      MR_hl_field(3, Var_172, 2) = ((MR_Box) (Var_181));
    }
    {
      Var_171 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_171, 0) = ((MR_Box) (Var_172));
      MR_hl_field(0, Var_171, 1) = ((MR_Box) ((MR_String) "if not at the end of the chain, keep searching"));
    }
    {
      Var_185 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_185, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_185, 1) = ((MR_Box) (FailLabel_32));
    }
    {
      Var_184 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_184, 0) = ((MR_Box) (Var_185));
      MR_hl_field(0, Var_184, 1) = ((MR_Box) ((MR_String) "handle the failure of the table search"));
    }
    {
      Var_183 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_183, 0) = ((MR_Box) (Var_184));
      MR_hl_field(1, Var_183, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_170, 0) = ((MR_Box) (Var_171));
      MR_hl_field(1, Var_170, 1) = ((MR_Box) (Var_183));
    }
    {
      Var_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_156, 0) = ((MR_Box) (Var_157));
      MR_hl_field(1, Var_156, 1) = ((MR_Box) (Var_170));
    }
    {
      Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_152, 0) = ((MR_Box) (Var_153));
      MR_hl_field(1, Var_152, 1) = ((MR_Box) (Var_156));
    }
    Var_151 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_152);
    Var_150 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MatchCode_25, Var_151);
    HashSearchCode_36 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_97, Var_150);
  }
  Var_188 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_33, CasesCode_24);
  MainCode_37 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HashSearchCode_36, Var_188);
  Var_246 = mercury__string__f_43_43_2_f_0(KindStr_23, (MR_String) " switch");
  SwitchKindStr_38 = mercury__string__f_43_43_2_f_0((MR_String) "string hash ", Var_246);
  ll_backend__code_util__add_switch_kind_comment_and_end_label_4_p_0(SwitchKindStr_38, EndLabel_22, MainCode_37, Code_26);
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
  MR_Word STATE_VARIABLE_CLD_1_22;
  MR_Word STATE_VARIABLE_CLD_2_24;
  MR_Word STATE_VARIABLE_CLD_3_26;
  MR_Word STATE_VARIABLE_CLD_4_27;
  MR_Word STATE_VARIABLE_CLD_5_28;
  MR_Word STATE_VARIABLE_CLD_6_29;
  MR_Word STATE_VARIABLE_CI_1_30;
  MR_Word STATE_VARIABLE_CI_2_31;

  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &SlotReg_10, STATE_VARIABLE_CLD_0_20, &STATE_VARIABLE_CLD_1_22);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &RowStartReg_11, STATE_VARIABLE_CLD_1_22, &STATE_VARIABLE_CLD_2_24);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &StringReg_12, STATE_VARIABLE_CLD_2_24, &STATE_VARIABLE_CLD_3_26);
  ll_backend__code_loc_dep__release_reg_3_p_0(SlotReg_10, STATE_VARIABLE_CLD_3_26, &STATE_VARIABLE_CLD_4_27);
  ll_backend__code_loc_dep__release_reg_3_p_0(RowStartReg_11, STATE_VARIABLE_CLD_4_27, &STATE_VARIABLE_CLD_5_28);
  ll_backend__code_loc_dep__release_reg_3_p_0(StringReg_12, STATE_VARIABLE_CLD_5_28, &STATE_VARIABLE_CLD_6_29);
  ll_backend__code_info__get_next_label_3_p_0(&LoopStartLabel_13, STATE_VARIABLE_CI_0_18, &STATE_VARIABLE_CI_1_30);
  ll_backend__code_info__get_next_label_3_p_0(&FailLabel_14, STATE_VARIABLE_CI_1_30, &STATE_VARIABLE_CI_2_31);
  ll_backend__code_info__get_next_label_3_p_0(&NoMatchLabel_15, STATE_VARIABLE_CI_2_31, STATE_VARIABLE_CI_19);
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_6_29, &BranchStart_16);
  switch (CanFail_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ll_backend__code_loc_dep__generate_failure_3_p_0(&FailCode_17, *STATE_VARIABLE_CI_19, STATE_VARIABLE_CLD_6_29);
      break;
    case (MR_Integer) 1:
      FailCode_17 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[28])));
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
ll_backend__string_switch__represent_tagged_cases_in_string_hash_switch_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_StrsLabels_12;

  ll_backend__string_switch__record_label_for_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_StrsLabels_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_StrsLabels_12));
}

static void MR_CALL 
ll_backend__string_switch__represent_tagged_cases_in_string_hash_switch_10_p_0(
  MR_Word Params_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_StrsLabels_0_3,
  MR_Word * STATE_VARIABLE_StrsLabels_4,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_5,
  MR_Word * STATE_VARIABLE_CaseLabelMap_6,
  MR_Word STATE_VARIABLE_MaybeEnd_0_7,
  MR_Word * STATE_VARIABLE_MaybeEnd_8,
  MR_Word STATE_VARIABLE_CI_0_9,
  MR_Word * STATE_VARIABLE_CI_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CI_10 = STATE_VARIABLE_CI_0_9;
      *STATE_VARIABLE_MaybeEnd_8 = STATE_VARIABLE_MaybeEnd_0_7;
      *STATE_VARIABLE_CaseLabelMap_6 = STATE_VARIABLE_CaseLabelMap_0_5;
      *STATE_VARIABLE_StrsLabels_4 = STATE_VARIABLE_StrsLabels_0_3;
    }
    else
    {
      MR_Word TaggedCase_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word TaggedCases_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Label_31;
      MR_Word MainTaggedConsId_33;
      MR_Word OtherTaggedConsIds_34;
      MR_Word STATE_VARIABLE_CaseLabelMap_1_45;
      MR_Word STATE_VARIABLE_MaybeEnd_1_46;
      MR_Word STATE_VARIABLE_CI_1_47;
      MR_Word STATE_VARIABLE_StrsLabels_1_49;
      MR_Word Var_50;
      MR_Word STATE_VARIABLE_StrsLabels_2_51;
      MR_Box conv1_STATE_VARIABLE_StrsLabels_2_51;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_StrsLabels_0_3;
      MR_Word next_value_of_STATE_VARIABLE_CaseLabelMap_0_5;
      MR_Word next_value_of_STATE_VARIABLE_MaybeEnd_0_7;
      MR_Word next_value_of_STATE_VARIABLE_CI_0_9;

      ll_backend__switch_case__represent_tagged_case_for_llds_11_p_0(Params_1, TaggedCase_25, &Label_31, STATE_VARIABLE_CaseLabelMap_0_5, &STATE_VARIABLE_CaseLabelMap_1_45, STATE_VARIABLE_MaybeEnd_0_7, &STATE_VARIABLE_MaybeEnd_1_46, STATE_VARIABLE_CI_0_9, &STATE_VARIABLE_CI_1_47);
      MainTaggedConsId_33 = ((MR_Word) ((MR_hl_field(0, TaggedCase_25, 0))));
      OtherTaggedConsIds_34 = ((MR_Word) ((MR_hl_field(0, TaggedCase_25, 1))));
      ll_backend__string_switch__record_label_for_string_4_p_0(Label_31, MainTaggedConsId_33, STATE_VARIABLE_StrsLabels_0_3, &STATE_VARIABLE_StrsLabels_1_49);
      {
        Var_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_50, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_5[0]));
        MR_hl_field(0, Var_50, 1) = ((MR_Box) (ll_backend__string_switch__represent_tagged_cases_in_string_hash_switch_10_p_0_1));
        MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_50, 3) = ((MR_Box) (Label_31));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[7]), Var_50, OtherTaggedConsIds_34, ((MR_Box) (STATE_VARIABLE_StrsLabels_1_49)), &conv1_STATE_VARIABLE_StrsLabels_2_51);
      STATE_VARIABLE_StrsLabels_2_51 = ((MR_Word) (conv1_STATE_VARIABLE_StrsLabels_2_51));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TaggedCases_26;
      next_value_of_STATE_VARIABLE_StrsLabels_0_3 = STATE_VARIABLE_StrsLabels_2_51;
      next_value_of_STATE_VARIABLE_CaseLabelMap_0_5 = STATE_VARIABLE_CaseLabelMap_1_45;
      next_value_of_STATE_VARIABLE_MaybeEnd_0_7 = STATE_VARIABLE_MaybeEnd_1_46;
      next_value_of_STATE_VARIABLE_CI_0_9 = STATE_VARIABLE_CI_1_47;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_StrsLabels_0_3 = next_value_of_STATE_VARIABLE_StrsLabels_0_3;
      STATE_VARIABLE_CaseLabelMap_0_5 = next_value_of_STATE_VARIABLE_CaseLabelMap_0_5;
      STATE_VARIABLE_MaybeEnd_0_7 = next_value_of_STATE_VARIABLE_MaybeEnd_0_7;
      STATE_VARIABLE_CI_0_9 = next_value_of_STATE_VARIABLE_CI_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__string_switch__record_label_for_string_4_p_0(
  MR_Word Label_5,
  MR_Word TaggedConsId_6,
  MR_Word STATE_VARIABLE_StrsLabels_0_11,
  MR_Word * STATE_VARIABLE_StrsLabels_12)
{
  MR_bool succeeded;
  MR_Word Tag_9 = ((MR_Word) ((MR_hl_field(0, TaggedConsId_6, 1))));
  MR_String String_10;

  succeeded = ((((MR_tag((MR_Word) Tag_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Tag_9, 0)))) == (MR_Integer) 0)));
  if (succeeded)
  {
    String_10 = ((MR_String) ((MR_hl_field(3, Tag_9, 1))));
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
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.string_switch.record_label_for_string\'/4", (MR_String) "non-string tag");
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
  MR_Word STATE_VARIABLE_TableRvalsCord_0_25,
  MR_Word * STATE_VARIABLE_TableRvalsCord_26,
  MR_Word STATE_VARIABLE_MaybeTargetsCord_0_27,
  MR_Word * STATE_VARIABLE_MaybeTargetsCord_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Slot_10 == TableSize_11);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_MaybeTargetsCord_28 = STATE_VARIABLE_MaybeTargetsCord_0_27;
      *STATE_VARIABLE_TableRvalsCord_26 = STATE_VARIABLE_TableRvalsCord_0_25;
    }
    else
    {
      MR_Word NextSlotRval_21;
      MR_Word StringRval_22;
      MR_Word Target_23;
      MR_Word TableRowRvals_24;
      MR_Word STATE_VARIABLE_TableRvalsCord_1_38;
      MR_Word Var_39;
      MR_Word STATE_VARIABLE_MaybeTargetsCord_1_40;
      MR_Integer Var_41;
      MR_Word SlotInfo_17;
      MR_Box conv0_SlotInfo_17;
      MR_Integer next_value_of_Slot_10;
      MR_Word next_value_of_STATE_VARIABLE_TableRvalsCord_0_25;
      MR_Word next_value_of_STATE_VARIABLE_MaybeTargetsCord_0_27;

      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[6]), HashSlotMap_12, Slot_10, &conv0_SlotInfo_17);
      if (succeeded)
      {
        SlotInfo_17 = ((MR_Word) (conv0_SlotInfo_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_String String_18 = ((MR_String) ((MR_hl_field(0, SlotInfo_17, 0))));
        MR_Integer Next_19 = ((MR_Integer) ((MR_hl_field(0, SlotInfo_17, 1))));
        MR_Word Var_29;
        MR_Word Var_30;

        Target_23 = ((MR_Word) ((MR_hl_field(0, SlotInfo_17, 2))));
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
        StringRval_22 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[13]));
        NextSlotRval_21 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[23]));
        Target_23 = FailLabel_13;
      }
      succeeded = (NumCollisions_14 == (MR_Integer) 0);
      if (succeeded)
        {
          TableRowRvals_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TableRowRvals_24, 0) = ((MR_Box) (StringRval_22));
          MR_hl_field(1, TableRowRvals_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
          TableRowRvals_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TableRowRvals_24, 0) = ((MR_Box) (StringRval_22));
          MR_hl_field(1, TableRowRvals_24, 1) = ((MR_Box) (Var_36));
        }
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), ((MR_Box) (TableRowRvals_24)), STATE_VARIABLE_TableRvalsCord_0_25, &STATE_VARIABLE_TableRvalsCord_1_38);
      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (Target_23));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[2]), ((MR_Box) (Var_39)), STATE_VARIABLE_MaybeTargetsCord_0_27, &STATE_VARIABLE_MaybeTargetsCord_1_40);
      Var_41 = (MR_Integer) ((MR_Unsigned) Slot_10 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Slot_10 = Var_41;
      next_value_of_STATE_VARIABLE_TableRvalsCord_0_25 = STATE_VARIABLE_TableRvalsCord_1_38;
      next_value_of_STATE_VARIABLE_MaybeTargetsCord_0_27 = STATE_VARIABLE_MaybeTargetsCord_1_40;
      Slot_10 = next_value_of_Slot_10;
      STATE_VARIABLE_TableRvalsCord_0_25 = next_value_of_STATE_VARIABLE_TableRvalsCord_0_25;
      STATE_VARIABLE_MaybeTargetsCord_0_27 = next_value_of_STATE_VARIABLE_MaybeTargetsCord_0_27;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__string_switch__generate_string_trie_lookup_switch_7_p_0(
  MR_Word VarRval_8,
  MR_Word LookupSwitchInfo_9,
  MR_Word CanFail_10,
  MR_Word EndLabel_11,
  MR_Word * STATE_VARIABLE_MaybeEnd_41,
  MR_Word * Code_13,
  MR_Word * STATE_VARIABLE_CI_42)
{
  MR_Word KeyToCaseIdMap_15 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 0))));
  MR_Word CaseConsts_16 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 1))));
  MR_Word OutVars_17 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 2))));
  MR_Word OutTypes_18 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 3))));
  MR_Word EndBranch_19 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 4))));
  MR_Word CLD_20 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 7))));
  MR_Word LookupInfo_21;
  MR_Word CaseNumRegLval_22;
  MR_Word InitCaseNumRegCode_23;
  MR_Word Info_24;
  MR_Word StrsCaseIds_25;
  MR_Word TrieCode_26;
  MR_Word AfterLabel_27;
  MR_Word AfterLabelCode_28;
  MR_Word SetCaseNumCode_29;
  MR_Word SetAndCheckCaseNumCode_30;
  MR_Word STATE_VARIABLE_MaybeEnd_1_43 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 5))));
  MR_Word STATE_VARIABLE_CI_1_44 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_9, 6))));
  MR_Word STATE_VARIABLE_CI_2_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word STATE_VARIABLE_CI_3_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_56;
  MR_Word STATE_VARIABLE_CI_4_57;

  ll_backend__string_switch__init_string_trie_switch_info_lookup_5_p_0(CanFail_10, &LookupInfo_21, STATE_VARIABLE_CI_1_44, &STATE_VARIABLE_CI_2_45, CLD_20);
  CaseNumRegLval_22 = ((MR_Word) ((MR_hl_field(0, LookupInfo_21, 3))));
  {
    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_47, 1) = ((MR_Box) (CaseNumRegLval_22));
    MR_hl_field(3, Var_47, 2) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[11])));
  }
  {
    Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_46, 0) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_46, 1) = ((MR_Box) ((MR_String) "initialize case id to invalid"));
  }
  InitCaseNumRegCode_23 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_46)));
  Info_24 = (MR_Word) (MR_mkword(1, (MR_Word) (LookupInfo_21)));
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), KeyToCaseIdMap_15, &StrsCaseIds_25);
  ll_backend__string_switch__create_nested_trie_switch_6_p_0(Info_24, VarRval_8, StrsCaseIds_25, &TrieCode_26, STATE_VARIABLE_CI_2_45, &STATE_VARIABLE_CI_3_52);
  AfterLabel_27 = ((MR_Word) ((MR_hl_field(0, LookupInfo_21, 4))));
  {
    Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_54, 1) = ((MR_Box) (AfterLabel_27));
  }
  {
    Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_53, 0) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_53, 1) = ((MR_Box) ((MR_String) "after the trie search"));
  }
  AfterLabelCode_28 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_53)));
  Var_56 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TrieCode_26, AfterLabelCode_28);
  SetCaseNumCode_29 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), InitCaseNumRegCode_23, Var_56);
  switch (CanFail_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word NonFailLabel_31;
        MR_Word CaseNumIsValid_32;
        MR_Word TestForFailCode_33;
        MR_Word FailCode_34;
        MR_Word NonFailLabelCode_35;
        MR_Word Var_61;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_72;
        MR_Word Var_73;

        ll_backend__code_info__get_next_label_3_p_0(&NonFailLabel_31, STATE_VARIABLE_CI_3_52, &STATE_VARIABLE_CI_4_57);
        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_61, 0) = ((MR_Box) (CaseNumRegLval_22));
        }
        {
          CaseNumIsValid_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CaseNumIsValid_32, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, CaseNumIsValid_32, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[12])));
          MR_hl_field(3, CaseNumIsValid_32, 2) = ((MR_Box) (Var_61));
          MR_hl_field(3, CaseNumIsValid_32, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[13])));
        }
        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (NonFailLabel_31));
        }
        {
          Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_66, 1) = ((MR_Box) (CaseNumIsValid_32));
          MR_hl_field(3, Var_66, 2) = ((MR_Box) (Var_67));
        }
        {
          Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(0, Var_65, 1) = ((MR_Box) ((MR_String) "branch around fail code"));
        }
        TestForFailCode_33 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_65)));
        FailCode_34 = ((MR_Word) ((MR_hl_field(0, LookupInfo_21, 7))));
        {
          Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_70, 1) = ((MR_Box) (NonFailLabel_31));
        }
        {
          Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(0, Var_69, 1) = ((MR_Box) ((MR_String) "non-fail label"));
        }
        NonFailLabelCode_35 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_69)));
        Var_73 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_34, NonFailLabelCode_35);
        Var_72 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestForFailCode_33, Var_73);
        SetAndCheckCaseNumCode_30 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetCaseNumCode_29, Var_72);
      }
      break;
    case (MR_Integer) 1:
      {
        SetAndCheckCaseNumCode_30 = SetCaseNumCode_29;
        STATE_VARIABLE_CI_4_57 = STATE_VARIABLE_CI_3_52;
      }
      break;
  }
  if (((MR_tag((MR_Word) CaseConsts_16)) == (MR_Integer) 0))
  {
    MR_Word CaseIdToValuesMap_36 = ((MR_Word) ((MR_hl_field(0, CaseConsts_16, 0))));
    MR_Word CaseIdToValuesAL_37;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), CaseIdToValuesMap_36, &CaseIdToValuesAL_37);
    ll_backend__string_switch__generate_string_trie_simple_lookup_switch_13_p_0(LookupInfo_21, CaseIdToValuesAL_37, OutVars_17, OutTypes_18, EndLabel_11, EndBranch_19, SetAndCheckCaseNumCode_30, Code_13, STATE_VARIABLE_MaybeEnd_1_43, STATE_VARIABLE_MaybeEnd_41, STATE_VARIABLE_CI_4_57, STATE_VARIABLE_CI_42, CLD_20);
  }
  else
  {
    MR_Word CaseIdToValuesListMap_38 = ((MR_Word) ((MR_hl_field(1, CaseConsts_16, 0))));
    MR_Word CaseConstsSeveralLlds_39 = ((MR_Word) ((MR_hl_field(1, CaseConsts_16, 1))));
    MR_Word CaseIdToValuesListAL_40;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[1]), CaseIdToValuesListMap_38, &CaseIdToValuesListAL_40);
    ll_backend__string_switch__generate_string_trie_several_soln_lookup_switch_14_p_0(LookupInfo_21, CaseConstsSeveralLlds_39, CaseIdToValuesListAL_40, OutVars_17, OutTypes_18, EndLabel_11, EndBranch_19, SetAndCheckCaseNumCode_30, Code_13, STATE_VARIABLE_MaybeEnd_1_43, STATE_VARIABLE_MaybeEnd_41, STATE_VARIABLE_CI_4_57, STATE_VARIABLE_CI_42, CLD_20);
  }
}

static void MR_CALL 
ll_backend__string_switch__init_string_trie_switch_info_lookup_5_p_0(
  MR_Word CanFail_6,
  MR_Word * Info_7,
  MR_Word STATE_VARIABLE_CI_0_18,
  MR_Word * STATE_VARIABLE_CI_19,
  MR_Word STATE_VARIABLE_CLD_0_20)
{
  MR_Word Encoding_10;
  MR_Word CodeUnitReg_11;
  MR_Word CaseIdReg_12;
  MR_Word BranchStart_13;
  MR_Word AfterLabel_14;
  MR_Word AfterCodeAddr_15;
  MR_Word GotoAfterCode_16;
  MR_Word FailCode_17;
  MR_Word STATE_VARIABLE_CLD_1_23;
  MR_Word STATE_VARIABLE_CLD_2_25;
  MR_Word STATE_VARIABLE_CLD_3_26;
  MR_Word STATE_VARIABLE_CLD_4_27;
  MR_Word Var_29;
  MR_Word Var_30;

  Encoding_10 = backend_libs__string_encoding__target_string_encoding_1_f_0((MR_Integer) 0);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &CodeUnitReg_11, STATE_VARIABLE_CLD_0_20, &STATE_VARIABLE_CLD_1_23);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &CaseIdReg_12, STATE_VARIABLE_CLD_1_23, &STATE_VARIABLE_CLD_2_25);
  ll_backend__code_loc_dep__release_reg_3_p_0(CodeUnitReg_11, STATE_VARIABLE_CLD_2_25, &STATE_VARIABLE_CLD_3_26);
  ll_backend__code_loc_dep__release_reg_3_p_0(CaseIdReg_12, STATE_VARIABLE_CLD_3_26, &STATE_VARIABLE_CLD_4_27);
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_4_27, &BranchStart_13);
  ll_backend__code_info__get_next_label_3_p_0(&AfterLabel_14, STATE_VARIABLE_CI_0_18, STATE_VARIABLE_CI_19);
  {
    AfterCodeAddr_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, AfterCodeAddr_15, 0) = ((MR_Box) (AfterLabel_14));
  }
  {
    Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_30, 1) = ((MR_Box) (AfterCodeAddr_15));
  }
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) ((MR_String) "go to the code after the trie"));
  }
  GotoAfterCode_16 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_29)));
  switch (CanFail_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ll_backend__code_loc_dep__generate_failure_3_p_0(&FailCode_17, *STATE_VARIABLE_CI_19, STATE_VARIABLE_CLD_4_27);
      break;
    case (MR_Integer) 1:
      FailCode_17 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *Info_7 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (Encoding_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (BranchStart_13));
    MR_hl_field(0, base, 2) = ((MR_Box) (CodeUnitReg_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (CaseIdReg_12));
    MR_hl_field(0, base, 4) = ((MR_Box) (AfterLabel_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (AfterCodeAddr_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (GotoAfterCode_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (FailCode_17));
  }
}

static MR_Box MR_CALL 
ll_backend__string_switch__generate_string_trie_several_soln_lookup_switch_14_p_0_1(
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
ll_backend__string_switch__generate_string_trie_several_soln_lookup_switch_14_p_0(
  MR_Word LookupInfo_15,
  MR_Word CaseConstsSeveralLlds_16,
  MR_Word CaseIdToValuesListAL_17,
  MR_Word OutVars_18,
  MR_Word OutTypes_19,
  MR_Word EndLabel_20,
  MR_Word EndBranch_21,
  MR_Word SetAndCheckCaseNumCode_22,
  MR_Word * Code_23,
  MR_Word STATE_VARIABLE_MaybeEnd_0_50,
  MR_Word * STATE_VARIABLE_MaybeEnd_51,
  MR_Word STATE_VARIABLE_CI_0_52,
  MR_Word * STATE_VARIABLE_CI_53,
  MR_Word STATE_VARIABLE_CLD_0_54)
{
  MR_Word MainRowTypes_28;
  MR_Integer NumLaterColumns_30;
  MR_Word DummyOutRvals_32;
  MR_Word LaterSolnsRowsCord0_33;
  MR_Word MainRvalsCord_34;
  MR_Word LaterSolnsRowsCord_35;
  MR_Integer OneSolnCaseCount_36;
  MR_Integer SeveralSolnsCaseCount_37;
  MR_Word MainRvals_38;
  MR_Word LaterSolnsRows_39;
  MR_Word MainTableDataId_40;
  MR_Word LaterTableDataId_41;
  MR_Word LaterTableAddrRval_42;
  MR_Word CaseIdRegLval_43;
  MR_Word MainRowSelect_44;
  MR_Word BaseRegLval_45;
  MR_Word SetBaseRegCode_46;
  MR_Word LookupResultsCode_47;
  MR_Word MainCode_48;
  MR_Word Var_55 = (MR_Word) (MR_mkword(2, &ll_backend__string_switch_scalar_common_3[2]));
  MR_Word Var_57;
  MR_Word Var_62;
  MR_Word STATE_VARIABLE_CI_1_65;
  MR_Word STATE_VARIABLE_CI_2_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word STATE_VARIABLE_CLD_1_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_75;
  MR_Word Var_78;

  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_55));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) (OutTypes_19));
  }
  {
    MainRowTypes_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MainRowTypes_28, 0) = ((MR_Box) (Var_55));
    MR_hl_field(1, MainRowTypes_28, 1) = ((MR_Box) (Var_57));
  }
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[5]), OutVars_18, &NumLaterColumns_30);
  DummyOutRvals_32 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__string_switch_scalar_common_2[5]), OutTypes_19);
  LaterSolnsRowsCord0_33 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), ((MR_Box) (DummyOutRvals_32)));
  Var_62 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]));
  ll_backend__string_switch__construct_string_trie_several_soln_lookup_vector_12_p_0(NumLaterColumns_30, CaseIdToValuesListAL_17, (MR_Integer) 0, Var_62, &MainRvalsCord_34, (MR_Integer) 1, LaterSolnsRowsCord0_33, &LaterSolnsRowsCord_35, (MR_Integer) 0, &OneSolnCaseCount_36, (MR_Integer) 0, &SeveralSolnsCaseCount_37);
  MainRvals_38 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), MainRvalsCord_34);
  LaterSolnsRows_39 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), LaterSolnsRowsCord_35);
  ll_backend__code_info__add_vector_static_cell_5_p_0(MainRowTypes_28, MainRvals_38, &MainTableDataId_40, STATE_VARIABLE_CI_0_52, &STATE_VARIABLE_CI_1_65);
  ll_backend__code_info__add_vector_static_cell_5_p_0(OutTypes_19, LaterSolnsRows_39, &LaterTableDataId_41, STATE_VARIABLE_CI_1_65, &STATE_VARIABLE_CI_2_66);
  {
    Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_67, 1) = ((MR_Box) (LaterTableDataId_41));
  }
  {
    LaterTableAddrRval_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LaterTableAddrRval_42, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, LaterTableAddrRval_42, 1) = ((MR_Box) (Var_67));
  }
  CaseIdRegLval_43 = ((MR_Word) ((MR_hl_field(0, LookupInfo_15, 3))));
  {
    Var_68 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_68, 0) = ((MR_Box) (CaseIdRegLval_43));
  }
  {
    MainRowSelect_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MainRowSelect_44, 0) = ((MR_Box) (Var_68));
    MR_hl_field(0, MainRowSelect_44, 1) = ((MR_Box) (MainRowTypes_28));
  }
  ll_backend__lookup_switch__acquire_and_setup_lookup_base_reg_7_p_0(MainTableDataId_40, EndBranch_21, MainRowSelect_44, &BaseRegLval_45, &SetBaseRegCode_46, STATE_VARIABLE_CLD_0_54, &STATE_VARIABLE_CLD_1_69);
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (OneSolnCaseCount_36));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) ((MR_Integer) 1));
  }
  {
    Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_75, 0) = ((MR_Box) (SeveralSolnsCaseCount_37));
    MR_hl_field(0, Var_75, 1) = ((MR_Box) ((MR_Integer) 2));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_75));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ll_backend__lookup_switch__generate_multi_soln_table_lookup_code_15_p_0(CaseConstsSeveralLlds_16, Var_70, Var_71, (MR_Integer) 0, OutVars_18, EndLabel_20, BaseRegLval_45, LaterTableAddrRval_42, EndBranch_21, &LookupResultsCode_47, STATE_VARIABLE_MaybeEnd_0_50, STATE_VARIABLE_MaybeEnd_51, STATE_VARIABLE_CI_2_66, STATE_VARIABLE_CI_53, STATE_VARIABLE_CLD_1_69);
  Var_78 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetBaseRegCode_46, LookupResultsCode_47);
  MainCode_48 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetAndCheckCaseNumCode_22, Var_78);
  ll_backend__code_util__add_switch_kind_comment_and_end_label_4_p_0((MR_String) "string trie multi soln lookup switch", EndLabel_20, MainCode_48, Code_23);
}

static MR_bool MR_CALL 
ll_backend__string_switch__construct_string_trie_several_soln_lookup_vector_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__string_switch__IntroducedFrom__pred__construct_string_trie_several_soln_lookup_vector__623__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__string_switch__construct_string_trie_several_soln_lookup_vector_12_p_0(
  MR_Integer NumLaterColumns_1,
  MR_Word HeadVar__2_2,
  MR_Integer MainRowNum_3,
  MR_Word STATE_VARIABLE_MainRvalsCord_0_4,
  MR_Word * STATE_VARIABLE_MainRvalsCord_5,
  MR_Integer STATE_VARIABLE_LaterNextRowNum_0_6,
  MR_Word STATE_VARIABLE_LaterSolnsRowsCord_0_7,
  MR_Word * STATE_VARIABLE_LaterSolnsRowsCord_8,
  MR_Integer STATE_VARIABLE_OneSolnCaseCount_0_9,
  MR_Integer * STATE_VARIABLE_OneSolnCaseCount_10,
  MR_Integer STATE_VARIABLE_SeveralSolnsCaseCount_0_11,
  MR_Integer * STATE_VARIABLE_SeveralSolnsCaseCount_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_SeveralSolnsCaseCount_12 = STATE_VARIABLE_SeveralSolnsCaseCount_0_11;
      *STATE_VARIABLE_OneSolnCaseCount_10 = STATE_VARIABLE_OneSolnCaseCount_0_9;
      *STATE_VARIABLE_LaterSolnsRowsCord_8 = STATE_VARIABLE_LaterSolnsRowsCord_0_7;
      *STATE_VARIABLE_MainRvalsCord_5 = STATE_VARIABLE_MainRvalsCord_0_4;
    }
    else
    {
      MR_Word CaseValues_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word CasesValues_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word CaseId_37 = ((MR_Word) ((MR_hl_field(0, CaseValues_29, 0))));
      MR_Word SolnConsts_38 = ((MR_Word) ((MR_hl_field(0, CaseValues_29, 1))));
      MR_Integer CaseIdNum_39 = (MR_Integer) (CaseId_37);
      MR_Word MainRowRvals_42;
      MR_Word Var_59;
      MR_Integer STATE_VARIABLE_OneSolnCaseCount_1_62;
      MR_Integer STATE_VARIABLE_SeveralSolnsCaseCount_1_67;
      MR_Integer STATE_VARIABLE_LaterNextRowNum_1_75;
      MR_Word STATE_VARIABLE_LaterSolnsRowsCord_1_76;
      MR_Word STATE_VARIABLE_MainRvalsCord_1_78;
      MR_Integer Var_79;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_MainRowNum_3;
      MR_Word next_value_of_STATE_VARIABLE_MainRvalsCord_0_4;
      MR_Integer next_value_of_STATE_VARIABLE_LaterNextRowNum_0_6;
      MR_Word next_value_of_STATE_VARIABLE_LaterSolnsRowsCord_0_7;
      MR_Integer next_value_of_STATE_VARIABLE_OneSolnCaseCount_0_9;
      MR_Integer next_value_of_STATE_VARIABLE_SeveralSolnsCaseCount_0_11;

      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_59, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_4[0]));
        MR_hl_field(0, Var_59, 1) = ((MR_Box) (ll_backend__string_switch__construct_string_trie_several_soln_lookup_vector_12_p_0_1));
        MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_59, 3) = ((MR_Box) (MainRowNum_3));
        MR_hl_field(0, Var_59, 4) = ((MR_Box) (CaseIdNum_39));
      }
      mercury__require__expect_3_p_0(Var_59, (MR_String) "predicate \140ll_backend.string_switch.construct_string_trie_several_soln_lookup_vector\'/12", (MR_String) "RowNum != CaseIdNum");
      if (((MR_tag((MR_Word) SolnConsts_38)) == (MR_Integer) 0))
      {
        MR_Word OutVarRvals_40 = ((MR_Word) ((MR_hl_field(0, SolnConsts_38, 0))));
        MR_Word ZeroRval_41;
        MR_Word Var_66;

        STATE_VARIABLE_OneSolnCaseCount_1_62 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_OneSolnCaseCount_0_9 + (MR_Unsigned) 1);
        ZeroRval_41 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[13]));
        {
          Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_66, 0) = ((MR_Box) (ZeroRval_41));
          MR_hl_field(1, Var_66, 1) = ((MR_Box) (OutVarRvals_40));
        }
        {
          MainRowRvals_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MainRowRvals_42, 0) = ((MR_Box) (ZeroRval_41));
          MR_hl_field(1, MainRowRvals_42, 1) = ((MR_Box) (Var_66));
        }
        STATE_VARIABLE_LaterNextRowNum_1_75 = STATE_VARIABLE_LaterNextRowNum_0_6;
        STATE_VARIABLE_LaterSolnsRowsCord_1_76 = STATE_VARIABLE_LaterSolnsRowsCord_0_7;
        STATE_VARIABLE_SeveralSolnsCaseCount_1_67 = STATE_VARIABLE_SeveralSolnsCaseCount_0_11;
      }
      else
      {
        MR_Word FirstSolnRvals_43 = ((MR_Word) ((MR_hl_field(1, SolnConsts_38, 0))));
        MR_Word LaterSolns_44 = ((MR_Word) ((MR_hl_field(1, SolnConsts_38, 1))));
        MR_Integer NumLaterSolns_45;
        MR_Integer FirstRowOffset_46;
        MR_Integer LastRowOffset_47;
        MR_Word FirstRowRval_48;
        MR_Word LastRowRval_49;
        MR_Integer Var_69;
        MR_Integer Var_70;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_77;

        STATE_VARIABLE_SeveralSolnsCaseCount_1_67 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SeveralSolnsCaseCount_0_11 + (MR_Unsigned) 1);
        mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), LaterSolns_44, &NumLaterSolns_45);
        FirstRowOffset_46 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LaterNextRowNum_0_6 * (MR_Unsigned) NumLaterColumns_1);
        Var_70 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LaterNextRowNum_0_6 + (MR_Unsigned) NumLaterSolns_45);
        Var_69 = (MR_Integer) ((MR_Unsigned) Var_70 - (MR_Unsigned) 1);
        LastRowOffset_47 = (MR_Integer) ((MR_Unsigned) Var_69 * (MR_Unsigned) NumLaterColumns_1);
        {
          Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_72, 0) = ((MR_Box) (FirstRowOffset_46));
        }
        {
          FirstRowRval_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, FirstRowRval_48, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, FirstRowRval_48, 1) = ((MR_Box) (Var_72));
        }
        {
          Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_73, 0) = ((MR_Box) (LastRowOffset_47));
        }
        {
          LastRowRval_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, LastRowRval_49, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, LastRowRval_49, 1) = ((MR_Box) (Var_73));
        }
        {
          Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_74, 0) = ((MR_Box) (LastRowRval_49));
          MR_hl_field(1, Var_74, 1) = ((MR_Box) (FirstSolnRvals_43));
        }
        {
          MainRowRvals_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MainRowRvals_42, 0) = ((MR_Box) (FirstRowRval_48));
          MR_hl_field(1, MainRowRvals_42, 1) = ((MR_Box) (Var_74));
        }
        STATE_VARIABLE_LaterNextRowNum_1_75 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LaterNextRowNum_0_6 + (MR_Unsigned) NumLaterSolns_45);
        Var_77 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), LaterSolns_44);
        STATE_VARIABLE_LaterSolnsRowsCord_1_76 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), STATE_VARIABLE_LaterSolnsRowsCord_0_7, Var_77);
        STATE_VARIABLE_OneSolnCaseCount_1_62 = STATE_VARIABLE_OneSolnCaseCount_0_9;
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), ((MR_Box) (MainRowRvals_42)), STATE_VARIABLE_MainRvalsCord_0_4, &STATE_VARIABLE_MainRvalsCord_1_78);
      Var_79 = (MR_Integer) ((MR_Unsigned) MainRowNum_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = CasesValues_30;
      next_value_of_MainRowNum_3 = Var_79;
      next_value_of_STATE_VARIABLE_MainRvalsCord_0_4 = STATE_VARIABLE_MainRvalsCord_1_78;
      next_value_of_STATE_VARIABLE_LaterNextRowNum_0_6 = STATE_VARIABLE_LaterNextRowNum_1_75;
      next_value_of_STATE_VARIABLE_LaterSolnsRowsCord_0_7 = STATE_VARIABLE_LaterSolnsRowsCord_1_76;
      next_value_of_STATE_VARIABLE_OneSolnCaseCount_0_9 = STATE_VARIABLE_OneSolnCaseCount_1_62;
      next_value_of_STATE_VARIABLE_SeveralSolnsCaseCount_0_11 = STATE_VARIABLE_SeveralSolnsCaseCount_1_67;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      MainRowNum_3 = next_value_of_MainRowNum_3;
      STATE_VARIABLE_MainRvalsCord_0_4 = next_value_of_STATE_VARIABLE_MainRvalsCord_0_4;
      STATE_VARIABLE_LaterNextRowNum_0_6 = next_value_of_STATE_VARIABLE_LaterNextRowNum_0_6;
      STATE_VARIABLE_LaterSolnsRowsCord_0_7 = next_value_of_STATE_VARIABLE_LaterSolnsRowsCord_0_7;
      STATE_VARIABLE_OneSolnCaseCount_0_9 = next_value_of_STATE_VARIABLE_OneSolnCaseCount_0_9;
      STATE_VARIABLE_SeveralSolnsCaseCount_0_11 = next_value_of_STATE_VARIABLE_SeveralSolnsCaseCount_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__string_switch__generate_string_trie_simple_lookup_switch_13_p_0(
  MR_Word LookupInfo_14,
  MR_Word CaseValues_15,
  MR_Word OutVars_16,
  MR_Word OutTypes_17,
  MR_Word EndLabel_18,
  MR_Word EndBranch_19,
  MR_Word SetAndCheckCaseNumCode_20,
  MR_Word * Code_21,
  MR_Word STATE_VARIABLE_MaybeEnd_0_37,
  MR_Word * STATE_VARIABLE_MaybeEnd_38,
  MR_Word STATE_VARIABLE_CI_0_39,
  MR_Word * STATE_VARIABLE_CI_40,
  MR_Word CLD_24)
{
  MR_Word LookupCode_25;
  MR_Word MainCode_35;

  if ((OutVars_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    ll_backend__lookup_switch__generate_single_soln_table_lookup_code_no_vars_5_p_0(EndBranch_19, &LookupCode_25, STATE_VARIABLE_MaybeEnd_0_37, STATE_VARIABLE_MaybeEnd_38, CLD_24);
    *STATE_VARIABLE_CI_40 = STATE_VARIABLE_CI_0_39;
  }
  else
  {
    MR_Word MainTableRvalsCord_30;
    MR_Word MainTableRvals_31;
    MR_Word MainTableDataId_32;
    MR_Word CaseIdRegLval_33;
    MR_Word MainRowSelect_34;
    MR_Word Var_43;
    MR_Word Var_45;

    Var_43 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]));
    ll_backend__string_switch__construct_string_trie_simple_lookup_vector_4_p_0(CaseValues_15, (MR_Integer) 0, Var_43, &MainTableRvalsCord_30);
    MainTableRvals_31 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), MainTableRvalsCord_30);
    ll_backend__code_info__add_vector_static_cell_5_p_0(OutTypes_17, MainTableRvals_31, &MainTableDataId_32, STATE_VARIABLE_CI_0_39, STATE_VARIABLE_CI_40);
    CaseIdRegLval_33 = ((MR_Word) ((MR_hl_field(0, LookupInfo_14, 3))));
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_45, 0) = ((MR_Box) (CaseIdRegLval_33));
    }
    {
      MainRowSelect_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MainRowSelect_34, 0) = ((MR_Box) (Var_45));
      MR_hl_field(0, MainRowSelect_34, 1) = ((MR_Box) (OutTypes_17));
    }
    ll_backend__lookup_switch__generate_single_soln_table_lookup_code_some_vars_10_p_0(MainTableDataId_32, MainRowSelect_34, (MR_Integer) 0, OutVars_16, EndBranch_19, &LookupCode_25, STATE_VARIABLE_MaybeEnd_0_37, STATE_VARIABLE_MaybeEnd_38, *STATE_VARIABLE_CI_40, CLD_24);
  }
  MainCode_35 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetAndCheckCaseNumCode_20, LookupCode_25);
  ll_backend__code_util__add_switch_kind_comment_and_end_label_4_p_0((MR_String) "string trie single soln lookup switch", EndLabel_18, MainCode_35, Code_21);
}

static MR_bool MR_CALL 
ll_backend__string_switch__construct_string_trie_simple_lookup_vector_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__string_switch__IntroducedFrom__pred__construct_string_trie_simple_lookup_vector__552__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__string_switch__construct_string_trie_simple_lookup_vector_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer RowNum_2,
  MR_Word STATE_VARIABLE_RvalsCord_0_3,
  MR_Word * STATE_VARIABLE_RvalsCord_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RvalsCord_4 = STATE_VARIABLE_RvalsCord_0_3;
    else
    {
      MR_Word CaseValues_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word CasesValues_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word CaseId_13 = ((MR_Word) ((MR_hl_field(0, CaseValues_9, 0))));
      MR_Integer CaseIdNum_15 = (MR_Integer) (CaseId_13);
      MR_Word RowRvals_16 = ((MR_Word) ((MR_hl_field(0, CaseValues_9, 1))));
      MR_Word Var_19;
      MR_Word STATE_VARIABLE_RvalsCord_1_22;
      MR_Integer Var_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_RowNum_2;
      MR_Word next_value_of_STATE_VARIABLE_RvalsCord_0_3;

      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_19, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_4[0]));
        MR_hl_field(0, Var_19, 1) = ((MR_Box) (ll_backend__string_switch__construct_string_trie_simple_lookup_vector_4_p_0_1));
        MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_19, 3) = ((MR_Box) (RowNum_2));
        MR_hl_field(0, Var_19, 4) = ((MR_Box) (CaseIdNum_15));
      }
      mercury__require__expect_3_p_0(Var_19, (MR_String) "predicate \140ll_backend.string_switch.construct_string_trie_simple_lookup_vector\'/4", (MR_String) "RowNum != CaseIdNum");
      mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), ((MR_Box) (RowRvals_16)), STATE_VARIABLE_RvalsCord_0_3, &STATE_VARIABLE_RvalsCord_1_22);
      Var_23 = (MR_Integer) ((MR_Unsigned) RowNum_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = CasesValues_10;
      next_value_of_RowNum_2 = Var_23;
      next_value_of_STATE_VARIABLE_RvalsCord_0_3 = STATE_VARIABLE_RvalsCord_1_22;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      RowNum_2 = next_value_of_RowNum_2;
      STATE_VARIABLE_RvalsCord_0_3 = next_value_of_STATE_VARIABLE_RvalsCord_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__string_switch__generate_string_trie_jump_switch_12_p_0(
  MR_Word VarRval_13,
  MR_String VarName_14,
  MR_Word TaggedCases_15,
  MR_Word CodeModel_16,
  MR_Word CanFail_17,
  MR_Word SwitchGoalInfo_18,
  MR_Word EndLabel_19,
  MR_Word * MaybeEnd_20,
  MR_Word * Code_21,
  MR_Word STATE_VARIABLE_CI_0_43,
  MR_Word * STATE_VARIABLE_CI_44,
  MR_Word CLD_23)
{
  MR_Word JumpInfo0_24;
  MR_Word BranchStart_25;
  MR_Word Params_26;
  MR_Word CaseIdToLabelMap0_27;
  MR_Word CaseLabelMap0_28;
  MR_Word CaseIdToLabelMap_29;
  MR_Word CaseLabelMap_30;
  MR_Word JumpInfo_31;
  MR_Word Info_32;
  MR_Word StrsCaseIds_34;
  MR_Word TrieCode_35;
  MR_Word CasesCode_36;
  MR_Word FailLabel_38;
  MR_Word FailLabelCode_39;
  MR_Word FailCode_40;
  MR_Word MainCode_41;
  MR_Word STATE_VARIABLE_CI_1_45;
  MR_Word STATE_VARIABLE_CI_2_47;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Encoding_83;
  MR_Word CodeUnitReg_84;
  MR_Word FailLabel_86;
  MR_Word FailCode_87;
  MR_Word GotoFailCode_88;
  MR_Word CaseIdToLabelMap0_89;
  MR_Word STATE_VARIABLE_CLD_1_92;
  MR_Word STATE_VARIABLE_CLD_2_93;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_60;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Integer _MaxCaseNum_33;
  MR_Word Var_37;

  Encoding_83 = backend_libs__string_encoding__target_string_encoding_1_f_0((MR_Integer) 0);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &CodeUnitReg_84, CLD_23, &STATE_VARIABLE_CLD_1_92);
  ll_backend__code_loc_dep__release_reg_3_p_0(CodeUnitReg_84, STATE_VARIABLE_CLD_1_92, &STATE_VARIABLE_CLD_2_93);
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_2_93, &BranchStart_25);
  ll_backend__code_info__get_next_label_3_p_0(&FailLabel_86, STATE_VARIABLE_CI_0_43, &STATE_VARIABLE_CI_1_45);
  switch (CanFail_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ll_backend__code_loc_dep__generate_failure_3_p_0(&FailCode_87, STATE_VARIABLE_CI_1_45, STATE_VARIABLE_CLD_2_93);
      break;
    case (MR_Integer) 1:
      FailCode_87 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[28])));
      break;
  }
  {
    Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_96, 0) = ((MR_Box) (FailLabel_86));
  }
  {
    Var_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_95, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_95, 1) = ((MR_Box) (Var_96));
  }
  {
    Var_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_94, 0) = ((MR_Box) (Var_95));
    MR_hl_field(0, Var_94, 1) = ((MR_Box) ((MR_String) "no match; goto fail"));
  }
  GotoFailCode_88 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_94)));
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), &CaseIdToLabelMap0_89);
  {
    JumpInfo0_24 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, JumpInfo0_24, 0) = (MR_Box) ((MR_Unsigned) (Encoding_83));
    MR_hl_field(0, JumpInfo0_24, 1) = ((MR_Box) (CaseIdToLabelMap0_89));
    MR_hl_field(0, JumpInfo0_24, 2) = ((MR_Box) (BranchStart_25));
    MR_hl_field(0, JumpInfo0_24, 3) = ((MR_Box) (CodeUnitReg_84));
    MR_hl_field(0, JumpInfo0_24, 4) = ((MR_Box) (FailLabel_86));
    MR_hl_field(0, JumpInfo0_24, 5) = ((MR_Box) (FailCode_87));
    MR_hl_field(0, JumpInfo0_24, 6) = ((MR_Box) (GotoFailCode_88));
  }
  {
    Params_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_26, 0) = ((MR_Box) (VarName_14));
    MR_hl_field(0, Params_26, 1) = ((MR_Box) (SwitchGoalInfo_18));
    MR_hl_field(0, Params_26, 2) = (MR_Box) ((MR_Unsigned) (CodeModel_16));
    MR_hl_field(0, Params_26, 3) = ((MR_Box) (BranchStart_25));
    MR_hl_field(0, Params_26, 4) = ((MR_Box) (EndLabel_19));
  }
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), &CaseIdToLabelMap0_27);
  mercury__map__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0), &CaseLabelMap0_28);
  ll_backend__string_switch__represent_tagged_cases_in_string_trie_switch_10_p_0(Params_26, TaggedCases_15, CaseIdToLabelMap0_27, &CaseIdToLabelMap_29, CaseLabelMap0_28, &CaseLabelMap_30, (MR_Word) ((MR_Unsigned) 0U), MaybeEnd_20, STATE_VARIABLE_CI_1_45, &STATE_VARIABLE_CI_2_47);
  Var_60 = ((MR_Unsigned) ((MR_hl_field(0, JumpInfo0_24, 0))) & (MR_Integer) 1);
  Var_62 = ((MR_Word) ((MR_hl_field(0, JumpInfo0_24, 2))));
  Var_63 = ((MR_Word) ((MR_hl_field(0, JumpInfo0_24, 3))));
  Var_64 = ((MR_Word) ((MR_hl_field(0, JumpInfo0_24, 4))));
  Var_65 = ((MR_Word) ((MR_hl_field(0, JumpInfo0_24, 5))));
  Var_66 = ((MR_Word) ((MR_hl_field(0, JumpInfo0_24, 6))));
  {
    JumpInfo_31 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, JumpInfo_31, 0) = (MR_Box) ((MR_Unsigned) (Var_60));
    MR_hl_field(0, JumpInfo_31, 1) = ((MR_Box) (CaseIdToLabelMap_29));
    MR_hl_field(0, JumpInfo_31, 2) = ((MR_Box) (Var_62));
    MR_hl_field(0, JumpInfo_31, 3) = ((MR_Box) (Var_63));
    MR_hl_field(0, JumpInfo_31, 4) = ((MR_Box) (Var_64));
    MR_hl_field(0, JumpInfo_31, 5) = ((MR_Box) (Var_65));
    MR_hl_field(0, JumpInfo_31, 6) = ((MR_Box) (Var_66));
  }
  Info_32 = (MR_Word) ((MR_Word) (JumpInfo_31));
  backend_libs__string_switch_util__build_str_case_id_list_3_p_0(TaggedCases_15, &_MaxCaseNum_33, &StrsCaseIds_34);
  ll_backend__string_switch__create_nested_trie_switch_6_p_0(Info_32, VarRval_13, StrsCaseIds_34, &TrieCode_35, STATE_VARIABLE_CI_2_47, STATE_VARIABLE_CI_44);
  ll_backend__switch_case__add_not_yet_included_cases_3_p_0(&CasesCode_36, CaseLabelMap_30, &Var_37);
  FailLabel_38 = ((MR_Word) ((MR_hl_field(0, JumpInfo_31, 4))));
  {
    Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_50, 1) = ((MR_Box) (FailLabel_38));
  }
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) ((MR_String) "fail label"));
  }
  FailLabelCode_39 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_49)));
  FailCode_40 = ((MR_Word) ((MR_hl_field(0, JumpInfo_31, 5))));
  Var_53 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailLabelCode_39, FailCode_40);
  Var_52 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CasesCode_36, Var_53);
  MainCode_41 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TrieCode_35, Var_52);
  ll_backend__code_util__add_switch_kind_comment_and_end_label_4_p_0((MR_String) "string trie jump switch", EndLabel_19, MainCode_41, Code_21);
}

static void MR_CALL 
ll_backend__string_switch__create_nested_trie_switch_6_p_0(
  MR_Word Info_7,
  MR_Word VarRval_8,
  MR_Word StrsCaseIds_9,
  MR_Word * TrieCode_10,
  MR_Word STATE_VARIABLE_CI_0_19,
  MR_Word * STATE_VARIABLE_CI_20)
{
  MR_bool succeeded;
  MR_Word Encoding_12;
  MR_Word TopTrieNode_13;
  MR_Word TopTrieLabel_14;
  MR_Word TrieCode0_15;
  MR_Word TailTrieCodeInstrs_17;
  MR_Word HeadTrieCodeInstr_16;
  MR_Word Var_23;
  MR_Word Var_27;
  MR_Box conv0_HeadTrieCodeInstr_16;

  if (((MR_tag((MR_Word) Info_7)) == (MR_Integer) 0))
  {
    MR_Word JumpInfo_29 = (MR_Word) ((MR_Word) (Info_7));

    Encoding_12 = ((MR_Unsigned) ((MR_hl_field(0, JumpInfo_29, 0))) & (MR_Integer) 1);
  }
  else
  {
    MR_Word LookupInfo_30 = (MR_Word) (MR_body((MR_Word) (Info_7), (MR_Integer) 1));

    Encoding_12 = ((MR_Unsigned) ((MR_hl_field(0, LookupInfo_30, 0))) & (MR_Integer) 1);
  }
  backend_libs__string_switch_util__create_trie_3_p_0(Encoding_12, StrsCaseIds_9, &TopTrieNode_13);
  ll_backend__string_switch__convert_trie_to_nested_switches_8_p_0(Info_7, VarRval_8, (MR_Integer) 0, TopTrieNode_13, &TopTrieLabel_14, &TrieCode0_15, STATE_VARIABLE_CI_0_19, STATE_VARIABLE_CI_20);
  succeeded = mercury__cord__head_tail_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TrieCode0_15, &conv0_HeadTrieCodeInstr_16, &TailTrieCodeInstrs_17);
  if (succeeded)
  {
    HeadTrieCodeInstr_16 = ((MR_Word) (conv0_HeadTrieCodeInstr_16));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    Var_23 = ((MR_Word) ((MR_hl_field(0, HeadTrieCodeInstr_16, 0))));
    succeeded = ((((MR_tag((MR_Word) Var_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_23, 0)))) == (MR_Integer) 5)));
    if (succeeded)
    {
      Var_27 = ((MR_Word) ((MR_hl_field(3, Var_23, 1))));
      succeeded = ll_backend__llds____Unify____label_0_0(TopTrieLabel_14, Var_27);
    }
  }
  if (succeeded)
    *TrieCode_10 = TailTrieCodeInstrs_17;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.string_switch.create_nested_trie_switch\'/6", (MR_String) "TrieCode0 does not start with TopTrieLabel");
      return;
    }
}

static void MR_CALL 
ll_backend__string_switch__convert_trie_choices_to_nested_switches_12_p_0(
  MR_Word Info_1,
  MR_Word VarRval_2,
  MR_Integer NumMatched_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_CodeUnitToActionsCord_0_5,
  MR_Word * STATE_VARIABLE_CodeUnitToActionsCord_6,
  MR_Integer STATE_VARIABLE_NumActions_0_7,
  MR_Integer * STATE_VARIABLE_NumActions_8,
  MR_Word STATE_VARIABLE_NestedTrieCode_0_9,
  MR_Word * STATE_VARIABLE_NestedTrieCode_10,
  MR_Word STATE_VARIABLE_CI_0_11,
  MR_Word * STATE_VARIABLE_CI_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CI_12 = STATE_VARIABLE_CI_0_11;
      *STATE_VARIABLE_NestedTrieCode_10 = STATE_VARIABLE_NestedTrieCode_0_9;
      *STATE_VARIABLE_NumActions_8 = STATE_VARIABLE_NumActions_0_7;
      *STATE_VARIABLE_CodeUnitToActionsCord_6 = STATE_VARIABLE_CodeUnitToActionsCord_0_5;
    }
    else
    {
      MR_Word Choice_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Choices_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Integer CodeUnit_37 = ((MR_Integer) ((MR_hl_field(0, Choice_31, 0))));
      MR_Word TrieNode_38 = ((MR_Word) ((MR_hl_field(0, Choice_31, 1))));
      MR_Word TrieNodeLabel_39;
      MR_Word TrieNodeCode_40;
      MR_Word CodeUnitToAction_41;
      MR_Word STATE_VARIABLE_CI_1_50;
      MR_Word Var_51;
      MR_Word STATE_VARIABLE_CodeUnitToActionsCord_1_52;
      MR_Integer STATE_VARIABLE_NumActions_1_53;
      MR_Word STATE_VARIABLE_NestedTrieCode_1_55;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_CodeUnitToActionsCord_0_5;
      MR_Integer next_value_of_STATE_VARIABLE_NumActions_0_7;
      MR_Word next_value_of_STATE_VARIABLE_NestedTrieCode_0_9;
      MR_Word next_value_of_STATE_VARIABLE_CI_0_11;

      ll_backend__string_switch__convert_trie_to_nested_switches_8_p_0(Info_1, VarRval_2, NumMatched_3, TrieNode_38, &TrieNodeLabel_39, &TrieNodeCode_40, STATE_VARIABLE_CI_0_11, &STATE_VARIABLE_CI_1_50);
      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_51, 0) = ((MR_Box) (TrieNodeLabel_39));
      }
      {
        CodeUnitToAction_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CodeUnitToAction_41, 0) = ((MR_Box) (CodeUnit_37));
        MR_hl_field(0, CodeUnitToAction_41, 1) = ((MR_Box) (Var_51));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_code_unit_to_action_0), ((MR_Box) (CodeUnitToAction_41)), STATE_VARIABLE_CodeUnitToActionsCord_0_5, &STATE_VARIABLE_CodeUnitToActionsCord_1_52);
      STATE_VARIABLE_NumActions_1_53 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumActions_0_7 + (MR_Unsigned) 1);
      STATE_VARIABLE_NestedTrieCode_1_55 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_NestedTrieCode_0_9, TrieNodeCode_40);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Choices_32;
      next_value_of_STATE_VARIABLE_CodeUnitToActionsCord_0_5 = STATE_VARIABLE_CodeUnitToActionsCord_1_52;
      next_value_of_STATE_VARIABLE_NumActions_0_7 = STATE_VARIABLE_NumActions_1_53;
      next_value_of_STATE_VARIABLE_NestedTrieCode_0_9 = STATE_VARIABLE_NestedTrieCode_1_55;
      next_value_of_STATE_VARIABLE_CI_0_11 = STATE_VARIABLE_CI_1_50;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_CodeUnitToActionsCord_0_5 = next_value_of_STATE_VARIABLE_CodeUnitToActionsCord_0_5;
      STATE_VARIABLE_NumActions_0_7 = next_value_of_STATE_VARIABLE_NumActions_0_7;
      STATE_VARIABLE_NestedTrieCode_0_9 = next_value_of_STATE_VARIABLE_NestedTrieCode_0_9;
      STATE_VARIABLE_CI_0_11 = next_value_of_STATE_VARIABLE_CI_0_11;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__string_switch__convert_trie_to_nested_switches_8_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__224__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__string_switch__convert_trie_to_nested_switches_8_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__242__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__string_switch__convert_trie_to_nested_switches_8_p_0(
  MR_Word Info_9,
  MR_Word VarRval_10,
  MR_Integer NumMatched_11,
  MR_Word TrieNode_12,
  MR_Word * TrieNodeLabel_13,
  MR_Word * Code_14,
  MR_Word STATE_VARIABLE_CI_0_63,
  MR_Word * STATE_VARIABLE_CI_64)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_CI_1_65;

  ll_backend__code_info__get_next_label_3_p_0(TrieNodeLabel_13, STATE_VARIABLE_CI_0_63, &STATE_VARIABLE_CI_1_65);
  if (((MR_tag((MR_Word) TrieNode_12)) == (MR_Integer) 1))
  {
    MR_Word MaybeEnd_30 = ((MR_Word) ((MR_hl_field(1, TrieNode_12, 2))));
    MR_Integer NumRevMatchedCodeUnits_31;
    MR_Word CodeUnitRegLval_32;
    MR_Word GetCurCodeUnitRval_33;
    MR_Word LabelCode_34;
    MR_Word SetCodeUnitCode_35;
    MR_Word CodeUnitRval_36;
    MR_Word ChoicePairs_37;
    MR_Word StickCodeUnits_38;
    MR_Word TrieNodeAfterStick_39;
    MR_Word Var_79;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word RevMatchedCodeUnits_127 = ((MR_Word) ((MR_hl_field(1, TrieNode_12, 0))));
    MR_Word GotoFailCode_130;

    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevMatchedCodeUnits_127, &NumRevMatchedCodeUnits_31);
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_79, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_4[0]));
      MR_hl_field(0, Var_79, 1) = ((MR_Box) (ll_backend__string_switch__convert_trie_to_nested_switches_8_p_0_1));
      MR_hl_field(0, Var_79, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_79, 3) = ((MR_Box) (NumMatched_11));
      MR_hl_field(0, Var_79, 4) = ((MR_Box) (NumRevMatchedCodeUnits_31));
    }
    mercury__require__expect_3_p_0(Var_79, (MR_String) "predicate \140ll_backend.string_switch.convert_trie_to_nested_switches\'/8", (MR_String) "NumRevMatchedCodeUnits != NumMatched");
    ll_backend__string_switch__get_code_unit_reg_2_p_0(Info_9, &CodeUnitRegLval_32);
    {
      Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_84, 0) = ((MR_Box) (NumMatched_11));
    }
    {
      Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_83, 1) = ((MR_Box) (Var_84));
    }
    {
      GetCurCodeUnitRval_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GetCurCodeUnitRval_33, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, GetCurCodeUnitRval_33, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(3, GetCurCodeUnitRval_33, 2) = ((MR_Box) (VarRval_10));
      MR_hl_field(3, GetCurCodeUnitRval_33, 3) = ((MR_Box) (Var_83));
    }
    {
      Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_86, 1) = ((MR_Box) (*TrieNodeLabel_13));
    }
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_85, 0) = ((MR_Box) (Var_86));
      MR_hl_field(0, Var_85, 1) = ((MR_Box) ((MR_String) ""));
    }
    LabelCode_34 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_85)));
    {
      Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_89, 1) = ((MR_Box) (CodeUnitRegLval_32));
      MR_hl_field(3, Var_89, 2) = ((MR_Box) (GetCurCodeUnitRval_33));
    }
    {
      Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_88, 0) = ((MR_Box) (Var_89));
      MR_hl_field(0, Var_88, 1) = ((MR_Box) ((MR_String) ""));
    }
    SetCodeUnitCode_35 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_88)));
    {
      CodeUnitRval_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CodeUnitRval_36, 0) = ((MR_Box) (CodeUnitRegLval_32));
    }
    ll_backend__string_switch__generate_trie_goto_fail_code_2_p_0(Info_9, &GotoFailCode_130);
    backend_libs__string_switch_util__chase_any_stick_in_trie_4_p_0(TrieNode_12, &ChoicePairs_37, &StickCodeUnits_38, &TrieNodeAfterStick_39);
    if ((StickCodeUnits_38 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word NestedTrieInfosCord_55;
      MR_Integer NumActions0_56;
      MR_Word NestedTrieCode_57;
      MR_Word NestedTrieInfos0_58;
      MR_Word NestedTrieInfos_59;
      MR_Integer NumActions_60;
      MR_Integer Var_107 = (MR_Integer) ((MR_Unsigned) NumMatched_11 + (MR_Unsigned) 1);
      MR_Word Var_108;
      MR_Word Var_110;
      MR_Word STATE_VARIABLE_CI_4_111;
      MR_Word Var_120;
      MR_Word Var_121;
      MR_Word TestCode_124;

      Var_108 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_code_unit_to_action_0));
      Var_110 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      ll_backend__string_switch__convert_trie_choices_to_nested_switches_12_p_0(Info_9, VarRval_10, Var_107, ChoicePairs_37, Var_108, &NestedTrieInfosCord_55, (MR_Integer) 0, &NumActions0_56, Var_110, &NestedTrieCode_57, STATE_VARIABLE_CI_1_65, &STATE_VARIABLE_CI_4_111);
      NestedTrieInfos0_58 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_code_unit_to_action_0), NestedTrieInfosCord_55);
      if ((MaybeEnd_30 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        NestedTrieInfos_59 = NestedTrieInfos0_58;
        NumActions_60 = NumActions0_56;
      }
      else
      {
        MR_Word EndCaseId_61 = ((MR_Word) ((MR_hl_field(1, MaybeEnd_30, 0))));
        MR_Word EndNestedTrieInfo_62;
        MR_Word Var_114;

        {
          Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_114, 0) = ((MR_Box) (EndCaseId_61));
        }
        {
          EndNestedTrieInfo_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, EndNestedTrieInfo_62, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(0, EndNestedTrieInfo_62, 1) = ((MR_Box) (Var_114));
        }
        {
          NestedTrieInfos_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, NestedTrieInfos_59, 0) = ((MR_Box) (EndNestedTrieInfo_62));
          MR_hl_field(1, NestedTrieInfos_59, 1) = ((MR_Box) (NestedTrieInfos0_58));
        }
        NumActions_60 = (MR_Integer) ((MR_Unsigned) NumActions0_56 + (MR_Unsigned) 1);
      }
      succeeded = (NumActions_60 <= (MR_Integer) 3);
      if (succeeded)
      {
        MR_Word Var_117;

        Var_117 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        ll_backend__string_switch__generate_nested_trie_try_chain_7_p_0(Info_9, CodeUnitRval_36, NestedTrieInfos_59, Var_117, &TestCode_124, STATE_VARIABLE_CI_4_111, STATE_VARIABLE_CI_64);
      }
      else
        ll_backend__string_switch__generate_nested_trie_binary_search_7_p_0(Info_9, CodeUnitRval_36, NumActions_60, NestedTrieInfos_59, &TestCode_124, STATE_VARIABLE_CI_4_111, STATE_VARIABLE_CI_64);
      Var_121 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCode_124, NestedTrieCode_57);
      Var_120 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetCodeUnitCode_35, Var_121);
      *Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_34, Var_120);
    }
    else
    {
      MR_Word Var_200 = ((MR_Word) ((MR_hl_field(1, StickCodeUnits_38, 1))));

      if ((Var_200 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word NestedTrieInfosCord_154;
        MR_Integer NumActions0_155;
        MR_Word NestedTrieCode_156;
        MR_Word NestedTrieInfos0_157;
        MR_Word NestedTrieInfos_158;
        MR_Integer NumActions_159;
        MR_Integer Var_162 = (MR_Integer) ((MR_Unsigned) NumMatched_11 + (MR_Unsigned) 1);
        MR_Word Var_163;
        MR_Word Var_165;
        MR_Word STATE_VARIABLE_CI_4_166;
        MR_Word Var_173;
        MR_Word Var_174;
        MR_Word TestCode_175;

        Var_163 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_code_unit_to_action_0));
        Var_165 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        ll_backend__string_switch__convert_trie_choices_to_nested_switches_12_p_0(Info_9, VarRval_10, Var_162, ChoicePairs_37, Var_163, &NestedTrieInfosCord_154, (MR_Integer) 0, &NumActions0_155, Var_165, &NestedTrieCode_156, STATE_VARIABLE_CI_1_65, &STATE_VARIABLE_CI_4_166);
        NestedTrieInfos0_157 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_code_unit_to_action_0), NestedTrieInfosCord_154);
        if ((MaybeEnd_30 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          NestedTrieInfos_158 = NestedTrieInfos0_157;
          NumActions_159 = NumActions0_155;
        }
        else
        {
          MR_Word EndCaseId_140 = ((MR_Word) ((MR_hl_field(1, MaybeEnd_30, 0))));
          MR_Word EndNestedTrieInfo_141;
          MR_Word Var_143;

          {
            Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_143, 0) = ((MR_Box) (EndCaseId_140));
          }
          {
            EndNestedTrieInfo_141 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, EndNestedTrieInfo_141, 0) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(0, EndNestedTrieInfo_141, 1) = ((MR_Box) (Var_143));
          }
          {
            NestedTrieInfos_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NestedTrieInfos_158, 0) = ((MR_Box) (EndNestedTrieInfo_141));
            MR_hl_field(1, NestedTrieInfos_158, 1) = ((MR_Box) (NestedTrieInfos0_157));
          }
          NumActions_159 = (MR_Integer) ((MR_Unsigned) NumActions0_155 + (MR_Unsigned) 1);
        }
        succeeded = (NumActions_159 <= (MR_Integer) 3);
        if (succeeded)
        {
          MR_Word Var_151;

          Var_151 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          ll_backend__string_switch__generate_nested_trie_try_chain_7_p_0(Info_9, CodeUnitRval_36, NestedTrieInfos_158, Var_151, &TestCode_175, STATE_VARIABLE_CI_4_166, STATE_VARIABLE_CI_64);
        }
        else
          ll_backend__string_switch__generate_nested_trie_binary_search_7_p_0(Info_9, CodeUnitRval_36, NumActions_159, NestedTrieInfos_158, &TestCode_175, STATE_VARIABLE_CI_4_166, STATE_VARIABLE_CI_64);
        Var_174 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCode_175, NestedTrieCode_156);
        Var_173 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetCodeUnitCode_35, Var_174);
        *Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_34, Var_173);
      }
      else
      {
        MR_Integer NumStickCodeUnits_43;
        MR_Word CmpOp_44;
        MR_Word MatchedStickCodeUnits_45;
        MR_String MatchedStickStr_46;
        MR_String TestComment_47;
        MR_Word TestRval_48;
        MR_Word TrieNodeLabelAfterStick_49;
        MR_Word CodeAfterStick_50;
        MR_Word TrieNodeCodeAddrAfterStick_51;
        MR_Word TestCode_52;
        MR_Word TestChainCode_53;
        MR_Word Var_92;
        MR_String Var_94;
        MR_String Var_95;
        MR_String Var_96;
        MR_String Var_98;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Integer Var_101;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word MatchedCodeUnits_122;
        MR_Word Encoding_123;

        mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), StickCodeUnits_38, &NumStickCodeUnits_43);
        {
          Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_92, 0) = ((MR_Box) (NumStickCodeUnits_43));
        }
        {
          CmpOp_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CmpOp_44, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(3, CmpOp_44, 1) = ((MR_Box) (NumMatched_11));
          MR_hl_field(3, CmpOp_44, 2) = ((MR_Box) (Var_92));
        }
        mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevMatchedCodeUnits_127, &MatchedCodeUnits_122);
        ll_backend__string_switch__get_encoding_2_p_0(Info_9, &Encoding_123);
        MatchedStickCodeUnits_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MatchedCodeUnits_122, StickCodeUnits_38);
        backend_libs__string_encoding__det_from_code_unit_list_in_encoding_allow_ill_formed_3_p_0(Encoding_123, MatchedStickCodeUnits_45, &MatchedStickStr_46);
        Var_95 = mercury__string__string_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[4]), ((MR_Box) (MatchedCodeUnits_122)));
        Var_98 = mercury__string__string_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[4]), ((MR_Box) (StickCodeUnits_38)));
        Var_96 = mercury__string__f_43_43_2_f_0((MR_String) " StickCodeUnits ", Var_98);
        Var_94 = mercury__string__f_43_43_2_f_0(Var_95, Var_96);
        TestComment_47 = mercury__string__f_43_43_2_f_0((MR_String) "MatchedCodeUnits ", Var_94);
        {
          Var_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_100, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(3, Var_100, 1) = ((MR_Box) (MatchedStickStr_46));
        }
        {
          Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_99, 1) = ((MR_Box) (Var_100));
        }
        {
          TestRval_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TestRval_48, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, TestRval_48, 1) = ((MR_Box) (CmpOp_44));
          MR_hl_field(3, TestRval_48, 2) = ((MR_Box) (VarRval_10));
          MR_hl_field(3, TestRval_48, 3) = ((MR_Box) (Var_99));
        }
        Var_101 = (MR_Integer) ((MR_Unsigned) NumMatched_11 + (MR_Unsigned) NumStickCodeUnits_43);
        ll_backend__string_switch__convert_trie_to_nested_switches_8_p_0(Info_9, VarRval_10, Var_101, TrieNodeAfterStick_39, &TrieNodeLabelAfterStick_49, &CodeAfterStick_50, STATE_VARIABLE_CI_1_65, STATE_VARIABLE_CI_64);
        {
          TrieNodeCodeAddrAfterStick_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TrieNodeCodeAddrAfterStick_51, 0) = ((MR_Box) (TrieNodeLabelAfterStick_49));
        }
        {
          Var_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_104, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_104, 1) = ((MR_Box) (TestRval_48));
          MR_hl_field(3, Var_104, 2) = ((MR_Box) (TrieNodeCodeAddrAfterStick_51));
        }
        {
          Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_103, 0) = ((MR_Box) (Var_104));
          MR_hl_field(0, Var_103, 1) = ((MR_Box) (TestComment_47));
        }
        TestCode_52 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_103)));
        TestChainCode_53 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCode_52, GotoFailCode_130);
        Var_105 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestChainCode_53, CodeAfterStick_50);
        *Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_34, Var_105);
      }
    }
  }
  else
  {
    MR_Word RevMatchedCodeUnits_16 = ((MR_Word) ((MR_hl_field(0, TrieNode_12, 0))));
    MR_Word NotYetMatchedCodeUnits_17 = ((MR_Word) ((MR_hl_field(0, TrieNode_12, 1))));
    MR_Word CaseId_18 = ((MR_Word) ((MR_hl_field(0, TrieNode_12, 2))));
    MR_Word MatchedCodeUnits_19;
    MR_Word AllCodeUnits_20;
    MR_Integer NumMatchedCodeUnits_21;
    MR_Word Encoding_22;
    MR_String EndStr_23;
    MR_String NodeComment_24;
    MR_Word CondRval_25;
    MR_Word CaseRepCode_26;
    MR_Word GotoFailCode_27;
    MR_Word TrieNodeLabelCode_28;
    MR_Word Var_66;
    MR_String Var_70;
    MR_Word Var_71;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;

    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevMatchedCodeUnits_16, &MatchedCodeUnits_19);
    AllCodeUnits_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MatchedCodeUnits_19, NotYetMatchedCodeUnits_17);
    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MatchedCodeUnits_19, &NumMatchedCodeUnits_21);
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_66, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_4[0]));
      MR_hl_field(0, Var_66, 1) = ((MR_Box) (ll_backend__string_switch__convert_trie_to_nested_switches_8_p_0_2));
      MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_66, 3) = ((MR_Box) (NumMatched_11));
      MR_hl_field(0, Var_66, 4) = ((MR_Box) (NumMatchedCodeUnits_21));
    }
    mercury__require__expect_3_p_0(Var_66, (MR_String) "predicate \140ll_backend.string_switch.convert_trie_to_nested_switches\'/8", (MR_String) "NumevMatchedCodeUnits != NumMatched");
    ll_backend__string_switch__get_encoding_2_p_0(Info_9, &Encoding_22);
    backend_libs__string_encoding__det_from_code_unit_list_in_encoding_allow_ill_formed_3_p_0(Encoding_22, AllCodeUnits_20, &EndStr_23);
    Var_70 = mercury__string__string_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[4]), ((MR_Box) (AllCodeUnits_20)));
    NodeComment_24 = mercury__string__f_43_43_2_f_0((MR_String) "AllCodeUnits ", Var_70);
    {
      Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(3, Var_71, 1) = ((MR_Box) (NumMatched_11));
      MR_hl_field(3, Var_71, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(3, Var_74, 1) = ((MR_Box) (EndStr_23));
    }
    {
      Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_73, 1) = ((MR_Box) (Var_74));
    }
    {
      CondRval_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, CondRval_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, CondRval_25, 1) = ((MR_Box) (Var_71));
      MR_hl_field(3, CondRval_25, 2) = ((MR_Box) (VarRval_10));
      MR_hl_field(3, CondRval_25, 3) = ((MR_Box) (Var_73));
    }
    ll_backend__string_switch__generate_trie_case_or_fall_through_6_p_0(Info_9, CondRval_25, CaseId_18, &CaseRepCode_26, STATE_VARIABLE_CI_1_65, STATE_VARIABLE_CI_64);
    ll_backend__string_switch__generate_trie_goto_fail_code_2_p_0(Info_9, &GotoFailCode_27);
    {
      Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_77, 1) = ((MR_Box) (*TrieNodeLabel_13));
    }
    {
      Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_76, 0) = ((MR_Box) (Var_77));
      MR_hl_field(0, Var_76, 1) = ((MR_Box) (NodeComment_24));
    }
    TrieNodeLabelCode_28 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_76)));
    Var_78 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CaseRepCode_26, GotoFailCode_27);
    *Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TrieNodeLabelCode_28, Var_78);
  }
}

static void MR_CALL 
ll_backend__string_switch__get_code_unit_reg_2_p_0(
  MR_Word Info_3,
  MR_Word * CodeUnitReg_4)
{
  if (((MR_tag((MR_Word) Info_3)) == (MR_Integer) 0))
  {
    MR_Word JumpInfo_5 = (MR_Word) ((MR_Word) (Info_3));

    *CodeUnitReg_4 = ((MR_Word) ((MR_hl_field(0, JumpInfo_5, 3))));
  }
  else
  {
    MR_Word LookupInfo_6 = (MR_Word) (MR_body((MR_Word) (Info_3), (MR_Integer) 1));

    *CodeUnitReg_4 = ((MR_Word) ((MR_hl_field(0, LookupInfo_6, 2))));
  }
}

static void MR_CALL 
ll_backend__string_switch__get_encoding_2_p_0(
  MR_Word Info_3,
  MR_Word * Encoding_4)
{
  if (((MR_tag((MR_Word) Info_3)) == (MR_Integer) 0))
  {
    MR_Word JumpInfo_5 = (MR_Word) ((MR_Word) (Info_3));

    *Encoding_4 = ((MR_Unsigned) ((MR_hl_field(0, JumpInfo_5, 0))) & (MR_Integer) 1);
  }
  else
  {
    MR_Word LookupInfo_6 = (MR_Word) (MR_body((MR_Word) (Info_3), (MR_Integer) 1));

    *Encoding_4 = ((MR_Unsigned) ((MR_hl_field(0, LookupInfo_6, 0))) & (MR_Integer) 1);
  }
}

static void MR_CALL 
ll_backend__string_switch__generate_trie_goto_fail_code_2_p_0(
  MR_Word Info_3,
  MR_Word * GotoFailCode_4)
{
  if (((MR_tag((MR_Word) Info_3)) == (MR_Integer) 0))
  {
    MR_Word JumpInfo_5 = (MR_Word) ((MR_Word) (Info_3));

    *GotoFailCode_4 = ((MR_Word) ((MR_hl_field(0, JumpInfo_5, 6))));
  }
  else
  {
    MR_Word LookupInfo_6 = (MR_Word) (MR_body((MR_Word) (Info_3), (MR_Integer) 1));
    MR_Word AfterCodeAddr_7 = ((MR_Word) ((MR_hl_field(0, LookupInfo_6, 5))));
    MR_Word Var_8;
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_9, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_9, 1) = ((MR_Box) (AfterCodeAddr_7));
    }
    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(0, Var_8, 1) = ((MR_Box) ((MR_String) "no match; goto after with no case id set"));
    }
    *GotoFailCode_4 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_8)));
  }
}

static void MR_CALL 
ll_backend__string_switch__generate_nested_trie_binary_search_7_p_0(
  MR_Word Info_8,
  MR_Word CodeUnitRval_9,
  MR_Integer NumActions_10,
  MR_Word CodeUnitToActions_11,
  MR_Word * TestCode_12,
  MR_Word STATE_VARIABLE_CI_0_28,
  MR_Word * STATE_VARIABLE_CI_29)
{
  MR_bool succeeded = (NumActions_10 <= (MR_Integer) 3);

  if (succeeded)
  {
    MR_Word Var_31;

    Var_31 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    ll_backend__string_switch__generate_nested_trie_try_chain_7_p_0(Info_8, CodeUnitRval_9, CodeUnitToActions_11, Var_31, TestCode_12, STATE_VARIABLE_CI_0_28, STATE_VARIABLE_CI_29);
  }
  else
  {
    MR_Integer NumActionsR_14;
    MR_Integer NumActionsL_15;
    MR_Word CodeUnitToActionsL_16;
    MR_Word CodeUnitToActionsR_17;
    MR_Word HeadCodeUnitToActions_18;
    MR_Integer LeastCodeUnitR_19;
    MR_Word LabelR_21;
    MR_Word TestRvalLR_22;
    MR_Word TestCodeLR_24;
    MR_Word TestCodeL_25;
    MR_Word LabelCodeR_26;
    MR_Word TestCodeR_27;
    MR_Word STATE_VARIABLE_CI_2_34;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word STATE_VARIABLE_CI_3_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Box conv0_HeadCodeUnitToActions_18;

    NumActionsR_14 = mercury__int__f_slash_2_f_0(NumActions_10, (MR_Integer) 2);
    NumActionsL_15 = (MR_Integer) ((MR_Unsigned) NumActions_10 - (MR_Unsigned) NumActionsR_14);
    mercury__list__det_split_list_4_p_0((MR_Word) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_code_unit_to_action_0), NumActionsL_15, CodeUnitToActions_11, &CodeUnitToActionsL_16, &CodeUnitToActionsR_17);
    mercury__list__det_head_2_p_0((MR_Word) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_code_unit_to_action_0), CodeUnitToActionsR_17, &conv0_HeadCodeUnitToActions_18);
    HeadCodeUnitToActions_18 = ((MR_Word) (conv0_HeadCodeUnitToActions_18));
    LeastCodeUnitR_19 = ((MR_Integer) ((MR_hl_field(0, HeadCodeUnitToActions_18, 0))));
    ll_backend__code_info__get_next_label_3_p_0(&LabelR_21, STATE_VARIABLE_CI_0_28, &STATE_VARIABLE_CI_2_34);
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (LeastCodeUnitR_19));
    }
    {
      Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_38, 1) = ((MR_Box) (Var_39));
    }
    {
      TestRvalLR_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, TestRvalLR_22, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, TestRvalLR_22, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[12])));
      MR_hl_field(3, TestRvalLR_22, 2) = ((MR_Box) (CodeUnitRval_9));
      MR_hl_field(3, TestRvalLR_22, 3) = ((MR_Box) (Var_38));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (LabelR_21));
    }
    {
      Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_41, 1) = ((MR_Box) (TestRvalLR_22));
      MR_hl_field(3, Var_41, 2) = ((MR_Box) (Var_42));
    }
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) ((MR_String) "binary search on code unit"));
    }
    TestCodeLR_24 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_40)));
    ll_backend__string_switch__generate_nested_trie_binary_search_7_p_0(Info_8, CodeUnitRval_9, NumActionsL_15, CodeUnitToActionsL_16, &TestCodeL_25, STATE_VARIABLE_CI_2_34, &STATE_VARIABLE_CI_3_43);
    {
      Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_45, 1) = ((MR_Box) (LabelR_21));
    }
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(0, Var_44, 1) = ((MR_Box) ((MR_String) ""));
    }
    LabelCodeR_26 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_44)));
    ll_backend__string_switch__generate_nested_trie_binary_search_7_p_0(Info_8, CodeUnitRval_9, NumActionsR_14, CodeUnitToActionsR_17, &TestCodeR_27, STATE_VARIABLE_CI_3_43, STATE_VARIABLE_CI_29);
    Var_49 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCodeR_26, TestCodeR_27);
    Var_48 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCodeL_25, Var_49);
    *TestCode_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCodeLR_24, Var_48);
  }
}

static void MR_CALL 
ll_backend__string_switch__generate_nested_trie_try_chain_7_p_0(
  MR_Word Info_1,
  MR_Word CodeUnitRval_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_TryChainCode_0_4,
  MR_Word * STATE_VARIABLE_TryChainCode_5,
  MR_Word STATE_VARIABLE_CI_0_6,
  MR_Word * STATE_VARIABLE_CI_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word GotoFailCode_12;

      if (((MR_tag((MR_Word) Info_1)) == (MR_Integer) 0))
      {
        MR_Word JumpInfo_48 = (MR_Word) ((MR_Word) (Info_1));

        GotoFailCode_12 = ((MR_Word) ((MR_hl_field(0, JumpInfo_48, 6))));
      }
      else
      {
        MR_Word LookupInfo_49 = (MR_Word) (MR_body((MR_Word) (Info_1), (MR_Integer) 1));
        MR_Word AfterCodeAddr_50 = ((MR_Word) ((MR_hl_field(0, LookupInfo_49, 5))));
        MR_Word Var_51;
        MR_Word Var_52;

        {
          Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_52, 1) = ((MR_Box) (AfterCodeAddr_50));
        }
        {
          Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_51, 0) = ((MR_Box) (Var_52));
          MR_hl_field(0, Var_51, 1) = ((MR_Box) ((MR_String) "no match; goto after with no case id set"));
        }
        GotoFailCode_12 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_51)));
      }
      *STATE_VARIABLE_TryChainCode_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_TryChainCode_0_4, GotoFailCode_12);
      *STATE_VARIABLE_CI_7 = STATE_VARIABLE_CI_0_6;
    }
    else
    {
      MR_Word CodeUnitToAction_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word CodeUnitToActions_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Integer CodeUnit_24 = ((MR_Integer) ((MR_hl_field(0, CodeUnitToAction_20, 0))));
      MR_Word Action_25 = ((MR_Word) ((MR_hl_field(0, CodeUnitToAction_20, 1))));
      MR_Word CondRval_26;
      MR_Word TestCodeUnitCode_28;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word STATE_VARIABLE_CI_1_43;
      MR_Word STATE_VARIABLE_TryChainCode_1_44;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_TryChainCode_0_4;
      MR_Word next_value_of_STATE_VARIABLE_CI_0_6;

      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (CodeUnit_24));
      }
      {
        Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_37, 1) = ((MR_Box) (Var_38));
      }
      {
        CondRval_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, CondRval_26, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, CondRval_26, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[22])));
        MR_hl_field(3, CondRval_26, 2) = ((MR_Box) (CodeUnitRval_2));
        MR_hl_field(3, CondRval_26, 3) = ((MR_Box) (Var_37));
      }
      if (((MR_tag((MR_Word) Action_25)) == (MR_Integer) 1))
      {
        MR_Word CaseId_29 = ((MR_Word) ((MR_hl_field(1, Action_25, 0))));

        ll_backend__string_switch__generate_trie_case_or_fall_through_6_p_0(Info_1, CondRval_26, CaseId_29, &TestCodeUnitCode_28, STATE_VARIABLE_CI_0_6, &STATE_VARIABLE_CI_1_43);
      }
      else
      {
        MR_Word NestedTrieNodeLabel_27 = ((MR_Word) ((MR_hl_field(0, Action_25, 0))));
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_41;

        {
          Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_41, 0) = ((MR_Box) (NestedTrieNodeLabel_27));
        }
        {
          Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_40, 1) = ((MR_Box) (CondRval_26));
          MR_hl_field(3, Var_40, 2) = ((MR_Box) (Var_41));
        }
        {
          Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_39, 0) = ((MR_Box) (Var_40));
          MR_hl_field(0, Var_39, 1) = ((MR_Box) ((MR_String) ""));
        }
        TestCodeUnitCode_28 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_39)));
        STATE_VARIABLE_CI_1_43 = STATE_VARIABLE_CI_0_6;
      }
      STATE_VARIABLE_TryChainCode_1_44 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_TryChainCode_0_4, TestCodeUnitCode_28);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = CodeUnitToActions_21;
      next_value_of_STATE_VARIABLE_TryChainCode_0_4 = STATE_VARIABLE_TryChainCode_1_44;
      next_value_of_STATE_VARIABLE_CI_0_6 = STATE_VARIABLE_CI_1_43;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_TryChainCode_0_4 = next_value_of_STATE_VARIABLE_TryChainCode_0_4;
      STATE_VARIABLE_CI_0_6 = next_value_of_STATE_VARIABLE_CI_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__string_switch__generate_trie_case_or_fall_through_6_p_0(
  MR_Word Info_7,
  MR_Word CondRval_8,
  MR_Word CaseId_9,
  MR_Word * CaseCode_10,
  MR_Word STATE_VARIABLE_CI_0_29,
  MR_Word * STATE_VARIABLE_CI_30)
{
  if (((MR_tag((MR_Word) Info_7)) == (MR_Integer) 0))
  {
    MR_Word JumpInfo_12 = (MR_Word) ((MR_Word) (Info_7));
    MR_Word CaseIdToLabelMap_14 = ((MR_Word) ((MR_hl_field(0, JumpInfo_12, 1))));
    MR_Word CaseLabel_20;
    MR_Word CaseCodeAddr_21;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Box conv0_CaseLabel_20;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), CaseIdToLabelMap_14, ((MR_Box) (CaseId_9)), &conv0_CaseLabel_20);
    CaseLabel_20 = ((MR_Word) (conv0_CaseLabel_20));
    {
      CaseCodeAddr_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, CaseCodeAddr_21, 0) = ((MR_Box) (CaseLabel_20));
    }
    {
      Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_32, 1) = ((MR_Box) (CondRval_8));
      MR_hl_field(3, Var_32, 2) = ((MR_Box) (CaseCodeAddr_21));
    }
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(0, Var_31, 1) = ((MR_Box) ((MR_String) "if match; goto case"));
    }
    *CaseCode_10 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_31)));
    *STATE_VARIABLE_CI_30 = STATE_VARIABLE_CI_0_29;
  }
  else
  {
    MR_Word LookupInfo_22 = (MR_Word) (MR_body((MR_Word) (Info_7), (MR_Integer) 1));
    MR_Word FallThroughLabel_23;
    MR_Word CaseIdRegLval_24;
    MR_Word AfterCodeAddr_25;
    MR_Word NegCondRval_26;
    MR_Integer CaseIdNum_27;
    MR_Word CaseIdRval_28;
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
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;

    ll_backend__code_info__get_next_label_3_p_0(&FallThroughLabel_23, STATE_VARIABLE_CI_0_29, STATE_VARIABLE_CI_30);
    CaseIdRegLval_24 = ((MR_Word) ((MR_hl_field(0, LookupInfo_22, 3))));
    AfterCodeAddr_25 = ((MR_Word) ((MR_hl_field(0, LookupInfo_22, 5))));
    ll_backend__code_util__negate_rval_2_p_0(CondRval_8, &NegCondRval_26);
    CaseIdNum_27 = (MR_Integer) (CaseId_9);
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (CaseIdNum_27));
    }
    {
      CaseIdRval_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, CaseIdRval_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, CaseIdRval_28, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (FallThroughLabel_23));
    }
    {
      Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_38, 1) = ((MR_Box) (NegCondRval_26));
      MR_hl_field(3, Var_38, 2) = ((MR_Box) (Var_39));
    }
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(0, Var_37, 1) = ((MR_Box) ((MR_String) "if not match; fall through"));
    }
    {
      Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_43, 1) = ((MR_Box) (CaseIdRegLval_24));
      MR_hl_field(3, Var_43, 2) = ((MR_Box) (CaseIdRval_28));
    }
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(0, Var_42, 1) = ((MR_Box) ((MR_String) "assign CaseId"));
    }
    {
      Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_47, 1) = ((MR_Box) (AfterCodeAddr_25));
    }
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(0, Var_46, 1) = ((MR_Box) ((MR_String) "match; goto end"));
    }
    {
      Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_51, 1) = ((MR_Box) (FallThroughLabel_23));
    }
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(0, Var_50, 1) = ((MR_Box) ((MR_String) "fall through label"));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_41));
    }
    *CaseCode_10 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_36);
  }
}

static void MR_CALL 
ll_backend__string_switch__represent_tagged_cases_in_string_trie_switch_10_p_0(
  MR_Word Params_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CaseIdToLabelMap_0_3,
  MR_Word * STATE_VARIABLE_CaseIdToLabelMap_4,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_5,
  MR_Word * STATE_VARIABLE_CaseLabelMap_6,
  MR_Word STATE_VARIABLE_MaybeEnd_0_7,
  MR_Word * STATE_VARIABLE_MaybeEnd_8,
  MR_Word STATE_VARIABLE_CI_0_9,
  MR_Word * STATE_VARIABLE_CI_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CI_10 = STATE_VARIABLE_CI_0_9;
      *STATE_VARIABLE_MaybeEnd_8 = STATE_VARIABLE_MaybeEnd_0_7;
      *STATE_VARIABLE_CaseLabelMap_6 = STATE_VARIABLE_CaseLabelMap_0_5;
      *STATE_VARIABLE_CaseIdToLabelMap_4 = STATE_VARIABLE_CaseIdToLabelMap_0_3;
    }
    else
    {
      MR_Word TaggedCase_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word TaggedCases_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Label_31;
      MR_Word CaseId_35;
      MR_Word STATE_VARIABLE_CaseLabelMap_1_45;
      MR_Word STATE_VARIABLE_MaybeEnd_1_46;
      MR_Word STATE_VARIABLE_CI_1_47;
      MR_Word STATE_VARIABLE_CaseIdToLabelMap_1_49;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_CaseIdToLabelMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_CaseLabelMap_0_5;
      MR_Word next_value_of_STATE_VARIABLE_MaybeEnd_0_7;
      MR_Word next_value_of_STATE_VARIABLE_CI_0_9;

      ll_backend__switch_case__represent_tagged_case_for_llds_11_p_0(Params_1, TaggedCase_25, &Label_31, STATE_VARIABLE_CaseLabelMap_0_5, &STATE_VARIABLE_CaseLabelMap_1_45, STATE_VARIABLE_MaybeEnd_0_7, &STATE_VARIABLE_MaybeEnd_1_46, STATE_VARIABLE_CI_0_9, &STATE_VARIABLE_CI_1_47);
      CaseId_35 = ((MR_Word) ((MR_hl_field(0, TaggedCase_25, 2))));
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (CaseId_35)), ((MR_Box) (Label_31)), STATE_VARIABLE_CaseIdToLabelMap_0_3, &STATE_VARIABLE_CaseIdToLabelMap_1_49);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TaggedCases_26;
      next_value_of_STATE_VARIABLE_CaseIdToLabelMap_0_3 = STATE_VARIABLE_CaseIdToLabelMap_1_49;
      next_value_of_STATE_VARIABLE_CaseLabelMap_0_5 = STATE_VARIABLE_CaseLabelMap_1_45;
      next_value_of_STATE_VARIABLE_MaybeEnd_0_7 = STATE_VARIABLE_MaybeEnd_1_46;
      next_value_of_STATE_VARIABLE_CI_0_9 = STATE_VARIABLE_CI_1_47;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_CaseIdToLabelMap_0_3 = next_value_of_STATE_VARIABLE_CaseIdToLabelMap_0_3;
      STATE_VARIABLE_CaseLabelMap_0_5 = next_value_of_STATE_VARIABLE_CaseLabelMap_0_5;
      STATE_VARIABLE_MaybeEnd_0_7 = next_value_of_STATE_VARIABLE_MaybeEnd_0_7;
      STATE_VARIABLE_CI_0_9 = next_value_of_STATE_VARIABLE_CI_0_9;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____code_unit_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__string_switch____Unify____code_unit_action_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__string_switch____Compare____code_unit_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__string_switch____Compare____code_unit_action_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____code_unit_to_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__string_switch____Unify____code_unit_to_action_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__string_switch____Compare____code_unit_to_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__string_switch____Compare____code_unit_to_action_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_trie_switch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__string_switch____Unify____string_trie_switch_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__string_switch____Compare____string_trie_switch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__string_switch____Compare____string_trie_switch_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_trie_switch_info_jump_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__string_switch____Unify____string_trie_switch_info_jump_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__string_switch____Compare____string_trie_switch_info_jump_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__string_switch____Compare____string_trie_switch_info_jump_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_trie_switch_info_lookup_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__string_switch____Unify____string_trie_switch_info_lookup_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__string_switch____Compare____string_trie_switch_info_lookup_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__string_switch____Compare____string_trie_switch_info_lookup_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

  MR_register_type_ctor_info(&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_code_unit_action_0);
  MR_register_type_ctor_info(&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_code_unit_to_action_0);
  MR_register_type_ctor_info(&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_binary_switch_info_0);
  MR_register_type_ctor_info(&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_hash_switch_info_0);
  MR_register_type_ctor_info(&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_trie_switch_info_0);
  MR_register_type_ctor_info(&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_trie_switch_info_jump_0);
  MR_register_type_ctor_info(&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_trie_switch_info_lookup_0);
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
