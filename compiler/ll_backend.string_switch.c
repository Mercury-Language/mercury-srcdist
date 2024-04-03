/*
** Automatically generated from `string_switch.m'
** by the Mercury compiler,
** version rotd-2024-04-03
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
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.status.mih"
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

static const MR_FA_TypeInfo_Struct1 ll_backend__string_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__string_switch__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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
ll_backend__string_switch__IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__1558__1_2_p_0(
  MR_Word OutVars_21,
  MR_Word HeadVar__2_84);

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__1029__1_2_p_0(
  MR_Word OutVars_21,
  MR_Word HeadVar__2_111);

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__construct_string_trie_simple_lookup_vector__585__1_2_p_0(
  MR_Integer RowNum_2,
  MR_Integer CaseIdNum_15);

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__232__1_2_p_0(
  MR_Integer NumMatched_11,
  MR_Integer NumMatchedCodeUnits_21);

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__250__1_2_p_0(
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
  MR_Word * Code_27,
  MR_Word STATE_VARIABLE_MaybeEnd_0_65,
  MR_Word * STATE_VARIABLE_MaybeEnd_66,
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
  MR_Word * Code_23,
  MR_Word STATE_VARIABLE_MaybeEnd_0_49,
  MR_Word * STATE_VARIABLE_MaybeEnd_50,
  MR_Word STATE_VARIABLE_CI_0_51,
  MR_Word * STATE_VARIABLE_CI_52,
  MR_Word STATE_VARIABLE_CLD_0_53);

static void MR_CALL 
ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RowsCord_0_2,
  MR_Word * STATE_VARIABLE_RowsCord_3);

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
  MR_Word * Code_27,
  MR_Word STATE_VARIABLE_MaybeEnd_0_68,
  MR_Word * STATE_VARIABLE_MaybeEnd_69,
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
  MR_Word * Code_23,
  MR_Word STATE_VARIABLE_MaybeEnd_0_53,
  MR_Word * STATE_VARIABLE_MaybeEnd_54,
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
ll_backend__string_switch__init_string_trie_switch_info_lookup_5_p_0(
  MR_Word CanFail_6,
  MR_Word * Info_7,
  MR_Word STATE_VARIABLE_CI_0_18,
  MR_Word * STATE_VARIABLE_CI_19,
  MR_Word STATE_VARIABLE_CLD_0_20);

static void MR_CALL 
ll_backend__string_switch__generate_string_trie_simple_lookup_switch_14_p_0(
  MR_Word LookupInfo_15,
  MR_Word CaseValues_16,
  MR_Word OutVars_17,
  MR_Word OutTypes_18,
  MR_Word Liveness_19,
  MR_Word EndLabel_20,
  MR_Word StoreMap_21,
  MR_Word SetAndCheckCaseNumCode_22,
  MR_Word * Code_23,
  MR_Word STATE_VARIABLE_MaybeEnd_0_42,
  MR_Word * STATE_VARIABLE_MaybeEnd_43,
  MR_Word STATE_VARIABLE_CI_0_44,
  MR_Word * STATE_VARIABLE_CI_45,
  MR_Word STATE_VARIABLE_CLD_0_46);

static MR_bool MR_CALL 
ll_backend__string_switch__construct_string_trie_simple_lookup_vector_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__string_switch__construct_string_trie_simple_lookup_vector_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer RowNum_2,
  MR_Word STATE_VARIABLE_RowsCord_0_3,
  MR_Word * STATE_VARIABLE_RowsCord_4);

static void MR_CALL 
ll_backend__string_switch__init_string_trie_switch_info_jump_5_p_0(
  MR_Word CanFail_6,
  MR_Word * Info_7,
  MR_Word STATE_VARIABLE_CI_0_17,
  MR_Word * STATE_VARIABLE_CI_18,
  MR_Word STATE_VARIABLE_CLD_0_19);

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


static /* final */ const MR_Box ll_backend__string_switch_scalar_common_1[36][2];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_2[9][3];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_3[13][1];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_4[3][5];

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_5[1][7];

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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__string_switch_scalar_common_1[5]))
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[1])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 15U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[2])))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(2, &ll_backend__string_switch_scalar_common_3[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[18])))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[20])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[4]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[5])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[6])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[8])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[9]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[10]))),
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
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[11]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_Unsigned) 10U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[12])))
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
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_4[1])),
    ((MR_Box) (ll_backend__string_switch__generate_string_hash_simple_lookup_switch_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_4[1])),
    ((MR_Box) (ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&ll_backend__string_switch_scalar_common_4[1])),
    ((MR_Box) (ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__string_switch_scalar_common_3[13][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "string trie jump switch")) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) -1)) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "string binary jump switch")) },
  /* row   5 */
  { ((MR_Box) ((MR_Integer) 2)) },
  /* row   6 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   7 */
  { ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0))))) },
  /* row   8 */
  { ((MR_Box) ((MR_Integer) -2)) },
  /* row   9 */
  { ((MR_Box) ((MR_String) "string binary simple lookup switch")) },
  /* row  10 */
  { ((MR_Box) ((MR_String) "string binary multi soln lookup switch")) },
  /* row  11 */
  { ((MR_Box) ((MR_String) "unreachable; fail code in cannot_fail switch")) },
  /* row  12 */
  { ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[21]))) },
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
ll_backend__string_switch__IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__1558__1_2_p_0(
  MR_Word OutVars_21,
  MR_Word HeadVar__2_84)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[9]), ((MR_Box) (OutVars_21)), ((MR_Box) (HeadVar__2_84)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__1029__1_2_p_0(
  MR_Word OutVars_21,
  MR_Word HeadVar__2_111)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[9]), ((MR_Box) (OutVars_21)), ((MR_Box) (HeadVar__2_111)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__construct_string_trie_simple_lookup_vector__585__1_2_p_0(
  MR_Integer RowNum_2,
  MR_Integer CaseIdNum_15)
{
  MR_bool succeeded = (RowNum_2 == CaseIdNum_15);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__232__1_2_p_0(
  MR_Integer NumMatched_11,
  MR_Integer NumMatchedCodeUnits_21)
{
  MR_bool succeeded = (NumMatchedCodeUnits_21 == NumMatched_11);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__250__1_2_p_0(
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
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
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

                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[11]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
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
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
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

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_2[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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

              mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[11]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[11]), HeadVar__1_1, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
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
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));

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
                TypeInfo_26_26 = (MR_Word) (&ll_backend__string_switch_scalar_common_1[11]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_27_27 = (MR_Word) (&ll_backend__string_switch_scalar_common_1[11]);
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
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_19_19 = (MR_Word) (&ll_backend__string_switch_scalar_common_2[5]);
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
              TypeInfo_23_23 = (MR_Word) (&ll_backend__string_switch_scalar_common_1[11]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_24_24 = (MR_Word) (&ll_backend__string_switch_scalar_common_1[11]);
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

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
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Integer Var_11;
    MR_Integer Var_12;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      Var_11 = (MR_Integer) (ArgX1_5);
      Var_12 = (MR_Integer) (ArgY1_6);
      succeeded = (Var_11 == Var_12);
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = ll_backend__llds____Unify____label_0_0(ArgX1_3, ArgY1_4);
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
    ll_backend__string_switch__generate_string_binary_simple_lookup_switch_14_p_0(VarRval_9, KeyValuesAL_25, OutVars_19, OutTypes_20, Liveness_21, CanFail_11, EndLabel_12, StoreMap_13, Code_15, STATE_VARIABLE_MaybeEnd_33_33, STATE_VARIABLE_MaybeEnd_31, STATE_VARIABLE_CI_34_34, STATE_VARIABLE_CI_32, CLD_22);
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
    ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_16_p_0(VarRval_9, KeySolnsAL_30, ResumeVars_27, GoalsMayModifyTrail_28, OutVars_19, OutTypes_20, Liveness_21, CanFail_11, EndLabel_12, StoreMap_13, Code_15, STATE_VARIABLE_MaybeEnd_33_33, STATE_VARIABLE_MaybeEnd_31, STATE_VARIABLE_CI_34_34, STATE_VARIABLE_CI_32, CLD_22);
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

  succeeded = ll_backend__string_switch__IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__1558__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
  MR_Word * Code_27,
  MR_Word STATE_VARIABLE_MaybeEnd_0_65,
  MR_Word * STATE_VARIABLE_MaybeEnd_66,
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
  CommentCode_32 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[30])));
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_2[4]), CaseSolns_18, &MainTableSize_33);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[5]), OutVars_21, &NumOutVars_34);
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
  DummyLaterSolnRow_41 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__string_switch_scalar_common_2[8]), OutTypes_22);
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
  Var_98 = (MR_Word) (MR_mkword(2, &ll_backend__string_switch_scalar_common_3[3]));
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
    MR_hl_field(3, Var_118, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[23])));
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
  *Code_27 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CommentCode_32, Var_131);
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
        ZeroRval_37 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[15]));
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
  MR_Word * Code_23,
  MR_Word STATE_VARIABLE_MaybeEnd_0_49,
  MR_Word * STATE_VARIABLE_MaybeEnd_50,
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
  CommentCode_28 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[29])));
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_2[3]), CaseValues_16, &TableSize_29);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[5]), OutVars_17, &NumOutVars_30);
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
      MR_hl_field(3, Var_76, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[23])));
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
    ll_backend__lookup_util__record_offset_assigns_6_p_0(OutVars_17, (MR_Integer) 1, BaseReg_44, *STATE_VARIABLE_CI_52, STATE_VARIABLE_CLD_68_68, &STATE_VARIABLE_CLD_84_84);
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
  *Code_23 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CommentCode_28, Var_89);
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

  ll_backend__switch_case__represent_tagged_case_for_llds_11_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv2_HeadVar__5_5, ((MR_Word) (wrapper_arg_5)), &conv1_HeadVar__7_7, ((MR_Word) (wrapper_arg_7)), &conv0_HeadVar__9_9);
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
  CommentCode_27 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[22])));
  mercury__map__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0), &CaseLabelMap0_28);
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_6[0]));
    MR_hl_field(0, Var_56, 1) = ((MR_Box) (ll_backend__string_switch__generate_string_binary_jump_switch_12_p_0_1));
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
  ll_backend__code_info__add_vector_static_cell_5_p_0((MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[19])), TableRows_35, &TableAddr_39, STATE_VARIABLE_CI_58_58, STATE_VARIABLE_CI_50);
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
  ll_backend__string_switch__generate_string_binary_switch_search_7_p_0(BinarySwitchInfo_24, VarRval_13, TableAddrRval_42, (MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[12])), TableSize_34, (MR_Integer) 2, &BinarySearchCode_43);
  MidReg_44 = ((MR_Word) ((MR_hl_field(0, BinarySwitchInfo_24, (MR_Integer) 2))));
  {
    Var_85 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_85, 0) = ((MR_Box) (MidReg_44));
  }
  {
    Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_82, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[23])));
    MR_hl_field(3, Var_82, 2) = ((MR_Box) (Var_85));
    MR_hl_field(3, Var_82, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[24])));
  }
  {
    Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_79, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[3])));
    MR_hl_field(3, Var_79, 2) = ((MR_Box) (Var_82));
    MR_hl_field(3, Var_79, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[25])));
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
  MR_Word Var_31 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[15]));
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
  Var_62 = (MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[3]));
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
    MR_hl_field(3, Var_58, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[24])));
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
    MR_hl_field(3, Var_77, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[23])));
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
    MR_hl_field(3, Var_87, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[14])));
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
  Var_103 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[25]));
  {
    Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_99, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__string_switch_scalar_common_3[3])));
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
    ll_backend__string_switch__generate_string_hash_simple_lookup_switch_14_p_0(VarRval_9, KeyValuesAL_25, OutVars_19, OutTypes_20, Liveness_21, CanFail_11, EndLabel_12, StoreMap_13, Code_15, STATE_VARIABLE_MaybeEnd_33_33, STATE_VARIABLE_MaybeEnd_31, STATE_VARIABLE_CI_34_34, STATE_VARIABLE_CI_32, CLD_22);
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
    ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_16_p_0(VarRval_9, KeySolnsAL_30, ResumeVars_27, GoalsMayModifyTrail_28, OutVars_19, OutTypes_20, Liveness_21, CanFail_11, EndLabel_12, StoreMap_13, Code_15, STATE_VARIABLE_MaybeEnd_33_33, STATE_VARIABLE_MaybeEnd_31, STATE_VARIABLE_CI_34_34, STATE_VARIABLE_CI_32, CLD_22);
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

  succeeded = ll_backend__string_switch__IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__1029__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
  MR_Word * Code_27,
  MR_Word STATE_VARIABLE_MaybeEnd_0_68,
  MR_Word * STATE_VARIABLE_MaybeEnd_69,
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
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[5]), OutVars_21, &NumOutVars_37);
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
    Var_85 = (MR_Word) (MR_mkword(2, &ll_backend__string_switch_scalar_common_3[3]));
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
    Var_100 = (MR_Word) (MR_mkword(2, &ll_backend__string_switch_scalar_common_3[3]));
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
  DummyOutRvals_47 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__string_switch_scalar_common_2[7]), OutTypes_22);
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
  ll_backend__string_switch__generate_string_hash_switch_search_13_p_0(HashSwitchInfo_31, VarRval_17, MainVectorAddrRval_60, ArrayElemType_43, NumColumns_39, HashOp_34, HashMask_36, NumCollisions_35, EndLabel_25, (MR_String) "multi soln lookup", Var_144, MatchCode_67, Code_27);
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
          ZeroRval_34 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[15]));
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
        MR_Word StringRval_89 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[15]));
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
            MR_hl_field(1, Var_80, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[27])));
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
  MR_Word * Code_23,
  MR_Word STATE_VARIABLE_MaybeEnd_0_53,
  MR_Word * STATE_VARIABLE_MaybeEnd_54,
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
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[5]), OutVars_17, &NumOutVars_33);
  mercury__list__duplicate_3_p_0((MR_Word) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0), NumOutVars_33, ((MR_Box) ((MR_Integer) 2)), &OutElemTypes_34);
  DummyOutRvals_35 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__string_switch_scalar_common_2[6]), OutTypes_18);
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
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (MR_mkword(2, &ll_backend__string_switch_scalar_common_3[3])));
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
    ll_backend__lookup_util__record_offset_assigns_6_p_0(OutVars_17, NumPrevColumns_36, BaseReg_48, *STATE_VARIABLE_CI_56, STATE_VARIABLE_CLD_80_80, &STATE_VARIABLE_CLD_90_90);
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
  ll_backend__string_switch__generate_string_hash_switch_search_13_p_0(HashSwitchInfo_27, VarRval_15, VectorAddrRval_44, ArrayElemType_40, NumColumns_37, HashOp_30, HashMask_32, NumCollisions_31, EndLabel_21, (MR_String) "single soln lookup", Var_98, MatchCode_52, Code_23);
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
        StringRval_19 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[15]));
        NextSlotRval_18 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[27]));
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
    RowElemTypes_41 = (MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[16]));
    ArrayElemTypes_42 = (MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[17]));
  }
  else
  {
    NumColumns_40 = (MR_Integer) 2;
    RowElemTypes_41 = (MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[19]));
    ArrayElemTypes_42 = (MR_Word) (MR_mkword(1, &ll_backend__string_switch_scalar_common_1[21]));
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
        MR_hl_field(3, Var_43, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[23])));
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
      MR_hl_field(3, Var_55, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[28])));
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
      MR_hl_field(3, Var_76, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[26])));
      MR_hl_field(3, Var_76, 2) = ((MR_Box) (Var_79));
      MR_hl_field(3, Var_76, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[15])));
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
      MR_hl_field(3, Var_100, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[28])));
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
      MR_hl_field(3, Var_114, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[23])));
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
      MR_hl_field(3, Var_133, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[26])));
      MR_hl_field(3, Var_133, 2) = ((MR_Box) (Var_136));
      MR_hl_field(3, Var_133, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[15])));
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
      MR_hl_field(3, Var_157, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[3])));
      MR_hl_field(3, Var_157, 2) = ((MR_Box) (Var_126));
      MR_hl_field(3, Var_157, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[25])));
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
      MR_hl_field(3, Var_168, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[14])));
      MR_hl_field(3, Var_168, 2) = ((MR_Box) (Var_117));
      MR_hl_field(3, Var_168, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[15])));
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
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[7]), Var_50, OtherTaggedConsIds_34, ((MR_Box) (STATE_VARIABLE_StrsLabels_49_49)), &conv1_STATE_VARIABLE_StrsLabels_51_51);
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

      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[6]), HashSlotMap_12, Slot_10, &conv0_SlotInfo_17);
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
        StringRval_22 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[15]));
        NextSlotRval_21 = (MR_Word) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[27]));
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
ll_backend__string_switch__generate_string_trie_lookup_switch_8_p_0(
  MR_Word VarRval_9,
  MR_Word LookupSwitchInfo_10,
  MR_Word CanFail_11,
  MR_Word EndLabel_12,
  MR_Word StoreMap_13,
  MR_Word * STATE_VARIABLE_MaybeEnd_42,
  MR_Word * Code_15,
  MR_Word * STATE_VARIABLE_CI_43)
{
  MR_Word KeyToCaseIdMap_17 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 0))));
  MR_Word CaseConsts_18 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 1))));
  MR_Word OutVars_19 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 2))));
  MR_Word OutTypes_20 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 3))));
  MR_Word Liveness_21 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 4))));
  MR_Word CLD_22 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 7))));
  MR_Word LookupInfo_23;
  MR_Word CaseNumRegLval_24;
  MR_Word InitCaseNumRegCode_25;
  MR_Word Info_26;
  MR_Word StrsCaseIds_27;
  MR_Word TrieCode_28;
  MR_Word AfterLabel_29;
  MR_Word AfterLabelCode_30;
  MR_Word SetCaseNumCode_31;
  MR_Word SetAndCheckCaseNumCode_32;
  MR_Word STATE_VARIABLE_MaybeEnd_44_44 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 5))));
  MR_Word STATE_VARIABLE_CI_45_45 = ((MR_Word) ((MR_hl_field(0, LookupSwitchInfo_10, (MR_Integer) 6))));
  MR_Word STATE_VARIABLE_CI_46_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word STATE_VARIABLE_CI_53_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word STATE_VARIABLE_CI_58_58;

  ll_backend__string_switch__init_string_trie_switch_info_lookup_5_p_0(CanFail_11, &LookupInfo_23, STATE_VARIABLE_CI_45_45, &STATE_VARIABLE_CI_46_46, CLD_22);
  CaseNumRegLval_24 = ((MR_Word) ((MR_hl_field(0, LookupInfo_23, (MR_Integer) 3))));
  {
    Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_48, 1) = ((MR_Box) (CaseNumRegLval_24));
    MR_hl_field(3, Var_48, 2) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[13])));
  }
  {
    Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_47, 0) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_47, 1) = ((MR_Box) ((MR_String) "initialize case id to invalid"));
  }
  InitCaseNumRegCode_25 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_47)));
  Info_26 = (MR_Word) (MR_mkword(1, (MR_Word) (LookupInfo_23)));
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), KeyToCaseIdMap_17, &StrsCaseIds_27);
  ll_backend__string_switch__create_nested_trie_switch_6_p_0(Info_26, VarRval_9, StrsCaseIds_27, &TrieCode_28, STATE_VARIABLE_CI_46_46, &STATE_VARIABLE_CI_53_53);
  AfterLabel_29 = ((MR_Word) ((MR_hl_field(0, LookupInfo_23, (MR_Integer) 4))));
  {
    Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_55, 1) = ((MR_Box) (AfterLabel_29));
  }
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) ((MR_String) "after the trie search"));
  }
  AfterLabelCode_30 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_54)));
  Var_57 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TrieCode_28, AfterLabelCode_30);
  SetCaseNumCode_31 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), InitCaseNumRegCode_25, Var_57);
  switch (CanFail_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word NonFailLabel_33;
        MR_Word CaseNumIsValid_34;
        MR_Word TestForFailCode_35;
        MR_Word FailCode_36;
        MR_Word NonFailLabelCode_37;
        MR_Word Var_61;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_72;
        MR_Word Var_73;

        ll_backend__code_info__get_next_label_3_p_0(&NonFailLabel_33, STATE_VARIABLE_CI_53_53, &STATE_VARIABLE_CI_58_58);
        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_61, 0) = ((MR_Box) (CaseNumRegLval_24));
        }
        {
          CaseNumIsValid_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CaseNumIsValid_34, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, CaseNumIsValid_34, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[14])));
          MR_hl_field(3, CaseNumIsValid_34, 2) = ((MR_Box) (Var_61));
          MR_hl_field(3, CaseNumIsValid_34, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[15])));
        }
        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (NonFailLabel_33));
        }
        {
          Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_66, 1) = ((MR_Box) (CaseNumIsValid_34));
          MR_hl_field(3, Var_66, 2) = ((MR_Box) (Var_67));
        }
        {
          Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(0, Var_65, 1) = ((MR_Box) ((MR_String) "branch around fail code"));
        }
        TestForFailCode_35 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_65)));
        FailCode_36 = ((MR_Word) ((MR_hl_field(0, LookupInfo_23, (MR_Integer) 7))));
        {
          Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_70, 1) = ((MR_Box) (NonFailLabel_33));
        }
        {
          Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(0, Var_69, 1) = ((MR_Box) ((MR_String) "non-fail label"));
        }
        NonFailLabelCode_37 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_69)));
        Var_73 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_36, NonFailLabelCode_37);
        Var_72 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestForFailCode_35, Var_73);
        SetAndCheckCaseNumCode_32 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetCaseNumCode_31, Var_72);
      }
      break;
    case (MR_Integer) 1:
      {
        SetAndCheckCaseNumCode_32 = SetCaseNumCode_31;
        STATE_VARIABLE_CI_58_58 = STATE_VARIABLE_CI_53_53;
      }
      break;
  }
  if (((MR_tag((MR_Word) CaseConsts_18)) == (MR_Integer) 0))
  {
    MR_Word CaseIdToValuesMap_38 = ((MR_Word) ((MR_hl_field(0, CaseConsts_18, (MR_Integer) 0))));
    MR_Word CaseIdToValuesAL_39;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), CaseIdToValuesMap_38, &CaseIdToValuesAL_39);
    ll_backend__string_switch__generate_string_trie_simple_lookup_switch_14_p_0(LookupInfo_23, CaseIdToValuesAL_39, OutVars_19, OutTypes_20, Liveness_21, EndLabel_12, StoreMap_13, SetAndCheckCaseNumCode_32, Code_15, STATE_VARIABLE_MaybeEnd_44_44, STATE_VARIABLE_MaybeEnd_42, STATE_VARIABLE_CI_58_58, STATE_VARIABLE_CI_43, CLD_22);
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.string_switch.generate_string_trie_lookup_switch\'/8", (MR_String) "some_several_solns");
      return;
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
  MR_Word STATE_VARIABLE_CLD_23_23;
  MR_Word STATE_VARIABLE_CLD_25_25;
  MR_Word STATE_VARIABLE_CLD_26_26;
  MR_Word STATE_VARIABLE_CLD_27_27;
  MR_Word STATE_VARIABLE_CI_28_28;
  MR_Word Var_29;
  MR_Word Var_30;

  Encoding_10 = backend_libs__string_encoding__target_string_encoding_1_f_0((MR_Integer) 0);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &CodeUnitReg_11, STATE_VARIABLE_CLD_0_20, &STATE_VARIABLE_CLD_23_23);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &CaseIdReg_12, STATE_VARIABLE_CLD_23_23, &STATE_VARIABLE_CLD_25_25);
  ll_backend__code_loc_dep__release_reg_3_p_0(CodeUnitReg_11, STATE_VARIABLE_CLD_25_25, &STATE_VARIABLE_CLD_26_26);
  ll_backend__code_loc_dep__release_reg_3_p_0(CaseIdReg_12, STATE_VARIABLE_CLD_26_26, &STATE_VARIABLE_CLD_27_27);
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_27_27, &BranchStart_13);
  ll_backend__code_info__get_next_label_3_p_0(&AfterLabel_14, STATE_VARIABLE_CI_0_18, &STATE_VARIABLE_CI_28_28);
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
      ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_17, STATE_VARIABLE_CI_28_28, STATE_VARIABLE_CI_19, STATE_VARIABLE_CLD_27_27);
      break;
    case (MR_Integer) 1:
      {
        FailCode_17 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_CI_19 = STATE_VARIABLE_CI_28_28;
      }
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

