/*
** Automatically generated from `string_switch.m'
** by the Mercury compiler,
** version rotd-2024-03-31
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
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.instmap.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
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

static const MR_FA_TypeInfo_Struct1 ll_backend__string_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__string_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0;

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_nested_trie_info_0_0[2];

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_nested_trie_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_nested_trie_info_0_0[1];

static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_nested_trie_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_nested_trie_info_0[1];

static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_nested_trie_info_0[1];

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

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_trie_switch_info_0_0[5];

static const MR_ConstString ll_backend__string_switch__ll_backend__string_switch__field_names_string_trie_switch_info_0_0[5];

static const MR_DuArgLocn ll_backend__string_switch__ll_backend__string_switch__field_locns_string_trie_switch_info_0_0[5];

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_trie_switch_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_trie_switch_info_0_0[1];

static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_trie_switch_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_trie_switch_info_0[1];

static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_trie_switch_info_0[1];

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__1269__1_2_p_0(
  MR_Word OutVars_21,
  MR_Word HeadVar__2_84);

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__740__1_2_p_0(
  MR_Word OutVars_21,
  MR_Word HeadVar__2_111);

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__207__1_2_p_0(
  MR_Integer NumMatched_13,
  MR_Integer NumMatchedCodeUnits_23);

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__226__1_2_p_0(
  MR_Integer NumMatched_13,
  MR_Integer NumRevMatchedCodeUnits_33);

static void MR_CALL 
ll_backend__string_switch____Compare____string_trie_switch_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____string_trie_switch_info_0_0(
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
ll_backend__string_switch____Compare____nested_trie_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____nested_trie_info_0_0(
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
  MR_Word STATE_VARIABLE_MaybeEnd_0_65,
  MR_Word * STATE_VARIABLE_MaybeEnd_66,
  MR_Word * Code_28,
  MR_Word STATE_VARIABLE_CI_0_67,
  MR_Word * STATE_VARIABLE_CI_68,
  MR_Word STATE_VARIABLE_CLD_0_69);

static void MR_CALL 
ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word STATE_VARIABLE_MainRowsCord_0_3,
  MR_Word * STATE_VARIABLE_MainRowsCord_4,
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
  MR_Word STATE_VARIABLE_RowsCord_0_2,
  MR_Word * STATE_VARIABLE_RowsCord_3);

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
  MR_Word STATE_VARIABLE_TableRowsCord_0_2,
  MR_Word * STATE_VARIABLE_TableRowsCord_3,
  MR_Word STATE_VARIABLE_MaybeTargetsCord_0_4,
  MR_Word * STATE_VARIABLE_MaybeTargetsCord_5,
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
  MR_Word STATE_VARIABLE_MaybeEnd_0_68,
  MR_Word * STATE_VARIABLE_MaybeEnd_69,
  MR_Word * Code_28,
  MR_Word STATE_VARIABLE_CI_0_70,
  MR_Word * STATE_VARIABLE_CI_71,
  MR_Word STATE_VARIABLE_CLD_0_72);

static void MR_CALL 
ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_15_p_0(
  MR_Integer Slot_16,
  MR_Integer TableSize_17,
  MR_Word HashSlotMap_18,
  MR_Word DummyOutRvals_19,
  MR_Integer NumOutVars_20,
  MR_Integer NumCollisions_21,
  MR_Word STATE_VARIABLE_MainRowsCord_0_44,
  MR_Word * STATE_VARIABLE_MainRowsCord_45,
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
  MR_Word STATE_VARIABLE_MaybeEnd_0_53,
  MR_Word * STATE_VARIABLE_MaybeEnd_54,
  MR_Word * Code_24,
  MR_Word STATE_VARIABLE_CI_0_55,
  MR_Word * STATE_VARIABLE_CI_56,
  MR_Word STATE_VARIABLE_CLD_0_57);

static void MR_CALL 
ll_backend__string_switch__construct_string_hash_simple_lookup_vector_7_p_0(
  MR_Integer Slot_8,
  MR_Integer TableSize_9,
  MR_Word HashSlotMap_10,
  MR_Integer NumCollisions_11,
  MR_Word DummyOutRvals_12,
  MR_Word STATE_VARIABLE_RowsCord_0_21,
  MR_Word * STATE_VARIABLE_RowsCord_22);

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
  MR_String SwitchKindStr_23,
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
  MR_Word STATE_VARIABLE_TableRowsCord_0_25,
  MR_Word * STATE_VARIABLE_TableRowsCord_26,
  MR_Word STATE_VARIABLE_MaybeTargetsCord_0_27,
  MR_Word * STATE_VARIABLE_MaybeTargetsCord_28);

static void MR_CALL 
ll_backend__string_switch__convert_trie_choices_to_nested_switches_13_p_0(
  MR_Word TrieSwitchInfo_1,
  MR_Word VarRval_2,
  MR_Word CaseIdToLabelMap_3,
  MR_Integer NumMatched_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_NestedTrieInfosCord_0_6,
  MR_Word * STATE_VARIABLE_NestedTrieInfosCord_7,
  MR_Integer STATE_VARIABLE_NumInfos_0_8,
  MR_Integer * STATE_VARIABLE_NumInfos_9,
  MR_Word STATE_VARIABLE_NestedTrieCode_0_10,
  MR_Word * STATE_VARIABLE_NestedTrieCode_11,
  MR_Word STATE_VARIABLE_CI_0_12,
  MR_Word * STATE_VARIABLE_CI_13);

static MR_bool MR_CALL 
ll_backend__string_switch__convert_trie_to_nested_switches_9_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__string_switch__convert_trie_to_nested_switches_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__string_switch__convert_trie_to_nested_switches_9_p_0(
  MR_Word TrieSwitchInfo_10,
  MR_Word VarRval_11,
  MR_Word CaseIdToLabelMap_12,
  MR_Integer NumMatched_13,
  MR_Word TrieNode_14,
  MR_Word * TrieNodeLabel_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_67,
  MR_Word * STATE_VARIABLE_CI_68);

static void MR_CALL 
ll_backend__string_switch__generate_nested_trie_binary_search_7_p_0(
  MR_Word GotoFailCode_8,
  MR_Word CodeUnitRval_9,
  MR_Integer NumInfos_10,
  MR_Word NestedTrieInfos_11,
  MR_Word * TestCode_12,
  MR_Word STATE_VARIABLE_CI_0_28,
  MR_Word * STATE_VARIABLE_CI_29);

static void MR_CALL 
ll_backend__string_switch__generate_nested_trie_try_chain_5_p_0(
  MR_Word GotoFailCode_1,
  MR_Word CodeUnitRval_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_TryChainCode_0_4,
  MR_Word * STATE_VARIABLE_TryChainCode_5);

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
ll_backend__string_switch____Unify____nested_trie_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__string_switch____Compare____nested_trie_info_0_0_10001(
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


static /* final */ const MR_Box ll_backend__string_switch_scalar_common_1[35][2];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_2[8][3];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_3[12][1];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_4[3][5];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_5[1][7];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_6[1][14];




static /* final */ const MR_Box ll_backend__string_switch_scalar_common_1[35][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_2[1]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_1[0]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_1[7]))
  },
  /* row  10 */
  {
    ((MR_Box) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_1[2]))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[0]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(2, &ll_backend__string_switch_scalar_common_3[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[15])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[2]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[3])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[4])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 15U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[5])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[6])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[8]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[9]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 14U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[10]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_Unsigned) 10U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[11])))
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
    ((MR_Box) (&ll_backend__string_switch_scalar_common_4[1])),
    ((MR_Box) (ll_backend__string_switch__generate_string_hash_simple_lookup_switch_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_4[1])),
    ((MR_Box) (ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_4[1])),
    ((MR_Box) (ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_3[12][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "string trie switch")) },
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
  { ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0))))) },
  /* row   8 */
  { ((MR_Box) ((MR_String) "string binary simple lookup switch")) },
  /* row   9 */
  { ((MR_Box) ((MR_String) "string binary multi soln lookup switch")) },
  /* row  10 */
  { ((MR_Box) ((MR_String) "unreachable; fail code in cannot_fail switch")) },
  /* row  11 */
  { ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[18]))) },
};

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_4[3][5] = {
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
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__string_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__string_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_nested_trie_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
};

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_nested_trie_info_0_0 = {
  (MR_String) "nested_trie_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__string_switch__ll_backend__string_switch__field_types_nested_trie_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_nested_trie_info_0_0[1] = { &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_nested_trie_info_0_0 };

static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_nested_trie_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_nested_trie_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_nested_trie_info_0[1] = { &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_nested_trie_info_0_0 };

static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_nested_trie_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_nested_trie_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__string_switch____Unify____nested_trie_info_0_0_10001)),
  ((MR_Box) (ll_backend__string_switch____Compare____nested_trie_info_0_0_10001)),
  (MR_String) "ll_backend.string_switch",
  (MR_String) "nested_trie_info",
  { ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_nested_trie_info_0 },
  { ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_nested_trie_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__string_switch__ll_backend__string_switch__functor_number_map_nested_trie_info_0,

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

static const MR_PseudoTypeInfo ll_backend__string_switch__ll_backend__string_switch__field_types_string_trie_switch_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__string__string__type_ctor_info_string_encoding_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_position_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__string_switch__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0)
};

static const MR_ConstString ll_backend__string_switch__ll_backend__string_switch__field_names_string_trie_switch_info_0_0[5] = {
  (MR_String) "stsi_encoding",
  (MR_String) "stsi_code_unit_reg",
  (MR_String) "stsi_branch_start",
  (MR_String) "stsi_fail_label",
  (MR_String) "stsi_fail_code"
};

static const MR_DuArgLocn ll_backend__string_switch__ll_backend__string_switch__field_locns_string_trie_switch_info_0_0[5] = {
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
  }
};

static const MR_DuFunctorDesc ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_trie_switch_info_0_0 = {
  (MR_String) "string_trie_switch_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__string_switch__ll_backend__string_switch__field_types_string_trie_switch_info_0_0,
  ll_backend__string_switch__ll_backend__string_switch__field_names_string_trie_switch_info_0_0,
  ll_backend__string_switch__ll_backend__string_switch__field_locns_string_trie_switch_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_trie_switch_info_0_0[1] = { &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_trie_switch_info_0_0 };

static const MR_DuPtagLayout ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_trie_switch_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__string_switch__ll_backend__string_switch__du_stag_ordered_string_trie_switch_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_trie_switch_info_0[1] = { &ll_backend__string_switch__ll_backend__string_switch__du_functor_desc_string_trie_switch_info_0_0 };

static const MR_Integer ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_trie_switch_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_trie_switch_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__string_switch____Unify____string_trie_switch_info_0_0_10001)),
  ((MR_Box) (ll_backend__string_switch____Compare____string_trie_switch_info_0_0_10001)),
  (MR_String) "ll_backend.string_switch",
  (MR_String) "string_trie_switch_info",
  { ll_backend__string_switch__ll_backend__string_switch__du_name_ordered_string_trie_switch_info_0 },
  { ll_backend__string_switch__ll_backend__string_switch__du_ptag_ordered_string_trie_switch_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__string_switch__ll_backend__string_switch__functor_number_map_string_trie_switch_info_0,

};

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__1269__1_2_p_0(
  MR_Word OutVars_21,
  MR_Word HeadVar__2_84)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[9]), ((MR_Box) (OutVars_21)), ((MR_Box) (HeadVar__2_84)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__740__1_2_p_0(
  MR_Word OutVars_21,
  MR_Word HeadVar__2_111)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[9]), ((MR_Box) (OutVars_21)), ((MR_Box) (HeadVar__2_111)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__207__1_2_p_0(
  MR_Integer NumMatched_13,
  MR_Integer NumMatchedCodeUnits_23)
{
  MR_bool succeeded = (NumMatchedCodeUnits_23 == NumMatched_13);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__226__1_2_p_0(
  MR_Integer NumMatched_13,
  MR_Integer NumRevMatchedCodeUnits_33)
{
  MR_bool succeeded = (NumRevMatchedCodeUnits_33 == NumMatched_13);

  return succeeded;
}

static void MR_CALL 
ll_backend__string_switch____Compare____string_trie_switch_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word SubResult1_6;
    MR_Integer Var_25 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_26 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_25 < Var_26);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_25 > Var_26);
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

      ll_backend__llds____Compare____lval_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
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

          ll_backend__llds____Compare____label_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[11]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
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
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = ll_backend__llds____Unify____lval_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = ll_backend__code_loc_dep____Unify____position_info_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = ll_backend__llds____Unify____label_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&ll_backend__string_switch_scalar_common_1[11]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
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
                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[11]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
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
                  TypeInfo_28_28 = (MR_Word) (&ll_backend__string_switch_scalar_common_1[11]);
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
                      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[11]), HeadVar__1_1, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
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
                      TypeInfo_34_34 = (MR_Word) (&ll_backend__string_switch_scalar_common_1[11]);
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
ll_backend__string_switch____Compare____nested_trie_info_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
      ll_backend__llds____Compare____label_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
