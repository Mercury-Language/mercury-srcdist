/*
** Automatically generated from `string_switch_util.m'
** by the Mercury compiler,
** version rotd-2025-06-24
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


// :- module backend_libs.string_switch_util.
// :- implementation.

/*
INIT mercury__backend_libs__string_switch_util__init
ENDINIT
*/

#include "backend_libs.string_switch_util.mih"


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
#include "deconstruct.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
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
#include "backend_libs.string_encoding.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.instmap.mih"
#include "hlds.status.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__string_switch_util__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__string_switch_util__pair__ti_pair_2builtin__type_ctor_info_string_0hlds__hlds_goal__type_ctor_info_case_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__string_switch_util__cord__pti_cord_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0hlds__hlds_goal__type_ctor_info_case_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__string_switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__string_switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1;

static const MR_PseudoTypeInfo backend_libs__string_switch_util__backend_libs__string_switch_util__field_types_string_hash_slot_1_0[3];

static const MR_DuFunctorDesc backend_libs__string_switch_util__backend_libs__string_switch_util__du_functor_desc_string_hash_slot_1_0;

static const MR_DuFunctorDescPtr backend_libs__string_switch_util__backend_libs__string_switch_util__du_stag_ordered_string_hash_slot_1_0[1];

static const MR_DuPtagLayout backend_libs__string_switch_util__backend_libs__string_switch_util__du_ptag_ordered_string_hash_slot_1[1];

static const MR_DuFunctorDescPtr backend_libs__string_switch_util__backend_libs__string_switch_util__du_name_ordered_string_hash_slot_1[1];

static const MR_Integer backend_libs__string_switch_util__backend_libs__string_switch_util__functor_number_map_string_hash_slot_1[1];

static const MR_EnumFunctorDesc backend_libs__string_switch_util__backend_libs__string_switch_util__enum_functor_desc_table_size_upgrade_0_0;

static const MR_EnumFunctorDesc backend_libs__string_switch_util__backend_libs__string_switch_util__enum_functor_desc_table_size_upgrade_0_1;

static const MR_EnumFunctorDescPtr backend_libs__string_switch_util__backend_libs__string_switch_util__enum_ordinal_ordered_table_size_upgrade_0[2];

static const MR_EnumFunctorDescPtr backend_libs__string_switch_util__backend_libs__string_switch_util__enum_name_ordered_table_size_upgrade_0[2];

static const MR_Integer backend_libs__string_switch_util__backend_libs__string_switch_util__functor_number_map_table_size_upgrade_0[2];

static const MR_FA_TypeInfo_Struct1 backend_libs__string_switch_util__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo backend_libs__string_switch_util__backend_libs__string_switch_util__field_types_trie_node_0_0[3];

static const MR_ConstString backend_libs__string_switch_util__backend_libs__string_switch_util__field_names_trie_node_0_0[3];

static const MR_DuFunctorDesc backend_libs__string_switch_util__backend_libs__string_switch_util__du_functor_desc_trie_node_0_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__string_switch_util__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__string_switch_util__type_ctor_info_trie_node_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__string_switch_util__maybe__ti_maybe_1hlds__hlds_goal__type_ctor_info_case_id_0;

static const MR_PseudoTypeInfo backend_libs__string_switch_util__backend_libs__string_switch_util__field_types_trie_node_0_1[3];

static const MR_ConstString backend_libs__string_switch_util__backend_libs__string_switch_util__field_names_trie_node_0_1[3];

static const MR_DuFunctorDesc backend_libs__string_switch_util__backend_libs__string_switch_util__du_functor_desc_trie_node_0_1;

static const MR_DuFunctorDescPtr backend_libs__string_switch_util__backend_libs__string_switch_util__du_stag_ordered_trie_node_0_0[1];

static const MR_DuFunctorDescPtr backend_libs__string_switch_util__backend_libs__string_switch_util__du_stag_ordered_trie_node_0_1[1];

static const MR_DuPtagLayout backend_libs__string_switch_util__backend_libs__string_switch_util__du_ptag_ordered_trie_node_0[2];

static const MR_DuFunctorDescPtr backend_libs__string_switch_util__backend_libs__string_switch_util__du_name_ordered_trie_node_0[2];

static const MR_Integer backend_libs__string_switch_util__backend_libs__string_switch_util__functor_number_map_trie_node_0[2];

static MR_bool MR_CALL 
backend_libs__string_switch_util__IntroducedFrom__pred__insert_case_into_trie_node__204__1_2_p_0(
  MR_Word InsertMatched_6,
  MR_Word LeafMatched_11);

static MR_bool MR_CALL 
backend_libs__string_switch_util__IntroducedFrom__pred__insert_case_into_trie_node__218__1_2_p_0(
  MR_Word InsertMatched_6,
  MR_Word ChoiceMatched_19);

static void MR_CALL 
backend_libs__string_switch_util____Compare____string_case_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__string_switch_util____Unify____string_case_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__string_switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__string_switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_12_p_0(
  MR_Word TypeInfo_for_CaseRep_63,
  MR_Word HeadVar__1_1,
  MR_Word RepresentCase_2,
  MR_Box STATE_VARIABLE_StateA_0_3,
  MR_Box * STATE_VARIABLE_StateA_4,
  MR_Box STATE_VARIABLE_StateB_0_5,
  MR_Box * STATE_VARIABLE_StateB_6,
  MR_Box STATE_VARIABLE_StateC_0_7,
  MR_Box * STATE_VARIABLE_StateC_8,
  MR_Box STATE_VARIABLE_StateD_0_9,
  MR_Box * STATE_VARIABLE_StateD_10,
  MR_Word STATE_VARIABLE_UnsortedTable_0_11,
  MR_Word * STATE_VARIABLE_UnsortedTable_12);

static void MR_CALL 
backend_libs__string_switch_util__add_string_binary_entry_4_p_0(
  MR_Word TypeInfo_for_CaseRep_18,
  MR_Box CaseRep_5,
  MR_Word TaggedConsId_6,
  MR_Word STATE_VARIABLE_UnsortedTable_0_12,
  MR_Word * STATE_VARIABLE_UnsortedTable_13);

static void MR_CALL 
backend_libs__string_switch_util__calc_string_hash_slots_4_p_0(
  MR_Word TypeInfo_for_CaseRep_24,
  MR_Integer TableSize_5,
  MR_Word HashValList_6,
  MR_Word HashMap_7,
  MR_Word * SlotMap_8);

static void MR_CALL 
backend_libs__string_switch_util__calc_string_hash_slots_loop_over_hashes_7_p_0(
  MR_Word TypeInfo_for_CaseRep_30,
  MR_Word HeadVar__1_1,
  MR_Integer TableSize_2,
  MR_Word HashMap_3,
  MR_Word STATE_VARIABLE_SlotMap_0_4,
  MR_Word * STATE_VARIABLE_SlotMap_5,
  MR_Integer STATE_VARIABLE_LastUsed_0_6,
  MR_Integer * STATE_VARIABLE_LastUsed_7);

static void MR_CALL 
backend_libs__string_switch_util__calc_string_hash_slots_loop_over_hash_strings_8_p_0(
  MR_Word TypeInfo_for_CaseRep_69,
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_SlotMap_0_5,
  MR_Word * STATE_VARIABLE_SlotMap_6,
  MR_Integer STATE_VARIABLE_LastUsed_0_7,
  MR_Integer * STATE_VARIABLE_LastUsed_8);

static MR_bool MR_CALL 
backend_libs__string_switch_util__next_free_hash_slot_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__string_switch_util__next_free_hash_slot_5_p_0(
  MR_Word TypeInfo_for_CaseRep_16,
  MR_Word Map_6,
  MR_Word HomeMap_7,
  MR_Integer TableSize_8,
  MR_Integer LastUsed_9,
  MR_Integer * FreeSlot_10);

static void MR_CALL 
backend_libs__string_switch_util__follow_hash_chain_3_p_0(
  MR_Word TypeInfo_for_CaseRep_12,
  MR_Word Map_4,
  MR_Integer Slot_5,
  MR_Integer * LastSlot_6);

static void MR_CALL 
backend_libs__string_switch_util__string_hash_cases_14_p_0(
  MR_Word TypeInfo_for_CaseRep_61,
  MR_Word HeadVar__1_1,
  MR_Integer HashMask_2,
  MR_Word STATE_VARIABLE_HashMap4_0_3,
  MR_Word * STATE_VARIABLE_HashMap4_4,
  MR_Word STATE_VARIABLE_HashMap5_0_5,
  MR_Word * STATE_VARIABLE_HashMap5_6,
  MR_Word STATE_VARIABLE_HashMap6_0_7,
  MR_Word * STATE_VARIABLE_HashMap6_8,
  MR_Integer STATE_VARIABLE_NumCollisions4_0_9,
  MR_Integer * STATE_VARIABLE_NumCollisions4_10,
  MR_Integer STATE_VARIABLE_NumCollisions5_0_11,
  MR_Integer * STATE_VARIABLE_NumCollisions5_12,
  MR_Integer STATE_VARIABLE_NumCollisions6_0_13,
  MR_Integer * STATE_VARIABLE_NumCollisions6_14);

static void MR_CALL 
backend_libs__string_switch_util__string_hash_case_14_p_0(
  MR_Word TypeInfo_for_CaseRep_67,
  MR_Word StrCaseRep_15,
  MR_Integer HashMask_16,
  MR_Word STATE_VARIABLE_HashMap4_0_31,
  MR_Word * STATE_VARIABLE_HashMap4_32,
  MR_Word STATE_VARIABLE_HashMap5_0_33,
  MR_Word * STATE_VARIABLE_HashMap5_34,
  MR_Word STATE_VARIABLE_HashMap6_0_35,
  MR_Word * STATE_VARIABLE_HashMap6_36,
  MR_Integer STATE_VARIABLE_NumCollisions4_0_37,
  MR_Integer * STATE_VARIABLE_NumCollisions4_38,
  MR_Integer STATE_VARIABLE_NumCollisions5_0_39,
  MR_Integer * STATE_VARIABLE_NumCollisions5_40,
  MR_Integer STATE_VARIABLE_NumCollisions6_0_41,
  MR_Integer * STATE_VARIABLE_NumCollisions6_42);

static void MR_CALL 
backend_libs__string_switch_util__build_str_case_id_cord_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__string_switch_util__build_str_case_id_cord_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_MaxCaseNum_0_2,
  MR_Integer * STATE_VARIABLE_MaxCaseNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
backend_libs__string_switch_util__add_to_strs_case_ids_4_p_0(
  MR_Word CaseId_5,
  MR_Word TaggedConsId_6,
  MR_Word STATE_VARIABLE_StrCaseIdCord_0_11,
  MR_Word * STATE_VARIABLE_StrCaseIdCord_12);

static MR_bool MR_CALL 
backend_libs__string_switch_util__insert_cases_into_trie_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__string_switch_util__insert_cases_into_trie_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__string_switch_util__insert_cases_into_trie_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_TrieNode_0_3,
  MR_Word * STATE_VARIABLE_TrieNode_4);

static MR_bool MR_CALL 
backend_libs__string_switch_util__insert_case_into_trie_node_5_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__string_switch_util__insert_case_into_trie_node_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__string_switch_util__insert_case_into_trie_node_5_p_0(
  MR_Word InsertMatched_6,
  MR_Word InsertNotYetMatched_7,
  MR_Word InsertCaseId_8,
  MR_Word TrieNode0_9,
  MR_Word * TrieNode_10);