static void MR_CALL 
ll_backend__string_switch__generate_string_trie_simple_lookup_switch_14_p_0(
  MR_Word LookupInfo_15,
  MR_Word CaseValues_16,
  MR_Word OutVars_17,
  MR_Word OutTypes_18,
  MR_Word Liveness_19,
  MR_Word EndLabel_20,
  MR_Word StoreMap_21,
  MR_Word SetAndCheckCaseNumCode_22,
  MR_Word * Code_23,
  MR_Word STATE_VARIABLE_MaybeEnd_0_42,
  MR_Word * STATE_VARIABLE_MaybeEnd_43,
  MR_Word STATE_VARIABLE_CI_0_44,
  MR_Word * STATE_VARIABLE_CI_45,
  MR_Word STATE_VARIABLE_CLD_0_46)
{
  MR_Word SetBaseRegCode_27;
  MR_Word BranchEndCode_39;
  MR_Word EndLabelCode_40;
  MR_Word MatchCode_41;
  MR_Word STATE_VARIABLE_CLD_68_68;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_73;

  if ((OutVars_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    SetBaseRegCode_27 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CI_45 = STATE_VARIABLE_CI_0_44;
    STATE_VARIABLE_CLD_68_68 = STATE_VARIABLE_CLD_0_46;
  }
  else
  {
    MR_Word VectorRvalsCord_31;
    MR_Word VectorRvals_32;
    MR_Word VectorAddr_33;
    MR_Word VectorAddrRval_34;
    MR_Word BaseRegLval_35;
    MR_Word CaseIdRegLval_36;
    MR_Integer NumColumns_37;
    MR_Word Var_48;
    MR_Word Var_50;
    MR_Word STATE_VARIABLE_CLD_53_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_61;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;

    Var_48 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]));
    ll_backend__string_switch__construct_string_trie_simple_lookup_vector_4_p_0(CaseValues_16, (MR_Integer) 0, Var_48, &VectorRvalsCord_31);
    VectorRvals_32 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), VectorRvalsCord_31);
    ll_backend__code_info__add_vector_static_cell_5_p_0(OutTypes_18, VectorRvals_32, &VectorAddr_33, STATE_VARIABLE_CI_0_44, STATE_VARIABLE_CI_45);
    {
      Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(3, Var_50, 1) = ((MR_Box) (VectorAddr_33));
      MR_hl_field(3, Var_50, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      VectorAddrRval_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, VectorAddrRval_34, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, VectorAddrRval_34, 1) = ((MR_Box) (Var_50));
    }
    ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(StoreMap_21, (MR_Integer) 0, &BaseRegLval_35, STATE_VARIABLE_CLD_0_46, &STATE_VARIABLE_CLD_53_53);
    CaseIdRegLval_36 = ((MR_Word) ((MR_hl_field(0, LookupInfo_15, (MR_Integer) 3))));
    mercury__list__length_2_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[5]), OutVars_17, &NumColumns_37);
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_64, 0) = ((MR_Box) (CaseIdRegLval_36));
    }
    {
      Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_66, 0) = ((MR_Box) (NumColumns_37));
    }
    {
      Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_65, 1) = ((MR_Box) (Var_66));
    }
    {
      Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_61, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[23])));
      MR_hl_field(3, Var_61, 2) = ((MR_Box) (Var_64));
      MR_hl_field(3, Var_61, 3) = ((MR_Box) (Var_65));
    }
    {
      Var_57 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_57, 0) = ((MR_Box) (VectorAddrRval_34));
      MR_hl_field(2, Var_57, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__string_switch_scalar_common_3[7])));
      MR_hl_field(2, Var_57, 2) = ((MR_Box) (Var_61));
    }
    {
      Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_56, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_55, 1) = ((MR_Box) (BaseRegLval_35));
      MR_hl_field(3, Var_55, 2) = ((MR_Box) (Var_56));
    }
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(0, Var_54, 1) = ((MR_Box) ((MR_String) "set up base reg"));
    }
    SetBaseRegCode_27 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_54)));
    ll_backend__lookup_util__record_offset_assigns_6_p_0(OutVars_17, (MR_Integer) 0, BaseRegLval_35, *STATE_VARIABLE_CI_45, STATE_VARIABLE_CLD_53_53, &STATE_VARIABLE_CLD_68_68);
  }
  ll_backend__lookup_util__set_liveness_and_end_branch_6_p_0(StoreMap_21, Liveness_19, STATE_VARIABLE_MaybeEnd_0_42, STATE_VARIABLE_MaybeEnd_43, &BranchEndCode_39, STATE_VARIABLE_CLD_68_68);
  {
    Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_71, 1) = ((MR_Box) (EndLabel_20));
  }
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (Var_71));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) ((MR_String) "end of simple trie string lookup switch"));
  }
  EndLabelCode_40 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_70)));
  Var_73 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BranchEndCode_39, EndLabelCode_40);
  MatchCode_41 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetBaseRegCode_27, Var_73);
  *Code_23 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetAndCheckCaseNumCode_22, MatchCode_41);
}