ll_backend__string_switch____Unify____nested_trie_info_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = ll_backend__llds____Unify____label_0_0(ArgX2_5, ArgY2_6);
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
  MR_Word * STATE_VARIABLE_MaybeEnd_31,
  MR_Word * Code_15,
  MR_Word * STATE_VARIABLE_CI_32)
{
  MR_Word KeyToCaseIdMap_17 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 0))));
  MR_Word CaseConsts_18 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 1))));
  MR_Word OutVars_19 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 2))));
  MR_Word OutTypes_20 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 3))));
  MR_Word Liveness_21 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 4))));
  MR_Word CLD_22 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 7))));
  MR_Word STATE_VARIABLE_MaybeEnd_33_33 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 5))));
  MR_Word STATE_VARIABLE_CI_34_34 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 6))));

  if (((MR_tag((MR_Word) CaseConsts_18)) == (MR_Integer) 0))
  {
    MR_Word CaseIdToValuesMap_23 = ((MR_Word) ((MR_hl_field(0, CaseConsts_18, (MR_Integer) 0))));
    MR_Word KeyToValuesMap_24;
    MR_Word KeyValuesAL_25;

    mercury__map__compose_maps_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), KeyToCaseIdMap_17, CaseIdToValuesMap_23, &KeyToValuesMap_24);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), KeyToValuesMap_24, &KeyValuesAL_25);
    ll_backend__string_switch__generate_string_binary_simple_lookup_switch_14_p_0(VarRval_9, KeyValuesAL_25, OutVars_19, OutTypes_20, Liveness_21, CanFail_11, EndLabel_12, StoreMap_13, STATE_VARIABLE_MaybeEnd_33_33, STATE_VARIABLE_MaybeEnd_31, Code_15, STATE_VARIABLE_CI_34_34, STATE_VARIABLE_CI_32, CLD_22);
  }
  else
  {
    MR_Word CaseIdToSolnsMap_26 = ((MR_Word) ((MR_hl_field(1, CaseConsts_18, (MR_Integer) 0))));
    MR_Word ResumeVars_27;
    MR_Word GoalsMayModifyTrail_28;
    MR_Word KeyToSolnsMap_29;
    MR_Word KeySolnsAL_30;
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, CaseConsts_18, (MR_Integer) 1))));

    ResumeVars_27 = ((MR_Word) ((MR_hl_field(0, Var_37, (MR_Integer) 0))));
    GoalsMayModifyTrail_28 = ((MR_Unsigned) ((MR_hl_field(0, Var_37, (MR_Integer) 1))) & (MR_Integer) 1);
    mercury__map__compose_maps_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[2]), KeyToCaseIdMap_17, CaseIdToSolnsMap_26, &KeyToSolnsMap_29);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[2]), KeyToSolnsMap_29, &KeySolnsAL_30);
    ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0(VarRval_9, KeySolnsAL_30, ResumeVars_27, GoalsMayModifyTrail_28, OutVars_19, OutTypes_20, Liveness_21, CanFail_11, EndLabel_12, StoreMap_13, STATE_VARIABLE_MaybeEnd_33_33, STATE_VARIABLE_MaybeEnd_31, Code_15, STATE_VARIABLE_CI_34_34, STATE_VARIABLE_CI_32, CLD_22);
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

  succeeded = ll_backend__string_switch__IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__1269__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
  MR_Word STATE_VARIABLE_MaybeEnd_0_65,
  MR_Word * STATE_VARIABLE_MaybeEnd_66,
  MR_Word * Code_28,
  MR_Word STATE_VARIABLE_CI_0_67,
  MR_Word * STATE_VARIABLE_CI_68,
  MR_Word STATE_VARIABLE_CLD_0_69)
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
  MR_Word MainRowsCord_43;
  MR_Word LaterSolnArrayCord_44;
  MR_Integer OneSolnCaseCount_45;
  MR_Integer SeveralSolnsCaseCount_46;
  MR_Word MainRows_47;
  MR_Word LaterSolnArray_48;
  MR_Word AscendingSortedCountKinds_49;
  MR_Word DescendingSortedCountKinds_50;
  MR_Word DescendingSortedKinds_51;
  MR_Word OoMDescendingSortedKinds_52;
  MR_Word MainRowTypes_53;
  MR_Integer MainNumColumns_54;
  MR_Word MainVectorAddr_55;
  MR_Word MainVectorAddrRval_56;
  MR_Word LaterVectorAddr_57;
  MR_Word LaterVectorAddrRval_58;
  MR_Word BaseReg_59;
  MR_Word BinarySearchCode_60;
  MR_Word MidReg_61;
  MR_Word SetBaseRegCode_62;
  MR_Word LookupResultsCode_63;
  MR_Word EndLabelCode_64;
  MR_Word STATE_VARIABLE_CI_70_70;
  MR_Word Var_77;
  MR_Word Var_79;
  MR_Word Var_81;
  MR_Word Var_86;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_100;
  MR_Word STATE_VARIABLE_CI_103_103;
  MR_Word Var_104;
  MR_Word STATE_VARIABLE_CI_106_106;
  MR_Word Var_107;
  MR_Word STATE_VARIABLE_CLD_110_110;
  MR_Word Var_111;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word Var_118;
  MR_Word Var_121;
  MR_Word Var_122;
  MR_Word Var_123;
  MR_Word Var_128;
  MR_Word Var_129;
  MR_Word Var_131;
  MR_Word Var_132;
  MR_Word Var_133;

  ll_backend__string_switch__init_string_binary_switch_info_5_p_0(CanFail_24, &BinarySwitchInfo_31, STATE_VARIABLE_CI_0_67, &STATE_VARIABLE_CI_70_70, STATE_VARIABLE_CLD_0_69);
  CommentCode_32 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[29])));
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_2[4]), CaseSolns_18, &MainTableSize_33);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[7]), OutVars_21, &NumOutVars_34);
  mercury__list__duplicate_3_p_0((MR_Word) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0), NumOutVars_34, ((MR_Box) ((MR_Integer) 2)), &OutElemTypes_35);
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) (OutElemTypes_35));
  }
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_79));
  }
  {
    ArrayElemTypes_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArrayElemTypes_36, 0) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(1, ArrayElemTypes_36, 1) = ((MR_Box) (Var_77));
  }
  {
    ArrayElemType_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArrayElemType_37, 0) = ((MR_Box) (ArrayElemTypes_36));
  }
  {
    Var_81 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_81, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_4[2]));
    MR_hl_field(0, Var_81, 1) = ((MR_Box) (ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_1));
    MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_81, 3) = ((MR_Box) (OutVars_21));
    MR_hl_field(0, Var_81, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_not_3_p_0(Var_81, (MR_String) "predicate \140ll_backend.string_switch.generate_string_binary_several_soln_lookup_switch\'/16", (MR_String) "no OutVars");
  switch (GoalsMayModifyTrail_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      AddTrailOps_39 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      ll_backend__code_info__get_emit_trail_ops_2_p_0(STATE_VARIABLE_CI_70_70, &AddTrailOps_39);
      break;
  }
  DummyLaterSolnRow_41 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__string_switch_scalar_common_2[7]), OutTypes_22);
  LaterSolnArrayCord0_42 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), ((MR_Box) (DummyLaterSolnRow_41)));
  Var_86 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]));
  ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_p_0(CaseSolns_18, NumOutVars_34, Var_86, &MainRowsCord_43, (MR_Integer) 1, LaterSolnArrayCord0_42, &LaterSolnArrayCord_44, (MR_Integer) 0, &OneSolnCaseCount_45, (MR_Integer) 0, &SeveralSolnsCaseCount_46);
  MainRows_47 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), MainRowsCord_43);
  LaterSolnArray_48 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), LaterSolnArrayCord_44);
  {
    Var_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_90, 0) = ((MR_Box) (OneSolnCaseCount_45));
    MR_hl_field(0, Var_90, 1) = ((MR_Box) ((MR_Integer) 1));
  }
  {
    Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_93, 0) = ((MR_Box) (SeveralSolnsCaseCount_46));
    MR_hl_field(0, Var_93, 1) = ((MR_Box) ((MR_Integer) 2));
  }
  {
    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
    MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
    MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_92));
  }
  mercury__list__sort_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_2[2]), Var_89, &AscendingSortedCountKinds_49);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_2[2]), AscendingSortedCountKinds_49, &DescendingSortedCountKinds_50);
  mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0), DescendingSortedCountKinds_50, &DescendingSortedKinds_51);
  mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0), DescendingSortedKinds_51, &OoMDescendingSortedKinds_52);
  Var_98 = (MR_Word) (MR_mkword(2, &ll_backend__string_switch_scalar_common_3[1]));
  {
    Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_100, 0) = ((MR_Box) (Var_98));
    MR_hl_field(1, Var_100, 1) = ((MR_Box) (OutTypes_22));
  }
  {
    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
    MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_100));
  }
  {
    MainRowTypes_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MainRowTypes_53, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, MainRowTypes_53, 1) = ((MR_Box) (Var_97));
  }
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), MainRowTypes_53, &MainNumColumns_54);
  ll_backend__code_info__add_vector_static_cell_5_p_0(MainRowTypes_53, MainRows_47, &MainVectorAddr_55, STATE_VARIABLE_CI_70_70, &STATE_VARIABLE_CI_103_103);
  {
    Var_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_104, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_104, 1) = ((MR_Box) (MainVectorAddr_55));
    MR_hl_field(3, Var_104, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MainVectorAddrRval_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MainVectorAddrRval_56, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MainVectorAddrRval_56, 1) = ((MR_Box) (Var_104));
  }
  ll_backend__code_info__add_vector_static_cell_5_p_0(OutTypes_22, LaterSolnArray_48, &LaterVectorAddr_57, STATE_VARIABLE_CI_103_103, &STATE_VARIABLE_CI_106_106);
  {
    Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_107, 1) = ((MR_Box) (LaterVectorAddr_57));
    MR_hl_field(3, Var_107, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    LaterVectorAddrRval_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LaterVectorAddrRval_58, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, LaterVectorAddrRval_58, 1) = ((MR_Box) (Var_107));
  }
  ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(StoreMap_26, (MR_Integer) 0, &BaseReg_59, STATE_VARIABLE_CLD_0_69, &STATE_VARIABLE_CLD_110_110);
  ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(BinarySwitchInfo_31, VarRval_17, MainVectorAddrRval_56, ArrayElemType_37, MainTableSize_33, MainNumColumns_54, &BinarySearchCode_60);
  MidReg_61 = ((MR_Word) ((MR_hl_field(0, BinarySwitchInfo_31, (MR_Integer) 2))));
  {
    Var_121 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_121, 0) = ((MR_Box) (MidReg_61));
  }
  {
    Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_123, 0) = ((MR_Box) (MainNumColumns_54));
  }
  {
    Var_122 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_122, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_122, 1) = ((MR_Box) (Var_123));
  }
  {
    Var_118 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_118, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_118, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[20])));
    MR_hl_field(3, Var_118, 2) = ((MR_Box) (Var_121));
    MR_hl_field(3, Var_118, 3) = ((MR_Box) (Var_122));
  }
  {
    Var_114 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_114, 0) = ((MR_Box) (MainVectorAddrRval_56));
    MR_hl_field(2, Var_114, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[7])));
    MR_hl_field(2, Var_114, 2) = ((MR_Box) (Var_118));
  }
  {
    Var_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_113, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_113, 1) = ((MR_Box) (Var_114));
  }
  {
    Var_112 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_112, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_112, 1) = ((MR_Box) (BaseReg_59));
    MR_hl_field(3, Var_112, 2) = ((MR_Box) (Var_113));
  }
  {
    Var_111 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_111, 0) = ((MR_Box) (Var_112));
    MR_hl_field(0, Var_111, 1) = ((MR_Box) ((MR_String) "set up base reg"));
  }
  SetBaseRegCode_62 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_111)));
  ll_backend__lookup_switch__generate_code_for_all_kinds_16_p_0(OoMDescendingSortedKinds_52, (MR_Integer) 1, OutVars_21, ResumeVars_19, EndLabel_25, StoreMap_26, Liveness_23, AddTrailOps_39, BaseReg_59, LaterVectorAddrRval_58, &LookupResultsCode_63, STATE_VARIABLE_MaybeEnd_0_65, STATE_VARIABLE_MaybeEnd_66, STATE_VARIABLE_CI_106_106, STATE_VARIABLE_CI_68, STATE_VARIABLE_CLD_110_110);
  {
    Var_129 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_129, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_129, 1) = ((MR_Box) (EndLabel_25));
  }
  {
    Var_128 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_128, 0) = ((MR_Box) (Var_129));
    MR_hl_field(0, Var_128, 1) = ((MR_Box) ((MR_String) "end of string binary multi solns lookup switch"));
  }
  EndLabelCode_64 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_128)));
  Var_133 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LookupResultsCode_63, EndLabelCode_64);
  Var_132 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetBaseRegCode_62, Var_133);
  Var_131 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BinarySearchCode_60, Var_132);
  *Code_28 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CommentCode_32, Var_131);
}

static void MR_CALL 
ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word STATE_VARIABLE_MainRowsCord_0_3,
  MR_Word * STATE_VARIABLE_MainRowsCord_4,
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
      *STATE_VARIABLE_MainRowsCord_4 = STATE_VARIABLE_MainRowsCord_0_3;
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
      MR_Word STATE_VARIABLE_MainRowsCord_75_75;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MainRowsCord_0_3;
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
        ZeroRval_37 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[25]));
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
      mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), ((MR_Box) (MainRow_38)), STATE_VARIABLE_MainRowsCord_0_3, &STATE_VARIABLE_MainRowsCord_75_75);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = StrSolns_28;
      next_value_of_STATE_VARIABLE_MainRowsCord_0_3 = STATE_VARIABLE_MainRowsCord_75_75;
      next_value_of_HeadVar__5_5 = STATE_VARIABLE_LaterNextRow_72_72;
      next_value_of_STATE_VARIABLE_LaterSolnArray_0_6 = STATE_VARIABLE_LaterSolnArray_73_73;
      next_value_of_STATE_VARIABLE_OneSolnCaseCount_0_8 = STATE_VARIABLE_OneSolnCaseCount_57_57;
      next_value_of_HeadVar__10_10 = STATE_VARIABLE_SeveralSolnsCaseCount_63_63;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MainRowsCord_0_3 = next_value_of_STATE_VARIABLE_MainRowsCord_0_3;
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
  MR_Word VectorRvalsCord_35;
  MR_Word VectorRvals_36;
  MR_Word RowElemTypes_37;
  MR_Word VectorAddr_38;
  MR_Word VectorAddrRval_39;
  MR_Word BinarySearchCode_40;
  MR_Word SetBaseRegCode_41;
  MR_Word BranchEndCode_47;
  MR_Word EndLabelCode_48;
  MR_Word STATE_VARIABLE_CI_54_54;
  MR_Word Var_62;
  MR_Word Var_65;
  MR_Word STATE_VARIABLE_CLD_84_84;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word _MaybeEnd_46;

  ll_backend__string_switch__init_string_binary_switch_info_5_p_0(CanFail_20, &BinarySwitchInfo_27, STATE_VARIABLE_CI_0_51, &STATE_VARIABLE_CI_54_54, STATE_VARIABLE_CLD_0_53);
  CommentCode_28 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[28])));
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_2[3]), CaseValues_16, &TableSize_29);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[7]), OutVars_17, &NumOutVars_30);
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
  Var_62 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]));
  ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_p_0(CaseValues_16, Var_62, &VectorRvalsCord_35);
  VectorRvals_36 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), VectorRvalsCord_35);
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
  ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(BinarySwitchInfo_27, VarRval_15, VectorAddrRval_39, ArrayElemType_34, TableSize_29, NumColumns_31, &BinarySearchCode_40);
  if ((OutVars_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    SetBaseRegCode_41 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    STATE_VARIABLE_CLD_84_84 = STATE_VARIABLE_CLD_0_53;
  }
  else
  {
    MR_Word BaseReg_44;
    MR_Word MidReg_45;
    MR_Word STATE_VARIABLE_CLD_68_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_76;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;

    ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(StoreMap_22, (MR_Integer) 0, &BaseReg_44, STATE_VARIABLE_CLD_0_53, &STATE_VARIABLE_CLD_68_68);
    MidReg_45 = ((MR_Word) ((MR_hl_field(0, BinarySwitchInfo_27, (MR_Integer) 2))));
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_79, 0) = ((MR_Box) (MidReg_45));
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
      MR_hl_field(3, Var_76, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[20])));
      MR_hl_field(3, Var_76, 2) = ((MR_Box) (Var_79));
      MR_hl_field(3, Var_76, 3) = ((MR_Box) (Var_80));
    }
    {
      Var_72 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_72, 0) = ((MR_Box) (VectorAddrRval_39));
      MR_hl_field(2, Var_72, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[7])));
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
      MR_hl_field(3, Var_70, 1) = ((MR_Box) (BaseReg_44));
      MR_hl_field(3, Var_70, 2) = ((MR_Box) (Var_71));
    }
    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_69, 0) = ((MR_Box) (Var_70));
      MR_hl_field(0, Var_69, 1) = ((MR_Box) ((MR_String) "set up base reg"));
    }
    SetBaseRegCode_41 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_69)));
    ll_backend__lookup_util__generate_offset_assigns_6_p_0(OutVars_17, (MR_Integer) 1, BaseReg_44, *STATE_VARIABLE_CI_52, STATE_VARIABLE_CLD_68_68, &STATE_VARIABLE_CLD_84_84);
  }
  ll_backend__lookup_util__set_liveness_and_end_branch_6_p_0(StoreMap_22, Liveness_19, (MR_Word) ((MR_Unsigned) 0U), &_MaybeEnd_46, &BranchEndCode_47, STATE_VARIABLE_CLD_84_84);
  {
    Var_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_87, 1) = ((MR_Box) (EndLabel_21));
  }
  {
    Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_86, 0) = ((MR_Box) (Var_87));
    MR_hl_field(0, Var_86, 1) = ((MR_Box) ((MR_String) "end of string binary single soln lookup switch"));
  }
  EndLabelCode_48 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_86)));
  Var_91 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BranchEndCode_47, EndLabelCode_48);
  Var_90 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetBaseRegCode_41, Var_91);
  Var_89 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BinarySearchCode_40, Var_90);
  *Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CommentCode_28, Var_89);
  *STATE_VARIABLE_MaybeEnd_50 = STATE_VARIABLE_MaybeEnd_0_49;
}