static MR_bool MR_CALL 
backend_libs__string_switch_util____Unify____string_case_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__string_switch_util____Compare____string_case_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__string_switch_util____Unify____string_hash_slot_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
backend_libs__string_switch_util____Compare____string_hash_slot_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
backend_libs__string_switch_util____Unify____table_size_upgrade_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__string_switch_util____Compare____table_size_upgrade_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__string_switch_util____Unify____trie_node_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__string_switch_util____Compare____trie_node_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box backend_libs__string_switch_util_scalar_common_1[2][3];

static /* final */ const MR_Box backend_libs__string_switch_util_scalar_common_2[3][2];

static /* final */ const MR_Box backend_libs__string_switch_util_scalar_common_3[2][5];

static /* final */ const MR_Box backend_libs__string_switch_util_scalar_common_4[1][7];

static /* final */ const MR_Integer backend_libs__string_switch_util_scalar_common_5[1][2];

static /* final */ const MR_Box backend_libs__string_switch_util_scalar_common_6[1][8];




static /* final */ const MR_Box backend_libs__string_switch_util_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_trie_node_0))
  },
};

static /* final */ const MR_Box backend_libs__string_switch_util_scalar_common_2[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&backend_libs__string_switch_util_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0))
  },
};

static /* final */ const MR_Box backend_libs__string_switch_util_scalar_common_3[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__string_switch_util__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__string_switch_util__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box backend_libs__string_switch_util_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&backend_libs__string_switch_util__cord__pti_cord_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&backend_libs__string_switch_util__cord__pti_cord_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0hlds__hlds_goal__type_ctor_info_case_id_0))
  },
};

static /* final */ const MR_Integer backend_libs__string_switch_util_scalar_common_5[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box backend_libs__string_switch_util_scalar_common_6[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&backend_libs__string_switch_util_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&backend_libs__string_switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1)),
    ((MR_Box) (&backend_libs__string_switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__string_switch_util__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__string_switch_util__pair__ti_pair_2builtin__type_ctor_info_string_0hlds__hlds_goal__type_ctor_info_case_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__string_switch_util__cord__pti_cord_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0hlds__hlds_goal__type_ctor_info_case_id_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&backend_libs__string_switch_util__pair__ti_pair_2builtin__type_ctor_info_string_0hlds__hlds_goal__type_ctor_info_case_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__string_switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__string_switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&backend_libs__string_switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1) }
};

const MR_TypeCtorInfo_Struct backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_string_case_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__string_switch_util____Unify____string_case_id_0_0_10001)),
  ((MR_Box) (backend_libs__string_switch_util____Compare____string_case_id_0_0_10001)),
  (MR_String) "backend_libs.string_switch_util",
  (MR_String) "string_case_id",
  { NULL },
  { (MR_PseudoTypeInfo) (&backend_libs__string_switch_util__pair__ti_pair_2builtin__type_ctor_info_string_0hlds__hlds_goal__type_ctor_info_case_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo backend_libs__string_switch_util__backend_libs__string_switch_util__field_types_string_hash_slot_1_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc backend_libs__string_switch_util__backend_libs__string_switch_util__du_functor_desc_string_hash_slot_1_0 = {
  (MR_String) "string_hash_slot",
  INT16_C(3),
  UINT16_C(4),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__string_switch_util__backend_libs__string_switch_util__field_types_string_hash_slot_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__string_switch_util__backend_libs__string_switch_util__du_stag_ordered_string_hash_slot_1_0[1] = { &backend_libs__string_switch_util__backend_libs__string_switch_util__du_functor_desc_string_hash_slot_1_0 };

static const MR_DuPtagLayout backend_libs__string_switch_util__backend_libs__string_switch_util__du_ptag_ordered_string_hash_slot_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__string_switch_util__backend_libs__string_switch_util__du_stag_ordered_string_hash_slot_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__string_switch_util__backend_libs__string_switch_util__du_name_ordered_string_hash_slot_1[1] = { &backend_libs__string_switch_util__backend_libs__string_switch_util__du_functor_desc_string_hash_slot_1_0 };

static const MR_Integer backend_libs__string_switch_util__backend_libs__string_switch_util__functor_number_map_string_hash_slot_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_string_hash_slot_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__string_switch_util____Unify____string_hash_slot_1_0_10001)),
  ((MR_Box) (backend_libs__string_switch_util____Compare____string_hash_slot_1_0_10001)),
  (MR_String) "backend_libs.string_switch_util",
  (MR_String) "string_hash_slot",
  { backend_libs__string_switch_util__backend_libs__string_switch_util__du_name_ordered_string_hash_slot_1 },
  { backend_libs__string_switch_util__backend_libs__string_switch_util__du_ptag_ordered_string_hash_slot_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__string_switch_util__backend_libs__string_switch_util__functor_number_map_string_hash_slot_1,

};

static const MR_EnumFunctorDesc backend_libs__string_switch_util__backend_libs__string_switch_util__enum_functor_desc_table_size_upgrade_0_0 = {
  (MR_String) "keep_first_size",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__string_switch_util__backend_libs__string_switch_util__enum_functor_desc_table_size_upgrade_0_1 = {
  (MR_String) "allow_doubling",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr backend_libs__string_switch_util__backend_libs__string_switch_util__enum_ordinal_ordered_table_size_upgrade_0[2] = {
  &backend_libs__string_switch_util__backend_libs__string_switch_util__enum_functor_desc_table_size_upgrade_0_0,
  &backend_libs__string_switch_util__backend_libs__string_switch_util__enum_functor_desc_table_size_upgrade_0_1
};

static const MR_EnumFunctorDescPtr backend_libs__string_switch_util__backend_libs__string_switch_util__enum_name_ordered_table_size_upgrade_0[2] = {
  &backend_libs__string_switch_util__backend_libs__string_switch_util__enum_functor_desc_table_size_upgrade_0_1,
  &backend_libs__string_switch_util__backend_libs__string_switch_util__enum_functor_desc_table_size_upgrade_0_0
};

static const MR_Integer backend_libs__string_switch_util__backend_libs__string_switch_util__functor_number_map_table_size_upgrade_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_table_size_upgrade_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__string_switch_util____Unify____table_size_upgrade_0_0_10001)),
  ((MR_Box) (backend_libs__string_switch_util____Compare____table_size_upgrade_0_0_10001)),
  (MR_String) "backend_libs.string_switch_util",
  (MR_String) "table_size_upgrade",
  { backend_libs__string_switch_util__backend_libs__string_switch_util__enum_name_ordered_table_size_upgrade_0 },
  { backend_libs__string_switch_util__backend_libs__string_switch_util__enum_ordinal_ordered_table_size_upgrade_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__string_switch_util__backend_libs__string_switch_util__functor_number_map_table_size_upgrade_0,

};

static const MR_FA_TypeInfo_Struct1 backend_libs__string_switch_util__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo backend_libs__string_switch_util__backend_libs__string_switch_util__field_types_trie_node_0_0[3] = {
  (MR_PseudoTypeInfo) (&backend_libs__string_switch_util__list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&backend_libs__string_switch_util__list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)
};

static const MR_ConstString backend_libs__string_switch_util__backend_libs__string_switch_util__field_names_trie_node_0_0[3] = {
  (MR_String) "leaf_matched",
  (MR_String) "leaf_unmatched",
  NULL
};

static const MR_DuFunctorDesc backend_libs__string_switch_util__backend_libs__string_switch_util__du_functor_desc_trie_node_0_0 = {
  (MR_String) "trie_leaf",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__string_switch_util__backend_libs__string_switch_util__field_types_trie_node_0_0,
  backend_libs__string_switch_util__backend_libs__string_switch_util__field_names_trie_node_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct2 backend_libs__string_switch_util__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__string_switch_util__type_ctor_info_trie_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_trie_node_0)
  }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__string_switch_util__maybe__ti_maybe_1hlds__hlds_goal__type_ctor_info_case_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0) }
};

static const MR_PseudoTypeInfo backend_libs__string_switch_util__backend_libs__string_switch_util__field_types_trie_node_0_1[3] = {
  (MR_PseudoTypeInfo) (&backend_libs__string_switch_util__list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&backend_libs__string_switch_util__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__string_switch_util__type_ctor_info_trie_node_0),
  (MR_PseudoTypeInfo) (&backend_libs__string_switch_util__maybe__ti_maybe_1hlds__hlds_goal__type_ctor_info_case_id_0)
};

static const MR_ConstString backend_libs__string_switch_util__backend_libs__string_switch_util__field_names_trie_node_0_1[3] = {
  (MR_String) "choice_matched",
  (MR_String) "choice_next_level",
  (MR_String) "choice_end"
};

static const MR_DuFunctorDesc backend_libs__string_switch_util__backend_libs__string_switch_util__du_functor_desc_trie_node_0_1 = {
  (MR_String) "trie_choice",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  backend_libs__string_switch_util__backend_libs__string_switch_util__field_types_trie_node_0_1,
  backend_libs__string_switch_util__backend_libs__string_switch_util__field_names_trie_node_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__string_switch_util__backend_libs__string_switch_util__du_stag_ordered_trie_node_0_0[1] = { &backend_libs__string_switch_util__backend_libs__string_switch_util__du_functor_desc_trie_node_0_0 };

static const MR_DuFunctorDescPtr backend_libs__string_switch_util__backend_libs__string_switch_util__du_stag_ordered_trie_node_0_1[1] = { &backend_libs__string_switch_util__backend_libs__string_switch_util__du_functor_desc_trie_node_0_1 };

static const MR_DuPtagLayout backend_libs__string_switch_util__backend_libs__string_switch_util__du_ptag_ordered_trie_node_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__string_switch_util__backend_libs__string_switch_util__du_stag_ordered_trie_node_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__string_switch_util__backend_libs__string_switch_util__du_stag_ordered_trie_node_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__string_switch_util__backend_libs__string_switch_util__du_name_ordered_trie_node_0[2] = {
  &backend_libs__string_switch_util__backend_libs__string_switch_util__du_functor_desc_trie_node_0_1,
  &backend_libs__string_switch_util__backend_libs__string_switch_util__du_functor_desc_trie_node_0_0
};

static const MR_Integer backend_libs__string_switch_util__backend_libs__string_switch_util__functor_number_map_trie_node_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_trie_node_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__string_switch_util____Unify____trie_node_0_0_10001)),
  ((MR_Box) (backend_libs__string_switch_util____Compare____trie_node_0_0_10001)),
  (MR_String) "backend_libs.string_switch_util",
  (MR_String) "trie_node",
  { backend_libs__string_switch_util__backend_libs__string_switch_util__du_name_ordered_trie_node_0 },
  { backend_libs__string_switch_util__backend_libs__string_switch_util__du_ptag_ordered_trie_node_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__string_switch_util__backend_libs__string_switch_util__functor_number_map_trie_node_0,

};

static MR_bool MR_CALL 
backend_libs__string_switch_util__IntroducedFrom__pred__insert_case_into_trie_node__204__1_2_p_0(
  MR_Word InsertMatched_6,
  MR_Word LeafMatched_11)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__string_switch_util_scalar_common_2[0]), ((MR_Box) (LeafMatched_11)), ((MR_Box) (InsertMatched_6)));
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__string_switch_util__IntroducedFrom__pred__insert_case_into_trie_node__218__1_2_p_0(
  MR_Word InsertMatched_6,
  MR_Word ChoiceMatched_19)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__string_switch_util_scalar_common_2[0]), ((MR_Box) (ChoiceMatched_19)), ((MR_Box) (InsertMatched_6)));
  return succeeded;
}