static MR_bool MR_CALL 
ll_backend__string_switch__construct_string_trie_simple_lookup_vector_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__string_switch__IntroducedFrom__pred__construct_string_trie_simple_lookup_vector__585__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__string_switch__construct_string_trie_simple_lookup_vector_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer RowNum_2,
  MR_Word STATE_VARIABLE_RowsCord_0_3,
  MR_Word * STATE_VARIABLE_RowsCord_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RowsCord_4 = STATE_VARIABLE_RowsCord_0_3;
    else
    {
      MR_Word CaseValues_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word CasesValues_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word CaseId_13 = ((MR_Word) ((MR_hl_field(0, CaseValues_9, (MR_Integer) 0))));
      MR_Integer CaseIdNum_15 = (MR_Integer) (CaseId_13);
      MR_Word Row_16 = ((MR_Word) ((MR_hl_field(0, CaseValues_9, (MR_Integer) 1))));
      MR_Word Var_19;
      MR_Word STATE_VARIABLE_RowsCord_22_22;
      MR_Integer Var_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_RowNum_2;
      MR_Word next_value_of_STATE_VARIABLE_RowsCord_0_3;

      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_19, 0) = ((MR_Box) (&ll_backend__string_switch_scalar_common_4[0]));
        MR_hl_field(0, Var_19, 1) = ((MR_Box) (ll_backend__string_switch__construct_string_trie_simple_lookup_vector_4_p_0_1));
        MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_19, 3) = ((MR_Box) (RowNum_2));
        MR_hl_field(0, Var_19, 4) = ((MR_Box) (CaseIdNum_15));
      }
      mercury__require__expect_3_p_0(Var_19, (MR_String) "predicate \140ll_backend.string_switch.construct_string_trie_simple_lookup_vector\'/4", (MR_String) "RowNum != CaseIdNum");
      mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__string_switch_scalar_common_1[0]), ((MR_Box) (Row_16)), STATE_VARIABLE_RowsCord_0_3, &STATE_VARIABLE_RowsCord_22_22);
      Var_23 = (MR_Integer) ((MR_Unsigned) RowNum_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = CasesValues_10;
      next_value_of_RowNum_2 = Var_23;
      next_value_of_STATE_VARIABLE_RowsCord_0_3 = STATE_VARIABLE_RowsCord_22_22;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      RowNum_2 = next_value_of_RowNum_2;
      STATE_VARIABLE_RowsCord_0_3 = next_value_of_STATE_VARIABLE_RowsCord_0_3;
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
  MR_Word CommentCode_27;
  MR_Word CaseIdToLabelMap0_28;
  MR_Word CaseLabelMap0_29;
  MR_Word CaseIdToLabelMap_30;
  MR_Word CaseLabelMap_31;
  MR_Word JumpInfo_32;
  MR_Word Info_33;
  MR_Word StrsCaseIds_35;
  MR_Word TrieCode_36;
  MR_Word CasesCode_37;
  MR_Word FailLabel_39;
  MR_Word FailLabelCode_40;
  MR_Word FailCode_41;
  MR_Word EndLabelCode_42;
  MR_Word STATE_VARIABLE_CI_45_45;
  MR_Word STATE_VARIABLE_CI_51_51;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_69;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Integer _MaxCaseNum_34;
  MR_Word Var_38;

  ll_backend__string_switch__init_string_trie_switch_info_jump_5_p_0(CanFail_17, &JumpInfo0_24, STATE_VARIABLE_CI_0_43, &STATE_VARIABLE_CI_45_45, CLD_23);
  BranchStart_25 = ((MR_Word) ((MR_hl_field(0, JumpInfo0_24, (MR_Integer) 2))));
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
  ll_backend__string_switch__represent_tagged_cases_in_string_trie_switch_10_p_0(Params_26, TaggedCases_15, CaseIdToLabelMap0_28, &CaseIdToLabelMap_30, CaseLabelMap0_29, &CaseLabelMap_31, (MR_Word) ((MR_Unsigned) 0U), MaybeEnd_20, STATE_VARIABLE_CI_45_45, &STATE_VARIABLE_CI_51_51);
  Var_69 = ((MR_Unsigned) ((MR_hl_field(0, JumpInfo0_24, (MR_Integer) 0))) & (MR_Integer) 1);
  Var_71 = ((MR_Word) ((MR_hl_field(0, JumpInfo0_24, (MR_Integer) 2))));
  Var_72 = ((MR_Word) ((MR_hl_field(0, JumpInfo0_24, (MR_Integer) 3))));
  Var_73 = ((MR_Word) ((MR_hl_field(0, JumpInfo0_24, (MR_Integer) 4))));
  Var_74 = ((MR_Word) ((MR_hl_field(0, JumpInfo0_24, (MR_Integer) 5))));
  Var_75 = ((MR_Word) ((MR_hl_field(0, JumpInfo0_24, (MR_Integer) 6))));
  {
    JumpInfo_32 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, JumpInfo_32, 0) = (MR_Box) ((MR_Unsigned) (Var_69));
    MR_hl_field(0, JumpInfo_32, 1) = ((MR_Box) (CaseIdToLabelMap_30));
    MR_hl_field(0, JumpInfo_32, 2) = ((MR_Box) (Var_71));
    MR_hl_field(0, JumpInfo_32, 3) = ((MR_Box) (Var_72));
    MR_hl_field(0, JumpInfo_32, 4) = ((MR_Box) (Var_73));
    MR_hl_field(0, JumpInfo_32, 5) = ((MR_Box) (Var_74));
    MR_hl_field(0, JumpInfo_32, 6) = ((MR_Box) (Var_75));
  }
  Info_33 = (MR_Word) ((MR_Word) (JumpInfo_32));
  backend_libs__string_switch_util__build_str_case_id_list_3_p_0(TaggedCases_15, &_MaxCaseNum_34, &StrsCaseIds_35);
  ll_backend__string_switch__create_nested_trie_switch_6_p_0(Info_33, VarRval_13, StrsCaseIds_35, &TrieCode_36, STATE_VARIABLE_CI_51_51, STATE_VARIABLE_CI_44);
  ll_backend__switch_case__add_not_yet_included_cases_3_p_0(&CasesCode_37, CaseLabelMap_31, &Var_38);
  FailLabel_39 = ((MR_Word) ((MR_hl_field(0, JumpInfo_32, (MR_Integer) 4))));
  {
    Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_54, 1) = ((MR_Box) (FailLabel_39));
  }
  {
    Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_53, 0) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_53, 1) = ((MR_Box) ((MR_String) "fail label"));
  }
  FailLabelCode_40 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_53)));
  FailCode_41 = ((MR_Word) ((MR_hl_field(0, JumpInfo_32, (MR_Integer) 5))));
  {
    Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_57, 1) = ((MR_Box) (EndLabel_19));
  }
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_56, 1) = ((MR_Box) ((MR_String) "end of string trie string"));
  }
  EndLabelCode_42 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_56)));
  Var_62 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_41, EndLabelCode_42);
  Var_61 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailLabelCode_40, Var_62);
  Var_60 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CasesCode_37, Var_61);
  Var_59 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TrieCode_36, Var_60);
  *Code_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CommentCode_27, Var_59);
}