static void MR_CALL 
ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RowsCord_0_2,
  MR_Word * STATE_VARIABLE_RowsCord_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RowsCord_3 = STATE_VARIABLE_RowsCord_0_2;
    else
    {
      MR_String Str_7;
      MR_Word OutRvals_8;
      MR_Word StrsOutRvals_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word RowRvals_11;
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_15;
      MR_Word Var_16;
      MR_Word STATE_VARIABLE_RowsCord_17_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RowsCord_0_2;

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
      mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), ((MR_Box) (RowRvals_11)), STATE_VARIABLE_RowsCord_0_2, &STATE_VARIABLE_RowsCord_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = StrsOutRvals_9;
      next_value_of_STATE_VARIABLE_RowsCord_0_2 = STATE_VARIABLE_RowsCord_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RowsCord_0_2 = next_value_of_STATE_VARIABLE_RowsCord_0_2;
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
  MR_Word CommentCode_27;
  MR_Word CaseLabelMap0_28;
  MR_Word CaseLabelMap_29;
  MR_Word SortedTable_31;
  MR_Word TableRowsCord_32;
  MR_Word TargetsCord_33;
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
  MR_Word Var_60;
  MR_Word Var_61;
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
    MR_hl_field(0, Params_26, 0) = ((MR_Box) (VarName_14));
    MR_hl_field(0, Params_26, 1) = ((MR_Box) (SwitchGoalInfo_18));
    MR_hl_field(0, Params_26, 2) = (MR_Box) ((MR_Unsigned) (CodeModel_16));
    MR_hl_field(0, Params_26, 3) = ((MR_Box) (BranchStart_25));
    MR_hl_field(0, Params_26, 4) = ((MR_Box) (EndLabel_19));
  }
  CommentCode_27 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[19])));
  mercury__map__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0), &CaseLabelMap0_28);
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_6[0]));
    MR_hl_field(0, Var_56, 1) = ((MR_Box) (ll_backend__string_switch__generate_string_binary_switch_12_p_0_1));
    MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_56, 3) = ((MR_Box) (Params_26));
  }
  backend_libs__string_switch_util__string_binary_cases_11_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__string_switch_scalar_common_2[0]), (MR_Word) (&ll_backend__string_switch_scalar_common_1[3]), (MR_Word) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), TaggedCases_15, Var_56, ((MR_Box) (CaseLabelMap0_28)), &conv7_CaseLabelMap_29, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_MaybeEnd_20, ((MR_Box) (STATE_VARIABLE_CI_51_51)), &conv5_STATE_VARIABLE_CI_58_58, ((MR_Box) ((MR_Integer) 0)), &conv4_Var_30, &SortedTable_31);
  CaseLabelMap_29 = ((MR_Word) (conv7_CaseLabelMap_29));
  *MaybeEnd_20 = ((MR_Word) (conv6_MaybeEnd_20));
  STATE_VARIABLE_CI_58_58 = ((MR_Word) (conv5_STATE_VARIABLE_CI_58_58));
  Var_60 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]));
  Var_61 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[1]));
  ll_backend__string_switch__gen_string_binary_jump_slots_7_p_0(SortedTable_31, Var_60, &TableRowsCord_32, Var_61, &TargetsCord_33, (MR_Integer) 0, &TableSize_34);
  TableRows_35 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), TableRowsCord_32);
  Targets_36 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[1]), TargetsCord_33);
  ll_backend__code_info__add_vector_static_cell_5_p_0((MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[16])), TableRows_35, &TableAddr_39, STATE_VARIABLE_CI_58_58, STATE_VARIABLE_CI_50);
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
  ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(BinarySwitchInfo_24, VarRval_13, TableAddrRval_42, (MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[11])), TableSize_34, (MR_Integer) 2, &BinarySearchCode_43);
  MidReg_44 = ((MR_Word) ((MR_hl_field(0, BinarySwitchInfo_24, (MR_Integer) 2))));
  {
    Var_85 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_85, 0) = ((MR_Box) (MidReg_44));
  }
  {
    Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_82, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[20])));
    MR_hl_field(3, Var_82, 2) = ((MR_Box) (Var_85));
    MR_hl_field(3, Var_82, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[21])));
  }
  {
    Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_79, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[1])));
    MR_hl_field(3, Var_79, 2) = ((MR_Box) (Var_82));
    MR_hl_field(3, Var_79, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[22])));
  }
  {
    Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_77, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[34])));
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
  MR_Word Var_31 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[25]));
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
    MR_hl_field(3, Var_48, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[30])));
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
    MR_hl_field(3, Var_58, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[31])));
    MR_hl_field(3, Var_58, 2) = ((MR_Box) (Var_61));
    MR_hl_field(3, Var_58, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[21])));
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
    MR_hl_field(3, Var_77, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[20])));
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
    MR_hl_field(3, Var_87, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[24])));
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
  Var_103 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[22]));
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
    MR_hl_field(3, Var_119, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[32])));
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
        FailCode_19 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[33])));
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
  MR_Word STATE_VARIABLE_TableRowsCord_0_2,
  MR_Word * STATE_VARIABLE_TableRowsCord_3,
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
      *STATE_VARIABLE_TableRowsCord_3 = STATE_VARIABLE_TableRowsCord_0_2;
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
      MR_Word STATE_VARIABLE_TableRowsCord_37_37;
      MR_Word Var_38;
      MR_Word STATE_VARIABLE_MaybeTargetsCord_39_39;
      MR_Integer STATE_VARIABLE_CurIndex_40_40;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TableRowsCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_MaybeTargetsCord_0_4;
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
      mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), ((MR_Box) (Row_23)), STATE_VARIABLE_TableRowsCord_0_2, &STATE_VARIABLE_TableRowsCord_37_37);
      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (Label_18));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[1]), ((MR_Box) (Var_38)), STATE_VARIABLE_MaybeTargetsCord_0_4, &STATE_VARIABLE_MaybeTargetsCord_39_39);
      STATE_VARIABLE_CurIndex_40_40 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurIndex_0_6 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = StrLabels_19;
      next_value_of_STATE_VARIABLE_TableRowsCord_0_2 = STATE_VARIABLE_TableRowsCord_37_37;
      next_value_of_STATE_VARIABLE_MaybeTargetsCord_0_4 = STATE_VARIABLE_MaybeTargetsCord_39_39;
      next_value_of_STATE_VARIABLE_CurIndex_0_6 = STATE_VARIABLE_CurIndex_40_40;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TableRowsCord_0_2 = next_value_of_STATE_VARIABLE_TableRowsCord_0_2;
      STATE_VARIABLE_MaybeTargetsCord_0_4 = next_value_of_STATE_VARIABLE_MaybeTargetsCord_0_4;
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
  MR_Word * STATE_VARIABLE_MaybeEnd_31,
  MR_Word * Code_15,
  MR_Word * STATE_VARIABLE_CI_32)
{
  MR_Word KeyToCaseIdMap_17 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 0))));
  MR_Word CaseConsts_18 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 1))));
  MR_Word OutVars_19 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 2))));
  MR_Word OutTypes_20 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 3))));
  MR_Word Liveness_21 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 4))));
  MR_Word CLD_22 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 7))));
  MR_Word STATE_VARIABLE_MaybeEnd_33_33 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 5))));
  MR_Word STATE_VARIABLE_CI_34_34 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 6))));

  if (((MR_tag((MR_Word) CaseConsts_18)) == (MR_Integer) 0))
  {
    MR_Word CaseIdToValuesMap_23 = ((MR_Word) ((MR_hl_field(0, CaseConsts_18, (MR_Integer) 0))));
    MR_Word KeyToValuesMap_24;
    MR_Word KeyValuesAL_25;

    mercury__map__compose_maps_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), KeyToCaseIdMap_17, CaseIdToValuesMap_23, &KeyToValuesMap_24);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), KeyToValuesMap_24, &KeyValuesAL_25);
    ll_backend__string_switch__generate_string_hash_simple_lookup_switch_14_p_0(VarRval_9, KeyValuesAL_25, OutVars_19, OutTypes_20, Liveness_21, CanFail_11, EndLabel_12, StoreMap_13, STATE_VARIABLE_MaybeEnd_33_33, STATE_VARIABLE_MaybeEnd_31, Code_15, STATE_VARIABLE_CI_34_34, STATE_VARIABLE_CI_32, CLD_22);
  }
  else
  {
    MR_Word CaseIdToSolnsMap_26 = ((MR_Word) ((MR_hl_field(1, CaseConsts_18, (MR_Integer) 0))));
    MR_Word ResumeVars_27;
    MR_Word GoalsMayModifyTrail_28;
    MR_Word KeyToSolnsMap_29;
    MR_Word KeySolnsAL_30;
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, CaseConsts_18, (MR_Integer) 1))));

    ResumeVars_27 = ((MR_Word) ((MR_hl_field(0, Var_37, (MR_Integer) 0))));
    GoalsMayModifyTrail_28 = ((MR_Unsigned) ((MR_hl_field(0, Var_37, (MR_Integer) 1))) & (MR_Integer) 1);
    mercury__map__compose_maps_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[2]), KeyToCaseIdMap_17, CaseIdToSolnsMap_26, &KeyToSolnsMap_29);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[2]), KeyToSolnsMap_29, &KeySolnsAL_30);
    ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0(VarRval_9, KeySolnsAL_30, ResumeVars_27, GoalsMayModifyTrail_28, OutVars_19, OutTypes_20, Liveness_21, CanFail_11, EndLabel_12, StoreMap_13, STATE_VARIABLE_MaybeEnd_33_33, STATE_VARIABLE_MaybeEnd_31, Code_15, STATE_VARIABLE_CI_34_34, STATE_VARIABLE_CI_32, CLD_22);
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

  succeeded = ll_backend__string_switch__IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__740__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
  MR_Word STATE_VARIABLE_MaybeEnd_0_68,
  MR_Word * STATE_VARIABLE_MaybeEnd_69,
  MR_Word * Code_28,
  MR_Word STATE_VARIABLE_CI_0_70,
  MR_Word * STATE_VARIABLE_CI_71,
  MR_Word STATE_VARIABLE_CLD_0_72)
{
  MR_bool succeeded;
  MR_Word HashSwitchInfo_31;
  MR_Integer TableSize_32;
  MR_Word HashSlotsMap_33;
  MR_Word HashOp_34;
  MR_Integer NumCollisions_35;
  MR_Integer HashMask_36;
  MR_Integer NumOutVars_37;
  MR_Word OutElemTypes_38;
  MR_Integer NumColumns_39;
  MR_Integer NumPrevColumns_40;
  MR_Word ArrayElemTypes_41;
  MR_Word MainRowTypes_42;
  MR_Word ArrayElemType_43;
  MR_Word AddTrailOps_45;
  MR_Word DummyOutRvals_47;
  MR_Word LaterSolnArrayCord0_48;
  MR_Word MainRowsCord_49;
  MR_Word LaterSolnArrayCord_50;
  MR_Integer OneSolnCaseCount_51;
  MR_Integer SeveralSolnsCaseCount_52;
  MR_Word MainRows_53;
  MR_Word LaterSolnArray_54;
  MR_Word AscendingSortedCountKinds_55;
  MR_Word DescendingSortedCountKinds_56;
  MR_Word DescendingSortedKinds_57;
  MR_Word OoMDescendingSortedKinds_58;
  MR_Word MainVectorAddr_59;
  MR_Word MainVectorAddrRval_60;
  MR_Word LaterVectorAddr_61;
  MR_Word LaterVectorAddrRval_62;
  MR_Word BaseReg_63;
  MR_Word RowStartReg_64;
  MR_Word SetBaseRegCode_65;
  MR_Word LookupResultsCode_66;
  MR_Word MatchCode_67;
  MR_Word STATE_VARIABLE_CI_73_73;
  MR_Word Var_108;
  MR_Word Var_114;
  MR_Word Var_117;
  MR_Word Var_118;
  MR_Word Var_120;
  MR_Word Var_121;
  MR_Word STATE_VARIABLE_CI_124_124;
  MR_Word Var_125;
  MR_Word STATE_VARIABLE_CI_127_127;
  MR_Word Var_128;
  MR_Word STATE_VARIABLE_CLD_131_131;
  MR_Word Var_132;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Word Var_135;
  MR_Word Var_139;
  MR_Word Var_144;

  ll_backend__string_switch__init_string_hash_switch_info_5_p_0(CanFail_24, &HashSwitchInfo_31, STATE_VARIABLE_CI_0_70, &STATE_VARIABLE_CI_73_73, STATE_VARIABLE_CLD_0_72);
  backend_libs__string_switch_util__construct_string_hash_cases_6_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[2]), CaseSolns_18, (MR_Integer) 1, &TableSize_32, &HashSlotsMap_33, &HashOp_34, &NumCollisions_35);
  HashMask_36 = (MR_Integer) ((MR_Unsigned) TableSize_32 - (MR_Unsigned) 1);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[7]), OutVars_21, &NumOutVars_37);
  mercury__list__duplicate_3_p_0((MR_Word) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0), NumOutVars_37, ((MR_Box) ((MR_Integer) 2)), &OutElemTypes_38);
  succeeded = (NumCollisions_35 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Var_79;
    MR_Word Var_81;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_87;

    NumColumns_39 = (MR_Integer) ((MR_Unsigned) 3 + (MR_Unsigned) NumOutVars_37);
    NumPrevColumns_40 = (MR_Integer) 1;
    {
      Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_81, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, Var_81, 1) = ((MR_Box) (OutElemTypes_38));
    }
    {
      Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_79, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_81));
    }
    {
      ArrayElemTypes_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArrayElemTypes_41, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, ArrayElemTypes_41, 1) = ((MR_Box) (Var_79));
    }
    Var_85 = (MR_Word) (MR_mkword(2, &ll_backend__string_switch_scalar_common_3[1]));
    {
      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_85));
      MR_hl_field(1, Var_87, 1) = ((MR_Box) (OutTypes_22));
    }
    {
      Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
      MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_87));
    }
    {
      MainRowTypes_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MainRowTypes_42, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, MainRowTypes_42, 1) = ((MR_Box) (Var_84));
    }
  }
  else
  {
    MR_Word Var_92;
    MR_Word Var_94;
    MR_Word Var_96;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_102;
    MR_Word Var_105;

    NumColumns_39 = (MR_Integer) ((MR_Unsigned) 4 + (MR_Unsigned) NumOutVars_37);
    NumPrevColumns_40 = (MR_Integer) 2;
    {
      Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_96, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, Var_96, 1) = ((MR_Box) (OutElemTypes_38));
    }
    {
      Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_94, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_96));
    }
    {
      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_92, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_94));
    }
    {
      ArrayElemTypes_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArrayElemTypes_41, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, ArrayElemTypes_41, 1) = ((MR_Box) (Var_92));
    }
    Var_100 = (MR_Word) (MR_mkword(2, &ll_backend__string_switch_scalar_common_3[1]));
    {
      Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_105, 0) = ((MR_Box) (Var_100));
      MR_hl_field(1, Var_105, 1) = ((MR_Box) (OutTypes_22));
    }
    {
      Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_100));
      MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_105));
    }
    {
      Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_99, 0) = ((MR_Box) (Var_100));
      MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_102));
    }
    {
      MainRowTypes_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MainRowTypes_42, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, MainRowTypes_42, 1) = ((MR_Box) (Var_99));
    }
  }
  {
    ArrayElemType_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArrayElemType_43, 0) = ((MR_Box) (ArrayElemTypes_41));
  }
  {
    Var_108 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_108, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_4[2]));
    MR_hl_field(0, Var_108, 1) = ((MR_Box) (ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_1));
    MR_hl_field(0, Var_108, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_108, 3) = ((MR_Box) (OutVars_21));
    MR_hl_field(0, Var_108, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_not_3_p_0(Var_108, (MR_String) "predicate \140ll_backend.string_switch.generate_string_hash_several_soln_lookup_switch\'/16", (MR_String) "no OutVars");
  switch (GoalsMayModifyTrail_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      AddTrailOps_45 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      ll_backend__code_info__get_emit_trail_ops_2_p_0(STATE_VARIABLE_CI_73_73, &AddTrailOps_45);
      break;
  }
  DummyOutRvals_47 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__string_switch_scalar_common_2[6]), OutTypes_22);
  LaterSolnArrayCord0_48 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), ((MR_Box) (DummyOutRvals_47)));
  Var_114 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]));
  ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_15_p_0((MR_Integer) 0, TableSize_32, HashSlotsMap_33, DummyOutRvals_47, NumOutVars_37, NumCollisions_35, Var_114, &MainRowsCord_49, (MR_Integer) 1, LaterSolnArrayCord0_48, &LaterSolnArrayCord_50, (MR_Integer) 0, &OneSolnCaseCount_51, (MR_Integer) 0, &SeveralSolnsCaseCount_52);
  MainRows_53 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), MainRowsCord_49);
  LaterSolnArray_54 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), LaterSolnArrayCord_50);
  {
    Var_118 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_118, 0) = ((MR_Box) (OneSolnCaseCount_51));
    MR_hl_field(0, Var_118, 1) = ((MR_Box) ((MR_Integer) 1));
  }
  {
    Var_121 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_121, 0) = ((MR_Box) (SeveralSolnsCaseCount_52));
    MR_hl_field(0, Var_121, 1) = ((MR_Box) ((MR_Integer) 2));
  }
  {
    Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_120, 0) = ((MR_Box) (Var_121));
    MR_hl_field(1, Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_117, 0) = ((MR_Box) (Var_118));
    MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_120));
  }
  mercury__list__sort_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_2[2]), Var_117, &AscendingSortedCountKinds_55);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_2[2]), AscendingSortedCountKinds_55, &DescendingSortedCountKinds_56);
  mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0), DescendingSortedCountKinds_56, &DescendingSortedKinds_57);
  mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&ll_backend__lookup_switch__ll_backend__lookup_switch__type_ctor_info_case_kind_0), DescendingSortedKinds_57, &OoMDescendingSortedKinds_58);
  ll_backend__code_info__add_vector_static_cell_5_p_0(MainRowTypes_42, MainRows_53, &MainVectorAddr_59, STATE_VARIABLE_CI_73_73, &STATE_VARIABLE_CI_124_124);
  {
    Var_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_125, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_125, 1) = ((MR_Box) (MainVectorAddr_59));
    MR_hl_field(3, Var_125, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MainVectorAddrRval_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MainVectorAddrRval_60, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MainVectorAddrRval_60, 1) = ((MR_Box) (Var_125));
  }
  ll_backend__code_info__add_vector_static_cell_5_p_0(OutTypes_22, LaterSolnArray_54, &LaterVectorAddr_61, STATE_VARIABLE_CI_124_124, &STATE_VARIABLE_CI_127_127);
  {
    Var_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_128, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_128, 1) = ((MR_Box) (LaterVectorAddr_61));
    MR_hl_field(3, Var_128, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    LaterVectorAddrRval_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LaterVectorAddrRval_62, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, LaterVectorAddrRval_62, 1) = ((MR_Box) (Var_128));
  }
  ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(StoreMap_26, (MR_Integer) 0, &BaseReg_63, STATE_VARIABLE_CLD_0_72, &STATE_VARIABLE_CLD_131_131);
  RowStartReg_64 = ((MR_Word) ((MR_hl_field(0, HashSwitchInfo_31, (MR_Integer) 1))));
  {
    Var_139 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_139, 0) = ((MR_Box) (RowStartReg_64));
  }
  {
    Var_135 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_135, 0) = ((MR_Box) (MainVectorAddrRval_60));
    MR_hl_field(2, Var_135, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[7])));
    MR_hl_field(2, Var_135, 2) = ((MR_Box) (Var_139));
  }
  {
    Var_134 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_134, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_134, 1) = ((MR_Box) (Var_135));
  }
  {
    Var_133 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_133, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_133, 1) = ((MR_Box) (BaseReg_63));
    MR_hl_field(3, Var_133, 2) = ((MR_Box) (Var_134));
  }
  {
    Var_132 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_132, 0) = ((MR_Box) (Var_133));
    MR_hl_field(0, Var_132, 1) = ((MR_Box) ((MR_String) "set up base reg"));
  }
  SetBaseRegCode_65 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_132)));
  ll_backend__lookup_switch__generate_code_for_all_kinds_16_p_0(OoMDescendingSortedKinds_58, NumPrevColumns_40, OutVars_21, ResumeVars_19, EndLabel_25, StoreMap_26, Liveness_23, AddTrailOps_45, BaseReg_63, LaterVectorAddrRval_62, &LookupResultsCode_66, STATE_VARIABLE_MaybeEnd_0_68, STATE_VARIABLE_MaybeEnd_69, STATE_VARIABLE_CI_127_127, STATE_VARIABLE_CI_71, STATE_VARIABLE_CLD_131_131);
  MatchCode_67 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetBaseRegCode_65, LookupResultsCode_66);
  Var_144 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
  ll_backend__string_switch__generate_string_hash_switch_search_13_p_0(HashSwitchInfo_31, VarRval_17, MainVectorAddrRval_60, ArrayElemType_43, NumColumns_39, HashOp_34, HashMask_36, NumCollisions_35, EndLabel_25, (MR_String) "multi soln lookup", Var_144, MatchCode_67, Code_28);
}