void MR_CALL 
backend_libs__string_switch_util____Compare____trie_node_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_20 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_21 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_20 == CastY_21);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word ArgX3_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Word ArgY3_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
      MR_Word SubResult1_14;

      mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__string_switch_util_scalar_common_2[0]), &SubResult1_14, ((MR_Box) (ArgX1_12)), ((MR_Box) (ArgY1_13)));
      succeeded = (SubResult1_14 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_14;
      else
      {
        MR_Word SubResult2_17;

        mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__string_switch_util_scalar_common_1[1]), &SubResult2_17, ((MR_Box) (ArgX2_15)), ((MR_Box) (ArgY2_16)));
        succeeded = (SubResult2_17 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_17;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__string_switch_util_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX3_18)), ((MR_Box) (ArgY3_19)));
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
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__string_switch_util_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__string_switch_util_scalar_common_2[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer Var_28 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_29 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_28 < Var_29);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_28 > Var_29);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
backend_libs__string_switch_util____Unify____trie_node_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_10;
    MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_12;
    MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    MR_Word ArgY3_14;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      ArgY3_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      TypeInfo_17_17 = (MR_Word) (&backend_libs__string_switch_util_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
      if (succeeded)
      {
        TypeInfo_18_18 = (MR_Word) (&backend_libs__string_switch_util_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_11)), ((MR_Box) (ArgY2_12)));
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&backend_libs__string_switch_util_scalar_common_2[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_13)), ((MR_Box) (ArgY3_14)));
        }
      }
    }
  }
  else
  {
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_21_21;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8;
    MR_Integer Var_23;
    MR_Integer Var_24;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
      TypeInfo_20_20 = (MR_Word) (&backend_libs__string_switch_util_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_21_21 = (MR_Word) (&backend_libs__string_switch_util_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          Var_23 = (MR_Integer) (ArgX3_7);
          Var_24 = (MR_Integer) (ArgY3_8);
          succeeded = (Var_23 == Var_24);
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
backend_libs__string_switch_util____Compare____table_size_upgrade_0_0(
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

MR_bool MR_CALL 
backend_libs__string_switch_util____Unify____table_size_upgrade_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
backend_libs__string_switch_util____Compare____string_hash_slot_1_0(
  MR_Word TypeInfo_for_CaseRep_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Box ArgX3_10 = (MR_hl_field(0, HeadVar__2_2, 2));
    MR_Box ArgY3_11 = (MR_hl_field(0, HeadVar__3_3, 2));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0(TypeInfo_for_CaseRep_14, HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
backend_libs__string_switch_util____Unify____string_hash_slot_1_0(
  MR_Word TypeInfo_for_CaseRep_11,
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
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Box ArgX3_7 = (MR_hl_field(0, HeadVar__1_1, 2));
    MR_Box ArgY3_8 = (MR_hl_field(0, HeadVar__2_2, 2));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_CaseRep_11, ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
backend_libs__string_switch_util____Compare____string_case_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__string_switch_util_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
backend_libs__string_switch_util____Unify____string_case_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__string_switch_util_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
backend_libs__string_switch_util__string_binary_cases_11_p_0(
  MR_Word TypeInfo_for_CaseRep_33,
  MR_Word TypeInfo_for_StateA_34,
  MR_Word TypeInfo_for_StateB_35,
  MR_Word TypeInfo_for_StateC_36,
  MR_Word TypeInfo_for_StateD_37,
  MR_Word TaggedCases_12,
  MR_Word RepresentCase_13,
  MR_Box STATE_VARIABLE_StateA_0_20,
  MR_Box * STATE_VARIABLE_StateA_21,
  MR_Box STATE_VARIABLE_StateB_0_22,
  MR_Box * STATE_VARIABLE_StateB_23,
  MR_Box STATE_VARIABLE_StateC_0_24,
  MR_Box * STATE_VARIABLE_StateC_25,
  MR_Box STATE_VARIABLE_StateD_0_26,
  MR_Box * STATE_VARIABLE_StateD_27,
  MR_Word * SortedTable_18)
{
  MR_Word TypeInfo_40_40;
  MR_Word UnsortedTable_19;
  MR_Word conv0_SortedTable_18;

  backend_libs__string_switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_12_p_0(TypeInfo_for_CaseRep_33, TaggedCases_12, RepresentCase_13, STATE_VARIABLE_StateA_0_20, STATE_VARIABLE_StateA_21, STATE_VARIABLE_StateB_0_22, STATE_VARIABLE_StateB_23, STATE_VARIABLE_StateC_0_24, STATE_VARIABLE_StateC_25, STATE_VARIABLE_StateD_0_26, STATE_VARIABLE_StateD_27, (MR_Word) ((MR_Unsigned) 0U), &UnsortedTable_19);
  {
    TypeInfo_40_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_40_40, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(0, TypeInfo_40_40, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
    MR_hl_field(0, TypeInfo_40_40, 2) = ((MR_Box) (TypeInfo_for_CaseRep_33));
  }
  mercury__list__sort_2_p_0(TypeInfo_40_40, (MR_Word) (UnsortedTable_19), &conv0_SortedTable_18);
  *SortedTable_18 = (MR_Word) (conv0_SortedTable_18);
}

static void MR_CALL 
backend_libs__string_switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_UnsortedTable_13;

  backend_libs__string_switch_util__add_string_binary_entry_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), (MR_hl_field(0, closure, 4)), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_UnsortedTable_13);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_UnsortedTable_13));
}

static void MR_CALL 
backend_libs__string_switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_12_p_0(
  MR_Word TypeInfo_for_CaseRep_63,
  MR_Word HeadVar__1_1,
  MR_Word RepresentCase_2,
  MR_Box STATE_VARIABLE_StateA_0_3,
  MR_Box * STATE_VARIABLE_StateA_4,
  MR_Box STATE_VARIABLE_StateB_0_5,
  MR_Box * STATE_VARIABLE_StateB_6,
  MR_Box STATE_VARIABLE_StateC_0_7,
  MR_Box * STATE_VARIABLE_StateC_8,
  MR_Box STATE_VARIABLE_StateD_0_9,
  MR_Box * STATE_VARIABLE_StateD_10,
  MR_Word STATE_VARIABLE_UnsortedTable_0_11,
  MR_Word * STATE_VARIABLE_UnsortedTable_12)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_UnsortedTable_12 = STATE_VARIABLE_UnsortedTable_0_11;
    *STATE_VARIABLE_StateD_10 = STATE_VARIABLE_StateD_0_9;
    *STATE_VARIABLE_StateC_8 = STATE_VARIABLE_StateC_0_7;
    *STATE_VARIABLE_StateB_6 = STATE_VARIABLE_StateB_0_5;
    *STATE_VARIABLE_StateA_4 = STATE_VARIABLE_StateA_0_3;
  }
  else
  {
    MR_Word TypeInfo_74_74;
    MR_Word TypeInfo_76_76;
    MR_Word TaggedCase_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word TaggedCases_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Box CaseRep_37;
    MR_Word MainTaggedConsId_38;
    MR_Word OtherTaggedConsIds_39;
    MR_Box STATE_VARIABLE_StateA_1_52;
    MR_Box STATE_VARIABLE_StateB_1_53;
    MR_Box STATE_VARIABLE_StateC_1_54;
    MR_Box STATE_VARIABLE_StateD_1_55;
    MR_Word STATE_VARIABLE_UnsortedTable_1_56;
    MR_Word STATE_VARIABLE_UnsortedTable_2_61;
    MR_Word Var_62;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv2_STATE_VARIABLE_UnsortedTable_12;

    backend_libs__string_switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_12_p_0(TypeInfo_for_CaseRep_63, TaggedCases_30, RepresentCase_2, STATE_VARIABLE_StateA_0_3, &STATE_VARIABLE_StateA_1_52, STATE_VARIABLE_StateB_0_5, &STATE_VARIABLE_StateB_1_53, STATE_VARIABLE_StateC_0_7, &STATE_VARIABLE_StateC_1_54, STATE_VARIABLE_StateD_0_9, &STATE_VARIABLE_StateD_1_55, STATE_VARIABLE_UnsortedTable_0_11, &STATE_VARIABLE_UnsortedTable_1_56);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, RepresentCase_2, 1))));
    func_0(((MR_Box) (RepresentCase_2)), ((MR_Box) (TaggedCase_29)), &CaseRep_37, STATE_VARIABLE_StateA_1_52, STATE_VARIABLE_StateA_4, STATE_VARIABLE_StateB_1_53, STATE_VARIABLE_StateB_6, STATE_VARIABLE_StateC_1_54, STATE_VARIABLE_StateC_8, STATE_VARIABLE_StateD_1_55, STATE_VARIABLE_StateD_10);
    MainTaggedConsId_38 = ((MR_Word) ((MR_hl_field(0, TaggedCase_29, 0))));
    OtherTaggedConsIds_39 = ((MR_Word) ((MR_hl_field(0, TaggedCase_29, 1))));
    backend_libs__string_switch_util__add_string_binary_entry_4_p_0(TypeInfo_for_CaseRep_63, CaseRep_37, MainTaggedConsId_38, STATE_VARIABLE_UnsortedTable_1_56, &STATE_VARIABLE_UnsortedTable_2_61);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_62, 0) = ((MR_Box) (&backend_libs__string_switch_util_scalar_common_6[0]));
      MR_hl_field(0, Var_62, 1) = ((MR_Box) (backend_libs__string_switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_12_p_0_1));
      MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_62, 3) = ((MR_Box) (TypeInfo_for_CaseRep_63));
      MR_hl_field(0, Var_62, 4) = CaseRep_37;
    }
    {
      TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_74_74, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(0, TypeInfo_74_74, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
      MR_hl_field(0, TypeInfo_74_74, 2) = ((MR_Box) (TypeInfo_for_CaseRep_63));
    }
    {
      TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_76_76, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(0, TypeInfo_76_76, 1) = ((MR_Box) (TypeInfo_74_74));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), TypeInfo_76_76, Var_62, OtherTaggedConsIds_39, ((MR_Box) (STATE_VARIABLE_UnsortedTable_2_61)), &conv2_STATE_VARIABLE_UnsortedTable_12);
    *STATE_VARIABLE_UnsortedTable_12 = ((MR_Word) (conv2_STATE_VARIABLE_UnsortedTable_12));
  }
}

static void MR_CALL 
backend_libs__string_switch_util__add_string_binary_entry_4_p_0(
  MR_Word TypeInfo_for_CaseRep_18,
  MR_Box CaseRep_5,
  MR_Word TaggedConsId_6,
  MR_Word STATE_VARIABLE_UnsortedTable_0_12,
  MR_Word * STATE_VARIABLE_UnsortedTable_13)
{
  MR_bool succeeded;
  MR_Word Tag_9 = ((MR_Word) ((MR_hl_field(0, TaggedConsId_6, 1))));
  MR_String String_11;
  MR_Word Var_17;
  MR_String StringPrime_10;

  succeeded = ((((MR_tag((MR_Word) Tag_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Tag_9, 0)))) == (MR_Integer) 0)));
  if (succeeded)
  {
    StringPrime_10 = ((MR_String) ((MR_hl_field(3, Tag_9, 1))));
    String_11 = StringPrime_10;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.string_switch_util.add_string_binary_entry\'/4", (MR_String) "non-string case\?");
      return;
    }
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (String_11));
    MR_hl_field(0, Var_17, 1) = CaseRep_5;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_UnsortedTable_13 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_17));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_UnsortedTable_0_12));
  }
}