static void MR_CALL 
ll_backend__string_switch__init_string_trie_switch_info_jump_5_p_0(
  MR_Word CanFail_6,
  MR_Word * Info_7,
  MR_Word STATE_VARIABLE_CI_0_17,
  MR_Word * STATE_VARIABLE_CI_18,
  MR_Word STATE_VARIABLE_CLD_0_19)
{
  MR_Word Encoding_10;
  MR_Word CodeUnitReg_11;
  MR_Word BranchStart_12;
  MR_Word FailLabel_13;
  MR_Word FailCode_14;
  MR_Word GotoFailCode_15;
  MR_Word CaseIdToLabelMap0_16;
  MR_Word STATE_VARIABLE_CLD_22_22;
  MR_Word STATE_VARIABLE_CLD_23_23;
  MR_Word STATE_VARIABLE_CI_24_24;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;

  Encoding_10 = backend_libs__string_encoding__target_string_encoding_1_f_0((MR_Integer) 0);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &CodeUnitReg_11, STATE_VARIABLE_CLD_0_19, &STATE_VARIABLE_CLD_22_22);
  ll_backend__code_loc_dep__release_reg_3_p_0(CodeUnitReg_11, STATE_VARIABLE_CLD_22_22, &STATE_VARIABLE_CLD_23_23);
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_23_23, &BranchStart_12);
  ll_backend__code_info__get_next_label_3_p_0(&FailLabel_13, STATE_VARIABLE_CI_0_17, &STATE_VARIABLE_CI_24_24);
  switch (CanFail_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_14, STATE_VARIABLE_CI_24_24, STATE_VARIABLE_CI_18, STATE_VARIABLE_CLD_23_23);
      break;
    case (MR_Integer) 1:
      {
        FailCode_14 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__string_switch_scalar_common_1[34])));
        *STATE_VARIABLE_CI_18 = STATE_VARIABLE_CI_24_24;
      }
      break;
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (FailLabel_13));
  }
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (Var_28));
  }
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) ((MR_String) "no match; goto fail"));
  }
  GotoFailCode_15 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_26)));
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), &CaseIdToLabelMap0_16);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *Info_7 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (Encoding_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (CaseIdToLabelMap0_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (BranchStart_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (CodeUnitReg_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (FailLabel_13));
    MR_hl_field(0, base, 5) = ((MR_Box) (FailCode_14));
    MR_hl_field(0, base, 6) = ((MR_Box) (GotoFailCode_15));
  }
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

    Encoding_12 = ((MR_Unsigned) ((MR_hl_field(0, JumpInfo_29, (MR_Integer) 0))) & (MR_Integer) 1);
  }
  else
  {
    MR_Word LookupInfo_30 = (MR_Word) (MR_body((MR_Word) (Info_7), (MR_Integer) 1));

    Encoding_12 = ((MR_Unsigned) ((MR_hl_field(0, LookupInfo_30, (MR_Integer) 0))) & (MR_Integer) 1);
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
    Var_23 = ((MR_Word) ((MR_hl_field(0, HeadTrieCodeInstr_16, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) Var_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_23, (MR_Integer) 0)))) == (MR_Integer) 5)));
    if (succeeded)
    {
      Var_27 = ((MR_Word) ((MR_hl_field(3, Var_23, (MR_Integer) 1))));
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
      MR_Word Choice_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Choices_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Integer CodeUnit_37 = ((MR_Integer) ((MR_hl_field(0, Choice_31, (MR_Integer) 0))));
      MR_Word TrieNode_38 = ((MR_Word) ((MR_hl_field(0, Choice_31, (MR_Integer) 1))));
      MR_Word TrieNodeLabel_39;
      MR_Word TrieNodeCode_40;
      MR_Word CodeUnitToAction_41;
      MR_Word STATE_VARIABLE_CI_50_50;
      MR_Word Var_51;
      MR_Word STATE_VARIABLE_CodeUnitToActionsCord_52_52;
      MR_Integer STATE_VARIABLE_NumActions_53_53;
      MR_Word STATE_VARIABLE_NestedTrieCode_55_55;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_CodeUnitToActionsCord_0_5;
      MR_Integer next_value_of_STATE_VARIABLE_NumActions_0_7;
      MR_Word next_value_of_STATE_VARIABLE_NestedTrieCode_0_9;
      MR_Word next_value_of_STATE_VARIABLE_CI_0_11;

      ll_backend__string_switch__convert_trie_to_nested_switches_8_p_0(Info_1, VarRval_2, NumMatched_3, TrieNode_38, &TrieNodeLabel_39, &TrieNodeCode_40, STATE_VARIABLE_CI_0_11, &STATE_VARIABLE_CI_50_50);
      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_51, 0) = ((MR_Box) (TrieNodeLabel_39));
      }
      {
        CodeUnitToAction_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CodeUnitToAction_41, 0) = ((MR_Box) (CodeUnit_37));
        MR_hl_field(0, CodeUnitToAction_41, 1) = ((MR_Box) (Var_51));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_code_unit_to_action_0), ((MR_Box) (CodeUnitToAction_41)), STATE_VARIABLE_CodeUnitToActionsCord_0_5, &STATE_VARIABLE_CodeUnitToActionsCord_52_52);
      STATE_VARIABLE_NumActions_53_53 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumActions_0_7 + (MR_Unsigned) 1);
      STATE_VARIABLE_NestedTrieCode_55_55 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_NestedTrieCode_0_9, TrieNodeCode_40);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Choices_32;
      next_value_of_STATE_VARIABLE_CodeUnitToActionsCord_0_5 = STATE_VARIABLE_CodeUnitToActionsCord_52_52;
      next_value_of_STATE_VARIABLE_NumActions_0_7 = STATE_VARIABLE_NumActions_53_53;
      next_value_of_STATE_VARIABLE_NestedTrieCode_0_9 = STATE_VARIABLE_NestedTrieCode_55_55;
      next_value_of_STATE_VARIABLE_CI_0_11 = STATE_VARIABLE_CI_50_50;
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

  succeeded = ll_backend__string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__232__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__string_switch__convert_trie_to_nested_switches_8_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__string_switch__IntroducedFrom__pred__convert_trie_to_nested_switches__250__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
  MR_Word STATE_VARIABLE_CI_65_65;

  ll_backend__code_info__get_next_label_3_p_0(TrieNodeLabel_13, STATE_VARIABLE_CI_0_63, &STATE_VARIABLE_CI_65_65);
  if (((MR_tag((MR_Word) TrieNode_12)) == (MR_Integer) 1))
  {
    MR_Word MaybeEnd_30 = ((MR_Word) ((MR_hl_field(1, TrieNode_12, (MR_Integer) 2))));
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
    MR_Word RevMatchedCodeUnits_127 = ((MR_Word) ((MR_hl_field(1, TrieNode_12, (MR_Integer) 0))));
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
      MR_Word STATE_VARIABLE_CI_111_111;
      MR_Word Var_120;
      MR_Word Var_121;
      MR_Word TestCode_124;

      Var_108 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_code_unit_to_action_0));
      Var_110 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      ll_backend__string_switch__convert_trie_choices_to_nested_switches_12_p_0(Info_9, VarRval_10, Var_107, ChoicePairs_37, Var_108, &NestedTrieInfosCord_55, (MR_Integer) 0, &NumActions0_56, Var_110, &NestedTrieCode_57, STATE_VARIABLE_CI_65_65, &STATE_VARIABLE_CI_111_111);
      NestedTrieInfos0_58 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_code_unit_to_action_0), NestedTrieInfosCord_55);
      if ((MaybeEnd_30 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        NestedTrieInfos_59 = NestedTrieInfos0_58;
        NumActions_60 = NumActions0_56;
      }
      else
      {
        MR_Word EndCaseId_61 = ((MR_Word) ((MR_hl_field(1, MaybeEnd_30, (MR_Integer) 0))));
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
        ll_backend__string_switch__generate_nested_trie_try_chain_7_p_0(Info_9, CodeUnitRval_36, NestedTrieInfos_59, Var_117, &TestCode_124, STATE_VARIABLE_CI_111_111, STATE_VARIABLE_CI_64);
      }
      else
        ll_backend__string_switch__generate_nested_trie_binary_search_7_p_0(Info_9, CodeUnitRval_36, NumActions_60, NestedTrieInfos_59, &TestCode_124, STATE_VARIABLE_CI_111_111, STATE_VARIABLE_CI_64);
      Var_121 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCode_124, NestedTrieCode_57);
      Var_120 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetCodeUnitCode_35, Var_121);
      *Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_34, Var_120);
    }
    else
    {
      MR_Word Var_200 = ((MR_Word) ((MR_hl_field(1, StickCodeUnits_38, (MR_Integer) 1))));

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
        MR_Word STATE_VARIABLE_CI_111_166;
        MR_Word Var_173;
        MR_Word Var_174;
        MR_Word TestCode_175;

        Var_163 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_code_unit_to_action_0));
        Var_165 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        ll_backend__string_switch__convert_trie_choices_to_nested_switches_12_p_0(Info_9, VarRval_10, Var_162, ChoicePairs_37, Var_163, &NestedTrieInfosCord_154, (MR_Integer) 0, &NumActions0_155, Var_165, &NestedTrieCode_156, STATE_VARIABLE_CI_65_65, &STATE_VARIABLE_CI_111_166);
        NestedTrieInfos0_157 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_code_unit_to_action_0), NestedTrieInfosCord_154);
        if ((MaybeEnd_30 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          NestedTrieInfos_158 = NestedTrieInfos0_157;
          NumActions_159 = NumActions0_155;
        }
        else
        {
          MR_Word EndCaseId_140 = ((MR_Word) ((MR_hl_field(1, MaybeEnd_30, (MR_Integer) 0))));
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
          ll_backend__string_switch__generate_nested_trie_try_chain_7_p_0(Info_9, CodeUnitRval_36, NestedTrieInfos_158, Var_151, &TestCode_175, STATE_VARIABLE_CI_111_166, STATE_VARIABLE_CI_64);
        }
        else
          ll_backend__string_switch__generate_nested_trie_binary_search_7_p_0(Info_9, CodeUnitRval_36, NumActions_159, NestedTrieInfos_158, &TestCode_175, STATE_VARIABLE_CI_111_166, STATE_VARIABLE_CI_64);
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
          MR_hl_field(3, CmpOp_44, 0) = ((MR_Box) ((MR_Unsigned) 11U));
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
        ll_backend__string_switch__convert_trie_to_nested_switches_8_p_0(Info_9, VarRval_10, Var_101, TrieNodeAfterStick_39, &TrieNodeLabelAfterStick_49, &CodeAfterStick_50, STATE_VARIABLE_CI_65_65, STATE_VARIABLE_CI_64);
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
    MR_Word RevMatchedCodeUnits_16 = ((MR_Word) ((MR_hl_field(0, TrieNode_12, (MR_Integer) 0))));
    MR_Word NotYetMatchedCodeUnits_17 = ((MR_Word) ((MR_hl_field(0, TrieNode_12, (MR_Integer) 1))));
    MR_Word CaseId_18 = ((MR_Word) ((MR_hl_field(0, TrieNode_12, (MR_Integer) 2))));
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
      MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 11U));
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
    ll_backend__string_switch__generate_trie_case_or_fall_through_6_p_0(Info_9, CondRval_25, CaseId_18, &CaseRepCode_26, STATE_VARIABLE_CI_65_65, STATE_VARIABLE_CI_64);
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

    *CodeUnitReg_4 = ((MR_Word) ((MR_hl_field(0, JumpInfo_5, (MR_Integer) 3))));
  }
  else
  {
    MR_Word LookupInfo_6 = (MR_Word) (MR_body((MR_Word) (Info_3), (MR_Integer) 1));

    *CodeUnitReg_4 = ((MR_Word) ((MR_hl_field(0, LookupInfo_6, (MR_Integer) 2))));
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

    *Encoding_4 = ((MR_Unsigned) ((MR_hl_field(0, JumpInfo_5, (MR_Integer) 0))) & (MR_Integer) 1);
  }
  else
  {
    MR_Word LookupInfo_6 = (MR_Word) (MR_body((MR_Word) (Info_3), (MR_Integer) 1));

    *Encoding_4 = ((MR_Unsigned) ((MR_hl_field(0, LookupInfo_6, (MR_Integer) 0))) & (MR_Integer) 1);
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

    *GotoFailCode_4 = ((MR_Word) ((MR_hl_field(0, JumpInfo_5, (MR_Integer) 6))));
  }
  else
  {
    MR_Word LookupInfo_6 = (MR_Word) (MR_body((MR_Word) (Info_3), (MR_Integer) 1));
    MR_Word AfterCodeAddr_7 = ((MR_Word) ((MR_hl_field(0, LookupInfo_6, (MR_Integer) 5))));
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
    MR_Word STATE_VARIABLE_CI_34_34;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word STATE_VARIABLE_CI_42_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Box conv0_HeadCodeUnitToActions_18;

    NumActionsR_14 = mercury__int__f_slash_2_f_0(NumActions_10, (MR_Integer) 2);
    NumActionsL_15 = (MR_Integer) ((MR_Unsigned) NumActions_10 - (MR_Unsigned) NumActionsR_14);
    mercury__list__det_split_list_4_p_0((MR_Word) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_code_unit_to_action_0), NumActionsL_15, CodeUnitToActions_11, &CodeUnitToActionsL_16, &CodeUnitToActionsR_17);
    mercury__list__det_head_2_p_0((MR_Word) (&ll_backend__string_switch__ll_backend__string_switch__type_ctor_info_code_unit_to_action_0), CodeUnitToActionsR_17, &conv0_HeadCodeUnitToActions_18);
    HeadCodeUnitToActions_18 = ((MR_Word) (conv0_HeadCodeUnitToActions_18));
    LeastCodeUnitR_19 = ((MR_Integer) ((MR_hl_field(0, HeadCodeUnitToActions_18, (MR_Integer) 0))));
    ll_backend__code_info__get_next_label_3_p_0(&LabelR_21, STATE_VARIABLE_CI_0_28, &STATE_VARIABLE_CI_34_34);
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (LeastCodeUnitR_19));
    }
    {
      Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_37, 1) = ((MR_Box) (Var_38));
    }
    {
      TestRvalLR_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, TestRvalLR_22, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, TestRvalLR_22, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[14])));
      MR_hl_field(3, TestRvalLR_22, 2) = ((MR_Box) (CodeUnitRval_9));
      MR_hl_field(3, TestRvalLR_22, 3) = ((MR_Box) (Var_37));
    }
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (LabelR_21));
    }
    {
      Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_40, 1) = ((MR_Box) (TestRvalLR_22));
      MR_hl_field(3, Var_40, 2) = ((MR_Box) (Var_41));
    }
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(0, Var_39, 1) = ((MR_Box) ((MR_String) "binary search on code unit"));
    }
    TestCodeLR_24 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_39)));
    ll_backend__string_switch__generate_nested_trie_binary_search_7_p_0(Info_8, CodeUnitRval_9, NumActionsL_15, CodeUnitToActionsL_16, &TestCodeL_25, STATE_VARIABLE_CI_34_34, &STATE_VARIABLE_CI_42_42);
    {
      Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_44, 1) = ((MR_Box) (LabelR_21));
    }
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(0, Var_43, 1) = ((MR_Box) ((MR_String) ""));
    }
    LabelCodeR_26 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_43)));
    ll_backend__string_switch__generate_nested_trie_binary_search_7_p_0(Info_8, CodeUnitRval_9, NumActionsR_14, CodeUnitToActionsR_17, &TestCodeR_27, STATE_VARIABLE_CI_42_42, STATE_VARIABLE_CI_29);
    Var_48 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCodeR_26, TestCodeR_27);
    Var_47 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCodeL_25, Var_48);
    *TestCode_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCodeLR_24, Var_47);
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
        MR_Word JumpInfo_47 = (MR_Word) ((MR_Word) (Info_1));

        GotoFailCode_12 = ((MR_Word) ((MR_hl_field(0, JumpInfo_47, (MR_Integer) 6))));
      }
      else
      {
        MR_Word LookupInfo_48 = (MR_Word) (MR_body((MR_Word) (Info_1), (MR_Integer) 1));
        MR_Word AfterCodeAddr_49 = ((MR_Word) ((MR_hl_field(0, LookupInfo_48, (MR_Integer) 5))));
        MR_Word Var_50;
        MR_Word Var_51;

        {
          Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_51, 1) = ((MR_Box) (AfterCodeAddr_49));
        }
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_50, 0) = ((MR_Box) (Var_51));
          MR_hl_field(0, Var_50, 1) = ((MR_Box) ((MR_String) "no match; goto after with no case id set"));
        }
        GotoFailCode_12 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_50)));
      }
      *STATE_VARIABLE_TryChainCode_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_TryChainCode_0_4, GotoFailCode_12);
      *STATE_VARIABLE_CI_7 = STATE_VARIABLE_CI_0_6;
    }
    else
    {
      MR_Word CodeUnitToAction_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word CodeUnitToActions_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer CodeUnit_24 = ((MR_Integer) ((MR_hl_field(0, CodeUnitToAction_20, (MR_Integer) 0))));
      MR_Word Action_25 = ((MR_Word) ((MR_hl_field(0, CodeUnitToAction_20, (MR_Integer) 1))));
      MR_Word CondRval_26;
      MR_Word TestCodeUnitCode_28;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word STATE_VARIABLE_CI_42_42;
      MR_Word STATE_VARIABLE_TryChainCode_43_43;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_TryChainCode_0_4;
      MR_Word next_value_of_STATE_VARIABLE_CI_0_6;

      {
        Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_37, 0) = ((MR_Box) (CodeUnit_24));
      }
      {
        Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_36, 1) = ((MR_Box) (Var_37));
      }
      {
        CondRval_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, CondRval_26, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, CondRval_26, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__string_switch_scalar_common_1[26])));
        MR_hl_field(3, CondRval_26, 2) = ((MR_Box) (CodeUnitRval_2));
        MR_hl_field(3, CondRval_26, 3) = ((MR_Box) (Var_36));
      }
      if (((MR_tag((MR_Word) Action_25)) == (MR_Integer) 1))
      {
        MR_Word CaseId_29 = ((MR_Word) ((MR_hl_field(1, Action_25, (MR_Integer) 0))));

        ll_backend__string_switch__generate_trie_case_or_fall_through_6_p_0(Info_1, CondRval_26, CaseId_29, &TestCodeUnitCode_28, STATE_VARIABLE_CI_0_6, &STATE_VARIABLE_CI_42_42);
      }
      else
      {
        MR_Word NestedTrieNodeLabel_27 = ((MR_Word) ((MR_hl_field(0, Action_25, (MR_Integer) 0))));
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_40;

        {
          Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_40, 0) = ((MR_Box) (NestedTrieNodeLabel_27));
        }
        {
          Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_39, 1) = ((MR_Box) (CondRval_26));
          MR_hl_field(3, Var_39, 2) = ((MR_Box) (Var_40));
        }
        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_38, 0) = ((MR_Box) (Var_39));
          MR_hl_field(0, Var_38, 1) = ((MR_Box) ((MR_String) ""));
        }
        TestCodeUnitCode_28 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_38)));
        STATE_VARIABLE_CI_42_42 = STATE_VARIABLE_CI_0_6;
      }
      STATE_VARIABLE_TryChainCode_43_43 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_TryChainCode_0_4, TestCodeUnitCode_28);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = CodeUnitToActions_21;
      next_value_of_STATE_VARIABLE_TryChainCode_0_4 = STATE_VARIABLE_TryChainCode_43_43;
      next_value_of_STATE_VARIABLE_CI_0_6 = STATE_VARIABLE_CI_42_42;
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
    MR_Word CaseIdToLabelMap_14 = ((MR_Word) ((MR_hl_field(0, JumpInfo_12, (MR_Integer) 1))));
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
    CaseIdRegLval_24 = ((MR_Word) ((MR_hl_field(0, LookupInfo_22, (MR_Integer) 3))));
    AfterCodeAddr_25 = ((MR_Word) ((MR_hl_field(0, LookupInfo_22, (MR_Integer) 5))));
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