static void MR_CALL 
ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_15_p_0(
  MR_Integer Slot_16,
  MR_Integer TableSize_17,
  MR_Word HashSlotMap_18,
  MR_Word DummyOutRvals_19,
  MR_Integer NumOutVars_20,
  MR_Integer NumCollisions_21,
  MR_Word STATE_VARIABLE_MainRowsCord_0_44,
  MR_Word * STATE_VARIABLE_MainRowsCord_45,
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
      *STATE_VARIABLE_MainRowsCord_45 = STATE_VARIABLE_MainRowsCord_0_44;
    }
    else
    {
      MR_Word MainRow_36;
      MR_Integer STATE_VARIABLE_OneSolnCaseCount_55_55;
      MR_Integer STATE_VARIABLE_SeveralSolnsCaseCount_61_61;
      MR_Integer STATE_VARIABLE_LaterNextRow_70_70;
      MR_Word STATE_VARIABLE_LaterSolnArray_71_71;
      MR_Word STATE_VARIABLE_MainRowsCord_81_81;
      MR_Integer Var_82;
      MR_Word SlotInfo_27;
      MR_Box conv0_SlotInfo_27;
      MR_Integer next_value_of_Slot_16;
      MR_Word next_value_of_STATE_VARIABLE_MainRowsCord_0_44;
      MR_Integer next_value_of_STATE_VARIABLE_LaterNextRow_0_46;
      MR_Word next_value_of_STATE_VARIABLE_LaterSolnArray_0_47;
      MR_Integer next_value_of_STATE_VARIABLE_OneSolnCaseCount_0_49;
      MR_Integer next_value_of_STATE_VARIABLE_SeveralSolnsCaseCount_0_51;

      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[10]), HashSlotMap_18, Slot_16, &conv0_SlotInfo_27);
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
          ZeroRval_34 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[25]));
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
        MR_Word StringRval_89 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[25]));
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
            MR_hl_field(1, Var_80, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[26])));
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
      mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), ((MR_Box) (MainRow_36)), STATE_VARIABLE_MainRowsCord_0_44, &STATE_VARIABLE_MainRowsCord_81_81);
      Var_82 = (MR_Integer) ((MR_Unsigned) Slot_16 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Slot_16 = Var_82;
      next_value_of_STATE_VARIABLE_MainRowsCord_0_44 = STATE_VARIABLE_MainRowsCord_81_81;
      next_value_of_STATE_VARIABLE_LaterNextRow_0_46 = STATE_VARIABLE_LaterNextRow_70_70;
      next_value_of_STATE_VARIABLE_LaterSolnArray_0_47 = STATE_VARIABLE_LaterSolnArray_71_71;
      next_value_of_STATE_VARIABLE_OneSolnCaseCount_0_49 = STATE_VARIABLE_OneSolnCaseCount_55_55;
      next_value_of_STATE_VARIABLE_SeveralSolnsCaseCount_0_51 = STATE_VARIABLE_SeveralSolnsCaseCount_61_61;
      Slot_16 = next_value_of_Slot_16;
      STATE_VARIABLE_MainRowsCord_0_44 = next_value_of_STATE_VARIABLE_MainRowsCord_0_44;
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
  MR_Word STATE_VARIABLE_MaybeEnd_0_53,
  MR_Word * STATE_VARIABLE_MaybeEnd_54,
  MR_Word * Code_24,
  MR_Word STATE_VARIABLE_CI_0_55,
  MR_Word * STATE_VARIABLE_CI_56,
  MR_Word STATE_VARIABLE_CLD_0_57)
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
  MR_Word DummyOutRvals_35;
  MR_Integer NumPrevColumns_36;
  MR_Integer NumColumns_37;
  MR_Word ArrayElemTypes_38;
  MR_Word RowElemTypes_39;
  MR_Word ArrayElemType_40;
  MR_Word VectorRvalsCord_41;
  MR_Word VectorRvals_42;
  MR_Word VectorAddr_43;
  MR_Word VectorAddrRval_44;
  MR_Word SetBaseRegCode_45;
  MR_Word BranchEndCode_50;
  MR_Word GotoEndLabelCode_51;
  MR_Word MatchCode_52;
  MR_Word STATE_VARIABLE_CI_58_58;
  MR_Word Var_75;
  MR_Word Var_77;
  MR_Word STATE_VARIABLE_CLD_90_90;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_96;
  MR_Word Var_98;

  ll_backend__string_switch__init_string_hash_switch_info_5_p_0(CanFail_20, &HashSwitchInfo_27, STATE_VARIABLE_CI_0_55, &STATE_VARIABLE_CI_58_58, STATE_VARIABLE_CLD_0_57);
  backend_libs__string_switch_util__construct_string_hash_cases_6_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), CaseValues_16, (MR_Integer) 1, &TableSize_28, &HashSlotsMap_29, &HashOp_30, &NumCollisions_31);
  HashMask_32 = (MR_Integer) ((MR_Unsigned) TableSize_28 - (MR_Unsigned) 1);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[7]), OutVars_17, &NumOutVars_33);
  mercury__list__duplicate_3_p_0((MR_Word) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0), NumOutVars_33, ((MR_Box) ((MR_Integer) 2)), &OutElemTypes_34);
  DummyOutRvals_35 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__string_switch_scalar_common_2[5]), OutTypes_18);
  succeeded = (NumCollisions_31 == (MR_Integer) 0);
  if (succeeded)
  {
    NumPrevColumns_36 = (MR_Integer) 1;
    NumColumns_37 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) NumOutVars_33);
    {
      ArrayElemTypes_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArrayElemTypes_38, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, ArrayElemTypes_38, 1) = ((MR_Box) (OutElemTypes_34));
    }
    {
      RowElemTypes_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RowElemTypes_39, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, RowElemTypes_39, 1) = ((MR_Box) (OutTypes_18));
    }
  }
  else
  {
    MR_Word Var_68;
    MR_Word Var_71;

    NumPrevColumns_36 = (MR_Integer) 2;
    NumColumns_37 = (MR_Integer) ((MR_Unsigned) 2 + (MR_Unsigned) NumOutVars_33);
    {
      Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_68, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, Var_68, 1) = ((MR_Box) (OutElemTypes_34));
    }
    {
      ArrayElemTypes_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArrayElemTypes_38, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, ArrayElemTypes_38, 1) = ((MR_Box) (Var_68));
    }
    {
      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (MR_mkword(2, &ll_backend__string_switch_scalar_common_3[1])));
      MR_hl_field(1, Var_71, 1) = ((MR_Box) (OutTypes_18));
    }
    {
      RowElemTypes_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RowElemTypes_39, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, RowElemTypes_39, 1) = ((MR_Box) (Var_71));
    }
  }
  {
    ArrayElemType_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArrayElemType_40, 0) = ((MR_Box) (ArrayElemTypes_38));
  }
  Var_75 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]));
  ll_backend__string_switch__construct_string_hash_simple_lookup_vector_7_p_0((MR_Integer) 0, TableSize_28, HashSlotsMap_29, NumCollisions_31, DummyOutRvals_35, Var_75, &VectorRvalsCord_41);
  VectorRvals_42 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), VectorRvalsCord_41);
  ll_backend__code_info__add_vector_static_cell_5_p_0(RowElemTypes_39, VectorRvals_42, &VectorAddr_43, STATE_VARIABLE_CI_58_58, STATE_VARIABLE_CI_56);
  {
    Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_77, 1) = ((MR_Box) (VectorAddr_43));
    MR_hl_field(3, Var_77, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    VectorAddrRval_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, VectorAddrRval_44, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, VectorAddrRval_44, 1) = ((MR_Box) (Var_77));
  }
  if ((OutVars_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    SetBaseRegCode_45 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    STATE_VARIABLE_CLD_90_90 = STATE_VARIABLE_CLD_0_57;
  }
  else
  {
    MR_Word BaseReg_48;
    MR_Word RowStartReg_49;
    MR_Word STATE_VARIABLE_CLD_80_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_88;

    ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(StoreMap_22, (MR_Integer) 0, &BaseReg_48, STATE_VARIABLE_CLD_0_57, &STATE_VARIABLE_CLD_80_80);
    RowStartReg_49 = ((MR_Word) ((MR_hl_field(0, HashSwitchInfo_27, (MR_Integer) 1))));
    {
      Var_88 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_88, 0) = ((MR_Box) (RowStartReg_49));
    }
    {
      Var_84 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_84, 0) = ((MR_Box) (VectorAddrRval_44));
      MR_hl_field(2, Var_84, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[7])));
      MR_hl_field(2, Var_84, 2) = ((MR_Box) (Var_88));
    }
    {
      Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_83, 1) = ((MR_Box) (Var_84));
    }
    {
      Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_82, 1) = ((MR_Box) (BaseReg_48));
      MR_hl_field(3, Var_82, 2) = ((MR_Box) (Var_83));
    }
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_81, 0) = ((MR_Box) (Var_82));
      MR_hl_field(0, Var_81, 1) = ((MR_Box) ((MR_String) "set up base reg"));
    }
    SetBaseRegCode_45 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_81)));
    ll_backend__lookup_util__generate_offset_assigns_6_p_0(OutVars_17, NumPrevColumns_36, BaseReg_48, *STATE_VARIABLE_CI_56, STATE_VARIABLE_CLD_80_80, &STATE_VARIABLE_CLD_90_90);
  }
  ll_backend__lookup_util__set_liveness_and_end_branch_6_p_0(StoreMap_22, Liveness_19, STATE_VARIABLE_MaybeEnd_0_53, STATE_VARIABLE_MaybeEnd_54, &BranchEndCode_50, STATE_VARIABLE_CLD_90_90);
  {
    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_94, 0) = ((MR_Box) (EndLabel_21));
  }
  {
    Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_93, 1) = ((MR_Box) (Var_94));
  }
  {
    Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_92, 0) = ((MR_Box) (Var_93));
    MR_hl_field(0, Var_92, 1) = ((MR_Box) ((MR_String) "go to end of simple hash string lookup switch"));
  }
  GotoEndLabelCode_51 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_92)));
  Var_96 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BranchEndCode_50, GotoEndLabelCode_51);
  MatchCode_52 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetBaseRegCode_45, Var_96);
  Var_98 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
  ll_backend__string_switch__generate_string_hash_switch_search_13_p_0(HashSwitchInfo_27, VarRval_15, VectorAddrRval_44, ArrayElemType_40, NumColumns_37, HashOp_30, HashMask_32, NumCollisions_31, EndLabel_21, (MR_String) "single soln lookup", Var_98, MatchCode_52, Code_24);
}