void MR_CALL 
backend_libs__string_switch_util__construct_string_hash_cases_6_p_0(
  MR_Word TypeInfo_for_CaseRep_88,
  MR_Word StrsDatas_7,
  MR_Word Upgrade_8,
  MR_Integer * TableSize_9,
  MR_Word * HashSlotsMap_10,
  MR_Word * HashOp_11,
  MR_Integer * NumCollisions_12)
{
  MR_bool succeeded;
  MR_Word TypeInfo_91_91;
  MR_Word TypeInfo_94_94;
  MR_Integer NumStrs_13;
  MR_Integer LogNumStrs_14;
  MR_Integer RoundedUpNumStrs_15;
  MR_Integer TableSizeA_16;
  MR_Integer HashMaskA_17;
  MR_Word HashValsMap4A_18;
  MR_Word HashValsMap5A_19;
  MR_Word HashValsMap6A_20;
  MR_Integer NumCollisions4A_21;
  MR_Integer NumCollisions5A_22;
  MR_Integer NumCollisions6A_23;
  MR_Word HashValsMapA_26;
  MR_Word HashOpA_27;
  MR_Integer NumCollisionsA_28;
  MR_Word HashValsMap_29;
  MR_Word HashValsList_38;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;

  {
    TypeInfo_91_91 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_91_91, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(0, TypeInfo_91_91, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
    MR_hl_field(0, TypeInfo_91_91, 2) = ((MR_Box) (TypeInfo_for_CaseRep_88));
  }
  mercury__list__length_2_p_0(TypeInfo_91_91, (MR_Word) (StrsDatas_7), &NumStrs_13);
  mercury__int__log2_2_p_0(NumStrs_13, &LogNumStrs_14);
  mercury__int__pow_3_p_0((MR_Integer) 2, LogNumStrs_14, &RoundedUpNumStrs_15);
  TableSizeA_16 = (MR_Integer) ((MR_Unsigned) 2 * (MR_Unsigned) RoundedUpNumStrs_15);
  HashMaskA_17 = (MR_Integer) ((MR_Unsigned) TableSizeA_16 - (MR_Unsigned) 1);
  {
    TypeInfo_94_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_94_94, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_94_94, 1) = ((MR_Box) (TypeInfo_91_91));
  }
  Var_42 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_94_94);
  Var_43 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_94_94);
  Var_44 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_94_94);
  backend_libs__string_switch_util__string_hash_cases_14_p_0(TypeInfo_for_CaseRep_88, StrsDatas_7, HashMaskA_17, Var_42, &HashValsMap4A_18, Var_43, &HashValsMap5A_19, Var_44, &HashValsMap6A_20, (MR_Integer) 0, &NumCollisions4A_21, (MR_Integer) 0, &NumCollisions5A_22, (MR_Integer) 0, &NumCollisions6A_23);
  succeeded = (NumCollisions4A_21 <= NumCollisions5A_22);
  if (succeeded)
    succeeded = (NumCollisions4A_21 <= NumCollisions6A_23);
  if (succeeded)
  {
    HashValsMapA_26 = HashValsMap4A_18;
    HashOpA_27 = (MR_Word) ((MR_Unsigned) 32U);
    NumCollisionsA_28 = NumCollisions4A_21;
  }
  else
  {
    succeeded = (NumCollisions5A_22 <= NumCollisions6A_23);
    if (succeeded)
    {
      HashValsMapA_26 = HashValsMap5A_19;
      HashOpA_27 = (MR_Word) ((MR_Unsigned) 36U);
      NumCollisionsA_28 = NumCollisions5A_22;
    }
    else
    {
      HashValsMapA_26 = HashValsMap6A_20;
      HashOpA_27 = (MR_Word) ((MR_Unsigned) 40U);
      NumCollisionsA_28 = NumCollisions6A_23;
    }
  }
  succeeded = (NumCollisionsA_28 == (MR_Integer) 0);
  if (!(succeeded))
    succeeded = (Upgrade_8 == (MR_Integer) 0);
  if (succeeded)
  {
    *TableSize_9 = TableSizeA_16;
    HashValsMap_29 = HashValsMapA_26;
    *HashOp_11 = HashOpA_27;
    *NumCollisions_12 = NumCollisionsA_28;
  }
  else
  {
    MR_Integer TableSizeB_30 = (MR_Integer) ((MR_Unsigned) 4 * (MR_Unsigned) RoundedUpNumStrs_15);
    MR_Integer HashMaskB_31 = (MR_Integer) ((MR_Unsigned) TableSizeB_30 - (MR_Unsigned) 1);
    MR_Word HashValsMap4B_32;
    MR_Word HashValsMap5B_33;
    MR_Word HashValsMap6B_34;
    MR_Integer NumCollisions4B_35;
    MR_Integer NumCollisions5B_36;
    MR_Integer NumCollisions6B_37;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;

    Var_61 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_94_94);
    Var_62 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_94_94);
    Var_63 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_94_94);
    backend_libs__string_switch_util__string_hash_cases_14_p_0(TypeInfo_for_CaseRep_88, StrsDatas_7, HashMaskB_31, Var_61, &HashValsMap4B_32, Var_62, &HashValsMap5B_33, Var_63, &HashValsMap6B_34, (MR_Integer) 0, &NumCollisions4B_35, (MR_Integer) 0, &NumCollisions5B_36, (MR_Integer) 0, &NumCollisions6B_37);
    succeeded = (NumCollisions4B_35 == (MR_Integer) 0);
    if (succeeded)
    {
      *TableSize_9 = TableSizeB_30;
      HashValsMap_29 = HashValsMap4B_32;
      *HashOp_11 = (MR_Word) ((MR_Unsigned) 32U);
      *NumCollisions_12 = NumCollisions4B_35;
    }
    else
    {
      succeeded = (NumCollisions5B_36 == (MR_Integer) 0);
      if (succeeded)
      {
        *TableSize_9 = TableSizeB_30;
        HashValsMap_29 = HashValsMap5B_33;
        *HashOp_11 = (MR_Word) ((MR_Unsigned) 36U);
        *NumCollisions_12 = NumCollisions5B_36;
      }
      else
      {
        succeeded = (NumCollisions6B_37 == (MR_Integer) 0);
        if (succeeded)
        {
          *TableSize_9 = TableSizeB_30;
          HashValsMap_29 = HashValsMap6B_34;
          *HashOp_11 = (MR_Word) ((MR_Unsigned) 40U);
          *NumCollisions_12 = NumCollisions6B_37;
        }
        else
        {
          *TableSize_9 = TableSizeA_16;
          HashValsMap_29 = HashValsMapA_26;
          *HashOp_11 = HashOpA_27;
          *NumCollisions_12 = NumCollisionsA_28;
        }
      }
    }
  }
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_94_94, HashValsMap_29, &HashValsList_38);
  backend_libs__string_switch_util__calc_string_hash_slots_4_p_0(TypeInfo_for_CaseRep_88, *TableSize_9, HashValsList_38, HashValsMap_29, HashSlotsMap_10);
}

static void MR_CALL 
backend_libs__string_switch_util__calc_string_hash_slots_4_p_0(
  MR_Word TypeInfo_for_CaseRep_24,
  MR_Integer TableSize_5,
  MR_Word HashValList_6,
  MR_Word HashMap_7,
  MR_Word * SlotMap_8)
{
  MR_Word TypeInfo_27_27;
  MR_Word Var_16;
  MR_Integer Var_11;

  {
    TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_27_27, 0) = ((MR_Box) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_string_hash_slot_1));
    MR_hl_field(0, TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_CaseRep_24));
  }
  Var_16 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_27_27);
  backend_libs__string_switch_util__calc_string_hash_slots_loop_over_hashes_7_p_0(TypeInfo_for_CaseRep_24, HashValList_6, TableSize_5, HashMap_7, Var_16, SlotMap_8, (MR_Integer) 0, &Var_11);
}

static void MR_CALL 
backend_libs__string_switch_util__calc_string_hash_slots_loop_over_hashes_7_p_0(
  MR_Word TypeInfo_for_CaseRep_30,
  MR_Word HeadVar__1_1,
  MR_Integer TableSize_2,
  MR_Word HashMap_3,
  MR_Word STATE_VARIABLE_SlotMap_0_4,
  MR_Word * STATE_VARIABLE_SlotMap_5,
  MR_Integer STATE_VARIABLE_LastUsed_0_6,
  MR_Integer * STATE_VARIABLE_LastUsed_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_LastUsed_7 = STATE_VARIABLE_LastUsed_0_6;
      *STATE_VARIABLE_SlotMap_5 = STATE_VARIABLE_SlotMap_0_4;
    }
    else
    {
      MR_Integer HashVal_16;
      MR_Word StringCaseReps_17;
      MR_Word Rest_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word STATE_VARIABLE_SlotMap_1_28;
      MR_Integer STATE_VARIABLE_LastUsed_1_29;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_SlotMap_0_4;
      MR_Integer next_value_of_STATE_VARIABLE_LastUsed_0_6;

      HashVal_16 = ((MR_Integer) ((MR_hl_field(0, Var_27, 0))));
      StringCaseReps_17 = ((MR_Word) ((MR_hl_field(0, Var_27, 1))));
      backend_libs__string_switch_util__calc_string_hash_slots_loop_over_hash_strings_8_p_0(TypeInfo_for_CaseRep_30, StringCaseReps_17, TableSize_2, HashVal_16, HashMap_3, STATE_VARIABLE_SlotMap_0_4, &STATE_VARIABLE_SlotMap_1_28, STATE_VARIABLE_LastUsed_0_6, &STATE_VARIABLE_LastUsed_1_29);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Rest_18;
      next_value_of_STATE_VARIABLE_SlotMap_0_4 = STATE_VARIABLE_SlotMap_1_28;
      next_value_of_STATE_VARIABLE_LastUsed_0_6 = STATE_VARIABLE_LastUsed_1_29;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_SlotMap_0_4 = next_value_of_STATE_VARIABLE_SlotMap_0_4;
      STATE_VARIABLE_LastUsed_0_6 = next_value_of_STATE_VARIABLE_LastUsed_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
backend_libs__string_switch_util__calc_string_hash_slots_loop_over_hash_strings_8_p_0(
  MR_Word TypeInfo_for_CaseRep_69,
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_SlotMap_0_5,
  MR_Word * STATE_VARIABLE_SlotMap_6,
  MR_Integer STATE_VARIABLE_LastUsed_0_7,
  MR_Integer * STATE_VARIABLE_LastUsed_8)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_LastUsed_8 = STATE_VARIABLE_LastUsed_0_7;
    *STATE_VARIABLE_SlotMap_6 = STATE_VARIABLE_SlotMap_0_5;
  }
  else
  {
    MR_Word StringCaseRep_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word StringCaseReps_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_String String_25;
    MR_Box CaseRep_26;
    MR_Word NewSlot_27;
    MR_Word STATE_VARIABLE_SlotMap_1_40;
    MR_Integer STATE_VARIABLE_LastUsed_1_41;
    MR_Word TypeInfo_72_72;

    backend_libs__string_switch_util__calc_string_hash_slots_loop_over_hash_strings_8_p_0(TypeInfo_for_CaseRep_69, StringCaseReps_19, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, STATE_VARIABLE_SlotMap_0_5, &STATE_VARIABLE_SlotMap_1_40, STATE_VARIABLE_LastUsed_0_7, &STATE_VARIABLE_LastUsed_1_41);
    String_25 = ((MR_String) ((MR_hl_field(0, StringCaseRep_18, 0))));
    CaseRep_26 = (MR_hl_field(0, StringCaseRep_18, 1));
    {
      NewSlot_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NewSlot_27, 0) = ((MR_Box) (String_25));
      MR_hl_field(0, NewSlot_27, 1) = ((MR_Box) ((MR_Integer) -1));
      MR_hl_field(0, NewSlot_27, 2) = CaseRep_26;
    }
    {
      TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_72_72, 0) = ((MR_Box) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_string_hash_slot_1));
      MR_hl_field(0, TypeInfo_72_72, 1) = ((MR_Box) (TypeInfo_for_CaseRep_69));
    }
    succeeded = mercury__map__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_72_72, STATE_VARIABLE_SlotMap_1_40, ((MR_Box) (HeadVar__3_3)));
    if (succeeded)
    {
      MR_Integer ChainEnd_28;
      MR_Word ChainEndSlot0_29;
      MR_String PrevString_30;
      MR_Box PrevCaseRep_32;
      MR_Word ChainEndSlot_33;
      MR_Word STATE_VARIABLE_SlotMap_2_44;
      MR_Box conv0_ChainEndSlot0_29;
      MR_Word conv1_STATE_VARIABLE_SlotMap_2_44;
      MR_Word conv2_STATE_VARIABLE_SlotMap_6;

      backend_libs__string_switch_util__follow_hash_chain_3_p_0(TypeInfo_for_CaseRep_69, STATE_VARIABLE_SlotMap_1_40, HeadVar__3_3, &ChainEnd_28);
      backend_libs__string_switch_util__next_free_hash_slot_5_p_0(TypeInfo_for_CaseRep_69, STATE_VARIABLE_SlotMap_1_40, HeadVar__4_4, HeadVar__2_2, STATE_VARIABLE_LastUsed_1_41, STATE_VARIABLE_LastUsed_8);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_72_72, (MR_Word) (STATE_VARIABLE_SlotMap_1_40), ChainEnd_28, &conv0_ChainEndSlot0_29);
      ChainEndSlot0_29 = ((MR_Word) (conv0_ChainEndSlot0_29));
      PrevString_30 = ((MR_String) ((MR_hl_field(0, ChainEndSlot0_29, 0))));
      PrevCaseRep_32 = (MR_hl_field(0, ChainEndSlot0_29, 2));
      {
        ChainEndSlot_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ChainEndSlot_33, 0) = ((MR_Box) (PrevString_30));
        MR_hl_field(0, ChainEndSlot_33, 1) = ((MR_Box) (*STATE_VARIABLE_LastUsed_8));
        MR_hl_field(0, ChainEndSlot_33, 2) = PrevCaseRep_32;
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_72_72, ChainEnd_28, ((MR_Box) (ChainEndSlot_33)), (MR_Word) (STATE_VARIABLE_SlotMap_1_40), &conv1_STATE_VARIABLE_SlotMap_2_44);
      STATE_VARIABLE_SlotMap_2_44 = (MR_Word) (conv1_STATE_VARIABLE_SlotMap_2_44);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_72_72, *STATE_VARIABLE_LastUsed_8, ((MR_Box) (NewSlot_27)), (MR_Word) (STATE_VARIABLE_SlotMap_2_44), &conv2_STATE_VARIABLE_SlotMap_6);
      *STATE_VARIABLE_SlotMap_6 = (MR_Word) (conv2_STATE_VARIABLE_SlotMap_6);
    }
    else
    {
      MR_Word TypeInfo_78_78;
      MR_Word conv3_STATE_VARIABLE_SlotMap_6;

      {
        TypeInfo_78_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_78_78, 0) = ((MR_Box) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_string_hash_slot_1));
        MR_hl_field(0, TypeInfo_78_78, 1) = ((MR_Box) (TypeInfo_for_CaseRep_69));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_78_78, HeadVar__3_3, ((MR_Box) (NewSlot_27)), (MR_Word) (STATE_VARIABLE_SlotMap_1_40), &conv3_STATE_VARIABLE_SlotMap_6);
      *STATE_VARIABLE_SlotMap_6 = (MR_Word) (conv3_STATE_VARIABLE_SlotMap_6);
      *STATE_VARIABLE_LastUsed_8 = STATE_VARIABLE_LastUsed_1_41;
    }
  }
}