static void MR_CALL 
ll_backend__string_switch__construct_string_hash_simple_lookup_vector_7_p_0(
  MR_Integer Slot_8,
  MR_Integer TableSize_9,
  MR_Word HashSlotMap_10,
  MR_Integer NumCollisions_11,
  MR_Word DummyOutRvals_12,
  MR_Word STATE_VARIABLE_RowsCord_0_21,
  MR_Word * STATE_VARIABLE_RowsCord_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Slot_8 == TableSize_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_RowsCord_22 = STATE_VARIABLE_RowsCord_0_21;
    else
    {
      MR_Word OutVarRvals_17;
      MR_Word NextSlotRval_18;
      MR_Word StringRval_19;
      MR_Word Row_20;
      MR_Word STATE_VARIABLE_RowsCord_30_30;
      MR_Integer Var_31;
      MR_Word SlotInfo_14;
      MR_Box conv0_SlotInfo_14;
      MR_Integer next_value_of_Slot_8;
      MR_Word next_value_of_STATE_VARIABLE_RowsCord_0_21;

      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[8]), HashSlotMap_10, Slot_8, &conv0_SlotInfo_14);
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
        StringRval_19 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[25]));
        NextSlotRval_18 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[26]));
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
      mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), ((MR_Box) (Row_20)), STATE_VARIABLE_RowsCord_0_21, &STATE_VARIABLE_RowsCord_30_30);
      Var_31 = (MR_Integer) ((MR_Unsigned) Slot_8 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Slot_8 = Var_31;
      next_value_of_STATE_VARIABLE_RowsCord_0_21 = STATE_VARIABLE_RowsCord_30_30;
      Slot_8 = next_value_of_Slot_8;
      STATE_VARIABLE_RowsCord_0_21 = next_value_of_STATE_VARIABLE_RowsCord_0_21;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__string_switch__generate_string_hash_switch_12_p_0(
  MR_Word VarRval_13,
  MR_String VarName_14,
  MR_Word TaggedCases_15,
  MR_Word CodeModel_16,
  MR_Word CanFail_17,
  MR_Word SwitchGoalInfo_18,
  MR_Word EndLabel_19,
  MR_Word * MaybeEnd_20,
  MR_Word * Code_21,
  MR_Word STATE_VARIABLE_CI_0_50,
  MR_Word * STATE_VARIABLE_CI_51,
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
  MR_Word TableRowsCord_36;
  MR_Word MaybeTargetsCord_37;
  MR_Word TableRows_38;
  MR_Word MaybeTargets_39;
  MR_Integer NumColumns_40;
  MR_Word RowElemTypes_41;
  MR_Word ArrayElemTypes_42;
  MR_Word TableAddr_43;
  MR_Word ArrayElemType_44;
  MR_Word TableAddrRval_45;
  MR_Word SlotReg_46;
  MR_Word MatchCode_47;
  MR_Word CasesCode_48;
  MR_Word STATE_VARIABLE_CI_52_52;
  MR_Word STATE_VARIABLE_CI_55_55;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_75;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_49;

  ll_backend__string_switch__init_string_hash_switch_info_5_p_0(CanFail_17, &HashSwitchInfo_24, STATE_VARIABLE_CI_0_50, &STATE_VARIABLE_CI_52_52, CLD_23);
  BranchStart_25 = ((MR_Word) ((MR_hl_field(0, HashSwitchInfo_24, (MR_Integer) 6))));
  {
    Params_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_26, 0) = ((MR_Box) (VarName_14));
    MR_hl_field(0, Params_26, 1) = ((MR_Box) (SwitchGoalInfo_18));
    MR_hl_field(0, Params_26, 2) = (MR_Box) ((MR_Unsigned) (CodeModel_16));
    MR_hl_field(0, Params_26, 3) = ((MR_Box) (BranchStart_25));
    MR_hl_field(0, Params_26, 4) = ((MR_Box) (EndLabel_19));
  }
  mercury__map__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0), &CaseLabelMap0_27);
  ll_backend__string_switch__represent_tagged_cases_in_string_hash_switch_10_p_0(Params_26, TaggedCases_15, (MR_Word) ((MR_Unsigned) 0U), &StrsLabels_28, CaseLabelMap0_27, &CaseLabelMap_29, (MR_Word) ((MR_Unsigned) 0U), MaybeEnd_20, STATE_VARIABLE_CI_52_52, &STATE_VARIABLE_CI_55_55);
  backend_libs__string_switch_util__construct_string_hash_cases_6_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), StrsLabels_28, (MR_Integer) 1, &TableSize_30, &HashSlotsMap_31, &HashOp_32, &NumCollisions_33);
  HashMask_34 = (MR_Integer) ((MR_Unsigned) TableSize_30 - (MR_Unsigned) 1);
  FailLabel_35 = ((MR_Word) ((MR_hl_field(0, HashSwitchInfo_24, (MR_Integer) 5))));
  Var_59 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]));
  Var_60 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[1]));
  ll_backend__string_switch__construct_string_hash_jump_vectors_9_p_0((MR_Integer) 0, TableSize_30, HashSlotsMap_31, FailLabel_35, NumCollisions_33, Var_59, &TableRowsCord_36, Var_60, &MaybeTargetsCord_37);
  TableRows_38 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), TableRowsCord_36);
  MaybeTargets_39 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[1]), MaybeTargetsCord_37);
  succeeded = (NumCollisions_33 == (MR_Integer) 0);
  if (succeeded)
  {
    NumColumns_40 = (MR_Integer) 1;
    RowElemTypes_41 = (MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[13]));
    ArrayElemTypes_42 = (MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[14]));
  }
  else
  {
    NumColumns_40 = (MR_Integer) 2;
    RowElemTypes_41 = (MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[16]));
    ArrayElemTypes_42 = (MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[18]));
  }
  ll_backend__code_info__add_vector_static_cell_5_p_0(RowElemTypes_41, TableRows_38, &TableAddr_43, STATE_VARIABLE_CI_55_55, STATE_VARIABLE_CI_51);
  {
    ArrayElemType_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArrayElemType_44, 0) = ((MR_Box) (ArrayElemTypes_42));
  }
  {
    Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_75, 1) = ((MR_Box) (TableAddr_43));
    MR_hl_field(3, Var_75, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    TableAddrRval_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, TableAddrRval_45, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, TableAddrRval_45, 1) = ((MR_Box) (Var_75));
  }
  SlotReg_46 = ((MR_Word) ((MR_hl_field(0, HashSwitchInfo_24, (MR_Integer) 0))));
  {
    Var_80 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_80, 0) = ((MR_Box) (SlotReg_46));
  }
  {
    Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, Var_79, 1) = ((MR_Box) (Var_80));
    MR_hl_field(3, Var_79, 2) = ((MR_Box) (MaybeTargets_39));
  }
  {
    Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_78, 0) = ((MR_Box) (Var_79));
    MR_hl_field(0, Var_78, 1) = ((MR_Box) ((MR_String) "jump to the corresponding code"));
  }
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  MatchCode_47 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_77);
  ll_backend__switch_case__add_not_yet_included_cases_3_p_0(&CasesCode_48, CaseLabelMap_29, &Var_49);
  ll_backend__string_switch__generate_string_hash_switch_search_13_p_0(HashSwitchInfo_24, VarRval_13, TableAddrRval_45, ArrayElemType_44, NumColumns_40, HashOp_32, HashMask_34, NumCollisions_33, EndLabel_19, (MR_String) "jump", CasesCode_48, MatchCode_47, Code_21);
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
  MR_String SwitchKindStr_23,
  MR_Word CasesCode_24,
  MR_Word MatchCode_25,
  MR_Word * Code_26)
{
  MR_bool succeeded = (NumCollisions_21 == (MR_Integer) 0);
  MR_Word SlotReg_27 = ((MR_Word) ((MR_hl_field(0, Info_14, (MR_Integer) 0))));
  MR_Word RowStartReg_28 = ((MR_Word) ((MR_hl_field(0, Info_14, (MR_Integer) 1))));
  MR_Word StringReg_29 = ((MR_Word) ((MR_hl_field(0, Info_14, (MR_Integer) 2))));
  MR_Word LoopStartLabel_30 = ((MR_Word) ((MR_hl_field(0, Info_14, (MR_Integer) 3))));
  MR_Word NoMatchLabel_31 = ((MR_Word) ((MR_hl_field(0, Info_14, (MR_Integer) 4))));
  MR_Word FailLabel_32 = ((MR_Word) ((MR_hl_field(0, Info_14, (MR_Integer) 5))));
  MR_Word FailCode_33 = ((MR_Word) ((MR_hl_field(0, Info_14, (MR_Integer) 7))));
  MR_Word HashSearchCode_36;
  MR_String StartComment_37;
  MR_String EndLabelComment_38;
  MR_Word StartCommentCode_39;
  MR_Word EndLabelCode_40;
  MR_Word Var_190;
  MR_Word Var_191;
  MR_Word Var_193;
  MR_Word Var_194;
  MR_Word Var_195;
  MR_Word Var_196;
  MR_Word Var_197;
  MR_String Var_251;
  MR_String Var_254;

  if (succeeded)
  {
    MR_Word BaseReg_34;
    MR_Word MultiplyInstrs_35;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_76;
    MR_Word Var_79;
    MR_Word Var_83;
    MR_Word Var_86;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;

    succeeded = (NumColumns_18 == (MR_Integer) 1);
    if (succeeded)
    {
      BaseReg_34 = SlotReg_27;
      MultiplyInstrs_35 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;

      BaseReg_34 = RowStartReg_28;
      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_46, 0) = ((MR_Box) (SlotReg_27));
      }
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (NumColumns_18));
      }
      {
        Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_47, 1) = ((MR_Box) (Var_48));
      }
      {
        Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, Var_43, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[20])));
        MR_hl_field(3, Var_43, 2) = ((MR_Box) (Var_46));
        MR_hl_field(3, Var_43, 3) = ((MR_Box) (Var_47));
      }
      {
        Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_42, 1) = ((MR_Box) (RowStartReg_28));
        MR_hl_field(3, Var_42, 2) = ((MR_Box) (Var_43));
      }
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(0, Var_41, 1) = ((MR_Box) ((MR_String) "find the start of the row"));
      }
      {
        MultiplyInstrs_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MultiplyInstrs_35, 0) = ((MR_Box) (Var_41));
        MR_hl_field(1, MultiplyInstrs_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    {
      Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_58, 1) = ((MR_Box) (HashOp_19));
      MR_hl_field(3, Var_58, 2) = ((MR_Box) (VarRval_15));
    }
    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) (HashMask_20));
    }
    {
      Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_55, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[27])));
      MR_hl_field(3, Var_55, 2) = ((MR_Box) (Var_58));
      MR_hl_field(3, Var_55, 3) = ((MR_Box) (Var_59));
    }
    {
      Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_54, 1) = ((MR_Box) (SlotReg_27));
      MR_hl_field(3, Var_54, 2) = ((MR_Box) (Var_55));
    }
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(0, Var_53, 1) = ((MR_Box) ((MR_String) "compute the hash value of the input string"));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) (MultiplyInstrs_35));
    }
    Var_51 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_52);
    {
      Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(3, Var_68, 1) = ((MR_Box) (ArrayElemType_17));
    }
    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_69, 0) = ((MR_Box) (BaseReg_34));
    }
    {
      Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_67, 1) = ((MR_Box) (Var_68));
      MR_hl_field(3, Var_67, 2) = ((MR_Box) (TableAddrRval_16));
      MR_hl_field(3, Var_67, 3) = ((MR_Box) (Var_69));
    }
    {
      Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_66, 1) = ((MR_Box) (StringReg_29));
      MR_hl_field(3, Var_66, 2) = ((MR_Box) (Var_67));
    }
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_65, 0) = ((MR_Box) (Var_66));
      MR_hl_field(0, Var_65, 1) = ((MR_Box) ((MR_String) "lookup the string for this hash slot"));
    }
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_79, 0) = ((MR_Box) (StringReg_29));
    }
    {
      Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_76, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[23])));
      MR_hl_field(3, Var_76, 2) = ((MR_Box) (Var_79));
      MR_hl_field(3, Var_76, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[25])));
    }
    {
      Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(3, Var_83, 2) = ((MR_Box) (Var_79));
      MR_hl_field(3, Var_83, 3) = ((MR_Box) (VarRval_15));
    }
    {
      Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_74, 2) = ((MR_Box) (Var_76));
      MR_hl_field(3, Var_74, 3) = ((MR_Box) (Var_83));
    }
    {
      Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_86, 0) = ((MR_Box) (FailLabel_32));
    }
    {
      Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_73, 1) = ((MR_Box) (Var_74));
      MR_hl_field(3, Var_73, 2) = ((MR_Box) (Var_86));
    }
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_72, 0) = ((MR_Box) (Var_73));
      MR_hl_field(0, Var_72, 1) = ((MR_Box) ((MR_String) "did we find a match\? nofulljump"));
    }
    {
      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
      MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_71));
    }
    Var_63 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_64);
    {
      Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_93, 1) = ((MR_Box) (FailLabel_32));
    }
    {
      Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_92, 0) = ((MR_Box) (Var_93));
      MR_hl_field(0, Var_92, 1) = ((MR_Box) ((MR_String) "handle the failure of the table search"));
    }
    {
      Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
      MR_hl_field(1, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_90 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_91);
    Var_89 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MatchCode_25, Var_90);
    Var_62 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_63, Var_89);
    HashSearchCode_36 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_51, Var_62);
  }
  else
  {
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_133;
    MR_Word Var_136;
    MR_Word Var_140;
    MR_Word Var_143;
    MR_Word Var_146;
    MR_Word Var_147;
    MR_Word Var_148;
    MR_Word Var_149;
    MR_Word Var_150;
    MR_Word Var_152;
    MR_Word Var_153;
    MR_Word Var_154;
    MR_Word Var_155;
    MR_Word Var_157;
    MR_Word Var_165;
    MR_Word Var_166;
    MR_Word Var_167;
    MR_Word Var_168;
    MR_Word Var_175;
    MR_Word Var_177;
    MR_Word Var_178;
    MR_Word Var_179;

    {
      Var_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_103, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_103, 1) = ((MR_Box) (HashOp_19));
      MR_hl_field(3, Var_103, 2) = ((MR_Box) (VarRval_15));
    }
    {
      Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_105, 0) = ((MR_Box) (HashMask_20));
    }
    {
      Var_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_104, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_104, 1) = ((MR_Box) (Var_105));
    }
    {
      Var_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_100, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_100, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[27])));
      MR_hl_field(3, Var_100, 2) = ((MR_Box) (Var_103));
      MR_hl_field(3, Var_100, 3) = ((MR_Box) (Var_104));
    }
    {
      Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_99, 1) = ((MR_Box) (SlotReg_27));
      MR_hl_field(3, Var_99, 2) = ((MR_Box) (Var_100));
    }
    {
      Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_98, 0) = ((MR_Box) (Var_99));
      MR_hl_field(0, Var_98, 1) = ((MR_Box) ((MR_String) "compute the hash value of the input string"));
    }
    {
      Var_109 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_109, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_109, 1) = ((MR_Box) (LoopStartLabel_30));
    }
    {
      Var_108 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_108, 0) = ((MR_Box) (Var_109));
      MR_hl_field(0, Var_108, 1) = ((MR_Box) ((MR_String) "begin hash chain loop, nofulljump"));
    }
    {
      Var_117 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_117, 0) = ((MR_Box) (SlotReg_27));
    }
    {
      Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_119, 0) = ((MR_Box) (NumColumns_18));
    }
    {
      Var_118 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_118, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_118, 1) = ((MR_Box) (Var_119));
    }
    {
      Var_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_114, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_114, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[20])));
      MR_hl_field(3, Var_114, 2) = ((MR_Box) (Var_117));
      MR_hl_field(3, Var_114, 3) = ((MR_Box) (Var_118));
    }
    {
      Var_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_113, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_113, 1) = ((MR_Box) (RowStartReg_28));
      MR_hl_field(3, Var_113, 2) = ((MR_Box) (Var_114));
    }
    {
      Var_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_112, 0) = ((MR_Box) (Var_113));
      MR_hl_field(0, Var_112, 1) = ((MR_Box) ((MR_String) "find the start of the row"));
    }
    {
      Var_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_125, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(3, Var_125, 1) = ((MR_Box) (ArrayElemType_17));
    }
    {
      Var_126 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_126, 0) = ((MR_Box) (RowStartReg_28));
    }
    {
      Var_124 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_124, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_124, 1) = ((MR_Box) (Var_125));
      MR_hl_field(3, Var_124, 2) = ((MR_Box) (TableAddrRval_16));
      MR_hl_field(3, Var_124, 3) = ((MR_Box) (Var_126));
    }
    {
      Var_123 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_123, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_123, 1) = ((MR_Box) (StringReg_29));
      MR_hl_field(3, Var_123, 2) = ((MR_Box) (Var_124));
    }
    {
      Var_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_122, 0) = ((MR_Box) (Var_123));
      MR_hl_field(0, Var_122, 1) = ((MR_Box) ((MR_String) "lookup the string for this hash slot"));
    }
    {
      Var_136 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_136, 0) = ((MR_Box) (StringReg_29));
    }
    {
      Var_133 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_133, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_133, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[23])));
      MR_hl_field(3, Var_133, 2) = ((MR_Box) (Var_136));
      MR_hl_field(3, Var_133, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[25])));
    }
    {
      Var_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_140, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_140, 1) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(3, Var_140, 2) = ((MR_Box) (Var_136));
      MR_hl_field(3, Var_140, 3) = ((MR_Box) (VarRval_15));
    }
    {
      Var_131 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_131, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_131, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_131, 2) = ((MR_Box) (Var_133));
      MR_hl_field(3, Var_131, 3) = ((MR_Box) (Var_140));
    }
    {
      Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_143, 0) = ((MR_Box) (NoMatchLabel_31));
    }
    {
      Var_130 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_130, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_130, 1) = ((MR_Box) (Var_131));
      MR_hl_field(3, Var_130, 2) = ((MR_Box) (Var_143));
    }
    {
      Var_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_129, 0) = ((MR_Box) (Var_130));
      MR_hl_field(0, Var_129, 1) = ((MR_Box) ((MR_String) "did we find a match\? nofulljump"));
    }
    {
      Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_128, 0) = ((MR_Box) (Var_129));
      MR_hl_field(1, Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_121, 0) = ((MR_Box) (Var_122));
      MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_128));
    }
    {
      Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_111, 0) = ((MR_Box) (Var_112));
      MR_hl_field(1, Var_111, 1) = ((MR_Box) (Var_121));
    }
    {
      Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_107, 0) = ((MR_Box) (Var_108));
      MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_111));
    }
    {
      Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
      MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_107));
    }
    Var_96 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_97);
    {
      Var_150 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_150, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_150, 1) = ((MR_Box) (NoMatchLabel_31));
    }
    {
      Var_149 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_149, 0) = ((MR_Box) (Var_150));
      MR_hl_field(0, Var_149, 1) = ((MR_Box) ((MR_String) "no match yet, nofulljump"));
    }
    {
      Var_157 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_157, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_157, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[1])));
      MR_hl_field(3, Var_157, 2) = ((MR_Box) (Var_126));
      MR_hl_field(3, Var_157, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[22])));
    }
    {
      Var_155 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_155, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_155, 1) = ((MR_Box) (Var_125));
      MR_hl_field(3, Var_155, 2) = ((MR_Box) (TableAddrRval_16));
      MR_hl_field(3, Var_155, 3) = ((MR_Box) (Var_157));
    }
    {
      Var_154 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_154, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_154, 1) = ((MR_Box) (SlotReg_27));
      MR_hl_field(3, Var_154, 2) = ((MR_Box) (Var_155));
    }
    {
      Var_153 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_153, 0) = ((MR_Box) (Var_154));
      MR_hl_field(0, Var_153, 1) = ((MR_Box) ((MR_String) "get next slot in hash chain"));
    }
    {
      Var_168 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_168, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_168, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[24])));
      MR_hl_field(3, Var_168, 2) = ((MR_Box) (Var_117));
      MR_hl_field(3, Var_168, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[25])));
    }
    {
      Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_175, 0) = ((MR_Box) (LoopStartLabel_30));
    }
    {
      Var_167 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_167, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_167, 1) = ((MR_Box) (Var_168));
      MR_hl_field(3, Var_167, 2) = ((MR_Box) (Var_175));
    }
    {
      Var_166 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_166, 0) = ((MR_Box) (Var_167));
      MR_hl_field(0, Var_166, 1) = ((MR_Box) ((MR_String) "if not at the end of the chain, keep searching"));
    }
    {
      Var_179 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_179, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_179, 1) = ((MR_Box) (FailLabel_32));
    }
    {
      Var_178 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_178, 0) = ((MR_Box) (Var_179));
      MR_hl_field(0, Var_178, 1) = ((MR_Box) ((MR_String) "handle the failure of the table search"));
    }
    {
      Var_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_177, 0) = ((MR_Box) (Var_178));
      MR_hl_field(1, Var_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_165, 0) = ((MR_Box) (Var_166));
      MR_hl_field(1, Var_165, 1) = ((MR_Box) (Var_177));
    }
    {
      Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_152, 0) = ((MR_Box) (Var_153));
      MR_hl_field(1, Var_152, 1) = ((MR_Box) (Var_165));
    }
    {
      Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_148, 0) = ((MR_Box) (Var_149));
      MR_hl_field(1, Var_148, 1) = ((MR_Box) (Var_152));
    }
    Var_147 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_148);
    Var_146 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MatchCode_25, Var_147);
    HashSearchCode_36 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_96, Var_146);
  }
  Var_251 = mercury__string__f_43_43_2_f_0(SwitchKindStr_23, (MR_String) " switch");
  StartComment_37 = mercury__string__f_43_43_2_f_0((MR_String) "string hash ", Var_251);
  Var_254 = mercury__string__f_43_43_2_f_0(SwitchKindStr_23, (MR_String) " switch");
  EndLabelComment_38 = mercury__string__f_43_43_2_f_0((MR_String) "end of string hash ", Var_254);
  {
    Var_191 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_191, 0) = ((MR_Box) (StartComment_37));
  }
  {
    Var_190 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_190, 0) = ((MR_Box) (Var_191));
    MR_hl_field(0, Var_190, 1) = ((MR_Box) ((MR_String) ""));
  }
  StartCommentCode_39 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_190)));
  {
    Var_194 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_194, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_194, 1) = ((MR_Box) (EndLabel_22));
  }
  {
    Var_193 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_193, 0) = ((MR_Box) (Var_194));
    MR_hl_field(0, Var_193, 1) = ((MR_Box) (EndLabelComment_38));
  }
  EndLabelCode_40 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_193)));
  Var_197 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CasesCode_24, EndLabelCode_40);
  Var_196 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_33, Var_197);
  Var_195 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HashSearchCode_36, Var_196);
  *Code_26 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), StartCommentCode_39, Var_195);
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
        FailCode_17 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[33])));
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
ll_backend__string_switch__represent_tagged_cases_in_string_hash_switch_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_StrsLabels_12;

  ll_backend__string_switch__record_label_for_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_StrsLabels_12);
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
      MR_Word TaggedCase_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TaggedCases_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Label_31;
      MR_Word MainTaggedConsId_33;
      MR_Word OtherTaggedConsIds_34;
      MR_Word STATE_VARIABLE_CaseLabelMap_45_45;
      MR_Word STATE_VARIABLE_MaybeEnd_46_46;
      MR_Word STATE_VARIABLE_CI_47_47;
      MR_Word STATE_VARIABLE_StrsLabels_49_49;
      MR_Word Var_50;
      MR_Word STATE_VARIABLE_StrsLabels_51_51;
      MR_Box conv1_STATE_VARIABLE_StrsLabels_51_51;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_StrsLabels_0_3;
      MR_Word next_value_of_STATE_VARIABLE_CaseLabelMap_0_5;
      MR_Word next_value_of_STATE_VARIABLE_MaybeEnd_0_7;
      MR_Word next_value_of_STATE_VARIABLE_CI_0_9;

      ll_backend__switch_case__represent_tagged_case_for_llds_11_p_0(Params_1, TaggedCase_25, &Label_31, STATE_VARIABLE_CaseLabelMap_0_5, &STATE_VARIABLE_CaseLabelMap_45_45, STATE_VARIABLE_MaybeEnd_0_7, &STATE_VARIABLE_MaybeEnd_46_46, STATE_VARIABLE_CI_0_9, &STATE_VARIABLE_CI_47_47);
      MainTaggedConsId_33 = ((MR_Word) ((MR_hl_field(0, TaggedCase_25, (MR_Integer) 0))));
      OtherTaggedConsIds_34 = ((MR_Word) ((MR_hl_field(0, TaggedCase_25, (MR_Integer) 1))));
      ll_backend__string_switch__record_label_for_string_4_p_0(Label_31, MainTaggedConsId_33, STATE_VARIABLE_StrsLabels_0_3, &STATE_VARIABLE_StrsLabels_49_49);
      {
        Var_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_50, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_5[0]));
        MR_hl_field(0, Var_50, 1) = ((MR_Box) (ll_backend__string_switch__represent_tagged_cases_in_string_hash_switch_10_p_0_1));
        MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_50, 3) = ((MR_Box) (Label_31));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[6]), Var_50, OtherTaggedConsIds_34, ((MR_Box) (STATE_VARIABLE_StrsLabels_49_49)), &conv1_STATE_VARIABLE_StrsLabels_51_51);
      STATE_VARIABLE_StrsLabels_51_51 = ((MR_Word) (conv1_STATE_VARIABLE_StrsLabels_51_51));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TaggedCases_26;
      next_value_of_STATE_VARIABLE_StrsLabels_0_3 = STATE_VARIABLE_StrsLabels_51_51;
      next_value_of_STATE_VARIABLE_CaseLabelMap_0_5 = STATE_VARIABLE_CaseLabelMap_45_45;
      next_value_of_STATE_VARIABLE_MaybeEnd_0_7 = STATE_VARIABLE_MaybeEnd_46_46;
      next_value_of_STATE_VARIABLE_CI_0_9 = STATE_VARIABLE_CI_47_47;
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
  MR_Word STATE_VARIABLE_TableRowsCord_0_25,
  MR_Word * STATE_VARIABLE_TableRowsCord_26,
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
      *STATE_VARIABLE_TableRowsCord_26 = STATE_VARIABLE_TableRowsCord_0_25;
    }
    else
    {
      MR_Word NextSlotRval_21;
      MR_Word StringRval_22;
      MR_Word Target_23;
      MR_Word TableRow_24;
      MR_Word STATE_VARIABLE_TableRowsCord_38_38;
      MR_Word Var_39;
      MR_Word STATE_VARIABLE_MaybeTargetsCord_40_40;
      MR_Integer Var_41;
      MR_Word SlotInfo_17;
      MR_Box conv0_SlotInfo_17;
      MR_Integer next_value_of_Slot_10;
      MR_Word next_value_of_STATE_VARIABLE_TableRowsCord_0_25;
      MR_Word next_value_of_STATE_VARIABLE_MaybeTargetsCord_0_27;

      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[5]), HashSlotMap_12, Slot_10, &conv0_SlotInfo_17);
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
        StringRval_22 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[25]));
        NextSlotRval_21 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[26]));
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
      mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), ((MR_Box) (TableRow_24)), STATE_VARIABLE_TableRowsCord_0_25, &STATE_VARIABLE_TableRowsCord_38_38);
      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (Target_23));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[1]), ((MR_Box) (Var_39)), STATE_VARIABLE_MaybeTargetsCord_0_27, &STATE_VARIABLE_MaybeTargetsCord_40_40);
      Var_41 = (MR_Integer) ((MR_Unsigned) Slot_10 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Slot_10 = Var_41;
      next_value_of_STATE_VARIABLE_TableRowsCord_0_25 = STATE_VARIABLE_TableRowsCord_38_38;
      next_value_of_STATE_VARIABLE_MaybeTargetsCord_0_27 = STATE_VARIABLE_MaybeTargetsCord_40_40;
      Slot_10 = next_value_of_Slot_10;
      STATE_VARIABLE_TableRowsCord_0_25 = next_value_of_STATE_VARIABLE_TableRowsCord_0_25;
      STATE_VARIABLE_MaybeTargetsCord_0_27 = next_value_of_STATE_VARIABLE_MaybeTargetsCord_0_27;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__string_switch__generate_string_trie_switch_12_p_0(
  MR_Word VarRval_13,
  MR_String VarName_14,
  MR_Word TaggedCases_15,
  MR_Word CodeModel_16,
  MR_Word CanFail_17,
  MR_Word SwitchGoalInfo_18,
  MR_Word EndLabel_19,
  MR_Word * MaybeEnd_20,
  MR_Word * Code_21,
  MR_Word STATE_VARIABLE_CI_0_46,
  MR_Word * STATE_VARIABLE_CI_47,
  MR_Word CLD_23)
{
  MR_bool succeeded;
  MR_Word TrieSwitchInfo_24;
  MR_Word BranchStart_25;
  MR_Word Params_26;
  MR_Word CommentCode_27;
  MR_Word CaseIdToLabelMap0_28;
  MR_Word CaseLabelMap0_29;
  MR_Word CaseIdToLabelMap_30;
  MR_Word CaseLabelMap_31;
  MR_Word TopTrieNode_33;
  MR_Word TopTrieLabel_34;
  MR_Word TrieCode0_35;
  MR_Word TrieCode_39;
  MR_Word CasesCode_40;
  MR_Word EndLabelCode_42;
  MR_Word FailLabel_43;
  MR_Word FailLabelCode_44;
  MR_Word FailCode_45;
  MR_Word STATE_VARIABLE_CI_48_48;
  MR_Word STATE_VARIABLE_CI_54_54;
  MR_Word Var_55;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Encoding_93;
  MR_Word CodeUnitReg_94;
  MR_Word FailLabel_96;
  MR_Word FailCode_97;
  MR_Word STATE_VARIABLE_CLD_20_100;
  MR_Word STATE_VARIABLE_CLD_21_101;
  MR_Word STATE_VARIABLE_CI_22_102;
  MR_Integer _MaxCaseNum_32;
  MR_Word TailTrieCodeInstrs_37;
  MR_Word HeadTrieCodeInstr_36;
  MR_Word Var_58;
  MR_Word Var_91;
  MR_Box conv0_HeadTrieCodeInstr_36;
  MR_Word Var_41;

  Encoding_93 = backend_libs__string_encoding__target_string_encoding_1_f_0((MR_Integer) 0);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &CodeUnitReg_94, CLD_23, &STATE_VARIABLE_CLD_20_100);
  ll_backend__code_loc_dep__release_reg_3_p_0(CodeUnitReg_94, STATE_VARIABLE_CLD_20_100, &STATE_VARIABLE_CLD_21_101);
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_21_101, &BranchStart_25);
  ll_backend__code_info__get_next_label_3_p_0(&FailLabel_96, STATE_VARIABLE_CI_0_46, &STATE_VARIABLE_CI_22_102);
  switch (CanFail_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_97, STATE_VARIABLE_CI_22_102, &STATE_VARIABLE_CI_48_48, STATE_VARIABLE_CLD_21_101);
      break;
    case (MR_Integer) 1:
      {
        FailCode_97 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[33])));
        STATE_VARIABLE_CI_48_48 = STATE_VARIABLE_CI_22_102;
      }
      break;
  }
  {
    TrieSwitchInfo_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TrieSwitchInfo_24, 0) = (MR_Box) ((MR_Unsigned) (Encoding_93));
    MR_hl_field(0, TrieSwitchInfo_24, 1) = ((MR_Box) (CodeUnitReg_94));
    MR_hl_field(0, TrieSwitchInfo_24, 2) = ((MR_Box) (BranchStart_25));
    MR_hl_field(0, TrieSwitchInfo_24, 3) = ((MR_Box) (FailLabel_96));
    MR_hl_field(0, TrieSwitchInfo_24, 4) = ((MR_Box) (FailCode_97));
  }
  {
    Params_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_26, 0) = ((MR_Box) (VarName_14));
    MR_hl_field(0, Params_26, 1) = ((MR_Box) (SwitchGoalInfo_18));
    MR_hl_field(0, Params_26, 2) = (MR_Box) ((MR_Unsigned) (CodeModel_16));
    MR_hl_field(0, Params_26, 3) = ((MR_Box) (BranchStart_25));
    MR_hl_field(0, Params_26, 4) = ((MR_Box) (EndLabel_19));
  }
  CommentCode_27 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[12])));
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), &CaseIdToLabelMap0_28);
  mercury__map__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0), &CaseLabelMap0_29);
  ll_backend__string_switch__represent_tagged_cases_in_string_trie_switch_10_p_0(Params_26, TaggedCases_15, CaseIdToLabelMap0_28, &CaseIdToLabelMap_30, CaseLabelMap0_29, &CaseLabelMap_31, (MR_Word) ((MR_Unsigned) 0U), MaybeEnd_20, STATE_VARIABLE_CI_48_48, &STATE_VARIABLE_CI_54_54);
  Var_55 = ((MR_Unsigned) ((MR_hl_field(0, TrieSwitchInfo_24, (MR_Integer) 0))) & (MR_Integer) 1);
  backend_libs__string_switch_util__create_trie_4_p_0(Var_55, TaggedCases_15, &_MaxCaseNum_32, &TopTrieNode_33);
  ll_backend__string_switch__convert_trie_to_nested_switches_9_p_0(TrieSwitchInfo_24, VarRval_13, CaseIdToLabelMap_30, (MR_Integer) 0, TopTrieNode_33, &TopTrieLabel_34, &TrieCode0_35, STATE_VARIABLE_CI_54_54, STATE_VARIABLE_CI_47);
  succeeded = mercury__cord__head_tail_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TrieCode0_35, &conv0_HeadTrieCodeInstr_36, &TailTrieCodeInstrs_37);
  if (succeeded)
  {
    HeadTrieCodeInstr_36 = ((MR_Word) (conv0_HeadTrieCodeInstr_36));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    Var_58 = ((MR_Word) ((MR_hl_field(0, HeadTrieCodeInstr_36, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) Var_58)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_58, (MR_Integer) 0)))) == (MR_Integer) 5)));
    if (succeeded)
    {
      Var_91 = ((MR_Word) ((MR_hl_field(3, Var_58, (MR_Integer) 1))));
      succeeded = ll_backend__llds____Unify____label_0_0(TopTrieLabel_34, Var_91);
    }
  }
  if (succeeded)
    TrieCode_39 = TailTrieCodeInstrs_37;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.string_switch.generate_string_trie_switch\'/12", (MR_String) "TrieCode0 does not start with TopTrieLabel");
      return;
    }
  ll_backend__switch_case__add_not_yet_included_cases_3_p_0(&CasesCode_40, CaseLabelMap_31, &Var_41);
  {
    Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_62, 1) = ((MR_Box) (EndLabel_19));
  }
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) ((MR_String) "end of string trie string"));
  }
  EndLabelCode_42 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_61)));
  FailLabel_43 = ((MR_Word) ((MR_hl_field(0, TrieSwitchInfo_24, (MR_Integer) 3))));
  {
    Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_65, 1) = ((MR_Box) (FailLabel_43));
  }
  {
    Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_64, 0) = ((MR_Box) (Var_65));
    MR_hl_field(0, Var_64, 1) = ((MR_Box) ((MR_String) "fail label"));
  }
  FailLabelCode_44 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_64)));
  FailCode_45 = ((MR_Word) ((MR_hl_field(0, TrieSwitchInfo_24, (MR_Integer) 4))));
  Var_70 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_45, EndLabelCode_42);
  Var_69 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailLabelCode_44, Var_70);
  Var_68 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CasesCode_40, Var_69);
  Var_67 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TrieCode_39, Var_68);
  *Code_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CommentCode_27, Var_67);
}