static MR_bool MR_CALL 
backend_libs__string_switch_util__next_free_hash_slot_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__int__f_less_than_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
backend_libs__string_switch_util__next_free_hash_slot_5_p_0(
  MR_Word TypeInfo_for_CaseRep_16,
  MR_Word Map_6,
  MR_Word HomeMap_7,
  MR_Integer TableSize_8,
  MR_Integer LastUsed_9,
  MR_Integer * FreeSlot_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer NextSlot_11 = (MR_Integer) ((MR_Unsigned) LastUsed_9 + (MR_Unsigned) 1);
    MR_Word Var_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_13, 0) = ((MR_Box) (&backend_libs__string_switch_util_scalar_common_3[1]));
      MR_hl_field(0, Var_13, 1) = ((MR_Box) (backend_libs__string_switch_util__next_free_hash_slot_5_p_0_1));
      MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_13, 3) = ((MR_Box) (NextSlot_11));
      MR_hl_field(0, Var_13, 4) = ((MR_Box) (TableSize_8));
    }
    mercury__require__expect_3_p_0(Var_13, (MR_String) "predicate \140backend_libs.string_switch_util.next_free_hash_slot\'/5", (MR_String) "overflow");
    {
      MR_Word TypeInfo_19_19;

      {
        TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_string_hash_slot_1));
        MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_CaseRep_16));
      }
      succeeded = mercury__map__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_19_19, Map_6, ((MR_Box) (NextSlot_11)));
    }
    if (!(succeeded))
    {
      MR_Word TypeInfo_23_23;
      MR_Word TypeInfo_25_25;

      {
        TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
        MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
        MR_hl_field(0, TypeInfo_23_23, 2) = ((MR_Box) (TypeInfo_for_CaseRep_16));
      }
      {
        TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_25_25, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
        MR_hl_field(0, TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_23_23));
      }
      succeeded = mercury__map__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_25_25, HomeMap_7, ((MR_Box) (NextSlot_11)));
    }
    if (succeeded)
    {
      MR_Integer next_value_of_LastUsed_9 = NextSlot_11;

      // direct tailcall eliminated
      ;
      LastUsed_9 = next_value_of_LastUsed_9;
      continue;
    }
    else
      *FreeSlot_10 = NextSlot_11;
    break;
  }
}

static void MR_CALL 
backend_libs__string_switch_util__follow_hash_chain_3_p_0(
  MR_Word TypeInfo_for_CaseRep_12,
  MR_Word Map_4,
  MR_Integer Slot_5,
  MR_Integer * LastSlot_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeInfo_15_15;
    MR_Integer NextSlot_8;
    MR_Word Var_10;
    MR_Box conv0_Var_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_string_hash_slot_1));
      MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_CaseRep_12));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_15_15, (MR_Word) (Map_4), Slot_5, &conv0_Var_10);
    Var_10 = ((MR_Word) (conv0_Var_10));
    NextSlot_8 = ((MR_Integer) ((MR_hl_field(0, Var_10, 1))));
    succeeded = (NextSlot_8 >= (MR_Integer) 0);
    if (succeeded)
      succeeded = mercury__map__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_15_15, Map_4, ((MR_Box) (NextSlot_8)));
    if (succeeded)
    {
      MR_Integer next_value_of_Slot_5 = NextSlot_8;

      // direct tailcall eliminated
      ;
      Slot_5 = next_value_of_Slot_5;
      continue;
    }
    else
      *LastSlot_6 = Slot_5;
    break;
  }
}

static void MR_CALL 
backend_libs__string_switch_util__string_hash_cases_14_p_0(
  MR_Word TypeInfo_for_CaseRep_61,
  MR_Word HeadVar__1_1,
  MR_Integer HashMask_2,
  MR_Word STATE_VARIABLE_HashMap4_0_3,
  MR_Word * STATE_VARIABLE_HashMap4_4,
  MR_Word STATE_VARIABLE_HashMap5_0_5,
  MR_Word * STATE_VARIABLE_HashMap5_6,
  MR_Word STATE_VARIABLE_HashMap6_0_7,
  MR_Word * STATE_VARIABLE_HashMap6_8,
  MR_Integer STATE_VARIABLE_NumCollisions4_0_9,
  MR_Integer * STATE_VARIABLE_NumCollisions4_10,
  MR_Integer STATE_VARIABLE_NumCollisions5_0_11,
  MR_Integer * STATE_VARIABLE_NumCollisions5_12,
  MR_Integer STATE_VARIABLE_NumCollisions6_0_13,
  MR_Integer * STATE_VARIABLE_NumCollisions6_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NumCollisions6_14 = STATE_VARIABLE_NumCollisions6_0_13;
      *STATE_VARIABLE_NumCollisions5_12 = STATE_VARIABLE_NumCollisions5_0_11;
      *STATE_VARIABLE_NumCollisions4_10 = STATE_VARIABLE_NumCollisions4_0_9;
      *STATE_VARIABLE_HashMap6_8 = STATE_VARIABLE_HashMap6_0_7;
      *STATE_VARIABLE_HashMap5_6 = STATE_VARIABLE_HashMap5_0_5;
      *STATE_VARIABLE_HashMap4_4 = STATE_VARIABLE_HashMap4_0_3;
    }
    else
    {
      MR_Word StrData_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word StrsDatas_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_HashMap4_1_55;
      MR_Word STATE_VARIABLE_HashMap5_1_56;
      MR_Word STATE_VARIABLE_HashMap6_1_57;
      MR_Integer STATE_VARIABLE_NumCollisions4_1_58;
      MR_Integer STATE_VARIABLE_NumCollisions5_1_59;
      MR_Integer STATE_VARIABLE_NumCollisions6_1_60;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_HashMap4_0_3;
      MR_Word next_value_of_STATE_VARIABLE_HashMap5_0_5;
      MR_Word next_value_of_STATE_VARIABLE_HashMap6_0_7;
      MR_Integer next_value_of_STATE_VARIABLE_NumCollisions4_0_9;
      MR_Integer next_value_of_STATE_VARIABLE_NumCollisions5_0_11;
      MR_Integer next_value_of_STATE_VARIABLE_NumCollisions6_0_13;

      backend_libs__string_switch_util__string_hash_case_14_p_0(TypeInfo_for_CaseRep_61, StrData_34, HashMask_2, STATE_VARIABLE_HashMap4_0_3, &STATE_VARIABLE_HashMap4_1_55, STATE_VARIABLE_HashMap5_0_5, &STATE_VARIABLE_HashMap5_1_56, STATE_VARIABLE_HashMap6_0_7, &STATE_VARIABLE_HashMap6_1_57, STATE_VARIABLE_NumCollisions4_0_9, &STATE_VARIABLE_NumCollisions4_1_58, STATE_VARIABLE_NumCollisions5_0_11, &STATE_VARIABLE_NumCollisions5_1_59, STATE_VARIABLE_NumCollisions6_0_13, &STATE_VARIABLE_NumCollisions6_1_60);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = StrsDatas_35;
      next_value_of_STATE_VARIABLE_HashMap4_0_3 = STATE_VARIABLE_HashMap4_1_55;
      next_value_of_STATE_VARIABLE_HashMap5_0_5 = STATE_VARIABLE_HashMap5_1_56;
      next_value_of_STATE_VARIABLE_HashMap6_0_7 = STATE_VARIABLE_HashMap6_1_57;
      next_value_of_STATE_VARIABLE_NumCollisions4_0_9 = STATE_VARIABLE_NumCollisions4_1_58;
      next_value_of_STATE_VARIABLE_NumCollisions5_0_11 = STATE_VARIABLE_NumCollisions5_1_59;
      next_value_of_STATE_VARIABLE_NumCollisions6_0_13 = STATE_VARIABLE_NumCollisions6_1_60;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_HashMap4_0_3 = next_value_of_STATE_VARIABLE_HashMap4_0_3;
      STATE_VARIABLE_HashMap5_0_5 = next_value_of_STATE_VARIABLE_HashMap5_0_5;
      STATE_VARIABLE_HashMap6_0_7 = next_value_of_STATE_VARIABLE_HashMap6_0_7;
      STATE_VARIABLE_NumCollisions4_0_9 = next_value_of_STATE_VARIABLE_NumCollisions4_0_9;
      STATE_VARIABLE_NumCollisions5_0_11 = next_value_of_STATE_VARIABLE_NumCollisions5_0_11;
      STATE_VARIABLE_NumCollisions6_0_13 = next_value_of_STATE_VARIABLE_NumCollisions6_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
backend_libs__string_switch_util__string_hash_case_14_p_0(
  MR_Word TypeInfo_for_CaseRep_67,
  MR_Word StrCaseRep_15,
  MR_Integer HashMask_16,
  MR_Word STATE_VARIABLE_HashMap4_0_31,
  MR_Word * STATE_VARIABLE_HashMap4_32,
  MR_Word STATE_VARIABLE_HashMap5_0_33,
  MR_Word * STATE_VARIABLE_HashMap5_34,
  MR_Word STATE_VARIABLE_HashMap6_0_35,
  MR_Word * STATE_VARIABLE_HashMap6_36,
  MR_Integer STATE_VARIABLE_NumCollisions4_0_37,
  MR_Integer * STATE_VARIABLE_NumCollisions4_38,
  MR_Integer STATE_VARIABLE_NumCollisions5_0_39,
  MR_Integer * STATE_VARIABLE_NumCollisions5_40,
  MR_Integer STATE_VARIABLE_NumCollisions6_0_41,
  MR_Integer * STATE_VARIABLE_NumCollisions6_42)
{
  MR_bool succeeded;
  MR_String String_23 = ((MR_String) ((MR_hl_field(0, StrCaseRep_15, 0))));
  MR_Integer HashVal4_25;
  MR_Integer HashVal5_26;
  MR_Integer HashVal6_27;
  MR_Integer Var_43;
  MR_Integer Var_44;
  MR_Integer Var_45;
  MR_Word TypeInfo_73_73;
  MR_Word OldEntries4_28;
  MR_Word TypeInfo_71_71;
  MR_Box conv0_OldEntries4_28;
  MR_Word TypeInfo_91_91;
  MR_Word OldEntries5_29;
  MR_Word TypeInfo_89_89;
  MR_Box conv3_OldEntries5_29;
  MR_Word TypeInfo_109_109;
  MR_Word OldEntries6_30;
  MR_Word TypeInfo_107_107;
  MR_Box conv6_OldEntries6_30;

  Var_43 = mercury__string__hash4_1_f_0(String_23);
  HashVal4_25 = (Var_43 & HashMask_16);
  Var_44 = mercury__string__hash5_1_f_0(String_23);
  HashVal5_26 = (Var_44 & HashMask_16);
  Var_45 = mercury__string__hash6_1_f_0(String_23);
  HashVal6_27 = (Var_45 & HashMask_16);
  {
    TypeInfo_71_71 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_71_71, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(0, TypeInfo_71_71, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
    MR_hl_field(0, TypeInfo_71_71, 2) = ((MR_Box) (TypeInfo_for_CaseRep_67));
  }
  {
    TypeInfo_73_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_73_73, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_73_73, 1) = ((MR_Box) (TypeInfo_71_71));
  }
  succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_73_73, (MR_Word) (STATE_VARIABLE_HashMap4_0_31), HashVal4_25, &conv0_OldEntries4_28);
  if (succeeded)
  {
    OldEntries4_28 = ((MR_Word) (conv0_OldEntries4_28));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_46;
    MR_Word conv1_STATE_VARIABLE_HashMap4_32;

    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (StrCaseRep_15));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (OldEntries4_28));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_73_73, HashVal4_25, ((MR_Box) (Var_46)), (MR_Word) (STATE_VARIABLE_HashMap4_0_31), &conv1_STATE_VARIABLE_HashMap4_32);
    *STATE_VARIABLE_HashMap4_32 = (MR_Word) (conv1_STATE_VARIABLE_HashMap4_32);
    *STATE_VARIABLE_NumCollisions4_38 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumCollisions4_0_37 + (MR_Unsigned) 1);
  }
  else
  {
    MR_Word TypeInfo_83_83;
    MR_Word TypeInfo_85_85;
    MR_Word Var_50;
    MR_Word conv2_STATE_VARIABLE_HashMap4_32;

    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (StrCaseRep_15));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      TypeInfo_83_83 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_83_83, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(0, TypeInfo_83_83, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
      MR_hl_field(0, TypeInfo_83_83, 2) = ((MR_Box) (TypeInfo_for_CaseRep_67));
    }
    {
      TypeInfo_85_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_85_85, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(0, TypeInfo_85_85, 1) = ((MR_Box) (TypeInfo_83_83));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_85_85, HashVal4_25, ((MR_Box) (Var_50)), (MR_Word) (STATE_VARIABLE_HashMap4_0_31), &conv2_STATE_VARIABLE_HashMap4_32);
    *STATE_VARIABLE_HashMap4_32 = (MR_Word) (conv2_STATE_VARIABLE_HashMap4_32);
    *STATE_VARIABLE_NumCollisions4_38 = STATE_VARIABLE_NumCollisions4_0_37;
  }
  {
    TypeInfo_89_89 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_89_89, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(0, TypeInfo_89_89, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
    MR_hl_field(0, TypeInfo_89_89, 2) = ((MR_Box) (TypeInfo_for_CaseRep_67));
  }
  {
    TypeInfo_91_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_91_91, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_91_91, 1) = ((MR_Box) (TypeInfo_89_89));
  }
  succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_91_91, (MR_Word) (STATE_VARIABLE_HashMap5_0_33), HashVal5_26, &conv3_OldEntries5_29);
  if (succeeded)
  {
    OldEntries5_29 = ((MR_Word) (conv3_OldEntries5_29));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_53;
    MR_Word conv4_STATE_VARIABLE_HashMap5_34;

    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (StrCaseRep_15));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (OldEntries5_29));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_91_91, HashVal5_26, ((MR_Box) (Var_53)), (MR_Word) (STATE_VARIABLE_HashMap5_0_33), &conv4_STATE_VARIABLE_HashMap5_34);
    *STATE_VARIABLE_HashMap5_34 = (MR_Word) (conv4_STATE_VARIABLE_HashMap5_34);
    *STATE_VARIABLE_NumCollisions5_40 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumCollisions5_0_39 + (MR_Unsigned) 1);
  }
  else
  {
    MR_Word TypeInfo_101_101;
    MR_Word TypeInfo_103_103;
    MR_Word Var_57;
    MR_Word conv5_STATE_VARIABLE_HashMap5_34;

    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (StrCaseRep_15));
      MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      TypeInfo_101_101 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_101_101, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(0, TypeInfo_101_101, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
      MR_hl_field(0, TypeInfo_101_101, 2) = ((MR_Box) (TypeInfo_for_CaseRep_67));
    }
    {
      TypeInfo_103_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_103_103, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(0, TypeInfo_103_103, 1) = ((MR_Box) (TypeInfo_101_101));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_103_103, HashVal5_26, ((MR_Box) (Var_57)), (MR_Word) (STATE_VARIABLE_HashMap5_0_33), &conv5_STATE_VARIABLE_HashMap5_34);
    *STATE_VARIABLE_HashMap5_34 = (MR_Word) (conv5_STATE_VARIABLE_HashMap5_34);
    *STATE_VARIABLE_NumCollisions5_40 = STATE_VARIABLE_NumCollisions5_0_39;
  }
  {
    TypeInfo_107_107 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_107_107, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(0, TypeInfo_107_107, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
    MR_hl_field(0, TypeInfo_107_107, 2) = ((MR_Box) (TypeInfo_for_CaseRep_67));
  }
  {
    TypeInfo_109_109 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_109_109, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_109_109, 1) = ((MR_Box) (TypeInfo_107_107));
  }
  succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_109_109, (MR_Word) (STATE_VARIABLE_HashMap6_0_35), HashVal6_27, &conv6_OldEntries6_30);
  if (succeeded)
  {
    OldEntries6_30 = ((MR_Word) (conv6_OldEntries6_30));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_60;
    MR_Word conv7_STATE_VARIABLE_HashMap6_36;

    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) (StrCaseRep_15));
      MR_hl_field(1, Var_60, 1) = ((MR_Box) (OldEntries6_30));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_109_109, HashVal6_27, ((MR_Box) (Var_60)), (MR_Word) (STATE_VARIABLE_HashMap6_0_35), &conv7_STATE_VARIABLE_HashMap6_36);
    *STATE_VARIABLE_HashMap6_36 = (MR_Word) (conv7_STATE_VARIABLE_HashMap6_36);
    *STATE_VARIABLE_NumCollisions6_42 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumCollisions6_0_41 + (MR_Unsigned) 1);
  }
  else
  {
    MR_Word TypeInfo_119_119;
    MR_Word TypeInfo_121_121;
    MR_Word Var_64;
    MR_Word conv8_STATE_VARIABLE_HashMap6_36;

    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (StrCaseRep_15));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      TypeInfo_119_119 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_119_119, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(0, TypeInfo_119_119, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
      MR_hl_field(0, TypeInfo_119_119, 2) = ((MR_Box) (TypeInfo_for_CaseRep_67));
    }
    {
      TypeInfo_121_121 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_121_121, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(0, TypeInfo_121_121, 1) = ((MR_Box) (TypeInfo_119_119));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_121_121, HashVal6_27, ((MR_Box) (Var_64)), (MR_Word) (STATE_VARIABLE_HashMap6_0_35), &conv8_STATE_VARIABLE_HashMap6_36);
    *STATE_VARIABLE_HashMap6_36 = (MR_Word) (conv8_STATE_VARIABLE_HashMap6_36);
    *STATE_VARIABLE_NumCollisions6_42 = STATE_VARIABLE_NumCollisions6_0_41;
  }
}

void MR_CALL 
backend_libs__string_switch_util__build_str_case_id_list_3_p_0(
  MR_Word TaggedCases_4,
  MR_Integer * MaxCaseNum_5,
  MR_Word * StrCaseIds_6)
{
  MR_Word StrCaseIdCord_7;
  MR_Word Var_9;

  Var_9 = mercury__cord__init_0_f_0((MR_Word) (&backend_libs__string_switch_util_scalar_common_1[0]));
  backend_libs__string_switch_util__build_str_case_id_cord_5_p_0(TaggedCases_4, (MR_Integer) -1, MaxCaseNum_5, Var_9, &StrCaseIdCord_7);
  *StrCaseIds_6 = mercury__cord__list_1_f_0((MR_Word) (&backend_libs__string_switch_util_scalar_common_1[0]), StrCaseIdCord_7);
}

static void MR_CALL 
backend_libs__string_switch_util__build_str_case_id_cord_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_StrCaseIdCord_12;

  backend_libs__string_switch_util__add_to_strs_case_ids_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_StrCaseIdCord_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_StrCaseIdCord_12));
}