static void MR_CALL 
ll_backend__string_switch__convert_trie_choices_to_nested_switches_13_p_0(
  MR_Word TrieSwitchInfo_1,
  MR_Word VarRval_2,
  MR_Word CaseIdToLabelMap_3,
  MR_Integer NumMatched_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_NestedTrieInfosCord_0_6,
  MR_Word * STATE_VARIABLE_NestedTrieInfosCord_7,
  MR_Integer STATE_VARIABLE_NumInfos_0_8,
  MR_Integer * STATE_VARIABLE_NumInfos_9,
  MR_Word STATE_VARIABLE_NestedTrieCode_0_10,
  MR_Word * STATE_VARIABLE_NestedTrieCode_11,
  MR_Word STATE_VARIABLE_CI_0_12,
  MR_Word * STATE_VARIABLE_CI_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CI_13 = STATE_VARIABLE_CI_0_12;
      *STATE_VARIABLE_NestedTrieCode_11 = STATE_VARIABLE_NestedTrieCode_0_10;
      *STATE_VARIABLE_NumInfos_9 = STATE_VARIABLE_NumInfos_0_8;
      *STATE_VARIABLE_NestedTrieInfosCord_7 = STATE_VARIABLE_NestedTrieInfosCord_0_6;
    }
    else
    {
      MR_Word Choice_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Choices_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Integer CodeUnit_40 = ((MR_Integer) ((MR_hl_field(0, Choice_34, (MR_Integer) 0))));
      MR_Word TrieNode_41 = ((MR_Word) ((MR_hl_field(0, Choice_34, (MR_Integer) 1))));
      MR_Word TrieNodeLabel_42;
      MR_Word TrieNodeCode_43;
      MR_Word STATE_VARIABLE_CI_52_52;
      MR_Word Var_53;
      MR_Word STATE_VARIABLE_NestedTrieInfosCord_54_54;
      MR_Integer STATE_VARIABLE_NumInfos_55_55;
      MR_Word STATE_VARIABLE_NestedTrieCode_57_57;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_NestedTrieInfosCord_0_6;
      MR_Integer next_value_of_STATE_VARIABLE_NumInfos_0_8;
      MR_Word next_value_of_STATE_VARIABLE_NestedTrieCode_0_10;
      MR_Word next_value_of_STATE_VARIABLE_CI_0_12;

      ll_backend__string_switch__convert_trie_to_nested_switches_9_p_0(TrieSwitchInfo_1, VarRval_2, CaseIdToLabelMap_3, NumMatched_4, TrieNode_41, &TrieNodeLabel_42, &TrieNodeCode_43, STATE_VARIABLE_CI_0_12, &STATE_VARIABLE_CI_52_52);
      {
        Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_53, 0) = ((MR_Box) (CodeUnit_40));
        MR_hl_field(0, Var_53, 1) = ((MR_Box) (TrieNodeLabel_42));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_nested_trie_info_0), ((MR_Box) (Var_53)), STATE_VARIABLE_NestedTrieInfosCord_0_6, &STATE_VARIABLE_NestedTrieInfosCord_54_54);
      STATE_VARIABLE_NumInfos_55_55 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumInfos_0_8 + (MR_Unsigned) 1);
      STATE_VARIABLE_NestedTrieCode_57_57 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_NestedTrieCode_0_10, TrieNodeCode_43);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = Choices_35;
      next_value_of_STATE_VARIABLE_NestedTrieInfosCord_0_6 = STATE_VARIABLE_NestedTrieInfosCord_54_54;
      next_value_of_STATE_VARIABLE_NumInfos_0_8 = STATE_VARIABLE_NumInfos_55_55;
      next_value_of_STATE_VARIABLE_NestedTrieCode_0_10 = STATE_VARIABLE_NestedTrieCode_57_57;
      next_value_of_STATE_VARIABLE_CI_0_12 = STATE_VARIABLE_CI_52_52;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_NestedTrieInfosCord_0_6 = next_value_of_STATE_VARIABLE_NestedTrieInfosCord_0_6;
      STATE_VARIABLE_NumInfos_0_8 = next_value_of_STATE_VARIABLE_NumInfos_0_8;
      STATE_VARIABLE_NestedTrieCode_0_10 = next_value_of_STATE_VARIABLE_NestedTrieCode_0_10;
      STATE_VARIABLE_CI_0_12 = next_value_of_STATE_VARIABLE_CI_0_12;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__string_switch__convert_trie_to_nested_switches_9_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__207__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__string_switch__convert_trie_to_nested_switches_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__226__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__string_switch__convert_trie_to_nested_switches_9_p_0(
  MR_Word TrieSwitchInfo_10,
  MR_Word VarRval_11,
  MR_Word CaseIdToLabelMap_12,
  MR_Integer NumMatched_13,
  MR_Word TrieNode_14,
  MR_Word * TrieNodeLabel_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_67,
  MR_Word * STATE_VARIABLE_CI_68)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_CI_69_69;

  ll_backend__code_info__get_next_label_3_p_0(TrieNodeLabel_15, STATE_VARIABLE_CI_0_67, &STATE_VARIABLE_CI_69_69);
  if (((MR_tag((MR_Word) TrieNode_14)) == (MR_Integer) 1))
  {
    MR_Word MaybeEnd_32 = ((MR_Word) ((MR_hl_field(1, TrieNode_14, (MR_Integer) 2))));
    MR_Integer NumRevMatchedCodeUnits_33;
    MR_Word CodeUnitLval_34;
    MR_Word GetCurCodeUnitRval_35;
    MR_Word LabelCode_36;
    MR_Word SetCodeUnitCode_37;
    MR_Word CodeUnitRval_38;
    MR_Word GotoFailCode_39;
    MR_Word ChoicePairs_40;
    MR_Word StickCodeUnits_41;
    MR_Word TrieNodeAfterStick_42;
    MR_Word Var_92;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word RevMatchedCodeUnits_142 = ((MR_Word) ((MR_hl_field(1, TrieNode_14, (MR_Integer) 0))));
    MR_Word FailLabel_145;

    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevMatchedCodeUnits_142, &NumRevMatchedCodeUnits_33);
    {
      Var_92 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_92, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_4[0]));
      MR_hl_field(0, Var_92, 1) = ((MR_Box) (ll_backend__string_switch__convert_trie_to_nested_switches_9_p_0_1));
      MR_hl_field(0, Var_92, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_92, 3) = ((MR_Box) (NumMatched_13));
      MR_hl_field(0, Var_92, 4) = ((MR_Box) (NumRevMatchedCodeUnits_33));
    }
    mercury__require__expect_3_p_0(Var_92, (MR_String) "predicate \140ll_backend.string_switch.convert_trie_to_nested_switches\'/9", (MR_String) "NumRevMatchedCodeUnits != NumMatched");
    CodeUnitLval_34 = ((MR_Word) ((MR_hl_field(0, TrieSwitchInfo_10, (MR_Integer) 1))));
    {
      Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_97, 0) = ((MR_Box) (NumMatched_13));
    }
    {
      Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_96, 1) = ((MR_Box) (Var_97));
    }
    {
      GetCurCodeUnitRval_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GetCurCodeUnitRval_35, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, GetCurCodeUnitRval_35, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(3, GetCurCodeUnitRval_35, 2) = ((MR_Box) (VarRval_11));
      MR_hl_field(3, GetCurCodeUnitRval_35, 3) = ((MR_Box) (Var_96));
    }
    {
      Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_99, 1) = ((MR_Box) (*TrieNodeLabel_15));
    }
    {
      Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_98, 0) = ((MR_Box) (Var_99));
      MR_hl_field(0, Var_98, 1) = ((MR_Box) ((MR_String) ""));
    }
    LabelCode_36 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_98)));
    {
      Var_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_102, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_102, 1) = ((MR_Box) (CodeUnitLval_34));
      MR_hl_field(3, Var_102, 2) = ((MR_Box) (GetCurCodeUnitRval_35));
    }
    {
      Var_101 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_101, 0) = ((MR_Box) (Var_102));
      MR_hl_field(0, Var_101, 1) = ((MR_Box) ((MR_String) ""));
    }
    SetCodeUnitCode_37 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_101)));
    {
      CodeUnitRval_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CodeUnitRval_38, 0) = ((MR_Box) (CodeUnitLval_34));
    }
    FailLabel_145 = ((MR_Word) ((MR_hl_field(0, TrieSwitchInfo_10, (MR_Integer) 3))));
    {
      Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_106, 0) = ((MR_Box) (FailLabel_145));
    }
    {
      Var_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_105, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_105, 1) = ((MR_Box) (Var_106));
    }
    {
      Var_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_104, 0) = ((MR_Box) (Var_105));
      MR_hl_field(0, Var_104, 1) = ((MR_Box) ((MR_String) "no match; goto fail"));
    }
    GotoFailCode_39 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_104)));
    backend_libs__string_switch_util__chase_any_stick_in_trie_4_p_0(TrieNode_14, &ChoicePairs_40, &StickCodeUnits_41, &TrieNodeAfterStick_42);
    if ((StickCodeUnits_41 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word NestedTrieInfosCord_58;
      MR_Integer NumInfos0_59;
      MR_Word NestedTrieCode_60;
      MR_Word NestedTrieInfos0_61;
      MR_Word NestedTrieInfos_62;
      MR_Integer NumInfos_63;
      MR_Integer Var_124 = (MR_Integer) ((MR_Unsigned) NumMatched_13 + (MR_Unsigned) 1);
      MR_Word Var_125;
      MR_Word Var_127;
      MR_Word STATE_VARIABLE_CI_128_128;
      MR_Word Var_135;
      MR_Word Var_136;
      MR_Word TestCode_139;

      Var_125 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_nested_trie_info_0));
      Var_127 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      ll_backend__string_switch__convert_trie_choices_to_nested_switches_13_p_0(TrieSwitchInfo_10, VarRval_11, CaseIdToLabelMap_12, Var_124, ChoicePairs_40, Var_125, &NestedTrieInfosCord_58, (MR_Integer) 0, &NumInfos0_59, Var_127, &NestedTrieCode_60, STATE_VARIABLE_CI_69_69, &STATE_VARIABLE_CI_128_128);
      NestedTrieInfos0_61 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_nested_trie_info_0), NestedTrieInfosCord_58);
      if ((MaybeEnd_32 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        NestedTrieInfos_62 = NestedTrieInfos0_61;
        NumInfos_63 = NumInfos0_59;
      }
      else
      {
        MR_Word EndCaseId_64 = ((MR_Word) ((MR_hl_field(1, MaybeEnd_32, (MR_Integer) 0))));
        MR_Word EndCaseLabel_65;
        MR_Word EndNestedTrieInfo_66;
        MR_Box conv0_EndCaseLabel_65;

        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), CaseIdToLabelMap_12, ((MR_Box) (EndCaseId_64)), &conv0_EndCaseLabel_65);
        EndCaseLabel_65 = ((MR_Word) (conv0_EndCaseLabel_65));
        {
          EndNestedTrieInfo_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, EndNestedTrieInfo_66, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(0, EndNestedTrieInfo_66, 1) = ((MR_Box) (EndCaseLabel_65));
        }
        {
          NestedTrieInfos_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, NestedTrieInfos_62, 0) = ((MR_Box) (EndNestedTrieInfo_66));
          MR_hl_field(1, NestedTrieInfos_62, 1) = ((MR_Box) (NestedTrieInfos0_61));
        }
        NumInfos_63 = (MR_Integer) ((MR_Unsigned) NumInfos0_59 + (MR_Unsigned) 1);
      }
      succeeded = (NumInfos_63 <= (MR_Integer) 3);
      if (succeeded)
      {
        MR_Word Var_133;

        Var_133 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        ll_backend__string_switch__generate_nested_trie_try_chain_5_p_0(GotoFailCode_39, CodeUnitRval_38, NestedTrieInfos_62, Var_133, &TestCode_139);
        *STATE_VARIABLE_CI_68 = STATE_VARIABLE_CI_128_128;
      }
      else
        ll_backend__string_switch__generate_nested_trie_binary_search_7_p_0(GotoFailCode_39, CodeUnitRval_38, NumInfos_63, NestedTrieInfos_62, &TestCode_139, STATE_VARIABLE_CI_128_128, STATE_VARIABLE_CI_68);
      Var_136 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCode_139, NestedTrieCode_60);
      Var_135 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetCodeUnitCode_37, Var_136);
      *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_36, Var_135);
    }
    else
    {
      MR_Word Var_247 = ((MR_Word) ((MR_hl_field(1, StickCodeUnits_41, (MR_Integer) 1))));

      if ((Var_247 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word NestedTrieInfosCord_197;
        MR_Integer NumInfos0_198;
        MR_Word NestedTrieCode_199;
        MR_Word NestedTrieInfos0_200;
        MR_Word NestedTrieInfos_201;
        MR_Integer NumInfos_202;
        MR_Integer Var_206 = (MR_Integer) ((MR_Unsigned) NumMatched_13 + (MR_Unsigned) 1);
        MR_Word Var_207;
        MR_Word Var_209;
        MR_Word STATE_VARIABLE_CI_128_210;
        MR_Word Var_216;
        MR_Word Var_217;
        MR_Word TestCode_218;

        Var_207 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_nested_trie_info_0));
        Var_209 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        ll_backend__string_switch__convert_trie_choices_to_nested_switches_13_p_0(TrieSwitchInfo_10, VarRval_11, CaseIdToLabelMap_12, Var_206, ChoicePairs_40, Var_207, &NestedTrieInfosCord_197, (MR_Integer) 0, &NumInfos0_198, Var_209, &NestedTrieCode_199, STATE_VARIABLE_CI_69_69, &STATE_VARIABLE_CI_128_210);
        NestedTrieInfos0_200 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_nested_trie_info_0), NestedTrieInfosCord_197);
        if ((MaybeEnd_32 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          NestedTrieInfos_201 = NestedTrieInfos0_200;
          NumInfos_202 = NumInfos0_198;
        }
        else
        {
          MR_Word EndCaseId_179 = ((MR_Word) ((MR_hl_field(1, MaybeEnd_32, (MR_Integer) 0))));
          MR_Word EndCaseLabel_180;
          MR_Word EndNestedTrieInfo_181;
          MR_Box conv1_EndCaseLabel_180;

          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), CaseIdToLabelMap_12, ((MR_Box) (EndCaseId_179)), &conv1_EndCaseLabel_180);
          EndCaseLabel_180 = ((MR_Word) (conv1_EndCaseLabel_180));
          {
            EndNestedTrieInfo_181 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, EndNestedTrieInfo_181, 0) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(0, EndNestedTrieInfo_181, 1) = ((MR_Box) (EndCaseLabel_180));
          }
          {
            NestedTrieInfos_201 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NestedTrieInfos_201, 0) = ((MR_Box) (EndNestedTrieInfo_181));
            MR_hl_field(1, NestedTrieInfos_201, 1) = ((MR_Box) (NestedTrieInfos0_200));
          }
          NumInfos_202 = (MR_Integer) ((MR_Unsigned) NumInfos0_198 + (MR_Unsigned) 1);
        }
        succeeded = (NumInfos_202 <= (MR_Integer) 3);
        if (succeeded)
        {
          MR_Word Var_194;

          Var_194 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          ll_backend__string_switch__generate_nested_trie_try_chain_5_p_0(GotoFailCode_39, CodeUnitRval_38, NestedTrieInfos_201, Var_194, &TestCode_218);
          *STATE_VARIABLE_CI_68 = STATE_VARIABLE_CI_128_210;
        }
        else
          ll_backend__string_switch__generate_nested_trie_binary_search_7_p_0(GotoFailCode_39, CodeUnitRval_38, NumInfos_202, NestedTrieInfos_201, &TestCode_218, STATE_VARIABLE_CI_128_210, STATE_VARIABLE_CI_68);
        Var_217 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCode_218, NestedTrieCode_199);
        Var_216 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetCodeUnitCode_37, Var_217);
        *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_36, Var_216);
      }
      else
      {
        MR_Integer NumStickCodeUnits_46;
        MR_Word CmpOp_47;
        MR_Word MatchedStickCodeUnits_48;
        MR_String MatchedStickStr_49;
        MR_String TestComment_50;
        MR_Word TestRval_51;
        MR_Word TrieNodeLabelAfterStick_52;
        MR_Word CodeAfterStick_53;
        MR_Word TrieNodeCodeAddrAfterStick_54;
        MR_Word TestCode_55;
        MR_Word TestChainCode_56;
        MR_Word Var_109;
        MR_String Var_111;
        MR_String Var_112;
        MR_String Var_113;
        MR_String Var_115;
        MR_Word Var_116;
        MR_Word Var_117;
        MR_Integer Var_118;
        MR_Word Var_120;
        MR_Word Var_121;
        MR_Word Var_122;
        MR_Word MatchedCodeUnits_137;
        MR_Word Encoding_138;

        mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), StickCodeUnits_41, &NumStickCodeUnits_46);
        {
          Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_109, 0) = ((MR_Box) (NumStickCodeUnits_46));
        }
        {
          CmpOp_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CmpOp_47, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, CmpOp_47, 1) = ((MR_Box) (NumMatched_13));
          MR_hl_field(3, CmpOp_47, 2) = ((MR_Box) (Var_109));
        }
        mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevMatchedCodeUnits_142, &MatchedCodeUnits_137);
        Encoding_138 = ((MR_Unsigned) ((MR_hl_field(0, TrieSwitchInfo_10, (MR_Integer) 0))) & (MR_Integer) 1);
        MatchedStickCodeUnits_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MatchedCodeUnits_137, StickCodeUnits_41);
        backend_libs__string_encoding__det_from_code_unit_list_in_encoding_allow_ill_formed_3_p_0(Encoding_138, MatchedStickCodeUnits_48, &MatchedStickStr_49);
        Var_112 = mercury__string__string_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[4]), ((MR_Box) (MatchedCodeUnits_137)));
        Var_115 = mercury__string__string_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[4]), ((MR_Box) (StickCodeUnits_41)));
        Var_113 = mercury__string__f_43_43_2_f_0((MR_String) " StickCodeUnits ", Var_115);
        Var_111 = mercury__string__f_43_43_2_f_0(Var_112, Var_113);
        TestComment_50 = mercury__string__f_43_43_2_f_0((MR_String) "MatchedCodeUnits ", Var_111);
        {
          Var_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_117, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(3, Var_117, 1) = ((MR_Box) (MatchedStickStr_49));
        }
        {
          Var_116 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_116, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_116, 1) = ((MR_Box) (Var_117));
        }
        {
          TestRval_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TestRval_51, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, TestRval_51, 1) = ((MR_Box) (CmpOp_47));
          MR_hl_field(3, TestRval_51, 2) = ((MR_Box) (VarRval_11));
          MR_hl_field(3, TestRval_51, 3) = ((MR_Box) (Var_116));
        }
        Var_118 = (MR_Integer) ((MR_Unsigned) NumMatched_13 + (MR_Unsigned) NumStickCodeUnits_46);
        ll_backend__string_switch__convert_trie_to_nested_switches_9_p_0(TrieSwitchInfo_10, VarRval_11, CaseIdToLabelMap_12, Var_118, TrieNodeAfterStick_42, &TrieNodeLabelAfterStick_52, &CodeAfterStick_53, STATE_VARIABLE_CI_69_69, STATE_VARIABLE_CI_68);
        {
          TrieNodeCodeAddrAfterStick_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TrieNodeCodeAddrAfterStick_54, 0) = ((MR_Box) (TrieNodeLabelAfterStick_52));
        }
        {
          Var_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_121, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_121, 1) = ((MR_Box) (TestRval_51));
          MR_hl_field(3, Var_121, 2) = ((MR_Box) (TrieNodeCodeAddrAfterStick_54));
        }
        {
          Var_120 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_120, 0) = ((MR_Box) (Var_121));
          MR_hl_field(0, Var_120, 1) = ((MR_Box) (TestComment_50));
        }
        TestCode_55 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_120)));
        TestChainCode_56 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCode_55, GotoFailCode_39);
        Var_122 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestChainCode_56, CodeAfterStick_53);
        *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_36, Var_122);
      }
    }
  }
  else
  {
    MR_Word RevMatchedCodeUnits_18 = ((MR_Word) ((MR_hl_field(0, TrieNode_14, (MR_Integer) 0))));
    MR_Word NotYetMatchedCodeUnits_19 = ((MR_Word) ((MR_hl_field(0, TrieNode_14, (MR_Integer) 1))));
    MR_Word CaseId_20 = ((MR_Word) ((MR_hl_field(0, TrieNode_14, (MR_Integer) 2))));
    MR_Word MatchedCodeUnits_21;
    MR_Word AllCodeUnits_22;
    MR_Integer NumMatchedCodeUnits_23;
    MR_Word Encoding_24;
    MR_String EndStr_25;
    MR_String NodeComment_26;
    MR_Word CondRval_27;
    MR_Word StrCaseLabel_28;
    MR_Word StrCaseCodeAddr_29;
    MR_Word FailLabel_30;
    MR_Word Var_70;
    MR_String Var_74;
    MR_Word Var_75;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Box conv2_StrCaseLabel_28;

    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevMatchedCodeUnits_18, &MatchedCodeUnits_21);
    AllCodeUnits_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MatchedCodeUnits_21, NotYetMatchedCodeUnits_19);
    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MatchedCodeUnits_21, &NumMatchedCodeUnits_23);
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_70, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_4[0]));
      MR_hl_field(0, Var_70, 1) = ((MR_Box) (ll_backend__string_switch__convert_trie_to_nested_switches_9_p_0_2));
      MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_70, 3) = ((MR_Box) (NumMatched_13));
      MR_hl_field(0, Var_70, 4) = ((MR_Box) (NumMatchedCodeUnits_23));
    }
    mercury__require__expect_3_p_0(Var_70, (MR_String) "predicate \140ll_backend.string_switch.convert_trie_to_nested_switches\'/9", (MR_String) "NumevMatchedCodeUnits != NumMatched");
    Encoding_24 = ((MR_Unsigned) ((MR_hl_field(0, TrieSwitchInfo_10, (MR_Integer) 0))) & (MR_Integer) 1);
    backend_libs__string_encoding__det_from_code_unit_list_in_encoding_allow_ill_formed_3_p_0(Encoding_24, AllCodeUnits_22, &EndStr_25);
    Var_74 = mercury__string__string_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[4]), ((MR_Box) (AllCodeUnits_22)));
    NodeComment_26 = mercury__string__f_43_43_2_f_0((MR_String) "AllCodeUnits ", Var_74);
    {
      Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_75, 1) = ((MR_Box) (NumMatched_13));
      MR_hl_field(3, Var_75, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(3, Var_78, 1) = ((MR_Box) (EndStr_25));
    }
    {
      Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_77, 1) = ((MR_Box) (Var_78));
    }
    {
      CondRval_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, CondRval_27, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, CondRval_27, 1) = ((MR_Box) (Var_75));
      MR_hl_field(3, CondRval_27, 2) = ((MR_Box) (VarRval_11));
      MR_hl_field(3, CondRval_27, 3) = ((MR_Box) (Var_77));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), CaseIdToLabelMap_12, ((MR_Box) (CaseId_20)), &conv2_StrCaseLabel_28);
    StrCaseLabel_28 = ((MR_Word) (conv2_StrCaseLabel_28));
    {
      StrCaseCodeAddr_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, StrCaseCodeAddr_29, 0) = ((MR_Box) (StrCaseLabel_28));
    }
    FailLabel_30 = ((MR_Word) ((MR_hl_field(0, TrieSwitchInfo_10, (MR_Integer) 3))));
    {
      Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_81, 1) = ((MR_Box) (*TrieNodeLabel_15));
    }
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_80, 0) = ((MR_Box) (Var_81));
      MR_hl_field(0, Var_80, 1) = ((MR_Box) (NodeComment_26));
    }
    {
      Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_84, 1) = ((MR_Box) (CondRval_27));
      MR_hl_field(3, Var_84, 2) = ((MR_Box) (StrCaseCodeAddr_29));
    }
    {
      Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_83, 0) = ((MR_Box) (Var_84));
      MR_hl_field(0, Var_83, 1) = ((MR_Box) ((MR_String) "match; goto case"));
    }
    {
      Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_89, 0) = ((MR_Box) (FailLabel_30));
    }
    {
      Var_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_88, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_88, 1) = ((MR_Box) (Var_89));
    }
    {
      Var_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_87, 0) = ((MR_Box) (Var_88));
      MR_hl_field(0, Var_87, 1) = ((MR_Box) ((MR_String) "no match; goto fail"));
    }
    {
      Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
      MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
      MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_86));
    }
    {
      Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
      MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_82));
    }
    *Code_16 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_79);
    *STATE_VARIABLE_CI_68 = STATE_VARIABLE_CI_69_69;
  }
}