static void MR_CALL 
backend_libs__string_switch_util__build_str_case_id_cord_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_MaxCaseNum_0_2,
  MR_Integer * STATE_VARIABLE_MaxCaseNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = HeadVar__4_4;
      *STATE_VARIABLE_MaxCaseNum_3 = STATE_VARIABLE_MaxCaseNum_0_2;
    }
    else
    {
      MR_Word TaggedCase_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word TaggedCases_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word MainTaggedConsId_16 = ((MR_Word) ((MR_hl_field(0, TaggedCase_12, 0))));
      MR_Word OtherTaggedConsIds_17 = ((MR_Word) ((MR_hl_field(0, TaggedCase_12, 1))));
      MR_Word CaseId_18 = ((MR_Word) ((MR_hl_field(0, TaggedCase_12, 2))));
      MR_Integer CaseNum_20 = (MR_Integer) (CaseId_18);
      MR_Integer STATE_VARIABLE_MaxCaseNum_1_25;
      MR_Word STATE_VARIABLE_StrCaseIdCord_1_26;
      MR_Word Var_27;
      MR_Word STATE_VARIABLE_StrCaseIdCord_2_28;
      MR_Box conv1_STATE_VARIABLE_StrCaseIdCord_2_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_MaxCaseNum_0_2;
      MR_Word next_value_of_HeadVar__4_4;

      mercury__int__max_3_p_0(CaseNum_20, STATE_VARIABLE_MaxCaseNum_0_2, &STATE_VARIABLE_MaxCaseNum_1_25);
      backend_libs__string_switch_util__add_to_strs_case_ids_4_p_0(CaseId_18, MainTaggedConsId_16, HeadVar__4_4, &STATE_VARIABLE_StrCaseIdCord_1_26);
      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_27, 0) = ((MR_Box) (&backend_libs__string_switch_util_scalar_common_4[0]));
        MR_hl_field(0, Var_27, 1) = ((MR_Box) (backend_libs__string_switch_util__build_str_case_id_cord_5_p_0_1));
        MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_27, 3) = ((MR_Box) (CaseId_18));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&backend_libs__string_switch_util_scalar_common_2[1]), Var_27, OtherTaggedConsIds_17, ((MR_Box) (STATE_VARIABLE_StrCaseIdCord_1_26)), &conv1_STATE_VARIABLE_StrCaseIdCord_2_28);
      STATE_VARIABLE_StrCaseIdCord_2_28 = ((MR_Word) (conv1_STATE_VARIABLE_StrCaseIdCord_2_28));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TaggedCases_13;
      next_value_of_STATE_VARIABLE_MaxCaseNum_0_2 = STATE_VARIABLE_MaxCaseNum_1_25;
      next_value_of_HeadVar__4_4 = STATE_VARIABLE_StrCaseIdCord_2_28;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaxCaseNum_0_2 = next_value_of_STATE_VARIABLE_MaxCaseNum_0_2;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
backend_libs__string_switch_util__add_to_strs_case_ids_4_p_0(
  MR_Word CaseId_5,
  MR_Word TaggedConsId_6,
  MR_Word STATE_VARIABLE_StrCaseIdCord_0_11,
  MR_Word * STATE_VARIABLE_StrCaseIdCord_12)
{
  MR_bool succeeded;
  MR_Word ConsTag_9 = ((MR_Word) ((MR_hl_field(0, TaggedConsId_6, 1))));
  MR_String String_10;

  succeeded = ((((MR_tag((MR_Word) ConsTag_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsTag_9, 0)))) == (MR_Integer) 0)));
  if (succeeded)
  {
    String_10 = ((MR_String) ((MR_hl_field(3, ConsTag_9, 1))));
    {
      MR_Word Var_13;

      {
        Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_13, 0) = ((MR_Box) (String_10));
        MR_hl_field(0, Var_13, 1) = ((MR_Box) (CaseId_5));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&backend_libs__string_switch_util_scalar_common_1[0]), ((MR_Box) (Var_13)), STATE_VARIABLE_StrCaseIdCord_0_11, STATE_VARIABLE_StrCaseIdCord_12);
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.string_switch_util.add_to_strs_case_ids\'/4", (MR_String) "non-string tag");
      return;
    }
}

void MR_CALL 
backend_libs__string_switch_util__chase_any_stick_in_trie_4_p_0(
  MR_Word TrieNode_5,
  MR_Word * ChoicePairs_6,
  MR_Word * StickCodeUnits_7,
  MR_Word * TrieNodeAfterStick_8)
{
  MR_bool succeeded;
  MR_Word ChoiceMap_10 = ((MR_Word) ((MR_hl_field(1, TrieNode_5, 1))));
  MR_Word MaybeEnd_11 = ((MR_Word) ((MR_hl_field(1, TrieNode_5, 2))));
  MR_Word OneChoicePair_12;
  MR_Word Var_23;

  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_trie_node_0), ChoiceMap_10, ChoicePairs_6);
  succeeded = (MaybeEnd_11 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = (*ChoicePairs_6 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      OneChoicePair_12 = ((MR_Word) ((MR_hl_field(1, *ChoicePairs_6, 0))));
      Var_23 = ((MR_Word) ((MR_hl_field(1, *ChoicePairs_6, 1))));
      succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Integer OneCodeUnit_13 = ((MR_Integer) ((MR_hl_field(0, OneChoicePair_12, 0))));
    MR_Word OneSubTrieNode_14 = ((MR_Word) ((MR_hl_field(0, OneChoicePair_12, 1))));

    if (((MR_tag((MR_Word) OneSubTrieNode_14)) == (MR_Integer) 1))
    {
      MR_Word SubStickCodeUnits_22;
      MR_Word _SubChoicePairs_21;

      backend_libs__string_switch_util__chase_any_stick_in_trie_4_p_0(OneSubTrieNode_14, &_SubChoicePairs_21, &SubStickCodeUnits_22, TrieNodeAfterStick_8);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *StickCodeUnits_7 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (OneCodeUnit_13));
        MR_hl_field(1, base, 1) = ((MR_Box) (SubStickCodeUnits_22));
      }
    }
    else
    {
      *StickCodeUnits_7 = (MR_Word) ((MR_Unsigned) 0U);
      *TrieNodeAfterStick_8 = TrieNode_5;
    }
  }
  else
  {
    *StickCodeUnits_7 = (MR_Word) ((MR_Unsigned) 0U);
    *TrieNodeAfterStick_8 = TrieNode_5;
  }
}

void MR_CALL 
backend_libs__string_switch_util__create_trie_3_p_0(
  MR_Word Encoding_4,
  MR_Word StrsCaseIds_5,
  MR_Word * TopTrieNode_6)
{
  if ((StrsCaseIds_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_14;

    Var_14 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_trie_node_0));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *TopTrieNode_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_14));
      MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word HeadStrCaseId_7 = ((MR_Word) ((MR_hl_field(1, StrsCaseIds_5, 0))));
    MR_Word TailStrCaseIds_8 = ((MR_Word) ((MR_hl_field(1, StrsCaseIds_5, 1))));
    MR_String HeadStr_9 = ((MR_String) ((MR_hl_field(0, HeadStrCaseId_7, 0))));
    MR_Word HeadCaseId_10 = ((MR_Word) ((MR_hl_field(0, HeadStrCaseId_7, 1))));
    MR_Word HeadStrCodeUnits_11;
    MR_Word TopTrieNode1_12;

    backend_libs__string_encoding__to_code_unit_list_in_encoding_3_p_0(Encoding_4, HeadStr_9, &HeadStrCodeUnits_11);
    {
      TopTrieNode1_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TopTrieNode1_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, TopTrieNode1_12, 1) = ((MR_Box) (HeadStrCodeUnits_11));
      MR_hl_field(0, TopTrieNode1_12, 2) = ((MR_Box) (HeadCaseId_10));
    }
    backend_libs__string_switch_util__insert_cases_into_trie_4_p_0(Encoding_4, TailStrCaseIds_8, TopTrieNode1_12, TopTrieNode_6);
  }
}

static MR_bool MR_CALL 
backend_libs__string_switch_util__insert_cases_into_trie_4_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__string_switch_util__IntroducedFrom__pred__insert_case_into_trie_node__204__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__string_switch_util__insert_cases_into_trie_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__string_switch_util__IntroducedFrom__pred__insert_case_into_trie_node__218__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
backend_libs__string_switch_util__insert_cases_into_trie_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_TrieNode_0_3,
  MR_Word * STATE_VARIABLE_TrieNode_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TrieNode_4 = STATE_VARIABLE_TrieNode_0_3;
    else
    {
      MR_Word Case_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Cases_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_String Str_13 = ((MR_String) ((MR_hl_field(0, Case_10, 0))));
      MR_Word CaseId_14 = ((MR_Word) ((MR_hl_field(0, Case_10, 1))));
      MR_Word StrCodeUnits_15;
      MR_Word STATE_VARIABLE_TrieNode_1_19;
      MR_Word ChoiceMap0_23;
      MR_Word MaybeEnd0_24;
      MR_Word ChoiceMap_29;
      MR_Word MaybeEnd_30;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_TrieNode_0_3;

      backend_libs__string_encoding__to_code_unit_list_in_encoding_3_p_0(HeadVar__1_1, Str_13, &StrCodeUnits_15);
      if (((MR_tag((MR_Word) STATE_VARIABLE_TrieNode_0_3)) == (MR_Integer) 1))
      {
        MR_Word ChoiceMatched_28 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TrieNode_0_3, 0))));
        MR_Word Var_35;

        ChoiceMap0_23 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TrieNode_0_3, 1))));
        MaybeEnd0_24 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TrieNode_0_3, 2))));
        {
          Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_35, 0) = ((MR_Box) (&backend_libs__string_switch_util_scalar_common_3[0]));
          MR_hl_field(0, Var_35, 1) = ((MR_Box) (backend_libs__string_switch_util__insert_cases_into_trie_4_p_0_1));
          MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_35, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_35, 4) = ((MR_Box) (ChoiceMatched_28));
        }
        mercury__require__expect_3_p_0(Var_35, (MR_String) "predicate \140backend_libs.string_switch_util.insert_case_into_trie_node\'/5", (MR_String) "ChoiceMatched didn\'t");
      }
      else
      {
        MR_Word LeafMatched_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TrieNode_0_3, 0))));
        MR_Word LeafNotYetMatched_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TrieNode_0_3, 1))));
        MR_Word LeafCaseId_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TrieNode_0_3, 2))));
        MR_Word Var_31;

        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_31, 0) = ((MR_Box) (&backend_libs__string_switch_util_scalar_common_3[0]));
          MR_hl_field(0, Var_31, 1) = ((MR_Box) (backend_libs__string_switch_util__insert_cases_into_trie_4_p_0_2));
          MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_31, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_31, 4) = ((MR_Box) (LeafMatched_20));
        }
        mercury__require__expect_3_p_0(Var_31, (MR_String) "predicate \140backend_libs.string_switch_util.insert_case_into_trie_node\'/5", (MR_String) "LeafMatched didn\'t");
        if ((LeafNotYetMatched_21 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          ChoiceMap0_23 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_trie_node_0));
          {
            MaybeEnd0_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeEnd0_24, 0) = ((MR_Box) (LeafCaseId_22));
          }
        }
        else
        {
          MR_Integer LeafFirstCodeUnit_25 = ((MR_Integer) ((MR_hl_field(1, LeafNotYetMatched_21, 0))));
          MR_Word LeafLaterCodeUnits_26 = ((MR_Word) ((MR_hl_field(1, LeafNotYetMatched_21, 1))));
          MR_Word NewLeaf_27;
          MR_Word Var_34;

          {
            Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_34, 0) = ((MR_Box) (LeafFirstCodeUnit_25));
            MR_hl_field(1, Var_34, 1) = ((MR_Box) (LeafMatched_20));
          }
          {
            NewLeaf_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, NewLeaf_27, 0) = ((MR_Box) (Var_34));
            MR_hl_field(0, NewLeaf_27, 1) = ((MR_Box) (LeafLaterCodeUnits_26));
            MR_hl_field(0, NewLeaf_27, 2) = ((MR_Box) (LeafCaseId_22));
          }
          ChoiceMap0_23 = mercury__map__singleton_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_trie_node_0), ((MR_Box) (LeafFirstCodeUnit_25)), ((MR_Box) (NewLeaf_27)));
          MaybeEnd0_24 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
      if ((StrCodeUnits_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        ChoiceMap_29 = ChoiceMap0_23;
        if ((MaybeEnd0_24 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MaybeEnd_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeEnd_30, 0) = ((MR_Box) (CaseId_14));
          }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.string_switch_util.insert_case_into_trie_choice\'/7", (MR_String) "two strings end at same trie node");
            return;
          }
      }
      else
      {
        MR_Integer InsertFirstCodeUnit_43 = ((MR_Integer) ((MR_hl_field(1, StrCodeUnits_15, 0))));
        MR_Word InsertLaterCodeUnits_44 = ((MR_Word) ((MR_hl_field(1, StrCodeUnits_15, 1))));
        MR_Word SubTrieNode0_45;
        MR_Box conv0_SubTrieNode0_45;

        MaybeEnd_30 = MaybeEnd0_24;
        succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_trie_node_0), ChoiceMap0_23, InsertFirstCodeUnit_43, &conv0_SubTrieNode0_45);
        if (succeeded)
        {
          SubTrieNode0_45 = ((MR_Word) (conv0_SubTrieNode0_45));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word SubTrieNode_46;
          MR_Word Var_49;

          {
            Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_49, 0) = ((MR_Box) (InsertFirstCodeUnit_43));
            MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          backend_libs__string_switch_util__insert_case_into_trie_node_5_p_0(Var_49, InsertLaterCodeUnits_44, CaseId_14, SubTrieNode0_45, &SubTrieNode_46);
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_trie_node_0), InsertFirstCodeUnit_43, ((MR_Box) (SubTrieNode_46)), ChoiceMap0_23, &ChoiceMap_29);
        }
        else
        {
          MR_Word Var_50;
          MR_Word SubTrieNode_51;

          {
            Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_50, 0) = ((MR_Box) (InsertFirstCodeUnit_43));
            MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            SubTrieNode_51 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SubTrieNode_51, 0) = ((MR_Box) (Var_50));
            MR_hl_field(0, SubTrieNode_51, 1) = ((MR_Box) (InsertLaterCodeUnits_44));
            MR_hl_field(0, SubTrieNode_51, 2) = ((MR_Box) (CaseId_14));
          }
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_trie_node_0), InsertFirstCodeUnit_43, ((MR_Box) (SubTrieNode_51)), ChoiceMap0_23, &ChoiceMap_29);
        }
      }
      {
        STATE_VARIABLE_TrieNode_1_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_TrieNode_1_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, STATE_VARIABLE_TrieNode_1_19, 1) = ((MR_Box) (ChoiceMap_29));
        MR_hl_field(1, STATE_VARIABLE_TrieNode_1_19, 2) = ((MR_Box) (MaybeEnd_30));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Cases_11;
      next_value_of_STATE_VARIABLE_TrieNode_0_3 = STATE_VARIABLE_TrieNode_1_19;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_TrieNode_0_3 = next_value_of_STATE_VARIABLE_TrieNode_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
backend_libs__string_switch_util__insert_case_into_trie_node_5_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__string_switch_util__IntroducedFrom__pred__insert_case_into_trie_node__204__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__string_switch_util__insert_case_into_trie_node_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__string_switch_util__IntroducedFrom__pred__insert_case_into_trie_node__218__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
backend_libs__string_switch_util__insert_case_into_trie_node_5_p_0(
  MR_Word InsertMatched_6,
  MR_Word InsertNotYetMatched_7,
  MR_Word InsertCaseId_8,
  MR_Word TrieNode0_9,
  MR_Word * TrieNode_10)
{
  MR_bool succeeded;
  MR_Word ChoiceMap0_14;
  MR_Word MaybeEnd0_15;
  MR_Word ChoiceMap_20;
  MR_Word MaybeEnd_21;

  if (((MR_tag((MR_Word) TrieNode0_9)) == (MR_Integer) 1))
  {
    MR_Word ChoiceMatched_19 = ((MR_Word) ((MR_hl_field(1, TrieNode0_9, 0))));
    MR_Word Var_26;

    ChoiceMap0_14 = ((MR_Word) ((MR_hl_field(1, TrieNode0_9, 1))));
    MaybeEnd0_15 = ((MR_Word) ((MR_hl_field(1, TrieNode0_9, 2))));
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_26, 0) = ((MR_Box) (&backend_libs__string_switch_util_scalar_common_3[0]));
      MR_hl_field(0, Var_26, 1) = ((MR_Box) (backend_libs__string_switch_util__insert_case_into_trie_node_5_p_0_1));
      MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_26, 3) = ((MR_Box) (InsertMatched_6));
      MR_hl_field(0, Var_26, 4) = ((MR_Box) (ChoiceMatched_19));
    }
    mercury__require__expect_3_p_0(Var_26, (MR_String) "predicate \140backend_libs.string_switch_util.insert_case_into_trie_node\'/5", (MR_String) "ChoiceMatched didn\'t");
  }
  else
  {
    MR_Word LeafMatched_11 = ((MR_Word) ((MR_hl_field(0, TrieNode0_9, 0))));
    MR_Word LeafNotYetMatched_12 = ((MR_Word) ((MR_hl_field(0, TrieNode0_9, 1))));
    MR_Word LeafCaseId_13 = ((MR_Word) ((MR_hl_field(0, TrieNode0_9, 2))));
    MR_Word Var_22;

    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_22, 0) = ((MR_Box) (&backend_libs__string_switch_util_scalar_common_3[0]));
      MR_hl_field(0, Var_22, 1) = ((MR_Box) (backend_libs__string_switch_util__insert_case_into_trie_node_5_p_0_2));
      MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_22, 3) = ((MR_Box) (InsertMatched_6));
      MR_hl_field(0, Var_22, 4) = ((MR_Box) (LeafMatched_11));
    }
    mercury__require__expect_3_p_0(Var_22, (MR_String) "predicate \140backend_libs.string_switch_util.insert_case_into_trie_node\'/5", (MR_String) "LeafMatched didn\'t");
    if ((LeafNotYetMatched_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      ChoiceMap0_14 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_trie_node_0));
      {
        MaybeEnd0_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeEnd0_15, 0) = ((MR_Box) (LeafCaseId_13));
      }
    }
    else
    {
      MR_Integer LeafFirstCodeUnit_16 = ((MR_Integer) ((MR_hl_field(1, LeafNotYetMatched_12, 0))));
      MR_Word LeafLaterCodeUnits_17 = ((MR_Word) ((MR_hl_field(1, LeafNotYetMatched_12, 1))));
      MR_Word NewLeaf_18;
      MR_Word Var_25;

      {
        Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_25, 0) = ((MR_Box) (LeafFirstCodeUnit_16));
        MR_hl_field(1, Var_25, 1) = ((MR_Box) (LeafMatched_11));
      }
      {
        NewLeaf_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NewLeaf_18, 0) = ((MR_Box) (Var_25));
        MR_hl_field(0, NewLeaf_18, 1) = ((MR_Box) (LeafLaterCodeUnits_17));
        MR_hl_field(0, NewLeaf_18, 2) = ((MR_Box) (LeafCaseId_13));
      }
      ChoiceMap0_14 = mercury__map__singleton_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_trie_node_0), ((MR_Box) (LeafFirstCodeUnit_16)), ((MR_Box) (NewLeaf_18)));
      MaybeEnd0_15 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
  if ((InsertNotYetMatched_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    ChoiceMap_20 = ChoiceMap0_14;
    if ((MaybeEnd0_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeEnd_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeEnd_21, 0) = ((MR_Box) (InsertCaseId_8));
      }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.string_switch_util.insert_case_into_trie_choice\'/7", (MR_String) "two strings end at same trie node");
        return;
      }
  }
  else
  {
    MR_Integer InsertFirstCodeUnit_35 = ((MR_Integer) ((MR_hl_field(1, InsertNotYetMatched_7, 0))));
    MR_Word InsertLaterCodeUnits_36 = ((MR_Word) ((MR_hl_field(1, InsertNotYetMatched_7, 1))));
    MR_Word SubTrieNode0_37;
    MR_Box conv0_SubTrieNode0_37;

    MaybeEnd_21 = MaybeEnd0_15;
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_trie_node_0), ChoiceMap0_14, InsertFirstCodeUnit_35, &conv0_SubTrieNode0_37);
    if (succeeded)
    {
      SubTrieNode0_37 = ((MR_Word) (conv0_SubTrieNode0_37));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word SubTrieNode_38;
      MR_Word Var_41;

      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = ((MR_Box) (InsertFirstCodeUnit_35));
        MR_hl_field(1, Var_41, 1) = ((MR_Box) (InsertMatched_6));
      }
      backend_libs__string_switch_util__insert_case_into_trie_node_5_p_0(Var_41, InsertLaterCodeUnits_36, InsertCaseId_8, SubTrieNode0_37, &SubTrieNode_38);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_trie_node_0), InsertFirstCodeUnit_35, ((MR_Box) (SubTrieNode_38)), ChoiceMap0_14, &ChoiceMap_20);
    }
    else
    {
      MR_Word Var_42;
      MR_Word SubTrieNode_43;

      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) (InsertFirstCodeUnit_35));
        MR_hl_field(1, Var_42, 1) = ((MR_Box) (InsertMatched_6));
      }
      {
        SubTrieNode_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SubTrieNode_43, 0) = ((MR_Box) (Var_42));
        MR_hl_field(0, SubTrieNode_43, 1) = ((MR_Box) (InsertLaterCodeUnits_36));
        MR_hl_field(0, SubTrieNode_43, 2) = ((MR_Box) (InsertCaseId_8));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_trie_node_0), InsertFirstCodeUnit_35, ((MR_Box) (SubTrieNode_43)), ChoiceMap0_14, &ChoiceMap_20);
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *TrieNode_10 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (InsertMatched_6));
    MR_hl_field(1, base, 1) = ((MR_Box) (ChoiceMap_20));
    MR_hl_field(1, base, 2) = ((MR_Box) (MaybeEnd_21));
  }
}

static MR_bool MR_CALL 
backend_libs__string_switch_util____Unify____string_case_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__string_switch_util____Unify____string_case_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__string_switch_util____Compare____string_case_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__string_switch_util____Compare____string_case_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__string_switch_util____Unify____string_hash_slot_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = backend_libs__string_switch_util____Unify____string_hash_slot_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
backend_libs__string_switch_util____Compare____string_hash_slot_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__string_switch_util____Compare____string_hash_slot_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__string_switch_util____Unify____table_size_upgrade_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__string_switch_util____Unify____table_size_upgrade_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__string_switch_util____Compare____table_size_upgrade_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__string_switch_util____Compare____table_size_upgrade_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__string_switch_util____Unify____trie_node_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__string_switch_util____Unify____trie_node_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__string_switch_util____Compare____trie_node_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__string_switch_util____Compare____trie_node_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__backend_libs__string_switch_util__init(void)
{
}

void mercury__backend_libs__string_switch_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_string_case_id_0);
  MR_register_type_ctor_info(&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_string_hash_slot_1);
  MR_register_type_ctor_info(&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_table_size_upgrade_0);
  MR_register_type_ctor_info(&backend_libs__string_switch_util__backend_libs__string_switch_util__type_ctor_info_trie_node_0);
}

void mercury__backend_libs__string_switch_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__string_switch_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module backend_libs.string_switch_util.