static void MR_CALL 
ll_backend__string_switch__generate_nested_trie_binary_search_7_p_0(
  MR_Word GotoFailCode_8,
  MR_Word CodeUnitRval_9,
  MR_Integer NumInfos_10,
  MR_Word NestedTrieInfos_11,
  MR_Word * TestCode_12,
  MR_Word STATE_VARIABLE_CI_0_28,
  MR_Word * STATE_VARIABLE_CI_29)
{
  MR_bool succeeded = (NumInfos_10 <= (MR_Integer) 3);

  if (succeeded)
  {
    MR_Word Var_31;

    Var_31 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    ll_backend__string_switch__generate_nested_trie_try_chain_5_p_0(GotoFailCode_8, CodeUnitRval_9, NestedTrieInfos_11, Var_31, TestCode_12);
    *STATE_VARIABLE_CI_29 = STATE_VARIABLE_CI_0_28;
  }
  else
  {
    MR_Integer NumInfosR_14;
    MR_Integer NumInfosL_15;
    MR_Word NestedTrieInfosL_16;
    MR_Word NestedTrieInfosR_17;
    MR_Word HeadNestedTrieInfoR_18;
    MR_Integer LeastCodeUnitR_19;
    MR_Word LabelR_21;
    MR_Word TestRvalLR_22;
    MR_Word TestCodeLR_24;
    MR_Word TestCodeL_25;
    MR_Word LabelCodeR_26;
    MR_Word TestCodeR_27;
    MR_Word STATE_VARIABLE_CI_33_33;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word STATE_VARIABLE_CI_41_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Box conv0_HeadNestedTrieInfoR_18;

    NumInfosR_14 = mercury__int__f_slash_2_f_0(NumInfos_10, (MR_Integer) 2);
    NumInfosL_15 = (MR_Integer) ((MR_Unsigned) NumInfos_10 - (MR_Unsigned) NumInfosR_14);
    mercury__list__det_split_list_4_p_0((MR_Word) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_nested_trie_info_0), NumInfosL_15, NestedTrieInfos_11, &NestedTrieInfosL_16, &NestedTrieInfosR_17);
    mercury__list__det_head_2_p_0((MR_Word) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_nested_trie_info_0), NestedTrieInfosR_17, &conv0_HeadNestedTrieInfoR_18);
    HeadNestedTrieInfoR_18 = ((MR_Word) (conv0_HeadNestedTrieInfoR_18));
    LeastCodeUnitR_19 = ((MR_Integer) ((MR_hl_field(0, HeadNestedTrieInfoR_18, (MR_Integer) 0))));
    ll_backend__code_info__get_next_label_3_p_0(&LabelR_21, STATE_VARIABLE_CI_0_28, &STATE_VARIABLE_CI_33_33);
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (LeastCodeUnitR_19));
    }
    {
      Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_36, 1) = ((MR_Box) (Var_37));
    }
    {
      TestRvalLR_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, TestRvalLR_22, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, TestRvalLR_22, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[24])));
      MR_hl_field(3, TestRvalLR_22, 2) = ((MR_Box) (CodeUnitRval_9));
      MR_hl_field(3, TestRvalLR_22, 3) = ((MR_Box) (Var_36));
    }
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) (LabelR_21));
    }
    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (TestRvalLR_22));
      MR_hl_field(3, Var_39, 2) = ((MR_Box) (Var_40));
    }
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(0, Var_38, 1) = ((MR_Box) ((MR_String) "binary search on code unit"));
    }
    TestCodeLR_24 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_38)));
    ll_backend__string_switch__generate_nested_trie_binary_search_7_p_0(GotoFailCode_8, CodeUnitRval_9, NumInfosL_15, NestedTrieInfosL_16, &TestCodeL_25, STATE_VARIABLE_CI_33_33, &STATE_VARIABLE_CI_41_41);
    {
      Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_43, 1) = ((MR_Box) (LabelR_21));
    }
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(0, Var_42, 1) = ((MR_Box) ((MR_String) ""));
    }
    LabelCodeR_26 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_42)));
    ll_backend__string_switch__generate_nested_trie_binary_search_7_p_0(GotoFailCode_8, CodeUnitRval_9, NumInfosR_14, NestedTrieInfosR_17, &TestCodeR_27, STATE_VARIABLE_CI_41_41, STATE_VARIABLE_CI_29);
    Var_47 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCodeR_26, TestCodeR_27);
    Var_46 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCodeL_25, Var_47);
    *TestCode_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCodeLR_24, Var_46);
  }
}

static void MR_CALL 
ll_backend__string_switch__generate_nested_trie_try_chain_5_p_0(
  MR_Word GotoFailCode_1,
  MR_Word CodeUnitRval_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_TryChainCode_0_4,
  MR_Word * STATE_VARIABLE_TryChainCode_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TryChainCode_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_TryChainCode_0_4, GotoFailCode_1);
    else
    {
      MR_Word NestedTrieInfo_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word NestedTrieInfos_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer CodeUnit_17 = ((MR_Integer) ((MR_hl_field(0, NestedTrieInfo_14, (MR_Integer) 0))));
      MR_Word NestedTrieNodeLabel_18 = ((MR_Word) ((MR_hl_field(0, NestedTrieInfo_14, (MR_Integer) 1))));
      MR_Word TestRval_19;
      MR_Word TestCodeUnitCode_20;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word STATE_VARIABLE_TryChainCode_31_31;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_TryChainCode_0_4;

      {
        Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_26, 0) = ((MR_Box) (CodeUnit_17));
      }
      {
        Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_25, 1) = ((MR_Box) (Var_26));
      }
      {
        TestRval_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, TestRval_19, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, TestRval_19, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[23])));
        MR_hl_field(3, TestRval_19, 2) = ((MR_Box) (CodeUnitRval_2));
        MR_hl_field(3, TestRval_19, 3) = ((MR_Box) (Var_25));
      }
      {
        Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_29, 0) = ((MR_Box) (NestedTrieNodeLabel_18));
      }
      {
        Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_28, 1) = ((MR_Box) (TestRval_19));
        MR_hl_field(3, Var_28, 2) = ((MR_Box) (Var_29));
      }
      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_27, 0) = ((MR_Box) (Var_28));
        MR_hl_field(0, Var_27, 1) = ((MR_Box) ((MR_String) ""));
      }
      TestCodeUnitCode_20 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_27)));
      STATE_VARIABLE_TryChainCode_31_31 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_TryChainCode_0_4, TestCodeUnitCode_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = NestedTrieInfos_15;
      next_value_of_STATE_VARIABLE_TryChainCode_0_4 = STATE_VARIABLE_TryChainCode_31_31;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_TryChainCode_0_4 = next_value_of_STATE_VARIABLE_TryChainCode_0_4;
      continue;
    }
    break;
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
      MR_Word TaggedCase_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TaggedCases_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Label_31;
      MR_Word CaseId_35;
      MR_Word STATE_VARIABLE_CaseLabelMap_45_45;
      MR_Word STATE_VARIABLE_MaybeEnd_46_46;
      MR_Word STATE_VARIABLE_CI_47_47;
      MR_Word STATE_VARIABLE_CaseIdToLabelMap_49_49;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_CaseIdToLabelMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_CaseLabelMap_0_5;
      MR_Word next_value_of_STATE_VARIABLE_MaybeEnd_0_7;
      MR_Word next_value_of_STATE_VARIABLE_CI_0_9;

      ll_backend__switch_case__represent_tagged_case_for_llds_11_p_0(Params_1, TaggedCase_25, &Label_31, STATE_VARIABLE_CaseLabelMap_0_5, &STATE_VARIABLE_CaseLabelMap_45_45, STATE_VARIABLE_MaybeEnd_0_7, &STATE_VARIABLE_MaybeEnd_46_46, STATE_VARIABLE_CI_0_9, &STATE_VARIABLE_CI_47_47);
      CaseId_35 = ((MR_Word) ((MR_hl_field(0, TaggedCase_25, (MR_Integer) 2))));
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (CaseId_35)), ((MR_Box) (Label_31)), STATE_VARIABLE_CaseIdToLabelMap_0_3, &STATE_VARIABLE_CaseIdToLabelMap_49_49);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TaggedCases_26;
      next_value_of_STATE_VARIABLE_CaseIdToLabelMap_0_3 = STATE_VARIABLE_CaseIdToLabelMap_49_49;
      next_value_of_STATE_VARIABLE_CaseLabelMap_0_5 = STATE_VARIABLE_CaseLabelMap_45_45;
      next_value_of_STATE_VARIABLE_MaybeEnd_0_7 = STATE_VARIABLE_MaybeEnd_46_46;
      next_value_of_STATE_VARIABLE_CI_0_9 = STATE_VARIABLE_CI_47_47;
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
ll_backend__string_switch____Unify____nested_trie_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__string_switch____Unify____nested_trie_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__string_switch____Compare____nested_trie_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__string_switch____Compare____nested_trie_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

void mercury__ll_backend__string_switch__init(void)
{
}

void mercury__ll_backend__string_switch__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_nested_trie_info_0);
	MR_register_type_ctor_info(&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_binary_switch_info_0);
	MR_register_type_ctor_info(&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_hash_switch_info_0);
	MR_register_type_ctor_info(&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_string_trie_switch_info_0);
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
